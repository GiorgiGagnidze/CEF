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

#include "device/devices_app/usb/public/interfaces/device.mojom.h"

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
namespace usb {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kDevice_GetDeviceInfo_Name = 0;

class Device_GetDeviceInfo_Params_Data {
 public:
  static Device_GetDeviceInfo_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  Device_GetDeviceInfo_Params_Data();
  ~Device_GetDeviceInfo_Params_Data() = delete;
};
static_assert(sizeof(Device_GetDeviceInfo_Params_Data) == 8,
              "Bad sizeof(Device_GetDeviceInfo_Params_Data)");

// static
Device_GetDeviceInfo_Params_Data* Device_GetDeviceInfo_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_GetDeviceInfo_Params_Data))) Device_GetDeviceInfo_Params_Data();
}

// static
bool Device_GetDeviceInfo_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_GetDeviceInfo_Params_Data* object = static_cast<const Device_GetDeviceInfo_Params_Data*>(data);

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

void Device_GetDeviceInfo_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_GetDeviceInfo_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_GetDeviceInfo_Params_Data::Device_GetDeviceInfo_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_GetDeviceInfo_ResponseParams_Data {
 public:
  static Device_GetDeviceInfo_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DeviceInfo_Data> info;

 private:
  Device_GetDeviceInfo_ResponseParams_Data();
  ~Device_GetDeviceInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_GetDeviceInfo_ResponseParams_Data) == 16,
              "Bad sizeof(Device_GetDeviceInfo_ResponseParams_Data)");

// static
Device_GetDeviceInfo_ResponseParams_Data* Device_GetDeviceInfo_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_GetDeviceInfo_ResponseParams_Data))) Device_GetDeviceInfo_ResponseParams_Data();
}

// static
bool Device_GetDeviceInfo_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_GetDeviceInfo_ResponseParams_Data* object = static_cast<const Device_GetDeviceInfo_ResponseParams_Data*>(data);

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

void Device_GetDeviceInfo_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&info, handles);
}

void Device_GetDeviceInfo_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&info, handles);
}

Device_GetDeviceInfo_ResponseParams_Data::Device_GetDeviceInfo_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_GetConfiguration_Name = 1;

class Device_GetConfiguration_Params_Data {
 public:
  static Device_GetConfiguration_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  Device_GetConfiguration_Params_Data();
  ~Device_GetConfiguration_Params_Data() = delete;
};
static_assert(sizeof(Device_GetConfiguration_Params_Data) == 8,
              "Bad sizeof(Device_GetConfiguration_Params_Data)");

// static
Device_GetConfiguration_Params_Data* Device_GetConfiguration_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_GetConfiguration_Params_Data))) Device_GetConfiguration_Params_Data();
}

// static
bool Device_GetConfiguration_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_GetConfiguration_Params_Data* object = static_cast<const Device_GetConfiguration_Params_Data*>(data);

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

void Device_GetConfiguration_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_GetConfiguration_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_GetConfiguration_Params_Data::Device_GetConfiguration_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_GetConfiguration_ResponseParams_Data {
 public:
  static Device_GetConfiguration_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t value;
  uint8_t padfinal_[7];

 private:
  Device_GetConfiguration_ResponseParams_Data();
  ~Device_GetConfiguration_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_GetConfiguration_ResponseParams_Data) == 16,
              "Bad sizeof(Device_GetConfiguration_ResponseParams_Data)");

// static
Device_GetConfiguration_ResponseParams_Data* Device_GetConfiguration_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_GetConfiguration_ResponseParams_Data))) Device_GetConfiguration_ResponseParams_Data();
}

// static
bool Device_GetConfiguration_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_GetConfiguration_ResponseParams_Data* object = static_cast<const Device_GetConfiguration_ResponseParams_Data*>(data);

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

void Device_GetConfiguration_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_GetConfiguration_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_GetConfiguration_ResponseParams_Data::Device_GetConfiguration_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_Open_Name = 2;

class Device_Open_Params_Data {
 public:
  static Device_Open_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  Device_Open_Params_Data();
  ~Device_Open_Params_Data() = delete;
};
static_assert(sizeof(Device_Open_Params_Data) == 8,
              "Bad sizeof(Device_Open_Params_Data)");

// static
Device_Open_Params_Data* Device_Open_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_Open_Params_Data))) Device_Open_Params_Data();
}

// static
bool Device_Open_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_Open_Params_Data* object = static_cast<const Device_Open_Params_Data*>(data);

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

void Device_Open_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_Open_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_Open_Params_Data::Device_Open_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_Open_ResponseParams_Data {
 public:
  static Device_Open_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::OpenDeviceError_Data error;
  uint8_t padfinal_[4];

 private:
  Device_Open_ResponseParams_Data();
  ~Device_Open_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_Open_ResponseParams_Data) == 16,
              "Bad sizeof(Device_Open_ResponseParams_Data)");

// static
Device_Open_ResponseParams_Data* Device_Open_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_Open_ResponseParams_Data))) Device_Open_ResponseParams_Data();
}

// static
bool Device_Open_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_Open_ResponseParams_Data* object = static_cast<const Device_Open_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->error))
    return false;

  return true;
}

void Device_Open_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_Open_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_Open_ResponseParams_Data::Device_Open_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_Close_Name = 3;

class Device_Close_Params_Data {
 public:
  static Device_Close_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  Device_Close_Params_Data();
  ~Device_Close_Params_Data() = delete;
};
static_assert(sizeof(Device_Close_Params_Data) == 8,
              "Bad sizeof(Device_Close_Params_Data)");

// static
Device_Close_Params_Data* Device_Close_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_Close_Params_Data))) Device_Close_Params_Data();
}

// static
bool Device_Close_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_Close_Params_Data* object = static_cast<const Device_Close_Params_Data*>(data);

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

void Device_Close_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_Close_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_Close_Params_Data::Device_Close_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_Close_ResponseParams_Data {
 public:
  static Device_Close_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  Device_Close_ResponseParams_Data();
  ~Device_Close_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_Close_ResponseParams_Data) == 8,
              "Bad sizeof(Device_Close_ResponseParams_Data)");

// static
Device_Close_ResponseParams_Data* Device_Close_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_Close_ResponseParams_Data))) Device_Close_ResponseParams_Data();
}

// static
bool Device_Close_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_Close_ResponseParams_Data* object = static_cast<const Device_Close_ResponseParams_Data*>(data);

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

void Device_Close_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_Close_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_Close_ResponseParams_Data::Device_Close_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_SetConfiguration_Name = 4;

class Device_SetConfiguration_Params_Data {
 public:
  static Device_SetConfiguration_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t value;
  uint8_t padfinal_[7];

 private:
  Device_SetConfiguration_Params_Data();
  ~Device_SetConfiguration_Params_Data() = delete;
};
static_assert(sizeof(Device_SetConfiguration_Params_Data) == 16,
              "Bad sizeof(Device_SetConfiguration_Params_Data)");

// static
Device_SetConfiguration_Params_Data* Device_SetConfiguration_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_SetConfiguration_Params_Data))) Device_SetConfiguration_Params_Data();
}

// static
bool Device_SetConfiguration_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_SetConfiguration_Params_Data* object = static_cast<const Device_SetConfiguration_Params_Data*>(data);

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

void Device_SetConfiguration_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_SetConfiguration_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_SetConfiguration_Params_Data::Device_SetConfiguration_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_SetConfiguration_ResponseParams_Data {
 public:
  static Device_SetConfiguration_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Device_SetConfiguration_ResponseParams_Data();
  ~Device_SetConfiguration_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_SetConfiguration_ResponseParams_Data) == 16,
              "Bad sizeof(Device_SetConfiguration_ResponseParams_Data)");

// static
Device_SetConfiguration_ResponseParams_Data* Device_SetConfiguration_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_SetConfiguration_ResponseParams_Data))) Device_SetConfiguration_ResponseParams_Data();
}

// static
bool Device_SetConfiguration_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_SetConfiguration_ResponseParams_Data* object = static_cast<const Device_SetConfiguration_ResponseParams_Data*>(data);

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

void Device_SetConfiguration_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_SetConfiguration_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_SetConfiguration_ResponseParams_Data::Device_SetConfiguration_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_ClaimInterface_Name = 5;

class Device_ClaimInterface_Params_Data {
 public:
  static Device_ClaimInterface_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t interface_number;
  uint8_t padfinal_[7];

 private:
  Device_ClaimInterface_Params_Data();
  ~Device_ClaimInterface_Params_Data() = delete;
};
static_assert(sizeof(Device_ClaimInterface_Params_Data) == 16,
              "Bad sizeof(Device_ClaimInterface_Params_Data)");

// static
Device_ClaimInterface_Params_Data* Device_ClaimInterface_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_ClaimInterface_Params_Data))) Device_ClaimInterface_Params_Data();
}

// static
bool Device_ClaimInterface_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_ClaimInterface_Params_Data* object = static_cast<const Device_ClaimInterface_Params_Data*>(data);

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

void Device_ClaimInterface_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_ClaimInterface_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_ClaimInterface_Params_Data::Device_ClaimInterface_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_ClaimInterface_ResponseParams_Data {
 public:
  static Device_ClaimInterface_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Device_ClaimInterface_ResponseParams_Data();
  ~Device_ClaimInterface_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_ClaimInterface_ResponseParams_Data) == 16,
              "Bad sizeof(Device_ClaimInterface_ResponseParams_Data)");

// static
Device_ClaimInterface_ResponseParams_Data* Device_ClaimInterface_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_ClaimInterface_ResponseParams_Data))) Device_ClaimInterface_ResponseParams_Data();
}

// static
bool Device_ClaimInterface_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_ClaimInterface_ResponseParams_Data* object = static_cast<const Device_ClaimInterface_ResponseParams_Data*>(data);

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

void Device_ClaimInterface_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_ClaimInterface_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_ClaimInterface_ResponseParams_Data::Device_ClaimInterface_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_ReleaseInterface_Name = 6;

class Device_ReleaseInterface_Params_Data {
 public:
  static Device_ReleaseInterface_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t interface_number;
  uint8_t padfinal_[7];

 private:
  Device_ReleaseInterface_Params_Data();
  ~Device_ReleaseInterface_Params_Data() = delete;
};
static_assert(sizeof(Device_ReleaseInterface_Params_Data) == 16,
              "Bad sizeof(Device_ReleaseInterface_Params_Data)");

// static
Device_ReleaseInterface_Params_Data* Device_ReleaseInterface_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_ReleaseInterface_Params_Data))) Device_ReleaseInterface_Params_Data();
}

// static
bool Device_ReleaseInterface_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_ReleaseInterface_Params_Data* object = static_cast<const Device_ReleaseInterface_Params_Data*>(data);

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

void Device_ReleaseInterface_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_ReleaseInterface_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_ReleaseInterface_Params_Data::Device_ReleaseInterface_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_ReleaseInterface_ResponseParams_Data {
 public:
  static Device_ReleaseInterface_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Device_ReleaseInterface_ResponseParams_Data();
  ~Device_ReleaseInterface_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_ReleaseInterface_ResponseParams_Data) == 16,
              "Bad sizeof(Device_ReleaseInterface_ResponseParams_Data)");

// static
Device_ReleaseInterface_ResponseParams_Data* Device_ReleaseInterface_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_ReleaseInterface_ResponseParams_Data))) Device_ReleaseInterface_ResponseParams_Data();
}

// static
bool Device_ReleaseInterface_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_ReleaseInterface_ResponseParams_Data* object = static_cast<const Device_ReleaseInterface_ResponseParams_Data*>(data);

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

void Device_ReleaseInterface_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_ReleaseInterface_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_ReleaseInterface_ResponseParams_Data::Device_ReleaseInterface_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_SetInterfaceAlternateSetting_Name = 7;

class Device_SetInterfaceAlternateSetting_Params_Data {
 public:
  static Device_SetInterfaceAlternateSetting_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t interface_number;
  uint8_t alternate_setting;
  uint8_t padfinal_[6];

 private:
  Device_SetInterfaceAlternateSetting_Params_Data();
  ~Device_SetInterfaceAlternateSetting_Params_Data() = delete;
};
static_assert(sizeof(Device_SetInterfaceAlternateSetting_Params_Data) == 16,
              "Bad sizeof(Device_SetInterfaceAlternateSetting_Params_Data)");

// static
Device_SetInterfaceAlternateSetting_Params_Data* Device_SetInterfaceAlternateSetting_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_SetInterfaceAlternateSetting_Params_Data))) Device_SetInterfaceAlternateSetting_Params_Data();
}

// static
bool Device_SetInterfaceAlternateSetting_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_SetInterfaceAlternateSetting_Params_Data* object = static_cast<const Device_SetInterfaceAlternateSetting_Params_Data*>(data);

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

void Device_SetInterfaceAlternateSetting_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_SetInterfaceAlternateSetting_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_SetInterfaceAlternateSetting_Params_Data::Device_SetInterfaceAlternateSetting_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_SetInterfaceAlternateSetting_ResponseParams_Data {
 public:
  static Device_SetInterfaceAlternateSetting_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Device_SetInterfaceAlternateSetting_ResponseParams_Data();
  ~Device_SetInterfaceAlternateSetting_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_SetInterfaceAlternateSetting_ResponseParams_Data) == 16,
              "Bad sizeof(Device_SetInterfaceAlternateSetting_ResponseParams_Data)");

