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

#include "device/serial/data_stream.mojom.h"

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
const uint32_t kDataSource_Init_Name = 0;

class DataSource_Init_Params_Data {
 public:
  static DataSource_Init_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t buffer_size;
  uint8_t padfinal_[4];

 private:
  DataSource_Init_Params_Data();
  ~DataSource_Init_Params_Data() = delete;
};
static_assert(sizeof(DataSource_Init_Params_Data) == 16,
              "Bad sizeof(DataSource_Init_Params_Data)");

// static
DataSource_Init_Params_Data* DataSource_Init_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DataSource_Init_Params_Data))) DataSource_Init_Params_Data();
}

// static
bool DataSource_Init_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DataSource_Init_Params_Data* object = static_cast<const DataSource_Init_Params_Data*>(data);

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

void DataSource_Init_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void DataSource_Init_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

DataSource_Init_Params_Data::DataSource_Init_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDataSource_Resume_Name = 1;

class DataSource_Resume_Params_Data {
 public:
  static DataSource_Resume_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  DataSource_Resume_Params_Data();
  ~DataSource_Resume_Params_Data() = delete;
};
static_assert(sizeof(DataSource_Resume_Params_Data) == 8,
              "Bad sizeof(DataSource_Resume_Params_Data)");

// static
DataSource_Resume_Params_Data* DataSource_Resume_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DataSource_Resume_Params_Data))) DataSource_Resume_Params_Data();
}

// static
bool DataSource_Resume_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DataSource_Resume_Params_Data* object = static_cast<const DataSource_Resume_Params_Data*>(data);

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

void DataSource_Resume_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void DataSource_Resume_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

DataSource_Resume_Params_Data::DataSource_Resume_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDataSource_ReportBytesReceived_Name = 2;

class DataSource_ReportBytesReceived_Params_Data {
 public:
  static DataSource_ReportBytesReceived_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t bytes_sent;
  uint8_t padfinal_[4];

 private:
  DataSource_ReportBytesReceived_Params_Data();
  ~DataSource_ReportBytesReceived_Params_Data() = delete;
};
static_assert(sizeof(DataSource_ReportBytesReceived_Params_Data) == 16,
              "Bad sizeof(DataSource_ReportBytesReceived_Params_Data)");

// static
DataSource_ReportBytesReceived_Params_Data* DataSource_ReportBytesReceived_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DataSource_ReportBytesReceived_Params_Data))) DataSource_ReportBytesReceived_Params_Data();
}

// static
bool DataSource_ReportBytesReceived_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DataSource_ReportBytesReceived_Params_Data* object = static_cast<const DataSource_ReportBytesReceived_Params_Data*>(data);

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

void DataSource_ReportBytesReceived_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void DataSource_ReportBytesReceived_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

DataSource_ReportBytesReceived_Params_Data::DataSource_ReportBytesReceived_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDataSourceClient_OnError_Name = 0;

class DataSourceClient_OnError_Params_Data {
 public:
  static DataSourceClient_OnError_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  DataSourceClient_OnError_Params_Data();
  ~DataSourceClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(DataSourceClient_OnError_Params_Data) == 16,
              "Bad sizeof(DataSourceClient_OnError_Params_Data)");

// static
DataSourceClient_OnError_Params_Data* DataSourceClient_OnError_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DataSourceClient_OnError_Params_Data))) DataSourceClient_OnError_Params_Data();
}

// static
bool DataSourceClient_OnError_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DataSourceClient_OnError_Params_Data* object = static_cast<const DataSourceClient_OnError_Params_Data*>(data);

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

void DataSourceClient_OnError_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void DataSourceClient_OnError_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

DataSourceClient_OnError_Params_Data::DataSourceClient_OnError_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDataSourceClient_OnData_Name = 1;

class DataSourceClient_OnData_Params_Data {
 public:
  static DataSourceClient_OnData_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<uint8_t> data;

 private:
  DataSourceClient_OnData_Params_Data();
  ~DataSourceClient_OnData_Params_Data() = delete;
};
static_assert(sizeof(DataSourceClient_OnData_Params_Data) == 16,
              "Bad sizeof(DataSourceClient_OnData_Params_Data)");

// static
DataSourceClient_OnData_Params_Data* DataSourceClient_OnData_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DataSourceClient_OnData_Params_Data))) DataSourceClient_OnData_Params_Data();
}

// static
bool DataSourceClient_OnData_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DataSourceClient_OnData_Params_Data* object = static_cast<const DataSourceClient_OnData_Params_Data*>(data);

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
          object->data, "null data field in DataSourceClient_OnData_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->data, bounds_checker,
                                     &data_validate_params)) {
    return false;
  }

  return true;
}

void DataSourceClient_OnData_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&data, handles);
}

