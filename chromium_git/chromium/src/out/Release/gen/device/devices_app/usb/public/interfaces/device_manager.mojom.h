// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_DEVICE_MANAGER_MOJOM_H_
#define DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_DEVICE_MANAGER_MOJOM_H_

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
#include "device/devices_app/usb/public/interfaces/device_manager.mojom-internal.h"
#include "device/devices_app/usb/public/interfaces/device.mojom.h"
namespace device {
namespace usb {

class DeviceManager;
using DeviceManagerPtr = mojo::InterfacePtr<DeviceManager>;
using DeviceManagerPtrInfo = mojo::InterfacePtrInfo<DeviceManager>;
using DeviceManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<DeviceManager>;
using DeviceManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DeviceManager>;

class DeviceFilter;
class DeviceFilter_Reader;

using DeviceFilterPtr = mojo::StructPtr<DeviceFilter>;


class EnumerationOptions;
class EnumerationOptions_Reader;

using EnumerationOptionsPtr = mojo::StructPtr<EnumerationOptions>;


class DeviceChangeNotification;
class DeviceChangeNotification_Reader;

using DeviceChangeNotificationPtr = mojo::StructPtr<DeviceChangeNotification>;



class DeviceManagerProxy;
class DeviceManagerStub;

class DeviceManagerRequestValidator;
class DeviceManagerResponseValidator;

class DeviceManager {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::device::usb::DeviceManager;

  using Proxy_ = DeviceManagerProxy;
  using Stub_ = DeviceManagerStub;

  using RequestValidator_ = DeviceManagerRequestValidator;
  using ResponseValidator_ = DeviceManagerResponseValidator;

  virtual ~DeviceManager() {}

  using GetDevicesCallback = mojo::Callback<void(mojo::Array<device::usb::DeviceInfoPtr>)>;
  virtual void GetDevices(EnumerationOptionsPtr options, const GetDevicesCallback& callback) = 0;

  using GetDeviceChangesCallback = mojo::Callback<void(DeviceChangeNotificationPtr)>;
  virtual void GetDeviceChanges(const GetDeviceChangesCallback& callback) = 0;

