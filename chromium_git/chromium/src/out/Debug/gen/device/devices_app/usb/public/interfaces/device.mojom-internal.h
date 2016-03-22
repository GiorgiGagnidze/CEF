// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_DEVICE_MOJOM_INTERNAL_H_
#define DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_DEVICE_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace device {
namespace usb {

class EndpointInfo;
class AlternateInterfaceInfo;
class InterfaceInfo;
class ConfigurationInfo;
class WebUsbFunctionSubset;
class WebUsbConfigurationSubset;
class WebUsbDescriptorSet;
class DeviceInfo;
class ControlTransferParams;
class IsochronousPacket;


namespace internal {

class EndpointInfo_Data;
class AlternateInterfaceInfo_Data;
class InterfaceInfo_Data;
class ConfigurationInfo_Data;
class WebUsbFunctionSubset_Data;
class WebUsbConfigurationSubset_Data;
class WebUsbDescriptorSet_Data;
class DeviceInfo_Data;
class ControlTransferParams_Data;
class IsochronousPacket_Data;



  
struct OpenDeviceError_Data {
 public:
  // Used to identify Mojom Enum Data Classes.
  typedef void MojomEnumDataType;

  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  int32_t value;
};
  
struct TransferDirection_Data {
 public:
  // Used to identify Mojom Enum Data Classes.
  typedef void MojomEnumDataType;

  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  int32_t value;
};
  
struct ControlTransferType_Data {
 public:
  // Used to identify Mojom Enum Data Classes.
  typedef void MojomEnumDataType;

  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  int32_t value;
};
  
struct ControlTransferRecipient_Data {
 public:
  // Used to identify Mojom Enum Data Classes.
  typedef void MojomEnumDataType;

  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  int32_t value;
};
  
struct EndpointType_Data {
 public:
  // Used to identify Mojom Enum Data Classes.
  typedef void MojomEnumDataType;

  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
        return true;
    }
    return false;
  }

  int32_t value;
};
  
struct TransferStatus_Data {
 public:
  // Used to identify Mojom Enum Data Classes.
  typedef void MojomEnumDataType;

  static bool const kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        return true;
    }
    return false;
  }

  int32_t value;
};

#pragma pack(push, 1)


class EndpointInfo_Data {
 public:
  static EndpointInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t endpoint_number;
  uint8_t pad0_[3];
  internal::TransferDirection_Data direction;
  internal::EndpointType_Data type;
  uint32_t packet_size;

 private:
  EndpointInfo_Data();
  ~EndpointInfo_Data() = delete;
};
static_assert(sizeof(EndpointInfo_Data) == 24,
              "Bad sizeof(EndpointInfo_Data)");
class AlternateInterfaceInfo_Data {
 public:
  static AlternateInterfaceInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t alternate_setting;
  uint8_t class_code;
  uint8_t subclass_code;
  uint8_t protocol_code;
  uint8_t pad3_[4];
  mojo::internal::StringPointer interface_name;
  mojo::internal::ArrayPointer<internal::EndpointInfo_Data*> endpoints;

 private:
  AlternateInterfaceInfo_Data();
  ~AlternateInterfaceInfo_Data() = delete;
};
static_assert(sizeof(AlternateInterfaceInfo_Data) == 32,
              "Bad sizeof(AlternateInterfaceInfo_Data)");
class InterfaceInfo_Data {
 public:
  static InterfaceInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t interface_number;
  uint8_t pad0_[7];
  mojo::internal::ArrayPointer<internal::AlternateInterfaceInfo_Data*> alternates;

 private:
  InterfaceInfo_Data();
  ~InterfaceInfo_Data() = delete;
};
static_assert(sizeof(InterfaceInfo_Data) == 24,
              "Bad sizeof(InterfaceInfo_Data)");
class ConfigurationInfo_Data {
 public:
  static ConfigurationInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t configuration_value;
  uint8_t pad0_[7];
  mojo::internal::StringPointer configuration_name;
  mojo::internal::ArrayPointer<internal::InterfaceInfo_Data*> interfaces;

 private:
  ConfigurationInfo_Data();
  ~ConfigurationInfo_Data() = delete;
};
static_assert(sizeof(ConfigurationInfo_Data) == 32,
              "Bad sizeof(ConfigurationInfo_Data)");
class WebUsbFunctionSubset_Data {
 public:
  static WebUsbFunctionSubset_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t first_interface;
  uint8_t pad0_[7];
  mojo::internal::ArrayPointer<mojo::internal::String_Data*> origins;

 private:
  WebUsbFunctionSubset_Data();
  ~WebUsbFunctionSubset_Data() = delete;
};
static_assert(sizeof(WebUsbFunctionSubset_Data) == 24,
              "Bad sizeof(WebUsbFunctionSubset_Data)");
class WebUsbConfigurationSubset_Data {
 public:
  static WebUsbConfigurationSubset_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t configuration_value;
  uint8_t pad0_[7];
  mojo::internal::ArrayPointer<mojo::internal::String_Data*> origins;
  mojo::internal::ArrayPointer<internal::WebUsbFunctionSubset_Data*> functions;

 private:
  WebUsbConfigurationSubset_Data();
  ~WebUsbConfigurationSubset_Data() = delete;
};
static_assert(sizeof(WebUsbConfigurationSubset_Data) == 32,
              "Bad sizeof(WebUsbConfigurationSubset_Data)");
class WebUsbDescriptorSet_Data {
 public:
  static WebUsbDescriptorSet_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<mojo::internal::String_Data*> origins;
  mojo::internal::ArrayPointer<internal::WebUsbConfigurationSubset_Data*> configurations;

 private:
  WebUsbDescriptorSet_Data();
  ~WebUsbDescriptorSet_Data() = delete;
};
static_assert(sizeof(WebUsbDescriptorSet_Data) == 24,
              "Bad sizeof(WebUsbDescriptorSet_Data)");
class DeviceInfo_Data {
 public:
  static DeviceInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer guid;
  uint8_t usb_version_major;
  uint8_t usb_version_minor;
  uint8_t usb_version_subminor;
  uint8_t class_code;
  uint8_t subclass_code;
  uint8_t protocol_code;
  uint16_t vendor_id;
  uint16_t product_id;
  uint8_t device_version_major;
  uint8_t device_version_minor;
  uint8_t device_version_subminor;
  uint8_t pad11_[3];
  mojo::internal::StringPointer manufacturer_name;
  mojo::internal::StringPointer product_name;
  mojo::internal::StringPointer serial_number;
  mojo::internal::ArrayPointer<internal::ConfigurationInfo_Data*> configurations;
  mojo::internal::StructPointer<internal::WebUsbDescriptorSet_Data> webusb_allowed_origins;

 private:
  DeviceInfo_Data();
  ~DeviceInfo_Data() = delete;
};
static_assert(sizeof(DeviceInfo_Data) == 72,
              "Bad sizeof(DeviceInfo_Data)");
class ControlTransferParams_Data {
 public:
  static ControlTransferParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::ControlTransferType_Data type;
  internal::ControlTransferRecipient_Data recipient;
  uint8_t request;
  uint8_t pad2_[1];
  uint16_t value;
  uint16_t index;
  uint8_t padfinal_[2];

 private:
  ControlTransferParams_Data();
  ~ControlTransferParams_Data() = delete;
};
static_assert(sizeof(ControlTransferParams_Data) == 24,
              "Bad sizeof(ControlTransferParams_Data)");
class IsochronousPacket_Data {
 public:
  static IsochronousPacket_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t length;
  uint32_t transferred_length;
  internal::TransferStatus_Data status;
  uint8_t padfinal_[4];

 private:
  IsochronousPacket_Data();
  ~IsochronousPacket_Data() = delete;
};
static_assert(sizeof(IsochronousPacket_Data) == 24,
              "Bad sizeof(IsochronousPacket_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace usb
}  // namespace device

#endif  // DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_DEVICE_MOJOM_INTERNAL_H_