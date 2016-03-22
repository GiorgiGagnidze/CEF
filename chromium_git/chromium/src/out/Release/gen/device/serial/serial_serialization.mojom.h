// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_SERIAL_SERIAL_SERIALIZATION_MOJOM_H_
#define DEVICE_SERIAL_SERIAL_SERIALIZATION_MOJOM_H_

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
#include "device/serial/serial_serialization.mojom-internal.h"
#include "device/serial/serial.mojom.h"
#include "device/serial/data_stream_serialization.mojom.h"
namespace device {
namespace serial {

class ConnectionState;
class ConnectionState_Reader;

using ConnectionStatePtr = mojo::StructPtr<ConnectionState>;


class SerializedConnection;
class SerializedConnection_Reader;

using SerializedConnectionPtr = mojo::StructPtr<SerializedConnection>;








class ConnectionState_Reader;

class ConnectionState {
 public:
  using Data_ = internal::ConnectionState_Data;
  using Reader = ConnectionState_Reader;

  static ConnectionStatePtr New();

  template <typename U>
  static ConnectionStatePtr From(const U& u) {
    return mojo::TypeConverter<ConnectionStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ConnectionState>::Convert(*this);
  }

  ConnectionState();
  ~ConnectionState();


  ConnectionStatePtr Clone() const;
  bool Equals(const ConnectionState& other) const;

  uint32_t connectionId;
  bool paused;
  bool persistent;
  mojo::String name;
  uint32_t receiveTimeout;
  uint32_t sendTimeout;
  uint32_t bufferSize;
};


class SerializedConnection_Reader;

class SerializedConnection {
 public:
  using Data_ = internal::SerializedConnection_Data;
  using Reader = SerializedConnection_Reader;

  static SerializedConnectionPtr New();

  template <typename U>
  static SerializedConnectionPtr From(const U& u) {
    return mojo::TypeConverter<SerializedConnectionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerializedConnection>::Convert(*this);
  }

  SerializedConnection();
  ~SerializedConnection();


  bool Equals(const SerializedConnection& other) const;

  ConnectionStatePtr state;
  device::serial::ReceiveError queuedReceiveError;
  mojo::Array<int8_t> queuedReceiveData;
  device::serial::ConnectionPtr connection;
  device::serial::SerializedDataSenderPtr sender;
  device::serial::SerializedDataReceiverPtr receiver;
};


size_t GetSerializedSize_(const ConnectionStatePtr& input);
void Serialize_(ConnectionStatePtr input, mojo::internal::Buffer* buffer,
                internal::ConnectionState_Data** output);
bool Deserialize_(internal::ConnectionState_Data* input,
                  ConnectionStatePtr* output,
                  mojo::internal::SerializationContext* context);


class ConnectionState_Reader {
 public:
  ConnectionState_Reader(internal::ConnectionState_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t connectionId() const { return data_->connectionId; }
  bool paused() const { return data_->paused; }
  bool persistent() const { return data_->persistent; }
  // TODO(rockot): Support reading other object kinds. (name() omitted)
  uint32_t receiveTimeout() const { return data_->receiveTimeout; }
  uint32_t sendTimeout() const { return data_->sendTimeout; }
  uint32_t bufferSize() const { return data_->bufferSize; }

 private:
  internal::ConnectionState_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct ConnectionState_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::ConnectionState_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field name";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::ConnectionState_Data** output) {
    internal::ConnectionState_Data* result =
        internal::ConnectionState_Data::New(buffer);
    result->connectionId = mojo::StructTraits<ConnectionState, NativeType>
        ::connectionId(input);
    result->paused = mojo::StructTraits<ConnectionState, NativeType>
        ::paused(input);
    result->persistent = mojo::StructTraits<ConnectionState, NativeType>
        ::persistent(input);
    result->name = mojo::StructTraits<ConnectionState, NativeType>
        ::name(input);
    result->receiveTimeout = mojo::StructTraits<ConnectionState, NativeType>
        ::receiveTimeout(input);
    result->sendTimeout = mojo::StructTraits<ConnectionState, NativeType>
        ::sendTimeout(input);
    result->bufferSize = mojo::StructTraits<ConnectionState, NativeType>
        ::bufferSize(input);
    *output = result;
  }

  static bool Deserialize(internal::ConnectionState_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<ConnectionState, NativeType>::Read(
        ConnectionState_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const SerializedConnectionPtr& input);
void Serialize_(SerializedConnectionPtr input, mojo::internal::Buffer* buffer,
                internal::SerializedConnection_Data** output);
bool Deserialize_(internal::SerializedConnection_Data* input,
                  SerializedConnectionPtr* output,
                  mojo::internal::SerializationContext* context);


class SerializedConnection_Reader {
 public:
  SerializedConnection_Reader(internal::SerializedConnection_Data* data,
                         mojo::internal::SerializationContext* context);
  ConnectionState::Reader state() const;
  device::serial::ReceiveError queuedReceiveError() const {
    return static_cast<device::serial::ReceiveError>(data_->queuedReceiveError.value);
  }
  // TODO(rockot): Support reading other object kinds. (queuedReceiveData() omitted)
  // TODO(rockot): Support reading interfaces. (connection() omitted)
  device::serial::SerializedDataSender::Reader sender() const;
  device::serial::SerializedDataReceiver::Reader receiver() const;

 private:
  internal::SerializedConnection_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct SerializedConnection_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::SerializedConnection_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field state";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field queuedReceiveData";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field sender";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field receiver";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::SerializedConnection_Data** output) {
    internal::SerializedConnection_Data* result =
        internal::SerializedConnection_Data::New(buffer);
    result->state = mojo::StructTraits<SerializedConnection, NativeType>
        ::state(input);
    result->queuedReceiveError = mojo::StructTraits<SerializedConnection, NativeType>
        ::queuedReceiveError(input);
    result->queuedReceiveData = mojo::StructTraits<SerializedConnection, NativeType>
        ::queuedReceiveData(input);
    result->connection = mojo::StructTraits<SerializedConnection, NativeType>
        ::connection(input);
    result->sender = mojo::StructTraits<SerializedConnection, NativeType>
        ::sender(input);
    result->receiver = mojo::StructTraits<SerializedConnection, NativeType>
        ::receiver(input);
    *output = result;
  }

  static bool Deserialize(internal::SerializedConnection_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<SerializedConnection, NativeType>::Read(
        SerializedConnection_Reader(input, context), output);
  }
};  
}  // namespace serial
}  // namespace device

#endif  // DEVICE_SERIAL_SERIAL_SERIALIZATION_MOJOM_H_