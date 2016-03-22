// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_WEB_SOCKET_FACTORY_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_WEB_SOCKET_FACTORY_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/web_socket_factory.mojom-internal.h"
#include "mojo/services/network/public/interfaces/web_socket.mojom.h"
namespace mojo {

class WebSocketFactory;
using WebSocketFactoryPtr = mojo::InterfacePtr<WebSocketFactory>;
using WebSocketFactoryPtrInfo = mojo::InterfacePtrInfo<WebSocketFactory>;
using WebSocketFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebSocketFactory>;
using WebSocketFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebSocketFactory>;


class WebSocketFactoryProxy;
class WebSocketFactoryStub;

class WebSocketFactoryRequestValidator;

class WebSocketFactory {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::WebSocketFactory;

  using Proxy_ = WebSocketFactoryProxy;
  using Stub_ = WebSocketFactoryStub;

  using RequestValidator_ = WebSocketFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~WebSocketFactory() {}

  virtual void CreateWebSocket(mojo::InterfaceRequest<mojo::WebSocket> socket) = 0;
};

class WebSocketFactoryProxy
    : public WebSocketFactory,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit WebSocketFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateWebSocket(
      mojo::InterfaceRequest<mojo::WebSocket> socket
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class WebSocketFactoryStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  WebSocketFactoryStub();
  ~WebSocketFactoryStub() override;
  void set_sink(WebSocketFactory* sink) { sink_ = sink; }
  WebSocketFactory* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WebSocketFactory* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class WebSocketFactoryRequestValidator : public mojo::MessageFilter {
 public:
  explicit WebSocketFactoryRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_WEB_SOCKET_FACTORY_MOJOM_H_