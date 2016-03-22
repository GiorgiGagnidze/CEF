// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef NET_INTERFACES_PROXY_RESOLVER_SERVICE_MOJOM_H_
#define NET_INTERFACES_PROXY_RESOLVER_SERVICE_MOJOM_H_

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
#include "net/interfaces/proxy_resolver_service.mojom-internal.h"
#include "net/interfaces/host_resolver_service.mojom.h"
namespace net {
namespace interfaces {

  
enum class ProxyScheme : int32_t {
  INVALID,
  DIRECT,
  HTTP,
  SOCKS4,
  SOCKS5,
  HTTPS,
  QUIC,
};
  
inline std::ostream& operator<<(std::ostream& os, ProxyScheme value) {
  switch(value) {
    case ProxyScheme::INVALID:
      return os << "ProxyScheme::INVALID";
    case ProxyScheme::DIRECT:
      return os << "ProxyScheme::DIRECT";
    case ProxyScheme::HTTP:
      return os << "ProxyScheme::HTTP";
    case ProxyScheme::SOCKS4:
      return os << "ProxyScheme::SOCKS4";
    case ProxyScheme::SOCKS5:
      return os << "ProxyScheme::SOCKS5";
    case ProxyScheme::HTTPS:
      return os << "ProxyScheme::HTTPS";
    case ProxyScheme::QUIC:
      return os << "ProxyScheme::QUIC";
    default:
      return os << "Unknown ProxyScheme value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(ProxyScheme value) {
  return ::net::interfaces::internal::ProxyScheme_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class ProxyResolver;
using ProxyResolverPtr = mojo::InterfacePtr<ProxyResolver>;
using ProxyResolverPtrInfo = mojo::InterfacePtrInfo<ProxyResolver>;
using ProxyResolverAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyResolver>;
using ProxyResolverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyResolver>;

class ProxyResolverRequestClient;
using ProxyResolverRequestClientPtr = mojo::InterfacePtr<ProxyResolverRequestClient>;
using ProxyResolverRequestClientPtrInfo = mojo::InterfacePtrInfo<ProxyResolverRequestClient>;
using ProxyResolverRequestClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyResolverRequestClient>;
using ProxyResolverRequestClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyResolverRequestClient>;

class ProxyResolverFactory;
using ProxyResolverFactoryPtr = mojo::InterfacePtr<ProxyResolverFactory>;
using ProxyResolverFactoryPtrInfo = mojo::InterfacePtrInfo<ProxyResolverFactory>;
using ProxyResolverFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyResolverFactory>;
using ProxyResolverFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyResolverFactory>;

class ProxyResolverFactoryRequestClient;
using ProxyResolverFactoryRequestClientPtr = mojo::InterfacePtr<ProxyResolverFactoryRequestClient>;
using ProxyResolverFactoryRequestClientPtrInfo = mojo::InterfacePtrInfo<ProxyResolverFactoryRequestClient>;
using ProxyResolverFactoryRequestClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProxyResolverFactoryRequestClient>;
using ProxyResolverFactoryRequestClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProxyResolverFactoryRequestClient>;

class ProxyServer;
class ProxyServer_Reader;

using ProxyServerPtr = mojo::InlinedStructPtr<ProxyServer>;



class ProxyResolverProxy;
class ProxyResolverStub;

class ProxyResolverRequestValidator;

class ProxyResolver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::net::interfaces::ProxyResolver;

  using Proxy_ = ProxyResolverProxy;
  using Stub_ = ProxyResolverStub;

  using RequestValidator_ = ProxyResolverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~ProxyResolver() {}

  virtual void GetProxyForUrl(const mojo::String& url, ProxyResolverRequestClientPtr client) = 0;
};

class ProxyResolverRequestClientProxy;
class ProxyResolverRequestClientStub;

class ProxyResolverRequestClientRequestValidator;

class ProxyResolverRequestClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::net::interfaces::ProxyResolverRequestClient;

  using Proxy_ = ProxyResolverRequestClientProxy;
  using Stub_ = ProxyResolverRequestClientStub;

  using RequestValidator_ = ProxyResolverRequestClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~ProxyResolverRequestClient() {}

  virtual void ReportResult(int32_t error, mojo::Array<ProxyServerPtr> proxy_servers) = 0;

  virtual void Alert(const mojo::String& error) = 0;

  virtual void OnError(int32_t line_number, const mojo::String& error) = 0;

  virtual void ResolveDns(net::interfaces::HostResolverRequestInfoPtr request_info, net::interfaces::HostResolverRequestClientPtr client) = 0;
};

class ProxyResolverFactoryProxy;
class ProxyResolverFactoryStub;

class ProxyResolverFactoryRequestValidator;

class ProxyResolverFactory {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::net::interfaces::ProxyResolverFactory;

  using Proxy_ = ProxyResolverFactoryProxy;
  using Stub_ = ProxyResolverFactoryStub;

  using RequestValidator_ = ProxyResolverFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~ProxyResolverFactory() {}

  virtual void CreateResolver(const mojo::String& pac_script, mojo::InterfaceRequest<ProxyResolver> resolver, ProxyResolverFactoryRequestClientPtr client) = 0;
};

class ProxyResolverFactoryRequestClientProxy;
class ProxyResolverFactoryRequestClientStub;

class ProxyResolverFactoryRequestClientRequestValidator;

class ProxyResolverFactoryRequestClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::net::interfaces::ProxyResolverFactoryRequestClient;

  using Proxy_ = ProxyResolverFactoryRequestClientProxy;
  using Stub_ = ProxyResolverFactoryRequestClientStub;

