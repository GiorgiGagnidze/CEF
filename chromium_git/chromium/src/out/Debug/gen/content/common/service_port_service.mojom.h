// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_SERVICE_PORT_SERVICE_MOJOM_H_
#define CONTENT_COMMON_SERVICE_PORT_SERVICE_MOJOM_H_

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
#include "content/common/service_port_service.mojom-internal.h"
namespace content {

  
enum class ServicePortConnectResult : int32_t {
  ACCEPT,
  REJECT,
};
  
inline std::ostream& operator<<(std::ostream& os, ServicePortConnectResult value) {
  switch(value) {
    case ServicePortConnectResult::ACCEPT:
      return os << "ServicePortConnectResult::ACCEPT";
    case ServicePortConnectResult::REJECT:
      return os << "ServicePortConnectResult::REJECT";
    default:
      return os << "Unknown ServicePortConnectResult value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(ServicePortConnectResult value) {
  return ::content::internal::ServicePortConnectResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class ServicePortService;
using ServicePortServicePtr = mojo::InterfacePtr<ServicePortService>;
using ServicePortServicePtrInfo = mojo::InterfacePtrInfo<ServicePortService>;
using ServicePortServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServicePortService>;
using ServicePortServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServicePortService>;

class ServicePortServiceClient;
using ServicePortServiceClientPtr = mojo::InterfacePtr<ServicePortServiceClient>;
using ServicePortServiceClientPtrInfo = mojo::InterfacePtrInfo<ServicePortServiceClient>;
using ServicePortServiceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServicePortServiceClient>;
using ServicePortServiceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServicePortServiceClient>;

class ServicePortDispatcher;
using ServicePortDispatcherPtr = mojo::InterfacePtr<ServicePortDispatcher>;
using ServicePortDispatcherPtrInfo = mojo::InterfacePtrInfo<ServicePortDispatcher>;
using ServicePortDispatcherAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServicePortDispatcher>;
using ServicePortDispatcherAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServicePortDispatcher>;

class MojoTransferredMessagePort;
class MojoTransferredMessagePort_Reader;

using MojoTransferredMessagePortPtr = mojo::InlinedStructPtr<MojoTransferredMessagePort>;



class ServicePortServiceProxy;
class ServicePortServiceStub;

class ServicePortServiceRequestValidator;
class ServicePortServiceResponseValidator;

class ServicePortService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::ServicePortService;

  using Proxy_ = ServicePortServiceProxy;
  using Stub_ = ServicePortServiceStub;

  using RequestValidator_ = ServicePortServiceRequestValidator;
  using ResponseValidator_ = ServicePortServiceResponseValidator;

  virtual ~ServicePortService() {}

  virtual void SetClient(ServicePortServiceClientPtr client) = 0;

  using ConnectCallback = mojo::Callback<void(ServicePortConnectResult, int32_t)>;
  virtual void Connect(const mojo::String& target_url, const mojo::String& origin, const ConnectCallback& callback) = 0;

  virtual void PostMessageToPort(int32_t port_id, const mojo::String& message, mojo::Array<MojoTransferredMessagePortPtr> ports) = 0;

  virtual void ClosePort(int32_t port_id) = 0;
};

class ServicePortServiceClientProxy;
class ServicePortServiceClientStub;

class ServicePortServiceClientRequestValidator;

class ServicePortServiceClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::ServicePortServiceClient;

  using Proxy_ = ServicePortServiceClientProxy;
  using Stub_ = ServicePortServiceClientStub;

  using RequestValidator_ = ServicePortServiceClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~ServicePortServiceClient() {}

  virtual void PostMessageToPort(int32_t port_id, const mojo::String& message, mojo::Array<MojoTransferredMessagePortPtr> ports, mojo::Array<int32_t> new_routing_ids) = 0;
};

class ServicePortDispatcherProxy;
class ServicePortDispatcherStub;

class ServicePortDispatcherRequestValidator;
class ServicePortDispatcherResponseValidator;

class ServicePortDispatcher {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::ServicePortDispatcher;

  using Proxy_ = ServicePortDispatcherProxy;
  using Stub_ = ServicePortDispatcherStub;

  using RequestValidator_ = ServicePortDispatcherRequestValidator;
  using ResponseValidator_ = ServicePortDispatcherResponseValidator;

  virtual ~ServicePortDispatcher() {}