// static
Device_SetInterfaceAlternateSetting_ResponseParams_Data* Device_SetInterfaceAlternateSetting_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_SetInterfaceAlternateSetting_ResponseParams_Data))) Device_SetInterfaceAlternateSetting_ResponseParams_Data();
}

// static
bool Device_SetInterfaceAlternateSetting_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_SetInterfaceAlternateSetting_ResponseParams_Data* object = static_cast<const Device_SetInterfaceAlternateSetting_ResponseParams_Data*>(data);

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

void Device_SetInterfaceAlternateSetting_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_SetInterfaceAlternateSetting_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_SetInterfaceAlternateSetting_ResponseParams_Data::Device_SetInterfaceAlternateSetting_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_Reset_Name = 8;

class Device_Reset_Params_Data {
 public:
  static Device_Reset_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  Device_Reset_Params_Data();
  ~Device_Reset_Params_Data() = delete;
};
static_assert(sizeof(Device_Reset_Params_Data) == 8,
              "Bad sizeof(Device_Reset_Params_Data)");

// static
Device_Reset_Params_Data* Device_Reset_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_Reset_Params_Data))) Device_Reset_Params_Data();
}

// static
bool Device_Reset_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_Reset_Params_Data* object = static_cast<const Device_Reset_Params_Data*>(data);

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

void Device_Reset_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_Reset_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_Reset_Params_Data::Device_Reset_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_Reset_ResponseParams_Data {
 public:
  static Device_Reset_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Device_Reset_ResponseParams_Data();
  ~Device_Reset_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_Reset_ResponseParams_Data) == 16,
              "Bad sizeof(Device_Reset_ResponseParams_Data)");

// static
Device_Reset_ResponseParams_Data* Device_Reset_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_Reset_ResponseParams_Data))) Device_Reset_ResponseParams_Data();
}

// static
bool Device_Reset_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_Reset_ResponseParams_Data* object = static_cast<const Device_Reset_ResponseParams_Data*>(data);

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

void Device_Reset_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_Reset_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_Reset_ResponseParams_Data::Device_Reset_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_ClearHalt_Name = 9;

class Device_ClearHalt_Params_Data {
 public:
  static Device_ClearHalt_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t endpoint;
  uint8_t padfinal_[7];

 private:
  Device_ClearHalt_Params_Data();
  ~Device_ClearHalt_Params_Data() = delete;
};
static_assert(sizeof(Device_ClearHalt_Params_Data) == 16,
              "Bad sizeof(Device_ClearHalt_Params_Data)");

// static
Device_ClearHalt_Params_Data* Device_ClearHalt_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_ClearHalt_Params_Data))) Device_ClearHalt_Params_Data();
}

// static
bool Device_ClearHalt_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_ClearHalt_Params_Data* object = static_cast<const Device_ClearHalt_Params_Data*>(data);

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

void Device_ClearHalt_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_ClearHalt_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_ClearHalt_Params_Data::Device_ClearHalt_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_ClearHalt_ResponseParams_Data {
 public:
  static Device_ClearHalt_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  Device_ClearHalt_ResponseParams_Data();
  ~Device_ClearHalt_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_ClearHalt_ResponseParams_Data) == 16,
              "Bad sizeof(Device_ClearHalt_ResponseParams_Data)");

// static
Device_ClearHalt_ResponseParams_Data* Device_ClearHalt_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_ClearHalt_ResponseParams_Data))) Device_ClearHalt_ResponseParams_Data();
}

// static
bool Device_ClearHalt_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_ClearHalt_ResponseParams_Data* object = static_cast<const Device_ClearHalt_ResponseParams_Data*>(data);

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

void Device_ClearHalt_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_ClearHalt_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_ClearHalt_ResponseParams_Data::Device_ClearHalt_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_ControlTransferIn_Name = 10;

class Device_ControlTransferIn_Params_Data {
 public:
  static Device_ControlTransferIn_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::ControlTransferParams_Data> params;
  uint32_t length;
  uint32_t timeout;

 private:
  Device_ControlTransferIn_Params_Data();
  ~Device_ControlTransferIn_Params_Data() = delete;
};
static_assert(sizeof(Device_ControlTransferIn_Params_Data) == 24,
              "Bad sizeof(Device_ControlTransferIn_Params_Data)");

// static
Device_ControlTransferIn_Params_Data* Device_ControlTransferIn_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_ControlTransferIn_Params_Data))) Device_ControlTransferIn_Params_Data();
}

// static
bool Device_ControlTransferIn_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_ControlTransferIn_Params_Data* object = static_cast<const Device_ControlTransferIn_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->params, "null params field in Device_ControlTransferIn_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, bounds_checker))
    return false;

  return true;
}

void Device_ControlTransferIn_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&params, handles);
}

void Device_ControlTransferIn_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&params, handles);
}

Device_ControlTransferIn_Params_Data::Device_ControlTransferIn_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_ControlTransferIn_ResponseParams_Data {
 public:
  static Device_ControlTransferIn_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::TransferStatus_Data status;
  uint8_t pad0_[4];
  mojo::internal::ArrayPointer<uint8_t> data;

 private:
  Device_ControlTransferIn_ResponseParams_Data();
  ~Device_ControlTransferIn_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_ControlTransferIn_ResponseParams_Data) == 24,
              "Bad sizeof(Device_ControlTransferIn_ResponseParams_Data)");

// static
Device_ControlTransferIn_ResponseParams_Data* Device_ControlTransferIn_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_ControlTransferIn_ResponseParams_Data))) Device_ControlTransferIn_ResponseParams_Data();
}

// static
bool Device_ControlTransferIn_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_ControlTransferIn_ResponseParams_Data* object = static_cast<const Device_ControlTransferIn_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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

  if (!mojo::internal::ValidateEnum(object->status))
    return false;

  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->data, bounds_checker,
                                     &data_validate_params)) {
    return false;
  }

  return true;
}

void Device_ControlTransferIn_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&data, handles);
}

void Device_ControlTransferIn_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&data, handles);
}

Device_ControlTransferIn_ResponseParams_Data::Device_ControlTransferIn_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_ControlTransferOut_Name = 11;

class Device_ControlTransferOut_Params_Data {
 public:
  static Device_ControlTransferOut_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::ControlTransferParams_Data> params;
  mojo::internal::ArrayPointer<uint8_t> data;
  uint32_t timeout;
  uint8_t padfinal_[4];

 private:
  Device_ControlTransferOut_Params_Data();
  ~Device_ControlTransferOut_Params_Data() = delete;
};
static_assert(sizeof(Device_ControlTransferOut_Params_Data) == 32,
              "Bad sizeof(Device_ControlTransferOut_Params_Data)");

// static
Device_ControlTransferOut_Params_Data* Device_ControlTransferOut_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_ControlTransferOut_Params_Data))) Device_ControlTransferOut_Params_Data();
}

// static
bool Device_ControlTransferOut_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_ControlTransferOut_Params_Data* object = static_cast<const Device_ControlTransferOut_Params_Data*>(data);

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
          object->params, "null params field in Device_ControlTransferOut_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->params, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, "null data field in Device_ControlTransferOut_Params struct")) {
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

void Device_ControlTransferOut_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&params, handles);
  mojo::internal::Encode(&data, handles);
}

void Device_ControlTransferOut_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&params, handles);
  mojo::internal::Decode(&data, handles);
}

Device_ControlTransferOut_Params_Data::Device_ControlTransferOut_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_ControlTransferOut_ResponseParams_Data {
 public:
  static Device_ControlTransferOut_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::TransferStatus_Data status;
  uint8_t padfinal_[4];

 private:
  Device_ControlTransferOut_ResponseParams_Data();
  ~Device_ControlTransferOut_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_ControlTransferOut_ResponseParams_Data) == 16,
              "Bad sizeof(Device_ControlTransferOut_ResponseParams_Data)");

// static
Device_ControlTransferOut_ResponseParams_Data* Device_ControlTransferOut_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_ControlTransferOut_ResponseParams_Data))) Device_ControlTransferOut_ResponseParams_Data();
}

// static
bool Device_ControlTransferOut_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_ControlTransferOut_ResponseParams_Data* object = static_cast<const Device_ControlTransferOut_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->status))
    return false;

  return true;
}

void Device_ControlTransferOut_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_ControlTransferOut_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_ControlTransferOut_ResponseParams_Data::Device_ControlTransferOut_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_GenericTransferIn_Name = 12;

class Device_GenericTransferIn_Params_Data {
 public:
  static Device_GenericTransferIn_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t endpoint_number;
  uint8_t pad0_[3];
  uint32_t length;
  uint32_t timeout;
  uint8_t padfinal_[4];

 private:
  Device_GenericTransferIn_Params_Data();
  ~Device_GenericTransferIn_Params_Data() = delete;
};
static_assert(sizeof(Device_GenericTransferIn_Params_Data) == 24,
              "Bad sizeof(Device_GenericTransferIn_Params_Data)");

// static
Device_GenericTransferIn_Params_Data* Device_GenericTransferIn_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_GenericTransferIn_Params_Data))) Device_GenericTransferIn_Params_Data();
}

// static
bool Device_GenericTransferIn_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_GenericTransferIn_Params_Data* object = static_cast<const Device_GenericTransferIn_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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

void Device_GenericTransferIn_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_GenericTransferIn_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_GenericTransferIn_Params_Data::Device_GenericTransferIn_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_GenericTransferIn_ResponseParams_Data {
 public:
  static Device_GenericTransferIn_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::TransferStatus_Data status;
  uint8_t pad0_[4];
  mojo::internal::ArrayPointer<uint8_t> data;

 private:
  Device_GenericTransferIn_ResponseParams_Data();
  ~Device_GenericTransferIn_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_GenericTransferIn_ResponseParams_Data) == 24,
              "Bad sizeof(Device_GenericTransferIn_ResponseParams_Data)");

// static
Device_GenericTransferIn_ResponseParams_Data* Device_GenericTransferIn_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_GenericTransferIn_ResponseParams_Data))) Device_GenericTransferIn_ResponseParams_Data();
}

// static
bool Device_GenericTransferIn_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_GenericTransferIn_ResponseParams_Data* object = static_cast<const Device_GenericTransferIn_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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

  if (!mojo::internal::ValidateEnum(object->status))
    return false;

  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->data, bounds_checker,
                                     &data_validate_params)) {
    return false;
  }

  return true;
}

void Device_GenericTransferIn_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&data, handles);
}

void Device_GenericTransferIn_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&data, handles);
}

Device_GenericTransferIn_ResponseParams_Data::Device_GenericTransferIn_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_GenericTransferOut_Name = 13;

class Device_GenericTransferOut_Params_Data {
 public:
  static Device_GenericTransferOut_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t endpoint_number;
  uint8_t pad0_[3];
  uint32_t timeout;
  mojo::internal::ArrayPointer<uint8_t> data;

 private:
  Device_GenericTransferOut_Params_Data();
  ~Device_GenericTransferOut_Params_Data() = delete;
};
static_assert(sizeof(Device_GenericTransferOut_Params_Data) == 24,
              "Bad sizeof(Device_GenericTransferOut_Params_Data)");

// static
Device_GenericTransferOut_Params_Data* Device_GenericTransferOut_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_GenericTransferOut_Params_Data))) Device_GenericTransferOut_Params_Data();
}

// static
bool Device_GenericTransferOut_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_GenericTransferOut_Params_Data* object = static_cast<const Device_GenericTransferOut_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->data, "null data field in Device_GenericTransferOut_Params struct")) {
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

void Device_GenericTransferOut_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&data, handles);
}

void Device_GenericTransferOut_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&data, handles);
}

Device_GenericTransferOut_Params_Data::Device_GenericTransferOut_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_GenericTransferOut_ResponseParams_Data {
 public:
  static Device_GenericTransferOut_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::TransferStatus_Data status;
  uint8_t padfinal_[4];

 private:
  Device_GenericTransferOut_ResponseParams_Data();
  ~Device_GenericTransferOut_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_GenericTransferOut_ResponseParams_Data) == 16,
              "Bad sizeof(Device_GenericTransferOut_ResponseParams_Data)");

// static
Device_GenericTransferOut_ResponseParams_Data* Device_GenericTransferOut_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_GenericTransferOut_ResponseParams_Data))) Device_GenericTransferOut_ResponseParams_Data();
}

// static
bool Device_GenericTransferOut_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_GenericTransferOut_ResponseParams_Data* object = static_cast<const Device_GenericTransferOut_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->status))
    return false;

  return true;
}

void Device_GenericTransferOut_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Device_GenericTransferOut_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Device_GenericTransferOut_ResponseParams_Data::Device_GenericTransferOut_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_IsochronousTransferIn_Name = 14;

class Device_IsochronousTransferIn_Params_Data {
 public:
  static Device_IsochronousTransferIn_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t endpoint_number;
  uint8_t pad0_[3];
  uint32_t timeout;
  mojo::internal::ArrayPointer<uint32_t> packet_lengths;

