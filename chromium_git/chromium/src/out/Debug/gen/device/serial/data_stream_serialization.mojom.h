// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_SERIAL_DATA_STREAM_SERIALIZATION_MOJOM_H_
#define DEVICE_SERIAL_DATA_STREAM_SERIALIZATION_MOJOM_H_

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
#include "device/serial/data_stream_serialization.mojom-internal.h"
#include "device/serial/data_stream.mojom.h"
namespace device {
namespace serial {

class SerializedDataSender;
class SerializedDataSender_Reader;

using SerializedDataSenderPtr = mojo::StructPtr<SerializedDataSender>;


class PendingReceiveError;
class PendingReceiveError_Reader;

using PendingReceiveErrorPtr = mojo::InlinedStructPtr<PendingReceiveError>;


class SerializedDataReceiver;
class SerializedDataReceiver_Reader;

using SerializedDataReceiverPtr = mojo::StructPtr<SerializedDataReceiver>;






class PendingReceiveError_Reader;

class PendingReceiveError {
 public:
  using Data_ = internal::PendingReceiveError_Data;
  using Reader = PendingReceiveError_Reader;

  static PendingReceiveErrorPtr New();

  template <typename U>
  static PendingReceiveErrorPtr From(const U& u) {
    return mojo::TypeConverter<PendingReceiveErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PendingReceiveError>::Convert(*this);
  }

  PendingReceiveError();
  ~PendingReceiveError();


  PendingReceiveErrorPtr Clone() const;
  bool Equals(const PendingReceiveError& other) const;

  int32_t error;
  uint32_t offset;
};




class SerializedDataSender_Reader;

class SerializedDataSender {
 public:
  using Data_ = internal::SerializedDataSender_Data;
  using Reader = SerializedDataSender_Reader;

  static SerializedDataSenderPtr New();

  template <typename U>
  static SerializedDataSenderPtr From(const U& u) {
    return mojo::TypeConverter<SerializedDataSenderPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerializedDataSender>::Convert(*this);
  }

  SerializedDataSender();
  ~SerializedDataSender();


  bool Equals(const SerializedDataSender& other) const;

  device::serial::DataSinkPtr sink;
  int32_t fatal_error_value;
};



class SerializedDataReceiver_Reader;

class SerializedDataReceiver {
 public:
  using Data_ = internal::SerializedDataReceiver_Data;
  using Reader = SerializedDataReceiver_Reader;

  static SerializedDataReceiverPtr New();

  template <typename U>
  static SerializedDataReceiverPtr From(const U& u) {
    return mojo::TypeConverter<SerializedDataReceiverPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SerializedDataReceiver>::Convert(*this);
  }

  SerializedDataReceiver();
  ~SerializedDataReceiver();


  bool Equals(const SerializedDataReceiver& other) const;

  device::serial::DataSourcePtr source;
  mojo::ScopedMessagePipeHandle client;
  int32_t fatal_error_value;
  uint32_t bytes_received;
  bool paused;
  PendingReceiveErrorPtr pending_error;
  mojo::Array<mojo::Array<uint8_t> > pending_data;
};


size_t GetSerializedSize_(const SerializedDataSenderPtr& input);
void Serialize_(SerializedDataSenderPtr input, mojo::internal::Buffer* buffer,
                internal::SerializedDataSender_Data** output);
bool Deserialize_(internal::SerializedDataSender_Data* input,
                  SerializedDataSenderPtr* output,
                  mojo::internal::SerializationContext* context);


class SerializedDataSender_Reader {
 public:
  SerializedDataSender_Reader(internal::SerializedDataSender_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading interfaces. (sink() omitted)
  int32_t fatal_error_value() const { return data_->fatal_error_value; }

 private:
  internal::SerializedDataSender_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct SerializedDataSender_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::SerializedDataSender_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::SerializedDataSender_Data** output) {
    internal::SerializedDataSender_Data* result =
        internal::SerializedDataSender_Data::New(buffer);
    result->sink = mojo::StructTraits<SerializedDataSender, NativeType>
        ::sink(input);
    result->fatal_error_value = mojo::StructTraits<SerializedDataSender, NativeType>
        ::fatal_error_value(input);
    *output = result;
  }

