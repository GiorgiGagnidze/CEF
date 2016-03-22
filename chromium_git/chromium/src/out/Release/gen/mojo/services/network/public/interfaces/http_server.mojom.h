// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_HTTP_SERVER_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_HTTP_SERVER_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/http_server.mojom-internal.h"
#include "mojo/services/network/public/interfaces/http_connection.mojom.h"
namespace mojo {

class HttpServerDelegate;
using HttpServerDelegatePtr = mojo::InterfacePtr<HttpServerDelegate>;
using HttpServerDelegatePtrInfo = mojo::InterfacePtrInfo<HttpServerDelegate>;
using HttpServerDelegateAssociatedPtr =
    mojo::AssociatedInterfacePtr<HttpServerDelegate>;
using HttpServerDelegateAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HttpServerDelegate>;


class HttpServerDelegateProxy;
class HttpServerDelegateStub;

class HttpServerDelegateRequestValidator;

class HttpServerDelegate {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::HttpServerDelegate;

  using Proxy_ = HttpServerDelegateProxy;
  using Stub_ = HttpServerDelegateStub;

  using RequestValidator_ = HttpServerDelegateRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~HttpServerDelegate() {}

  virtual void OnConnected(mojo::HttpConnectionPtr connection, mojo::InterfaceRequest<mojo::HttpConnectionDelegate> delegate) = 0;
};

class HttpServerDelegateProxy
    : public HttpServerDelegate,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit HttpServerDelegateProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnConnected(
      mojo::HttpConnectionPtr connection, mojo::InterfaceRequest<mojo::HttpConnectionDelegate> delegate
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class HttpServerDelegateStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  HttpServerDelegateStub();
  ~HttpServerDelegateStub() override;
  void set_sink(HttpServerDelegate* sink) { sink_ = sink; }
  HttpServerDelegate* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  HttpServerDelegate* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class HttpServerDelegateRequestValidator : public mojo::MessageFilter {
 public:
  explicit HttpServerDelegateRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_HTTP_SERVER_MOJOM_H_