 private:
  Device_IsochronousTransferIn_Params_Data();
  ~Device_IsochronousTransferIn_Params_Data() = delete;
};
static_assert(sizeof(Device_IsochronousTransferIn_Params_Data) == 24,
              "Bad sizeof(Device_IsochronousTransferIn_Params_Data)");

// static
Device_IsochronousTransferIn_Params_Data* Device_IsochronousTransferIn_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_IsochronousTransferIn_Params_Data))) Device_IsochronousTransferIn_Params_Data();
}

// static
bool Device_IsochronousTransferIn_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_IsochronousTransferIn_Params_Data* object = static_cast<const Device_IsochronousTransferIn_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->packet_lengths, "null packet_lengths field in Device_IsochronousTransferIn_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams packet_lengths_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->packet_lengths, bounds_checker,
                                     &packet_lengths_validate_params)) {
    return false;
  }

  return true;
}

void Device_IsochronousTransferIn_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&packet_lengths, handles);
}

void Device_IsochronousTransferIn_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&packet_lengths, handles);
}

Device_IsochronousTransferIn_Params_Data::Device_IsochronousTransferIn_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_IsochronousTransferIn_ResponseParams_Data {
 public:
  static Device_IsochronousTransferIn_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<uint8_t> data;
  mojo::internal::ArrayPointer<internal::IsochronousPacket_Data*> packets;

 private:
  Device_IsochronousTransferIn_ResponseParams_Data();
  ~Device_IsochronousTransferIn_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_IsochronousTransferIn_ResponseParams_Data) == 24,
              "Bad sizeof(Device_IsochronousTransferIn_ResponseParams_Data)");

// static
Device_IsochronousTransferIn_ResponseParams_Data* Device_IsochronousTransferIn_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_IsochronousTransferIn_ResponseParams_Data))) Device_IsochronousTransferIn_ResponseParams_Data();
}

// static
bool Device_IsochronousTransferIn_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_IsochronousTransferIn_ResponseParams_Data* object = static_cast<const Device_IsochronousTransferIn_ResponseParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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

  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->data, bounds_checker,
                                     &data_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->packets, "null packets field in Device_IsochronousTransferIn_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams packets_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->packets, bounds_checker,
                                     &packets_validate_params)) {
    return false;
  }

  return true;
}

void Device_IsochronousTransferIn_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&data, handles);
  mojo::internal::Encode(&packets, handles);
}

void Device_IsochronousTransferIn_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&data, handles);
  mojo::internal::Decode(&packets, handles);
}

Device_IsochronousTransferIn_ResponseParams_Data::Device_IsochronousTransferIn_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDevice_IsochronousTransferOut_Name = 15;

class Device_IsochronousTransferOut_Params_Data {
 public:
  static Device_IsochronousTransferOut_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t endpoint_number;
  uint8_t pad0_[3];
  uint32_t timeout;
  mojo::internal::ArrayPointer<uint8_t> data;
  mojo::internal::ArrayPointer<uint32_t> packet_lengths;

 private:
  Device_IsochronousTransferOut_Params_Data();
  ~Device_IsochronousTransferOut_Params_Data() = delete;
};
static_assert(sizeof(Device_IsochronousTransferOut_Params_Data) == 32,
              "Bad sizeof(Device_IsochronousTransferOut_Params_Data)");

// static
Device_IsochronousTransferOut_Params_Data* Device_IsochronousTransferOut_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_IsochronousTransferOut_Params_Data))) Device_IsochronousTransferOut_Params_Data();
}

// static
bool Device_IsochronousTransferOut_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_IsochronousTransferOut_Params_Data* object = static_cast<const Device_IsochronousTransferOut_Params_Data*>(data);

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
          object->data, "null data field in Device_IsochronousTransferOut_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->data, bounds_checker,
                                     &data_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->packet_lengths, "null packet_lengths field in Device_IsochronousTransferOut_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams packet_lengths_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->packet_lengths, bounds_checker,
                                     &packet_lengths_validate_params)) {
    return false;
  }

  return true;
}

void Device_IsochronousTransferOut_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&data, handles);
  mojo::internal::Encode(&packet_lengths, handles);
}

void Device_IsochronousTransferOut_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&data, handles);
  mojo::internal::Decode(&packet_lengths, handles);
}

Device_IsochronousTransferOut_Params_Data::Device_IsochronousTransferOut_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Device_IsochronousTransferOut_ResponseParams_Data {
 public:
  static Device_IsochronousTransferOut_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::IsochronousPacket_Data*> packets;

 private:
  Device_IsochronousTransferOut_ResponseParams_Data();
  ~Device_IsochronousTransferOut_ResponseParams_Data() = delete;
};
static_assert(sizeof(Device_IsochronousTransferOut_ResponseParams_Data) == 16,
              "Bad sizeof(Device_IsochronousTransferOut_ResponseParams_Data)");

// static
Device_IsochronousTransferOut_ResponseParams_Data* Device_IsochronousTransferOut_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Device_IsochronousTransferOut_ResponseParams_Data))) Device_IsochronousTransferOut_ResponseParams_Data();
}

// static
bool Device_IsochronousTransferOut_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Device_IsochronousTransferOut_ResponseParams_Data* object = static_cast<const Device_IsochronousTransferOut_ResponseParams_Data*>(data);

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
          object->packets, "null packets field in Device_IsochronousTransferOut_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams packets_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->packets, bounds_checker,
                                     &packets_validate_params)) {
    return false;
  }

  return true;
}

void Device_IsochronousTransferOut_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&packets, handles);
}

void Device_IsochronousTransferOut_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&packets, handles);
}

Device_IsochronousTransferOut_ResponseParams_Data::Device_IsochronousTransferOut_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
EndpointInfo_Data* EndpointInfo_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(EndpointInfo_Data))) EndpointInfo_Data();
}

// static
bool EndpointInfo_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EndpointInfo_Data* object = static_cast<const EndpointInfo_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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

  if (!mojo::internal::ValidateEnum(object->direction))
    return false;

  if (!mojo::internal::ValidateEnum(object->type))
    return false;

  return true;
}

void EndpointInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void EndpointInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

EndpointInfo_Data::EndpointInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
AlternateInterfaceInfo_Data* AlternateInterfaceInfo_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(AlternateInterfaceInfo_Data))) AlternateInterfaceInfo_Data();
}

// static
bool AlternateInterfaceInfo_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AlternateInterfaceInfo_Data* object = static_cast<const AlternateInterfaceInfo_Data*>(data);

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

  const mojo::internal::ArrayValidateParams interface_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->interface_name, bounds_checker,
                                     &interface_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->endpoints, "null endpoints field in AlternateInterfaceInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams endpoints_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->endpoints, bounds_checker,
                                     &endpoints_validate_params)) {
    return false;
  }

  return true;
}

void AlternateInterfaceInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&interface_name, handles);
  mojo::internal::Encode(&endpoints, handles);
}

void AlternateInterfaceInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&interface_name, handles);
  mojo::internal::Decode(&endpoints, handles);
}

AlternateInterfaceInfo_Data::AlternateInterfaceInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
InterfaceInfo_Data* InterfaceInfo_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(InterfaceInfo_Data))) InterfaceInfo_Data();
}

// static
bool InterfaceInfo_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const InterfaceInfo_Data* object = static_cast<const InterfaceInfo_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->alternates, "null alternates field in InterfaceInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams alternates_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->alternates, bounds_checker,
                                     &alternates_validate_params)) {
    return false;
  }

  return true;
}

void InterfaceInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&alternates, handles);
}

void InterfaceInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&alternates, handles);
}

InterfaceInfo_Data::InterfaceInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
ConfigurationInfo_Data* ConfigurationInfo_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ConfigurationInfo_Data))) ConfigurationInfo_Data();
}

// static
bool ConfigurationInfo_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ConfigurationInfo_Data* object = static_cast<const ConfigurationInfo_Data*>(data);

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

  const mojo::internal::ArrayValidateParams configuration_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->configuration_name, bounds_checker,
                                     &configuration_name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->interfaces, "null interfaces field in ConfigurationInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams interfaces_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->interfaces, bounds_checker,
                                     &interfaces_validate_params)) {
    return false;
  }

  return true;
}

void ConfigurationInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&configuration_name, handles);
  mojo::internal::Encode(&interfaces, handles);
}

void ConfigurationInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&configuration_name, handles);
  mojo::internal::Decode(&interfaces, handles);
}

ConfigurationInfo_Data::ConfigurationInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
WebUsbFunctionSubset_Data* WebUsbFunctionSubset_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebUsbFunctionSubset_Data))) WebUsbFunctionSubset_Data();
}

// static
bool WebUsbFunctionSubset_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebUsbFunctionSubset_Data* object = static_cast<const WebUsbFunctionSubset_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->origins, "null origins field in WebUsbFunctionSubset struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams origins_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateArray(object->origins, bounds_checker,
                                     &origins_validate_params)) {
    return false;
  }

  return true;
}

void WebUsbFunctionSubset_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&origins, handles);
}

void WebUsbFunctionSubset_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&origins, handles);
}

WebUsbFunctionSubset_Data::WebUsbFunctionSubset_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
WebUsbConfigurationSubset_Data* WebUsbConfigurationSubset_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebUsbConfigurationSubset_Data))) WebUsbConfigurationSubset_Data();
}

// static
bool WebUsbConfigurationSubset_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebUsbConfigurationSubset_Data* object = static_cast<const WebUsbConfigurationSubset_Data*>(data);

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
          object->origins, "null origins field in WebUsbConfigurationSubset struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams origins_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateArray(object->origins, bounds_checker,
                                     &origins_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->functions, "null functions field in WebUsbConfigurationSubset struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams functions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->functions, bounds_checker,
                                     &functions_validate_params)) {
    return false;
  }

  return true;
}

void WebUsbConfigurationSubset_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&origins, handles);
  mojo::internal::Encode(&functions, handles);
}

void WebUsbConfigurationSubset_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&origins, handles);
  mojo::internal::Decode(&functions, handles);
}

WebUsbConfigurationSubset_Data::WebUsbConfigurationSubset_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
WebUsbDescriptorSet_Data* WebUsbDescriptorSet_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebUsbDescriptorSet_Data))) WebUsbDescriptorSet_Data();
}

// static
bool WebUsbDescriptorSet_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebUsbDescriptorSet_Data* object = static_cast<const WebUsbDescriptorSet_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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
          object->origins, "null origins field in WebUsbDescriptorSet struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams origins_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateArray(object->origins, bounds_checker,
                                     &origins_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->configurations, "null configurations field in WebUsbDescriptorSet struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams configurations_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->configurations, bounds_checker,
                                     &configurations_validate_params)) {
    return false;
  }

  return true;
}

void WebUsbDescriptorSet_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&origins, handles);
  mojo::internal::Encode(&configurations, handles);
}

void WebUsbDescriptorSet_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&origins, handles);
  mojo::internal::Decode(&configurations, handles);
}

WebUsbDescriptorSet_Data::WebUsbDescriptorSet_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

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
  } kVersionSizes[] = {{ 0, 72 }};

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
          object->guid, "null guid field in DeviceInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams guid_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->guid, bounds_checker,
                                     &guid_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams manufacturer_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->manufacturer_name, bounds_checker,
                                     &manufacturer_name_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams product_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->product_name, bounds_checker,
                                     &product_name_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams serial_number_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->serial_number, bounds_checker,
                                     &serial_number_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->configurations, "null configurations field in DeviceInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams configurations_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->configurations, bounds_checker,
                                     &configurations_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->webusb_allowed_origins, bounds_checker))
    return false;

  return true;
}

void DeviceInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&guid, handles);
  mojo::internal::Encode(&manufacturer_name, handles);
  mojo::internal::Encode(&product_name, handles);
  mojo::internal::Encode(&serial_number, handles);
  mojo::internal::Encode(&configurations, handles);
  mojo::internal::Encode(&webusb_allowed_origins, handles);
}

void DeviceInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&guid, handles);
  mojo::internal::Decode(&manufacturer_name, handles);
  mojo::internal::Decode(&product_name, handles);
  mojo::internal::Decode(&serial_number, handles);
  mojo::internal::Decode(&configurations, handles);
  mojo::internal::Decode(&webusb_allowed_origins, handles);
}

DeviceInfo_Data::DeviceInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
ControlTransferParams_Data* ControlTransferParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ControlTransferParams_Data))) ControlTransferParams_Data();
}

// static
bool ControlTransferParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ControlTransferParams_Data* object = static_cast<const ControlTransferParams_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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

  if (!mojo::internal::ValidateEnum(object->type))
    return false;

  if (!mojo::internal::ValidateEnum(object->recipient))
    return false;

  return true;
}

void ControlTransferParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ControlTransferParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ControlTransferParams_Data::ControlTransferParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
IsochronousPacket_Data* IsochronousPacket_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(IsochronousPacket_Data))) IsochronousPacket_Data();
}

// static
bool IsochronousPacket_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IsochronousPacket_Data* object = static_cast<const IsochronousPacket_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 24 }};

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

  if (!mojo::internal::ValidateEnum(object->status))
    return false;

  return true;
}