  static bool Deserialize(internal::SerializedDataSender_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<SerializedDataSender, NativeType>::Read(
        SerializedDataSender_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const PendingReceiveErrorPtr& input);
void Serialize_(PendingReceiveErrorPtr input, mojo::internal::Buffer* buffer,
                internal::PendingReceiveError_Data** output);
bool Deserialize_(internal::PendingReceiveError_Data* input,
                  PendingReceiveErrorPtr* output,
                  mojo::internal::SerializationContext* context);


class PendingReceiveError_Reader {
 public:
  PendingReceiveError_Reader(internal::PendingReceiveError_Data* data,
                         mojo::internal::SerializationContext* context);
  int32_t error() const { return data_->error; }
  uint32_t offset() const { return data_->offset; }

 private:
  internal::PendingReceiveError_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct PendingReceiveError_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::PendingReceiveError_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::PendingReceiveError_Data** output) {
    internal::PendingReceiveError_Data* result =
        internal::PendingReceiveError_Data::New(buffer);
    result->error = mojo::StructTraits<PendingReceiveError, NativeType>
        ::error(input);
    result->offset = mojo::StructTraits<PendingReceiveError, NativeType>
        ::offset(input);
    *output = result;
  }

  static bool Deserialize(internal::PendingReceiveError_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<PendingReceiveError, NativeType>::Read(
        PendingReceiveError_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const SerializedDataReceiverPtr& input);
void Serialize_(SerializedDataReceiverPtr input, mojo::internal::Buffer* buffer,
                internal::SerializedDataReceiver_Data** output);
bool Deserialize_(internal::SerializedDataReceiver_Data* input,
                  SerializedDataReceiverPtr* output,
                  mojo::internal::SerializationContext* context);


class SerializedDataReceiver_Reader {
 public:
  SerializedDataReceiver_Reader(internal::SerializedDataReceiver_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading interfaces. (source() omitted)
  // TODO(rockot): Support reading handles. (client() omitted)
  int32_t fatal_error_value() const { return data_->fatal_error_value; }
  uint32_t bytes_received() const { return data_->bytes_received; }
  bool paused() const { return data_->paused; }
  PendingReceiveError::Reader pending_error() const;
  // TODO(rockot): Support reading other object kinds. (pending_data() omitted)

 private:
  internal::SerializedDataReceiver_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct SerializedDataReceiver_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::SerializedDataReceiver_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field pending_error";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field pending_data";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::SerializedDataReceiver_Data** output) {
    internal::SerializedDataReceiver_Data* result =
        internal::SerializedDataReceiver_Data::New(buffer);
    result->source = mojo::StructTraits<SerializedDataReceiver, NativeType>
        ::source(input);
    result->client = mojo::StructTraits<SerializedDataReceiver, NativeType>
        ::client(input);
    result->fatal_error_value = mojo::StructTraits<SerializedDataReceiver, NativeType>
        ::fatal_error_value(input);
    result->bytes_received = mojo::StructTraits<SerializedDataReceiver, NativeType>
        ::bytes_received(input);
    result->paused = mojo::StructTraits<SerializedDataReceiver, NativeType>
        ::paused(input);
    result->pending_error = mojo::StructTraits<SerializedDataReceiver, NativeType>
        ::pending_error(input);
    result->pending_data = mojo::StructTraits<SerializedDataReceiver, NativeType>
        ::pending_data(input);
    *output = result;
  }

  static bool Deserialize(internal::SerializedDataReceiver_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<SerializedDataReceiver, NativeType>::Read(
        SerializedDataReceiver_Reader(input, context), output);
  }
};  
}  // namespace serial
}  // namespace device

#endif  // DEVICE_SERIAL_DATA_STREAM_SERIALIZATION_MOJOM_H_