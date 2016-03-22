// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "device/serial/serial.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/array_serialization.h"
#include "mojo/public/cpp/bindings/lib/bindings_serialization.h"
#include "mojo/public/cpp/bindings/lib/bounds_checker.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/map_serialization.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/lib/string_serialization.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "mojo/public/cpp/environment/lib/scoped_task_tracking.h"
#include "mojo/public/cpp/environment/logging.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
namespace device {
namespace serial {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kSerialService_GetDevices_Name = 0;

class SerialService_GetDevices_Params_Data {
 public:
  static SerialService_GetDevices_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  SerialService_GetDevices_Params_Data();
  ~SerialService_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(SerialService_GetDevices_Params_Data) == 8,
              "Bad sizeof(SerialService_GetDevices_Params_Data)");

// static
SerialService_GetDevices_Params_Data* SerialService_GetDevices_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(SerialService_GetDevices_Params_Data))) SerialService_GetDevices_Params_Data();
}

// static
bool SerialService_GetDevices_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SerialService_GetDevices_Params_Data* object = static_cast<const SerialService_GetDevices_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}

void SerialService_GetDevices_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void SerialService_GetDevices_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

SerialService_GetDevices_Params_Data::SerialService_GetDevices_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class SerialService_GetDevices_ResponseParams_Data {
 public:
  static SerialService_GetDevices_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::DeviceInfo_Data*> devices;

 private:
  SerialService_GetDevices_ResponseParams_Data();
  ~SerialService_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(SerialService_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(SerialService_GetDevices_ResponseParams_Data)");

// static
SerialService_GetDevices_ResponseParams_Data* SerialService_GetDevices_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(SerialService_GetDevices_ResponseParams_Data))) SerialService_GetDevices_ResponseParams_Data();
}

// static
bool SerialService_GetDevices_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SerialService_GetDevices_ResponseParams_Data* object = static_cast<const SerialService_GetDevices_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->devices, "null devices field in SerialService_GetDevices_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->devices, bounds_checker,
                                     &devices_validate_params)) {
    return false;
  }

  return true;
}

void SerialService_GetDevices_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&devices, handles);
}

void SerialService_GetDevices_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&devices, handles);
}

SerialService_GetDevices_ResponseParams_Data::SerialService_GetDevices_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kSerialService_Connect_Name = 1;

class SerialService_Connect_Params_Data {
 public:
  static SerialService_Connect_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer path;
  mojo::internal::StructPointer<internal::ConnectionOptions_Data> options;
  mojo::MessagePipeHandle connection;
  mojo::MessagePipeHandle sink;
  mojo::MessagePipeHandle source;
  mojo::internal::Interface_Data source_client;
  uint8_t padfinal_[4];

 private:
  SerialService_Connect_Params_Data();
  ~SerialService_Connect_Params_Data() = delete;
};
static_assert(sizeof(SerialService_Connect_Params_Data) == 48,
              "Bad sizeof(SerialService_Connect_Params_Data)");

// static
SerialService_Connect_Params_Data* SerialService_Connect_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(SerialService_Connect_Params_Data))) SerialService_Connect_Params_Data();
}

// static
bool SerialService_Connect_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SerialService_Connect_Params_Data* object = static_cast<const SerialService_Connect_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 48 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, "null path field in SerialService_Connect_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->path, bounds_checker,
                                     &path_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->options, bounds_checker))
    return false;

  const mojo::Handle connection_handle = object->connection;
  if (!mojo::internal::ValidateHandleNonNullable(
          connection_handle,
          "invalid connection field in SerialService_Connect_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(connection_handle, bounds_checker))
    return false;

  const mojo::Handle sink_handle = object->sink;
  if (!mojo::internal::ValidateHandleNonNullable(
          sink_handle,
          "invalid sink field in SerialService_Connect_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(sink_handle, bounds_checker))
    return false;

  const mojo::Handle source_handle = object->source;
  if (!mojo::internal::ValidateHandleNonNullable(
          source_handle,
          "invalid source field in SerialService_Connect_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(source_handle, bounds_checker))
    return false;

  const mojo::Handle source_client_handle = object->source_client.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          source_client_handle,
          "invalid source_client field in SerialService_Connect_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(source_client_handle, bounds_checker))
    return false;

  return true;
}

void SerialService_Connect_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&path, handles);
  mojo::internal::Encode(&options, handles);
  mojo::internal::EncodeHandle(&connection, handles);
  mojo::internal::EncodeHandle(&sink, handles);
  mojo::internal::EncodeHandle(&source, handles);
  mojo::internal::EncodeHandle(&source_client, handles);
}

void SerialService_Connect_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&path, handles);
  mojo::internal::Decode(&options, handles);
  mojo::internal::DecodeHandle(&connection, handles);
  mojo::internal::DecodeHandle(&sink, handles);
  mojo::internal::DecodeHandle(&source, handles);
  mojo::internal::DecodeHandle(&source_client, handles);
}

SerialService_Connect_Params_Data::SerialService_Connect_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kConnection_GetInfo_Name = 0;

class Connection_GetInfo_Params_Data {
 public:
  static Connection_GetInfo_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  Connection_GetInfo_Params_Data();
  ~Connection_GetInfo_Params_Data() = delete;
};
static_assert(sizeof(Connection_GetInfo_Params_Data) == 8,
              "Bad sizeof(Connection_GetInfo_Params_Data)");

// static
Connection_GetInfo_Params_Data* Connection_GetInfo_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Connection_GetInfo_Params_Data))) Connection_GetInfo_Params_Data();
}

// static
bool Connection_GetInfo_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connection_GetInfo_Params_Data* object = static_cast<const Connection_GetInfo_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}

