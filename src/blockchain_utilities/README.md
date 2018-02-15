# Monero Blockchain Utilities

Copyright (c) 2014-2018, The Monero Project

## Introduction

The blockchain utilities allow one to import and export the blockchain.

## Usage:

See also each utility's "--help" option.

### Export an existing blockchain database

`$ aeon-blockchain-export`

This loads the existing blockchain and exports it to `$AEON_DATA_DIR/export/blockchain.raw`

### Import the exported file

`$ aeon-blockchain-import`

This imports blocks from `$AEON_DATA_DIR/export/blockchain.raw` (exported using the
`aeon-blockchain-export` tool as described above) into the current database.

Defaults: `--batch on`, `--batch size 20000`, `--verify on`

Batch size refers to number of blocks and can be adjusted for performance based on available RAM.

Verification should only be turned off if importing from a trusted blockchain.

If you encounter an error like "resizing not supported in batch mode", you can just re-run
the `aeon-blockchain-import` command again, and it will restart from where it left off.

```bash
## use default settings to import blockchain.raw into database
$ aeon-blockchain-import

## fast import with large batch size, database mode "fastest", verification off
$ aeon-blockchain-import --batch-size 20000 --database lmdb#fastest --verify off

```

### Import options

`--input-file`
specifies input file path for importing

default: `<data-dir>/export/blockchain.raw`

`--output-file`
specifies output file path to export to

default: `<data-dir>/export/blockchain.raw`

`--block-stop`
stop at block number

`--database <database type>`

`--database <database type>#<flag(s)>`

database type: `lmdb, memory`

flags:

The flag after the # is interpreted as a composite mode/flag if there's only
one (no comma separated arguments).

The composite mode represents multiple DB flags and support different database types:

`safe, fast, fastest`

Database-specific flags can be set instead.

LMDB flags (more than one may be specified):

`nosync, nometasync, writemap, mapasync, nordahead`

## Examples:

```
$ aeon-blockchain-import --database lmdb#fastest

$ aeon-blockchain-import --database lmdb#nosync

$ aeon-blockchain-import --database lmdb#nosync,nometasync
```
