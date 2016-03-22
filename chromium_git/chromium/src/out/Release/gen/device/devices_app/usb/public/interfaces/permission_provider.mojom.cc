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

#include "device/devices_app/usb/public/interfaces/permission_provider.mojom.h"

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
const uint32_t kPermissionProvider_HasDevicePermission_Name = 0;

class PermissionProvider_HasDevicePermission_Params_Data {
 public:
  static PermissionProvider_HasDevicePermission_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<device::usb::internal::DeviceInfo_Data*> requested_devices;

 private:
  PermissionProvider_HasDevicePermission_Params_Data();
  ~PermissionProvider_HasDevicePermission_Params_Data() = delete;
};
static_assert(sizeof(PermissionProvider_HasDevicePermission_Params_Data) == 16,
              "Bad sizeof(PermissionProvider_HasDevicePermission_Params_Data)");

// static
PermissionProvider_HasDevicePermission_Params_Data* PermissionProvider_HasDevicePermission_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionProvider_HasDevicePermission_Params_Data))) PermissionProvider_HasDevicePermission_Params_Data();
}

// static
bool PermissionProvider_HasDevicePermission_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionProvider_HasDevicePermission_Params_Data* object = static_cast<const PermissionProvider_HasDevicePermission_Params_Data*>(data);

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
          object->requested_devices, "null requested_devices field in PermissionProvider_HasDevicePermission_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams requested_devices_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->requested_devices, bounds_checker,
                                     &requested_devices_validate_params)) {
    return false;
  }

  return true;
}

void PermissionProvider_HasDevicePermission_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&requested_devices, handles);
}

void PermissionProvider_HasDevicePermission_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&requested_devices, handles);
}

PermissionProvider_HasDevicePermission_Params_Data::PermissionProvider_HasDevicePermission_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class PermissionProvider_HasDevicePermission_ResponseParams_Data {
 public:
  static PermissionProvider_HasDevicePermission_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<mojo::internal::String_Data*> allowed_guids;

 private:
  PermissionProvider_HasDevicePermission_ResponseParams_Data();
  ~PermissionProvider_HasDevicePermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(PermissionProvider_HasDevicePermission_ResponseParams_Data) == 16,
              "Bad sizeof(PermissionProvider_HasDevicePermission_ResponseParams_Data)");

// static
PermissionProvider_HasDevicePermission_ResponseParams_Data* PermissionProvider_HasDevicePermission_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionProvider_HasDevicePermission_ResponseParams_Data))) PermissionProvider_HasDevicePermission_ResponseParams_Data();
}

// static
bool PermissionProvider_HasDevicePermission_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionProvider_HasDevicePermission_ResponseParams_Data* object = static_cast<const PermissionProvider_HasDevicePermission_ResponseParams_Data*>(data);

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
          object->allowed_guids, "null allowed_guids field in PermissionProvider_HasDevicePermission_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams allowed_guids_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateArray(object->allowed_guids, bounds_checker,
                                     &allowed_guids_validate_params)) {
    return false;
  }

  return true;
}

void PermissionProvider_HasDevicePermission_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&allowed_guids, handles);
}

void PermissionProvider_HasDevicePermission_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&allowed_guids, handles);
}

PermissionProvider_HasDevicePermission_ResponseParams_Data::PermissionProvider_HasDevicePermission_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPermissionProvider_HasConfigurationPermission_Name = 1;

class PermissionProvider_HasConfigurationPermission_Params_Data {
 public:
  static PermissionProvider_HasConfigurationPermission_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t requested_configuration;
  uint8_t pad0_[7];
  mojo::internal::StructPointer<device::usb::internal::DeviceInfo_Data> device;

 private:
  PermissionProvider_HasConfigurationPermission_Params_Data();
  ~PermissionProvider_HasConfigurationPermission_Params_Data() = delete;
};
static_assert(sizeof(PermissionProvider_HasConfigurationPermission_Params_Data) == 24,
              "Bad sizeof(PermissionProvider_HasConfigurationPermission_Params_Data)");

// static
PermissionProvider_HasConfigurationPermission_Params_Data* PermissionProvider_HasConfigurationPermission_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionProvider_HasConfigurationPermission_Params_Data))) PermissionProvider_HasConfigurationPermission_Params_Data();
}

// static
bool PermissionProvider_HasConfigurationPermission_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionProvider_HasConfigurationPermission_Params_Data* object = static_cast<const PermissionProvider_HasConfigurationPermission_Params_Data*>(data);

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
          object->device, "null device field in PermissionProvider_HasConfigurationPermission_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->device, bounds_checker))
    return false;

  return true;
}