void DataSourceClient_OnData_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&data, handles);
}

DataSourceClient_OnData_Params_Data::DataSourceClient_OnData_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDataSink_Cancel_Name = 0;

class DataSink_Cancel_Params_Data {
 public:
  static DataSink_Cancel_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  DataSink_Cancel_Params_Data();
  ~DataSink_Cancel_Params_Data() = delete;
};
static_assert(sizeof(DataSink_Cancel_Params_Data) == 16,
              "Bad sizeof(DataSink_Cancel_Params_Data)");

// static
DataSink_Cancel_Params_Data* DataSink_Cancel_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DataSink_Cancel_Params_Data))) DataSink_Cancel_Params_Data();
}

// static
bool DataSink_Cancel_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DataSink_Cancel_Params_Data* object = static_cast<const DataSink_Cancel_Params_Data*>(data);

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

void DataSink_Cancel_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void DataSink_Cancel_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

DataSink_Cancel_Params_Data::DataSink_Cancel_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDataSink_OnData_Name = 1;

class DataSink_OnData_Params_Data {
 public:
  static DataSink_OnData_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<uint8_t> data;

 private:
  DataSink_OnData_Params_Data();
  ~DataSink_OnData_Params_Data() = delete;
};
static_assert(sizeof(DataSink_OnData_Params_Data) == 16,
              "Bad sizeof(DataSink_OnData_Params_Data)");

// static
DataSink_OnData_Params_Data* DataSink_OnData_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DataSink_OnData_Params_Data))) DataSink_OnData_Params_Data();
}

// static
bool DataSink_OnData_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DataSink_OnData_Params_Data* object = static_cast<const DataSink_OnData_Params_Data*>(data);

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
          object->data, "null data field in DataSink_OnData_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->data, bounds_checker,
                                     &data_validate_params)) {
    return false;
  }

  return true;
}

void DataSink_OnData_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&data, handles);
}

void DataSink_OnData_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&data, handles);
}

DataSink_OnData_Params_Data::DataSink_OnData_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class DataSink_OnData_ResponseParams_Data {
 public:
  static DataSink_OnData_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t bytes_sent;
  int32_t error;

 private:
  DataSink_OnData_ResponseParams_Data();
  ~DataSink_OnData_ResponseParams_Data() = delete;
};
static_assert(sizeof(DataSink_OnData_ResponseParams_Data) == 16,
              "Bad sizeof(DataSink_OnData_ResponseParams_Data)");

// static
DataSink_OnData_ResponseParams_Data* DataSink_OnData_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DataSink_OnData_ResponseParams_Data))) DataSink_OnData_ResponseParams_Data();
}

// static
bool DataSink_OnData_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DataSink_OnData_ResponseParams_Data* object = static_cast<const DataSink_OnData_ResponseParams_Data*>(data);

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

void DataSink_OnData_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void DataSink_OnData_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

DataSink_OnData_ResponseParams_Data::DataSink_OnData_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDataSink_ClearError_Name = 2;

class DataSink_ClearError_Params_Data {
 public:
  static DataSink_ClearError_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  DataSink_ClearError_Params_Data();
  ~DataSink_ClearError_Params_Data() = delete;
};
static_assert(sizeof(DataSink_ClearError_Params_Data) == 8,
              "Bad sizeof(DataSink_ClearError_Params_Data)");

// static
DataSink_ClearError_Params_Data* DataSink_ClearError_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DataSink_ClearError_Params_Data))) DataSink_ClearError_Params_Data();
}

// static
bool DataSink_ClearError_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DataSink_ClearError_Params_Data* object = static_cast<const DataSink_ClearError_Params_Data*>(data);

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

void DataSink_ClearError_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void DataSink_ClearError_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

DataSink_ClearError_Params_Data::DataSink_ClearError_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char DataSource::Name_[] = "device::serial::DataSource";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t DataSource::Version_;

