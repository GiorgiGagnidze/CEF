// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BATTERY_BATTERY_MONITOR_MOJOM_H_
#define DEVICE_BATTERY_BATTERY_MONITOR_MOJOM_H_

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
#include "device/battery/battery_monitor.mojom-internal.h"
#include "device/battery/battery_status.mojom.h"
namespace device {

class BatteryMonitor;
using BatteryMonitorPtr = mojo::InterfacePtr<BatteryMonitor>;
using BatteryMonitorPtrInfo = mojo::InterfacePtrInfo<BatteryMonitor>;
using BatteryMonitorAssociatedPtr =
    mojo::AssociatedInterfacePtr<BatteryMonitor>;
using BatteryMonitorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BatteryMonitor>;


class BatteryMonitorProxy;
class BatteryMonitorStub;

class BatteryMonitorRequestValidator;
class BatteryMonitorResponseValidator;

class BatteryMonitor {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::device::BatteryMonitor;

  using Proxy_ = BatteryMonitorProxy;
  using Stub_ = BatteryMonitorStub;

  using RequestValidator_ = BatteryMonitorRequestValidator;
  using ResponseValidator_ = BatteryMonitorResponseValidator;

  virtual ~BatteryMonitor() {}

  using QueryNextStatusCallback = mojo::Callback<void(device::BatteryStatusPtr)>;
  virtual void QueryNextStatus(const QueryNextStatusCallback& callback) = 0;
};

class BatteryMonitorProxy
    : public BatteryMonitor,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit BatteryMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  void QueryNextStatus(
      const QueryNextStatusCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class BatteryMonitorStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  BatteryMonitorStub();
  ~BatteryMonitorStub() override;
  void set_sink(BatteryMonitor* sink) { sink_ = sink; }
  BatteryMonitor* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  BatteryMonitor* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BatteryMonitorRequestValidator : public mojo::MessageFilter {
 public:
  explicit BatteryMonitorRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BatteryMonitorResponseValidator : public mojo::MessageFilter {
 public:
  explicit BatteryMonitorResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace device

#endif  // DEVICE_BATTERY_BATTERY_MONITOR_MOJOM_H_