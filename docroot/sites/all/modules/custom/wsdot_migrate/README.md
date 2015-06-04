## Configuring migration

Any environment in which migration needs to be run must have access to a MySQL
database server containing the source data. Any such environment should have
the following (with the real MySQL credentials substituted) in its local
settings.php:

```PHP
$databases['migrate'] = array(
  'default' => array(
    'driver' => 'mysql',
    'database' => 'cmedatabase',
    'username' => 'root',
    'password' => 'mysqlpassword',
    'host' => '12.34.56.78',
    'port' => 3306,
  ),
);
```

The WSDOT migrations are implemented by the wsdot_migrate module. Enabling this
module

`drush en -y wsdot_migrate`

will implicitly enable the migrate and migrate_extras modules if necessary, 
based on the dependencies in the .info file. It is also recommended to enable
the UI:

`drush en -y migrate_ui`

which provides a dashboard at /admin/content/migrate.

## Architecture

Migrations are [registered in `wsdot_migrate_migrate_api()`](https://www.drupal.org/node/1824884),
in wsdot.migrate.inc. Of particular note are the node migration arguments that
are custom to this project:

- **type_guid** - An array of TemplateGUID values from the legacy Node table,
representing the types of content being imported by this migration. 
- **destination_type** - The machine_name of the Drupal content type to populate.
- **earliest_date** (optional) - A date string in YYYY-MM-DD format - if
provided, only content with a CreatedWhen timestamp since that date will be 
imported for this content type. If omitted, all published content of the type
will be imported.

WSDOTMigrationBase is a common base class for all migrations - it is a best
practice to use such an intermediate class for any configuration or methods to
be shared across migration types. Thus far, we've only used it to define common
source options, but it is available should there be a need for, say, a shared
utility function.

WSDOTNode is the base class for all the node migrations - it contains the
query (parameterized by the `hook_migrate_api()` arguments above), common field
mappings, and common processing in `prepareRow()`. Interesting aspects of this
query:

- Each piece of content being imported has two Node rows. The one carrying the
TemplateGUID we're matching on to identify the content type is our "base" row, and
for most Node table field mappings we use the data from this row. Its FollowGUID
points a second Node row - the NodeId of this row is the one that related resource
and property data is joined to. Also, the Name field of this row is part of the
legacy URL, thus needed to build the Drupal alias so we can maintain the old
paths.
- The Node table contains multiple revisions of the same content item. We
identify the "current" revision by a NULL ArchiveSourceGUID.
- We are importing only published content - ApprovalStatus = 1.
- We filter by date only when the earliest_date argument is present.

Beyond the Node table itself, in `prepareRow()` we draw content from these
related tables:

- **NodeProperty** - Type-specific properties, much like Drupal custom fields.
- **NodePlaceholderContent** - This contains the main content of each node, in
'HTML' properties. It also includes control properties - the HTML content
embeds specially-formatted placeholders representing links and embedded images,
which refer to these control properties, which in turn link to resources (below).
- **NodeResource** - This holds URL resource references from NodePlaceholderContent,
as well as providing a bridge between file references in NodePlaceholderContent 
and the actual file content in BlobTable.

[user and file migration info] 

## Insertion points

Here are the areas you are most likely to want to make some tweaks.

[In addition to the general descriptions here, point out how to register new 
migrations for this project, any particularly likely places you can anticipate 
changes being made, etc.]

### Altering mappings
Field mappings are created with `addFieldMapping(‘destination_field’, ‘source_field’)`, 
and additional behavior can be added to this mappings by chaining methods like 
`->sourceMigration()`, `->callbacks()`, etc.

### Manipulating data during migration

There are three key points at which the incoming data may be massaged along the 
way.

#### Callbacks

If you add

`->callbacks(array($this, ‘valueFilter’))`

to a field mapping, the `valueFilter` method in your migration class will be 
called during the `applyMappings()` step – between `prepareRow()` and `prepare()` 
(see below). This is the preferred place to make a one-to-one transformation of 
a single field (with no reference to any other data).

```PHP
protected function valueFilter($value) {
  return $value/1000;
}
```

#### prepareRow

This method is called immediately after the source data is retrieved, and is the 
first opportunity to manipulate the raw data. Use `prepareRow()` for any of the 
following cases:
1.	You need to reject an input row, based on some condition not easily 
incorporated into the source query. To do this, simply return FALSE.
2.	To add data to the source row, either by constructing it from data present 
in the original source row or by pulling related data from elsewhere.
3.	To manipulate a source field based on other data in the row.

```PHP
public function prepareRow($row) {
  // Always start with this, in case the parent class wants to
  // reject the row.
  if (parent::prepareRow($row) === FALSE) {
    return FALSE;
  }
  // Reject a row based on external status
  if ($status = $this->getStatusFromWebService($row->id) == -1) {
    return FALSE;
  }
  else {
    // Create a pseudo-field for the external status
    $row->service_status = $status;
  }
  // Prepend the article type to the title
  $row->title = $row->type . ‘: ‘ . $row->title;
  }
}
```

#### prepare, complete

`prepare()` is called after all mappings have been applied and migration field 
handlers have translated the raw values into the field arrays understood by 
`node_save()`, `user_save()`, etc., and is the last chance to manipulate the 
data before it’s saved. It’s relatively rare to need to use `prepare()` other 
than for debugging (see below), but if for some reason you need to do some 
manipulation on the field arrays, this would be the place.

```PHP
public function prepare($node, $row) {
  parent::prepare($node, $row);
  $node->body[LANGUAGE_NONE][‘value’] .= 
    $node->tagline[LANGUAGE_NONE][‘value’];
}
```

`complete()` is called immediately after the object has been saved, and is the 
opportunity to do anything that requires knowing the ID of the new object (most 
often, saving data to a related table).

```PHP
public function complete($node, $row) {
  parent::complete($node, $row);
  $this->logOperation(t(‘Node !nid imported’, 
    array(‘!nid’ => $node->nid));
}
```

## Running and managing migrations

While there is a dashboard UI at admin/content/migrate, generally you’ll want to 
use the drush commands, which are more flexible and quicker (see 
http://drupal.org/node/1806824).

To view the status of all migrations:

`drush migrate-status`

Or (since most migrate commands have a shortcut)

`drush ms`

To view the status of one migration:

`drush ms MySiteArticle`

To import from all migrations:

```
drush migrate-import --all
drush mi --all
```

To import from one migration (note that migration names are case-insensitive):

`drush mi mysiteuser`

To import a small sample (say, 10 tag terms) from one migration:

`drush mi mysitetags --limit=10`

To import a specific item in one migration, given its source ID (primary key 
in the legacy system) – for example, if one particular item is generating an error:

`drush mi mysiteforumcomment --idlist=1234`

To reimport previously-imported items in-place (overwriting the Drupal objects 
while maintaining their IDs), in addition to importing previously-unimported items:

`drush mi mysitephoto --update`

Migration can, of course, be rolled back as well, deleting the imported content 
as well as the migration housekeeping, with the same syntax as 
`migrate-import`/`mi` – just substitute `migrate-rollback`/`mr`.

`drush mr --all`

If you’ve started a migration running and want to interrupt it – do not simply 
hit Ctl-C, which may leave the database in an inconsistent state. Rather, use 
the migrate-stop command, which will cause the migration to cleanly exit after 
processing the current item:

`drush mst mysiteblog`

Sometimes a migration’s status can be stuck in an active state when it’s no 
longer running (e.g., if there’s a fatal error, a drush command stopped with 
Ctrl-C, etc.). To reset the status so you can start a new operation on the 
migration, use the `migrate-reset-status` command:

`drush mrs mysitevideo`

## Debugging tips

When faced with migration problems (how did that value get, or not get, into 
that field?), often the simplest way to track the progress is to print variables 
at key points. The keyest points are `prepareRow()` (called right after fetching 
a row from the migration’s base query) and `prepare()` (called just before 
saving the Drupal object). Inserting some `drush_print()` calls for simple 
values, or `drush_print_r()` calls on arrays/objects (like $row and $node) is 
very helpful.

What if your migration is running very slowly? While you can profile with 
`xhprof` for full details, the Migrate module provides some simple profiling, 
with timing of particular Migrate functions. If you run your migration with 
timing enabled

`drush mi mysitearticle --instrument=timer`

when the migration completes it will report call counts and timings. Most often, 
you will find that the bulk of the time is being spent writing to the Drupal 
database – you’ll see `node_save()` or `user_save()` taking 90+% of the time. 
Typically this means there’s some contributed or custom module doing something 
expensive in, say, `hook_user_insert()`. To narrow it down, you can patch Drupal 
(temporarily!) to add instrumentation in key places (primarily where hooks are 
called) – see http://drupal.org/node/1336588. And if you’re suspicious of your 
own code – say, a call to a web service – you can add instrumentation around the 
suspicous area:

```PHP
public function prepareRow($row) {
  if (parent::prepareRow($row) === FALSE) {
    return FALSE;
  }
  // Simple cheap stuff we’re not concerned about…
  $row->name = $row->first_name . $row->last_name;
  // Suspicious expensive stuff
  migrate_instrument_start(‘Remote service call’);
  $row->extra_data = $this->callService($row->ID);
  migrate_instrument_stop(‘Remote service call’);
}
```

## Resources

Migrate module documentation: http:://drupal.org/migrate

