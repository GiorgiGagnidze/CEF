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

#include "device/devices_app/usb/public/interfaces/device_manager.mojom.h"

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
const uint32_t kDeviceManager_GetDevices_Name = 0;

class DeviceManager_GetDevices_Params_Data {
 public:
  static DeviceManager_GetDevices_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::EnumerationOptions_Data> options;

 private:
  DeviceManager_GetDevices_Params_Data();
  ~DeviceManager_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(DeviceManager_GetDevices_Params_Data) == 16,
              "Bad sizeof(DeviceManager_GetDevices_Params_Data)");

// static
DeviceManager_GetDevices_Params_Data* DeviceManager_GetDevices_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DeviceManager_GetDevices_Params_Data))) DeviceManager_GetDevices_Params_Data();
}

// static
bool DeviceManager_GetDevices_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DeviceManager_GetDevices_Params_Data* object = static_cast<const DeviceManager_GetDevices_Params_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->options, bounds_checker))
    return false;

  return true;
}

void DeviceManager_GetDevices_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&options, handles);
}

void DeviceManager_GetDevices_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&options, handles);
}

DeviceManager_GetDevices_Params_Data::DeviceManager_GetDevices_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class DeviceManager_GetDevices_ResponseParams_Data {
 public:
  static DeviceManager_GetDevices_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<device::usb::internal::DeviceInfo_Data*> results;

 private:
  DeviceManager_GetDevices_ResponseParams_Data();
  ~DeviceManager_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(DeviceManager_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(DeviceManager_GetDevices_ResponseParams_Data)");

// static
DeviceManager_GetDevices_ResponseParams_Data* DeviceManager_GetDevices_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DeviceManager_GetDevices_ResponseParams_Data))) DeviceManager_GetDevices_ResponseParams_Data();
}

// static
bool DeviceManager_GetDevices_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DeviceManager_GetDevices_ResponseParams_Data* object = static_cast<const DeviceManager_GetDevices_ResponseParams_Data*>(data);

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
          object->results, "null results field in DeviceManager_GetDevices_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams results_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->results, bounds_checker,
                                     &results_validate_params)) {
    return false;
  }

  return true;
}

void DeviceManager_GetDevices_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&results, handles);
}

void DeviceManager_GetDevices_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&results, handles);
}

DeviceManager_GetDevices_ResponseParams_Data::DeviceManager_GetDevices_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDeviceManager_GetDeviceChanges_Name = 1;

class DeviceManager_GetDeviceChanges_Params_Data {
 public:
  static DeviceManager_GetDeviceChanges_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  DeviceManager_GetDeviceChanges_Params_Data();
  ~DeviceManager_GetDeviceChanges_Params_Data() = delete;
};
static_assert(sizeof(DeviceManager_GetDeviceChanges_Params_Data) == 8,
              "Bad sizeof(DeviceManager_GetDeviceChanges_Params_Data)");

// static
DeviceManager_GetDeviceChanges_Params_Data* DeviceManager_GetDeviceChanges_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DeviceManager_GetDeviceChanges_Params_Data))) DeviceManager_GetDeviceChanges_Params_Data();
}

// static
bool DeviceManager_GetDeviceChanges_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DeviceManager_GetDeviceChanges_Params_Data* object = static_cast<const DeviceManager_GetDeviceChanges_Params_Data*>(data);

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

void DeviceManager_GetDeviceChanges_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void DeviceManager_GetDeviceChanges_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

DeviceManager_GetDeviceChanges_Params_Data::DeviceManager_GetDeviceChanges_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class DeviceManager_GetDeviceChanges_ResponseParams_Data {
 public:
  static DeviceManager_GetDeviceChanges_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::DeviceChangeNotification_Data> changes;

 private:
  DeviceManager_GetDeviceChanges_ResponseParams_Data();
  ~DeviceManager_GetDeviceChanges_ResponseParams_Data() = delete;
};
static_assert(sizeof(DeviceManager_GetDeviceChanges_ResponseParams_Data) == 16,
              "Bad sizeof(DeviceManager_GetDeviceChanges_ResponseParams_Data)");

