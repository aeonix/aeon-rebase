# AEON

Copyright (c) 2014-2018, The Monero Project.
Portions Copyright (c) 2012-2013 The Cryptonote developers.

## AEON Development and Community Resources

- Web: [aeon.cash](http://aeon.cash)
- Wiki: [aeon.wiki](https://aeon.wiki)
- Reddit: [Reddit](https://www.reddit.com/r/Aeon/)
- GitHub: [https://github.com/aeonix/aeon](https://github.com/aeonix/aeon)
- IRC: [#aeon on Freenode](http://webchat.freenode.net/?randomnick=1&channels=%23aeon&prompt=1&uio=d4)

## Build

| Operating System      | Processor | Status |
| --------------------- | -------- |--------|
| Ubuntu 16.04          |  amd64    | [![Ubuntu 16.04 amd64](https://build.aeon.direct/badges/run-builds.svg)](https://build.aeon.direct/#/builders/1)
| Windows 64 bit MSYS/MINGW       |  amd64    | [![Windows 64 MSYS/MINGW](https://build.aeon.direct/badges/win-builds.svg)](https://build.aeon.direct/#/builders/2)

## Coverage

| Type      | Status |
|-----------|--------|
| Coveralls | [![Coverage Status](https://coveralls.io/repos/github/drparadoxical/aeon-rebase/badge.svg?branch=master)](https://coveralls.io/github/drparadoxical/aeon-rebase?branch=master)
| License   | [![License](https://img.shields.io/badge/license-BSD3-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)

## Licence

AEON is released under the terms of the Modified BSD License. See [LICENSE](LICENSE) for more information.

## Introduction

AEON is a private, secure, untraceable, decentralised digital currency. You are your bank, you control your funds, and nobody can trace your transfers unless you allow them to do so.

**Privacy:** AEON uses a cryptographically sound system to allow you to send and receive funds without your transactions being easily revealed on the blockchain (digital ledger of transactions). This ensures that your purchases, receipts, and all transfers remain absolutely private by default.

**Security:** Using the power of a distributed peer-to-peer consensus network, every transaction on the network is cryptographically secured. Individual wallets have a 24 word mnemonic seed that is only displayed once, and can be written down to backup the wallet. Wallet files are encrypted with a passphrase to ensure they are useless if stolen.

**Untraceability:** By taking advantage of ring signatures, a special property of a certain type of cryptography, AEON is able to ensure that transactions are not only untraceable, but have an optional measure of ambiguity that ensures that transactions cannot easily be tied back to an individual user or computer.

## About this project

This is the core implementation of AEON. It is open source and completely free to use without restrictions, except for those specified in the license agreement below. There are no restrictions on anyone creating an alternative implementation of AEON that uses the protocol and network in a compatible manner.

As with many development projects, the repository on Github is considered to be the "staging" area for the latest changes. Before changes are merged into the master repository they are tested by individual developers as well as contributors who focus on thorough testing and code reviews. However, the repository should be carefully considered before using it in a production environment unless there is a patch in the repository for a particular show-stopping issue you are experiencing. It is generally a better idea to use a tagged release for stability.

**Anyone is able to contribute to AEON.** If you have a fix or code change, feel free to submit it as a pull request. In cases where the change is relatively small or does not affect other parts of the codebase it may be merged in immediately by any one of the collaborators. If the change is particularly large or complex, it is expected that it will be discussed at length either well in advance of the pull request being submitted, or even directly on the pull request prior to final approval.

## Supporting the project

AEON development can be supported directly through donations.

Both AEON and Bitcoin donations can be made to support the project.
AEON donation address is: `WmsSWgtT1JPg5e3cK41hKXSHVpKW7e47bjgiKmWZkYrhSS5LhRemNyqayaSBtAQ6517eo5PtH9wxHVmM78JDZSUu2W8PqRiNs` (viewkey: `71bf19a7348ede17fa487167710dac401ef1556851bfd36b76040facf051630b`)

The Bitcoin donation address is: `12Cyjf3qV6qLyXdzpLSLPdRFPUVidvnzFM`

*Note: you can easily donate AEON to the AEON donation address by using the `donate` command. Type `help` in the command-line wallet for details.*

There are also several mining pools that kindly donate a portion of their fees

## Contributing

If you want to help out, see [CONTRIBUTING](CONTRIBUTING.md) for a set of guidelines.

## Compiling AEON from source

### Dependencies

The following table summarizes the tools and libraries required to build. A few of the libraries are also included in this repository (marked as "Vendored"). By default, the build uses the library installed on the system, and ignores the vendored sources. However, if no library is found installed on the system, then the vendored source will be built and used. The vendored sources are also used for statically-linked builds because distribution packages often include only shared library binaries (`.so`) but not static library archives (`.a`).

| Dep            | Min. version  | Vendored | Debian/Ubuntu pkg     | Arch pkg       | Optional | Purpose        |
| -------------- | ------------- | ---------| --------------------- | -------------- | -------- | -------------- |
| GCC            | 4.7.3         | NO       | `build-essential`     | `base-devel`   | NO       |                |
| CMake          | 3.0.0         | NO       | `cmake`               | `cmake`        | NO       |                |
| pkg-config     | any           | NO       | `pkg-config`          | `base-devel`   | NO       |                |
| Boost          | 1.58          | NO       | `libboost-all-dev`    | `boost`        | NO       | C++ libraries  |
| OpenSSL        | basically any | NO       | `libssl-dev`          | `openssl`      | NO       | sha256 sum     |
| libzmq         | 3.0.0         | NO       | `libzmq3-dev`**^1**   | `zeromq`       | NO       | ZeroMQ library |
| libunbound     | 1.4.16        | YES      | `libunbound-dev`      | `unbound`      | NO       | DNS resolver   |
| libminiupnpc   | 2.0           | YES      | `libminiupnpc-dev`    | `miniupnpc`    | YES      | NAT punching   |
| libunwind      | any           | NO       | `libunwind8-dev`      | `libunwind`    | YES      | Stack traces   |
| liblzma        | any           | NO       | `liblzma-dev`         | `xz`           | YES      | For libunwind  |
| libreadline    | 6.3.0         | NO       | `libreadline6-dev`    | `readline`     | YES      | Input editing  |
| ldns           | 1.6.17        | NO       | `libldns-dev`         | `ldns`         | YES      | SSL toolkit    |
| expat          | 1.1           | NO       | `libexpat1-dev`       | `expat`        | YES      | XML parsing    |
| GTest          | 1.5           | YES      | `libgtest-dev`**^2**  | `gtest`        | YES      | Test suite     |
| Doxygen        | any           | NO       | `doxygen`             | `doxygen`      | YES      | Documentation  |
| Graphviz       | any           | NO       | `graphviz`            | `graphviz`     | YES      | Documentation  |

[**^1**] On Debian/Ubuntu, `libzmq3-dev` may not be the correct version, and may not include libczmq3-dev/dbg when it's installed, so you may want to install cppzmq and libzmq manually with the following ordered procedures:
  
  zeromq/libzmq

    git clone https://github.com/zeromq/libzmq.git;
    cd libzmq;
    mkdir build;
    cd build;
    cmake ..;
    sudo make install;

  zeromq/cppzmq

    git clone https://github.com/zeromq/cppzmq.git;
    cd cppzmq;
    mkdir build;
    cd build;
    cmake ..;
    sudo make install;

[**^2**] On Debian/Ubuntu `libgtest-dev` only includes sources and headers. You must build the library binary manually. This can be done with the following command ```sudo apt-get install libgtest-dev && cd /usr/src/gtest && sudo cmake . && sudo make && sudo mv libg* /usr/lib/ ```

### Build instructions

AEON uses the CMake build system and a top-level [Makefile](Makefile) that invokes cmake commands as needed.

#### On Linux and OS X

* Install the dependencies
* Change to the root of the source code directory and build:

        cd aeon
        make

    *Optional*: If your machine has several cores and enough memory, enable
    parallel build by running `make -j<number of threads>` instead of `make`. For
    this to be worthwhile, the machine should have one core and about 2GB of RAM
    available per thread.

    *Note*: If cmake can not find zmq.hpp file on OS X, installing `zmq.hpp` from
    https://github.com/zeromq/cppzmq to `/usr/local/include` should fix that error.

* The resulting executables can be found in `build/release/bin`

* Add `PATH="$PATH:$HOME/aeon/build/release/bin"` to `.profile`

* Run AEON with `aeond --detach`

* **Optional**: build and run the test suite to verify the binaries:

        make release-test

    *NOTE*: `core_tests` test may take a few hours to complete.

* **Optional**: to build binaries suitable for debugging:

         make debug

* **Optional**: to build statically-linked binaries:

         make release-static

* **Optional**: build documentation in `doc/html` (omit `HAVE_DOT=YES` if `graphviz` is not installed):

        HAVE_DOT=YES doxygen Doxyfile

#### On Windows

Binaries for Windows are built on Windows using the MinGW toolchain within
[MSYS2 environment](http://msys2.github.io). The MSYS2 environment emulates a
POSIX system. The toolchain runs within the environment and *cross-compiles*
binaries that can run outside of the environment as a regular Windows
application.

**Preparing the build environment**

* Download and install the [MSYS2 installer](http://msys2.github.io), either the 64-bit or the 32-bit package, depending on your system.
* Open the MSYS shell via the `MSYS2 Shell` shortcut
* Update packages using pacman:

        pacman -Syuu

* Exit the MSYS shell using Alt+F4
* Edit the properties for the `MSYS2 Shell` shortcut changing "msys2_shell.bat" to "msys2_shell.cmd -mingw64" for 64-bit builds or "msys2_shell.cmd -mingw32" for 32-bit builds
* Restart MSYS shell via modified shortcut and update packages again using pacman:

        pacman -Syuu


* Install dependencies:

    To build for 64-bit Windows:

        pacman -S mingw-w64-x86_64-toolchain make mingw-w64-x86_64-cmake mingw-w64-x86_64-boost mingw-w64-x86_64-openssl mingw-w64-x86_64-zeromq mingw-w64-x86_64-libsodium

    To build for 32-bit Windows:
 
        pacman -S mingw-w64-i686-toolchain make mingw-w64-i686-cmake mingw-w64-i686-boost mingw-w64-i686-openssl mingw-w64-i686-zeromq mingw-w64-i686-libsodium

* Open the MingW shell via `MinGW-w64-Win64 Shell` shortcut on 64-bit Windows
  or `MinGW-w64-Win64 Shell` shortcut on 32-bit Windows. Note that if you are
  running 64-bit Windows, you will have both 64-bit and 32-bit MinGW shells.

**Building**

* If you are on a 64-bit system, run:

        make release-static-win64

* If you are on a 32-bit system, run:

        make release-static-win32

* The resulting executables can be found in `build/release/bin`

### Building portable statically linked binaries

By default, in either dynamically or statically linked builds, binaries target the specific host processor on which the build happens and are not portable to other processors. Portable binaries can be built using the following targets:

* ```make release-static-linux-x86_64``` builds binaries on Linux on x86_64 portable across POSIX systems on x86_64 processors
* ```make release-static-linux-i686``` builds binaries on Linux on x86_64 or i686 portable across POSIX systems on i686 processors
* ```make release-static-win64``` builds binaries on 64-bit Windows portable across 64-bit Windows systems
* ```make release-static-win32``` builds binaries on 64-bit or 32-bit Windows portable across 32-bit Windows systems

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

While AEON isn't made to integrate with Tor, it can be used wrapped with torsocks, if you add --p2p-bind-ip 127.0.0.1 to the aeond command line. You also want to set DNS requests to go over TCP, so they'll be routed through Tor, by setting DNS_PUBLIC=tcp or use a particular DNS server with DNS_PUBLIC=tcp://a.b.c.d (default is 8.8.4.4, which is Google DNS). You may also disable IGD (UPnP port forwarding negotiation), which is pointless with Tor. To allow local connections from the wallet, you might have to add TORSOCKS_ALLOW_INBOUND=1, some OSes need it and some don't. Example:

`DNS_PUBLIC=tcp torsocks aeond --p2p-bind-ip 127.0.0.1 --no-igd`

or:

`DNS_PUBLIC=tcp TORSOCKS_ALLOW_INBOUND=1 torsocks aeond --p2p-bind-ip 127.0.0.1 --no-igd`

TAILS ships with a very restrictive set of firewall rules. Therefore, you need to add a rule to allow this connection too, in addition to telling torsocks to allow inbound connections. Full example:

`sudo iptables -I OUTPUT 2 -p tcp -d 127.0.0.1 -m tcp --dport 18081 -j ACCEPT`

`DNS_PUBLIC=tcp torsocks ./aeond --p2p-bind-ip 127.0.0.1 --no-igd --rpc-bind-ip 127.0.0.1 --data-dir /home/amnesia/Persistent/your/directory/to/the/blockchain`

`./aeon-wallet-cli`

## Debugging

This section contains general instructions for debugging failed installs or problems encountered with AEON. First ensure you are running the latest version built from the Github repo.

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

* To run AEON within gdb:

Type `gdb /path/to/aeond`

Pass command-line options with `--args` followed by the relevant arguments

Type `run` to run aeond

### Analysing memory corruption

We use the tool `valgrind` for this.

Run with `valgrind /path/to/aeond`. It will be slow.

### LMDB

Instructions for debugging suspected blockchain corruption as per @HYC of the Monero Project

There is an `mdb_stat` command in the LMDB source that can print statistics about the database but it's not routinely built. This can be built with the following command:

`cd ~/aeon/external/db_drivers/liblmdb && make`

The output of `mdb_stat -ea <path to blockchain dir>` will indicate inconsistencies in the blocks, block_heights and block_info table.

The output of `mdb_dump -s blocks <path to blockchain dir>` and `mdb_dump -s block_info <path to blockchain dir>` is useful for indicating whether blocks and block_info contain the same keys.

These records are dumped as hex data, where the first line is the key and the second line is the data.

### Open Alias

The Aeon wallet client supports OpenAlias Addresses. 
Instructions for setting up OpenAlias on a domain name.

Create a TXT DNS Record on your domain with using the following syntax

`oa1:aeon recipient_address=<YOUR WALLET ADDRESS>;`

You can then send funds to the domain name in place of the wallet address. 

`transfer 2 alias.domain.com 100`

Please refer to [OpenAlias.org](http://openalias.org) for full implementation and security recommendations
