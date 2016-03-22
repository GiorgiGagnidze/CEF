// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_PERMISSION_PROVIDER_MOJOM_H_
#define DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_PERMISSION_PROVIDER_MOJOM_H_

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
#include "device/devices_app/usb/public/interfaces/permission_provider.mojom-internal.h"
#include "device/devices_app/usb/public/interfaces/device.mojom.h"
namespace device {
namespace usb {

class PermissionProvider;
using PermissionProviderPtr = mojo::InterfacePtr<PermissionProvider>;
using PermissionProviderPtrInfo = mojo::InterfacePtrInfo<PermissionProvider>;
using PermissionProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<PermissionProvider>;
using PermissionProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PermissionProvider>;


class PermissionProviderProxy;
class PermissionProviderStub;

class PermissionProviderRequestValidator;
class PermissionProviderResponseValidator;

class PermissionProvider {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::device::usb::PermissionProvider;

  using Proxy_ = PermissionProviderProxy;
  using Stub_ = PermissionProviderStub;

  using RequestValidator_ = PermissionProviderRequestValidator;
  using ResponseValidator_ = PermissionProviderResponseValidator;

  virtual ~PermissionProvider() {}

  using HasDevicePermissionCallback = mojo::Callback<void(mojo::Array<mojo::String>)>;
  virtual void HasDevicePermission(mojo::Array<device::usb::DeviceInfoPtr> requested_devices, const HasDevicePermissionCallback& callback) = 0;

  using HasConfigurationPermissionCallback = mojo::Callback<void(bool)>;
  virtual void HasConfigurationPermission(uint8_t requested_configuration, device::usb::DeviceInfoPtr device, const HasConfigurationPermissionCallback& callback) = 0;

  using HasInterfacePermissionCallback = mojo::Callback<void(bool)>;
  virtual void HasInterfacePermission(uint8_t requested_interface, uint8_t configuration_value, device::usb::DeviceInfoPtr device, const HasInterfacePermissionCallback& callback) = 0;

  virtual void Bind(mojo::InterfaceRequest<PermissionProvider> request) = 0;
};

class PermissionProviderProxy
    : public PermissionProvider,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit PermissionProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void HasDevicePermission(
      mojo::Array<device::usb::DeviceInfoPtr> requested_devices, const HasDevicePermissionCallback& callback
  ) override;
  void HasConfigurationPermission(
      uint8_t requested_configuration, device::usb::DeviceInfoPtr device, const HasConfigurationPermissionCallback& callback
  ) override;
  void HasInterfacePermission(
      uint8_t requested_interface, uint8_t configuration_value, device::usb::DeviceInfoPtr device, const HasInterfacePermissionCallback& callback
  ) override;
  void Bind(
      mojo::InterfaceRequest<PermissionProvider> request
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class PermissionProviderStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  PermissionProviderStub();
  ~PermissionProviderStub() override;
  void set_sink(PermissionProvider* sink) { sink_ = sink; }
  PermissionProvider* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PermissionProvider* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class PermissionProviderRequestValidator : public mojo::MessageFilter {
 public:
  explicit PermissionProviderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class PermissionProviderResponseValidator : public mojo::MessageFilter {
 public:
  explicit PermissionProviderResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace usb
}  // namespace device

#endif  // DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_PERMISSION_PROVIDER_MOJOM_H_