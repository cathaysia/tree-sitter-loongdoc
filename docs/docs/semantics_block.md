# Semantics block

This article describes the semantics of blocks. How blocks are interpreted in a given situation.

## source block

A block becomes a source block in the following scenarios:

1. a `paragraph` with _source_ attribute.
2. a `listing_block` with _source_ attribute.

such as:

```adoc
[source, ruby]
----
require 'sinatra'

get '/hi' do
  "Hello World!"
end
----
```

- `source` keyword is optional.

```adoc
[,ruby]
require 'sinatra'
```

### console language

A console language will starts with `$` or `#`, then following with command:

```adoc
[source,console]
$ loongdoctor -v
```
## literal block

- A `paragraph` with _literal_ attribute will be a literal block.
- A `liter_block` is literal block.

```adoc
[literal]
error: 1954 Forbidden search
absolutely fatal: operation lost in the dodecahedron of doom
Would you like to try again? y/n
```

```adoc
....
Kismet: Where is the *defensive operations manual*?

Computer: Calculating ...
Can not locate object.
You are not authorized to know it exists.

Kismet: Did the werewolves tell you to say that?

Computer: Calculating ...
....
```
