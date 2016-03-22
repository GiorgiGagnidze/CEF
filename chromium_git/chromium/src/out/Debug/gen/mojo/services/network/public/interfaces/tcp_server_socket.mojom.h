// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_TCP_SERVER_SOCKET_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_TCP_SERVER_SOCKET_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/tcp_server_socket.mojom-internal.h"
#include "mojo/services/network/public/interfaces/net_address.mojom.h"
#include "mojo/services/network/public/interfaces/network_error.mojom.h"
#include "mojo/services/network/public/interfaces/tcp_connected_socket.mojom.h"
namespace mojo {

class TCPServerSocket;
using TCPServerSocketPtr = mojo::InterfacePtr<TCPServerSocket>;
using TCPServerSocketPtrInfo = mojo::InterfacePtrInfo<TCPServerSocket>;
using TCPServerSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<TCPServerSocket>;
using TCPServerSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TCPServerSocket>;


class TCPServerSocketProxy;
class TCPServerSocketStub;

class TCPServerSocketRequestValidator;
class TCPServerSocketResponseValidator;

class TCPServerSocket {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::TCPServerSocket;

  using Proxy_ = TCPServerSocketProxy;
  using Stub_ = TCPServerSocketStub;

  using RequestValidator_ = TCPServerSocketRequestValidator;
  using ResponseValidator_ = TCPServerSocketResponseValidator;

  virtual ~TCPServerSocket() {}

  using AcceptCallback = mojo::Callback<void(mojo::NetworkErrorPtr, mojo::NetAddressPtr)>;
  virtual void Accept(mojo::ScopedDataPipeConsumerHandle send_stream, mojo::ScopedDataPipeProducerHandle receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> client_socket, const AcceptCallback& callback) = 0;
};

class TCPServerSocketProxy
    : public TCPServerSocket,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit TCPServerSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void Accept(
      mojo::ScopedDataPipeConsumerHandle send_stream, mojo::ScopedDataPipeProducerHandle receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> client_socket, const AcceptCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class TCPServerSocketStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  TCPServerSocketStub();
  ~TCPServerSocketStub() override;
  void set_sink(TCPServerSocket* sink) { sink_ = sink; }
  TCPServerSocket* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  TCPServerSocket* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class TCPServerSocketRequestValidator : public mojo::MessageFilter {
 public:
  explicit TCPServerSocketRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class TCPServerSocketResponseValidator : public mojo::MessageFilter {
 public:
  explicit TCPServerSocketResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_TCP_SERVER_SOCKET_MOJOM_H_