// static
DeviceManager_GetDeviceChanges_ResponseParams_Data* DeviceManager_GetDeviceChanges_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DeviceManager_GetDeviceChanges_ResponseParams_Data))) DeviceManager_GetDeviceChanges_ResponseParams_Data();
}

// static
bool DeviceManager_GetDeviceChanges_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DeviceManager_GetDeviceChanges_ResponseParams_Data* object = static_cast<const DeviceManager_GetDeviceChanges_ResponseParams_Data*>(data);

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
          object->changes, "null changes field in DeviceManager_GetDeviceChanges_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->changes, bounds_checker))
    return false;

  return true;
}

void DeviceManager_GetDeviceChanges_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&changes, handles);
}

void DeviceManager_GetDeviceChanges_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&changes, handles);
}

DeviceManager_GetDeviceChanges_ResponseParams_Data::DeviceManager_GetDeviceChanges_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kDeviceManager_GetDevice_Name = 2;

class DeviceManager_GetDevice_Params_Data {
 public:
  static DeviceManager_GetDevice_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer guid;
  mojo::MessagePipeHandle device_request;
  uint8_t padfinal_[4];

 private:
  DeviceManager_GetDevice_Params_Data();
  ~DeviceManager_GetDevice_Params_Data() = delete;
};
static_assert(sizeof(DeviceManager_GetDevice_Params_Data) == 24,
              "Bad sizeof(DeviceManager_GetDevice_Params_Data)");

// static
DeviceManager_GetDevice_Params_Data* DeviceManager_GetDevice_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DeviceManager_GetDevice_Params_Data))) DeviceManager_GetDevice_Params_Data();
}

// static
bool DeviceManager_GetDevice_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DeviceManager_GetDevice_Params_Data* object = static_cast<const DeviceManager_GetDevice_Params_Data*>(data);

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
          object->guid, "null guid field in DeviceManager_GetDevice_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams guid_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->guid, bounds_checker,
                                     &guid_validate_params)) {
    return false;
  }

  const mojo::Handle device_request_handle = object->device_request;
  if (!mojo::internal::ValidateHandleNonNullable(
          device_request_handle,
          "invalid device_request field in DeviceManager_GetDevice_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(device_request_handle, bounds_checker))
    return false;

  return true;
}

void DeviceManager_GetDevice_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&guid, handles);
  mojo::internal::EncodeHandle(&device_request, handles);
}

void DeviceManager_GetDevice_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&guid, handles);
  mojo::internal::DecodeHandle(&device_request, handles);
}

DeviceManager_GetDevice_Params_Data::DeviceManager_GetDevice_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
DeviceFilter_Data* DeviceFilter_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DeviceFilter_Data))) DeviceFilter_Data();
}

// static
bool DeviceFilter_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DeviceFilter_Data* object = static_cast<const DeviceFilter_Data*>(data);

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

void DeviceFilter_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void DeviceFilter_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

DeviceFilter_Data::DeviceFilter_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
EnumerationOptions_Data* EnumerationOptions_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(EnumerationOptions_Data))) EnumerationOptions_Data();
}

// static
bool EnumerationOptions_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const EnumerationOptions_Data* object = static_cast<const EnumerationOptions_Data*>(data);

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

  const mojo::internal::ArrayValidateParams filters_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->filters, bounds_checker,
                                     &filters_validate_params)) {
    return false;
  }

  return true;
}

void EnumerationOptions_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&filters, handles);
}

void EnumerationOptions_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&filters, handles);
}

EnumerationOptions_Data::EnumerationOptions_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
DeviceChangeNotification_Data* DeviceChangeNotification_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(DeviceChangeNotification_Data))) DeviceChangeNotification_Data();
}