  using ConnectCallback = mojo::Callback<void(ServicePortConnectResult, mojo::String, mojo::String)>;
  virtual void Connect(const mojo::String& target_url, const mojo::String& origin, int32_t port_id, const ConnectCallback& callback) = 0;
};

class ServicePortServiceProxy
    : public ServicePortService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ServicePortServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(
      ServicePortServiceClientPtr client
  ) override;
  void Connect(
      const mojo::String& target_url, const mojo::String& origin, const ConnectCallback& callback
  ) override;
  void PostMessageToPort(
      int32_t port_id, const mojo::String& message, mojo::Array<MojoTransferredMessagePortPtr> ports
  ) override;
  void ClosePort(
      int32_t port_id
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class ServicePortServiceClientProxy
    : public ServicePortServiceClient,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ServicePortServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void PostMessageToPort(
      int32_t port_id, const mojo::String& message, mojo::Array<MojoTransferredMessagePortPtr> ports, mojo::Array<int32_t> new_routing_ids
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class ServicePortDispatcherProxy
    : public ServicePortDispatcher,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ServicePortDispatcherProxy(mojo::MessageReceiverWithResponder* receiver);
  void Connect(
      const mojo::String& target_url, const mojo::String& origin, int32_t port_id, const ConnectCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class ServicePortServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ServicePortServiceStub();
  ~ServicePortServiceStub() override;
  void set_sink(ServicePortService* sink) { sink_ = sink; }
  ServicePortService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ServicePortService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ServicePortServiceClientStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ServicePortServiceClientStub();
  ~ServicePortServiceClientStub() override;
  void set_sink(ServicePortServiceClient* sink) { sink_ = sink; }
  ServicePortServiceClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ServicePortServiceClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ServicePortDispatcherStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ServicePortDispatcherStub();
  ~ServicePortDispatcherStub() override;
  void set_sink(ServicePortDispatcher* sink) { sink_ = sink; }
  ServicePortDispatcher* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ServicePortDispatcher* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ServicePortServiceRequestValidator : public mojo::MessageFilter {
 public:
  explicit ServicePortServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ServicePortServiceClientRequestValidator : public mojo::MessageFilter {
 public:
  explicit ServicePortServiceClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ServicePortDispatcherRequestValidator : public mojo::MessageFilter {
 public:
  explicit ServicePortDispatcherRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ServicePortServiceResponseValidator : public mojo::MessageFilter {
 public:
  explicit ServicePortServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ServicePortDispatcherResponseValidator : public mojo::MessageFilter {
 public:
  explicit ServicePortDispatcherResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



class MojoTransferredMessagePort_Reader;

class MojoTransferredMessagePort {
 public:
  using Data_ = internal::MojoTransferredMessagePort_Data;
  using Reader = MojoTransferredMessagePort_Reader;

  static MojoTransferredMessagePortPtr New();

  template <typename U>
  static MojoTransferredMessagePortPtr From(const U& u) {
    return mojo::TypeConverter<MojoTransferredMessagePortPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MojoTransferredMessagePort>::Convert(*this);
  }

  MojoTransferredMessagePort();
  ~MojoTransferredMessagePort();


  MojoTransferredMessagePortPtr Clone() const;
  bool Equals(const MojoTransferredMessagePort& other) const;

  int32_t id;
  bool send_messages_as_values;
};




size_t GetSerializedSize_(const MojoTransferredMessagePortPtr& input);
void Serialize_(MojoTransferredMessagePortPtr input, mojo::internal::Buffer* buffer,
                internal::MojoTransferredMessagePort_Data** output);
bool Deserialize_(internal::MojoTransferredMessagePort_Data* input,
                  MojoTransferredMessagePortPtr* output,
                  mojo::internal::SerializationContext* context);


class MojoTransferredMessagePort_Reader {
 public:
  MojoTransferredMessagePort_Reader(internal::MojoTransferredMessagePort_Data* data,
                         mojo::internal::SerializationContext* context);
  int32_t id() const { return data_->id; }
  bool send_messages_as_values() const { return data_->send_messages_as_values; }

 private:
  internal::MojoTransferredMessagePort_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct MojoTransferredMessagePort_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::MojoTransferredMessagePort_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::MojoTransferredMessagePort_Data** output) {
    internal::MojoTransferredMessagePort_Data* result =
        internal::MojoTransferredMessagePort_Data::New(buffer);
    result->id = mojo::StructTraits<MojoTransferredMessagePort, NativeType>
        ::id(input);
    result->send_messages_as_values = mojo::StructTraits<MojoTransferredMessagePort, NativeType>
        ::send_messages_as_values(input);
    *output = result;
  }

  static bool Deserialize(internal::MojoTransferredMessagePort_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<MojoTransferredMessagePort, NativeType>::Read(
        MojoTransferredMessagePort_Reader(input, context), output);
  }
};  
}  // namespace content

#endif  // CONTENT_COMMON_SERVICE_PORT_SERVICE_MOJOM_H_