DataSourceProxy::DataSourceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void DataSourceProxy::Init(
    uint32_t in_buffer_size) {
  size_t size = sizeof(internal::DataSource_Init_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDataSource_Init_Name, size);

  internal::DataSource_Init_Params_Data* params =
      internal::DataSource_Init_Params_Data::New(builder.buffer());
  params->buffer_size = in_buffer_size;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void DataSourceProxy::Resume(
    ) {
  size_t size = sizeof(internal::DataSource_Resume_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDataSource_Resume_Name, size);

  internal::DataSource_Resume_Params_Data* params =
      internal::DataSource_Resume_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void DataSourceProxy::ReportBytesReceived(
    uint32_t in_bytes_sent) {
  size_t size = sizeof(internal::DataSource_ReportBytesReceived_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDataSource_ReportBytesReceived_Name, size);

  internal::DataSource_ReportBytesReceived_Params_Data* params =
      internal::DataSource_ReportBytesReceived_Params_Data::New(builder.buffer());
  params->bytes_sent = in_bytes_sent;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

DataSourceStub::DataSourceStub()
    : sink_(nullptr),
      control_message_handler_(DataSource::Version_) {
}

DataSourceStub::~DataSourceStub() {}

bool DataSourceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDataSource_Init_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.DataSource.Init", __FILE__, __LINE__);
      internal::DataSource_Init_Params_Data* params =
          reinterpret_cast<internal::DataSource_Init_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_buffer_size{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_buffer_size = params->buffer_size;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DataSource::Init");
      sink_->Init(p_buffer_size);
      return true;
    }
    case internal::kDataSource_Resume_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.DataSource.Resume", __FILE__, __LINE__);
      internal::DataSource_Resume_Params_Data* params =
          reinterpret_cast<internal::DataSource_Resume_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DataSource::Resume");
      sink_->Resume();
      return true;
    }
    case internal::kDataSource_ReportBytesReceived_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.DataSource.ReportBytesReceived", __FILE__, __LINE__);
      internal::DataSource_ReportBytesReceived_Params_Data* params =
          reinterpret_cast<internal::DataSource_ReportBytesReceived_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_bytes_sent{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_bytes_sent = params->bytes_sent;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DataSource::ReportBytesReceived");
      sink_->ReportBytesReceived(p_bytes_sent);
      return true;
    }
  }
  return false;
}

bool DataSourceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDataSource_Init_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::DataSource::Init", __FILE__, __LINE__);
      break;
    }
    case internal::kDataSource_Resume_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::DataSource::Resume", __FILE__, __LINE__);
      break;
    }
    case internal::kDataSource_ReportBytesReceived_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::DataSource::ReportBytesReceived", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

DataSourceRequestValidator::DataSourceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DataSourceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDataSource_Init_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::DataSource_Init_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDataSource_Resume_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::DataSource_Resume_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDataSource_ReportBytesReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::DataSource_ReportBytesReceived_Params_Data>(message)) {
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

MOJO_STATIC_CONST_MEMBER_DEFINITION const char DataSourceClient::Name_[] = "device::serial::DataSourceClient";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t DataSourceClient::Version_;

DataSourceClientProxy::DataSourceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void DataSourceClientProxy::OnError(
    int32_t in_error) {
  size_t size = sizeof(internal::DataSourceClient_OnError_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDataSourceClient_OnError_Name, size);

  internal::DataSourceClient_OnError_Params_Data* params =
      internal::DataSourceClient_OnError_Params_Data::New(builder.buffer());
  params->error = in_error;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void DataSourceClientProxy::OnData(
    mojo::Array<uint8_t> in_data) {
  size_t size = sizeof(internal::DataSourceClient_OnData_Params_Data);
  size += GetSerializedSize_(in_data);
  mojo::internal::MessageBuilder builder(internal::kDataSourceClient_OnData_Name, size);

  internal::DataSourceClient_OnData_Params_Data* params =
      internal::DataSourceClient_OnData_Params_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_data), builder.buffer(),
      &params->data.ptr, &data_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->data.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in DataSourceClient.OnData request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

DataSourceClientStub::DataSourceClientStub()
    : sink_(nullptr),
      control_message_handler_(DataSourceClient::Version_) {
}

DataSourceClientStub::~DataSourceClientStub() {}

bool DataSourceClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDataSourceClient_OnError_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.DataSourceClient.OnError", __FILE__, __LINE__);
      internal::DataSourceClient_OnError_Params_Data* params =
          reinterpret_cast<internal::DataSourceClient_OnError_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int32_t p_error{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_error = params->error;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DataSourceClient::OnError");
      sink_->OnError(p_error);
      return true;
    }
    case internal::kDataSourceClient_OnData_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.DataSourceClient.OnData", __FILE__, __LINE__);
      internal::DataSourceClient_OnData_Params_Data* params =
          reinterpret_cast<internal::DataSourceClient_OnData_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::Array<uint8_t> p_data{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DataSourceClient::OnData");
      sink_->OnData(std::move(p_data));
      return true;
    }
  }
  return false;
}

bool DataSourceClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDataSourceClient_OnError_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::DataSourceClient::OnError", __FILE__, __LINE__);
      break;
    }
    case internal::kDataSourceClient_OnData_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::DataSourceClient::OnData", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