void Connection_GetInfo_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Connection_GetInfo_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Connection_GetInfo_Params_Data::Connection_GetInfo_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Connection_GetInfo_ResponseParams_Data {
 public:
  static Connection_GetInfo_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::ConnectionInfo_Data> info;

 private:
  Connection_GetInfo_ResponseParams_Data();
  ~Connection_GetInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connection_GetInfo_ResponseParams_Data) == 16,
              "Bad sizeof(Connection_GetInfo_ResponseParams_Data)");

// static
Connection_GetInfo_ResponseParams_Data* Connection_GetInfo_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Connection_GetInfo_ResponseParams_Data))) Connection_GetInfo_ResponseParams_Data();
}

// static
bool Connection_GetInfo_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connection_GetInfo_ResponseParams_Data* object = static_cast<const Connection_GetInfo_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->info, bounds_checker))
    return false;

  return true;
}

void Connection_GetInfo_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&info, handles);
}

void Connection_GetInfo_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&info, handles);
}

Connection_GetInfo_ResponseParams_Data::Connection_GetInfo_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kConnection_SetOptions_Name = 1;

class Connection_SetOptions_Params_Data {
 public:
  static Connection_SetOptions_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::ConnectionOptions_Data> options;

 private:
  Connection_SetOptions_Params_Data();
  ~Connection_SetOptions_Params_Data() = delete;
};
static_assert(sizeof(Connection_SetOptions_Params_Data) == 16,
              "Bad sizeof(Connection_SetOptions_Params_Data)");

// static
Connection_SetOptions_Params_Data* Connection_SetOptions_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Connection_SetOptions_Params_Data))) Connection_SetOptions_Params_Data();
}

// static
bool Connection_SetOptions_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connection_SetOptions_Params_Data* object = static_cast<const Connection_SetOptions_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->options, "null options field in Connection_SetOptions_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, bounds_checker))
    return false;

  return true;
}

void Connection_SetOptions_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&options, handles);
}

void Connection_SetOptions_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&options, handles);
}

Connection_SetOptions_Params_Data::Connection_SetOptions_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Connection_SetOptions_ResponseParams_Data {
 public:
  static Connection_SetOptions_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Connection_SetOptions_ResponseParams_Data();
  ~Connection_SetOptions_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connection_SetOptions_ResponseParams_Data) == 16,
              "Bad sizeof(Connection_SetOptions_ResponseParams_Data)");

// static
Connection_SetOptions_ResponseParams_Data* Connection_SetOptions_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Connection_SetOptions_ResponseParams_Data))) Connection_SetOptions_ResponseParams_Data();
}

// static
bool Connection_SetOptions_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connection_SetOptions_ResponseParams_Data* object = static_cast<const Connection_SetOptions_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}

void Connection_SetOptions_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Connection_SetOptions_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Connection_SetOptions_ResponseParams_Data::Connection_SetOptions_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kConnection_SetControlSignals_Name = 2;

class Connection_SetControlSignals_Params_Data {
 public:
  static Connection_SetControlSignals_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::HostControlSignals_Data> signals;

 private:
  Connection_SetControlSignals_Params_Data();
  ~Connection_SetControlSignals_Params_Data() = delete;
};
static_assert(sizeof(Connection_SetControlSignals_Params_Data) == 16,
              "Bad sizeof(Connection_SetControlSignals_Params_Data)");

// static
Connection_SetControlSignals_Params_Data* Connection_SetControlSignals_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Connection_SetControlSignals_Params_Data))) Connection_SetControlSignals_Params_Data();
}

// static
bool Connection_SetControlSignals_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connection_SetControlSignals_Params_Data* object = static_cast<const Connection_SetControlSignals_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->signals, "null signals field in Connection_SetControlSignals_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->signals, bounds_checker))
    return false;

  return true;
}

void Connection_SetControlSignals_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&signals, handles);
}

void Connection_SetControlSignals_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&signals, handles);
}

Connection_SetControlSignals_Params_Data::Connection_SetControlSignals_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Connection_SetControlSignals_ResponseParams_Data {
 public:
  static Connection_SetControlSignals_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Connection_SetControlSignals_ResponseParams_Data();
  ~Connection_SetControlSignals_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connection_SetControlSignals_ResponseParams_Data) == 16,
              "Bad sizeof(Connection_SetControlSignals_ResponseParams_Data)");

// static
Connection_SetControlSignals_ResponseParams_Data* Connection_SetControlSignals_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Connection_SetControlSignals_ResponseParams_Data))) Connection_SetControlSignals_ResponseParams_Data();
}

// static
bool Connection_SetControlSignals_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connection_SetControlSignals_ResponseParams_Data* object = static_cast<const Connection_SetControlSignals_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}

void Connection_SetControlSignals_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Connection_SetControlSignals_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Connection_SetControlSignals_ResponseParams_Data::Connection_SetControlSignals_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kConnection_GetControlSignals_Name = 3;

class Connection_GetControlSignals_Params_Data {
 public:
  static Connection_GetControlSignals_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  Connection_GetControlSignals_Params_Data();
  ~Connection_GetControlSignals_Params_Data() = delete;
};
static_assert(sizeof(Connection_GetControlSignals_Params_Data) == 8,
              "Bad sizeof(Connection_GetControlSignals_Params_Data)");

// static
Connection_GetControlSignals_Params_Data* Connection_GetControlSignals_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Connection_GetControlSignals_Params_Data))) Connection_GetControlSignals_Params_Data();
}

// static
bool Connection_GetControlSignals_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connection_GetControlSignals_Params_Data* object = static_cast<const Connection_GetControlSignals_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}

