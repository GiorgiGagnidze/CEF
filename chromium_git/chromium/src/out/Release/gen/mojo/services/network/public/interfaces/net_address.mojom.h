// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_NET_ADDRESS_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_NET_ADDRESS_MOJOM_H_

#include <stdint.h>
#include <ostream>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/services/network/public/interfaces/net_address.mojom-internal.h"
namespace mojo {

  
enum class NetAddressFamily : int32_t {
  UNSPECIFIED,
  IPV4,
  IPV6,
};
  
inline std::ostream& operator<<(std::ostream& os, NetAddressFamily value) {
  switch(value) {
    case NetAddressFamily::UNSPECIFIED:
      return os << "NetAddressFamily::UNSPECIFIED";
    case NetAddressFamily::IPV4:
      return os << "NetAddressFamily::IPV4";
    case NetAddressFamily::IPV6:
      return os << "NetAddressFamily::IPV6";
    default:
      return os << "Unknown NetAddressFamily value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(NetAddressFamily value) {
  return ::mojo::internal::NetAddressFamily_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class NetAddressIPv4;
class NetAddressIPv4_Reader;

using NetAddressIPv4Ptr = mojo::StructPtr<NetAddressIPv4>;


class NetAddressIPv6;
class NetAddressIPv6_Reader;

using NetAddressIPv6Ptr = mojo::StructPtr<NetAddressIPv6>;


class NetAddress;
class NetAddress_Reader;

using NetAddressPtr = mojo::StructPtr<NetAddress>;









class NetAddressIPv4_Reader;

class NetAddressIPv4 {
 public:
  using Data_ = internal::NetAddressIPv4_Data;
  using Reader = NetAddressIPv4_Reader;

  static NetAddressIPv4Ptr New();

  template <typename U>
  static NetAddressIPv4Ptr From(const U& u) {
    return mojo::TypeConverter<NetAddressIPv4Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetAddressIPv4>::Convert(*this);
  }

  NetAddressIPv4();
  ~NetAddressIPv4();


  NetAddressIPv4Ptr Clone() const;
  bool Equals(const NetAddressIPv4& other) const;

  uint16_t port;
  mojo::Array<uint8_t> addr;
};


class NetAddressIPv6_Reader;

class NetAddressIPv6 {
 public:
  using Data_ = internal::NetAddressIPv6_Data;
  using Reader = NetAddressIPv6_Reader;

  static NetAddressIPv6Ptr New();

  template <typename U>
  static NetAddressIPv6Ptr From(const U& u) {
    return mojo::TypeConverter<NetAddressIPv6Ptr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetAddressIPv6>::Convert(*this);
  }

  NetAddressIPv6();
  ~NetAddressIPv6();


  NetAddressIPv6Ptr Clone() const;
  bool Equals(const NetAddressIPv6& other) const;

  uint16_t port;
  mojo::Array<uint8_t> addr;
};


class NetAddress_Reader;

class NetAddress {
 public:
  using Data_ = internal::NetAddress_Data;
  using Reader = NetAddress_Reader;

  static NetAddressPtr New();

  template <typename U>
  static NetAddressPtr From(const U& u) {
    return mojo::TypeConverter<NetAddressPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NetAddress>::Convert(*this);
  }

  NetAddress();
  ~NetAddress();


  NetAddressPtr Clone() const;
  bool Equals(const NetAddress& other) const;

  NetAddressFamily family;
  NetAddressIPv4Ptr ipv4;
  NetAddressIPv6Ptr ipv6;
};


size_t GetSerializedSize_(const NetAddressIPv4Ptr& input);
void Serialize_(NetAddressIPv4Ptr input, mojo::internal::Buffer* buffer,
                internal::NetAddressIPv4_Data** output);
bool Deserialize_(internal::NetAddressIPv4_Data* input,
                  NetAddressIPv4Ptr* output,
                  mojo::internal::SerializationContext* context);


class NetAddressIPv4_Reader {
 public:
  NetAddressIPv4_Reader(internal::NetAddressIPv4_Data* data,
                         mojo::internal::SerializationContext* context);
  uint16_t port() const { return data_->port; }
  // TODO(rockot): Support reading other object kinds. (addr() omitted)

 private:
  internal::NetAddressIPv4_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct NetAddressIPv4_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::NetAddressIPv4_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field addr";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::NetAddressIPv4_Data** output) {
    internal::NetAddressIPv4_Data* result =
        internal::NetAddressIPv4_Data::New(buffer);
    result->port = mojo::StructTraits<NetAddressIPv4, NativeType>
        ::port(input);
    result->addr = mojo::StructTraits<NetAddressIPv4, NativeType>
        ::addr(input);
    *output = result;
  }

  static bool Deserialize(internal::NetAddressIPv4_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<NetAddressIPv4, NativeType>::Read(
        NetAddressIPv4_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const NetAddressIPv6Ptr& input);
void Serialize_(NetAddressIPv6Ptr input, mojo::internal::Buffer* buffer,
                internal::NetAddressIPv6_Data** output);
bool Deserialize_(internal::NetAddressIPv6_Data* input,
                  NetAddressIPv6Ptr* output,
                  mojo::internal::SerializationContext* context);


class NetAddressIPv6_Reader {
 public:
  NetAddressIPv6_Reader(internal::NetAddressIPv6_Data* data,
                         mojo::internal::SerializationContext* context);
  uint16_t port() const { return data_->port; }
  // TODO(rockot): Support reading other object kinds. (addr() omitted)

 private:
  internal::NetAddressIPv6_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct NetAddressIPv6_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::NetAddressIPv6_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field addr";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::NetAddressIPv6_Data** output) {
    internal::NetAddressIPv6_Data* result =
        internal::NetAddressIPv6_Data::New(buffer);
    result->port = mojo::StructTraits<NetAddressIPv6, NativeType>
        ::port(input);
    result->addr = mojo::StructTraits<NetAddressIPv6, NativeType>
        ::addr(input);
    *output = result;
  }

  static bool Deserialize(internal::NetAddressIPv6_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<NetAddressIPv6, NativeType>::Read(
        NetAddressIPv6_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const NetAddressPtr& input);
void Serialize_(NetAddressPtr input, mojo::internal::Buffer* buffer,
                internal::NetAddress_Data** output);
bool Deserialize_(internal::NetAddress_Data* input,
                  NetAddressPtr* output,
                  mojo::internal::SerializationContext* context);


class NetAddress_Reader {
 public:
  NetAddress_Reader(internal::NetAddress_Data* data,
                         mojo::internal::SerializationContext* context);
  NetAddressFamily family() const {
    return static_cast<NetAddressFamily>(data_->family.value);
  }
  NetAddressIPv4::Reader ipv4() const;
  NetAddressIPv6::Reader ipv6() const;

 private:
  internal::NetAddress_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct NetAddress_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::NetAddress_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field ipv4";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field ipv6";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::NetAddress_Data** output) {
    internal::NetAddress_Data* result =
        internal::NetAddress_Data::New(buffer);
    result->family = mojo::StructTraits<NetAddress, NativeType>
        ::family(input);
    result->ipv4 = mojo::StructTraits<NetAddress, NativeType>
        ::ipv4(input);
    result->ipv6 = mojo::StructTraits<NetAddress, NativeType>
        ::ipv6(input);
    *output = result;
  }

  static bool Deserialize(internal::NetAddress_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<NetAddress, NativeType>::Read(
        NetAddress_Reader(input, context), output);
  }
};  
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_NET_ADDRESS_MOJOM_H_