// static
bool DeviceChangeNotification_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const DeviceChangeNotification_Data* object = static_cast<const DeviceChangeNotification_Data*>(data);

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
          object->devices_added, "null devices_added field in DeviceChangeNotification struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams devices_added_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->devices_added, bounds_checker,
                                     &devices_added_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->devices_removed, "null devices_removed field in DeviceChangeNotification struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams devices_removed_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->devices_removed, bounds_checker,
                                     &devices_removed_validate_params)) {
    return false;
  }

  return true;
}

void DeviceChangeNotification_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&devices_added, handles);
  mojo::internal::Encode(&devices_removed, handles);
}

void DeviceChangeNotification_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&devices_added, handles);
  mojo::internal::Decode(&devices_removed, handles);
}

DeviceChangeNotification_Data::DeviceChangeNotification_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
DeviceFilterPtr DeviceFilter::New() {
  DeviceFilterPtr rv;
  mojo::internal::StructHelper<DeviceFilter>::Initialize(&rv);
  return rv;
}

DeviceFilter::DeviceFilter()
    : has_vendor_id(),
      vendor_id(),
      has_product_id(),
      product_id(),
      has_class_code(),
      class_code(),
      has_subclass_code(),
      subclass_code(),
      has_protocol_code(),
      protocol_code() {
}

DeviceFilter::~DeviceFilter() {
}


DeviceFilterPtr DeviceFilter::Clone() const {
  DeviceFilterPtr rv(New());
  rv->has_vendor_id = has_vendor_id;
  rv->vendor_id = vendor_id;
  rv->has_product_id = has_product_id;
  rv->product_id = product_id;
  rv->has_class_code = has_class_code;
  rv->class_code = class_code;
  rv->has_subclass_code = has_subclass_code;
  rv->subclass_code = subclass_code;
  rv->has_protocol_code = has_protocol_code;
  rv->protocol_code = protocol_code;
  return rv;
}


bool DeviceFilter::Equals(const DeviceFilter& other) const {
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_vendor_id, other.has_vendor_id))
    return false;
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->vendor_id, other.vendor_id))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_product_id, other.has_product_id))
    return false;
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->product_id, other.product_id))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_class_code, other.has_class_code))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->class_code, other.class_code))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_subclass_code, other.has_subclass_code))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->subclass_code, other.subclass_code))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->has_protocol_code, other.has_protocol_code))
    return false;
  if (!mojo::internal::ValueTraits<uint8_t>::Equals(this->protocol_code, other.protocol_code))
    return false;
  return true;
}// static
EnumerationOptionsPtr EnumerationOptions::New() {
  EnumerationOptionsPtr rv;
  mojo::internal::StructHelper<EnumerationOptions>::Initialize(&rv);
  return rv;
}

EnumerationOptions::EnumerationOptions()
    : filters() {
}

EnumerationOptions::~EnumerationOptions() {
}


EnumerationOptionsPtr EnumerationOptions::Clone() const {
  EnumerationOptionsPtr rv(New());
  rv->filters = filters.Clone();
  return rv;
}


bool EnumerationOptions::Equals(const EnumerationOptions& other) const {
  if (!mojo::internal::ValueTraits<mojo::Array<DeviceFilterPtr>>::Equals(this->filters, other.filters))
    return false;
  return true;
}// static
DeviceChangeNotificationPtr DeviceChangeNotification::New() {
  DeviceChangeNotificationPtr rv;
  mojo::internal::StructHelper<DeviceChangeNotification>::Initialize(&rv);
  return rv;
}

DeviceChangeNotification::DeviceChangeNotification()
    : devices_added(),
      devices_removed() {
}

DeviceChangeNotification::~DeviceChangeNotification() {
}


DeviceChangeNotificationPtr DeviceChangeNotification::Clone() const {
  DeviceChangeNotificationPtr rv(New());
  rv->devices_added = devices_added.Clone();
  rv->devices_removed = devices_removed.Clone();
  return rv;
}


