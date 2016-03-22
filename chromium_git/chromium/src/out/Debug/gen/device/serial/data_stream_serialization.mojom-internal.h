// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_SERIAL_DATA_STREAM_SERIALIZATION_MOJOM_INTERNAL_H_
#define DEVICE_SERIAL_DATA_STREAM_SERIALIZATION_MOJOM_INTERNAL_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/lib/value_traits.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "device/serial/data_stream.mojom-internal.h"

namespace mojo {
namespace internal {
class BoundsChecker;
}
}
namespace device {
namespace serial {

class SerializedDataSender;
class PendingReceiveError;
class SerializedDataReceiver;


namespace internal {

class SerializedDataSender_Data;
class PendingReceiveError_Data;
class SerializedDataReceiver_Data;




#pragma pack(push, 1)


class SerializedDataSender_Data {
 public:
  static SerializedDataSender_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data sink;
  int32_t fatal_error_value;
  uint8_t padfinal_[4];

 private:
  SerializedDataSender_Data();
  ~SerializedDataSender_Data() = delete;
};
static_assert(sizeof(SerializedDataSender_Data) == 24,
              "Bad sizeof(SerializedDataSender_Data)");
class PendingReceiveError_Data {
 public:
  static PendingReceiveError_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t error;
  uint32_t offset;

 private:
  PendingReceiveError_Data();
  ~PendingReceiveError_Data() = delete;
};
static_assert(sizeof(PendingReceiveError_Data) == 16,
              "Bad sizeof(PendingReceiveError_Data)");
class SerializedDataReceiver_Data {
 public:
  static SerializedDataReceiver_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data source;
  mojo::MessagePipeHandle client;
  int32_t fatal_error_value;
  uint32_t bytes_received;
  uint8_t paused : 1;
  uint8_t pad4_[3];
  mojo::internal::StructPointer<internal::PendingReceiveError_Data> pending_error;
  mojo::internal::ArrayPointer<mojo::internal::Array_Data<uint8_t>*> pending_data;

 private:
  SerializedDataReceiver_Data();
  ~SerializedDataReceiver_Data() = delete;
};
static_assert(sizeof(SerializedDataReceiver_Data) == 48,
              "Bad sizeof(SerializedDataReceiver_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace serial
}  // namespace device

#endif  // DEVICE_SERIAL_DATA_STREAM_SERIALIZATION_MOJOM_INTERNAL_H_