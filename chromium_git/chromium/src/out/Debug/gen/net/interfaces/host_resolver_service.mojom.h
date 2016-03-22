// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_H_
#define NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_H_

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
#include "net/interfaces/host_resolver_service.mojom-internal.h"
namespace net {
namespace interfaces {

  
enum class AddressFamily : int32_t {
  UNSPECIFIED,
  IPV4,
  IPV6,
};
  
inline std::ostream& operator<<(std::ostream& os, AddressFamily value) {
  switch(value) {
    case AddressFamily::UNSPECIFIED:
      return os << "AddressFamily::UNSPECIFIED";
    case AddressFamily::IPV4:
      return os << "AddressFamily::IPV4";
    case AddressFamily::IPV6:
      return os << "AddressFamily::IPV6";
    default:
      return os << "Unknown AddressFamily value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(AddressFamily value) {
  return ::net::interfaces::internal::AddressFamily_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class HostResolverRequestClient;
using HostResolverRequestClientPtr = mojo::InterfacePtr<HostResolverRequestClient>;
using HostResolverRequestClientPtrInfo = mojo::InterfacePtrInfo<HostResolverRequestClient>;
using HostResolverRequestClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<HostResolverRequestClient>;
using HostResolverRequestClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HostResolverRequestClient>;

class HostResolverRequestInfo;
class HostResolverRequestInfo_Reader;

using HostResolverRequestInfoPtr = mojo::InlinedStructPtr<HostResolverRequestInfo>;


class IPEndPoint;
class IPEndPoint_Reader;

using IPEndPointPtr = mojo::StructPtr<IPEndPoint>;


class AddressList;
class AddressList_Reader;

using AddressListPtr = mojo::StructPtr<AddressList>;



class HostResolverRequestClientProxy;
class HostResolverRequestClientStub;

class HostResolverRequestClientRequestValidator;

class HostResolverRequestClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::net::interfaces::HostResolverRequestClient;

  using Proxy_ = HostResolverRequestClientProxy;
  using Stub_ = HostResolverRequestClientStub;

  using RequestValidator_ = HostResolverRequestClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~HostResolverRequestClient() {}

  virtual void ReportResult(int32_t error, AddressListPtr result) = 0;
};

class HostResolverRequestClientProxy
    : public HostResolverRequestClient,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit HostResolverRequestClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ReportResult(
      int32_t error, AddressListPtr result
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class HostResolverRequestClientStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  HostResolverRequestClientStub();
  ~HostResolverRequestClientStub() override;
  void set_sink(HostResolverRequestClient* sink) { sink_ = sink; }
  HostResolverRequestClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  HostResolverRequestClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class HostResolverRequestClientRequestValidator : public mojo::MessageFilter {
 public:
  explicit HostResolverRequestClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



class HostResolverRequestInfo_Reader;

class HostResolverRequestInfo {
 public:
  using Data_ = internal::HostResolverRequestInfo_Data;
  using Reader = HostResolverRequestInfo_Reader;

  static HostResolverRequestInfoPtr New();

  template <typename U>
  static HostResolverRequestInfoPtr From(const U& u) {
    return mojo::TypeConverter<HostResolverRequestInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HostResolverRequestInfo>::Convert(*this);
  }

  HostResolverRequestInfo();
  ~HostResolverRequestInfo();


  HostResolverRequestInfoPtr Clone() const;
  bool Equals(const HostResolverRequestInfo& other) const;

  mojo::String host;
  uint16_t port;
  AddressFamily address_family;
  bool is_my_ip_address;
};






class IPEndPoint_Reader;

class IPEndPoint {
 public:
  using Data_ = internal::IPEndPoint_Data;
  using Reader = IPEndPoint_Reader;

  static IPEndPointPtr New();

  template <typename U>
  static IPEndPointPtr From(const U& u) {
    return mojo::TypeConverter<IPEndPointPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IPEndPoint>::Convert(*this);
  }

  IPEndPoint();
  ~IPEndPoint();


  IPEndPointPtr Clone() const;
  bool Equals(const IPEndPoint& other) const;

  mojo::Array<uint8_t> address;
  uint16_t port;
};


class AddressList_Reader;

class AddressList {
 public:
  using Data_ = internal::AddressList_Data;
  using Reader = AddressList_Reader;

  static AddressListPtr New();

  template <typename U>
  static AddressListPtr From(const U& u) {
    return mojo::TypeConverter<AddressListPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AddressList>::Convert(*this);
  }

  AddressList();
  ~AddressList();


  AddressListPtr Clone() const;
  bool Equals(const AddressList& other) const;

  mojo::Array<IPEndPointPtr> addresses;
};


size_t GetSerializedSize_(const HostResolverRequestInfoPtr& input);
void Serialize_(HostResolverRequestInfoPtr input, mojo::internal::Buffer* buffer,
                internal::HostResolverRequestInfo_Data** output);
bool Deserialize_(internal::HostResolverRequestInfo_Data* input,
                  HostResolverRequestInfoPtr* output,
                  mojo::internal::SerializationContext* context);


class HostResolverRequestInfo_Reader {
 public:
  HostResolverRequestInfo_Reader(internal::HostResolverRequestInfo_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (host() omitted)
  uint16_t port() const { return data_->port; }
  AddressFamily address_family() const {
    return static_cast<AddressFamily>(data_->address_family.value);
  }
  bool is_my_ip_address() const { return data_->is_my_ip_address; }

 private:
  internal::HostResolverRequestInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct HostResolverRequestInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::HostResolverRequestInfo_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field host";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::HostResolverRequestInfo_Data** output) {
    internal::HostResolverRequestInfo_Data* result =
        internal::HostResolverRequestInfo_Data::New(buffer);
    result->host = mojo::StructTraits<HostResolverRequestInfo, NativeType>
        ::host(input);
    result->port = mojo::StructTraits<HostResolverRequestInfo, NativeType>
        ::port(input);
    result->address_family = mojo::StructTraits<HostResolverRequestInfo, NativeType>
        ::address_family(input);
    result->is_my_ip_address = mojo::StructTraits<HostResolverRequestInfo, NativeType>
        ::is_my_ip_address(input);
    *output = result;
  }

  static bool Deserialize(internal::HostResolverRequestInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<HostResolverRequestInfo, NativeType>::Read(
        HostResolverRequestInfo_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const IPEndPointPtr& input);
void Serialize_(IPEndPointPtr input, mojo::internal::Buffer* buffer,
                internal::IPEndPoint_Data** output);
bool Deserialize_(internal::IPEndPoint_Data* input,
                  IPEndPointPtr* output,
                  mojo::internal::SerializationContext* context);


class IPEndPoint_Reader {
 public:
  IPEndPoint_Reader(internal::IPEndPoint_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (address() omitted)
  uint16_t port() const { return data_->port; }

 private:
  internal::IPEndPoint_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct IPEndPoint_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::IPEndPoint_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field address";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::IPEndPoint_Data** output) {
    internal::IPEndPoint_Data* result =
        internal::IPEndPoint_Data::New(buffer);
    result->address = mojo::StructTraits<IPEndPoint, NativeType>
        ::address(input);
    result->port = mojo::StructTraits<IPEndPoint, NativeType>
        ::port(input);
    *output = result;
  }

  static bool Deserialize(internal::IPEndPoint_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<IPEndPoint, NativeType>::Read(
        IPEndPoint_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const AddressListPtr& input);
void Serialize_(AddressListPtr input, mojo::internal::Buffer* buffer,
                internal::AddressList_Data** output);
bool Deserialize_(internal::AddressList_Data* input,
                  AddressListPtr* output,
                  mojo::internal::SerializationContext* context);


class AddressList_Reader {
 public:
  AddressList_Reader(internal::AddressList_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (addresses() omitted)

 private:
  internal::AddressList_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct AddressList_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::AddressList_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field addresses";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::AddressList_Data** output) {
    internal::AddressList_Data* result =
        internal::AddressList_Data::New(buffer);
    result->addresses = mojo::StructTraits<AddressList, NativeType>
        ::addresses(input);
    *output = result;
  }

  static bool Deserialize(internal::AddressList_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<AddressList, NativeType>::Read(
        AddressList_Reader(input, context), output);
  }
};  
}  // namespace interfaces
}  // namespace net

#endif  // NET_INTERFACES_HOST_RESOLVER_SERVICE_MOJOM_H_