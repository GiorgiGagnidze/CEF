// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_TCP_CONNECTED_SOCKET_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_TCP_CONNECTED_SOCKET_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/tcp_connected_socket.mojom-internal.h"
namespace mojo {

class TCPConnectedSocket;
using TCPConnectedSocketPtr = mojo::InterfacePtr<TCPConnectedSocket>;
using TCPConnectedSocketPtrInfo = mojo::InterfacePtrInfo<TCPConnectedSocket>;
using TCPConnectedSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<TCPConnectedSocket>;
using TCPConnectedSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<TCPConnectedSocket>;


class TCPConnectedSocketProxy;
class TCPConnectedSocketStub;

class TCPConnectedSocketRequestValidator;

class TCPConnectedSocket {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::TCPConnectedSocket;

  using Proxy_ = TCPConnectedSocketProxy;
  using Stub_ = TCPConnectedSocketStub;

  using RequestValidator_ = TCPConnectedSocketRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~TCPConnectedSocket() {}
};

class TCPConnectedSocketProxy
    : public TCPConnectedSocket,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit TCPConnectedSocketProxy(mojo::MessageReceiverWithResponder* receiver);

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class TCPConnectedSocketStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  TCPConnectedSocketStub();
  ~TCPConnectedSocketStub() override;
  void set_sink(TCPConnectedSocket* sink) { sink_ = sink; }
  TCPConnectedSocket* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  TCPConnectedSocket* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class TCPConnectedSocketRequestValidator : public mojo::MessageFilter {
 public:
  explicit TCPConnectedSocketRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_TCP_CONNECTED_SOCKET_MOJOM_H_