bool DeviceChangeNotification::Equals(const DeviceChangeNotification& other) const {
  if (!mojo::internal::ValueTraits<mojo::Array<device::usb::DeviceInfoPtr>>::Equals(this->devices_added, other.devices_added))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<device::usb::DeviceInfoPtr>>::Equals(this->devices_removed, other.devices_removed))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char DeviceManager::Name_[] = "device::usb::DeviceManager";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t DeviceManager::Version_;
class DeviceManager_GetDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DeviceManager_GetDevices_ForwardToCallback(
      const DeviceManager::GetDevicesCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DeviceManager::GetDevicesCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(DeviceManager_GetDevices_ForwardToCallback);
};
bool DeviceManager_GetDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::DeviceManager_GetDevices_ResponseParams_Data* params =
      reinterpret_cast<internal::DeviceManager_GetDevices_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::Array<device::usb::DeviceInfoPtr> p_results{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->results.ptr, &p_results, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_results));
  return true;
}
class DeviceManager_GetDeviceChanges_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DeviceManager_GetDeviceChanges_ForwardToCallback(
      const DeviceManager::GetDeviceChangesCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DeviceManager::GetDeviceChangesCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(DeviceManager_GetDeviceChanges_ForwardToCallback);
};
bool DeviceManager_GetDeviceChanges_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::DeviceManager_GetDeviceChanges_ResponseParams_Data* params =
      reinterpret_cast<internal::DeviceManager_GetDeviceChanges_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  DeviceChangeNotificationPtr p_changes{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->changes.ptr, &p_changes, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_changes));
  return true;
}

DeviceManagerProxy::DeviceManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void DeviceManagerProxy::GetDevices(
    EnumerationOptionsPtr in_options, const GetDevicesCallback& callback) {
  size_t size = sizeof(internal::DeviceManager_GetDevices_Params_Data);
  size += GetSerializedSize_(in_options);
  mojo::internal::RequestMessageBuilder builder(internal::kDeviceManager_GetDevices_Name, size);

  internal::DeviceManager_GetDevices_Params_Data* params =
      internal::DeviceManager_GetDevices_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_options), builder.buffer(), &params->options.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new DeviceManager_GetDevices_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceManagerProxy::GetDeviceChanges(
    const GetDeviceChangesCallback& callback) {
  size_t size = sizeof(internal::DeviceManager_GetDeviceChanges_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDeviceManager_GetDeviceChanges_Name, size);

  internal::DeviceManager_GetDeviceChanges_Params_Data* params =
      internal::DeviceManager_GetDeviceChanges_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new DeviceManager_GetDeviceChanges_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void DeviceManagerProxy::GetDevice(
    const mojo::String& in_guid, mojo::InterfaceRequest<device::usb::Device> in_device_request) {
  size_t size = sizeof(internal::DeviceManager_GetDevice_Params_Data);
  size += GetSerializedSize_(in_guid);
  mojo::internal::MessageBuilder builder(internal::kDeviceManager_GetDevice_Name, size);

  internal::DeviceManager_GetDevice_Params_Data* params =
      internal::DeviceManager_GetDevice_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_guid), builder.buffer(), &params->guid.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->guid.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null guid in DeviceManager.GetDevice request");
  params->device_request = in_device_request.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->device_request.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid device_request in DeviceManager.GetDevice request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
class DeviceManager_GetDevices_ProxyToResponder
    : public DeviceManager::GetDevicesCallback::Runnable {
 public:
  ~DeviceManager_GetDevices_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "DeviceManager::GetDevices(std::move(p_options), callback) "
        "was never run.";
  }

  DeviceManager_GetDevices_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::Array<device::usb::DeviceInfoPtr> in_results) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(DeviceManager_GetDevices_ProxyToResponder);
};
void DeviceManager_GetDevices_ProxyToResponder::Run(
    mojo::Array<device::usb::DeviceInfoPtr> in_results) const {
  size_t size = sizeof(internal::DeviceManager_GetDevices_ResponseParams_Data);
  size += GetSerializedSize_(in_results);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDeviceManager_GetDevices_Name, size, request_id_);
  internal::DeviceManager_GetDevices_ResponseParams_Data* params =
      internal::DeviceManager_GetDevices_ResponseParams_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams results_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_results), builder.buffer(),
      &params->results.ptr, &results_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->results.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null results in DeviceManager.GetDevices response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class DeviceManager_GetDeviceChanges_ProxyToResponder
    : public DeviceManager::GetDeviceChangesCallback::Runnable {
 public:
  ~DeviceManager_GetDeviceChanges_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "DeviceManager::GetDeviceChanges(callback) "
        "was never run.";
  }

  DeviceManager_GetDeviceChanges_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(DeviceChangeNotificationPtr in_changes) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(DeviceManager_GetDeviceChanges_ProxyToResponder);
};
void DeviceManager_GetDeviceChanges_ProxyToResponder::Run(
    DeviceChangeNotificationPtr in_changes) const {
  size_t size = sizeof(internal::DeviceManager_GetDeviceChanges_ResponseParams_Data);
  size += GetSerializedSize_(in_changes);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDeviceManager_GetDeviceChanges_Name, size, request_id_);
  internal::DeviceManager_GetDeviceChanges_ResponseParams_Data* params =
      internal::DeviceManager_GetDeviceChanges_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_changes), builder.buffer(), &params->changes.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->changes.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null changes in DeviceManager.GetDeviceChanges response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

