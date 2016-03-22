// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_WEB_SOCKET_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_WEB_SOCKET_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/web_socket.mojom-internal.h"
#include "mojo/services/network/public/interfaces/network_error.mojom.h"
namespace mojo {

class WebSocket;
using WebSocketPtr = mojo::InterfacePtr<WebSocket>;
using WebSocketPtrInfo = mojo::InterfacePtrInfo<WebSocket>;
using WebSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebSocket>;
using WebSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebSocket>;

class WebSocketClient;
using WebSocketClientPtr = mojo::InterfacePtr<WebSocketClient>;
using WebSocketClientPtrInfo = mojo::InterfacePtrInfo<WebSocketClient>;
using WebSocketClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebSocketClient>;
using WebSocketClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebSocketClient>;


class WebSocketProxy;
class WebSocketStub;

class WebSocketRequestValidator;

class WebSocket {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::WebSocket;

  using Proxy_ = WebSocketProxy;
  using Stub_ = WebSocketStub;

  using RequestValidator_ = WebSocketRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  
  enum class MessageType : int32_t {
    CONTINUATION,
    TEXT,
    BINARY,
  };
  static const uint16_t kAbnormalCloseCode = 1006U;
  virtual ~WebSocket() {}

  virtual void Connect(const mojo::String& url, mojo::Array<mojo::String> protocols, const mojo::String& origin, mojo::ScopedDataPipeConsumerHandle send_stream, WebSocketClientPtr client) = 0;

  virtual void Send(bool fin, WebSocket::MessageType type, uint32_t num_bytes) = 0;

  virtual void FlowControl(int64_t quota) = 0;

  virtual void Close(uint16_t code, const mojo::String& reason) = 0;
};

class WebSocketClientProxy;
class WebSocketClientStub;

class WebSocketClientRequestValidator;

class WebSocketClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::WebSocketClient;

  using Proxy_ = WebSocketClientProxy;
  using Stub_ = WebSocketClientStub;

  using RequestValidator_ = WebSocketClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~WebSocketClient() {}

  virtual void DidConnect(const mojo::String& selected_subprotocol, const mojo::String& extensions, mojo::ScopedDataPipeConsumerHandle receive_stream) = 0;

  virtual void DidReceiveData(bool fin, WebSocket::MessageType type, uint32_t num_bytes) = 0;

  virtual void DidReceiveFlowControl(int64_t quota) = 0;

  virtual void DidFail(const mojo::String& message) = 0;

  virtual void DidClose(bool was_clean, uint16_t code, const mojo::String& reason) = 0;
};

class WebSocketProxy
    : public WebSocket,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit WebSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void Connect(
      const mojo::String& url, mojo::Array<mojo::String> protocols, const mojo::String& origin, mojo::ScopedDataPipeConsumerHandle send_stream, WebSocketClientPtr client
  ) override;
  void Send(
      bool fin, WebSocket::MessageType type, uint32_t num_bytes
  ) override;
  void FlowControl(
      int64_t quota
  ) override;
  void Close(
      uint16_t code, const mojo::String& reason
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class WebSocketClientProxy
    : public WebSocketClient,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit WebSocketClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void DidConnect(
      const mojo::String& selected_subprotocol, const mojo::String& extensions, mojo::ScopedDataPipeConsumerHandle receive_stream
  ) override;
  void DidReceiveData(
      bool fin, WebSocket::MessageType type, uint32_t num_bytes
  ) override;
  void DidReceiveFlowControl(
      int64_t quota
  ) override;
  void DidFail(
      const mojo::String& message
  ) override;
  void DidClose(
      bool was_clean, uint16_t code, const mojo::String& reason
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class WebSocketStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  WebSocketStub();
  ~WebSocketStub() override;
  void set_sink(WebSocket* sink) { sink_ = sink; }
  WebSocket* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WebSocket* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class WebSocketClientStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  WebSocketClientStub();
  ~WebSocketClientStub() override;
  void set_sink(WebSocketClient* sink) { sink_ = sink; }
  WebSocketClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WebSocketClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class WebSocketRequestValidator : public mojo::MessageFilter {
 public:
  explicit WebSocketRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class WebSocketClientRequestValidator : public mojo::MessageFilter {
 public:
  explicit WebSocketClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};




inline std::ostream& operator<<(std::ostream& os, WebSocket::MessageType value) {
  switch(value) {
    case WebSocket::MessageType::CONTINUATION:
      return os << "WebSocket::MessageType::CONTINUATION";
    case WebSocket::MessageType::TEXT:
      return os << "WebSocket::MessageType::TEXT";
    case WebSocket::MessageType::BINARY:
      return os << "WebSocket::MessageType::BINARY";
    default:
      return os << "Unknown WebSocket::MessageType value: " << static_cast<int32_t>(value);
  }
}

inline bool IsKnownEnumValue(WebSocket::MessageType value) {
  return ::mojo::internal::WebSocket_Data::MessageType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_WEB_SOCKET_MOJOM_H_