void IsochronousPacket_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void IsochronousPacket_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

IsochronousPacket_Data::IsochronousPacket_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
EndpointInfoPtr EndpointInfo::New() {
  EndpointInfoPtr rv;
  mojo::internal::StructHelper<EndpointInfo>::Initialize(&rv);
  return rv;
}

EndpointInfo::EndpointInfo()
    : endpoint_number(),
      direction(),
      type(),
      packet_size() {
}

EndpointInfo::~EndpointInfo() {
}


EndpointInfoPtr EndpointInfo::Clone() const {
  EndpointInfoPtr rv(New());
  rv->endpoint_number = endpoint_number;
  rv->direction = direction;
  rv->type = type;
  rv->packet_size = packet_size;
  return rv;
}


bool EndpointInfo::Equals(const EndpointInfo& other) const {
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->endpoint_number, other.endpoint_number))
    return false;
  if (!mojo::internal::ValueTraits<TransferDirection>::Equals(this->direction, other.direction))
    return false;
  if (!mojo::internal::ValueTraits<EndpointType>::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->packet_size, other.packet_size))
    return false;
  return true;
}// static
AlternateInterfaceInfoPtr AlternateInterfaceInfo::New() {
  AlternateInterfaceInfoPtr rv;
  mojo::internal::StructHelper<AlternateInterfaceInfo>::Initialize(&rv);
  return rv;
}

AlternateInterfaceInfo::AlternateInterfaceInfo()
    : alternate_setting(),
      class_code(),
      subclass_code(),
      protocol_code(),
      interface_name(),
      endpoints() {
}

AlternateInterfaceInfo::~AlternateInterfaceInfo() {
}


AlternateInterfaceInfoPtr AlternateInterfaceInfo::Clone() const {
  AlternateInterfaceInfoPtr rv(New());
  rv->alternate_setting = alternate_setting;
  rv->class_code = class_code;
  rv->subclass_code = subclass_code;
  rv->protocol_code = protocol_code;
  rv->interface_name = interface_name;
  rv->endpoints = endpoints.Clone();
  return rv;
}


bool AlternateInterfaceInfo::Equals(const AlternateInterfaceInfo& other) const {
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->alternate_setting, other.alternate_setting))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->class_code, other.class_code))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->subclass_code, other.subclass_code))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->protocol_code, other.protocol_code))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->interface_name, other.interface_name))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<EndpointInfoPtr>>::Equals(this->endpoints, other.endpoints))
    return false;
  return true;
}// static
InterfaceInfoPtr InterfaceInfo::New() {
  InterfaceInfoPtr rv;
  mojo::internal::StructHelper<InterfaceInfo>::Initialize(&rv);
  return rv;
}

InterfaceInfo::InterfaceInfo()
    : interface_number(),
      alternates() {
}

InterfaceInfo::~InterfaceInfo() {
}


InterfaceInfoPtr InterfaceInfo::Clone() const {
  InterfaceInfoPtr rv(New());
  rv->interface_number = interface_number;
  rv->alternates = alternates.Clone();
  return rv;
}


bool InterfaceInfo::Equals(const InterfaceInfo& other) const {
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->interface_number, other.interface_number))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<AlternateInterfaceInfoPtr>>::Equals(this->alternates, other.alternates))
    return false;
  return true;
}// static
ConfigurationInfoPtr ConfigurationInfo::New() {
  ConfigurationInfoPtr rv;
  mojo::internal::StructHelper<ConfigurationInfo>::Initialize(&rv);
  return rv;
}

ConfigurationInfo::ConfigurationInfo()
    : configuration_value(),
      configuration_name(),
      interfaces() {
}

ConfigurationInfo::~ConfigurationInfo() {
}


ConfigurationInfoPtr ConfigurationInfo::Clone() const {
  ConfigurationInfoPtr rv(New());
  rv->configuration_value = configuration_value;
  rv->configuration_name = configuration_name;
  rv->interfaces = interfaces.Clone();
  return rv;
}


bool ConfigurationInfo::Equals(const ConfigurationInfo& other) const {
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->configuration_value, other.configuration_value))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->configuration_name, other.configuration_name))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<InterfaceInfoPtr>>::Equals(this->interfaces, other.interfaces))
    return false;
  return true;
}// static
WebUsbFunctionSubsetPtr WebUsbFunctionSubset::New() {
  WebUsbFunctionSubsetPtr rv;
  mojo::internal::StructHelper<WebUsbFunctionSubset>::Initialize(&rv);
  return rv;
}

WebUsbFunctionSubset::WebUsbFunctionSubset()
    : first_interface(),
      origins() {
}

WebUsbFunctionSubset::~WebUsbFunctionSubset() {
}


WebUsbFunctionSubsetPtr WebUsbFunctionSubset::Clone() const {
  WebUsbFunctionSubsetPtr rv(New());
  rv->first_interface = first_interface;
  rv->origins = origins.Clone();
  return rv;
}


bool WebUsbFunctionSubset::Equals(const WebUsbFunctionSubset& other) const {
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->first_interface, other.first_interface))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<mojo::String>>::Equals(this->origins, other.origins))
    return false;
  return true;
}// static
WebUsbConfigurationSubsetPtr WebUsbConfigurationSubset::New() {
  WebUsbConfigurationSubsetPtr rv;
  mojo::internal::StructHelper<WebUsbConfigurationSubset>::Initialize(&rv);
  return rv;
}

WebUsbConfigurationSubset::WebUsbConfigurationSubset()
    : configuration_value(),
      origins(),
      functions() {
}

WebUsbConfigurationSubset::~WebUsbConfigurationSubset() {
}


WebUsbConfigurationSubsetPtr WebUsbConfigurationSubset::Clone() const {
  WebUsbConfigurationSubsetPtr rv(New());
  rv->configuration_value = configuration_value;
  rv->origins = origins.Clone();
  rv->functions = functions.Clone();
  return rv;
}


bool WebUsbConfigurationSubset::Equals(const WebUsbConfigurationSubset& other) const {
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->configuration_value, other.configuration_value))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<mojo::String>>::Equals(this->origins, other.origins))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<WebUsbFunctionSubsetPtr>>::Equals(this->functions, other.functions))
    return false;
  return true;
}// static
WebUsbDescriptorSetPtr WebUsbDescriptorSet::New() {
  WebUsbDescriptorSetPtr rv;
  mojo::internal::StructHelper<WebUsbDescriptorSet>::Initialize(&rv);
  return rv;
}

WebUsbDescriptorSet::WebUsbDescriptorSet()
    : origins(),
      configurations() {
}

WebUsbDescriptorSet::~WebUsbDescriptorSet() {
}


WebUsbDescriptorSetPtr WebUsbDescriptorSet::Clone() const {
  WebUsbDescriptorSetPtr rv(New());
  rv->origins = origins.Clone();
  rv->configurations = configurations.Clone();
  return rv;
}


bool WebUsbDescriptorSet::Equals(const WebUsbDescriptorSet& other) const {
  if (!mojo::internal::ValueTraits<mojo::Array<mojo::String>>::Equals(this->origins, other.origins))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<WebUsbConfigurationSubsetPtr>>::Equals(this->configurations, other.configurations))
    return false;
  return true;
}// static
DeviceInfoPtr DeviceInfo::New() {
  DeviceInfoPtr rv;
  mojo::internal::StructHelper<DeviceInfo>::Initialize(&rv);
  return rv;
}

DeviceInfo::DeviceInfo()
    : guid(),
      usb_version_major(),
      usb_version_minor(),
      usb_version_subminor(),
      class_code(),
      subclass_code(),
      protocol_code(),
      vendor_id(),
      product_id(),
      device_version_major(),
      device_version_minor(),
      device_version_subminor(),
      manufacturer_name(),
      product_name(),
      serial_number(),
      configurations(),
      webusb_allowed_origins() {
}

DeviceInfo::~DeviceInfo() {
}


DeviceInfoPtr DeviceInfo::Clone() const {
  DeviceInfoPtr rv(New());
  rv->guid = guid;
  rv->usb_version_major = usb_version_major;
  rv->usb_version_minor = usb_version_minor;
  rv->usb_version_subminor = usb_version_subminor;
  rv->class_code = class_code;
  rv->subclass_code = subclass_code;
  rv->protocol_code = protocol_code;
  rv->vendor_id = vendor_id;
  rv->product_id = product_id;
  rv->device_version_major = device_version_major;
  rv->device_version_minor = device_version_minor;
  rv->device_version_subminor = device_version_subminor;
  rv->manufacturer_name = manufacturer_name;
  rv->product_name = product_name;
  rv->serial_number = serial_number;
  rv->configurations = configurations.Clone();
  rv->webusb_allowed_origins = webusb_allowed_origins.Clone();
  return rv;
}


bool DeviceInfo::Equals(const DeviceInfo& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->guid, other.guid))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->usb_version_major, other.usb_version_major))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->usb_version_minor, other.usb_version_minor))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->usb_version_subminor, other.usb_version_subminor))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->class_code, other.class_code))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->subclass_code, other.subclass_code))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->protocol_code, other.protocol_code))
    return false;
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->vendor_id, other.vendor_id))
    return false;
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->product_id, other.product_id))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->device_version_major, other.device_version_major))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->device_version_minor, other.device_version_minor))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->device_version_subminor, other.device_version_subminor))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->manufacturer_name, other.manufacturer_name))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->product_name, other.product_name))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->serial_number, other.serial_number))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<ConfigurationInfoPtr>>::Equals(this->configurations, other.configurations))
    return false;
  if (!mojo::internal::ValueTraits<WebUsbDescriptorSetPtr>::Equals(this->webusb_allowed_origins, other.webusb_allowed_origins))
    return false;
  return true;
}// static
ControlTransferParamsPtr ControlTransferParams::New() {
  ControlTransferParamsPtr rv;
  mojo::internal::StructHelper<ControlTransferParams>::Initialize(&rv);
  return rv;
}

ControlTransferParams::ControlTransferParams()
    : type(),
      recipient(),
      request(),
      value(),
      index() {
}

ControlTransferParams::~ControlTransferParams() {
}


ControlTransferParamsPtr ControlTransferParams::Clone() const {
  ControlTransferParamsPtr rv(New());
  rv->type = type;
  rv->recipient = recipient;
  rv->request = request;
  rv->value = value;
  rv->index = index;
  return rv;
}


bool ControlTransferParams::Equals(const ControlTransferParams& other) const {
  if (!mojo::internal::ValueTraits<ControlTransferType>::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::ValueTraits<ControlTransferRecipient>::Equals(this->recipient, other.recipient))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->request, other.request))
    return false;
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->value, other.value))
    return false;
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->index, other.index))
    return false;
  return true;
}// static
IsochronousPacketPtr IsochronousPacket::New() {
  IsochronousPacketPtr rv;
  mojo::internal::StructHelper<IsochronousPacket>::Initialize(&rv);
  return rv;
}

IsochronousPacket::IsochronousPacket()
    : length(),
      transferred_length(),
      status() {
}

IsochronousPacket::~IsochronousPacket() {
}


IsochronousPacketPtr IsochronousPacket::Clone() const {
  IsochronousPacketPtr rv(New());
  rv->length = length;
  rv->transferred_length = transferred_length;
  rv->status = status;
  return rv;
}


bool IsochronousPacket::Equals(const IsochronousPacket& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->length, other.length))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->transferred_length, other.transferred_length))
    return false;
  if (!mojo::internal::ValueTraits<TransferStatus>::Equals(this->status, other.status))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char Device::Name_[] = "device::usb::Device";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t Device::Version_;
