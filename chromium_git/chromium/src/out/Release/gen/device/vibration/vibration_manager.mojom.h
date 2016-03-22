// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_VIBRATION_VIBRATION_MANAGER_MOJOM_H_
#define DEVICE_VIBRATION_VIBRATION_MANAGER_MOJOM_H_

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
#include "device/vibration/vibration_manager.mojom-internal.h"
namespace device {

class VibrationManager;
using VibrationManagerPtr = mojo::InterfacePtr<VibrationManager>;
using VibrationManagerPtrInfo = mojo::InterfacePtrInfo<VibrationManager>;
using VibrationManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<VibrationManager>;
using VibrationManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VibrationManager>;


class VibrationManagerProxy;
class VibrationManagerStub;

class VibrationManagerRequestValidator;

class VibrationManager {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::device::VibrationManager;

  using Proxy_ = VibrationManagerProxy;
  using Stub_ = VibrationManagerStub;

  using RequestValidator_ = VibrationManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~VibrationManager() {}

  virtual void Vibrate(int64_t milliseconds) = 0;

  virtual void Cancel() = 0;
};

class VibrationManagerProxy
    : public VibrationManager,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit VibrationManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void Vibrate(
      int64_t milliseconds
  ) override;
  void Cancel(
      
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class VibrationManagerStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  VibrationManagerStub();
  ~VibrationManagerStub() override;
  void set_sink(VibrationManager* sink) { sink_ = sink; }
  VibrationManager* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  VibrationManager* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class VibrationManagerRequestValidator : public mojo::MessageFilter {
 public:
  explicit VibrationManagerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace device

#endif  // DEVICE_VIBRATION_VIBRATION_MANAGER_MOJOM_H_