  using RequestValidator_ = ProxyResolverFactoryRequestClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~ProxyResolverFactoryRequestClient() {}

  virtual void ReportResult(int32_t error) = 0;

  virtual void Alert(const mojo::String& error) = 0;

  virtual void OnError(int32_t line_number, const mojo::String& error) = 0;

  virtual void ResolveDns(net::interfaces::HostResolverRequestInfoPtr request_info, net::interfaces::HostResolverRequestClientPtr client) = 0;
};

class ProxyResolverProxy
    : public ProxyResolver,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ProxyResolverProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetProxyForUrl(
      const mojo::String& url, ProxyResolverRequestClientPtr client
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class ProxyResolverRequestClientProxy
    : public ProxyResolverRequestClient,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ProxyResolverRequestClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ReportResult(
      int32_t error, mojo::Array<ProxyServerPtr> proxy_servers
  ) override;
  void Alert(
      const mojo::String& error
  ) override;
  void OnError(
      int32_t line_number, const mojo::String& error
  ) override;
  void ResolveDns(
      net::interfaces::HostResolverRequestInfoPtr request_info, net::interfaces::HostResolverRequestClientPtr client
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class ProxyResolverFactoryProxy
    : public ProxyResolverFactory,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ProxyResolverFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateResolver(
      const mojo::String& pac_script, mojo::InterfaceRequest<ProxyResolver> resolver, ProxyResolverFactoryRequestClientPtr client
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class ProxyResolverFactoryRequestClientProxy
    : public ProxyResolverFactoryRequestClient,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ProxyResolverFactoryRequestClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void ReportResult(
      int32_t error
  ) override;
  void Alert(
      const mojo::String& error
  ) override;
  void OnError(
      int32_t line_number, const mojo::String& error
  ) override;
  void ResolveDns(
      net::interfaces::HostResolverRequestInfoPtr request_info, net::interfaces::HostResolverRequestClientPtr client
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class ProxyResolverStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ProxyResolverStub();
  ~ProxyResolverStub() override;
  void set_sink(ProxyResolver* sink) { sink_ = sink; }
  ProxyResolver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ProxyResolver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ProxyResolverRequestClientStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ProxyResolverRequestClientStub();
  ~ProxyResolverRequestClientStub() override;
  void set_sink(ProxyResolverRequestClient* sink) { sink_ = sink; }
  ProxyResolverRequestClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ProxyResolverRequestClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ProxyResolverFactoryStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ProxyResolverFactoryStub();
  ~ProxyResolverFactoryStub() override;
  void set_sink(ProxyResolverFactory* sink) { sink_ = sink; }
  ProxyResolverFactory* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ProxyResolverFactory* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ProxyResolverFactoryRequestClientStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ProxyResolverFactoryRequestClientStub();
  ~ProxyResolverFactoryRequestClientStub() override;
  void set_sink(ProxyResolverFactoryRequestClient* sink) { sink_ = sink; }
  ProxyResolverFactoryRequestClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ProxyResolverFactoryRequestClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ProxyResolverRequestValidator : public mojo::MessageFilter {
 public:
  explicit ProxyResolverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ProxyResolverRequestClientRequestValidator : public mojo::MessageFilter {
 public:
  explicit ProxyResolverRequestClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ProxyResolverFactoryRequestValidator : public mojo::MessageFilter {
 public:
  explicit ProxyResolverFactoryRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ProxyResolverFactoryRequestClientRequestValidator : public mojo::MessageFilter {
 public:
  explicit ProxyResolverFactoryRequestClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



class ProxyServer_Reader;

class ProxyServer {
 public:
  using Data_ = internal::ProxyServer_Data;
  using Reader = ProxyServer_Reader;

  static ProxyServerPtr New();

  template <typename U>
  static ProxyServerPtr From(const U& u) {
    return mojo::TypeConverter<ProxyServerPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ProxyServer>::Convert(*this);
  }

  ProxyServer();
  ~ProxyServer();


  ProxyServerPtr Clone() const;
  bool Equals(const ProxyServer& other) const;

  ProxyScheme scheme;
  mojo::String host;
  uint16_t port;
};




size_t GetSerializedSize_(const ProxyServerPtr& input);
void Serialize_(ProxyServerPtr input, mojo::internal::Buffer* buffer,
                internal::ProxyServer_Data** output);
bool Deserialize_(internal::ProxyServer_Data* input,
                  ProxyServerPtr* output,
                  mojo::internal::SerializationContext* context);


class ProxyServer_Reader {
 public:
  ProxyServer_Reader(internal::ProxyServer_Data* data,
                         mojo::internal::SerializationContext* context);
  ProxyScheme scheme() const {
    return static_cast<ProxyScheme>(data_->scheme.value);
  }
  // TODO(rockot): Support reading other object kinds. (host() omitted)
  uint16_t port() const { return data_->port; }

 private:
  internal::ProxyServer_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct ProxyServer_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::ProxyServer_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field host";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::ProxyServer_Data** output) {
    internal::ProxyServer_Data* result =
        internal::ProxyServer_Data::New(buffer);
    result->scheme = mojo::StructTraits<ProxyServer, NativeType>
        ::scheme(input);
    result->host = mojo::StructTraits<ProxyServer, NativeType>
        ::host(input);
    result->port = mojo::StructTraits<ProxyServer, NativeType>
        ::port(input);
    *output = result;
  }

  static bool Deserialize(internal::ProxyServer_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<ProxyServer, NativeType>::Read(
        ProxyServer_Reader(input, context), output);
  }
};  
}  // namespace interfaces
}  // namespace net

#endif  // NET_INTERFACES_PROXY_RESOLVER_SERVICE_MOJOM_H_