class Device_GetDeviceInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_GetDeviceInfo_ForwardToCallback(
      const Device::GetDeviceInfoCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::GetDeviceInfoCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_GetDeviceInfo_ForwardToCallback);
};
bool Device_GetDeviceInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_GetDeviceInfo_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_GetDeviceInfo_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  DeviceInfoPtr p_info{};
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
class Device_GetConfiguration_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_GetConfiguration_ForwardToCallback(
      const Device::GetConfigurationCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::GetConfigurationCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_GetConfiguration_ForwardToCallback);
};
bool Device_GetConfiguration_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_GetConfiguration_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_GetConfiguration_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  uint8_t p_value{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_value = params->value;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_value);
  return true;
}
class Device_Open_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_Open_ForwardToCallback(
      const Device::OpenCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::OpenCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_Open_ForwardToCallback);
};
bool Device_Open_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_Open_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_Open_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  OpenDeviceError p_error{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_error = static_cast<OpenDeviceError>(params->error.value);
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_error);
  return true;
}
class Device_Close_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_Close_ForwardToCallback(
      const Device::CloseCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::CloseCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_Close_ForwardToCallback);
};
bool Device_Close_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_Close_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_Close_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
  } while (false);
  if (!success)
    return false;
  callback_.Run();
  return true;
}
class Device_SetConfiguration_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_SetConfiguration_ForwardToCallback(
      const Device::SetConfigurationCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::SetConfigurationCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_SetConfiguration_ForwardToCallback);
};
bool Device_SetConfiguration_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_SetConfiguration_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_SetConfiguration_ResponseParams_Data*>(
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
class Device_ClaimInterface_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_ClaimInterface_ForwardToCallback(
      const Device::ClaimInterfaceCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::ClaimInterfaceCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_ClaimInterface_ForwardToCallback);
};
bool Device_ClaimInterface_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_ClaimInterface_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_ClaimInterface_ResponseParams_Data*>(
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
class Device_ReleaseInterface_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_ReleaseInterface_ForwardToCallback(
      const Device::ReleaseInterfaceCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::ReleaseInterfaceCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_ReleaseInterface_ForwardToCallback);
};
bool Device_ReleaseInterface_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_ReleaseInterface_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_ReleaseInterface_ResponseParams_Data*>(
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
class Device_SetInterfaceAlternateSetting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_SetInterfaceAlternateSetting_ForwardToCallback(
      const Device::SetInterfaceAlternateSettingCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::SetInterfaceAlternateSettingCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_SetInterfaceAlternateSetting_ForwardToCallback);
};
bool Device_SetInterfaceAlternateSetting_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_SetInterfaceAlternateSetting_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_SetInterfaceAlternateSetting_ResponseParams_Data*>(
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
class Device_Reset_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_Reset_ForwardToCallback(
      const Device::ResetCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::ResetCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_Reset_ForwardToCallback);
};
bool Device_Reset_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_Reset_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_Reset_ResponseParams_Data*>(
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
class Device_ClearHalt_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_ClearHalt_ForwardToCallback(
      const Device::ClearHaltCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::ClearHaltCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_ClearHalt_ForwardToCallback);
};
bool Device_ClearHalt_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_ClearHalt_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_ClearHalt_ResponseParams_Data*>(
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
class Device_ControlTransferIn_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_ControlTransferIn_ForwardToCallback(
      const Device::ControlTransferInCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::ControlTransferInCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_ControlTransferIn_ForwardToCallback);
};
bool Device_ControlTransferIn_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_ControlTransferIn_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_ControlTransferIn_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  TransferStatus p_status{};
  mojo::Array<uint8_t> p_data{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_status = static_cast<TransferStatus>(params->status.value);
    if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_status, std::move(p_data));
  return true;
}
class Device_ControlTransferOut_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_ControlTransferOut_ForwardToCallback(
      const Device::ControlTransferOutCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::ControlTransferOutCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_ControlTransferOut_ForwardToCallback);
};
bool Device_ControlTransferOut_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_ControlTransferOut_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_ControlTransferOut_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  TransferStatus p_status{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_status = static_cast<TransferStatus>(params->status.value);
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_status);
  return true;
}
class Device_GenericTransferIn_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_GenericTransferIn_ForwardToCallback(
      const Device::GenericTransferInCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::GenericTransferInCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_GenericTransferIn_ForwardToCallback);
};
bool Device_GenericTransferIn_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_GenericTransferIn_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_GenericTransferIn_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  TransferStatus p_status{};
  mojo::Array<uint8_t> p_data{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_status = static_cast<TransferStatus>(params->status.value);
    if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_status, std::move(p_data));
  return true;
}
class Device_GenericTransferOut_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_GenericTransferOut_ForwardToCallback(
      const Device::GenericTransferOutCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::GenericTransferOutCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_GenericTransferOut_ForwardToCallback);
};
bool Device_GenericTransferOut_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_GenericTransferOut_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_GenericTransferOut_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  TransferStatus p_status{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_status = static_cast<TransferStatus>(params->status.value);
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_status);
  return true;
}
class Device_IsochronousTransferIn_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_IsochronousTransferIn_ForwardToCallback(
      const Device::IsochronousTransferInCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::IsochronousTransferInCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_IsochronousTransferIn_ForwardToCallback);
};
bool Device_IsochronousTransferIn_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_IsochronousTransferIn_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_IsochronousTransferIn_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::Array<uint8_t> p_data{};
  mojo::Array<IsochronousPacketPtr> p_packets{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
      success = false;
    if (!Deserialize_(params->packets.ptr, &p_packets, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_data), std::move(p_packets));
  return true;
}
class Device_IsochronousTransferOut_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Device_IsochronousTransferOut_ForwardToCallback(
      const Device::IsochronousTransferOutCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Device::IsochronousTransferOutCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_IsochronousTransferOut_ForwardToCallback);
};
bool Device_IsochronousTransferOut_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Device_IsochronousTransferOut_ResponseParams_Data* params =
      reinterpret_cast<internal::Device_IsochronousTransferOut_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::Array<IsochronousPacketPtr> p_packets{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->packets.ptr, &p_packets, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_packets));
  return true;
}

DeviceProxy::DeviceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void DeviceProxy::GetDeviceInfo(
    const GetDeviceInfoCallback& callback) {
  size_t size = sizeof(internal::Device_GetDeviceInfo_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_GetDeviceInfo_Name, size);

  internal::Device_GetDeviceInfo_Params_Data* params =
      internal::Device_GetDeviceInfo_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_GetDeviceInfo_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::GetConfiguration(
    const GetConfigurationCallback& callback) {
  size_t size = sizeof(internal::Device_GetConfiguration_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_GetConfiguration_Name, size);

  internal::Device_GetConfiguration_Params_Data* params =
      internal::Device_GetConfiguration_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_GetConfiguration_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::Open(
    const OpenCallback& callback) {
  size_t size = sizeof(internal::Device_Open_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_Open_Name, size);

  internal::Device_Open_Params_Data* params =
      internal::Device_Open_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_Open_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::Close(
    const CloseCallback& callback) {
  size_t size = sizeof(internal::Device_Close_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_Close_Name, size);

  internal::Device_Close_Params_Data* params =
      internal::Device_Close_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_Close_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::SetConfiguration(
    uint8_t in_value, const SetConfigurationCallback& callback) {
  size_t size = sizeof(internal::Device_SetConfiguration_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_SetConfiguration_Name, size);

  internal::Device_SetConfiguration_Params_Data* params =
      internal::Device_SetConfiguration_Params_Data::New(builder.buffer());
  params->value = in_value;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_SetConfiguration_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::ClaimInterface(
    uint8_t in_interface_number, const ClaimInterfaceCallback& callback) {
  size_t size = sizeof(internal::Device_ClaimInterface_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_ClaimInterface_Name, size);

  internal::Device_ClaimInterface_Params_Data* params =
      internal::Device_ClaimInterface_Params_Data::New(builder.buffer());
  params->interface_number = in_interface_number;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_ClaimInterface_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::ReleaseInterface(
    uint8_t in_interface_number, const ReleaseInterfaceCallback& callback) {
  size_t size = sizeof(internal::Device_ReleaseInterface_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_ReleaseInterface_Name, size);

  internal::Device_ReleaseInterface_Params_Data* params =
      internal::Device_ReleaseInterface_Params_Data::New(builder.buffer());
  params->interface_number = in_interface_number;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_ReleaseInterface_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::SetInterfaceAlternateSetting(
    uint8_t in_interface_number, uint8_t in_alternate_setting, const SetInterfaceAlternateSettingCallback& callback) {
  size_t size = sizeof(internal::Device_SetInterfaceAlternateSetting_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_SetInterfaceAlternateSetting_Name, size);

  internal::Device_SetInterfaceAlternateSetting_Params_Data* params =
      internal::Device_SetInterfaceAlternateSetting_Params_Data::New(builder.buffer());
  params->interface_number = in_interface_number;
  params->alternate_setting = in_alternate_setting;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_SetInterfaceAlternateSetting_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::Reset(
    const ResetCallback& callback) {
  size_t size = sizeof(internal::Device_Reset_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_Reset_Name, size);

  internal::Device_Reset_Params_Data* params =
      internal::Device_Reset_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_Reset_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::ClearHalt(
    uint8_t in_endpoint, const ClearHaltCallback& callback) {
  size_t size = sizeof(internal::Device_ClearHalt_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_ClearHalt_Name, size);

  internal::Device_ClearHalt_Params_Data* params =
      internal::Device_ClearHalt_Params_Data::New(builder.buffer());
  params->endpoint = in_endpoint;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_ClearHalt_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::ControlTransferIn(
    ControlTransferParamsPtr in_params, uint32_t in_length, uint32_t in_timeout, const ControlTransferInCallback& callback) {
  size_t size = sizeof(internal::Device_ControlTransferIn_Params_Data);
  size += GetSerializedSize_(in_params);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_ControlTransferIn_Name, size);

  internal::Device_ControlTransferIn_Params_Data* params =
      internal::Device_ControlTransferIn_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_params), builder.buffer(), &params->params.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->params.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in Device.ControlTransferIn request");
  params->length = in_length;
  params->timeout = in_timeout;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_ControlTransferIn_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::ControlTransferOut(
    ControlTransferParamsPtr in_params, mojo::Array<uint8_t> in_data, uint32_t in_timeout, const ControlTransferOutCallback& callback) {
  size_t size = sizeof(internal::Device_ControlTransferOut_Params_Data);
  size += GetSerializedSize_(in_params);
  size += GetSerializedSize_(in_data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_ControlTransferOut_Name, size);

  internal::Device_ControlTransferOut_Params_Data* params =
      internal::Device_ControlTransferOut_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_params), builder.buffer(), &params->params.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->params.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in Device.ControlTransferOut request");
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_data), builder.buffer(),
      &params->data.ptr, &data_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->data.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in Device.ControlTransferOut request");
  params->timeout = in_timeout;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_ControlTransferOut_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::GenericTransferIn(
    uint8_t in_endpoint_number, uint32_t in_length, uint32_t in_timeout, const GenericTransferInCallback& callback) {
  size_t size = sizeof(internal::Device_GenericTransferIn_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_GenericTransferIn_Name, size);

  internal::Device_GenericTransferIn_Params_Data* params =
      internal::Device_GenericTransferIn_Params_Data::New(builder.buffer());
  params->endpoint_number = in_endpoint_number;
  params->length = in_length;
  params->timeout = in_timeout;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_GenericTransferIn_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::GenericTransferOut(
    uint8_t in_endpoint_number, mojo::Array<uint8_t> in_data, uint32_t in_timeout, const GenericTransferOutCallback& callback) {
  size_t size = sizeof(internal::Device_GenericTransferOut_Params_Data);
  size += GetSerializedSize_(in_data);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_GenericTransferOut_Name, size);

  internal::Device_GenericTransferOut_Params_Data* params =
      internal::Device_GenericTransferOut_Params_Data::New(builder.buffer());
  params->endpoint_number = in_endpoint_number;
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_data), builder.buffer(),
      &params->data.ptr, &data_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->data.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in Device.GenericTransferOut request");
  params->timeout = in_timeout;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_GenericTransferOut_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::IsochronousTransferIn(
    uint8_t in_endpoint_number, mojo::Array<uint32_t> in_packet_lengths, uint32_t in_timeout, const IsochronousTransferInCallback& callback) {
  size_t size = sizeof(internal::Device_IsochronousTransferIn_Params_Data);
  size += GetSerializedSize_(in_packet_lengths);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_IsochronousTransferIn_Name, size);

  internal::Device_IsochronousTransferIn_Params_Data* params =
      internal::Device_IsochronousTransferIn_Params_Data::New(builder.buffer());
  params->endpoint_number = in_endpoint_number;
  const mojo::internal::ArrayValidateParams packet_lengths_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_packet_lengths), builder.buffer(),
      &params->packet_lengths.ptr, &packet_lengths_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->packet_lengths.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null packet_lengths in Device.IsochronousTransferIn request");
  params->timeout = in_timeout;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_IsochronousTransferIn_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceProxy::IsochronousTransferOut(
    uint8_t in_endpoint_number, mojo::Array<uint8_t> in_data, mojo::Array<uint32_t> in_packet_lengths, uint32_t in_timeout, const IsochronousTransferOutCallback& callback) {
  size_t size = sizeof(internal::Device_IsochronousTransferOut_Params_Data);
  size += GetSerializedSize_(in_data);
  size += GetSerializedSize_(in_packet_lengths);
  mojo::internal::RequestMessageBuilder builder(internal::kDevice_IsochronousTransferOut_Name, size);

  internal::Device_IsochronousTransferOut_Params_Data* params =
      internal::Device_IsochronousTransferOut_Params_Data::New(builder.buffer());
  params->endpoint_number = in_endpoint_number;
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_data), builder.buffer(),
      &params->data.ptr, &data_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->data.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in Device.IsochronousTransferOut request");
  const mojo::internal::ArrayValidateParams packet_lengths_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_packet_lengths), builder.buffer(),
      &params->packet_lengths.ptr, &packet_lengths_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->packet_lengths.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null packet_lengths in Device.IsochronousTransferOut request");
  params->timeout = in_timeout;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Device_IsochronousTransferOut_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class Device_GetDeviceInfo_ProxyToResponder
    : public Device::GetDeviceInfoCallback::Runnable {
 public:
  ~Device_GetDeviceInfo_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::GetDeviceInfo(callback) "
        "was never run.";
  }

  Device_GetDeviceInfo_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(DeviceInfoPtr in_info) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_GetDeviceInfo_ProxyToResponder);
};
void Device_GetDeviceInfo_ProxyToResponder::Run(
    DeviceInfoPtr in_info) const {
  size_t size = sizeof(internal::Device_GetDeviceInfo_ResponseParams_Data);
  size += GetSerializedSize_(in_info);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_GetDeviceInfo_Name, size, request_id_);
  internal::Device_GetDeviceInfo_ResponseParams_Data* params =
      internal::Device_GetDeviceInfo_ResponseParams_Data::New(builder.buffer());
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
class Device_GetConfiguration_ProxyToResponder
    : public Device::GetConfigurationCallback::Runnable {
 public:
  ~Device_GetConfiguration_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::GetConfiguration(callback) "
        "was never run.";
  }

  Device_GetConfiguration_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(uint8_t in_value) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_GetConfiguration_ProxyToResponder);
};
void Device_GetConfiguration_ProxyToResponder::Run(
    uint8_t in_value) const {
  size_t size = sizeof(internal::Device_GetConfiguration_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_GetConfiguration_Name, size, request_id_);
  internal::Device_GetConfiguration_ResponseParams_Data* params =
      internal::Device_GetConfiguration_ResponseParams_Data::New(builder.buffer());
  params->value = in_value;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Device_Open_ProxyToResponder
    : public Device::OpenCallback::Runnable {
 public:
  ~Device_Open_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::Open(callback) "
        "was never run.";
  }

  Device_Open_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(OpenDeviceError in_error) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_Open_ProxyToResponder);
};
void Device_Open_ProxyToResponder::Run(
    OpenDeviceError in_error) const {
  size_t size = sizeof(internal::Device_Open_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_Open_Name, size, request_id_);
  internal::Device_Open_ResponseParams_Data* params =
      internal::Device_Open_ResponseParams_Data::New(builder.buffer());
  params->error.value = static_cast<int32_t>(in_error);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Device_Close_ProxyToResponder
    : public Device::CloseCallback::Runnable {
 public:
  ~Device_Close_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::Close(callback) "
        "was never run.";
  }

  Device_Close_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run() const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_Close_ProxyToResponder);
};
void Device_Close_ProxyToResponder::Run(
    ) const {
  size_t size = sizeof(internal::Device_Close_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_Close_Name, size, request_id_);
  internal::Device_Close_ResponseParams_Data* params =
      internal::Device_Close_ResponseParams_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Device_SetConfiguration_ProxyToResponder
    : public Device::SetConfigurationCallback::Runnable {
 public:
  ~Device_SetConfiguration_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::SetConfiguration(p_value, callback) "
        "was never run.";
  }

  Device_SetConfiguration_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_SetConfiguration_ProxyToResponder);
};
void Device_SetConfiguration_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::Device_SetConfiguration_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_SetConfiguration_Name, size, request_id_);
  internal::Device_SetConfiguration_ResponseParams_Data* params =
      internal::Device_SetConfiguration_ResponseParams_Data::New(builder.buffer());
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
class Device_ClaimInterface_ProxyToResponder
    : public Device::ClaimInterfaceCallback::Runnable {
 public:
  ~Device_ClaimInterface_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::ClaimInterface(p_interface_number, callback) "
        "was never run.";
  }

  Device_ClaimInterface_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_ClaimInterface_ProxyToResponder);
};
void Device_ClaimInterface_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::Device_ClaimInterface_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_ClaimInterface_Name, size, request_id_);
  internal::Device_ClaimInterface_ResponseParams_Data* params =
      internal::Device_ClaimInterface_ResponseParams_Data::New(builder.buffer());
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
class Device_ReleaseInterface_ProxyToResponder
    : public Device::ReleaseInterfaceCallback::Runnable {
 public:
  ~Device_ReleaseInterface_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::ReleaseInterface(p_interface_number, callback) "
        "was never run.";
  }

  Device_ReleaseInterface_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_ReleaseInterface_ProxyToResponder);
};
void Device_ReleaseInterface_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::Device_ReleaseInterface_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_ReleaseInterface_Name, size, request_id_);
  internal::Device_ReleaseInterface_ResponseParams_Data* params =
      internal::Device_ReleaseInterface_ResponseParams_Data::New(builder.buffer());
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
class Device_SetInterfaceAlternateSetting_ProxyToResponder
    : public Device::SetInterfaceAlternateSettingCallback::Runnable {
 public:
  ~Device_SetInterfaceAlternateSetting_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::SetInterfaceAlternateSetting(p_interface_number, p_alternate_setting, callback) "
        "was never run.";
  }

  Device_SetInterfaceAlternateSetting_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_SetInterfaceAlternateSetting_ProxyToResponder);
};
void Device_SetInterfaceAlternateSetting_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::Device_SetInterfaceAlternateSetting_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_SetInterfaceAlternateSetting_Name, size, request_id_);
  internal::Device_SetInterfaceAlternateSetting_ResponseParams_Data* params =
      internal::Device_SetInterfaceAlternateSetting_ResponseParams_Data::New(builder.buffer());
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
class Device_Reset_ProxyToResponder
    : public Device::ResetCallback::Runnable {
 public:
  ~Device_Reset_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::Reset(callback) "
        "was never run.";
  }

  Device_Reset_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_Reset_ProxyToResponder);
};
void Device_Reset_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::Device_Reset_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_Reset_Name, size, request_id_);
  internal::Device_Reset_ResponseParams_Data* params =
      internal::Device_Reset_ResponseParams_Data::New(builder.buffer());
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
class Device_ClearHalt_ProxyToResponder
    : public Device::ClearHaltCallback::Runnable {
 public:
  ~Device_ClearHalt_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::ClearHalt(p_endpoint, callback) "
        "was never run.";
  }

  Device_ClearHalt_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_ClearHalt_ProxyToResponder);
};
void Device_ClearHalt_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::Device_ClearHalt_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_ClearHalt_Name, size, request_id_);
  internal::Device_ClearHalt_ResponseParams_Data* params =
      internal::Device_ClearHalt_ResponseParams_Data::New(builder.buffer());
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
class Device_ControlTransferIn_ProxyToResponder
    : public Device::ControlTransferInCallback::Runnable {
 public:
  ~Device_ControlTransferIn_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::ControlTransferIn(std::move(p_params), p_length, p_timeout, callback) "
        "was never run.";
  }

  Device_ControlTransferIn_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(TransferStatus in_status, mojo::Array<uint8_t> in_data) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_ControlTransferIn_ProxyToResponder);
};
void Device_ControlTransferIn_ProxyToResponder::Run(
    TransferStatus in_status, mojo::Array<uint8_t> in_data) const {
  size_t size = sizeof(internal::Device_ControlTransferIn_ResponseParams_Data);
  size += GetSerializedSize_(in_data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_ControlTransferIn_Name, size, request_id_);
  internal::Device_ControlTransferIn_ResponseParams_Data* params =
      internal::Device_ControlTransferIn_ResponseParams_Data::New(builder.buffer());
  params->status.value = static_cast<int32_t>(in_status);
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_data), builder.buffer(),
      &params->data.ptr, &data_validate_params);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Device_ControlTransferOut_ProxyToResponder
    : public Device::ControlTransferOutCallback::Runnable {
 public:
  ~Device_ControlTransferOut_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::ControlTransferOut(std::move(p_params), std::move(p_data), p_timeout, callback) "
        "was never run.";
  }

  Device_ControlTransferOut_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(TransferStatus in_status) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_ControlTransferOut_ProxyToResponder);
};
void Device_ControlTransferOut_ProxyToResponder::Run(
    TransferStatus in_status) const {
  size_t size = sizeof(internal::Device_ControlTransferOut_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_ControlTransferOut_Name, size, request_id_);
  internal::Device_ControlTransferOut_ResponseParams_Data* params =
      internal::Device_ControlTransferOut_ResponseParams_Data::New(builder.buffer());
  params->status.value = static_cast<int32_t>(in_status);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Device_GenericTransferIn_ProxyToResponder
    : public Device::GenericTransferInCallback::Runnable {
 public:
  ~Device_GenericTransferIn_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::GenericTransferIn(p_endpoint_number, p_length, p_timeout, callback) "
        "was never run.";
  }

  Device_GenericTransferIn_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(TransferStatus in_status, mojo::Array<uint8_t> in_data) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_GenericTransferIn_ProxyToResponder);
};
void Device_GenericTransferIn_ProxyToResponder::Run(
    TransferStatus in_status, mojo::Array<uint8_t> in_data) const {
  size_t size = sizeof(internal::Device_GenericTransferIn_ResponseParams_Data);
  size += GetSerializedSize_(in_data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_GenericTransferIn_Name, size, request_id_);
  internal::Device_GenericTransferIn_ResponseParams_Data* params =
      internal::Device_GenericTransferIn_ResponseParams_Data::New(builder.buffer());
  params->status.value = static_cast<int32_t>(in_status);
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_data), builder.buffer(),
      &params->data.ptr, &data_validate_params);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Device_GenericTransferOut_ProxyToResponder
    : public Device::GenericTransferOutCallback::Runnable {
 public:
  ~Device_GenericTransferOut_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::GenericTransferOut(p_endpoint_number, std::move(p_data), p_timeout, callback) "
        "was never run.";
  }

  Device_GenericTransferOut_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(TransferStatus in_status) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_GenericTransferOut_ProxyToResponder);
};
void Device_GenericTransferOut_ProxyToResponder::Run(
    TransferStatus in_status) const {
  size_t size = sizeof(internal::Device_GenericTransferOut_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_GenericTransferOut_Name, size, request_id_);
  internal::Device_GenericTransferOut_ResponseParams_Data* params =
      internal::Device_GenericTransferOut_ResponseParams_Data::New(builder.buffer());
  params->status.value = static_cast<int32_t>(in_status);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Device_IsochronousTransferIn_ProxyToResponder
    : public Device::IsochronousTransferInCallback::Runnable {
 public:
  ~Device_IsochronousTransferIn_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::IsochronousTransferIn(p_endpoint_number, std::move(p_packet_lengths), p_timeout, callback) "
        "was never run.";
  }

  Device_IsochronousTransferIn_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::Array<uint8_t> in_data, mojo::Array<IsochronousPacketPtr> in_packets) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_IsochronousTransferIn_ProxyToResponder);
};
void Device_IsochronousTransferIn_ProxyToResponder::Run(
    mojo::Array<uint8_t> in_data, mojo::Array<IsochronousPacketPtr> in_packets) const {
  size_t size = sizeof(internal::Device_IsochronousTransferIn_ResponseParams_Data);
  size += GetSerializedSize_(in_data);
  size += GetSerializedSize_(in_packets);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_IsochronousTransferIn_Name, size, request_id_);
  internal::Device_IsochronousTransferIn_ResponseParams_Data* params =
      internal::Device_IsochronousTransferIn_ResponseParams_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_data), builder.buffer(),
      &params->data.ptr, &data_validate_params);
  const mojo::internal::ArrayValidateParams packets_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_packets), builder.buffer(),
      &params->packets.ptr, &packets_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->packets.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null packets in Device.IsochronousTransferIn response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class Device_IsochronousTransferOut_ProxyToResponder
    : public Device::IsochronousTransferOutCallback::Runnable {
 public:
  ~Device_IsochronousTransferOut_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Device::IsochronousTransferOut(p_endpoint_number, std::move(p_data), std::move(p_packet_lengths), p_timeout, callback) "
        "was never run.";
  }

  Device_IsochronousTransferOut_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::Array<IsochronousPacketPtr> in_packets) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Device_IsochronousTransferOut_ProxyToResponder);
};
void Device_IsochronousTransferOut_ProxyToResponder::Run(
    mojo::Array<IsochronousPacketPtr> in_packets) const {
  size_t size = sizeof(internal::Device_IsochronousTransferOut_ResponseParams_Data);
  size += GetSerializedSize_(in_packets);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDevice_IsochronousTransferOut_Name, size, request_id_);
  internal::Device_IsochronousTransferOut_ResponseParams_Data* params =
      internal::Device_IsochronousTransferOut_ResponseParams_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams packets_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_packets), builder.buffer(),
      &params->packets.ptr, &packets_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->packets.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null packets in Device.IsochronousTransferOut response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

DeviceStub::DeviceStub()
    : sink_(nullptr),
      control_message_handler_(Device::Version_) {
}

DeviceStub::~DeviceStub() {}

