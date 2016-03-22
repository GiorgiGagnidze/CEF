// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_TCP_BOUND_SOCKET_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_TCP_BOUND_SOCKET_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/tcp_bound_socket.mojom-internal.h"
#include "mojo/services/network/public/interfaces/net_address.mojom.h"
#include "mojo/services/network/public/interfaces/network_error.mojom.h"
#include "mojo/services/network/public/interfaces/tcp_connected_socket.mojom.h"
#include "mojo/services/network/public/interfaces/tcp_server_socket.mojom.h"
namespace mojo {

class TCPBoundSocket;
using TCPBoundSocketPtr = mojo::InterfacePtr<TCPBoundSocket>;
using TCPBoundSocketPtrInfo = mojo::InterfacePtrInfo<TCPBoundSocket>;
using TCPBoundSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<TCPBoundSocket>;
using TCPBoundSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TCPBoundSocket>;


class TCPBoundSocketProxy;
class TCPBoundSocketStub;

class TCPBoundSocketRequestValidator;
class TCPBoundSocketResponseValidator;

class TCPBoundSocket {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::TCPBoundSocket;

  using Proxy_ = TCPBoundSocketProxy;
  using Stub_ = TCPBoundSocketStub;

  using RequestValidator_ = TCPBoundSocketRequestValidator;
  using ResponseValidator_ = TCPBoundSocketResponseValidator;

  virtual ~TCPBoundSocket() {}

  using StartListeningCallback = mojo::Callback<void(mojo::NetworkErrorPtr)>;
  virtual void StartListening(mojo::InterfaceRequest<mojo::TCPServerSocket> server, const StartListeningCallback& callback) = 0;

  using ConnectCallback = mojo::Callback<void(mojo::NetworkErrorPtr)>;
  virtual void Connect(mojo::NetAddressPtr remote_address, mojo::ScopedDataPipeConsumerHandle send_stream, mojo::ScopedDataPipeProducerHandle receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> client_socket, const ConnectCallback& callback) = 0;
};

class TCPBoundSocketProxy
    : public TCPBoundSocket,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit TCPBoundSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void StartListening(
      mojo::InterfaceRequest<mojo::TCPServerSocket> server, const StartListeningCallback& callback
  ) override;
  void Connect(
      mojo::NetAddressPtr remote_address, mojo::ScopedDataPipeConsumerHandle send_stream, mojo::ScopedDataPipeProducerHandle receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> client_socket, const ConnectCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class TCPBoundSocketStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  TCPBoundSocketStub();
  ~TCPBoundSocketStub() override;
  void set_sink(TCPBoundSocket* sink) { sink_ = sink; }
  TCPBoundSocket* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  TCPBoundSocket* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class TCPBoundSocketRequestValidator : public mojo::MessageFilter {
 public:
  explicit TCPBoundSocketRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class TCPBoundSocketResponseValidator : public mojo::MessageFilter {
 public:
  explicit TCPBoundSocketResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_TCP_BOUND_SOCKET_MOJOM_H_