void Connection_GetControlSignals_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Connection_GetControlSignals_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Connection_GetControlSignals_Params_Data::Connection_GetControlSignals_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Connection_GetControlSignals_ResponseParams_Data {
 public:
  static Connection_GetControlSignals_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DeviceControlSignals_Data> signals;

 private:
  Connection_GetControlSignals_ResponseParams_Data();
  ~Connection_GetControlSignals_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connection_GetControlSignals_ResponseParams_Data) == 16,
              "Bad sizeof(Connection_GetControlSignals_ResponseParams_Data)");

// static
Connection_GetControlSignals_ResponseParams_Data* Connection_GetControlSignals_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Connection_GetControlSignals_ResponseParams_Data))) Connection_GetControlSignals_ResponseParams_Data();
}

// static
bool Connection_GetControlSignals_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connection_GetControlSignals_ResponseParams_Data* object = static_cast<const Connection_GetControlSignals_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->signals, bounds_checker))
    return false;

  return true;
}

void Connection_GetControlSignals_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&signals, handles);
}

void Connection_GetControlSignals_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&signals, handles);
}

Connection_GetControlSignals_ResponseParams_Data::Connection_GetControlSignals_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kConnection_Flush_Name = 4;

class Connection_Flush_Params_Data {
 public:
  static Connection_Flush_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  Connection_Flush_Params_Data();
  ~Connection_Flush_Params_Data() = delete;
};
static_assert(sizeof(Connection_Flush_Params_Data) == 8,
              "Bad sizeof(Connection_Flush_Params_Data)");

// static
Connection_Flush_Params_Data* Connection_Flush_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Connection_Flush_Params_Data))) Connection_Flush_Params_Data();
}

// static
bool Connection_Flush_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connection_Flush_Params_Data* object = static_cast<const Connection_Flush_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 8 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}

void Connection_Flush_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Connection_Flush_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Connection_Flush_Params_Data::Connection_Flush_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Connection_Flush_ResponseParams_Data {
 public:
  static Connection_Flush_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Connection_Flush_ResponseParams_Data();
  ~Connection_Flush_ResponseParams_Data() = delete;
};
static_assert(sizeof(Connection_Flush_ResponseParams_Data) == 16,
              "Bad sizeof(Connection_Flush_ResponseParams_Data)");

// static
Connection_Flush_ResponseParams_Data* Connection_Flush_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Connection_Flush_ResponseParams_Data))) Connection_Flush_ResponseParams_Data();
}

// static
bool Connection_Flush_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Connection_Flush_ResponseParams_Data* object = static_cast<const Connection_Flush_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}

void Connection_Flush_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Connection_Flush_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Connection_Flush_ResponseParams_Data::Connection_Flush_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
DeviceInfo_Data* DeviceInfo_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DeviceInfo_Data))) DeviceInfo_Data();
}

// static
bool DeviceInfo_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DeviceInfo_Data* object = static_cast<const DeviceInfo_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->path, "null path field in DeviceInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->path, bounds_checker,
                                     &path_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams display_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->display_name, bounds_checker,
                                     &display_name_validate_params)) {
    return false;
  }

  return true;
}

void DeviceInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&path, handles);
  mojo::internal::Encode(&display_name, handles);
}

void DeviceInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&path, handles);
  mojo::internal::Decode(&display_name, handles);
}

DeviceInfo_Data::DeviceInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
ConnectionOptions_Data* ConnectionOptions_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ConnectionOptions_Data))) ConnectionOptions_Data();
}

// static
bool ConnectionOptions_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ConnectionOptions_Data* object = static_cast<const ConnectionOptions_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidateEnum(object->data_bits))
    return false;

  if (!mojo::internal::ValidateEnum(object->parity_bit))
    return false;

  if (!mojo::internal::ValidateEnum(object->stop_bits))
    return false;

  return true;
}

void ConnectionOptions_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ConnectionOptions_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ConnectionOptions_Data::ConnectionOptions_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
ConnectionInfo_Data* ConnectionInfo_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ConnectionInfo_Data))) ConnectionInfo_Data();
}

// static
bool ConnectionInfo_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ConnectionInfo_Data* object = static_cast<const ConnectionInfo_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 32 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  if (!mojo::internal::ValidateEnum(object->data_bits))
    return false;

  if (!mojo::internal::ValidateEnum(object->parity_bit))
    return false;

  if (!mojo::internal::ValidateEnum(object->stop_bits))
    return false;

  return true;
}

void ConnectionInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ConnectionInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ConnectionInfo_Data::ConnectionInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
HostControlSignals_Data* HostControlSignals_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HostControlSignals_Data))) HostControlSignals_Data();
}

// static
bool HostControlSignals_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HostControlSignals_Data* object = static_cast<const HostControlSignals_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}

void HostControlSignals_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void HostControlSignals_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

HostControlSignals_Data::HostControlSignals_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
DeviceControlSignals_Data* DeviceControlSignals_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DeviceControlSignals_Data))) DeviceControlSignals_Data();
}

// static
bool DeviceControlSignals_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DeviceControlSignals_Data* object = static_cast<const DeviceControlSignals_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 16 }};

  if (object->header_.version <=
          kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].version) {
    // Scan in reverse order to optimize for more recent versions.
    for (int i = MOJO_ARRAYSIZE(kVersionSizes) - 1; i >= 0; --i) {
      if (object->header_.version >= kVersionSizes[i].version) {
        if (object->header_.num_bytes == kVersionSizes[i].num_bytes)
          break;

        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
        return false;
      }
    }
  } else if (object->header_.num_bytes <
                 kVersionSizes[MOJO_ARRAYSIZE(kVersionSizes) - 1].num_bytes) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_STRUCT_HEADER);
    return false;
  }

  return true;
}

void DeviceControlSignals_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void DeviceControlSignals_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

DeviceControlSignals_Data::DeviceControlSignals_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
DeviceInfoPtr DeviceInfo::New() {
  DeviceInfoPtr rv;
  mojo::internal::StructHelper<DeviceInfo>::Initialize(&rv);
  return rv;
}

DeviceInfo::DeviceInfo()
    : path(),
      vendor_id(),
      has_vendor_id(false),
      product_id(),
      has_product_id(false),
      display_name() {
}

DeviceInfo::~DeviceInfo() {
}


DeviceInfoPtr DeviceInfo::Clone() const {
  DeviceInfoPtr rv(New());
  rv->path = path;
  rv->vendor_id = vendor_id;
  rv->has_vendor_id = has_vendor_id;
  rv->product_id = product_id;
  rv->has_product_id = has_product_id;
  rv->display_name = display_name;
  return rv;
}


bool DeviceInfo::Equals(const DeviceInfo& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->path, other.path))
    return false;
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->vendor_id, other.vendor_id))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_vendor_id, other.has_vendor_id))
    return false;
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->product_id, other.product_id))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_product_id, other.has_product_id))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->display_name, other.display_name))
    return false;
  return true;
}// static
ConnectionOptionsPtr ConnectionOptions::New() {
  ConnectionOptionsPtr rv;
  mojo::internal::StructHelper<ConnectionOptions>::Initialize(&rv);
  return rv;
}

ConnectionOptions::ConnectionOptions()
    : bitrate(0U),
      data_bits(DataBits::NONE),
      parity_bit(ParityBit::NONE),
      stop_bits(StopBits::NONE),
      cts_flow_control(),
      has_cts_flow_control(false) {
}

ConnectionOptions::~ConnectionOptions() {
}


ConnectionOptionsPtr ConnectionOptions::Clone() const {
  ConnectionOptionsPtr rv(New());
  rv->bitrate = bitrate;
  rv->data_bits = data_bits;
  rv->parity_bit = parity_bit;
  rv->stop_bits = stop_bits;
  rv->cts_flow_control = cts_flow_control;
  rv->has_cts_flow_control = has_cts_flow_control;
  return rv;
}


bool ConnectionOptions::Equals(const ConnectionOptions& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->bitrate, other.bitrate))
    return false;
  if (!mojo::internal::ValueTraits<DataBits>::Equals(this->data_bits, other.data_bits))
    return false;
  if (!mojo::internal::ValueTraits<ParityBit>::Equals(this->parity_bit, other.parity_bit))
    return false;
  if (!mojo::internal::ValueTraits<StopBits>::Equals(this->stop_bits, other.stop_bits))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->cts_flow_control, other.cts_flow_control))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_cts_flow_control, other.has_cts_flow_control))
    return false;
  return true;
}// static
ConnectionInfoPtr ConnectionInfo::New() {
  ConnectionInfoPtr rv;
  mojo::internal::StructHelper<ConnectionInfo>::Initialize(&rv);
  return rv;
}

ConnectionInfo::ConnectionInfo()
    : bitrate(0U),
      data_bits(DataBits::NONE),
      parity_bit(ParityBit::NONE),
      stop_bits(StopBits::NONE),
      cts_flow_control() {
}

ConnectionInfo::~ConnectionInfo() {
}


ConnectionInfoPtr ConnectionInfo::Clone() const {
  ConnectionInfoPtr rv(New());
  rv->bitrate = bitrate;
  rv->data_bits = data_bits;
  rv->parity_bit = parity_bit;
  rv->stop_bits = stop_bits;
  rv->cts_flow_control = cts_flow_control;
  return rv;
}


bool ConnectionInfo::Equals(const ConnectionInfo& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->bitrate, other.bitrate))
    return false;
  if (!mojo::internal::ValueTraits<DataBits>::Equals(this->data_bits, other.data_bits))
    return false;
  if (!mojo::internal::ValueTraits<ParityBit>::Equals(this->parity_bit, other.parity_bit))
    return false;
  if (!mojo::internal::ValueTraits<StopBits>::Equals(this->stop_bits, other.stop_bits))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->cts_flow_control, other.cts_flow_control))
    return false;
  return true;
}// static
HostControlSignalsPtr HostControlSignals::New() {
  HostControlSignalsPtr rv;
  mojo::internal::StructHelper<HostControlSignals>::Initialize(&rv);
  return rv;
}

HostControlSignals::HostControlSignals()
    : dtr(),
      has_dtr(false),
      rts(),
      has_rts(false) {
}

HostControlSignals::~HostControlSignals() {
}


HostControlSignalsPtr HostControlSignals::Clone() const {
  HostControlSignalsPtr rv(New());
  rv->dtr = dtr;
  rv->has_dtr = has_dtr;
  rv->rts = rts;
  rv->has_rts = has_rts;
  return rv;
}


bool HostControlSignals::Equals(const HostControlSignals& other) const {
  if (!mojo::internal::ValueTraits<bool>::Equals(this->dtr, other.dtr))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_dtr, other.has_dtr))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->rts, other.rts))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_rts, other.has_rts))
    return false;
  return true;
}// static
DeviceControlSignalsPtr DeviceControlSignals::New() {
  DeviceControlSignalsPtr rv;
  mojo::internal::StructHelper<DeviceControlSignals>::Initialize(&rv);
  return rv;
}

DeviceControlSignals::DeviceControlSignals()
    : dcd(),
      cts(),
      ri(),
      dsr() {
}

DeviceControlSignals::~DeviceControlSignals() {
}


DeviceControlSignalsPtr DeviceControlSignals::Clone() const {
  DeviceControlSignalsPtr rv(New());
  rv->dcd = dcd;
  rv->cts = cts;
  rv->ri = ri;
  rv->dsr = dsr;
  return rv;
}


bool DeviceControlSignals::Equals(const DeviceControlSignals& other) const {
  if (!mojo::internal::ValueTraits<bool>::Equals(this->dcd, other.dcd))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->cts, other.cts))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->ri, other.ri))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->dsr, other.dsr))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char SerialService::Name_[] = "device::serial::SerialService";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t SerialService::Version_;
class SerialService_GetDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SerialService_GetDevices_ForwardToCallback(
      const SerialService::GetDevicesCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SerialService::GetDevicesCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(SerialService_GetDevices_ForwardToCallback);
};
bool SerialService_GetDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::SerialService_GetDevices_ResponseParams_Data* params =
      reinterpret_cast<internal::SerialService_GetDevices_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::Array<DeviceInfoPtr> p_devices{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->devices.ptr, &p_devices, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_devices));
  return true;
}

SerialServiceProxy::SerialServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void SerialServiceProxy::GetDevices(
    const GetDevicesCallback& callback) {
  size_t size = sizeof(internal::SerialService_GetDevices_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kSerialService_GetDevices_Name, size);

  internal::SerialService_GetDevices_Params_Data* params =
      internal::SerialService_GetDevices_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new SerialService_GetDevices_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void SerialServiceProxy::Connect(
    const mojo::String& in_path, ConnectionOptionsPtr in_options, mojo::InterfaceRequest<Connection> in_connection, mojo::InterfaceRequest<device::serial::DataSink> in_sink, mojo::InterfaceRequest<device::serial::DataSource> in_source, device::serial::DataSourceClientPtr in_source_client) {
  size_t size = sizeof(internal::SerialService_Connect_Params_Data);
  size += GetSerializedSize_(in_path);
  size += GetSerializedSize_(in_options);
  mojo::internal::MessageBuilder builder(internal::kSerialService_Connect_Name, size);

  internal::SerialService_Connect_Params_Data* params =
      internal::SerialService_Connect_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_path), builder.buffer(), &params->path.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->path.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null path in SerialService.Connect request");
  Serialize_(std::move(in_options), builder.buffer(), &params->options.ptr);
  params->connection = in_connection.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->connection.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid connection in SerialService.Connect request");
  params->sink = in_sink.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->sink.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid sink in SerialService.Connect request");
  params->source = in_source.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->source.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid source in SerialService.Connect request");
  mojo::internal::InterfacePointerToData(std::move(in_source_client), &params->source_client);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->source_client.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid source_client in SerialService.Connect request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
class SerialService_GetDevices_ProxyToResponder
    : public SerialService::GetDevicesCallback::Runnable {
 public:
  ~SerialService_GetDevices_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "SerialService::GetDevices(callback) "
        "was never run.";
  }

  SerialService_GetDevices_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::Array<DeviceInfoPtr> in_devices) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(SerialService_GetDevices_ProxyToResponder);
};
void SerialService_GetDevices_ProxyToResponder::Run(
    mojo::Array<DeviceInfoPtr> in_devices) const {
  size_t size = sizeof(internal::SerialService_GetDevices_ResponseParams_Data);
  size += GetSerializedSize_(in_devices);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kSerialService_GetDevices_Name, size, request_id_);
  internal::SerialService_GetDevices_ResponseParams_Data* params =
      internal::SerialService_GetDevices_ResponseParams_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_devices), builder.buffer(),
      &params->devices.ptr, &devices_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->devices.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devices in SerialService.GetDevices response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

SerialServiceStub::SerialServiceStub()
    : sink_(nullptr),
      control_message_handler_(SerialService::Version_) {
}

SerialServiceStub::~SerialServiceStub() {}

bool SerialServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kSerialService_GetDevices_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.SerialService.GetDevices", __FILE__, __LINE__);
      break;
    }
    case internal::kSerialService_Connect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.SerialService.Connect", __FILE__, __LINE__);
      internal::SerialService_Connect_Params_Data* params =
          reinterpret_cast<internal::SerialService_Connect_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_path{};
      ConnectionOptionsPtr p_options{};
      mojo::InterfaceRequest<Connection> p_connection{};
      mojo::InterfaceRequest<device::serial::DataSink> p_sink{};
      mojo::InterfaceRequest<device::serial::DataSource> p_source{};
      device::serial::DataSourceClientPtr p_source_client{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->path.ptr, &p_path, &serialization_context_))
          success = false;
        if (!Deserialize_(params->options.ptr, &p_options, &serialization_context_))
          success = false;
        p_connection.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->connection)));
        p_sink.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->sink)));
        p_source.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->source)));
        mojo::internal::InterfaceDataToPointer(&params->source_client, &p_source_client);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "SerialService::Connect");
      sink_->Connect(p_path, std::move(p_options), std::move(p_connection), std::move(p_sink), std::move(p_source), std::move(p_source_client));
      return true;
    }
  }
  return false;
}

bool SerialServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kSerialService_GetDevices_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::SerialService::GetDevices", __FILE__, __LINE__);
      internal::SerialService_GetDevices_Params_Data* params =
          reinterpret_cast<internal::SerialService_GetDevices_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      SerialService::GetDevicesCallback::Runnable* runnable =
          new SerialService_GetDevices_ProxyToResponder(
              message->request_id(), responder);
      SerialService::GetDevicesCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "SerialService::GetDevices");
      sink_->GetDevices(callback);
      return true;
    }
    case internal::kSerialService_Connect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::SerialService::Connect", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

SerialServiceRequestValidator::SerialServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool SerialServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kSerialService_GetDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialService_GetDevices_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kSerialService_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialService_Connect_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

SerialServiceResponseValidator::SerialServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool SerialServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kSerialService_GetDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SerialService_GetDevices_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char Connection::Name_[] = "device::serial::Connection";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t Connection::Version_;
class Connection_GetInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connection_GetInfo_ForwardToCallback(
      const Connection::GetInfoCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connection::GetInfoCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Connection_GetInfo_ForwardToCallback);
};
bool Connection_GetInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Connection_GetInfo_ResponseParams_Data* params =
      reinterpret_cast<internal::Connection_GetInfo_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  ConnectionInfoPtr p_info{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->info.ptr, &p_info, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_info));
  return true;
}
class Connection_SetOptions_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connection_SetOptions_ForwardToCallback(
      const Connection::SetOptionsCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connection::SetOptionsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Connection_SetOptions_ForwardToCallback);
};
bool Connection_SetOptions_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Connection_SetOptions_ResponseParams_Data* params =
      reinterpret_cast<internal::Connection_SetOptions_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  bool p_success{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_success = params->success;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_success);
  return true;
}
class Connection_SetControlSignals_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connection_SetControlSignals_ForwardToCallback(
      const Connection::SetControlSignalsCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connection::SetControlSignalsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Connection_SetControlSignals_ForwardToCallback);
};
bool Connection_SetControlSignals_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Connection_SetControlSignals_ResponseParams_Data* params =
      reinterpret_cast<internal::Connection_SetControlSignals_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  bool p_success{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_success = params->success;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_success);
  return true;
}
class Connection_GetControlSignals_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connection_GetControlSignals_ForwardToCallback(
      const Connection::GetControlSignalsCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connection::GetControlSignalsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Connection_GetControlSignals_ForwardToCallback);
};
bool Connection_GetControlSignals_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Connection_GetControlSignals_ResponseParams_Data* params =
      reinterpret_cast<internal::Connection_GetControlSignals_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  DeviceControlSignalsPtr p_signals{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->signals.ptr, &p_signals, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_signals));
  return true;
}
class Connection_Flush_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connection_Flush_ForwardToCallback(
      const Connection::FlushCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connection::FlushCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Connection_Flush_ForwardToCallback);
};
bool Connection_Flush_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Connection_Flush_ResponseParams_Data* params =
      reinterpret_cast<internal::Connection_Flush_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  bool p_success{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_success = params->success;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_success);
  return true;
}

ConnectionProxy::ConnectionProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ConnectionProxy::GetInfo(
    const GetInfoCallback& callback) {
  size_t size = sizeof(internal::Connection_GetInfo_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kConnection_GetInfo_Name, size);

  internal::Connection_GetInfo_Params_Data* params =
      internal::Connection_GetInfo_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Connection_GetInfo_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void ConnectionProxy::SetOptions(
    ConnectionOptionsPtr in_options, const SetOptionsCallback& callback) {
  size_t size = sizeof(internal::Connection_SetOptions_Params_Data);
  size += GetSerializedSize_(in_options);
  mojo::internal::RequestMessageBuilder builder(internal::kConnection_SetOptions_Name, size);

  internal::Connection_SetOptions_Params_Data* params =
      internal::Connection_SetOptions_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_options), builder.buffer(), &params->options.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->options.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in Connection.SetOptions request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Connection_SetOptions_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void ConnectionProxy::SetControlSignals(
    HostControlSignalsPtr in_signals, const SetControlSignalsCallback& callback) {
  size_t size = sizeof(internal::Connection_SetControlSignals_Params_Data);
  size += GetSerializedSize_(in_signals);
  mojo::internal::RequestMessageBuilder builder(internal::kConnection_SetControlSignals_Name, size);

  internal::Connection_SetControlSignals_Params_Data* params =
      internal::Connection_SetControlSignals_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_signals), builder.buffer(), &params->signals.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->signals.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null signals in Connection.SetControlSignals request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Connection_SetControlSignals_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void ConnectionProxy::GetControlSignals(
    const GetControlSignalsCallback& callback) {
  size_t size = sizeof(internal::Connection_GetControlSignals_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kConnection_GetControlSignals_Name, size);

  internal::Connection_GetControlSignals_Params_Data* params =
      internal::Connection_GetControlSignals_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Connection_GetControlSignals_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void ConnectionProxy::Flush(
    const FlushCallback& callback) {
  size_t size = sizeof(internal::Connection_Flush_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kConnection_Flush_Name, size);

  internal::Connection_Flush_Params_Data* params =
      internal::Connection_Flush_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Connection_Flush_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class Connection_GetInfo_ProxyToResponder
    : public Connection::GetInfoCallback::Runnable {
 public:
  ~Connection_GetInfo_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Connection::GetInfo(callback) "
        "was never run.";
  }

  Connection_GetInfo_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(ConnectionInfoPtr in_info) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Connection_GetInfo_ProxyToResponder);
};
void Connection_GetInfo_ProxyToResponder::Run(
    ConnectionInfoPtr in_info) const {
  size_t size = sizeof(internal::Connection_GetInfo_ResponseParams_Data);
  size += GetSerializedSize_(in_info);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kConnection_GetInfo_Name, size, request_id_);
  internal::Connection_GetInfo_ResponseParams_Data* params =
      internal::Connection_GetInfo_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_info), builder.buffer(), &params->info.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Connection_SetOptions_ProxyToResponder
    : public Connection::SetOptionsCallback::Runnable {
 public:
  ~Connection_SetOptions_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Connection::SetOptions(std::move(p_options), callback) "
        "was never run.";
  }

  Connection_SetOptions_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Connection_SetOptions_ProxyToResponder);
};
void Connection_SetOptions_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::Connection_SetOptions_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kConnection_SetOptions_Name, size, request_id_);
  internal::Connection_SetOptions_ResponseParams_Data* params =
      internal::Connection_SetOptions_ResponseParams_Data::New(builder.buffer());
  params->success = in_success;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Connection_SetControlSignals_ProxyToResponder
    : public Connection::SetControlSignalsCallback::Runnable {
 public:
  ~Connection_SetControlSignals_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Connection::SetControlSignals(std::move(p_signals), callback) "
        "was never run.";
  }

  Connection_SetControlSignals_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Connection_SetControlSignals_ProxyToResponder);
};
void Connection_SetControlSignals_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::Connection_SetControlSignals_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kConnection_SetControlSignals_Name, size, request_id_);
  internal::Connection_SetControlSignals_ResponseParams_Data* params =
      internal::Connection_SetControlSignals_ResponseParams_Data::New(builder.buffer());
  params->success = in_success;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Connection_GetControlSignals_ProxyToResponder
    : public Connection::GetControlSignalsCallback::Runnable {
 public:
  ~Connection_GetControlSignals_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Connection::GetControlSignals(callback) "
        "was never run.";
  }

  Connection_GetControlSignals_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(DeviceControlSignalsPtr in_signals) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Connection_GetControlSignals_ProxyToResponder);
};
void Connection_GetControlSignals_ProxyToResponder::Run(
    DeviceControlSignalsPtr in_signals) const {
  size_t size = sizeof(internal::Connection_GetControlSignals_ResponseParams_Data);
  size += GetSerializedSize_(in_signals);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kConnection_GetControlSignals_Name, size, request_id_);
  internal::Connection_GetControlSignals_ResponseParams_Data* params =
      internal::Connection_GetControlSignals_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_signals), builder.buffer(), &params->signals.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Connection_Flush_ProxyToResponder
    : public Connection::FlushCallback::Runnable {
 public:
  ~Connection_Flush_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Connection::Flush(callback) "
        "was never run.";
  }

  Connection_Flush_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Connection_Flush_ProxyToResponder);
};
void Connection_Flush_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::Connection_Flush_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kConnection_Flush_Name, size, request_id_);
  internal::Connection_Flush_ResponseParams_Data* params =
      internal::Connection_Flush_ResponseParams_Data::New(builder.buffer());
  params->success = in_success;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

ConnectionStub::ConnectionStub()
    : sink_(nullptr),
      control_message_handler_(Connection::Version_) {
}

ConnectionStub::~ConnectionStub() {}

bool ConnectionStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kConnection_GetInfo_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.Connection.GetInfo", __FILE__, __LINE__);
      break;
    }
    case internal::kConnection_SetOptions_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.Connection.SetOptions", __FILE__, __LINE__);
      break;
    }
    case internal::kConnection_SetControlSignals_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.Connection.SetControlSignals", __FILE__, __LINE__);
      break;
    }
    case internal::kConnection_GetControlSignals_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.Connection.GetControlSignals", __FILE__, __LINE__);
      break;
    }
    case internal::kConnection_Flush_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.Connection.Flush", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool ConnectionStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kConnection_GetInfo_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::Connection::GetInfo", __FILE__, __LINE__);
      internal::Connection_GetInfo_Params_Data* params =
          reinterpret_cast<internal::Connection_GetInfo_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      Connection::GetInfoCallback::Runnable* runnable =
          new Connection_GetInfo_ProxyToResponder(
              message->request_id(), responder);
      Connection::GetInfoCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Connection::GetInfo");
      sink_->GetInfo(callback);
      return true;
    }
    case internal::kConnection_SetOptions_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::Connection::SetOptions", __FILE__, __LINE__);
      internal::Connection_SetOptions_Params_Data* params =
          reinterpret_cast<internal::Connection_SetOptions_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      ConnectionOptionsPtr p_options{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->options.ptr, &p_options, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      Connection::SetOptionsCallback::Runnable* runnable =
          new Connection_SetOptions_ProxyToResponder(
              message->request_id(), responder);
      Connection::SetOptionsCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Connection::SetOptions");
      sink_->SetOptions(std::move(p_options), callback);
      return true;
    }
    case internal::kConnection_SetControlSignals_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::Connection::SetControlSignals", __FILE__, __LINE__);
      internal::Connection_SetControlSignals_Params_Data* params =
          reinterpret_cast<internal::Connection_SetControlSignals_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      HostControlSignalsPtr p_signals{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->signals.ptr, &p_signals, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      Connection::SetControlSignalsCallback::Runnable* runnable =
          new Connection_SetControlSignals_ProxyToResponder(
              message->request_id(), responder);
      Connection::SetControlSignalsCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Connection::SetControlSignals");
      sink_->SetControlSignals(std::move(p_signals), callback);
      return true;
    }
    case internal::kConnection_GetControlSignals_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::Connection::GetControlSignals", __FILE__, __LINE__);
      internal::Connection_GetControlSignals_Params_Data* params =
          reinterpret_cast<internal::Connection_GetControlSignals_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      Connection::GetControlSignalsCallback::Runnable* runnable =
          new Connection_GetControlSignals_ProxyToResponder(
              message->request_id(), responder);
      Connection::GetControlSignalsCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Connection::GetControlSignals");
      sink_->GetControlSignals(callback);
      return true;
    }
    case internal::kConnection_Flush_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::Connection::Flush", __FILE__, __LINE__);
      internal::Connection_Flush_Params_Data* params =
          reinterpret_cast<internal::Connection_Flush_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      Connection::FlushCallback::Runnable* runnable =
          new Connection_Flush_ProxyToResponder(
              message->request_id(), responder);
      Connection::FlushCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Connection::Flush");
      sink_->Flush(callback);
      return true;
    }
  }
  return false;
}

ConnectionRequestValidator::ConnectionRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ConnectionRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kConnection_GetInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connection_GetInfo_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kConnection_SetOptions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connection_SetOptions_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kConnection_SetControlSignals_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connection_SetControlSignals_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kConnection_GetControlSignals_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connection_GetControlSignals_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kConnection_Flush_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connection_Flush_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

ConnectionResponseValidator::ConnectionResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ConnectionResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kConnection_GetInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connection_GetInfo_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kConnection_SetOptions_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connection_SetOptions_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kConnection_SetControlSignals_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connection_SetControlSignals_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kConnection_GetControlSignals_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connection_GetControlSignals_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kConnection_Flush_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connection_Flush_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
size_t GetSerializedSize_(const DeviceInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::DeviceInfo_Data);
  size += GetSerializedSize_(input->path);
  size += GetSerializedSize_(input->display_name);
  return size;
}

void Serialize_(DeviceInfoPtr input, mojo::internal::Buffer* buf,
                internal::DeviceInfo_Data** output) {
  if (input) {
    internal::DeviceInfo_Data* result =
        internal::DeviceInfo_Data::New(buf);
    Serialize_(std::move(input->path), buf, &result->path.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->path.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null path in DeviceInfo struct");
    result->vendor_id = input->vendor_id;
    result->has_vendor_id = input->has_vendor_id;
    result->product_id = input->product_id;
    result->has_product_id = input->has_product_id;
    Serialize_(std::move(input->display_name), buf, &result->display_name.ptr);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::DeviceInfo_Data* input,
                  DeviceInfoPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    DeviceInfoPtr result(DeviceInfo::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->path.ptr, &result->path, context))
        success = false;
      result->vendor_id = input->vendor_id;
      result->has_vendor_id = input->has_vendor_id;
      result->product_id = input->product_id;
      result->has_product_id = input->has_product_id;
      if (!Deserialize_(input->display_name.ptr, &result->display_name, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

DeviceInfo_Reader::DeviceInfo_Reader(
    internal::DeviceInfo_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const ConnectionOptionsPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::ConnectionOptions_Data);
  return size;
}

void Serialize_(ConnectionOptionsPtr input, mojo::internal::Buffer* buf,
                internal::ConnectionOptions_Data** output) {
  if (input) {
    internal::ConnectionOptions_Data* result =
        internal::ConnectionOptions_Data::New(buf);
    result->bitrate = input->bitrate;
    result->data_bits.value = static_cast<int32_t>(input->data_bits);
    result->parity_bit.value = static_cast<int32_t>(input->parity_bit);
    result->stop_bits.value = static_cast<int32_t>(input->stop_bits);
    result->cts_flow_control = input->cts_flow_control;
    result->has_cts_flow_control = input->has_cts_flow_control;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::ConnectionOptions_Data* input,
                  ConnectionOptionsPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    ConnectionOptionsPtr result(ConnectionOptions::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->bitrate = input->bitrate;
      result->data_bits = static_cast<DataBits>(input->data_bits.value);
      result->parity_bit = static_cast<ParityBit>(input->parity_bit.value);
      result->stop_bits = static_cast<StopBits>(input->stop_bits.value);
      result->cts_flow_control = input->cts_flow_control;
      result->has_cts_flow_control = input->has_cts_flow_control;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

ConnectionOptions_Reader::ConnectionOptions_Reader(
    internal::ConnectionOptions_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const ConnectionInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::ConnectionInfo_Data);
  return size;
}

void Serialize_(ConnectionInfoPtr input, mojo::internal::Buffer* buf,
                internal::ConnectionInfo_Data** output) {
  if (input) {
    internal::ConnectionInfo_Data* result =
        internal::ConnectionInfo_Data::New(buf);
    result->bitrate = input->bitrate;
    result->data_bits.value = static_cast<int32_t>(input->data_bits);
    result->parity_bit.value = static_cast<int32_t>(input->parity_bit);
    result->stop_bits.value = static_cast<int32_t>(input->stop_bits);
    result->cts_flow_control = input->cts_flow_control;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::ConnectionInfo_Data* input,
                  ConnectionInfoPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    ConnectionInfoPtr result(ConnectionInfo::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->bitrate = input->bitrate;
      result->data_bits = static_cast<DataBits>(input->data_bits.value);
      result->parity_bit = static_cast<ParityBit>(input->parity_bit.value);
      result->stop_bits = static_cast<StopBits>(input->stop_bits.value);
      result->cts_flow_control = input->cts_flow_control;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

ConnectionInfo_Reader::ConnectionInfo_Reader(
    internal::ConnectionInfo_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const HostControlSignalsPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::HostControlSignals_Data);
  return size;
}

void Serialize_(HostControlSignalsPtr input, mojo::internal::Buffer* buf,
                internal::HostControlSignals_Data** output) {
  if (input) {
    internal::HostControlSignals_Data* result =
        internal::HostControlSignals_Data::New(buf);
    result->dtr = input->dtr;
    result->has_dtr = input->has_dtr;
    result->rts = input->rts;
    result->has_rts = input->has_rts;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::HostControlSignals_Data* input,
                  HostControlSignalsPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    HostControlSignalsPtr result(HostControlSignals::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->dtr = input->dtr;
      result->has_dtr = input->has_dtr;
      result->rts = input->rts;
      result->has_rts = input->has_rts;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

HostControlSignals_Reader::HostControlSignals_Reader(
    internal::HostControlSignals_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const DeviceControlSignalsPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::DeviceControlSignals_Data);
  return size;
}

void Serialize_(DeviceControlSignalsPtr input, mojo::internal::Buffer* buf,
                internal::DeviceControlSignals_Data** output) {
  if (input) {
    internal::DeviceControlSignals_Data* result =
        internal::DeviceControlSignals_Data::New(buf);
    result->dcd = input->dcd;
    result->cts = input->cts;
    result->ri = input->ri;
    result->dsr = input->dsr;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::DeviceControlSignals_Data* input,
                  DeviceControlSignalsPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    DeviceControlSignalsPtr result(DeviceControlSignals::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->dcd = input->dcd;
      result->cts = input->cts;
      result->ri = input->ri;
      result->dsr = input->dsr;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

DeviceControlSignals_Reader::DeviceControlSignals_Reader(
    internal::DeviceControlSignals_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace serial
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif