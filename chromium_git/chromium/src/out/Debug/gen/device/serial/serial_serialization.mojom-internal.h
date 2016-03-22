// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_SERIAL_SERIAL_SERIALIZATION_MOJOM_INTERNAL_H_
#define DEVICE_SERIAL_SERIAL_SERIALIZATION_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "device/serial/serial.mojom-internal.h"
#include "device/serial/data_stream_serialization.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace device {
namespace serial {

class ConnectionState;
class SerializedConnection;


namespace internal {

class ConnectionState_Data;
class SerializedConnection_Data;




#pragma pack(push, 1)


class ConnectionState_Data {
 public:
  static ConnectionState_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t connectionId;
  uint8_t paused : 1;
  uint8_t persistent : 1;
  uint8_t pad2_[3];
  mojo::internal::StringPointer name;
  uint32_t receiveTimeout;
  uint32_t sendTimeout;
  uint32_t bufferSize;
  uint8_t padfinal_[4];

 private:
  ConnectionState_Data();
  ~ConnectionState_Data() = delete;
};
static_assert(sizeof(ConnectionState_Data) == 40,
              "Bad sizeof(ConnectionState_Data)");
class SerializedConnection_Data {
 public:
  static SerializedConnection_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::ConnectionState_Data> state;
  device::serial::internal::ReceiveError_Data queuedReceiveError;
  uint8_t pad1_[4];
  mojo::internal::ArrayPointer<int8_t> queuedReceiveData;
  mojo::internal::Interface_Data connection;
  mojo::internal::StructPointer<device::serial::internal::SerializedDataSender_Data> sender;
  mojo::internal::StructPointer<device::serial::internal::SerializedDataReceiver_Data> receiver;

 private:
  SerializedConnection_Data();
  ~SerializedConnection_Data() = delete;
};
static_assert(sizeof(SerializedConnection_Data) == 56,
              "Bad sizeof(SerializedConnection_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace serial
}  // namespace device

#endif  // DEVICE_SERIAL_SERIAL_SERIALIZATION_MOJOM_INTERNAL_H_