DeviceManagerStub::DeviceManagerStub()
    : sink_(nullptr),
      control_message_handler_(DeviceManager::Version_) {
}

DeviceManagerStub::~DeviceManagerStub() {}

bool DeviceManagerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDeviceManager_GetDevices_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.DeviceManager.GetDevices", __FILE__, __LINE__);
      break;
    }
    case internal::kDeviceManager_GetDeviceChanges_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.DeviceManager.GetDeviceChanges", __FILE__, __LINE__);
      break;
    }
    case internal::kDeviceManager_GetDevice_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.DeviceManager.GetDevice", __FILE__, __LINE__);
      internal::DeviceManager_GetDevice_Params_Data* params =
          reinterpret_cast<internal::DeviceManager_GetDevice_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_guid{};
      mojo::InterfaceRequest<device::usb::Device> p_device_request{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->guid.ptr, &p_guid, &serialization_context_))
          success = false;
        p_device_request.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->device_request)));
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DeviceManager::GetDevice");
      sink_->GetDevice(p_guid, std::move(p_device_request));
      return true;
    }
  }
  return false;
}

bool DeviceManagerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDeviceManager_GetDevices_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::DeviceManager::GetDevices", __FILE__, __LINE__);
      internal::DeviceManager_GetDevices_Params_Data* params =
          reinterpret_cast<internal::DeviceManager_GetDevices_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      EnumerationOptionsPtr p_options{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->options.ptr, &p_options, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      DeviceManager::GetDevicesCallback::Runnable* runnable =
          new DeviceManager_GetDevices_ProxyToResponder(
              message->request_id(), responder);
      DeviceManager::GetDevicesCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DeviceManager::GetDevices");
      sink_->GetDevices(std::move(p_options), callback);
      return true;
    }
    case internal::kDeviceManager_GetDeviceChanges_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::DeviceManager::GetDeviceChanges", __FILE__, __LINE__);
      internal::DeviceManager_GetDeviceChanges_Params_Data* params =
          reinterpret_cast<internal::DeviceManager_GetDeviceChanges_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      DeviceManager::GetDeviceChangesCallback::Runnable* runnable =
          new DeviceManager_GetDeviceChanges_ProxyToResponder(
              message->request_id(), responder);
      DeviceManager::GetDeviceChangesCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DeviceManager::GetDeviceChanges");
      sink_->GetDeviceChanges(callback);
      return true;
    }
    case internal::kDeviceManager_GetDevice_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::DeviceManager::GetDevice", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