void PermissionProvider_HasConfigurationPermission_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&device, handles);
}

void PermissionProvider_HasConfigurationPermission_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&device, handles);
}

PermissionProvider_HasConfigurationPermission_Params_Data::PermissionProvider_HasConfigurationPermission_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class PermissionProvider_HasConfigurationPermission_ResponseParams_Data {
 public:
  static PermissionProvider_HasConfigurationPermission_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t allowed : 1;
  uint8_t padfinal_[7];

 private:
  PermissionProvider_HasConfigurationPermission_ResponseParams_Data();
  ~PermissionProvider_HasConfigurationPermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(PermissionProvider_HasConfigurationPermission_ResponseParams_Data) == 16,
              "Bad sizeof(PermissionProvider_HasConfigurationPermission_ResponseParams_Data)");

// static
PermissionProvider_HasConfigurationPermission_ResponseParams_Data* PermissionProvider_HasConfigurationPermission_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionProvider_HasConfigurationPermission_ResponseParams_Data))) PermissionProvider_HasConfigurationPermission_ResponseParams_Data();
}

// static
bool PermissionProvider_HasConfigurationPermission_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionProvider_HasConfigurationPermission_ResponseParams_Data* object = static_cast<const PermissionProvider_HasConfigurationPermission_ResponseParams_Data*>(data);

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

void PermissionProvider_HasConfigurationPermission_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void PermissionProvider_HasConfigurationPermission_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

PermissionProvider_HasConfigurationPermission_ResponseParams_Data::PermissionProvider_HasConfigurationPermission_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPermissionProvider_HasInterfacePermission_Name = 2;

class PermissionProvider_HasInterfacePermission_Params_Data {
 public:
  static PermissionProvider_HasInterfacePermission_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t requested_interface;
  uint8_t configuration_value;
  uint8_t pad1_[6];
  mojo::internal::StructPointer<device::usb::internal::DeviceInfo_Data> device;

 private:
  PermissionProvider_HasInterfacePermission_Params_Data();
  ~PermissionProvider_HasInterfacePermission_Params_Data() = delete;
};
static_assert(sizeof(PermissionProvider_HasInterfacePermission_Params_Data) == 24,
              "Bad sizeof(PermissionProvider_HasInterfacePermission_Params_Data)");

// static
PermissionProvider_HasInterfacePermission_Params_Data* PermissionProvider_HasInterfacePermission_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionProvider_HasInterfacePermission_Params_Data))) PermissionProvider_HasInterfacePermission_Params_Data();
}

// static
bool PermissionProvider_HasInterfacePermission_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionProvider_HasInterfacePermission_Params_Data* object = static_cast<const PermissionProvider_HasInterfacePermission_Params_Data*>(data);

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
          object->device, "null device field in PermissionProvider_HasInterfacePermission_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->device, bounds_checker))
    return false;

  return true;
}

void PermissionProvider_HasInterfacePermission_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&device, handles);
}

void PermissionProvider_HasInterfacePermission_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&device, handles);
}

PermissionProvider_HasInterfacePermission_Params_Data::PermissionProvider_HasInterfacePermission_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class PermissionProvider_HasInterfacePermission_ResponseParams_Data {
 public:
  static PermissionProvider_HasInterfacePermission_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t allowed : 1;
  uint8_t padfinal_[7];

 private:
  PermissionProvider_HasInterfacePermission_ResponseParams_Data();
  ~PermissionProvider_HasInterfacePermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(PermissionProvider_HasInterfacePermission_ResponseParams_Data) == 16,
              "Bad sizeof(PermissionProvider_HasInterfacePermission_ResponseParams_Data)");

// static
PermissionProvider_HasInterfacePermission_ResponseParams_Data* PermissionProvider_HasInterfacePermission_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionProvider_HasInterfacePermission_ResponseParams_Data))) PermissionProvider_HasInterfacePermission_ResponseParams_Data();
}

// static
bool PermissionProvider_HasInterfacePermission_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionProvider_HasInterfacePermission_ResponseParams_Data* object = static_cast<const PermissionProvider_HasInterfacePermission_ResponseParams_Data*>(data);

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

void PermissionProvider_HasInterfacePermission_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void PermissionProvider_HasInterfacePermission_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

PermissionProvider_HasInterfacePermission_ResponseParams_Data::PermissionProvider_HasInterfacePermission_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPermissionProvider_Bind_Name = 3;

class PermissionProvider_Bind_Params_Data {
 public:
  static PermissionProvider_Bind_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::MessagePipeHandle request;
  uint8_t padfinal_[4];

