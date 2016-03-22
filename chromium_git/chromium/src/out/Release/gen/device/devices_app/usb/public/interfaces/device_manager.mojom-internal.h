// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_DEVICE_MANAGER_MOJOM_INTERNAL_H_
#define DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_DEVICE_MANAGER_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "device/devices_app/usb/public/interfaces/device.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace device {
namespace usb {

class DeviceFilter;
class EnumerationOptions;
class DeviceChangeNotification;


namespace internal {

class DeviceFilter_Data;
class EnumerationOptions_Data;
class DeviceChangeNotification_Data;




#pragma pack(push, 1)


class DeviceFilter_Data {
 public:
  static DeviceFilter_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t has_vendor_id : 1;
  uint8_t has_product_id : 1;
  uint8_t has_class_code : 1;
  uint8_t has_subclass_code : 1;
  uint8_t has_protocol_code : 1;
  uint8_t class_code;
  uint16_t vendor_id;
  uint16_t product_id;
  uint8_t subclass_code;
  uint8_t protocol_code;

 private:
  DeviceFilter_Data();
  ~DeviceFilter_Data() = delete;
};
static_assert(sizeof(DeviceFilter_Data) == 16,
              "Bad sizeof(DeviceFilter_Data)");
class EnumerationOptions_Data {
 public:
  static EnumerationOptions_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::DeviceFilter_Data*> filters;

 private:
  EnumerationOptions_Data();
  ~EnumerationOptions_Data() = delete;
};
static_assert(sizeof(EnumerationOptions_Data) == 16,
              "Bad sizeof(EnumerationOptions_Data)");
class DeviceChangeNotification_Data {
 public:
  static DeviceChangeNotification_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<device::usb::internal::DeviceInfo_Data*> devices_added;
  mojo::internal::ArrayPointer<device::usb::internal::DeviceInfo_Data*> devices_removed;

 private:
  DeviceChangeNotification_Data();
  ~DeviceChangeNotification_Data() = delete;
};
static_assert(sizeof(DeviceChangeNotification_Data) == 24,
              "Bad sizeof(DeviceChangeNotification_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace usb
}  // namespace device

#endif  // DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_DEVICE_MANAGER_MOJOM_INTERNAL_H_