bool DeviceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDevice_GetDeviceInfo_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.GetDeviceInfo", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_GetConfiguration_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.GetConfiguration", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_Open_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.Open", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_Close_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.Close", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_SetConfiguration_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.SetConfiguration", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_ClaimInterface_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.ClaimInterface", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_ReleaseInterface_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.ReleaseInterface", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_SetInterfaceAlternateSetting_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.SetInterfaceAlternateSetting", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_Reset_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.Reset", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_ClearHalt_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.ClearHalt", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_ControlTransferIn_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.ControlTransferIn", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_ControlTransferOut_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.ControlTransferOut", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_GenericTransferIn_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.GenericTransferIn", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_GenericTransferOut_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.GenericTransferOut", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_IsochronousTransferIn_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.IsochronousTransferIn", __FILE__, __LINE__);
      break;
    }
    case internal::kDevice_IsochronousTransferOut_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.Device.IsochronousTransferOut", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool DeviceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDevice_GetDeviceInfo_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::GetDeviceInfo", __FILE__, __LINE__);
      internal::Device_GetDeviceInfo_Params_Data* params =
          reinterpret_cast<internal::Device_GetDeviceInfo_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      Device::GetDeviceInfoCallback::Runnable* runnable =
          new Device_GetDeviceInfo_ProxyToResponder(
              message->request_id(), responder);
      Device::GetDeviceInfoCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::GetDeviceInfo");
      sink_->GetDeviceInfo(callback);
      return true;
    }
    case internal::kDevice_GetConfiguration_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::GetConfiguration", __FILE__, __LINE__);
      internal::Device_GetConfiguration_Params_Data* params =
          reinterpret_cast<internal::Device_GetConfiguration_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      Device::GetConfigurationCallback::Runnable* runnable =
          new Device_GetConfiguration_ProxyToResponder(
              message->request_id(), responder);
      Device::GetConfigurationCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::GetConfiguration");
      sink_->GetConfiguration(callback);
      return true;
    }
    case internal::kDevice_Open_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::Open", __FILE__, __LINE__);
      internal::Device_Open_Params_Data* params =
          reinterpret_cast<internal::Device_Open_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      Device::OpenCallback::Runnable* runnable =
          new Device_Open_ProxyToResponder(
              message->request_id(), responder);
      Device::OpenCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::Open");
      sink_->Open(callback);
      return true;
    }
    case internal::kDevice_Close_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::Close", __FILE__, __LINE__);
      internal::Device_Close_Params_Data* params =
          reinterpret_cast<internal::Device_Close_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      Device::CloseCallback::Runnable* runnable =
          new Device_Close_ProxyToResponder(
              message->request_id(), responder);
      Device::CloseCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::Close");
      sink_->Close(callback);
      return true;
    }
    case internal::kDevice_SetConfiguration_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::SetConfiguration", __FILE__, __LINE__);
      internal::Device_SetConfiguration_Params_Data* params =
          reinterpret_cast<internal::Device_SetConfiguration_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint8_t p_value{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_value = params->value;
      } while (false);
      if (!success)
        return false;
      Device::SetConfigurationCallback::Runnable* runnable =
          new Device_SetConfiguration_ProxyToResponder(
              message->request_id(), responder);
      Device::SetConfigurationCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::SetConfiguration");
      sink_->SetConfiguration(p_value, callback);
      return true;
    }
    case internal::kDevice_ClaimInterface_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::ClaimInterface", __FILE__, __LINE__);
      internal::Device_ClaimInterface_Params_Data* params =
          reinterpret_cast<internal::Device_ClaimInterface_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint8_t p_interface_number{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_interface_number = params->interface_number;
      } while (false);
      if (!success)
        return false;
      Device::ClaimInterfaceCallback::Runnable* runnable =
          new Device_ClaimInterface_ProxyToResponder(
              message->request_id(), responder);
      Device::ClaimInterfaceCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::ClaimInterface");
      sink_->ClaimInterface(p_interface_number, callback);
      return true;
    }
    case internal::kDevice_ReleaseInterface_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::ReleaseInterface", __FILE__, __LINE__);
      internal::Device_ReleaseInterface_Params_Data* params =
          reinterpret_cast<internal::Device_ReleaseInterface_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint8_t p_interface_number{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_interface_number = params->interface_number;
      } while (false);
      if (!success)
        return false;
      Device::ReleaseInterfaceCallback::Runnable* runnable =
          new Device_ReleaseInterface_ProxyToResponder(
              message->request_id(), responder);
      Device::ReleaseInterfaceCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::ReleaseInterface");
      sink_->ReleaseInterface(p_interface_number, callback);
      return true;
    }
    case internal::kDevice_SetInterfaceAlternateSetting_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::SetInterfaceAlternateSetting", __FILE__, __LINE__);
      internal::Device_SetInterfaceAlternateSetting_Params_Data* params =
          reinterpret_cast<internal::Device_SetInterfaceAlternateSetting_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint8_t p_interface_number{};
      uint8_t p_alternate_setting{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_interface_number = params->interface_number;
        p_alternate_setting = params->alternate_setting;
      } while (false);
      if (!success)
        return false;
      Device::SetInterfaceAlternateSettingCallback::Runnable* runnable =
          new Device_SetInterfaceAlternateSetting_ProxyToResponder(
              message->request_id(), responder);
      Device::SetInterfaceAlternateSettingCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::SetInterfaceAlternateSetting");
      sink_->SetInterfaceAlternateSetting(p_interface_number, p_alternate_setting, callback);
      return true;
    }
    case internal::kDevice_Reset_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::Reset", __FILE__, __LINE__);
      internal::Device_Reset_Params_Data* params =
          reinterpret_cast<internal::Device_Reset_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      Device::ResetCallback::Runnable* runnable =
          new Device_Reset_ProxyToResponder(
              message->request_id(), responder);
      Device::ResetCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::Reset");
      sink_->Reset(callback);
      return true;
    }
    case internal::kDevice_ClearHalt_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::ClearHalt", __FILE__, __LINE__);
      internal::Device_ClearHalt_Params_Data* params =
          reinterpret_cast<internal::Device_ClearHalt_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint8_t p_endpoint{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_endpoint = params->endpoint;
      } while (false);
      if (!success)
        return false;
      Device::ClearHaltCallback::Runnable* runnable =
          new Device_ClearHalt_ProxyToResponder(
              message->request_id(), responder);
      Device::ClearHaltCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::ClearHalt");
      sink_->ClearHalt(p_endpoint, callback);
      return true;
    }
    case internal::kDevice_ControlTransferIn_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::ControlTransferIn", __FILE__, __LINE__);
      internal::Device_ControlTransferIn_Params_Data* params =
          reinterpret_cast<internal::Device_ControlTransferIn_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      ControlTransferParamsPtr p_params{};
      uint32_t p_length{};
      uint32_t p_timeout{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->params.ptr, &p_params, &serialization_context_))
          success = false;
        p_length = params->length;
        p_timeout = params->timeout;
      } while (false);
      if (!success)
        return false;
      Device::ControlTransferInCallback::Runnable* runnable =
          new Device_ControlTransferIn_ProxyToResponder(
              message->request_id(), responder);
      Device::ControlTransferInCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::ControlTransferIn");
      sink_->ControlTransferIn(std::move(p_params), p_length, p_timeout, callback);
      return true;
    }
    case internal::kDevice_ControlTransferOut_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::ControlTransferOut", __FILE__, __LINE__);
      internal::Device_ControlTransferOut_Params_Data* params =
          reinterpret_cast<internal::Device_ControlTransferOut_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      ControlTransferParamsPtr p_params{};
      mojo::Array<uint8_t> p_data{};
      uint32_t p_timeout{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->params.ptr, &p_params, &serialization_context_))
          success = false;
        if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
          success = false;
        p_timeout = params->timeout;
      } while (false);
      if (!success)
        return false;
      Device::ControlTransferOutCallback::Runnable* runnable =
          new Device_ControlTransferOut_ProxyToResponder(
              message->request_id(), responder);
      Device::ControlTransferOutCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::ControlTransferOut");
      sink_->ControlTransferOut(std::move(p_params), std::move(p_data), p_timeout, callback);
      return true;
    }
    case internal::kDevice_GenericTransferIn_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::GenericTransferIn", __FILE__, __LINE__);
      internal::Device_GenericTransferIn_Params_Data* params =
          reinterpret_cast<internal::Device_GenericTransferIn_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint8_t p_endpoint_number{};
      uint32_t p_length{};
      uint32_t p_timeout{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_endpoint_number = params->endpoint_number;
        p_length = params->length;
        p_timeout = params->timeout;
      } while (false);
      if (!success)
        return false;
      Device::GenericTransferInCallback::Runnable* runnable =
          new Device_GenericTransferIn_ProxyToResponder(
              message->request_id(), responder);
      Device::GenericTransferInCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::GenericTransferIn");
      sink_->GenericTransferIn(p_endpoint_number, p_length, p_timeout, callback);
      return true;
    }
    case internal::kDevice_GenericTransferOut_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::GenericTransferOut", __FILE__, __LINE__);
      internal::Device_GenericTransferOut_Params_Data* params =
          reinterpret_cast<internal::Device_GenericTransferOut_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint8_t p_endpoint_number{};
      mojo::Array<uint8_t> p_data{};
      uint32_t p_timeout{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_endpoint_number = params->endpoint_number;
        if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
          success = false;
        p_timeout = params->timeout;
      } while (false);
      if (!success)
        return false;
      Device::GenericTransferOutCallback::Runnable* runnable =
          new Device_GenericTransferOut_ProxyToResponder(
              message->request_id(), responder);
      Device::GenericTransferOutCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::GenericTransferOut");
      sink_->GenericTransferOut(p_endpoint_number, std::move(p_data), p_timeout, callback);
      return true;
    }
    case internal::kDevice_IsochronousTransferIn_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::IsochronousTransferIn", __FILE__, __LINE__);
      internal::Device_IsochronousTransferIn_Params_Data* params =
          reinterpret_cast<internal::Device_IsochronousTransferIn_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint8_t p_endpoint_number{};
      mojo::Array<uint32_t> p_packet_lengths{};
      uint32_t p_timeout{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_endpoint_number = params->endpoint_number;
        if (!Deserialize_(params->packet_lengths.ptr, &p_packet_lengths, &serialization_context_))
          success = false;
        p_timeout = params->timeout;
      } while (false);
      if (!success)
        return false;
      Device::IsochronousTransferInCallback::Runnable* runnable =
          new Device_IsochronousTransferIn_ProxyToResponder(
              message->request_id(), responder);
      Device::IsochronousTransferInCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::IsochronousTransferIn");
      sink_->IsochronousTransferIn(p_endpoint_number, std::move(p_packet_lengths), p_timeout, callback);
      return true;
    }
    case internal::kDevice_IsochronousTransferOut_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::Device::IsochronousTransferOut", __FILE__, __LINE__);
      internal::Device_IsochronousTransferOut_Params_Data* params =
          reinterpret_cast<internal::Device_IsochronousTransferOut_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint8_t p_endpoint_number{};
      mojo::Array<uint8_t> p_data{};
      mojo::Array<uint32_t> p_packet_lengths{};
      uint32_t p_timeout{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_endpoint_number = params->endpoint_number;
        if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
          success = false;
        if (!Deserialize_(params->packet_lengths.ptr, &p_packet_lengths, &serialization_context_))
          success = false;
        p_timeout = params->timeout;
      } while (false);
      if (!success)
        return false;
      Device::IsochronousTransferOutCallback::Runnable* runnable =
          new Device_IsochronousTransferOut_ProxyToResponder(
              message->request_id(), responder);
      Device::IsochronousTransferOutCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Device::IsochronousTransferOut");
      sink_->IsochronousTransferOut(p_endpoint_number, std::move(p_data), std::move(p_packet_lengths), p_timeout, callback);
      return true;
    }
  }
  return false;
}

DeviceRequestValidator::DeviceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DeviceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDevice_GetDeviceInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetDeviceInfo_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_GetConfiguration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetConfiguration_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_Open_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_Open_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_Close_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_Close_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_SetConfiguration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_SetConfiguration_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_ClaimInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ClaimInterface_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_ReleaseInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ReleaseInterface_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_SetInterfaceAlternateSetting_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_SetInterfaceAlternateSetting_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_Reset_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_Reset_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_ClearHalt_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ClearHalt_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_ControlTransferIn_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ControlTransferIn_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_ControlTransferOut_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ControlTransferOut_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_GenericTransferIn_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GenericTransferIn_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_GenericTransferOut_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GenericTransferOut_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_IsochronousTransferIn_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_IsochronousTransferIn_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_IsochronousTransferOut_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_IsochronousTransferOut_Params_Data>(message)) {
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

DeviceResponseValidator::DeviceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DeviceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kDevice_GetDeviceInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetDeviceInfo_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_GetConfiguration_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GetConfiguration_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_Open_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_Open_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_Close_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_Close_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_SetConfiguration_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_SetConfiguration_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_ClaimInterface_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ClaimInterface_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_ReleaseInterface_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ReleaseInterface_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_SetInterfaceAlternateSetting_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_SetInterfaceAlternateSetting_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_Reset_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_Reset_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_ClearHalt_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ClearHalt_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_ControlTransferIn_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ControlTransferIn_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_ControlTransferOut_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_ControlTransferOut_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_GenericTransferIn_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GenericTransferIn_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_GenericTransferOut_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_GenericTransferOut_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_IsochronousTransferIn_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_IsochronousTransferIn_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDevice_IsochronousTransferOut_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Device_IsochronousTransferOut_ResponseParams_Data>(message)) {
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
size_t GetSerializedSize_(const EndpointInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::EndpointInfo_Data);
  return size;
}