DeviceManagerRequestValidator::DeviceManagerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DeviceManagerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDeviceManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceManager_GetDevices_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDeviceManager_GetDeviceChanges_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceManager_GetDeviceChanges_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDeviceManager_GetDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceManager_GetDevice_Params_Data>(message)) {
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

DeviceManagerResponseValidator::DeviceManagerResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DeviceManagerResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kDeviceManager_GetDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceManager_GetDevices_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDeviceManager_GetDeviceChanges_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DeviceManager_GetDeviceChanges_ResponseParams_Data>(message)) {
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
size_t GetSerializedSize_(const DeviceFilterPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::DeviceFilter_Data);
  return size;
}

void Serialize_(DeviceFilterPtr input, mojo::internal::Buffer* buf,
                internal::DeviceFilter_Data** output) {
  if (input) {
    internal::DeviceFilter_Data* result =
        internal::DeviceFilter_Data::New(buf);
    result->has_vendor_id = input->has_vendor_id;
    result->vendor_id = input->vendor_id;
    result->has_product_id = input->has_product_id;
    result->product_id = input->product_id;
    result->has_class_code = input->has_class_code;
    result->class_code = input->class_code;
    result->has_subclass_code = input->has_subclass_code;
    result->subclass_code = input->subclass_code;
    result->has_protocol_code = input->has_protocol_code;
    result->protocol_code = input->protocol_code;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::DeviceFilter_Data* input,
                  DeviceFilterPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    DeviceFilterPtr result(DeviceFilter::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->has_vendor_id = input->has_vendor_id;
      result->vendor_id = input->vendor_id;
      result->has_product_id = input->has_product_id;
      result->product_id = input->product_id;
      result->has_class_code = input->has_class_code;
      result->class_code = input->class_code;
      result->has_subclass_code = input->has_subclass_code;
      result->subclass_code = input->subclass_code;
      result->has_protocol_code = input->has_protocol_code;
      result->protocol_code = input->protocol_code;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

DeviceFilter_Reader::DeviceFilter_Reader(
    internal::DeviceFilter_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const EnumerationOptionsPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::EnumerationOptions_Data);
  size += GetSerializedSize_(input->filters);
  return size;
}

void Serialize_(EnumerationOptionsPtr input, mojo::internal::Buffer* buf,
                internal::EnumerationOptions_Data** output) {
  if (input) {
    internal::EnumerationOptions_Data* result =
        internal::EnumerationOptions_Data::New(buf);
    const mojo::internal::ArrayValidateParams filters_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->filters), buf,
        &result->filters.ptr, &filters_validate_params);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::EnumerationOptions_Data* input,
                  EnumerationOptionsPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    EnumerationOptionsPtr result(EnumerationOptions::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->filters.ptr, &result->filters, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

EnumerationOptions_Reader::EnumerationOptions_Reader(
    internal::EnumerationOptions_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const DeviceChangeNotificationPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::DeviceChangeNotification_Data);
  size += GetSerializedSize_(input->devices_added);
  size += GetSerializedSize_(input->devices_removed);
  return size;
}

void Serialize_(DeviceChangeNotificationPtr input, mojo::internal::Buffer* buf,
                internal::DeviceChangeNotification_Data** output) {
  if (input) {
    internal::DeviceChangeNotification_Data* result =
        internal::DeviceChangeNotification_Data::New(buf);
    const mojo::internal::ArrayValidateParams devices_added_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->devices_added), buf,
        &result->devices_added.ptr, &devices_added_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->devices_added.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null devices_added in DeviceChangeNotification struct");
    const mojo::internal::ArrayValidateParams devices_removed_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->devices_removed), buf,
        &result->devices_removed.ptr, &devices_removed_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->devices_removed.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null devices_removed in DeviceChangeNotification struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::DeviceChangeNotification_Data* input,
                  DeviceChangeNotificationPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    DeviceChangeNotificationPtr result(DeviceChangeNotification::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->devices_added.ptr, &result->devices_added, context))
        success = false;
      if (!Deserialize_(input->devices_removed.ptr, &result->devices_removed, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

DeviceChangeNotification_Reader::DeviceChangeNotification_Reader(
    internal::DeviceChangeNotification_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace usb
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif