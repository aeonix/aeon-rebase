// Copyright (c) 2014-2018, The Monero Project
// Copyright (c) 2018-2019, The TurtleCoin Developers
// 
// All rights reserved.
// 
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
// 
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
// 
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
// 
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 
// Parts of this file are originally copyright (c) 2012-2013 The Cryptonote developers

#pragma once

#include <stddef.h>
#include <iostream>
#include <boost/utility/value_init.hpp>

#include "common/pod-class.h"
#include "generic-ops.h"
#include "hex.h"
#include "span.h"

// Standard Cryptonight Definitions
#define CN_PAGE_SIZE                    2097152
#define CN_SCRATCHPAD                   2097152
#define CN_ITERATIONS                   1048576

// Standard CryptoNight Lite Definitions
#define CN_LITE_PAGE_SIZE               2097152
#define CN_LITE_SCRATCHPAD              1048576
#define CN_LITE_ITERATIONS              524288

// Standard CryptoNight Turtle
#define CN_TURTLE_PAGE_SIZE             262144
#define CN_TURTLE_SCRATCHPAD            262144
#define CN_TURTLE_ITERATIONS            131072

namespace crypto {

  extern "C" {
#include "hash-ops.h"
  }

#pragma pack(push, 1)
  POD_CLASS hash {
    char data[HASH_SIZE];
  };
  POD_CLASS hash8 {
    char data[8];
  };
#pragma pack(pop)

  /*
    Cryptonight hash functions
  */

  inline void cn_fast_hash(const void *data, size_t length, hash &hash) {
    cn_fast_hash(data, length, reinterpret_cast<char *>(&hash));
  }

  inline hash cn_fast_hash(const void *data, size_t length) {
    hash h;
    cn_fast_hash(data, length, reinterpret_cast<char *>(&h));
    return h;
  }

  // Standard CryptoNight
  inline void cn_slow_hash_v0(const void *data, size_t length, hash &hash) {
    cn_slow_hash(data, length, reinterpret_cast<char *>(&hash), 0, 0, 0, CN_PAGE_SIZE, CN_SCRATCHPAD, CN_ITERATIONS);
  }

  inline void cn_slow_hash_v1(const void *data, size_t length, hash &hash) {
    cn_slow_hash(data, length, reinterpret_cast<char *>(&hash), 0, 1, 0, CN_PAGE_SIZE, CN_SCRATCHPAD, CN_ITERATIONS);
  }

  inline void cn_slow_hash_v2(const void *data, size_t length, hash &hash) {
    cn_slow_hash(data, length, reinterpret_cast<char *>(&hash), 0, 2, 0, CN_PAGE_SIZE, CN_SCRATCHPAD, CN_ITERATIONS);
  }

  // Standard CryptoNight Lite
  inline void cn_lite_slow_hash_v0(const void *data, size_t length, hash &hash) {
    cn_slow_hash(data, length, reinterpret_cast<char *>(&hash), 1, 0, 0, CN_LITE_PAGE_SIZE, CN_LITE_SCRATCHPAD, CN_LITE_ITERATIONS);
  }

  inline void cn_lite_slow_hash_v1(const void *data, size_t length, hash &hash) {
    cn_slow_hash(data, length, reinterpret_cast<char *>(&hash), 1, 1, 0, CN_LITE_PAGE_SIZE, CN_LITE_SCRATCHPAD, CN_LITE_ITERATIONS);
  }

  inline void cn_lite_slow_hash_v2(const void *data, size_t length, hash &hash) {
    cn_slow_hash(data, length, reinterpret_cast<char *>(&hash), 1, 2, 0, CN_LITE_PAGE_SIZE, CN_LITE_SCRATCHPAD, CN_LITE_ITERATIONS);
  }

  // Standard CryptoNight Turtle
  inline void cn_turtle_slow_hash_v0(const void *data, size_t length, hash &hash) {
    cn_slow_hash(data, length, reinterpret_cast<char *>(&hash), 0, 0, 0, CN_TURTLE_PAGE_SIZE, CN_TURTLE_SCRATCHPAD, CN_TURTLE_ITERATIONS);
  }

  inline void cn_turtle_slow_hash_v1(const void *data, size_t length, hash &hash) {
    cn_slow_hash(data, length, reinterpret_cast<char *>(&hash), 0, 1, 0, CN_TURTLE_PAGE_SIZE, CN_TURTLE_SCRATCHPAD, CN_TURTLE_ITERATIONS);
  }

  inline void cn_turtle_slow_hash_v2(const void *data, size_t length, hash &hash) {
    cn_slow_hash(data, length, reinterpret_cast<char *>(&hash), 0, 2, 0, CN_TURTLE_PAGE_SIZE, CN_TURTLE_SCRATCHPAD, CN_TURTLE_ITERATIONS);
  }

  // Standard CryptoNight Turtle Lite
  inline void cn_turtle_lite_slow_hash_v0(const void *data, size_t length, hash &hash) {
    cn_slow_hash(data, length, reinterpret_cast<char *>(&hash), 1, 0, 0, CN_TURTLE_PAGE_SIZE, CN_TURTLE_SCRATCHPAD, CN_TURTLE_ITERATIONS);
  }

  inline void cn_turtle_lite_slow_hash_v1(const void *data, size_t length, hash &hash) {
    cn_slow_hash(data, length, reinterpret_cast<char *>(&hash), 1, 1, 0, CN_TURTLE_PAGE_SIZE, CN_TURTLE_SCRATCHPAD, CN_TURTLE_ITERATIONS);
  }

  inline void cn_turtle_lite_slow_hash_v2(const void *data, size_t length, hash &hash) {
    cn_slow_hash(data, length, reinterpret_cast<char *>(&hash), 1, 2, 0, CN_TURTLE_PAGE_SIZE, CN_TURTLE_SCRATCHPAD, CN_TURTLE_ITERATIONS);
  }

  inline void tree_hash(const hash *hashes, std::size_t count, hash &root_hash) {
    tree_hash(reinterpret_cast<const char (*)[HASH_SIZE]>(hashes), count, reinterpret_cast<char *>(&root_hash));
  }

  inline std::ostream &operator <<(std::ostream &o, const crypto::hash &v) {
    epee::to_hex::formatted(o, epee::as_byte_span(v)); return o;
  }
  inline std::ostream &operator <<(std::ostream &o, const crypto::hash8 &v) {
    epee::to_hex::formatted(o, epee::as_byte_span(v)); return o;
  }

  const static crypto::hash null_hash = boost::value_initialized<crypto::hash>();
  const static crypto::hash8 null_hash8 = boost::value_initialized<crypto::hash8>();
}

CRYPTO_MAKE_HASHABLE(hash)
CRYPTO_MAKE_COMPARABLE(hash8)
