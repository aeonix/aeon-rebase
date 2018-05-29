# AEON
 

# Development resources

- Web: [http://aeon.cash](http://aeon.cash)
- GitHub:  [https://github.com/aeonix/aeon-rebase](https://github.com/aeonix/aeon-rebase)
- Reddit: [https://reddit.com/r/aeon
- IRC: [#AEON on Freenode](http://webchat.freenode.net/?yourusername=1&channels=%23AEON&prompt=1&uio=d4)

# Introduction

AEON is a private, secure, untraceable currency. You are your bank, you control your funds, and nobody can trace your transfers.

Privacy: AEON uses a cryptographically sound system to allow you to send and receive funds without your transactions being easily revealed on the blockchain (the ledger of transactions that everyone has). This ensures that your purchases, receipts, and all transfers remain absolutely private by default.

Security: Using the power of a distributed peer-to-peer consensus network, every transaction on the network is cryptographically secured. Individual wallets have a 24 word mnemonic that is only displayed once, and can be written down to backup the wallet. Wallet files are encrypted with a passphrase to ensure they are useless if stolen.

Untraceability: By taking advantage of ring signatures, a special property of certain types of cryptography, AEON is able to ensure that transactions are not only untraceable, but have an optional measure of ambiguity that ensures that transactions cannot easily be tied back to an individual user or computer.

# How is AEON different from Monero?

Compared to our CryptoNote big brother, here are AEON's main advantages:

1:
Mobile-friendly

1 MB scratchpad allows AEON to run efficiently on mobile devices alongside regular laptops and desktops.

2:
Different proof-of-work

AEON's lightweight PoW (CryptoNote-Lite) allows for faster verification of the blockchain.

3:
Blockchain pruning for scalability

Pruning allows the blockchain to stay small and not outgrow devices with limited storage. This feature also improves anonymity by reducing age-based attacks.

4:
Fast syncing

Compared to Bitcoin variants, CryptoNote coins typically have higher verification, leading to more orphaned blocks. AEON helps this issue by using a 4-minute blocktime, reducing sync by a factor of four. Coupled with our lighter PoW, sync times on lower end devices can be improved by 10x or more.

5:
Optional lightweight transfers

Overall, AEON seeks to be a lightweight-Monero, similar to how Litecoin seeks to be a lightweight-Bitcoin. While still drawing from the technical advantages of Monero and CryptoNote, AEON has distinct development goals and an independent community that enable it to thrive as its own currency


# About this Project

This is the core implementation of AEON. It is open source and completely free to use without restrictions, except for those specified in the license agreement below. There are no restrictions on anyone creating an alternative implementation of AEON that uses the protocol and network in a compatible manner.

As with many development projects, the repository on Github is considered to be the "staging" area for the latest changes. Before changes are merged into that master repo, they are tested by individual developers, as well as contributors who focus on thorough testing and code reviews. That having been said, the repository should be carefully considered before using it in a production environment, unless there is a patch in the repository for a particular show-stopping issue you are experiencing. It is generally a better idea to use a tagged release for stability.

Anyone is able to contribute to AEON. If you have a fix or code change, feel free to submit is as a pull request. In cases where the change is relatively small or does not affect other parts of the codebase it may be merged in immediately by any one of the collaborators. On the other hand, if the change is particularly large or complex, it is expected that it will be discussed at length either well in advance of the pull request being submitted, or even directly on the pull request.

# Privacy

AEON uses a cryptographically sound system to allow you to send and receive funds without your transactions being easily revealed on the blockchain (the ledger of transactions that everyone has). This ensures that your purchases, receipts, and all transfers remain absolutely private by default.

# Deployment Notes

When running the daemon, take care to ensure that the console output is not blocked, as this may in turn cause processing threads to be blocked, potentially resulting in unreliable operation of the daemon. This can occur because the implementation contains many logging statements which send output to the console within the context of the processing thread, and if the output buffer fills up this will block the thread. The best practice is to start the daemon within the context of a background process manager such as screen or tmux, or within a terminal window on a physical or virtual console. In doing so be sure that the session is not left in 'scrollback' or 'edit' mode as this may eventualy cause the output to block.
To ensure reliable performance (especially on mining/pool nodes where poor performance can result in increase 'orphan blocks'), ensure that the daemon is being run on hardware with sufficient memory to avoid excessive swapping and long pauses. While it is possible to operate with limited memory and swap in some cases (though not recommended for mining), this requires care and a platform with sufficient I/O performance (e.g. unthrottled SSD). In the latter case also see the next item.
One cause of high resource usage and long processing delays is the periodic saving of the blockchain every 12 hours. Doing so requires access to the entire memory space and potentially large amounts of swapping. It can be disabled using the --disable-save option. The blockchain will still be saved on exit or upon request using the save command.
If using the rpc wallet (aeon-wallet-cli.exe --rpc-bind-port), access to the wallet RPC port will allow sending funds from the wallet. By default the rpc port is bound to the loopback interface so access is only possible from the same system. You are responsible for appropriately controlling/limiting access to the port (eg. using virtualization, firewall settings, etc.) to prevent loss of funds. If not using the --rpc-bind-port the wallet does not accept remote commands and this issue does not apply.

# Security

Using the power of a distributed peer-to-peer consensus network, every transaction on the network is cryptographically secured. Individual wallets have a 26 word mnemonic seed that is only displayed once, and can be written down to backup the wallet. Wallet files are encrypted with a passphrase to ensure they are useless if stolen.

# Untraceability

By taking advantage of ring signatures, a special property of a certain type of cryptography, AEON is able to ensure that transactions are not only untraceable, but have an optional measure of ambiguity that ensures that transactions cannot easily be tied back to an individual user or computer. The higher the Ring size, the more untraceable AEON is.

# Anyone is welcome to contribute to AEON's codebase

If you have a fix or code change, feel free to submit it as a pull request directly to the "master" branch. In cases where the change is relatively small or does not affect other parts of the codebase it may be merged in immediately by any one of the collaborators. On the other hand, if the change is particularly large or complex, it is expected that it will be discussed at length either well in advance of the pull request being submitted, or even directly on the pull request.

# Supporting the project

AEON is a 100% community-sponsored endeavor. If you want to join our efforts, the easiest thing you can do is support the project financially. Both AEON and Bitcoin donations can be made to the DEV fund donation address via the `donate` command (type `help` in the command-line wallet for details).

# Vulnerability response
- Please direct vulnerabilities to the MONERO dev team via:

- MONERO [Vulnerability Response Process](https://github.com/monero-project/meta/blob/master/VULNERABILITY_RESPONSE_PROCESS.md) encourages responsible disclosure
- MONERO is also available via [HackerOne](https://hackerone.com/monero)

# Dependencies Needed For Building 

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
| libsodium    | ?             | NO       | `libsodium-dev`    | ?            | `libsodium-devel` | NO       | libsodium      |
| libminiupnpc | 2.0           | YES      | `libminiupnpc-dev` | `miniupnpc`  | `miniupnpc-devel` | YES      | NAT punching   |
| libunwind    | any           | NO       | `libunwind8-dev`   | `libunwind`  | `libunwind-devel` | YES      | Stack traces   |
| liblzma      | any           | NO       | `liblzma-dev`      | `xz`         | `xz-devel`        | YES      | For libunwind  |
| libreadline  | 6.3.0         | NO       | `libreadline6-dev` | `readline`   | `readline-devel`  | YES      | Input editing  |
| ldns         | 1.6.17        | NO       | `libldns-dev`      | `ldns`       | `ldns-devel`      | YES      | SSL toolkit    |
| expat        | 1.1           | NO       | `libexpat1-dev`    | `expat`      | `expat-devel`     | YES      | XML parsing    |
| GTest        | 1.5           | YES      | `libgtest-dev`^    | `gtest`      | `gtest-devel`     | YES      | Test suite     |
| Doxygen      | any           | NO       | `doxygen`          | `doxygen`    | `doxygen`         | YES      | Documentation  |
| Graphviz     | any           | NO       | `graphviz`         | `graphviz`   | `graphviz`        | YES      | Documentation  |

# Compiling AEON

[^] On Debian/Ubuntu libgtest-dev only includes sources and headers. You must build the library binary manually. This can be done with the following command sudo apt-get install libgtest-dev && cd /usr/src/gtest && sudo cmake . && sudo make && sudo mv libg* /usr/lib/

Cloning the repository

Clone recursively to pull-in needed submodule(s):

$ git clone --recursive https://github.com/aeonix/aeon

If you already have a repo cloned, initialize and update:

$ cd monero && git submodule init && git submodule update

Build instructions

Aeon uses the CMake build system and a top-level Makefile that invokes cmake commands as needed.

On Linux and OS X

Install the dependencies

Change to the root of the source code directory and build:

  cd aeon
  make
Optional: If your machine has several cores and enough memory, enable parallel build by running make -j<number of threads> instead of make. For this to be worthwhile, the machine should have one core and about 2GB of RAM available per thread.

Note: If cmake can not find zmq.hpp file on OS X, installing zmq.hpp from https://github.com/zeromq/cppzmq to /usr/local/include should fix that error.

The resulting executables can be found in build/release/bin

Add PATH="$PATH:$HOME/aeon/build/release/bin" to .profile

Run Monero with aeond --detach

Optional: build and run the test suite to verify the binaries:

  make release-test
NOTE: core_tests test may take a few hours to complete.

Optional: to build binaries suitable for debugging:

   make debug
Optional: to build statically-linked binaries:

   make release-static
Dependencies need to be built with -fPIC. Static libraries usually aren't, so you may have to build them yourself with -fPIC. Refer to their documentation for how to build them.

Optional: build documentation in doc/html (omit HAVE_DOT=YES if graphviz is not installed):

  HAVE_DOT=YES doxygen Doxyfile
  
# On OS X:

Successful Build on High Sierra requires the following:

1-Install osx Command Line Tools;
Copy paste in terminal: xcode-select --install

Home-brew installed (https://brew.sh) 
2- Copy Paste this in Terminal to install homebrew;
/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"

then run the following to install dependencies using Homebrew:
Brew install wget
Brew install openssl
Brew install pkg-config
Brew install zeromq

Note: If cmake can not find zmq.hpp file on OS X, installing zmq.hpp from https://github.com/zeromq/cppzmq to /usr/local/include should fix that error.

After everything is installed CD to the folder the build package is in and run:
make -2

The resulting executables can be found in build/release/bin

- Alternatively, it can be built in an easier and more automated fashion using Homebrew when their repo is updated to include Aeon Rebase source:

To install using only Homebrew:

Ensure Homebrew is installed, it can be found at http://brew.sh

Add the repository: brew tap sammy007/cryptonight

Build wallet: brew install --HEAD aeon


# On Windows:

Binaries for Windows are built on Windows using the MinGW toolchain within MSYS2 environment. The MSYS2 environment emulates a POSIX system. The toolchain runs within the environment and cross-compiles binaries that can run outside of the environment as a regular Windows application.

Preparing the build environment

Download and install the MSYS2 installer, either the 64-bit or the 32-bit package, depending on your system.

Open the MSYS shell via the MSYS2 Shell shortcut

Update packages using pacman:

  pacman -Syuu  
Exit the MSYS shell using Alt+F4

Edit the properties for the MSYS2 Shell shortcut changing "msys2_shell.bat" to "msys2_shell.cmd -mingw64" for 64-bit builds or "msys2_shell.cmd -mingw32" for 32-bit builds

Restart MSYS shell via modified shortcut and update packages again using pacman:

  pacman -Syuu  
Install dependencies:

To build for 64-bit Windows:

  pacman -S mingw-w64-x86_64-toolchain make mingw-w64-x86_64-cmake mingw-w64-x86_64-boost mingw-w64-x86_64-openssl mingw-w64-x86_64-zeromq mingw-w64-x86_64-libsodium
To build for 32-bit Windows:

  pacman -S mingw-w64-i686-toolchain make mingw-w64-i686-cmake mingw-w64-i686-boost mingw-w64-i686-openssl mingw-w64-i686-zeromq mingw-w64-i686-libsodium
Open the MingW shell via MinGW-w64-Win64 Shell shortcut on 64-bit Windows or MinGW-w64-Win64 Shell shortcut on 32-bit Windows. Note that if you are running 64-bit Windows, you will have both 64-bit and 32-bit MinGW shells.

Building

If you are on a 64-bit system, run:

  make release-static-win64
If you are on a 32-bit system, run:

  make release-static-win32

The resulting executables can be found in build/release/bin

# Ubuntu 16.04

Check for dependencies: 

https://github.com/aeonix/aeon/tree/v0.12.0.0#dependencies

Run these commands:

git clone --recursive https://github.com/aeonix/aeon.git aeon_sophia 
cd aeon_sophia
make release


# LMDB

Instructions for debugging suspected blockchain corruption as per @HYC

There is an `mdb_stat` command in the LMDB source that can print statistics about the database but it's not routinely built. This can be built with the following command:

`cd ~/Aeon/external/db_drivers/liblmdb && make`

The output of `mdb_stat -ea <path to blockchain dir>` will indicate inconsistencies in the blocks, block_heights and block_info table.

The output of `mdb_dump -s blocks <path to blockchain dir>` and `mdb_dump -s block_info <path to blockchain dir>` is useful for indicating whether blocks and block_info contain the same keys.
These records are dumped as hex data, where the first line is the key and the second line is the data.

# TIPS FOR USE

Fast syncing of blockchain:
     - Run this command after aeond (  --block-sync-size 1000 --max-concurrency 15  )
     
     


------------------------------------------------------------------------------------------------------------

# License & Legal

Copyright (c) 2014-2018, AEON , The Monero Project

All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Parts of the project are originally copyright (c) 2012-2013 The Cryptonote developers

# Other License Information:

Copyright (c) 2014-2018, The Monero Project

All rights reserved.

Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:

Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.

Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.

Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote products derived from this software without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

Parts of the project are originally copyright (c) 2012-2013 The Cryptonote developers
