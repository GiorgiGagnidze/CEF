// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef REMOTING_BASE_RSA_KEY_PAIR_H_
#define REMOTING_BASE_RSA_KEY_PAIR_H_

#include <string>

#include "base/macros.h"
#include "base/memory/ref_counted.h"
#include "base/memory/scoped_ptr.h"

namespace crypto {
class RSAPrivateKey;
}  // namespace crypto

namespace remoting {

class RsaKeyPair : public base::RefCountedThreadSafe<RsaKeyPair> {
 public:
  // Generates a new (random) private key.
  static scoped_refptr<RsaKeyPair> Generate();

  // Loads a private key from a base64-encoded string. Returns true on success.
  static scoped_refptr<RsaKeyPair> FromString(const std::string& key_base64);

  // Returns a base64 encoded string representing the private key.
  std::string ToString() const;

  // Generates a DER-encoded self-signed certificate using the key pair. Returns
  // empty string if cert generation fails (e.g. it may happen when the system
  // clock is off).
  std::string GenerateCertificate() const;

  // Returns a base64-encoded string representing the public key.
  std::string GetPublicKey() const;

  // Returns a base64-encoded signature for the message.
  std::string SignMessage(const std::string& message) const;

  crypto::RSAPrivateKey* private_key() { return key_.get(); }

 private:
  friend class base::RefCountedThreadSafe<RsaKeyPair>;
  RsaKeyPair(scoped_ptr<crypto::RSAPrivateKey> key);
  virtual ~RsaKeyPair();

  scoped_ptr<crypto::RSAPrivateKey> key_;

  DISALLOW_COPY_AND_ASSIGN(RsaKeyPair);
};

}  // namespace remoting

#endif  // REMOTING_BASE_RSA_KEY_PAIR_H_