  virtual void GetDevice(const mojo::String& guid, mojo::InterfaceRequest<device::usb::Device> device_request) = 0;
};

class DeviceManagerProxy
    : public DeviceManager,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit DeviceManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDevices(
      EnumerationOptionsPtr options, const GetDevicesCallback& callback
  ) override;
  void GetDeviceChanges(
      const GetDeviceChangesCallback& callback
  ) override;
  void GetDevice(
      const mojo::String& guid, mojo::InterfaceRequest<device::usb::Device> device_request
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class DeviceManagerStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  DeviceManagerStub();
  ~DeviceManagerStub() override;
  void set_sink(DeviceManager* sink) { sink_ = sink; }
  DeviceManager* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  DeviceManager* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class DeviceManagerRequestValidator : public mojo::MessageFilter {
 public:
  explicit DeviceManagerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class DeviceManagerResponseValidator : public mojo::MessageFilter {
 public:
  explicit DeviceManagerResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};







class DeviceFilter_Reader;

class DeviceFilter {
 public:
  using Data_ = internal::DeviceFilter_Data;
  using Reader = DeviceFilter_Reader;

  static DeviceFilterPtr New();

  template <typename U>
  static DeviceFilterPtr From(const U& u) {
    return mojo::TypeConverter<DeviceFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DeviceFilter>::Convert(*this);
  }

  DeviceFilter();
  ~DeviceFilter();


  DeviceFilterPtr Clone() const;
  bool Equals(const DeviceFilter& other) const;

  bool has_vendor_id;
  uint16_t vendor_id;
  bool has_product_id;
  uint16_t product_id;
  bool has_class_code;
  uint8_t class_code;
  bool has_subclass_code;
  uint8_t subclass_code;
  bool has_protocol_code;
  uint8_t protocol_code;
};


class EnumerationOptions_Reader;

class EnumerationOptions {
 public:
  using Data_ = internal::EnumerationOptions_Data;
  using Reader = EnumerationOptions_Reader;

  static EnumerationOptionsPtr New();

  template <typename U>
  static EnumerationOptionsPtr From(const U& u) {
    return mojo::TypeConverter<EnumerationOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EnumerationOptions>::Convert(*this);
  }

  EnumerationOptions();
  ~EnumerationOptions();


  EnumerationOptionsPtr Clone() const;
  bool Equals(const EnumerationOptions& other) const;

  mojo::Array<DeviceFilterPtr> filters;
};


class DeviceChangeNotification_Reader;

class DeviceChangeNotification {
 public:
  using Data_ = internal::DeviceChangeNotification_Data;
  using Reader = DeviceChangeNotification_Reader;

  static DeviceChangeNotificationPtr New();

  template <typename U>
  static DeviceChangeNotificationPtr From(const U& u) {
    return mojo::TypeConverter<DeviceChangeNotificationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DeviceChangeNotification>::Convert(*this);
  }

  DeviceChangeNotification();
  ~DeviceChangeNotification();


  DeviceChangeNotificationPtr Clone() const;
  bool Equals(const DeviceChangeNotification& other) const;

  mojo::Array<device::usb::DeviceInfoPtr> devices_added;
  mojo::Array<device::usb::DeviceInfoPtr> devices_removed;
};


size_t GetSerializedSize_(const DeviceFilterPtr& input);
void Serialize_(DeviceFilterPtr input, mojo::internal::Buffer* buffer,
                internal::DeviceFilter_Data** output);
bool Deserialize_(internal::DeviceFilter_Data* input,
                  DeviceFilterPtr* output,
                  mojo::internal::SerializationContext* context);


class DeviceFilter_Reader {
 public:
  DeviceFilter_Reader(internal::DeviceFilter_Data* data,
                         mojo::internal::SerializationContext* context);
  bool has_vendor_id() const { return data_->has_vendor_id; }
  uint16_t vendor_id() const { return data_->vendor_id; }
  bool has_product_id() const { return data_->has_product_id; }
  uint16_t product_id() const { return data_->product_id; }
  bool has_class_code() const { return data_->has_class_code; }
  uint8_t class_code() const { return data_->class_code; }
  bool has_subclass_code() const { return data_->has_subclass_code; }
  uint8_t subclass_code() const { return data_->subclass_code; }
  bool has_protocol_code() const { return data_->has_protocol_code; }
  uint8_t protocol_code() const { return data_->protocol_code; }

 private:
  internal::DeviceFilter_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct DeviceFilter_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::DeviceFilter_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::DeviceFilter_Data** output) {
    internal::DeviceFilter_Data* result =
        internal::DeviceFilter_Data::New(buffer);
    result->has_vendor_id = mojo::StructTraits<DeviceFilter, NativeType>
        ::has_vendor_id(input);
    result->vendor_id = mojo::StructTraits<DeviceFilter, NativeType>
        ::vendor_id(input);
    result->has_product_id = mojo::StructTraits<DeviceFilter, NativeType>
        ::has_product_id(input);
    result->product_id = mojo::StructTraits<DeviceFilter, NativeType>
        ::product_id(input);
    result->has_class_code = mojo::StructTraits<DeviceFilter, NativeType>
        ::has_class_code(input);
    result->class_code = mojo::StructTraits<DeviceFilter, NativeType>
        ::class_code(input);
    result->has_subclass_code = mojo::StructTraits<DeviceFilter, NativeType>
        ::has_subclass_code(input);
    result->subclass_code = mojo::StructTraits<DeviceFilter, NativeType>
        ::subclass_code(input);
    result->has_protocol_code = mojo::StructTraits<DeviceFilter, NativeType>
        ::has_protocol_code(input);
    result->protocol_code = mojo::StructTraits<DeviceFilter, NativeType>
        ::protocol_code(input);
    *output = result;
  }

  static bool Deserialize(internal::DeviceFilter_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<DeviceFilter, NativeType>::Read(
        DeviceFilter_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const EnumerationOptionsPtr& input);
void Serialize_(EnumerationOptionsPtr input, mojo::internal::Buffer* buffer,
                internal::EnumerationOptions_Data** output);
bool Deserialize_(internal::EnumerationOptions_Data* input,
                  EnumerationOptionsPtr* output,
                  mojo::internal::SerializationContext* context);


class EnumerationOptions_Reader {
 public:
  EnumerationOptions_Reader(internal::EnumerationOptions_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (filters() omitted)

 private:
  internal::EnumerationOptions_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct EnumerationOptions_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::EnumerationOptions_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field filters";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::EnumerationOptions_Data** output) {
    internal::EnumerationOptions_Data* result =
        internal::EnumerationOptions_Data::New(buffer);
    result->filters = mojo::StructTraits<EnumerationOptions, NativeType>
        ::filters(input);
    *output = result;
  }

  static bool Deserialize(internal::EnumerationOptions_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<EnumerationOptions, NativeType>::Read(
        EnumerationOptions_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const DeviceChangeNotificationPtr& input);
void Serialize_(DeviceChangeNotificationPtr input, mojo::internal::Buffer* buffer,
                internal::DeviceChangeNotification_Data** output);
bool Deserialize_(internal::DeviceChangeNotification_Data* input,
                  DeviceChangeNotificationPtr* output,
                  mojo::internal::SerializationContext* context);


class DeviceChangeNotification_Reader {
 public:
  DeviceChangeNotification_Reader(internal::DeviceChangeNotification_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (devices_added() omitted)
  // TODO(rockot): Support reading other object kinds. (devices_removed() omitted)

 private:
  internal::DeviceChangeNotification_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct DeviceChangeNotification_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::DeviceChangeNotification_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field devices_added";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field devices_removed";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::DeviceChangeNotification_Data** output) {
    internal::DeviceChangeNotification_Data* result =
        internal::DeviceChangeNotification_Data::New(buffer);
    result->devices_added = mojo::StructTraits<DeviceChangeNotification, NativeType>
        ::devices_added(input);
    result->devices_removed = mojo::StructTraits<DeviceChangeNotification, NativeType>
        ::devices_removed(input);
    *output = result;
  }

  static bool Deserialize(internal::DeviceChangeNotification_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<DeviceChangeNotification, NativeType>::Read(
        DeviceChangeNotification_Reader(input, context), output);
  }
};  
}  // namespace usb
}  // namespace device

#endif  // DEVICE_DEVICES_APP_USB_PUBLIC_INTERFACES_DEVICE_MANAGER_MOJOM_H_