void Serialize_(EndpointInfoPtr input, mojo::internal::Buffer* buf,
                internal::EndpointInfo_Data** output) {
  if (input) {
    internal::EndpointInfo_Data* result =
        internal::EndpointInfo_Data::New(buf);
    result->endpoint_number = input->endpoint_number;
    result->direction.value = static_cast<int32_t>(input->direction);
    result->type.value = static_cast<int32_t>(input->type);
    result->packet_size = input->packet_size;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::EndpointInfo_Data* input,
                  EndpointInfoPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    EndpointInfoPtr result(EndpointInfo::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->endpoint_number = input->endpoint_number;
      result->direction = static_cast<TransferDirection>(input->direction.value);
      result->type = static_cast<EndpointType>(input->type.value);
      result->packet_size = input->packet_size;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

EndpointInfo_Reader::EndpointInfo_Reader(
    internal::EndpointInfo_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const AlternateInterfaceInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::AlternateInterfaceInfo_Data);
  size += GetSerializedSize_(input->interface_name);
  size += GetSerializedSize_(input->endpoints);
  return size;
}

void Serialize_(AlternateInterfaceInfoPtr input, mojo::internal::Buffer* buf,
                internal::AlternateInterfaceInfo_Data** output) {
  if (input) {
    internal::AlternateInterfaceInfo_Data* result =
        internal::AlternateInterfaceInfo_Data::New(buf);
    result->alternate_setting = input->alternate_setting;
    result->class_code = input->class_code;
    result->subclass_code = input->subclass_code;
    result->protocol_code = input->protocol_code;
    Serialize_(std::move(input->interface_name), buf, &result->interface_name.ptr);
    const mojo::internal::ArrayValidateParams endpoints_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->endpoints), buf,
        &result->endpoints.ptr, &endpoints_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->endpoints.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null endpoints in AlternateInterfaceInfo struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::AlternateInterfaceInfo_Data* input,
                  AlternateInterfaceInfoPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    AlternateInterfaceInfoPtr result(AlternateInterfaceInfo::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->alternate_setting = input->alternate_setting;
      result->class_code = input->class_code;
      result->subclass_code = input->subclass_code;
      result->protocol_code = input->protocol_code;
      if (!Deserialize_(input->interface_name.ptr, &result->interface_name, context))
        success = false;
      if (!Deserialize_(input->endpoints.ptr, &result->endpoints, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

AlternateInterfaceInfo_Reader::AlternateInterfaceInfo_Reader(
    internal::AlternateInterfaceInfo_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const InterfaceInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::InterfaceInfo_Data);
  size += GetSerializedSize_(input->alternates);
  return size;
}

void Serialize_(InterfaceInfoPtr input, mojo::internal::Buffer* buf,
                internal::InterfaceInfo_Data** output) {
  if (input) {
    internal::InterfaceInfo_Data* result =
        internal::InterfaceInfo_Data::New(buf);
    result->interface_number = input->interface_number;
    const mojo::internal::ArrayValidateParams alternates_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->alternates), buf,
        &result->alternates.ptr, &alternates_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->alternates.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null alternates in InterfaceInfo struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::InterfaceInfo_Data* input,
                  InterfaceInfoPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    InterfaceInfoPtr result(InterfaceInfo::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->interface_number = input->interface_number;
      if (!Deserialize_(input->alternates.ptr, &result->alternates, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

InterfaceInfo_Reader::InterfaceInfo_Reader(
    internal::InterfaceInfo_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const ConfigurationInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::ConfigurationInfo_Data);
  size += GetSerializedSize_(input->configuration_name);
  size += GetSerializedSize_(input->interfaces);
  return size;
}

void Serialize_(ConfigurationInfoPtr input, mojo::internal::Buffer* buf,
                internal::ConfigurationInfo_Data** output) {
  if (input) {
    internal::ConfigurationInfo_Data* result =
        internal::ConfigurationInfo_Data::New(buf);
    result->configuration_value = input->configuration_value;
    Serialize_(std::move(input->configuration_name), buf, &result->configuration_name.ptr);
    const mojo::internal::ArrayValidateParams interfaces_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->interfaces), buf,
        &result->interfaces.ptr, &interfaces_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->interfaces.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null interfaces in ConfigurationInfo struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::ConfigurationInfo_Data* input,
                  ConfigurationInfoPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    ConfigurationInfoPtr result(ConfigurationInfo::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->configuration_value = input->configuration_value;
      if (!Deserialize_(input->configuration_name.ptr, &result->configuration_name, context))
        success = false;
      if (!Deserialize_(input->interfaces.ptr, &result->interfaces, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

ConfigurationInfo_Reader::ConfigurationInfo_Reader(
    internal::ConfigurationInfo_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const WebUsbFunctionSubsetPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::WebUsbFunctionSubset_Data);
  size += GetSerializedSize_(input->origins);
  return size;
}

void Serialize_(WebUsbFunctionSubsetPtr input, mojo::internal::Buffer* buf,
                internal::WebUsbFunctionSubset_Data** output) {
  if (input) {
    internal::WebUsbFunctionSubset_Data* result =
        internal::WebUsbFunctionSubset_Data::New(buf);
    result->first_interface = input->first_interface;
    const mojo::internal::ArrayValidateParams origins_validate_params(
        0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
    mojo::SerializeArray_(std::move(input->origins), buf,
        &result->origins.ptr, &origins_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->origins.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origins in WebUsbFunctionSubset struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::WebUsbFunctionSubset_Data* input,
                  WebUsbFunctionSubsetPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    WebUsbFunctionSubsetPtr result(WebUsbFunctionSubset::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->first_interface = input->first_interface;
      if (!Deserialize_(input->origins.ptr, &result->origins, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

WebUsbFunctionSubset_Reader::WebUsbFunctionSubset_Reader(
    internal::WebUsbFunctionSubset_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const WebUsbConfigurationSubsetPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::WebUsbConfigurationSubset_Data);
  size += GetSerializedSize_(input->origins);
  size += GetSerializedSize_(input->functions);
  return size;
}

void Serialize_(WebUsbConfigurationSubsetPtr input, mojo::internal::Buffer* buf,
                internal::WebUsbConfigurationSubset_Data** output) {
  if (input) {
    internal::WebUsbConfigurationSubset_Data* result =
        internal::WebUsbConfigurationSubset_Data::New(buf);
    result->configuration_value = input->configuration_value;
    const mojo::internal::ArrayValidateParams origins_validate_params(
        0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
    mojo::SerializeArray_(std::move(input->origins), buf,
        &result->origins.ptr, &origins_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->origins.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origins in WebUsbConfigurationSubset struct");
    const mojo::internal::ArrayValidateParams functions_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->functions), buf,
        &result->functions.ptr, &functions_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->functions.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null functions in WebUsbConfigurationSubset struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::WebUsbConfigurationSubset_Data* input,
                  WebUsbConfigurationSubsetPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    WebUsbConfigurationSubsetPtr result(WebUsbConfigurationSubset::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->configuration_value = input->configuration_value;
      if (!Deserialize_(input->origins.ptr, &result->origins, context))
        success = false;
      if (!Deserialize_(input->functions.ptr, &result->functions, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

WebUsbConfigurationSubset_Reader::WebUsbConfigurationSubset_Reader(
    internal::WebUsbConfigurationSubset_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const WebUsbDescriptorSetPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::WebUsbDescriptorSet_Data);
  size += GetSerializedSize_(input->origins);
  size += GetSerializedSize_(input->configurations);
  return size;
}

void Serialize_(WebUsbDescriptorSetPtr input, mojo::internal::Buffer* buf,
                internal::WebUsbDescriptorSet_Data** output) {
  if (input) {
    internal::WebUsbDescriptorSet_Data* result =
        internal::WebUsbDescriptorSet_Data::New(buf);
    const mojo::internal::ArrayValidateParams origins_validate_params(
        0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
    mojo::SerializeArray_(std::move(input->origins), buf,
        &result->origins.ptr, &origins_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->origins.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null origins in WebUsbDescriptorSet struct");
    const mojo::internal::ArrayValidateParams configurations_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->configurations), buf,
        &result->configurations.ptr, &configurations_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->configurations.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null configurations in WebUsbDescriptorSet struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::WebUsbDescriptorSet_Data* input,
                  WebUsbDescriptorSetPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    WebUsbDescriptorSetPtr result(WebUsbDescriptorSet::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->origins.ptr, &result->origins, context))
        success = false;
      if (!Deserialize_(input->configurations.ptr, &result->configurations, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

WebUsbDescriptorSet_Reader::WebUsbDescriptorSet_Reader(
    internal::WebUsbDescriptorSet_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const DeviceInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::DeviceInfo_Data);
  size += GetSerializedSize_(input->guid);
  size += GetSerializedSize_(input->manufacturer_name);
  size += GetSerializedSize_(input->product_name);
  size += GetSerializedSize_(input->serial_number);
  size += GetSerializedSize_(input->configurations);
  size += GetSerializedSize_(input->webusb_allowed_origins);
  return size;
}

void Serialize_(DeviceInfoPtr input, mojo::internal::Buffer* buf,
                internal::DeviceInfo_Data** output) {
  if (input) {
    internal::DeviceInfo_Data* result =
        internal::DeviceInfo_Data::New(buf);
    Serialize_(std::move(input->guid), buf, &result->guid.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->guid.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null guid in DeviceInfo struct");
    result->usb_version_major = input->usb_version_major;
    result->usb_version_minor = input->usb_version_minor;
    result->usb_version_subminor = input->usb_version_subminor;
    result->class_code = input->class_code;
    result->subclass_code = input->subclass_code;
    result->protocol_code = input->protocol_code;
    result->vendor_id = input->vendor_id;
    result->product_id = input->product_id;
    result->device_version_major = input->device_version_major;
    result->device_version_minor = input->device_version_minor;
    result->device_version_subminor = input->device_version_subminor;
    Serialize_(std::move(input->manufacturer_name), buf, &result->manufacturer_name.ptr);
    Serialize_(std::move(input->product_name), buf, &result->product_name.ptr);
    Serialize_(std::move(input->serial_number), buf, &result->serial_number.ptr);
    const mojo::internal::ArrayValidateParams configurations_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->configurations), buf,
        &result->configurations.ptr, &configurations_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->configurations.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null configurations in DeviceInfo struct");
    Serialize_(std::move(input->webusb_allowed_origins), buf, &result->webusb_allowed_origins.ptr);
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
      if (!Deserialize_(input->guid.ptr, &result->guid, context))
        success = false;
      result->usb_version_major = input->usb_version_major;
      result->usb_version_minor = input->usb_version_minor;
      result->usb_version_subminor = input->usb_version_subminor;
      result->class_code = input->class_code;
      result->subclass_code = input->subclass_code;
      result->protocol_code = input->protocol_code;
      result->vendor_id = input->vendor_id;
      result->product_id = input->product_id;
      result->device_version_major = input->device_version_major;
      result->device_version_minor = input->device_version_minor;
      result->device_version_subminor = input->device_version_subminor;
      if (!Deserialize_(input->manufacturer_name.ptr, &result->manufacturer_name, context))
        success = false;
      if (!Deserialize_(input->product_name.ptr, &result->product_name, context))
        success = false;
      if (!Deserialize_(input->serial_number.ptr, &result->serial_number, context))
        success = false;
      if (!Deserialize_(input->configurations.ptr, &result->configurations, context))
        success = false;
      if (!Deserialize_(input->webusb_allowed_origins.ptr, &result->webusb_allowed_origins, context))
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
WebUsbDescriptorSet_Reader DeviceInfo_Reader::webusb_allowed_origins() const {
  return WebUsbDescriptorSet_Reader(data_->webusb_allowed_origins.ptr, context_);
}
size_t GetSerializedSize_(const ControlTransferParamsPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::ControlTransferParams_Data);
  return size;
}

void Serialize_(ControlTransferParamsPtr input, mojo::internal::Buffer* buf,
                internal::ControlTransferParams_Data** output) {
  if (input) {
    internal::ControlTransferParams_Data* result =
        internal::ControlTransferParams_Data::New(buf);
    result->type.value = static_cast<int32_t>(input->type);
    result->recipient.value = static_cast<int32_t>(input->recipient);
    result->request = input->request;
    result->value = input->value;
    result->index = input->index;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::ControlTransferParams_Data* input,
                  ControlTransferParamsPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    ControlTransferParamsPtr result(ControlTransferParams::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->type = static_cast<ControlTransferType>(input->type.value);
      result->recipient = static_cast<ControlTransferRecipient>(input->recipient.value);
      result->request = input->request;
      result->value = input->value;
      result->index = input->index;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

ControlTransferParams_Reader::ControlTransferParams_Reader(
    internal::ControlTransferParams_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const IsochronousPacketPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::IsochronousPacket_Data);
  return size;
}

void Serialize_(IsochronousPacketPtr input, mojo::internal::Buffer* buf,
                internal::IsochronousPacket_Data** output) {
  if (input) {
    internal::IsochronousPacket_Data* result =
        internal::IsochronousPacket_Data::New(buf);
    result->length = input->length;
    result->transferred_length = input->transferred_length;
    result->status.value = static_cast<int32_t>(input->status);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::IsochronousPacket_Data* input,
                  IsochronousPacketPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    IsochronousPacketPtr result(IsochronousPacket::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->length = input->length;
      result->transferred_length = input->transferred_length;
      result->status = static_cast<TransferStatus>(input->status.value);
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

IsochronousPacket_Reader::IsochronousPacket_Reader(
    internal::IsochronousPacket_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace usb
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif