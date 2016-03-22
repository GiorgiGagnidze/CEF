// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_HTTP_CONNECTION_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_HTTP_CONNECTION_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/http_connection.mojom-internal.h"
#include "mojo/services/network/public/interfaces/http_message.mojom.h"
#include "mojo/services/network/public/interfaces/network_error.mojom.h"
#include "mojo/services/network/public/interfaces/web_socket.mojom.h"
namespace mojo {

class HttpConnection;
using HttpConnectionPtr = mojo::InterfacePtr<HttpConnection>;
using HttpConnectionPtrInfo = mojo::InterfacePtrInfo<HttpConnection>;
using HttpConnectionAssociatedPtr =
    mojo::AssociatedInterfacePtr<HttpConnection>;
using HttpConnectionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HttpConnection>;

class HttpConnectionDelegate;
using HttpConnectionDelegatePtr = mojo::InterfacePtr<HttpConnectionDelegate>;
using HttpConnectionDelegatePtrInfo = mojo::InterfacePtrInfo<HttpConnectionDelegate>;
using HttpConnectionDelegateAssociatedPtr =
    mojo::AssociatedInterfacePtr<HttpConnectionDelegate>;
using HttpConnectionDelegateAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<HttpConnectionDelegate>;


class HttpConnectionProxy;
class HttpConnectionStub;

class HttpConnectionRequestValidator;
class HttpConnectionResponseValidator;

class HttpConnection {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::HttpConnection;

  using Proxy_ = HttpConnectionProxy;
  using Stub_ = HttpConnectionStub;

  using RequestValidator_ = HttpConnectionRequestValidator;
  using ResponseValidator_ = HttpConnectionResponseValidator;

  virtual ~HttpConnection() {}

  using SetSendBufferSizeCallback = mojo::Callback<void(mojo::NetworkErrorPtr)>;
  virtual void SetSendBufferSize(uint32_t size, const SetSendBufferSizeCallback& callback) = 0;

  using SetReceiveBufferSizeCallback = mojo::Callback<void(mojo::NetworkErrorPtr)>;
  virtual void SetReceiveBufferSize(uint32_t size, const SetReceiveBufferSizeCallback& callback) = 0;
};

class HttpConnectionDelegateProxy;
class HttpConnectionDelegateStub;

class HttpConnectionDelegateRequestValidator;
class HttpConnectionDelegateResponseValidator;

class HttpConnectionDelegate {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::HttpConnectionDelegate;

  using Proxy_ = HttpConnectionDelegateProxy;
  using Stub_ = HttpConnectionDelegateStub;

  using RequestValidator_ = HttpConnectionDelegateRequestValidator;
  using ResponseValidator_ = HttpConnectionDelegateResponseValidator;

  virtual ~HttpConnectionDelegate() {}

  using OnReceivedRequestCallback = mojo::Callback<void(mojo::HttpResponsePtr)>;
  virtual void OnReceivedRequest(mojo::HttpRequestPtr request, const OnReceivedRequestCallback& callback) = 0;

  using OnReceivedWebSocketRequestCallback = mojo::Callback<void(mojo::InterfaceRequest<mojo::WebSocket>, mojo::ScopedDataPipeConsumerHandle, mojo::WebSocketClientPtr)>;
  virtual void OnReceivedWebSocketRequest(mojo::HttpRequestPtr request, const OnReceivedWebSocketRequestCallback& callback) = 0;
};

class HttpConnectionProxy
    : public HttpConnection,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit HttpConnectionProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetSendBufferSize(
      uint32_t size, const SetSendBufferSizeCallback& callback
  ) override;
  void SetReceiveBufferSize(
      uint32_t size, const SetReceiveBufferSizeCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class HttpConnectionDelegateProxy
    : public HttpConnectionDelegate,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit HttpConnectionDelegateProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnReceivedRequest(
      mojo::HttpRequestPtr request, const OnReceivedRequestCallback& callback
  ) override;
  void OnReceivedWebSocketRequest(
      mojo::HttpRequestPtr request, const OnReceivedWebSocketRequestCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class HttpConnectionStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  HttpConnectionStub();
  ~HttpConnectionStub() override;
  void set_sink(HttpConnection* sink) { sink_ = sink; }
  HttpConnection* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  HttpConnection* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class HttpConnectionDelegateStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  HttpConnectionDelegateStub();
  ~HttpConnectionDelegateStub() override;
  void set_sink(HttpConnectionDelegate* sink) { sink_ = sink; }
  HttpConnectionDelegate* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  HttpConnectionDelegate* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class HttpConnectionRequestValidator : public mojo::MessageFilter {
 public:
  explicit HttpConnectionRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class HttpConnectionDelegateRequestValidator : public mojo::MessageFilter {
 public:
  explicit HttpConnectionDelegateRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class HttpConnectionResponseValidator : public mojo::MessageFilter {
 public:
  explicit HttpConnectionResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class HttpConnectionDelegateResponseValidator : public mojo::MessageFilter {
 public:
  explicit HttpConnectionDelegateResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_HTTP_CONNECTION_MOJOM_H_