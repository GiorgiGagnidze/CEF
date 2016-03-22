// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_MOJO_CLIENT_CHANNEL_MOJOM_H_
#define IPC_MOJO_CLIENT_CHANNEL_MOJOM_H_

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
#include "ipc/mojo/client_channel.mojom-internal.h"
namespace IPC {

class ClientChannel;
using ClientChannelPtr = mojo::InterfacePtr<ClientChannel>;
using ClientChannelPtrInfo = mojo::InterfacePtrInfo<ClientChannel>;
using ClientChannelAssociatedPtr =
    mojo::AssociatedInterfacePtr<ClientChannel>;
using ClientChannelAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ClientChannel>;


class ClientChannelProxy;
class ClientChannelStub;

class ClientChannelRequestValidator;
class ClientChannelResponseValidator;

class ClientChannel {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::IPC::ClientChannel;

  using Proxy_ = ClientChannelProxy;
  using Stub_ = ClientChannelStub;

  using RequestValidator_ = ClientChannelRequestValidator;
  using ResponseValidator_ = ClientChannelResponseValidator;

  virtual ~ClientChannel() {}

  using InitCallback = mojo::Callback<void(int32_t)>;
  virtual void Init(mojo::ScopedMessagePipeHandle pipe, int32_t peer_pid, const InitCallback& callback) = 0;
};

class ClientChannelProxy
    : public ClientChannel,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ClientChannelProxy(mojo::MessageReceiverWithResponder* receiver);
  void Init(
      mojo::ScopedMessagePipeHandle pipe, int32_t peer_pid, const InitCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class ClientChannelStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ClientChannelStub();
  ~ClientChannelStub() override;
  void set_sink(ClientChannel* sink) { sink_ = sink; }
  ClientChannel* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ClientChannel* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ClientChannelRequestValidator : public mojo::MessageFilter {
 public:
  explicit ClientChannelRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ClientChannelResponseValidator : public mojo::MessageFilter {
 public:
  explicit ClientChannelResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace IPC

#endif  // IPC_MOJO_CLIENT_CHANNEL_MOJOM_H_