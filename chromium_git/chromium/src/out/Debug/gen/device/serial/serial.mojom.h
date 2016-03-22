// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_SERIAL_SERIAL_MOJOM_H_
#define DEVICE_SERIAL_SERIAL_MOJOM_H_

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
#include "device/serial/serial.mojom-internal.h"
#include "device/serial/data_stream.mojom.h"
namespace device {
namespace serial {

  
enum class SendError : int32_t {
  NONE,
  DISCONNECTED,
  PENDING,
  TIMEOUT,
  SYSTEM_ERROR,
};
  
inline std::ostream& operator<<(std::ostream& os, SendError value) {
  switch(value) {
    case SendError::NONE:
      return os << "SendError::NONE";
    case SendError::DISCONNECTED:
      return os << "SendError::DISCONNECTED";
    case SendError::PENDING:
      return os << "SendError::PENDING";
    case SendError::TIMEOUT:
      return os << "SendError::TIMEOUT";
    case SendError::SYSTEM_ERROR:
      return os << "SendError::SYSTEM_ERROR";
    default:
      return os << "Unknown SendError value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(SendError value) {
  return ::device::serial::internal::SendError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class ReceiveError : int32_t {
  NONE,
  DISCONNECTED,
  TIMEOUT,
  DEVICE_LOST,
  BREAK,
  FRAME_ERROR,
  OVERRUN,
  BUFFER_OVERFLOW,
  PARITY_ERROR,
  SYSTEM_ERROR,
};
  
inline std::ostream& operator<<(std::ostream& os, ReceiveError value) {
  switch(value) {
    case ReceiveError::NONE:
      return os << "ReceiveError::NONE";
    case ReceiveError::DISCONNECTED:
      return os << "ReceiveError::DISCONNECTED";
    case ReceiveError::TIMEOUT:
      return os << "ReceiveError::TIMEOUT";
    case ReceiveError::DEVICE_LOST:
      return os << "ReceiveError::DEVICE_LOST";
    case ReceiveError::BREAK:
      return os << "ReceiveError::BREAK";
    case ReceiveError::FRAME_ERROR:
      return os << "ReceiveError::FRAME_ERROR";
    case ReceiveError::OVERRUN:
      return os << "ReceiveError::OVERRUN";
    case ReceiveError::BUFFER_OVERFLOW:
      return os << "ReceiveError::BUFFER_OVERFLOW";
    case ReceiveError::PARITY_ERROR:
      return os << "ReceiveError::PARITY_ERROR";
    case ReceiveError::SYSTEM_ERROR:
      return os << "ReceiveError::SYSTEM_ERROR";
    default:
      return os << "Unknown ReceiveError value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(ReceiveError value) {
  return ::device::serial::internal::ReceiveError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class DataBits : int32_t {
  NONE,
  SEVEN,
  EIGHT,
};
  
inline std::ostream& operator<<(std::ostream& os, DataBits value) {
  switch(value) {
    case DataBits::NONE:
      return os << "DataBits::NONE";
    case DataBits::SEVEN:
      return os << "DataBits::SEVEN";
    case DataBits::EIGHT:
      return os << "DataBits::EIGHT";
    default:
      return os << "Unknown DataBits value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(DataBits value) {
  return ::device::serial::internal::DataBits_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class ParityBit : int32_t {
  NONE,
  NO,
  ODD,
  EVEN,
};
  
inline std::ostream& operator<<(std::ostream& os, ParityBit value) {
  switch(value) {
    case ParityBit::NONE:
      return os << "ParityBit::NONE";
    case ParityBit::NO:
      return os << "ParityBit::NO";
    case ParityBit::ODD:
      return os << "ParityBit::ODD";
    case ParityBit::EVEN:
      return os << "ParityBit::EVEN";
    default:
      return os << "Unknown ParityBit value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(ParityBit value) {
  return ::device::serial::internal::ParityBit_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class StopBits : int32_t {
  NONE,
  ONE,
  TWO,
};
  
inline std::ostream& operator<<(std::ostream& os, StopBits value) {
  switch(value) {
    case StopBits::NONE:
      return os << "StopBits::NONE";
    case StopBits::ONE:
      return os << "StopBits::ONE";
    case StopBits::TWO:
      return os << "StopBits::TWO";
    default:
      return os << "Unknown StopBits value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(StopBits value) {
  return ::device::serial::internal::StopBits_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class SerialService;
using SerialServicePtr = mojo::InterfacePtr<SerialService>;
using SerialServicePtrInfo = mojo::InterfacePtrInfo<SerialService>;
using SerialServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<SerialService>;
using SerialServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SerialService>;

class Connection;
using ConnectionPtr = mojo::InterfacePtr<Connection>;
using ConnectionPtrInfo = mojo::InterfacePtrInfo<Connection>;
using ConnectionAssociatedPtr =
    mojo::AssociatedInterfacePtr<Connection>;
using ConnectionAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Connection>;

class DeviceInfo;
class DeviceInfo_Reader;

using DeviceInfoPtr = mojo::StructPtr<DeviceInfo>;


class ConnectionOptions;
class ConnectionOptions_Reader;

using ConnectionOptionsPtr = mojo::StructPtr<ConnectionOptions>;


class ConnectionInfo;
class ConnectionInfo_Reader;

using ConnectionInfoPtr = mojo::StructPtr<ConnectionInfo>;


class HostControlSignals;
class HostControlSignals_Reader;

using HostControlSignalsPtr = mojo::InlinedStructPtr<HostControlSignals>;


class DeviceControlSignals;
class DeviceControlSignals_Reader;

using DeviceControlSignalsPtr = mojo::InlinedStructPtr<DeviceControlSignals>;



class SerialServiceProxy;
class SerialServiceStub;

class SerialServiceRequestValidator;
class SerialServiceResponseValidator;

class SerialService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::device::serial::SerialService;

  using Proxy_ = SerialServiceProxy;
  using Stub_ = SerialServiceStub;

  using RequestValidator_ = SerialServiceRequestValidator;
  using ResponseValidator_ = SerialServiceResponseValidator;

  virtual ~SerialService() {}

  using GetDevicesCallback = mojo::Callback<void(mojo::Array<DeviceInfoPtr>)>;
  virtual void GetDevices(const GetDevicesCallback& callback) = 0;

  virtual void Connect(const mojo::String& path, ConnectionOptionsPtr options, mojo::InterfaceRequest<Connection> connection, mojo::InterfaceRequest<device::serial::DataSink> sink, mojo::InterfaceRequest<device::serial::DataSource> source, device::serial::DataSourceClientPtr source_client) = 0;
};

class ConnectionProxy;
class ConnectionStub;

class ConnectionRequestValidator;
class ConnectionResponseValidator;

class Connection {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::device::serial::Connection;

  using Proxy_ = ConnectionProxy;
  using Stub_ = ConnectionStub;

  using RequestValidator_ = ConnectionRequestValidator;
  using ResponseValidator_ = ConnectionResponseValidator;

  virtual ~Connection() {}

  using GetInfoCallback = mojo::Callback<void(ConnectionInfoPtr)>;
  virtual void GetInfo(const GetInfoCallback& callback) = 0;

  using SetOptionsCallback = mojo::Callback<void(bool)>;
  virtual void SetOptions(ConnectionOptionsPtr options, const SetOptionsCallback& callback) = 0;

  using SetControlSignalsCallback = mojo::Callback<void(bool)>;
  virtual void SetControlSignals(HostControlSignalsPtr signals, const SetControlSignalsCallback& callback) = 0;

  using GetControlSignalsCallback = mojo::Callback<void(DeviceControlSignalsPtr)>;
  virtual void GetControlSignals(const GetControlSignalsCallback& callback) = 0;

  using FlushCallback = mojo::Callback<void(bool)>;
  virtual void Flush(const FlushCallback& callback) = 0;
};

class SerialServiceProxy
    : public SerialService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit SerialServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDevices(
      const GetDevicesCallback& callback
  ) override;
  void Connect(
      const mojo::String& path, ConnectionOptionsPtr options, mojo::InterfaceRequest<Connection> connection, mojo::InterfaceRequest<device::serial::DataSink> sink, mojo::InterfaceRequest<device::serial::DataSource> source, device::serial::DataSourceClientPtr source_client
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class ConnectionProxy
    : public Connection,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ConnectionProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetInfo(
      const GetInfoCallback& callback
  ) override;
  void SetOptions(
      ConnectionOptionsPtr options, const SetOptionsCallback& callback
  ) override;
  void SetControlSignals(
      HostControlSignalsPtr signals, const SetControlSignalsCallback& callback
  ) override;
  void GetControlSignals(
      const GetControlSignalsCallback& callback
  ) override;
  void Flush(
      const FlushCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class SerialServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  SerialServiceStub();
  ~SerialServiceStub() override;
  void set_sink(SerialService* sink) { sink_ = sink; }
  SerialService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  SerialService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ConnectionStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ConnectionStub();
  ~ConnectionStub() override;
  void set_sink(Connection* sink) { sink_ = sink; }
  Connection* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Connection* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class SerialServiceRequestValidator : public mojo::MessageFilter {
 public:
  explicit SerialServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ConnectionRequestValidator : public mojo::MessageFilter {
 public:
  explicit ConnectionRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class SerialServiceResponseValidator : public mojo::MessageFilter {
 public:
  explicit SerialServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ConnectionResponseValidator : public mojo::MessageFilter {
 public:
  explicit ConnectionResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};






class HostControlSignals_Reader;

class HostControlSignals {
 public:
  using Data_ = internal::HostControlSignals_Data;
  using Reader = HostControlSignals_Reader;

  static HostControlSignalsPtr New();

  template <typename U>
  static HostControlSignalsPtr From(const U& u) {
    return mojo::TypeConverter<HostControlSignalsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, HostControlSignals>::Convert(*this);
  }

  HostControlSignals();
  ~HostControlSignals();


  HostControlSignalsPtr Clone() const;
  bool Equals(const HostControlSignals& other) const;

  bool dtr;
  bool has_dtr;
  bool rts;
  bool has_rts;
};


class DeviceControlSignals_Reader;

class DeviceControlSignals {
 public:
  using Data_ = internal::DeviceControlSignals_Data;
  using Reader = DeviceControlSignals_Reader;

  static DeviceControlSignalsPtr New();

  template <typename U>
  static DeviceControlSignalsPtr From(const U& u) {
    return mojo::TypeConverter<DeviceControlSignalsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DeviceControlSignals>::Convert(*this);
  }

  DeviceControlSignals();
  ~DeviceControlSignals();


  DeviceControlSignalsPtr Clone() const;
  bool Equals(const DeviceControlSignals& other) const;

  bool dcd;
  bool cts;
  bool ri;
  bool dsr;
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

  mojo::String path;
  uint16_t vendor_id;
  bool has_vendor_id;
  uint16_t product_id;
  bool has_product_id;
  mojo::String display_name;
};


class ConnectionOptions_Reader;

class ConnectionOptions {
 public:
  using Data_ = internal::ConnectionOptions_Data;
  using Reader = ConnectionOptions_Reader;

  static ConnectionOptionsPtr New();

  template <typename U>
  static ConnectionOptionsPtr From(const U& u) {
    return mojo::TypeConverter<ConnectionOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ConnectionOptions>::Convert(*this);
  }

  ConnectionOptions();
  ~ConnectionOptions();


  ConnectionOptionsPtr Clone() const;
  bool Equals(const ConnectionOptions& other) const;

  uint32_t bitrate;
  DataBits data_bits;
  ParityBit parity_bit;
  StopBits stop_bits;
  bool cts_flow_control;
  bool has_cts_flow_control;
};


class ConnectionInfo_Reader;

class ConnectionInfo {
 public:
  using Data_ = internal::ConnectionInfo_Data;
  using Reader = ConnectionInfo_Reader;

  static ConnectionInfoPtr New();

  template <typename U>
  static ConnectionInfoPtr From(const U& u) {
    return mojo::TypeConverter<ConnectionInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ConnectionInfo>::Convert(*this);
  }

  ConnectionInfo();
  ~ConnectionInfo();


  ConnectionInfoPtr Clone() const;
  bool Equals(const ConnectionInfo& other) const;

  uint32_t bitrate;
  DataBits data_bits;
  ParityBit parity_bit;
  StopBits stop_bits;
  bool cts_flow_control;
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
  // TODO(rockot): Support reading other object kinds. (path() omitted)
  uint16_t vendor_id() const { return data_->vendor_id; }
  bool has_vendor_id() const { return data_->has_vendor_id; }
  uint16_t product_id() const { return data_->product_id; }
  bool has_product_id() const { return data_->has_product_id; }
  // TODO(rockot): Support reading other object kinds. (display_name() omitted)

 private:
  internal::DeviceInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct DeviceInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::DeviceInfo_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field path";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field display_name";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::DeviceInfo_Data** output) {
    internal::DeviceInfo_Data* result =
        internal::DeviceInfo_Data::New(buffer);
    result->path = mojo::StructTraits<DeviceInfo, NativeType>
        ::path(input);
    result->vendor_id = mojo::StructTraits<DeviceInfo, NativeType>
        ::vendor_id(input);
    result->has_vendor_id = mojo::StructTraits<DeviceInfo, NativeType>
        ::has_vendor_id(input);
    result->product_id = mojo::StructTraits<DeviceInfo, NativeType>
        ::product_id(input);
    result->has_product_id = mojo::StructTraits<DeviceInfo, NativeType>
        ::has_product_id(input);
    result->display_name = mojo::StructTraits<DeviceInfo, NativeType>
        ::display_name(input);
    *output = result;
  }

  static bool Deserialize(internal::DeviceInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<DeviceInfo, NativeType>::Read(
        DeviceInfo_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const ConnectionOptionsPtr& input);
void Serialize_(ConnectionOptionsPtr input, mojo::internal::Buffer* buffer,
                internal::ConnectionOptions_Data** output);
bool Deserialize_(internal::ConnectionOptions_Data* input,
                  ConnectionOptionsPtr* output,
                  mojo::internal::SerializationContext* context);


class ConnectionOptions_Reader {
 public:
  ConnectionOptions_Reader(internal::ConnectionOptions_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t bitrate() const { return data_->bitrate; }
  DataBits data_bits() const {
    return static_cast<DataBits>(data_->data_bits.value);
  }
  ParityBit parity_bit() const {
    return static_cast<ParityBit>(data_->parity_bit.value);
  }
  StopBits stop_bits() const {
    return static_cast<StopBits>(data_->stop_bits.value);
  }
  bool cts_flow_control() const { return data_->cts_flow_control; }
  bool has_cts_flow_control() const { return data_->has_cts_flow_control; }

 private:
  internal::ConnectionOptions_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct ConnectionOptions_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::ConnectionOptions_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::ConnectionOptions_Data** output) {
    internal::ConnectionOptions_Data* result =
        internal::ConnectionOptions_Data::New(buffer);
    result->bitrate = mojo::StructTraits<ConnectionOptions, NativeType>
        ::bitrate(input);
    result->data_bits = mojo::StructTraits<ConnectionOptions, NativeType>
        ::data_bits(input);
    result->parity_bit = mojo::StructTraits<ConnectionOptions, NativeType>
        ::parity_bit(input);
    result->stop_bits = mojo::StructTraits<ConnectionOptions, NativeType>
        ::stop_bits(input);
    result->cts_flow_control = mojo::StructTraits<ConnectionOptions, NativeType>
        ::cts_flow_control(input);
    result->has_cts_flow_control = mojo::StructTraits<ConnectionOptions, NativeType>
        ::has_cts_flow_control(input);
    *output = result;
  }

  static bool Deserialize(internal::ConnectionOptions_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<ConnectionOptions, NativeType>::Read(
        ConnectionOptions_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const ConnectionInfoPtr& input);
void Serialize_(ConnectionInfoPtr input, mojo::internal::Buffer* buffer,
                internal::ConnectionInfo_Data** output);
bool Deserialize_(internal::ConnectionInfo_Data* input,
                  ConnectionInfoPtr* output,
                  mojo::internal::SerializationContext* context);


class ConnectionInfo_Reader {
 public:
  ConnectionInfo_Reader(internal::ConnectionInfo_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t bitrate() const { return data_->bitrate; }
  DataBits data_bits() const {
    return static_cast<DataBits>(data_->data_bits.value);
  }
  ParityBit parity_bit() const {
    return static_cast<ParityBit>(data_->parity_bit.value);
  }
  StopBits stop_bits() const {
    return static_cast<StopBits>(data_->stop_bits.value);
  }
  bool cts_flow_control() const { return data_->cts_flow_control; }

 private:
  internal::ConnectionInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct ConnectionInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::ConnectionInfo_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::ConnectionInfo_Data** output) {
    internal::ConnectionInfo_Data* result =
        internal::ConnectionInfo_Data::New(buffer);
    result->bitrate = mojo::StructTraits<ConnectionInfo, NativeType>
        ::bitrate(input);
    result->data_bits = mojo::StructTraits<ConnectionInfo, NativeType>
        ::data_bits(input);
    result->parity_bit = mojo::StructTraits<ConnectionInfo, NativeType>
        ::parity_bit(input);
    result->stop_bits = mojo::StructTraits<ConnectionInfo, NativeType>
        ::stop_bits(input);
    result->cts_flow_control = mojo::StructTraits<ConnectionInfo, NativeType>
        ::cts_flow_control(input);
    *output = result;
  }

  static bool Deserialize(internal::ConnectionInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<ConnectionInfo, NativeType>::Read(
        ConnectionInfo_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const HostControlSignalsPtr& input);
void Serialize_(HostControlSignalsPtr input, mojo::internal::Buffer* buffer,
                internal::HostControlSignals_Data** output);
bool Deserialize_(internal::HostControlSignals_Data* input,
                  HostControlSignalsPtr* output,
                  mojo::internal::SerializationContext* context);


class HostControlSignals_Reader {
 public:
  HostControlSignals_Reader(internal::HostControlSignals_Data* data,
                         mojo::internal::SerializationContext* context);
  bool dtr() const { return data_->dtr; }
  bool has_dtr() const { return data_->has_dtr; }
  bool rts() const { return data_->rts; }
  bool has_rts() const { return data_->has_rts; }

 private:
  internal::HostControlSignals_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct HostControlSignals_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::HostControlSignals_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::HostControlSignals_Data** output) {
    internal::HostControlSignals_Data* result =
        internal::HostControlSignals_Data::New(buffer);
    result->dtr = mojo::StructTraits<HostControlSignals, NativeType>
        ::dtr(input);
    result->has_dtr = mojo::StructTraits<HostControlSignals, NativeType>
        ::has_dtr(input);
    result->rts = mojo::StructTraits<HostControlSignals, NativeType>
        ::rts(input);
    result->has_rts = mojo::StructTraits<HostControlSignals, NativeType>
        ::has_rts(input);
    *output = result;
  }

  static bool Deserialize(internal::HostControlSignals_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<HostControlSignals, NativeType>::Read(
        HostControlSignals_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const DeviceControlSignalsPtr& input);
void Serialize_(DeviceControlSignalsPtr input, mojo::internal::Buffer* buffer,
                internal::DeviceControlSignals_Data** output);
bool Deserialize_(internal::DeviceControlSignals_Data* input,
                  DeviceControlSignalsPtr* output,
                  mojo::internal::SerializationContext* context);


class DeviceControlSignals_Reader {
 public:
  DeviceControlSignals_Reader(internal::DeviceControlSignals_Data* data,
                         mojo::internal::SerializationContext* context);
  bool dcd() const { return data_->dcd; }
  bool cts() const { return data_->cts; }
  bool ri() const { return data_->ri; }
  bool dsr() const { return data_->dsr; }

 private:
  internal::DeviceControlSignals_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct DeviceControlSignals_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::DeviceControlSignals_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::DeviceControlSignals_Data** output) {
    internal::DeviceControlSignals_Data* result =
        internal::DeviceControlSignals_Data::New(buffer);
    result->dcd = mojo::StructTraits<DeviceControlSignals, NativeType>
        ::dcd(input);
    result->cts = mojo::StructTraits<DeviceControlSignals, NativeType>
        ::cts(input);
    result->ri = mojo::StructTraits<DeviceControlSignals, NativeType>
        ::ri(input);
    result->dsr = mojo::StructTraits<DeviceControlSignals, NativeType>
        ::dsr(input);
    *output = result;
  }

  static bool Deserialize(internal::DeviceControlSignals_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<DeviceControlSignals, NativeType>::Read(
        DeviceControlSignals_Reader(input, context), output);
  }
};  
}  // namespace serial
}  // namespace device

#endif  // DEVICE_SERIAL_SERIAL_MOJOM_H_