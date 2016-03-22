// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_WAKE_LOCK_SERVICE_MOJOM_H_
#define CONTENT_COMMON_WAKE_LOCK_SERVICE_MOJOM_H_

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
#include "content/common/wake_lock_service.mojom-internal.h"
namespace content {

class WakeLockService;
using WakeLockServicePtr = mojo::InterfacePtr<WakeLockService>;
using WakeLockServicePtrInfo = mojo::InterfacePtrInfo<WakeLockService>;
using WakeLockServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<WakeLockService>;
using WakeLockServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WakeLockService>;


class WakeLockServiceProxy;
class WakeLockServiceStub;

class WakeLockServiceRequestValidator;

class WakeLockService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::WakeLockService;

  using Proxy_ = WakeLockServiceProxy;
  using Stub_ = WakeLockServiceStub;

  using RequestValidator_ = WakeLockServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~WakeLockService() {}

  virtual void RequestWakeLock() = 0;

  virtual void CancelWakeLock() = 0;
};

class WakeLockServiceProxy
    : public WakeLockService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit WakeLockServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void RequestWakeLock(
      
  ) override;
  void CancelWakeLock(
      
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class WakeLockServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  WakeLockServiceStub();
  ~WakeLockServiceStub() override;
  void set_sink(WakeLockService* sink) { sink_ = sink; }
  WakeLockService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WakeLockService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class WakeLockServiceRequestValidator : public mojo::MessageFilter {
 public:
  explicit WakeLockServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace content

#endif  // CONTENT_COMMON_WAKE_LOCK_SERVICE_MOJOM_H_