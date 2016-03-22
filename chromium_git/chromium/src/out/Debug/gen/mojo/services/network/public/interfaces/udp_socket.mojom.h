// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_UDP_SOCKET_MOJOM_H_
#define MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_UDP_SOCKET_MOJOM_H_

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
#include "mojo/services/network/public/interfaces/udp_socket.mojom-internal.h"
#include "mojo/services/network/public/interfaces/net_address.mojom.h"
#include "mojo/services/network/public/interfaces/network_error.mojom.h"
namespace mojo {

class UDPSocket;
using UDPSocketPtr = mojo::InterfacePtr<UDPSocket>;
using UDPSocketPtrInfo = mojo::InterfacePtrInfo<UDPSocket>;
using UDPSocketAssociatedPtr =
    mojo::AssociatedInterfacePtr<UDPSocket>;
using UDPSocketAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UDPSocket>;

class UDPSocketReceiver;
using UDPSocketReceiverPtr = mojo::InterfacePtr<UDPSocketReceiver>;
using UDPSocketReceiverPtrInfo = mojo::InterfacePtrInfo<UDPSocketReceiver>;
using UDPSocketReceiverAssociatedPtr =
    mojo::AssociatedInterfacePtr<UDPSocketReceiver>;
using UDPSocketReceiverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UDPSocketReceiver>;


class UDPSocketProxy;
class UDPSocketStub;

class UDPSocketRequestValidator;
class UDPSocketResponseValidator;

class UDPSocket {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::UDPSocket;

  using Proxy_ = UDPSocketProxy;
  using Stub_ = UDPSocketStub;

  using RequestValidator_ = UDPSocketRequestValidator;
  using ResponseValidator_ = UDPSocketResponseValidator;

  virtual ~UDPSocket() {}

  using AllowAddressReuseCallback = mojo::Callback<void(mojo::NetworkErrorPtr)>;
  virtual void AllowAddressReuse(const AllowAddressReuseCallback& callback) = 0;

  using BindCallback = mojo::Callback<void(mojo::NetworkErrorPtr, mojo::NetAddressPtr, mojo::InterfaceRequest<UDPSocketReceiver>)>;
  virtual void Bind(mojo::NetAddressPtr addr, const BindCallback& callback) = 0;

  using ConnectCallback = mojo::Callback<void(mojo::NetworkErrorPtr, mojo::NetAddressPtr, mojo::InterfaceRequest<UDPSocketReceiver>)>;
  virtual void Connect(mojo::NetAddressPtr remote_addr, const ConnectCallback& callback) = 0;

  using SetSendBufferSizeCallback = mojo::Callback<void(mojo::NetworkErrorPtr)>;
  virtual void SetSendBufferSize(uint32_t size, const SetSendBufferSizeCallback& callback) = 0;

  using SetReceiveBufferSizeCallback = mojo::Callback<void(mojo::NetworkErrorPtr)>;
  virtual void SetReceiveBufferSize(uint32_t size, const SetReceiveBufferSizeCallback& callback) = 0;

  using NegotiateMaxPendingSendRequestsCallback = mojo::Callback<void(uint32_t)>;
  virtual void NegotiateMaxPendingSendRequests(uint32_t requested_size, const NegotiateMaxPendingSendRequestsCallback& callback) = 0;

  virtual void ReceiveMore(uint32_t datagram_number) = 0;

  using SendToCallback = mojo::Callback<void(mojo::NetworkErrorPtr)>;
  virtual void SendTo(mojo::NetAddressPtr dest_addr, mojo::Array<uint8_t> data, const SendToCallback& callback) = 0;
};

class UDPSocketReceiverProxy;
class UDPSocketReceiverStub;

class UDPSocketReceiverRequestValidator;

class UDPSocketReceiver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::UDPSocketReceiver;

  using Proxy_ = UDPSocketReceiverProxy;
  using Stub_ = UDPSocketReceiverStub;

  using RequestValidator_ = UDPSocketReceiverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~UDPSocketReceiver() {}

  virtual void OnReceived(mojo::NetworkErrorPtr result, mojo::NetAddressPtr src_addr, mojo::Array<uint8_t> data) = 0;
};

class UDPSocketProxy
    : public UDPSocket,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit UDPSocketProxy(mojo::MessageReceiverWithResponder* receiver);
  void AllowAddressReuse(
      const AllowAddressReuseCallback& callback
  ) override;
  void Bind(
      mojo::NetAddressPtr addr, const BindCallback& callback
  ) override;
  void Connect(
      mojo::NetAddressPtr remote_addr, const ConnectCallback& callback
  ) override;
  void SetSendBufferSize(
      uint32_t size, const SetSendBufferSizeCallback& callback
  ) override;
  void SetReceiveBufferSize(
      uint32_t size, const SetReceiveBufferSizeCallback& callback
  ) override;
  void NegotiateMaxPendingSendRequests(
      uint32_t requested_size, const NegotiateMaxPendingSendRequestsCallback& callback
  ) override;
  void ReceiveMore(
      uint32_t datagram_number
  ) override;
  void SendTo(
      mojo::NetAddressPtr dest_addr, mojo::Array<uint8_t> data, const SendToCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class UDPSocketReceiverProxy
    : public UDPSocketReceiver,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit UDPSocketReceiverProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnReceived(
      mojo::NetworkErrorPtr result, mojo::NetAddressPtr src_addr, mojo::Array<uint8_t> data
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class UDPSocketStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  UDPSocketStub();
  ~UDPSocketStub() override;
  void set_sink(UDPSocket* sink) { sink_ = sink; }
  UDPSocket* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  UDPSocket* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class UDPSocketReceiverStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  UDPSocketReceiverStub();
  ~UDPSocketReceiverStub() override;
  void set_sink(UDPSocketReceiver* sink) { sink_ = sink; }
  UDPSocketReceiver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  UDPSocketReceiver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class UDPSocketRequestValidator : public mojo::MessageFilter {
 public:
  explicit UDPSocketRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class UDPSocketReceiverRequestValidator : public mojo::MessageFilter {
 public:
  explicit UDPSocketReceiverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class UDPSocketResponseValidator : public mojo::MessageFilter {
 public:
  explicit UDPSocketResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace mojo

#endif  // MOJO_SERVICES_NETWORK_PUBLIC_INTERFACES_UDP_SOCKET_MOJOM_H_