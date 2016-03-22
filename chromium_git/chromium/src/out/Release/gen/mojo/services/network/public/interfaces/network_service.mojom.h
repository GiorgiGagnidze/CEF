// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_NETWORK_SERVICE_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_NETWORK_SERVICE_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/network_service.mojom-internal.h"
#include "mojo/services/network/public/interfaces/cookie_store.mojom.h"
#include "mojo/services/network/public/interfaces/http_server.mojom.h"
#include "mojo/services/network/public/interfaces/net_address.mojom.h"
#include "mojo/services/network/public/interfaces/network_error.mojom.h"
#include "mojo/services/network/public/interfaces/tcp_bound_socket.mojom.h"
#include "mojo/services/network/public/interfaces/tcp_connected_socket.mojom.h"
#include "mojo/services/network/public/interfaces/udp_socket.mojom.h"
#include "mojo/services/network/public/interfaces/web_socket.mojom.h"
namespace mojo {

class NetworkService;
using NetworkServicePtr = mojo::InterfacePtr<NetworkService>;
using NetworkServicePtrInfo = mojo::InterfacePtrInfo<NetworkService>;
using NetworkServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<NetworkService>;
using NetworkServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<NetworkService>;


class NetworkServiceProxy;
class NetworkServiceStub;

class NetworkServiceRequestValidator;
class NetworkServiceResponseValidator;

class NetworkService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::NetworkService;

  using Proxy_ = NetworkServiceProxy;
  using Stub_ = NetworkServiceStub;

  using RequestValidator_ = NetworkServiceRequestValidator;
  using ResponseValidator_ = NetworkServiceResponseValidator;

  virtual ~NetworkService() {}

  using CreateTCPBoundSocketCallback = mojo::Callback<void(mojo::NetworkErrorPtr, mojo::NetAddressPtr)>;
  virtual void CreateTCPBoundSocket(mojo::NetAddressPtr local_address, mojo::InterfaceRequest<mojo::TCPBoundSocket> bound_socket, const CreateTCPBoundSocketCallback& callback) = 0;

  using CreateTCPConnectedSocketCallback = mojo::Callback<void(mojo::NetworkErrorPtr, mojo::NetAddressPtr)>;
  virtual void CreateTCPConnectedSocket(mojo::NetAddressPtr remote_address, mojo::ScopedDataPipeConsumerHandle send_stream, mojo::ScopedDataPipeProducerHandle receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> client_socket, const CreateTCPConnectedSocketCallback& callback) = 0;

  virtual void CreateUDPSocket(mojo::InterfaceRequest<mojo::UDPSocket> socket) = 0;

  using CreateHttpServerCallback = mojo::Callback<void(mojo::NetworkErrorPtr, mojo::NetAddressPtr)>;
  virtual void CreateHttpServer(mojo::NetAddressPtr local_address, mojo::HttpServerDelegatePtr delegate, const CreateHttpServerCallback& callback) = 0;

  using GetMimeTypeFromFileCallback = mojo::Callback<void(mojo::String)>;
  virtual void GetMimeTypeFromFile(const mojo::String& file_path, const GetMimeTypeFromFileCallback& callback) = 0;
};

class NetworkServiceProxy
    : public NetworkService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit NetworkServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateTCPBoundSocket(
      mojo::NetAddressPtr local_address, mojo::InterfaceRequest<mojo::TCPBoundSocket> bound_socket, const CreateTCPBoundSocketCallback& callback
  ) override;
  void CreateTCPConnectedSocket(
      mojo::NetAddressPtr remote_address, mojo::ScopedDataPipeConsumerHandle send_stream, mojo::ScopedDataPipeProducerHandle receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> client_socket, const CreateTCPConnectedSocketCallback& callback
  ) override;
  void CreateUDPSocket(
      mojo::InterfaceRequest<mojo::UDPSocket> socket
  ) override;
  void CreateHttpServer(
      mojo::NetAddressPtr local_address, mojo::HttpServerDelegatePtr delegate, const CreateHttpServerCallback& callback
  ) override;
  void GetMimeTypeFromFile(
      const mojo::String& file_path, const GetMimeTypeFromFileCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class NetworkServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  NetworkServiceStub();
  ~NetworkServiceStub() override;
  void set_sink(NetworkService* sink) { sink_ = sink; }
  NetworkService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  NetworkService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class NetworkServiceRequestValidator : public mojo::MessageFilter {
 public:
  explicit NetworkServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class NetworkServiceResponseValidator : public mojo::MessageFilter {
 public:
  explicit NetworkServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_NETWORK_SERVICE_MOJOM_H_