 private:
  PermissionProvider_Bind_Params_Data();
  ~PermissionProvider_Bind_Params_Data() = delete;
};
static_assert(sizeof(PermissionProvider_Bind_Params_Data) == 16,
              "Bad sizeof(PermissionProvider_Bind_Params_Data)");

// static
PermissionProvider_Bind_Params_Data* PermissionProvider_Bind_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionProvider_Bind_Params_Data))) PermissionProvider_Bind_Params_Data();
}

// static
bool PermissionProvider_Bind_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionProvider_Bind_Params_Data* object = static_cast<const PermissionProvider_Bind_Params_Data*>(data);

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

  const mojo::Handle request_handle = object->request;
  if (!mojo::internal::ValidateHandleNonNullable(
          request_handle,
          "invalid request field in PermissionProvider_Bind_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(request_handle, bounds_checker))
    return false;

  return true;
}

void PermissionProvider_Bind_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&request, handles);
}

void PermissionProvider_Bind_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&request, handles);
}

PermissionProvider_Bind_Params_Data::PermissionProvider_Bind_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char PermissionProvider::Name_[] = "device::usb::PermissionProvider";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t PermissionProvider::Version_;
class PermissionProvider_HasDevicePermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionProvider_HasDevicePermission_ForwardToCallback(
      const PermissionProvider::HasDevicePermissionCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionProvider::HasDevicePermissionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionProvider_HasDevicePermission_ForwardToCallback);
};
bool PermissionProvider_HasDevicePermission_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionProvider_HasDevicePermission_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionProvider_HasDevicePermission_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::Array<mojo::String> p_allowed_guids{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->allowed_guids.ptr, &p_allowed_guids, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_allowed_guids));
  return true;
}
class PermissionProvider_HasConfigurationPermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionProvider_HasConfigurationPermission_ForwardToCallback(
      const PermissionProvider::HasConfigurationPermissionCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionProvider::HasConfigurationPermissionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionProvider_HasConfigurationPermission_ForwardToCallback);
};
bool PermissionProvider_HasConfigurationPermission_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionProvider_HasConfigurationPermission_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionProvider_HasConfigurationPermission_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  bool p_allowed{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_allowed = params->allowed;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_allowed);
  return true;
}
class PermissionProvider_HasInterfacePermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionProvider_HasInterfacePermission_ForwardToCallback(
      const PermissionProvider::HasInterfacePermissionCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionProvider::HasInterfacePermissionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionProvider_HasInterfacePermission_ForwardToCallback);
};
bool PermissionProvider_HasInterfacePermission_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionProvider_HasInterfacePermission_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionProvider_HasInterfacePermission_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  bool p_allowed{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_allowed = params->allowed;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_allowed);
  return true;
}

