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
$ asciidoctor -v
```

### promot all raw block

If set `source-language` attribute for document, then all raw block will be promote as source block.

```adoc
= Document Title
:source-highlighter: pygments
:source-language: java

[,ruby]
require 'sinatra'
```

In this case, if you want a `list_block`, you need set `listing` attribute.
