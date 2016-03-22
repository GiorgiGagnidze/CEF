// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_INTERFACES_PROXY_RESOLVER_SERVICE_MOJOM_INTERNAL_H_
#define NET_INTERFACES_PROXY_RESOLVER_SERVICE_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "net/interfaces/host_resolver_service.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace net {
namespace interfaces {

class ProxyServer;


namespace internal {

class ProxyServer_Data;



  
struct ProxyScheme_Data {
 public:
  // Used to identify Mojom Enum Data Classes.
  typedef void MojomEnumDataType;

  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        return true;
    }
    return false;
  }

  int32_t value;
};

#pragma pack(push, 1)


class ProxyServer_Data {
 public:
  static ProxyServer_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::ProxyScheme_Data scheme;
  uint16_t port;
  uint8_t pad1_[2];
  mojo::internal::StringPointer host;

 private:
  ProxyServer_Data();
  ~ProxyServer_Data() = delete;
};
static_assert(sizeof(ProxyServer_Data) == 24,
              "Bad sizeof(ProxyServer_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace interfaces
}  // namespace net

#endif  // NET_INTERFACES_PROXY_RESOLVER_SERVICE_MOJOM_INTERNAL_H_