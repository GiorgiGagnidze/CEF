// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_DEVICE_MOJOM_H_
#define DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_DEVICE_MOJOM_H_

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
#include "device/devices_app/usb/public/interfaces/device.mojom-internal.h"
namespace device {
namespace usb {

  
enum class OpenDeviceError : int32_t {
  OK,
  ACCESS_DENIED,
};
  
inline std::ostream& operator<<(std::ostream& os, OpenDeviceError value) {
  switch(value) {
    case OpenDeviceError::OK:
      return os << "OpenDeviceError::OK";
    case OpenDeviceError::ACCESS_DENIED:
      return os << "OpenDeviceError::ACCESS_DENIED";
    default:
      return os << "Unknown OpenDeviceError value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(OpenDeviceError value) {
  return ::device::usb::internal::OpenDeviceError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class TransferDirection : int32_t {
  INBOUND,
  OUTBOUND,
};
  
inline std::ostream& operator<<(std::ostream& os, TransferDirection value) {
  switch(value) {
    case TransferDirection::INBOUND:
      return os << "TransferDirection::INBOUND";
    case TransferDirection::OUTBOUND:
      return os << "TransferDirection::OUTBOUND";
    default:
      return os << "Unknown TransferDirection value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(TransferDirection value) {
  return ::device::usb::internal::TransferDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class ControlTransferType : int32_t {
  STANDARD,
  CLASS,
  VENDOR,
  RESERVED,
};
  
inline std::ostream& operator<<(std::ostream& os, ControlTransferType value) {
  switch(value) {
    case ControlTransferType::STANDARD:
      return os << "ControlTransferType::STANDARD";
    case ControlTransferType::CLASS:
      return os << "ControlTransferType::CLASS";
    case ControlTransferType::VENDOR:
      return os << "ControlTransferType::VENDOR";
    case ControlTransferType::RESERVED:
      return os << "ControlTransferType::RESERVED";
    default:
      return os << "Unknown ControlTransferType value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(ControlTransferType value) {
  return ::device::usb::internal::ControlTransferType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class ControlTransferRecipient : int32_t {
  DEVICE,
  INTERFACE,
  ENDPOINT,
  OTHER,
};
  
inline std::ostream& operator<<(std::ostream& os, ControlTransferRecipient value) {
  switch(value) {
    case ControlTransferRecipient::DEVICE:
      return os << "ControlTransferRecipient::DEVICE";
    case ControlTransferRecipient::INTERFACE:
      return os << "ControlTransferRecipient::INTERFACE";
    case ControlTransferRecipient::ENDPOINT:
      return os << "ControlTransferRecipient::ENDPOINT";
    case ControlTransferRecipient::OTHER:
      return os << "ControlTransferRecipient::OTHER";
    default:
      return os << "Unknown ControlTransferRecipient value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(ControlTransferRecipient value) {
  return ::device::usb::internal::ControlTransferRecipient_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class EndpointType : int32_t {
  BULK,
  INTERRUPT,
  ISOCHRONOUS,
};
  
inline std::ostream& operator<<(std::ostream& os, EndpointType value) {
  switch(value) {
    case EndpointType::BULK:
      return os << "EndpointType::BULK";
    case EndpointType::INTERRUPT:
      return os << "EndpointType::INTERRUPT";
    case EndpointType::ISOCHRONOUS:
      return os << "EndpointType::ISOCHRONOUS";
    default:
      return os << "Unknown EndpointType value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(EndpointType value) {
  return ::device::usb::internal::EndpointType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class TransferStatus : int32_t {
  COMPLETED,
  TRANSFER_ERROR,
  PERMISSION_DENIED,
  TIMEOUT,
  CANCELLED,
  STALLED,
  DISCONNECT,
  BABBLE,
  SHORT_PACKET,
};
  
inline std::ostream& operator<<(std::ostream& os, TransferStatus value) {
  switch(value) {
    case TransferStatus::COMPLETED:
      return os << "TransferStatus::COMPLETED";
    case TransferStatus::TRANSFER_ERROR:
      return os << "TransferStatus::TRANSFER_ERROR";
    case TransferStatus::PERMISSION_DENIED:
      return os << "TransferStatus::PERMISSION_DENIED";
    case TransferStatus::TIMEOUT:
      return os << "TransferStatus::TIMEOUT";
    case TransferStatus::CANCELLED:
      return os << "TransferStatus::CANCELLED";
    case TransferStatus::STALLED:
      return os << "TransferStatus::STALLED";
    case TransferStatus::DISCONNECT:
      return os << "TransferStatus::DISCONNECT";
    case TransferStatus::BABBLE:
      return os << "TransferStatus::BABBLE";
    case TransferStatus::SHORT_PACKET:
      return os << "TransferStatus::SHORT_PACKET";
    default:
      return os << "Unknown TransferStatus value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(TransferStatus value) {
  return ::device::usb::internal::TransferStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class Device;
using DevicePtr = mojo::InterfacePtr<Device>;
using DevicePtrInfo = mojo::InterfacePtrInfo<Device>;
using DeviceAssociatedPtr =
    mojo::AssociatedInterfacePtr<Device>;
using DeviceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Device>;

class EndpointInfo;
class EndpointInfo_Reader;

using EndpointInfoPtr = mojo::InlinedStructPtr<EndpointInfo>;


class AlternateInterfaceInfo;
class AlternateInterfaceInfo_Reader;

using AlternateInterfaceInfoPtr = mojo::StructPtr<AlternateInterfaceInfo>;


class InterfaceInfo;
class InterfaceInfo_Reader;

using InterfaceInfoPtr = mojo::StructPtr<InterfaceInfo>;


class ConfigurationInfo;
class ConfigurationInfo_Reader;

using ConfigurationInfoPtr = mojo::StructPtr<ConfigurationInfo>;


class WebUsbFunctionSubset;
class WebUsbFunctionSubset_Reader;

using WebUsbFunctionSubsetPtr = mojo::StructPtr<WebUsbFunctionSubset>;


class WebUsbConfigurationSubset;
class WebUsbConfigurationSubset_Reader;

using WebUsbConfigurationSubsetPtr = mojo::StructPtr<WebUsbConfigurationSubset>;


class WebUsbDescriptorSet;
class WebUsbDescriptorSet_Reader;

using WebUsbDescriptorSetPtr = mojo::StructPtr<WebUsbDescriptorSet>;


class DeviceInfo;
class DeviceInfo_Reader;

using DeviceInfoPtr = mojo::StructPtr<DeviceInfo>;


class ControlTransferParams;
class ControlTransferParams_Reader;

using ControlTransferParamsPtr = mojo::StructPtr<ControlTransferParams>;


class IsochronousPacket;
class IsochronousPacket_Reader;

using IsochronousPacketPtr = mojo::InlinedStructPtr<IsochronousPacket>;



class DeviceProxy;
class DeviceStub;

class DeviceRequestValidator;
class DeviceResponseValidator;

class Device {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::device::usb::Device;

  using Proxy_ = DeviceProxy;
  using Stub_ = DeviceStub;

  using RequestValidator_ = DeviceRequestValidator;
  using ResponseValidator_ = DeviceResponseValidator;

  virtual ~Device() {}

  using GetDeviceInfoCallback = mojo::Callback<void(DeviceInfoPtr)>;
  virtual void GetDeviceInfo(const GetDeviceInfoCallback& callback) = 0;

  using GetConfigurationCallback = mojo::Callback<void(uint8_t)>;
  virtual void GetConfiguration(const GetConfigurationCallback& callback) = 0;

  using OpenCallback = mojo::Callback<void(OpenDeviceError)>;
  virtual void Open(const OpenCallback& callback) = 0;

  using CloseCallback = mojo::Callback<void()>;
  virtual void Close(const CloseCallback& callback) = 0;

  using SetConfigurationCallback = mojo::Callback<void(bool)>;
  virtual void SetConfiguration(uint8_t value, const SetConfigurationCallback& callback) = 0;

  using ClaimInterfaceCallback = mojo::Callback<void(bool)>;
  virtual void ClaimInterface(uint8_t interface_number, const ClaimInterfaceCallback& callback) = 0;

  using ReleaseInterfaceCallback = mojo::Callback<void(bool)>;
  virtual void ReleaseInterface(uint8_t interface_number, const ReleaseInterfaceCallback& callback) = 0;

  using SetInterfaceAlternateSettingCallback = mojo::Callback<void(bool)>;
  virtual void SetInterfaceAlternateSetting(uint8_t interface_number, uint8_t alternate_setting, const SetInterfaceAlternateSettingCallback& callback) = 0;

  using ResetCallback = mojo::Callback<void(bool)>;
  virtual void Reset(const ResetCallback& callback) = 0;

  using ClearHaltCallback = mojo::Callback<void(bool)>;
  virtual void ClearHalt(uint8_t endpoint, const ClearHaltCallback& callback) = 0;

  using ControlTransferInCallback = mojo::Callback<void(TransferStatus, mojo::Array<uint8_t>)>;
  virtual void ControlTransferIn(ControlTransferParamsPtr params, uint32_t length, uint32_t timeout, const ControlTransferInCallback& callback) = 0;

  using ControlTransferOutCallback = mojo::Callback<void(TransferStatus)>;
  virtual void ControlTransferOut(ControlTransferParamsPtr params, mojo::Array<uint8_t> data, uint32_t timeout, const ControlTransferOutCallback& callback) = 0;

  using GenericTransferInCallback = mojo::Callback<void(TransferStatus, mojo::Array<uint8_t>)>;
  virtual void GenericTransferIn(uint8_t endpoint_number, uint32_t length, uint32_t timeout, const GenericTransferInCallback& callback) = 0;

  using GenericTransferOutCallback = mojo::Callback<void(TransferStatus)>;
  virtual void GenericTransferOut(uint8_t endpoint_number, mojo::Array<uint8_t> data, uint32_t timeout, const GenericTransferOutCallback& callback) = 0;

  using IsochronousTransferInCallback = mojo::Callback<void(mojo::Array<uint8_t>, mojo::Array<IsochronousPacketPtr>)>;
  virtual void IsochronousTransferIn(uint8_t endpoint_number, mojo::Array<uint32_t> packet_lengths, uint32_t timeout, const IsochronousTransferInCallback& callback) = 0;

  using IsochronousTransferOutCallback = mojo::Callback<void(mojo::Array<IsochronousPacketPtr>)>;
  virtual void IsochronousTransferOut(uint8_t endpoint_number, mojo::Array<uint8_t> data, mojo::Array<uint32_t> packet_lengths, uint32_t timeout, const IsochronousTransferOutCallback& callback) = 0;
};

class DeviceProxy
    : public Device,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit DeviceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDeviceInfo(
      const GetDeviceInfoCallback& callback
  ) override;
  void GetConfiguration(
      const GetConfigurationCallback& callback
  ) override;
  void Open(
      const OpenCallback& callback
  ) override;
  void Close(
      const CloseCallback& callback
  ) override;
  void SetConfiguration(
      uint8_t value, const SetConfigurationCallback& callback
  ) override;
  void ClaimInterface(
      uint8_t interface_number, const ClaimInterfaceCallback& callback
  ) override;
  void ReleaseInterface(
      uint8_t interface_number, const ReleaseInterfaceCallback& callback
  ) override;
  void SetInterfaceAlternateSetting(
      uint8_t interface_number, uint8_t alternate_setting, const SetInterfaceAlternateSettingCallback& callback
  ) override;
  void Reset(
      const ResetCallback& callback
  ) override;
  void ClearHalt(
      uint8_t endpoint, const ClearHaltCallback& callback
  ) override;
  void ControlTransferIn(
      ControlTransferParamsPtr params, uint32_t length, uint32_t timeout, const ControlTransferInCallback& callback
  ) override;
  void ControlTransferOut(
      ControlTransferParamsPtr params, mojo::Array<uint8_t> data, uint32_t timeout, const ControlTransferOutCallback& callback
  ) override;
  void GenericTransferIn(
      uint8_t endpoint_number, uint32_t length, uint32_t timeout, const GenericTransferInCallback& callback
  ) override;
  void GenericTransferOut(
      uint8_t endpoint_number, mojo::Array<uint8_t> data, uint32_t timeout, const GenericTransferOutCallback& callback
  ) override;
  void IsochronousTransferIn(
      uint8_t endpoint_number, mojo::Array<uint32_t> packet_lengths, uint32_t timeout, const IsochronousTransferInCallback& callback
  ) override;
  void IsochronousTransferOut(
      uint8_t endpoint_number, mojo::Array<uint8_t> data, mojo::Array<uint32_t> packet_lengths, uint32_t timeout, const IsochronousTransferOutCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class DeviceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  DeviceStub();
  ~DeviceStub() override;
  void set_sink(Device* sink) { sink_ = sink; }
  Device* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Device* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class DeviceRequestValidator : public mojo::MessageFilter {
 public:
  explicit DeviceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class DeviceResponseValidator : public mojo::MessageFilter {
 public:
  explicit DeviceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



class EndpointInfo_Reader;

class EndpointInfo {
 public:
  using Data_ = internal::EndpointInfo_Data;
  using Reader = EndpointInfo_Reader;

  static EndpointInfoPtr New();

  template <typename U>
  static EndpointInfoPtr From(const U& u) {
    return mojo::TypeConverter<EndpointInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EndpointInfo>::Convert(*this);
  }

  EndpointInfo();
  ~EndpointInfo();


  EndpointInfoPtr Clone() const;
  bool Equals(const EndpointInfo& other) const;

  uint8_t endpoint_number;
  TransferDirection direction;
  EndpointType type;
  uint32_t packet_size;
};










class IsochronousPacket_Reader;

class IsochronousPacket {
 public:
  using Data_ = internal::IsochronousPacket_Data;
  using Reader = IsochronousPacket_Reader;

  static IsochronousPacketPtr New();

  template <typename U>
  static IsochronousPacketPtr From(const U& u) {
    return mojo::TypeConverter<IsochronousPacketPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IsochronousPacket>::Convert(*this);
  }

  IsochronousPacket();
  ~IsochronousPacket();


  IsochronousPacketPtr Clone() const;
  bool Equals(const IsochronousPacket& other) const;

  uint32_t length;
  uint32_t transferred_length;
  TransferStatus status;
};




class AlternateInterfaceInfo_Reader;

class AlternateInterfaceInfo {
 public:
  using Data_ = internal::AlternateInterfaceInfo_Data;
  using Reader = AlternateInterfaceInfo_Reader;

  static AlternateInterfaceInfoPtr New();

  template <typename U>
  static AlternateInterfaceInfoPtr From(const U& u) {
    return mojo::TypeConverter<AlternateInterfaceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AlternateInterfaceInfo>::Convert(*this);
  }

  AlternateInterfaceInfo();
  ~AlternateInterfaceInfo();


  AlternateInterfaceInfoPtr Clone() const;
  bool Equals(const AlternateInterfaceInfo& other) const;

  uint8_t alternate_setting;
  uint8_t class_code;
  uint8_t subclass_code;
  uint8_t protocol_code;
  mojo::String interface_name;
  mojo::Array<EndpointInfoPtr> endpoints;
};


class InterfaceInfo_Reader;

class InterfaceInfo {
 public:
  using Data_ = internal::InterfaceInfo_Data;
  using Reader = InterfaceInfo_Reader;

  static InterfaceInfoPtr New();

  template <typename U>
  static InterfaceInfoPtr From(const U& u) {
    return mojo::TypeConverter<InterfaceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, InterfaceInfo>::Convert(*this);
  }

  InterfaceInfo();
  ~InterfaceInfo();


  InterfaceInfoPtr Clone() const;
  bool Equals(const InterfaceInfo& other) const;

  uint8_t interface_number;
  mojo::Array<AlternateInterfaceInfoPtr> alternates;
};


class ConfigurationInfo_Reader;

class ConfigurationInfo {
 public:
  using Data_ = internal::ConfigurationInfo_Data;
  using Reader = ConfigurationInfo_Reader;

  static ConfigurationInfoPtr New();

  template <typename U>
  static ConfigurationInfoPtr From(const U& u) {
    return mojo::TypeConverter<ConfigurationInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ConfigurationInfo>::Convert(*this);
  }

  ConfigurationInfo();
  ~ConfigurationInfo();


  ConfigurationInfoPtr Clone() const;
  bool Equals(const ConfigurationInfo& other) const;

  uint8_t configuration_value;
  mojo::String configuration_name;
  mojo::Array<InterfaceInfoPtr> interfaces;
};


class WebUsbFunctionSubset_Reader;

class WebUsbFunctionSubset {
 public:
  using Data_ = internal::WebUsbFunctionSubset_Data;
  using Reader = WebUsbFunctionSubset_Reader;

  static WebUsbFunctionSubsetPtr New();

  template <typename U>
  static WebUsbFunctionSubsetPtr From(const U& u) {
    return mojo::TypeConverter<WebUsbFunctionSubsetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebUsbFunctionSubset>::Convert(*this);
  }

  WebUsbFunctionSubset();
  ~WebUsbFunctionSubset();


  WebUsbFunctionSubsetPtr Clone() const;
  bool Equals(const WebUsbFunctionSubset& other) const;

  uint8_t first_interface;
  mojo::Array<mojo::String> origins;
};


class WebUsbConfigurationSubset_Reader;

class WebUsbConfigurationSubset {
 public:
  using Data_ = internal::WebUsbConfigurationSubset_Data;
  using Reader = WebUsbConfigurationSubset_Reader;

  static WebUsbConfigurationSubsetPtr New();

  template <typename U>
  static WebUsbConfigurationSubsetPtr From(const U& u) {
    return mojo::TypeConverter<WebUsbConfigurationSubsetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebUsbConfigurationSubset>::Convert(*this);
  }

  WebUsbConfigurationSubset();
  ~WebUsbConfigurationSubset();


  WebUsbConfigurationSubsetPtr Clone() const;
  bool Equals(const WebUsbConfigurationSubset& other) const;

  uint8_t configuration_value;
  mojo::Array<mojo::String> origins;
  mojo::Array<WebUsbFunctionSubsetPtr> functions;
};


class WebUsbDescriptorSet_Reader;

class WebUsbDescriptorSet {
 public:
  using Data_ = internal::WebUsbDescriptorSet_Data;
  using Reader = WebUsbDescriptorSet_Reader;

  static WebUsbDescriptorSetPtr New();

  template <typename U>
  static WebUsbDescriptorSetPtr From(const U& u) {
    return mojo::TypeConverter<WebUsbDescriptorSetPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebUsbDescriptorSet>::Convert(*this);
  }

  WebUsbDescriptorSet();
  ~WebUsbDescriptorSet();


  WebUsbDescriptorSetPtr Clone() const;
  bool Equals(const WebUsbDescriptorSet& other) const;

  mojo::Array<mojo::String> origins;
  mojo::Array<WebUsbConfigurationSubsetPtr> configurations;
};


class DeviceInfo_Reader;

class DeviceInfo {
 public:
  using Data_ = internal::DeviceInfo_Data;
  using Reader = DeviceInfo_Reader;

  static DeviceInfoPtr New();

  template <typename U>
  static DeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<DeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DeviceInfo>::Convert(*this);
  }

  DeviceInfo();
  ~DeviceInfo();


  DeviceInfoPtr Clone() const;
  bool Equals(const DeviceInfo& other) const;

  mojo::String guid;
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
  mojo::String manufacturer_name;
  mojo::String product_name;
  mojo::String serial_number;
  mojo::Array<ConfigurationInfoPtr> configurations;
  WebUsbDescriptorSetPtr webusb_allowed_origins;
};


class ControlTransferParams_Reader;

class ControlTransferParams {
 public:
  using Data_ = internal::ControlTransferParams_Data;
  using Reader = ControlTransferParams_Reader;

  static ControlTransferParamsPtr New();

  template <typename U>
  static ControlTransferParamsPtr From(const U& u) {
    return mojo::TypeConverter<ControlTransferParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ControlTransferParams>::Convert(*this);
  }

  ControlTransferParams();
  ~ControlTransferParams();


  ControlTransferParamsPtr Clone() const;
  bool Equals(const ControlTransferParams& other) const;

  ControlTransferType type;
  ControlTransferRecipient recipient;
  uint8_t request;
  uint16_t value;
  uint16_t index;
};



size_t GetSerializedSize_(const EndpointInfoPtr& input);
void Serialize_(EndpointInfoPtr input, mojo::internal::Buffer* buffer,
                internal::EndpointInfo_Data** output);
bool Deserialize_(internal::EndpointInfo_Data* input,
                  EndpointInfoPtr* output,
                  mojo::internal::SerializationContext* context);


class EndpointInfo_Reader {
 public:
  EndpointInfo_Reader(internal::EndpointInfo_Data* data,
                         mojo::internal::SerializationContext* context);
  uint8_t endpoint_number() const { return data_->endpoint_number; }
  TransferDirection direction() const {
    return static_cast<TransferDirection>(data_->direction.value);
  }
  EndpointType type() const {
    return static_cast<EndpointType>(data_->type.value);
  }
  uint32_t packet_size() const { return data_->packet_size; }

 private:
  internal::EndpointInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct EndpointInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::EndpointInfo_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::EndpointInfo_Data** output) {
    internal::EndpointInfo_Data* result =
        internal::EndpointInfo_Data::New(buffer);
    result->endpoint_number = mojo::StructTraits<EndpointInfo, NativeType>
        ::endpoint_number(input);
    result->direction = mojo::StructTraits<EndpointInfo, NativeType>
        ::direction(input);
    result->type = mojo::StructTraits<EndpointInfo, NativeType>
        ::type(input);
    result->packet_size = mojo::StructTraits<EndpointInfo, NativeType>
        ::packet_size(input);
    *output = result;
  }

  static bool Deserialize(internal::EndpointInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<EndpointInfo, NativeType>::Read(
        EndpointInfo_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const AlternateInterfaceInfoPtr& input);
void Serialize_(AlternateInterfaceInfoPtr input, mojo::internal::Buffer* buffer,
                internal::AlternateInterfaceInfo_Data** output);
bool Deserialize_(internal::AlternateInterfaceInfo_Data* input,
                  AlternateInterfaceInfoPtr* output,
                  mojo::internal::SerializationContext* context);


class AlternateInterfaceInfo_Reader {
 public:
  AlternateInterfaceInfo_Reader(internal::AlternateInterfaceInfo_Data* data,
                         mojo::internal::SerializationContext* context);
  uint8_t alternate_setting() const { return data_->alternate_setting; }
  uint8_t class_code() const { return data_->class_code; }
  uint8_t subclass_code() const { return data_->subclass_code; }
  uint8_t protocol_code() const { return data_->protocol_code; }
  // TODO(rockot): Support reading other object kinds. (interface_name() omitted)
  // TODO(rockot): Support reading other object kinds. (endpoints() omitted)

 private:
  internal::AlternateInterfaceInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct AlternateInterfaceInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::AlternateInterfaceInfo_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field interface_name";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field endpoints";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::AlternateInterfaceInfo_Data** output) {
    internal::AlternateInterfaceInfo_Data* result =
        internal::AlternateInterfaceInfo_Data::New(buffer);
    result->alternate_setting = mojo::StructTraits<AlternateInterfaceInfo, NativeType>
        ::alternate_setting(input);
    result->class_code = mojo::StructTraits<AlternateInterfaceInfo, NativeType>
        ::class_code(input);
    result->subclass_code = mojo::StructTraits<AlternateInterfaceInfo, NativeType>
        ::subclass_code(input);
    result->protocol_code = mojo::StructTraits<AlternateInterfaceInfo, NativeType>
        ::protocol_code(input);
    result->interface_name = mojo::StructTraits<AlternateInterfaceInfo, NativeType>
        ::interface_name(input);
    result->endpoints = mojo::StructTraits<AlternateInterfaceInfo, NativeType>
        ::endpoints(input);
    *output = result;
  }

  static bool Deserialize(internal::AlternateInterfaceInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<AlternateInterfaceInfo, NativeType>::Read(
        AlternateInterfaceInfo_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const InterfaceInfoPtr& input);
void Serialize_(InterfaceInfoPtr input, mojo::internal::Buffer* buffer,
                internal::InterfaceInfo_Data** output);
bool Deserialize_(internal::InterfaceInfo_Data* input,
                  InterfaceInfoPtr* output,
                  mojo::internal::SerializationContext* context);


class InterfaceInfo_Reader {
 public:
  InterfaceInfo_Reader(internal::InterfaceInfo_Data* data,
                         mojo::internal::SerializationContext* context);
  uint8_t interface_number() const { return data_->interface_number; }
  // TODO(rockot): Support reading other object kinds. (alternates() omitted)

 private:
  internal::InterfaceInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct InterfaceInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::InterfaceInfo_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field alternates";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::InterfaceInfo_Data** output) {
    internal::InterfaceInfo_Data* result =
        internal::InterfaceInfo_Data::New(buffer);
    result->interface_number = mojo::StructTraits<InterfaceInfo, NativeType>
        ::interface_number(input);
    result->alternates = mojo::StructTraits<InterfaceInfo, NativeType>
        ::alternates(input);
    *output = result;
  }

  static bool Deserialize(internal::InterfaceInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<InterfaceInfo, NativeType>::Read(
        InterfaceInfo_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const ConfigurationInfoPtr& input);
void Serialize_(ConfigurationInfoPtr input, mojo::internal::Buffer* buffer,
                internal::ConfigurationInfo_Data** output);
bool Deserialize_(internal::ConfigurationInfo_Data* input,
                  ConfigurationInfoPtr* output,
                  mojo::internal::SerializationContext* context);


class ConfigurationInfo_Reader {
 public:
  ConfigurationInfo_Reader(internal::ConfigurationInfo_Data* data,
                         mojo::internal::SerializationContext* context);
  uint8_t configuration_value() const { return data_->configuration_value; }
  // TODO(rockot): Support reading other object kinds. (configuration_name() omitted)
  // TODO(rockot): Support reading other object kinds. (interfaces() omitted)

 private:
  internal::ConfigurationInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct ConfigurationInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::ConfigurationInfo_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field configuration_name";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field interfaces";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::ConfigurationInfo_Data** output) {
    internal::ConfigurationInfo_Data* result =
        internal::ConfigurationInfo_Data::New(buffer);
    result->configuration_value = mojo::StructTraits<ConfigurationInfo, NativeType>
        ::configuration_value(input);
    result->configuration_name = mojo::StructTraits<ConfigurationInfo, NativeType>
        ::configuration_name(input);
    result->interfaces = mojo::StructTraits<ConfigurationInfo, NativeType>
        ::interfaces(input);
    *output = result;
  }

  static bool Deserialize(internal::ConfigurationInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<ConfigurationInfo, NativeType>::Read(
        ConfigurationInfo_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const WebUsbFunctionSubsetPtr& input);
void Serialize_(WebUsbFunctionSubsetPtr input, mojo::internal::Buffer* buffer,
                internal::WebUsbFunctionSubset_Data** output);
bool Deserialize_(internal::WebUsbFunctionSubset_Data* input,
                  WebUsbFunctionSubsetPtr* output,
                  mojo::internal::SerializationContext* context);


class WebUsbFunctionSubset_Reader {
 public:
  WebUsbFunctionSubset_Reader(internal::WebUsbFunctionSubset_Data* data,
                         mojo::internal::SerializationContext* context);
  uint8_t first_interface() const { return data_->first_interface; }
  // TODO(rockot): Support reading other object kinds. (origins() omitted)

 private:
  internal::WebUsbFunctionSubset_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct WebUsbFunctionSubset_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::WebUsbFunctionSubset_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field origins";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::WebUsbFunctionSubset_Data** output) {
    internal::WebUsbFunctionSubset_Data* result =
        internal::WebUsbFunctionSubset_Data::New(buffer);
    result->first_interface = mojo::StructTraits<WebUsbFunctionSubset, NativeType>
        ::first_interface(input);
    result->origins = mojo::StructTraits<WebUsbFunctionSubset, NativeType>
        ::origins(input);
    *output = result;
  }

  static bool Deserialize(internal::WebUsbFunctionSubset_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<WebUsbFunctionSubset, NativeType>::Read(
        WebUsbFunctionSubset_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const WebUsbConfigurationSubsetPtr& input);
void Serialize_(WebUsbConfigurationSubsetPtr input, mojo::internal::Buffer* buffer,
                internal::WebUsbConfigurationSubset_Data** output);
bool Deserialize_(internal::WebUsbConfigurationSubset_Data* input,
                  WebUsbConfigurationSubsetPtr* output,
                  mojo::internal::SerializationContext* context);


class WebUsbConfigurationSubset_Reader {
 public:
  WebUsbConfigurationSubset_Reader(internal::WebUsbConfigurationSubset_Data* data,
                         mojo::internal::SerializationContext* context);
  uint8_t configuration_value() const { return data_->configuration_value; }
  // TODO(rockot): Support reading other object kinds. (origins() omitted)
  // TODO(rockot): Support reading other object kinds. (functions() omitted)

 private:
  internal::WebUsbConfigurationSubset_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct WebUsbConfigurationSubset_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::WebUsbConfigurationSubset_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field origins";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field functions";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::WebUsbConfigurationSubset_Data** output) {
    internal::WebUsbConfigurationSubset_Data* result =
        internal::WebUsbConfigurationSubset_Data::New(buffer);
    result->configuration_value = mojo::StructTraits<WebUsbConfigurationSubset, NativeType>
        ::configuration_value(input);
    result->origins = mojo::StructTraits<WebUsbConfigurationSubset, NativeType>
        ::origins(input);
    result->functions = mojo::StructTraits<WebUsbConfigurationSubset, NativeType>
        ::functions(input);
    *output = result;
  }

  static bool Deserialize(internal::WebUsbConfigurationSubset_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<WebUsbConfigurationSubset, NativeType>::Read(
        WebUsbConfigurationSubset_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const WebUsbDescriptorSetPtr& input);
void Serialize_(WebUsbDescriptorSetPtr input, mojo::internal::Buffer* buffer,
                internal::WebUsbDescriptorSet_Data** output);
bool Deserialize_(internal::WebUsbDescriptorSet_Data* input,
                  WebUsbDescriptorSetPtr* output,
                  mojo::internal::SerializationContext* context);


class WebUsbDescriptorSet_Reader {
 public:
  WebUsbDescriptorSet_Reader(internal::WebUsbDescriptorSet_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (origins() omitted)
  // TODO(rockot): Support reading other object kinds. (configurations() omitted)

 private:
  internal::WebUsbDescriptorSet_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct WebUsbDescriptorSet_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::WebUsbDescriptorSet_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field origins";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field configurations";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::WebUsbDescriptorSet_Data** output) {
    internal::WebUsbDescriptorSet_Data* result =
        internal::WebUsbDescriptorSet_Data::New(buffer);
    result->origins = mojo::StructTraits<WebUsbDescriptorSet, NativeType>
        ::origins(input);
    result->configurations = mojo::StructTraits<WebUsbDescriptorSet, NativeType>
        ::configurations(input);
    *output = result;
  }

  static bool Deserialize(internal::WebUsbDescriptorSet_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<WebUsbDescriptorSet, NativeType>::Read(
        WebUsbDescriptorSet_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const DeviceInfoPtr& input);
void Serialize_(DeviceInfoPtr input, mojo::internal::Buffer* buffer,
                internal::DeviceInfo_Data** output);
bool Deserialize_(internal::DeviceInfo_Data* input,
                  DeviceInfoPtr* output,
                  mojo::internal::SerializationContext* context);


class DeviceInfo_Reader {
 public:
  DeviceInfo_Reader(internal::DeviceInfo_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (guid() omitted)
  uint8_t usb_version_major() const { return data_->usb_version_major; }
  uint8_t usb_version_minor() const { return data_->usb_version_minor; }
  uint8_t usb_version_subminor() const { return data_->usb_version_subminor; }
  uint8_t class_code() const { return data_->class_code; }
  uint8_t subclass_code() const { return data_->subclass_code; }
  uint8_t protocol_code() const { return data_->protocol_code; }
  uint16_t vendor_id() const { return data_->vendor_id; }
  uint16_t product_id() const { return data_->product_id; }
  uint8_t device_version_major() const { return data_->device_version_major; }
  uint8_t device_version_minor() const { return data_->device_version_minor; }
  uint8_t device_version_subminor() const { return data_->device_version_subminor; }
  // TODO(rockot): Support reading other object kinds. (manufacturer_name() omitted)
  // TODO(rockot): Support reading other object kinds. (product_name() omitted)
  // TODO(rockot): Support reading other object kinds. (serial_number() omitted)
  // TODO(rockot): Support reading other object kinds. (configurations() omitted)
  WebUsbDescriptorSet::Reader webusb_allowed_origins() const;

 private:
  internal::DeviceInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct DeviceInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::DeviceInfo_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field guid";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field manufacturer_name";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field product_name";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field serial_number";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field configurations";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field webusb_allowed_origins";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::DeviceInfo_Data** output) {
    internal::DeviceInfo_Data* result =
        internal::DeviceInfo_Data::New(buffer);
    result->guid = mojo::StructTraits<DeviceInfo, NativeType>
        ::guid(input);
    result->usb_version_major = mojo::StructTraits<DeviceInfo, NativeType>
        ::usb_version_major(input);
    result->usb_version_minor = mojo::StructTraits<DeviceInfo, NativeType>
        ::usb_version_minor(input);
    result->usb_version_subminor = mojo::StructTraits<DeviceInfo, NativeType>
        ::usb_version_subminor(input);
    result->class_code = mojo::StructTraits<DeviceInfo, NativeType>
        ::class_code(input);
    result->subclass_code = mojo::StructTraits<DeviceInfo, NativeType>
        ::subclass_code(input);
    result->protocol_code = mojo::StructTraits<DeviceInfo, NativeType>
        ::protocol_code(input);
    result->vendor_id = mojo::StructTraits<DeviceInfo, NativeType>
        ::vendor_id(input);
    result->product_id = mojo::StructTraits<DeviceInfo, NativeType>
        ::product_id(input);
    result->device_version_major = mojo::StructTraits<DeviceInfo, NativeType>
        ::device_version_major(input);
    result->device_version_minor = mojo::StructTraits<DeviceInfo, NativeType>
        ::device_version_minor(input);
    result->device_version_subminor = mojo::StructTraits<DeviceInfo, NativeType>
        ::device_version_subminor(input);
    result->manufacturer_name = mojo::StructTraits<DeviceInfo, NativeType>
        ::manufacturer_name(input);
    result->product_name = mojo::StructTraits<DeviceInfo, NativeType>
        ::product_name(input);
    result->serial_number = mojo::StructTraits<DeviceInfo, NativeType>
        ::serial_number(input);
    result->configurations = mojo::StructTraits<DeviceInfo, NativeType>
        ::configurations(input);
    result->webusb_allowed_origins = mojo::StructTraits<DeviceInfo, NativeType>
        ::webusb_allowed_origins(input);
    *output = result;
  }

  static bool Deserialize(internal::DeviceInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<DeviceInfo, NativeType>::Read(
        DeviceInfo_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const ControlTransferParamsPtr& input);
void Serialize_(ControlTransferParamsPtr input, mojo::internal::Buffer* buffer,
                internal::ControlTransferParams_Data** output);
bool Deserialize_(internal::ControlTransferParams_Data* input,
                  ControlTransferParamsPtr* output,
                  mojo::internal::SerializationContext* context);


class ControlTransferParams_Reader {
 public:
  ControlTransferParams_Reader(internal::ControlTransferParams_Data* data,
                         mojo::internal::SerializationContext* context);
  ControlTransferType type() const {
    return static_cast<ControlTransferType>(data_->type.value);
  }
  ControlTransferRecipient recipient() const {
    return static_cast<ControlTransferRecipient>(data_->recipient.value);
  }
  uint8_t request() const { return data_->request; }
  uint16_t value() const { return data_->value; }
  uint16_t index() const { return data_->index; }

 private:
  internal::ControlTransferParams_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct ControlTransferParams_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::ControlTransferParams_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::ControlTransferParams_Data** output) {
    internal::ControlTransferParams_Data* result =
        internal::ControlTransferParams_Data::New(buffer);
    result->type = mojo::StructTraits<ControlTransferParams, NativeType>
        ::type(input);
    result->recipient = mojo::StructTraits<ControlTransferParams, NativeType>
        ::recipient(input);
    result->request = mojo::StructTraits<ControlTransferParams, NativeType>
        ::request(input);
    result->value = mojo::StructTraits<ControlTransferParams, NativeType>
        ::value(input);
    result->index = mojo::StructTraits<ControlTransferParams, NativeType>
        ::index(input);
    *output = result;
  }

  static bool Deserialize(internal::ControlTransferParams_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<ControlTransferParams, NativeType>::Read(
        ControlTransferParams_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const IsochronousPacketPtr& input);
void Serialize_(IsochronousPacketPtr input, mojo::internal::Buffer* buffer,
                internal::IsochronousPacket_Data** output);
bool Deserialize_(internal::IsochronousPacket_Data* input,
                  IsochronousPacketPtr* output,
                  mojo::internal::SerializationContext* context);


class IsochronousPacket_Reader {
 public:
  IsochronousPacket_Reader(internal::IsochronousPacket_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t length() const { return data_->length; }
  uint32_t transferred_length() const { return data_->transferred_length; }
  TransferStatus status() const {
    return static_cast<TransferStatus>(data_->status.value);
  }

 private:
  internal::IsochronousPacket_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct IsochronousPacket_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::IsochronousPacket_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::IsochronousPacket_Data** output) {
    internal::IsochronousPacket_Data* result =
        internal::IsochronousPacket_Data::New(buffer);
    result->length = mojo::StructTraits<IsochronousPacket, NativeType>
        ::length(input);
    result->transferred_length = mojo::StructTraits<IsochronousPacket, NativeType>
        ::transferred_length(input);
    result->status = mojo::StructTraits<IsochronousPacket, NativeType>
        ::status(input);
    *output = result;
  }

  static bool Deserialize(internal::IsochronousPacket_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<IsochronousPacket, NativeType>::Read(
        IsochronousPacket_Reader(input, context), output);
  }
};  
}  // namespace usb
}  // namespace device

#endif  // DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_DEVICE_MOJOM_H_