DataSourceClientRequestValidator::DataSourceClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DataSourceClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDataSourceClient_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::DataSourceClient_OnError_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDataSourceClient_OnData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::DataSourceClient_OnData_Params_Data>(message)) {
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

MOJO_STATIC_CONST_MEMBER_DEFINITION const char DataSink::Name_[] = "device::serial::DataSink";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t DataSink::Version_;
class DataSink_OnData_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DataSink_OnData_ForwardToCallback(
      const DataSink::OnDataCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DataSink::OnDataCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(DataSink_OnData_ForwardToCallback);
};
bool DataSink_OnData_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::DataSink_OnData_ResponseParams_Data* params =
      reinterpret_cast<internal::DataSink_OnData_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  uint32_t p_bytes_sent{};
  int32_t p_error{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_bytes_sent = params->bytes_sent;
    p_error = params->error;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_bytes_sent, p_error);
  return true;
}

DataSinkProxy::DataSinkProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void DataSinkProxy::Cancel(
    int32_t in_error) {
  size_t size = sizeof(internal::DataSink_Cancel_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDataSink_Cancel_Name, size);

  internal::DataSink_Cancel_Params_Data* params =
      internal::DataSink_Cancel_Params_Data::New(builder.buffer());
  params->error = in_error;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void DataSinkProxy::OnData(
    mojo::Array<uint8_t> in_data, const OnDataCallback& callback) {
  size_t size = sizeof(internal::DataSink_OnData_Params_Data);
  size += GetSerializedSize_(in_data);
  mojo::internal::RequestMessageBuilder builder(internal::kDataSink_OnData_Name, size);

  internal::DataSink_OnData_Params_Data* params =
      internal::DataSink_OnData_Params_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_data), builder.buffer(),
      &params->data.ptr, &data_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->data.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in DataSink.OnData request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new DataSink_OnData_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DataSinkProxy::ClearError(
    ) {
  size_t size = sizeof(internal::DataSink_ClearError_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDataSink_ClearError_Name, size);

  internal::DataSink_ClearError_Params_Data* params =
      internal::DataSink_ClearError_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
class DataSink_OnData_ProxyToResponder
    : public DataSink::OnDataCallback::Runnable {
 public:
  ~DataSink_OnData_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "DataSink::OnData(std::move(p_data), callback) "
        "was never run.";
  }

  DataSink_OnData_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(uint32_t in_bytes_sent, int32_t in_error) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(DataSink_OnData_ProxyToResponder);
};
void DataSink_OnData_ProxyToResponder::Run(
    uint32_t in_bytes_sent, int32_t in_error) const {
  size_t size = sizeof(internal::DataSink_OnData_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDataSink_OnData_Name, size, request_id_);
  internal::DataSink_OnData_ResponseParams_Data* params =
      internal::DataSink_OnData_ResponseParams_Data::New(builder.buffer());
  params->bytes_sent = in_bytes_sent;
  params->error = in_error;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

DataSinkStub::DataSinkStub()
    : sink_(nullptr),
      control_message_handler_(DataSink::Version_) {
}

DataSinkStub::~DataSinkStub() {}

bool DataSinkStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDataSink_Cancel_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.DataSink.Cancel", __FILE__, __LINE__);
      internal::DataSink_Cancel_Params_Data* params =
          reinterpret_cast<internal::DataSink_Cancel_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int32_t p_error{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_error = params->error;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DataSink::Cancel");
      sink_->Cancel(p_error);
      return true;
    }
    case internal::kDataSink_OnData_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.DataSink.OnData", __FILE__, __LINE__);
      break;
    }
    case internal::kDataSink_ClearError_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::serial.DataSink.ClearError", __FILE__, __LINE__);
      internal::DataSink_ClearError_Params_Data* params =
          reinterpret_cast<internal::DataSink_ClearError_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DataSink::ClearError");
      sink_->ClearError();
      return true;
    }
  }
  return false;
}

bool DataSinkStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDataSink_Cancel_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::DataSink::Cancel", __FILE__, __LINE__);
      break;
    }
    case internal::kDataSink_OnData_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::DataSink::OnData", __FILE__, __LINE__);
      internal::DataSink_OnData_Params_Data* params =
          reinterpret_cast<internal::DataSink_OnData_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::Array<uint8_t> p_data{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      DataSink::OnDataCallback::Runnable* runnable =
          new DataSink_OnData_ProxyToResponder(
              message->request_id(), responder);
      DataSink::OnDataCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DataSink::OnData");
      sink_->OnData(std::move(p_data), callback);
      return true;
    }
    case internal::kDataSink_ClearError_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::serial::DataSink::ClearError", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

DataSinkRequestValidator::DataSinkRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DataSinkRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDataSink_Cancel_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::DataSink_Cancel_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDataSink_OnData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::DataSink_OnData_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDataSink_ClearError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::DataSink_ClearError_Params_Data>(message)) {
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

DataSinkResponseValidator::DataSinkResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DataSinkResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kDataSink_OnData_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DataSink_OnData_ResponseParams_Data>(message)) {
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
}  // namespace serial
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif