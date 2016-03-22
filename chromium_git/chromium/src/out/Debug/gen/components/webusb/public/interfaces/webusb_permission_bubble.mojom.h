// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_WEBUSB_PUBLIC_INTERFACES_WEBUSB_PERMISSION_BUBBLE_MOJOM_H_
#define COMPONENTS_WEBUSB_PUBLIC_INTERFACES_WEBUSB_PERMISSION_BUBBLE_MOJOM_H_

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
#include "components/webusb/public/interfaces/webusb_permission_bubble.mojom-internal.h"
#include "device/devices_app/usb/public/interfaces/device.mojom.h"
#include "device/devices_app/usb/public/interfaces/device_manager.mojom.h"
namespace webusb {

class WebUsbPermissionBubble;
using WebUsbPermissionBubblePtr = mojo::InterfacePtr<WebUsbPermissionBubble>;
using WebUsbPermissionBubblePtrInfo = mojo::InterfacePtrInfo<WebUsbPermissionBubble>;
using WebUsbPermissionBubbleAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebUsbPermissionBubble>;
using WebUsbPermissionBubbleAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebUsbPermissionBubble>;


class WebUsbPermissionBubbleProxy;
class WebUsbPermissionBubbleStub;

class WebUsbPermissionBubbleRequestValidator;
class WebUsbPermissionBubbleResponseValidator;

class WebUsbPermissionBubble {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::webusb::WebUsbPermissionBubble;

  using Proxy_ = WebUsbPermissionBubbleProxy;
  using Stub_ = WebUsbPermissionBubbleStub;

  using RequestValidator_ = WebUsbPermissionBubbleRequestValidator;
  using ResponseValidator_ = WebUsbPermissionBubbleResponseValidator;

  virtual ~WebUsbPermissionBubble() {}

  using GetPermissionCallback = mojo::Callback<void(device::usb::DeviceInfoPtr)>;
  virtual void GetPermission(mojo::Array<device::usb::DeviceFilterPtr> device_filters, const GetPermissionCallback& callback) = 0;
};

class WebUsbPermissionBubbleProxy
    : public WebUsbPermissionBubble,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit WebUsbPermissionBubbleProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetPermission(
      mojo::Array<device::usb::DeviceFilterPtr> device_filters, const GetPermissionCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class WebUsbPermissionBubbleStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  WebUsbPermissionBubbleStub();
  ~WebUsbPermissionBubbleStub() override;
  void set_sink(WebUsbPermissionBubble* sink) { sink_ = sink; }
  WebUsbPermissionBubble* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WebUsbPermissionBubble* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class WebUsbPermissionBubbleRequestValidator : public mojo::MessageFilter {
 public:
  explicit WebUsbPermissionBubbleRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class WebUsbPermissionBubbleResponseValidator : public mojo::MessageFilter {
 public:
  explicit WebUsbPermissionBubbleResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace webusb

#endif  // COMPONENTS_WEBUSB_PUBLIC_INTERFACES_WEBUSB_PERMISSION_BUBBLE_MOJOM_H_