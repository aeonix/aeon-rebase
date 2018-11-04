# Aeon

[![Github All Releases](https://img.shields.io/github/downloads/aeonix/aeon/total.svg)](../../releases)
[![GitHub release](https://img.shields.io/github/release/aeonix/aeon/all.svg)](../../releases/latest)
[![GitHub Release Date](https://img.shields.io/github/release-date-pre/aeonix/aeon.svg)](../../releases/latest)
[![GitHub top language](https://img.shields.io/github/languages/top/aeonix/aeon.svg)](../../)
[![GitHub language count](https://img.shields.io/github/languages/count/aeonix/aeon.svg)](../../)
[![GitHub repo size in bytes](https://img.shields.io/github/repo-size/aeonix/aeon.svg)](../../)

[![GitHub last commit](https://img.shields.io/github/last-commit/aeonix/aeon.svg)](../../)
[![Github commits (since latest release)](https://img.shields.io/github/commits-since/aeonix/aeon/latest.svg)](../../)
[![GitHub stars](https://img.shields.io/github/stars/aeonix/aeon.svg)](../../stargazers)
[![GitHub forks](https://img.shields.io/github/forks/aeonix/aeon.svg)](../../network)
[![GitHub issues](https://img.shields.io/github/issues/aeonix/aeon.svg)](../../issues)
[![GitHub closed issues](https://img.shields.io/github/issues-closed/aeonix/aeon.svg)](../../issues)

Copyright (c) 2014-2018, AEON, The Monero Project.   
Portions Copyright (c) 2012-2013 The Cryptonote developers.

## Development resources

- Web: [aeon.cash](http://aeon.cash)
- Bitcointalk: https://bitcointalk.org/index.php?topic=641696.0
- Reddit: https://www.reddit.com/r/Aeon
- GitHub: [https://github.com/aeonix/aeon](https://github.com/aeonix/aeon)
- IRC: [#aeon on Freenode](http://webchat.freenode.net/?randomnick=1&channels=%23aeon&prompt=1&uio=d4)
- Discord: https://discord.gg/TM8mEsx

## Vulnerability response

- Vulnerability response should be redirected to Monero because much of Aeon's technical ground is shared
- Our [Vulnerability Response Process](https://github.com/monero-project/meta/blob/master/VULNERABILITY_RESPONSE_PROCESS.md) encourages responsible disclosure
- We are also available via [HackerOne](https://hackerone.com/monero)


## Coverage

| Type      | Status |
|-----------|--------|
| License   | [![License](https://img.shields.io/badge/license-BSD3-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)

## Introduction

Aeon is a private, secure, untraceable, decentralised digital currency. You are your bank, you control your funds, and nobody can trace your transfers unless you allow them to do so.

**Privacy:** Aeon uses a cryptographically sound system to allow you to send and receive funds without your transactions being easily revealed on the blockchain (the ledger of transactions that everyone has). This ensures that your purchases, receipts, and all transfers remain absolutely private by default.

**Security:** Using the power of a distributed peer-to-peer consensus network, every transaction on the network is cryptographically secured. Individual wallets have a 25 word mnemonic seed that is only displayed once, and can be written down to backup the wallet. Wallet files are encrypted with a passphrase to ensure they are useless if stolen.

**Untraceability:** By taking advantage of ring signatures, a special property of a certain type of cryptography, Aeon is able to ensure that transactions are not only untraceable, but have an optional measure of ambiguity that ensures that transactions cannot easily be tied back to an individual user or computer.

## About this project

This is the core implementation of Aeon. It is open source and completely free to use without restrictions, except for those specified in the license agreement below. There are no restrictions on anyone creating an alternative implementation of Aeon that uses the protocol and network in a compatible manner.

As with many development projects, the repository on Github is considered to be the "staging" area for the latest changes. Before changes are merged into that branch on the main repository, they are tested by individual developers in their own branches, submitted as a pull request, and then subsequently tested by contributors who focus on testing and code reviews. That having been said, the repository should be carefully considered before using it in a production environment, unless there is a patch in the repository for a particular show-stopping issue you are experiencing. It is generally a better idea to use a tagged release for stability.

**Anyone is welcome to contribute to Aeon's codebase!** If you have a fix or code change, feel free to submit it as a pull request directly to the "master" branch. In cases where the change is relatively small or does not affect other parts of the codebase it may be merged in immediately by any one of the collaborators. On the other hand, if the change is particularly large or complex, it is expected that it will be discussed at length either well in advance of the pull request being submitted, or even directly on the pull request.

## Supporting the project

Aeon is a 100% community-sponsored endeavor. If you want to join our efforts, the easiest thing you can do is support the project financially. Both Aeon and Bitcoin donations can be made to **donate.aeon.cash** if using a client that supports the [OpenAlias](https://openalias.org) standard. Alternatively you can send AEON to the Aeon donation address via the `donate` command (type `help` in the command-line wallet for details).

The Aeon donation address is: `WmsSWgtT1JPg5e3cK41hKXSHVpKW7e47bjgiKmWZkYrhSS5LhRemNyqayaSBtAQ6517eo5PtH9wxHVmM78JDZSUu2W8PqRiNs` (viewkey: `71bf19a7348ede17fa487167710dac401ef1556851bfd36b76040facf051630b`)

The Bitcoin donation address is: `12Cyjf3qV6qLyXdzpLSLPdRFPUVidvnzFM`

Core development funding and/or some supporting services are also graciously provided by sponsors:

[<img width="80" src="https://static.getmonero.org/images/sponsors/mymonero.png"/>](https://mymonero.com)
[<img width="150" src="https://static.getmonero.org/images/sponsors/kitware.png?1"/>](http://kitware.com)
[<img width="100" src="https://static.getmonero.org/images/sponsors/dome9.png"/>](http://dome9.com)
[<img width="150" src="https://static.getmonero.org/images/sponsors/araxis.png"/>](http://araxis.com)
[<img width="150" src="https://static.getmonero.org/images/sponsors/jetbrains.png"/>](http://www.jetbrains.com/)
[<img width="150" src="https://static.getmonero.org/images/sponsors/navicat.png"/>](http://www.navicat.com/)
[<img width="150" src="https://static.getmonero.org/images/sponsors/symas.png"/>](http://www.symas.com/)

There are also several mining pools that kindly donate a portion of their fees, [a list of them can be found on our Bitcointalk post](https://bitcointalk.org/index.php?topic=641696.0).

## License

See [LICENSE](LICENSE).

## Contributing

If you want to help out, see [CONTRIBUTING](CONTRIBUTING.md) for a set of guidelines.

## Software upgrades

Aeon uses a software upgrade (hard fork) mechanism to implement new features. This means that users of Aeon (end users and service providers) should run current versions and upgrade their software as needed. **In contrast to Monero, there is no fixed schedule for hard forks, and the schedule for the next fork will be determined organically through community discussion.** The required software for these upgrades will be available prior to the scheduled date. Please check the repository prior to this date for the proper Aeon software version. Below is the historical schedule and the projected schedule for the next upgrade.
Dates are provided in the format YYYY-MM-DD. 


| Software upgrade block height | Date       | Fork version | Minimum Aeon version | Recommended Aeon version | Details                                                                            |  
| ------------------------------ | -----------| ----------------- | ---------------------- | -------------------------- | ---------------------------------------------------------------------------------- |
| 592000                        | 2015-08-04 | v1 (exceptional, version not bumped)      | v0.9.0.0                 | v0.9.14.0                     | blocktime = 240 seconds, CryptoNight-Lite, lower mining priority for ringsize < 3       |
| 963500                        | 2018-06-03 | v7                | v0.12.0.0                 | v0.12.6.0-aeon                    | Rebase to Monero's latest codebase with RingCT disabled, CryptoNight-Lite variant 1, limited use of ringsize 1, ban ringsize 2   |

## Compiling Aeon from source

### Dependencies

The following table summarizes the tools and libraries required to build. A
few of the libraries are also included in this repository (marked as
"Vendored"). By default, the build uses the library installed on the system,
and ignores the vendored sources. However, if no library is found installed on
the system, then the vendored source will be built and used. The vendored
sources are also used for statically-linked builds because distribution
packages often include only shared library binaries (`.so`) but not static
library archives (`.a`).

| Dep          | Min. version  | Vendored | Debian/Ubuntu pkg  | Arch pkg     | Fedora            | Optional | Purpose        |
| ------------ | ------------- | -------- | ------------------ | ------------ | ----------------- | -------- | -------------- |
| GCC          | 4.7.3         | NO       | `build-essential`  | `base-devel` | `gcc`             | NO       |                |
| CMake        | 3.0.0         | NO       | `cmake`            | `cmake`      | `cmake`           | NO       |                |
| pkg-config   | any           | NO       | `pkg-config`       | `base-devel` | `pkgconf`         | NO       |                |
| Boost        | 1.58          | NO       | `libboost-all-dev` | `boost`      | `boost-devel`     | NO       | C++ libraries  |
| OpenSSL      | basically any | NO       | `libssl-dev`       | `openssl`    | `openssl-devel`   | NO       | sha256 sum     |
| libzmq       | 3.0.0         | NO       | `libzmq3-dev`      | `zeromq`     | `cppzmq-devel`    | NO       | ZeroMQ library |
| libunbound   | 1.4.16        | YES      | `libunbound-dev`   | `unbound`    | `unbound-devel`   | NO       | DNS resolver   |
| libsodium    | ?             | NO       | `libsodium-dev`    | ?            | `libsodium-devel` | NO       | cryptography   |
| libminiupnpc | 2.0           | YES      | `libminiupnpc-dev` | `miniupnpc`  | `miniupnpc-devel` | YES      | NAT punching   |
| libunwind    | any           | NO       | `libunwind8-dev`   | `libunwind`  | `libunwind-devel` | YES      | Stack traces   |
| liblzma      | any           | NO       | `liblzma-dev`      | `xz`         | `xz-devel`        | YES      | For libunwind  |
| libreadline  | 6.3.0         | NO       | `libreadline6-dev` | `readline`   | `readline-devel`  | YES      | Input editing  |
| ldns         | 1.6.17        | NO       | `libldns-dev`      | `ldns`       | `ldns-devel`      | YES      | SSL toolkit    |
| expat        | 1.1           | NO       | `libexpat1-dev`    | `expat`      | `expat-devel`     | YES      | XML parsing    |
| GTest        | 1.5           | YES      | `libgtest-dev`^    | `gtest`      | `gtest-devel`     | YES      | Test suite     |
| Doxygen      | any           | NO       | `doxygen`          | `doxygen`    | `doxygen`         | YES      | Documentation  |
| Graphviz     | any           | NO       | `graphviz`         | `graphviz`   | `graphviz`        | YES      | Documentation  |
| pcsclite     | ?             | NO       | `libpcsclite-dev`  | ?            | `pcsc-lite pcsc-lite-devel` | NO | Ledger     |          


[^] On Debian/Ubuntu `libgtest-dev` only includes sources and headers. You must
build the library binary manually. This can be done with the following command ```sudo apt-get install libgtest-dev && cd /usr/src/gtest && sudo cmake . && sudo make && sudo mv libg* /usr/lib/ ```

Install all dependencies at once on Debian/Ubuntu: 
``` sudo apt update && sudo apt install build-essential cmake git libpcsclite-dev pkg-config libboost-all-dev libssl-dev libzmq3-dev libunbound-dev libsodium-dev libminiupnpc-dev libunwind8-dev liblzma-dev libreadline6-dev libldns-dev libexpat1-dev doxygen graphviz libpcsclite-dev ```

### [Building from Source](./docs/build.md)
* [Table of Contents](./docs/build.md#Table-of-Contents)
* [Build instructions](./docs/build.md#Build-instructions)
   * [Common](./docs/build.md#common)
   * [On Linux and OS X](./docs/build.md#On-Linux-and-OS-X)
      * [On Raspberry Pi](./docs/build.md#On-Raspberry-Pi)
         * [Note for Raspbian Jessie users](./docs/build.md#Note-for-Raspbian-Jessie-users)
   * [On Windows](./docs/build.md#on-Windows)
   * [On FreeBSD](./docs/build.md#on-FreeBSD)
   * [On OpenBSD](./docs/build.md#On-OpenBSD)
      * [OpenBSD < 6.2](./docs/build.md#OpenBSD--62)
      * [OpenBSD >= 6.2](./docs/build.md#OpenBSD--62-1)
   * [On Solaris](./docs/build.md#On-Solaris)
   * [On Linux for Android (using docker)](./docs/build.md#On-Linux-for-Android-using-docker)
* [Building portable statically linked binaries](./docs/build.md#Building-portable-statically-linked-binaries)

## Installing Aeon from a package

**DISCLAIMER: These packages are not part of this repository or maintained by this project's contributors, and as such, do not go through the same review process to ensure their trustworthiness and security.**

Packages are available for

* (**TODO**) ~Ubuntu and [snap supported](https://snapcraft.io/docs/core/install) systems, via a community contributed build.~

        snap install aeon --beta

~Installing a snap is very quick. Snaps are secure. They are isolated with all of their dependencies. Snaps also auto update when a new version is released.~

* (**TODO**) ~Arch Linux (via [AUR](https://aur.archlinux.org/)):~
  - ~Stable release: [`aeon`](https://aur.archlinux.org/packages/aeon)~
  - ~Bleeding edge: [`aeon-git`](https://aur.archlinux.org/packages/aeon-git)~

* (**TODO**) ~Void Linux:~

        xbps-install -S aeon

* (**TODO**) ~GuixSD~

        guix package -i aeon

* OS X via [Homebrew](http://brew.sh)

        brew tap sammy007/aeon
        brew install aeon -v

* (**TODO**) ~Docker~

        # Build using all available cores
        docker build -t aeon .

        # or build using a specific number of cores (reduce RAM requirement)
        docker build --build-arg NPROC=1 -t aeon .
     
        # either run in foreground
        docker run -it -v /aeon/chain:/root/.aeon -v /aeon/wallet:/wallet -p 11180:11180 aeon

        # or in background
        docker run -it -d -v /aeon/chain:/root/.aeon -v /aeon/wallet:/wallet -p 11180:11180 aeon

Packaging for your favorite distribution would be a welcome contribution!

## Running aeond

The build places the binary in `bin/` sub-directory within the build directory
from which cmake was invoked (repository root by default). To run in
foreground:

    ./bin/aeond

To list all available options, run `./bin/aeond --help`.  Options can be
specified either on the command line or in a configuration file passed by the
`--config-file` argument.  To specify an option in the configuration file, add
a line with the syntax `argumentname=value`, where `argumentname` is the name
of the argument without the leading dashes, for example `log-level=1`.

To run in background:

    ./bin/aeond --log-file aeond.log --detach

To run as a systemd service, copy
[aeond.service](utils/systemd/aeond.service) to `/etc/systemd/system/` and
[aeond.conf](utils/conf/aeond.conf) to `/etc/`. The [example
service](utils/systemd/aeond.service) assumes that the user `aeon` exists
and its home is the data directory specified in the [example
config](utils/conf/aeond.conf).

If you're on Mac, you may need to add the `--max-concurrency 1` option to
aeon-wallet-cli, and possibly aeond, if you get crashes refreshing.

## Internationalization

See [README.i18n.md](README.i18n.md).

## Using Tor

While Aeon isn't made to integrate with Tor, it can be used wrapped with torsocks, by
setting the following configuration parameters and environment variables:

* `--p2p-bind-ip 127.0.0.1` on the command line or `p2p-bind-ip=127.0.0.1` in
  aeond.conf to disable listening for connections on external interfaces.
* `--no-igd` on the command line or `no-igd=1` in aeond.conf to disable IGD
  (UPnP port forwarding negotiation), which is pointless with Tor.
* `DNS_PUBLIC=tcp` or `DNS_PUBLIC=tcp://x.x.x.x` where x.x.x.x is the IP of the
  desired DNS server, for DNS requests to go over TCP, so that they are routed
  through Tor. When IP is not specified, aeond uses the default list of
  servers defined in [src/common/dns_utils.cpp](src/common/dns_utils.cpp).
* `TORSOCKS_ALLOW_INBOUND=1` to tell torsocks to allow aeond to bind to interfaces
   to accept connections from the wallet. On some Linux systems, torsocks
   allows binding to localhost by default, so setting this variable is only
   necessary to allow binding to local LAN/VPN interfaces to allow wallets to
   connect from remote hosts. On other systems, it may be needed for local wallets
   as well.
* Do NOT pass `--detach` when running through torsocks with systemd, (see
  [utils/systemd/aeond.service](utils/systemd/aeond.service) for details).
* If you use the wallet with a Tor daemon via the loopback IP (eg, 127.0.0.1:9050),
  then use `--untrusted-daemon` unless it is your own hidden service.

Example command line to start aeond through Tor:

    DNS_PUBLIC=tcp torsocks aeond --p2p-bind-ip 127.0.0.1 --no-igd

### Using Tor on Tails

TAILS ships with a very restrictive set of firewall rules. Therefore, you need
to add a rule to allow this connection too, in addition to telling torsocks to
allow inbound connections. Full example:

    sudo iptables -I OUTPUT 2 -p tcp -d 127.0.0.1 -m tcp --dport 11181 -j ACCEPT
    DNS_PUBLIC=tcp torsocks ./aeond --p2p-bind-ip 127.0.0.1 --no-igd --rpc-bind-ip 127.0.0.1 \
        --data-dir /home/amnesia/Persistent/your/directory/to/the/blockchain

## Debugging

This section contains general instructions for debugging failed installs or problems encountered with Aeon. First ensure you are running the latest version built from the Github repo.

### Obtaining stack traces and core dumps on Unix systems

We generally use the tool `gdb` (GNU debugger) to provide stack trace functionality, and `ulimit` to provide core dumps in builds which crash or segfault.

* To use gdb in order to obtain a stack trace for a build that has stalled:

Run the build.

Once it stalls, enter the following command:

```
gdb /path/to/aeond `pidof aeond` 
```

Type `thread apply all bt` within gdb in order to obtain the stack trace

* If however the core dumps or segfaults:

Enter `ulimit -c unlimited` on the command line to enable unlimited filesizes for core dumps

Enter `echo core | sudo tee /proc/sys/kernel/core_pattern` to stop cores from being hijacked by other tools

Run the build.

When it terminates with an output along the lines of "Segmentation fault (core dumped)", there should be a core dump file in the same directory as aeond. It may be named just `core`, or `core.xxxx` with numbers appended.

You can now analyse this core dump with `gdb` as follows:

`gdb /path/to/aeond /path/to/dumpfile`

Print the stack trace with `bt`

* To run aeond within gdb:

Type `gdb /path/to/aeond`

Pass command-line options with `--args` followed by the relevant arguments

Type `run` to run aeond

### Analysing memory corruption

We use the tool `valgrind` for this.

Run with `valgrind /path/to/aeond`. It will be slow.

### LMDB

Instructions for debugging suspected blockchain corruption as per @HYC

There is an `mdb_stat` command in the LMDB source that can print statistics about the database but it's not routinely built. This can be built with the following command:

`cd ~/aeon/external/db_drivers/liblmdb && make`

The output of `mdb_stat -ea <path to blockchain dir>` will indicate inconsistencies in the blocks, block_heights and block_info table.

The output of `mdb_dump -s blocks <path to blockchain dir>` and `mdb_dump -s block_info <path to blockchain dir>` is useful for indicating whether blocks and block_info contain the same keys.

These records are dumped as hex data, where the first line is the key and the second line is the data.