PermissionProviderProxy::PermissionProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void PermissionProviderProxy::HasDevicePermission(
    mojo::Array<device::usb::DeviceInfoPtr> in_requested_devices, const HasDevicePermissionCallback& callback) {
  size_t size = sizeof(internal::PermissionProvider_HasDevicePermission_Params_Data);
  size += GetSerializedSize_(in_requested_devices);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionProvider_HasDevicePermission_Name, size);

  internal::PermissionProvider_HasDevicePermission_Params_Data* params =
      internal::PermissionProvider_HasDevicePermission_Params_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams requested_devices_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_requested_devices), builder.buffer(),
      &params->requested_devices.ptr, &requested_devices_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->requested_devices.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null requested_devices in PermissionProvider.HasDevicePermission request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionProvider_HasDevicePermission_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void PermissionProviderProxy::HasConfigurationPermission(
    uint8_t in_requested_configuration, device::usb::DeviceInfoPtr in_device, const HasConfigurationPermissionCallback& callback) {
  size_t size = sizeof(internal::PermissionProvider_HasConfigurationPermission_Params_Data);
  size += GetSerializedSize_(in_device);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionProvider_HasConfigurationPermission_Name, size);

  internal::PermissionProvider_HasConfigurationPermission_Params_Data* params =
      internal::PermissionProvider_HasConfigurationPermission_Params_Data::New(builder.buffer());
  params->requested_configuration = in_requested_configuration;
  Serialize_(std::move(in_device), builder.buffer(), &params->device.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->device.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device in PermissionProvider.HasConfigurationPermission request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionProvider_HasConfigurationPermission_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void PermissionProviderProxy::HasInterfacePermission(
    uint8_t in_requested_interface, uint8_t in_configuration_value, device::usb::DeviceInfoPtr in_device, const HasInterfacePermissionCallback& callback) {
  size_t size = sizeof(internal::PermissionProvider_HasInterfacePermission_Params_Data);
  size += GetSerializedSize_(in_device);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionProvider_HasInterfacePermission_Name, size);

  internal::PermissionProvider_HasInterfacePermission_Params_Data* params =
      internal::PermissionProvider_HasInterfacePermission_Params_Data::New(builder.buffer());
  params->requested_interface = in_requested_interface;
  params->configuration_value = in_configuration_value;
  Serialize_(std::move(in_device), builder.buffer(), &params->device.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->device.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device in PermissionProvider.HasInterfacePermission request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionProvider_HasInterfacePermission_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void PermissionProviderProxy::Bind(
    mojo::InterfaceRequest<PermissionProvider> in_request) {
  size_t size = sizeof(internal::PermissionProvider_Bind_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPermissionProvider_Bind_Name, size);

  internal::PermissionProvider_Bind_Params_Data* params =
      internal::PermissionProvider_Bind_Params_Data::New(builder.buffer());
  params->request = in_request.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->request.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in PermissionProvider.Bind request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
class PermissionProvider_HasDevicePermission_ProxyToResponder
    : public PermissionProvider::HasDevicePermissionCallback::Runnable {
 public:
  ~PermissionProvider_HasDevicePermission_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PermissionProvider::HasDevicePermission(std::move(p_requested_devices), callback) "
        "was never run.";
  }

  PermissionProvider_HasDevicePermission_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::Array<mojo::String> in_allowed_guids) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionProvider_HasDevicePermission_ProxyToResponder);
};
void PermissionProvider_HasDevicePermission_ProxyToResponder::Run(
    mojo::Array<mojo::String> in_allowed_guids) const {
  size_t size = sizeof(internal::PermissionProvider_HasDevicePermission_ResponseParams_Data);
  size += GetSerializedSize_(in_allowed_guids);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionProvider_HasDevicePermission_Name, size, request_id_);
  internal::PermissionProvider_HasDevicePermission_ResponseParams_Data* params =
      internal::PermissionProvider_HasDevicePermission_ResponseParams_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams allowed_guids_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  mojo::SerializeArray_(std::move(in_allowed_guids), builder.buffer(),
      &params->allowed_guids.ptr, &allowed_guids_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->allowed_guids.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null allowed_guids in PermissionProvider.HasDevicePermission response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class PermissionProvider_HasConfigurationPermission_ProxyToResponder
    : public PermissionProvider::HasConfigurationPermissionCallback::Runnable {
 public:
  ~PermissionProvider_HasConfigurationPermission_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PermissionProvider::HasConfigurationPermission(p_requested_configuration, std::move(p_device), callback) "
        "was never run.";
  }

  PermissionProvider_HasConfigurationPermission_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_allowed) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionProvider_HasConfigurationPermission_ProxyToResponder);
};
void PermissionProvider_HasConfigurationPermission_ProxyToResponder::Run(
    bool in_allowed) const {
  size_t size = sizeof(internal::PermissionProvider_HasConfigurationPermission_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionProvider_HasConfigurationPermission_Name, size, request_id_);
  internal::PermissionProvider_HasConfigurationPermission_ResponseParams_Data* params =
      internal::PermissionProvider_HasConfigurationPermission_ResponseParams_Data::New(builder.buffer());
  params->allowed = in_allowed;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class PermissionProvider_HasInterfacePermission_ProxyToResponder
    : public PermissionProvider::HasInterfacePermissionCallback::Runnable {
 public:
  ~PermissionProvider_HasInterfacePermission_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PermissionProvider::HasInterfacePermission(p_requested_interface, p_configuration_value, std::move(p_device), callback) "
        "was never run.";
  }

  PermissionProvider_HasInterfacePermission_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_allowed) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionProvider_HasInterfacePermission_ProxyToResponder);
};
void PermissionProvider_HasInterfacePermission_ProxyToResponder::Run(
    bool in_allowed) const {
  size_t size = sizeof(internal::PermissionProvider_HasInterfacePermission_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionProvider_HasInterfacePermission_Name, size, request_id_);
  internal::PermissionProvider_HasInterfacePermission_ResponseParams_Data* params =
      internal::PermissionProvider_HasInterfacePermission_ResponseParams_Data::New(builder.buffer());
  params->allowed = in_allowed;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

PermissionProviderStub::PermissionProviderStub()
    : sink_(nullptr),
      control_message_handler_(PermissionProvider::Version_) {
}

PermissionProviderStub::~PermissionProviderStub() {}

bool PermissionProviderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPermissionProvider_HasDevicePermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.PermissionProvider.HasDevicePermission", __FILE__, __LINE__);
      break;
    }
    case internal::kPermissionProvider_HasConfigurationPermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.PermissionProvider.HasConfigurationPermission", __FILE__, __LINE__);
      break;
    }
    case internal::kPermissionProvider_HasInterfacePermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.PermissionProvider.HasInterfacePermission", __FILE__, __LINE__);
      break;
    }
    case internal::kPermissionProvider_Bind_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device::usb.PermissionProvider.Bind", __FILE__, __LINE__);
      internal::PermissionProvider_Bind_Params_Data* params =
          reinterpret_cast<internal::PermissionProvider_Bind_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::InterfaceRequest<PermissionProvider> p_request{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_request.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->request)));
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionProvider::Bind");
      sink_->Bind(std::move(p_request));
      return true;
    }
  }
  return false;
}

