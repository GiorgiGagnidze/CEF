// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_INTERNAL_H_
#define NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace net {
namespace interfaces {

class HostResolverRequestInfo;
class IPEndPoint;
class AddressList;


namespace internal {

class HostResolverRequestInfo_Data;
class IPEndPoint_Data;
class AddressList_Data;



  
struct AddressFamily_Data {
 public:
  // Used to identify Mojom Enum Data Classes.
  typedef void MojomEnumDataType;

  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  int32_t value;
};

#pragma pack(push, 1)


class HostResolverRequestInfo_Data {
 public:
  static HostResolverRequestInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer host;
  uint16_t port;
  uint8_t is_my_ip_address : 1;
  uint8_t pad2_[1];
  internal::AddressFamily_Data address_family;

 private:
  HostResolverRequestInfo_Data();
  ~HostResolverRequestInfo_Data() = delete;
};
static_assert(sizeof(HostResolverRequestInfo_Data) == 24,
              "Bad sizeof(HostResolverRequestInfo_Data)");
class IPEndPoint_Data {
 public:
  static IPEndPoint_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<uint8_t> address;
  uint16_t port;
  uint8_t padfinal_[6];

 private:
  IPEndPoint_Data();
  ~IPEndPoint_Data() = delete;
};
static_assert(sizeof(IPEndPoint_Data) == 24,
              "Bad sizeof(IPEndPoint_Data)");
class AddressList_Data {
 public:
  static AddressList_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::IPEndPoint_Data*> addresses;

 private:
  AddressList_Data();
  ~AddressList_Data() = delete;
};
static_assert(sizeof(AddressList_Data) == 16,
              "Bad sizeof(AddressList_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace interfaces
}  // namespace net

#endif  // NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_INTERNAL_H_