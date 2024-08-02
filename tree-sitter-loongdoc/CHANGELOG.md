# Changelog

## [0.2.0](https://github.com/cathaysia/tree-sitter-loongdoc/compare/tree-sitter-loongdoc-v0.1.0...tree-sitter-loongdoc-v0.2.0) (2024-08-02)


### Features

* **adoc:** allow list_continuation appears before block ([a0106a6](https://github.com/cathaysia/tree-sitter-loongdoc/commit/a0106a6ed668d6c1544b8cbff2a4663b0f66b2c3))
* **adoc:** allow netesting delimited block ([7585d45](https://github.com/cathaysia/tree-sitter-loongdoc/commit/7585d450d06645f6dcfa0ca9f17bc80b03ec0b12))
* **adoc:** don't alloc too much memory ([272e5fd](https://github.com/cathaysia/tree-sitter-loongdoc/commit/272e5fd63c31a53c11adc4f484812ebdb9c67111))
* **adoc:** parse more table and raw block ([894cab1](https://github.com/cathaysia/tree-sitter-loongdoc/commit/894cab1d3643ebd59d9c0550e6c96d952c0d893c))
* **adoc:** parse table ([957d550](https://github.com/cathaysia/tree-sitter-loongdoc/commit/957d550b96b6509de35e4921f14c29584ceaf012))
* **adoc:** refactor codes ([edb873e](https://github.com/cathaysia/tree-sitter-loongdoc/commit/edb873e870b1bcd0d96fdad7ae9bb5a81c497304))
* **adoc:** reorder block ([4b082c5](https://github.com/cathaysia/tree-sitter-loongdoc/commit/4b082c5c590df2517189eff61422d98dd59d175d))
* bump version to 0.0.2 ([409c578](https://github.com/cathaysia/tree-sitter-loongdoc/commit/409c578da75a28725c28252bb3ab43ded6a85238))
* bump version to 0.0.4 ([368e59a](https://github.com/cathaysia/tree-sitter-loongdoc/commit/368e59a5afd84f980724253ec3d200730ae3818d))
* bump version to v0.0.3 ([e36a4d7](https://github.com/cathaysia/tree-sitter-loongdoc/commit/e36a4d7502e37832101efe1b612bc0bb5a944099))
* **cargo:** fix cargo tags ([0541f2b](https://github.com/cathaysia/tree-sitter-loongdoc/commit/0541f2b0a7e977d03c87464fb176f1b5c96b76aa))
* rename to loongdoc ([3da8c65](https://github.com/cathaysia/tree-sitter-loongdoc/commit/3da8c65e5db50874b9af13319040c0fb74a5c1a2))


### Bug Fixes

* **adoc:** fix inline anchor ([47c9e54](https://github.com/cathaysia/tree-sitter-loongdoc/commit/47c9e54f436334ca20116f138d460539439129bd))
* **adoc:** fix memory leak ([9e88903](https://github.com/cathaysia/tree-sitter-loongdoc/commit/9e889038b83c85c2cb06d173f7f101655951868a))
* **adoc:** fix memory problem ([233f693](https://github.com/cathaysia/tree-sitter-loongdoc/commit/233f6930db70590c829f1788b663e53b38d68ef3))
* **adoc:** fix nesting block parse ([c21dee2](https://github.com/cathaysia/tree-sitter-loongdoc/commit/c21dee24ca3254e3f4df7a39c17298b7fb12de28))
* **adoc:** fix paragraph ending ([0963584](https://github.com/cathaysia/tree-sitter-loongdoc/commit/09635844e85a97ed721706174da36f04d2bf575e))
* **adoc:** fix paragraph ending ([827b58c](https://github.com/cathaysia/tree-sitter-loongdoc/commit/827b58c214fdd14c92fe7ecb44990a01c5dcfcf3))
* **adoc:** reversion 827b58c214fdd14c92fe7ecb44990a01c5dcfcf3 ([bd128cc](https://github.com/cathaysia/tree-sitter-loongdoc/commit/bd128ccaad56857e0e20155ecf2173166f74a75f))
* **bzero:** fix bzero ([7585d45](https://github.com/cathaysia/tree-sitter-loongdoc/commit/7585d450d06645f6dcfa0ca9f17bc80b03ec0b12))


### Performance Improvements

* **adoc:** promote perf ([ded7f92](https://github.com/cathaysia/tree-sitter-loongdoc/commit/ded7f92eafeb153978295b09ce06b4ab62ede87f))
* **adoc:** using vector store items but not list ([a17123c](https://github.com/cathaysia/tree-sitter-loongdoc/commit/a17123c53e15ad0376b888161636d9f4fc9b55f4))
* using parse_sequence_impl replace parse_sequence ([2d8b3a7](https://github.com/cathaysia/tree-sitter-loongdoc/commit/2d8b3a77ecc9d01be04ce458426b4fb819b67d60))

## 0.1.0 (2024-07-20)


### Features

* **adoc:** allow netesting delimited block ([7585d45](https://github.com/cathaysia/tree-sitter-loongdoc/commit/7585d450d06645f6dcfa0ca9f17bc80b03ec0b12))
* **adoc:** don't alloc too much memory ([272e5fd](https://github.com/cathaysia/tree-sitter-loongdoc/commit/272e5fd63c31a53c11adc4f484812ebdb9c67111))
* **adoc:** parse more table and raw block ([894cab1](https://github.com/cathaysia/tree-sitter-loongdoc/commit/894cab1d3643ebd59d9c0550e6c96d952c0d893c))
* **adoc:** parse table ([957d550](https://github.com/cathaysia/tree-sitter-loongdoc/commit/957d550b96b6509de35e4921f14c29584ceaf012))
* **adoc:** refactor codes ([edb873e](https://github.com/cathaysia/tree-sitter-loongdoc/commit/edb873e870b1bcd0d96fdad7ae9bb5a81c497304))
* **adoc:** reorder block ([4b082c5](https://github.com/cathaysia/tree-sitter-loongdoc/commit/4b082c5c590df2517189eff61422d98dd59d175d))
* bump version to 0.0.2 ([409c578](https://github.com/cathaysia/tree-sitter-loongdoc/commit/409c578da75a28725c28252bb3ab43ded6a85238))
* bump version to 0.0.4 ([368e59a](https://github.com/cathaysia/tree-sitter-loongdoc/commit/368e59a5afd84f980724253ec3d200730ae3818d))
* bump version to v0.0.3 ([e36a4d7](https://github.com/cathaysia/tree-sitter-loongdoc/commit/e36a4d7502e37832101efe1b612bc0bb5a944099))
* **cargo:** fix cargo tags ([0541f2b](https://github.com/cathaysia/tree-sitter-loongdoc/commit/0541f2b0a7e977d03c87464fb176f1b5c96b76aa))
* rename to loongdoc ([3da8c65](https://github.com/cathaysia/tree-sitter-loongdoc/commit/3da8c65e5db50874b9af13319040c0fb74a5c1a2))


### Bug Fixes

* **adoc:** fix memory leak ([9e88903](https://github.com/cathaysia/tree-sitter-loongdoc/commit/9e889038b83c85c2cb06d173f7f101655951868a))
* **adoc:** fix memory problem ([233f693](https://github.com/cathaysia/tree-sitter-loongdoc/commit/233f6930db70590c829f1788b663e53b38d68ef3))
* **adoc:** fix nesting block parse ([c21dee2](https://github.com/cathaysia/tree-sitter-loongdoc/commit/c21dee24ca3254e3f4df7a39c17298b7fb12de28))
* **adoc:** fix paragraph ending ([827b58c](https://github.com/cathaysia/tree-sitter-loongdoc/commit/827b58c214fdd14c92fe7ecb44990a01c5dcfcf3))
* **bzero:** fix bzero ([7585d45](https://github.com/cathaysia/tree-sitter-loongdoc/commit/7585d450d06645f6dcfa0ca9f17bc80b03ec0b12))


### Performance Improvements

* **adoc:** promote perf ([ded7f92](https://github.com/cathaysia/tree-sitter-loongdoc/commit/ded7f92eafeb153978295b09ce06b4ab62ede87f))
* **adoc:** using vector store items but not list ([a17123c](https://github.com/cathaysia/tree-sitter-loongdoc/commit/a17123c53e15ad0376b888161636d9f4fc9b55f4))
* using parse_sequence_impl replace parse_sequence ([2d8b3a7](https://github.com/cathaysia/tree-sitter-loongdoc/commit/2d8b3a77ecc9d01be04ce458426b4fb819b67d60))