bool PermissionProviderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPermissionProvider_HasDevicePermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::PermissionProvider::HasDevicePermission", __FILE__, __LINE__);
      internal::PermissionProvider_HasDevicePermission_Params_Data* params =
          reinterpret_cast<internal::PermissionProvider_HasDevicePermission_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::Array<device::usb::DeviceInfoPtr> p_requested_devices{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->requested_devices.ptr, &p_requested_devices, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      PermissionProvider::HasDevicePermissionCallback::Runnable* runnable =
          new PermissionProvider_HasDevicePermission_ProxyToResponder(
              message->request_id(), responder);
      PermissionProvider::HasDevicePermissionCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionProvider::HasDevicePermission");
      sink_->HasDevicePermission(std::move(p_requested_devices), callback);
      return true;
    }
    case internal::kPermissionProvider_HasConfigurationPermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::PermissionProvider::HasConfigurationPermission", __FILE__, __LINE__);
      internal::PermissionProvider_HasConfigurationPermission_Params_Data* params =
          reinterpret_cast<internal::PermissionProvider_HasConfigurationPermission_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint8_t p_requested_configuration{};
      device::usb::DeviceInfoPtr p_device{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_requested_configuration = params->requested_configuration;
        if (!Deserialize_(params->device.ptr, &p_device, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      PermissionProvider::HasConfigurationPermissionCallback::Runnable* runnable =
          new PermissionProvider_HasConfigurationPermission_ProxyToResponder(
              message->request_id(), responder);
      PermissionProvider::HasConfigurationPermissionCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionProvider::HasConfigurationPermission");
      sink_->HasConfigurationPermission(p_requested_configuration, std::move(p_device), callback);
      return true;
    }
    case internal::kPermissionProvider_HasInterfacePermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::PermissionProvider::HasInterfacePermission", __FILE__, __LINE__);
      internal::PermissionProvider_HasInterfacePermission_Params_Data* params =
          reinterpret_cast<internal::PermissionProvider_HasInterfacePermission_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint8_t p_requested_interface{};
      uint8_t p_configuration_value{};
      device::usb::DeviceInfoPtr p_device{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_requested_interface = params->requested_interface;
        p_configuration_value = params->configuration_value;
        if (!Deserialize_(params->device.ptr, &p_device, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      PermissionProvider::HasInterfacePermissionCallback::Runnable* runnable =
          new PermissionProvider_HasInterfacePermission_ProxyToResponder(
              message->request_id(), responder);
      PermissionProvider::HasInterfacePermissionCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionProvider::HasInterfacePermission");
      sink_->HasInterfacePermission(p_requested_interface, p_configuration_value, std::move(p_device), callback);
      return true;
    }
    case internal::kPermissionProvider_Bind_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::usb::PermissionProvider::Bind", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

PermissionProviderRequestValidator::PermissionProviderRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PermissionProviderRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPermissionProvider_HasDevicePermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionProvider_HasDevicePermission_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionProvider_HasConfigurationPermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionProvider_HasConfigurationPermission_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionProvider_HasInterfacePermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionProvider_HasInterfacePermission_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionProvider_Bind_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionProvider_Bind_Params_Data>(message)) {
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

PermissionProviderResponseValidator::PermissionProviderResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PermissionProviderResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kPermissionProvider_HasDevicePermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionProvider_HasDevicePermission_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionProvider_HasConfigurationPermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionProvider_HasConfigurationPermission_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionProvider_HasInterfacePermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionProvider_HasInterfacePermission_ResponseParams_Data>(message)) {
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
}  // namespace usb
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif