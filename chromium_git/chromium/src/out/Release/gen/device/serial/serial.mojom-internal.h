// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_SERIAL_SERIAL_MOJOM_INTERNAL_H_
#define DEVICE_SERIAL_SERIAL_MOJOM_INTERNAL_H_

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

class DeviceInfo;
class ConnectionOptions;
class ConnectionInfo;
class HostControlSignals;
class DeviceControlSignals;


namespace internal {

class DeviceInfo_Data;
class ConnectionOptions_Data;
class ConnectionInfo_Data;
class HostControlSignals_Data;
class DeviceControlSignals_Data;



  
struct SendError_Data {
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
        return true;
    }
    return false;
  }

  int32_t value;
};
  
struct ReceiveError_Data {
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
      case 9:
        return true;
    }
    return false;
  }

  int32_t value;
};
  
struct DataBits_Data {
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
  
struct ParityBit_Data {
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
  
struct StopBits_Data {
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

#pragma pack(push, 1)


class DeviceInfo_Data {
 public:
  static DeviceInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer path;
  uint16_t vendor_id;
  uint8_t has_vendor_id : 1;
  uint8_t has_product_id : 1;
  uint8_t pad3_[1];
  uint16_t product_id;
  uint8_t pad4_[2];
  mojo::internal::StringPointer display_name;

 private:
  DeviceInfo_Data();
  ~DeviceInfo_Data() = delete;
};
static_assert(sizeof(DeviceInfo_Data) == 32,
              "Bad sizeof(DeviceInfo_Data)");
class ConnectionOptions_Data {
 public:
  static ConnectionOptions_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t bitrate;
  internal::DataBits_Data data_bits;
  internal::ParityBit_Data parity_bit;
  internal::StopBits_Data stop_bits;
  uint8_t cts_flow_control : 1;
  uint8_t has_cts_flow_control : 1;
  uint8_t padfinal_[7];

 private:
  ConnectionOptions_Data();
  ~ConnectionOptions_Data() = delete;
};
static_assert(sizeof(ConnectionOptions_Data) == 32,
              "Bad sizeof(ConnectionOptions_Data)");
class ConnectionInfo_Data {
 public:
  static ConnectionInfo_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t bitrate;
  internal::DataBits_Data data_bits;
  internal::ParityBit_Data parity_bit;
  internal::StopBits_Data stop_bits;
  uint8_t cts_flow_control : 1;
  uint8_t padfinal_[7];

 private:
  ConnectionInfo_Data();
  ~ConnectionInfo_Data() = delete;
};
static_assert(sizeof(ConnectionInfo_Data) == 32,
              "Bad sizeof(ConnectionInfo_Data)");
class HostControlSignals_Data {
 public:
  static HostControlSignals_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t dtr : 1;
  uint8_t has_dtr : 1;
  uint8_t rts : 1;
  uint8_t has_rts : 1;
  uint8_t padfinal_[7];

 private:
  HostControlSignals_Data();
  ~HostControlSignals_Data() = delete;
};
static_assert(sizeof(HostControlSignals_Data) == 16,
              "Bad sizeof(HostControlSignals_Data)");
class DeviceControlSignals_Data {
 public:
  static DeviceControlSignals_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t dcd : 1;
  uint8_t cts : 1;
  uint8_t ri : 1;
  uint8_t dsr : 1;
  uint8_t padfinal_[7];

 private:
  DeviceControlSignals_Data();
  ~DeviceControlSignals_Data() = delete;
};
static_assert(sizeof(DeviceControlSignals_Data) == 16,
              "Bad sizeof(DeviceControlSignals_Data)");

#pragma pack(pop)

}  // namespace internal
}  // namespace serial
}  // namespace device

#endif  // DEVICE_SERIAL_SERIAL_MOJOM_INTERNAL_H_