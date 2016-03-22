// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EXTENSIONS_COMMON_MOJO_KEEP_ALIVE_MOJOM_H_
#define EXTENSIONS_COMMON_MOJO_KEEP_ALIVE_MOJOM_H_

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
#include "extensions/common/mojo/keep_alive.mojom-internal.h"
namespace extensions {

class KeepAlive;
using KeepAlivePtr = mojo::InterfacePtr<KeepAlive>;
using KeepAlivePtrInfo = mojo::InterfacePtrInfo<KeepAlive>;
using KeepAliveAssociatedPtr =
    mojo::AssociatedInterfacePtr<KeepAlive>;
using KeepAliveAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<KeepAlive>;


class KeepAliveProxy;
class KeepAliveStub;

class KeepAliveRequestValidator;

class KeepAlive {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::extensions::KeepAlive;

  using Proxy_ = KeepAliveProxy;
  using Stub_ = KeepAliveStub;

  using RequestValidator_ = KeepAliveRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~KeepAlive() {}
};

class KeepAliveProxy
    : public KeepAlive,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit KeepAliveProxy(mojo::MessageReceiverWithResponder* receiver);

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class KeepAliveStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  KeepAliveStub();
  ~KeepAliveStub() override;
  void set_sink(KeepAlive* sink) { sink_ = sink; }
  KeepAlive* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  KeepAlive* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class KeepAliveRequestValidator : public mojo::MessageFilter {
 public:
  explicit KeepAliveRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace extensions

#endif  // EXTENSIONS_COMMON_MOJO_KEEP_ALIVE_MOJOM_H_