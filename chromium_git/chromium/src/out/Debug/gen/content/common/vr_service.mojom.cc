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

#include "content/common/vr_service.mojom.h"

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
namespace content {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kVRService_GetDevices_Name = 0;

class VRService_GetDevices_Params_Data {
 public:
  static VRService_GetDevices_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  VRService_GetDevices_Params_Data();
  ~VRService_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(VRService_GetDevices_Params_Data) == 8,
              "Bad sizeof(VRService_GetDevices_Params_Data)");

// static
VRService_GetDevices_Params_Data* VRService_GetDevices_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VRService_GetDevices_Params_Data))) VRService_GetDevices_Params_Data();
}

// static
bool VRService_GetDevices_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VRService_GetDevices_Params_Data* object = static_cast<const VRService_GetDevices_Params_Data*>(data);

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

void VRService_GetDevices_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void VRService_GetDevices_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

VRService_GetDevices_Params_Data::VRService_GetDevices_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class VRService_GetDevices_ResponseParams_Data {
 public:
  static VRService_GetDevices_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::VRDeviceInfo_Data*> devices;

 private:
  VRService_GetDevices_ResponseParams_Data();
  ~VRService_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(VRService_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(VRService_GetDevices_ResponseParams_Data)");

// static
VRService_GetDevices_ResponseParams_Data* VRService_GetDevices_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VRService_GetDevices_ResponseParams_Data))) VRService_GetDevices_ResponseParams_Data();
}

// static
bool VRService_GetDevices_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VRService_GetDevices_ResponseParams_Data* object = static_cast<const VRService_GetDevices_ResponseParams_Data*>(data);

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
          object->devices, "null devices field in VRService_GetDevices_ResponseParams struct")) {
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

void VRService_GetDevices_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&devices, handles);
}

void VRService_GetDevices_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&devices, handles);
}

VRService_GetDevices_ResponseParams_Data::VRService_GetDevices_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kVRService_GetSensorState_Name = 1;

class VRService_GetSensorState_Params_Data {
 public:
  static VRService_GetSensorState_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t index;
  uint8_t padfinal_[4];

 private:
  VRService_GetSensorState_Params_Data();
  ~VRService_GetSensorState_Params_Data() = delete;
};
static_assert(sizeof(VRService_GetSensorState_Params_Data) == 16,
              "Bad sizeof(VRService_GetSensorState_Params_Data)");

// static
VRService_GetSensorState_Params_Data* VRService_GetSensorState_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VRService_GetSensorState_Params_Data))) VRService_GetSensorState_Params_Data();
}

// static
bool VRService_GetSensorState_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VRService_GetSensorState_Params_Data* object = static_cast<const VRService_GetSensorState_Params_Data*>(data);

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

void VRService_GetSensorState_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void VRService_GetSensorState_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

VRService_GetSensorState_Params_Data::VRService_GetSensorState_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class VRService_GetSensorState_ResponseParams_Data {
 public:
  static VRService_GetSensorState_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::VRSensorState_Data> state;

 private:
  VRService_GetSensorState_ResponseParams_Data();
  ~VRService_GetSensorState_ResponseParams_Data() = delete;
};
static_assert(sizeof(VRService_GetSensorState_ResponseParams_Data) == 16,
              "Bad sizeof(VRService_GetSensorState_ResponseParams_Data)");

// static
VRService_GetSensorState_ResponseParams_Data* VRService_GetSensorState_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VRService_GetSensorState_ResponseParams_Data))) VRService_GetSensorState_ResponseParams_Data();
}

// static
bool VRService_GetSensorState_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VRService_GetSensorState_ResponseParams_Data* object = static_cast<const VRService_GetSensorState_ResponseParams_Data*>(data);

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
          object->state, "null state field in VRService_GetSensorState_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->state, bounds_checker))
    return false;

  return true;
}

void VRService_GetSensorState_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&state, handles);
}

void VRService_GetSensorState_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&state, handles);
}

VRService_GetSensorState_ResponseParams_Data::VRService_GetSensorState_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kVRService_ResetSensor_Name = 2;

class VRService_ResetSensor_Params_Data {
 public:
  static VRService_ResetSensor_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t index;
  uint8_t padfinal_[4];

 private:
  VRService_ResetSensor_Params_Data();
  ~VRService_ResetSensor_Params_Data() = delete;
};
static_assert(sizeof(VRService_ResetSensor_Params_Data) == 16,
              "Bad sizeof(VRService_ResetSensor_Params_Data)");

// static
VRService_ResetSensor_Params_Data* VRService_ResetSensor_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VRService_ResetSensor_Params_Data))) VRService_ResetSensor_Params_Data();
}

// static
bool VRService_ResetSensor_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VRService_ResetSensor_Params_Data* object = static_cast<const VRService_ResetSensor_Params_Data*>(data);

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

void VRService_ResetSensor_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void VRService_ResetSensor_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

VRService_ResetSensor_Params_Data::VRService_ResetSensor_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
VRVector3_Data* VRVector3_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VRVector3_Data))) VRVector3_Data();
}

// static
bool VRVector3_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VRVector3_Data* object = static_cast<const VRVector3_Data*>(data);

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

void VRVector3_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void VRVector3_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

VRVector3_Data::VRVector3_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
VRVector4_Data* VRVector4_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VRVector4_Data))) VRVector4_Data();
}

// static
bool VRVector4_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VRVector4_Data* object = static_cast<const VRVector4_Data*>(data);

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

void VRVector4_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void VRVector4_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

VRVector4_Data::VRVector4_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
VRRect_Data* VRRect_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VRRect_Data))) VRRect_Data();
}

// static
bool VRRect_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VRRect_Data* object = static_cast<const VRRect_Data*>(data);

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

void VRRect_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void VRRect_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

VRRect_Data::VRRect_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
VRFieldOfView_Data* VRFieldOfView_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VRFieldOfView_Data))) VRFieldOfView_Data();
}

// static
bool VRFieldOfView_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VRFieldOfView_Data* object = static_cast<const VRFieldOfView_Data*>(data);

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

void VRFieldOfView_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void VRFieldOfView_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

VRFieldOfView_Data::VRFieldOfView_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
VRSensorState_Data* VRSensorState_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VRSensorState_Data))) VRSensorState_Data();
}

// static
bool VRSensorState_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VRSensorState_Data* object = static_cast<const VRSensorState_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->orientation, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->position, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->angularVelocity, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->linearVelocity, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->angularAcceleration, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->linearAcceleration, bounds_checker))
    return false;

  return true;
}

void VRSensorState_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&orientation, handles);
  mojo::internal::Encode(&position, handles);
  mojo::internal::Encode(&angularVelocity, handles);
  mojo::internal::Encode(&linearVelocity, handles);
  mojo::internal::Encode(&angularAcceleration, handles);
  mojo::internal::Encode(&linearAcceleration, handles);
}

void VRSensorState_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&orientation, handles);
  mojo::internal::Decode(&position, handles);
  mojo::internal::Decode(&angularVelocity, handles);
  mojo::internal::Decode(&linearVelocity, handles);
  mojo::internal::Decode(&angularAcceleration, handles);
  mojo::internal::Decode(&linearAcceleration, handles);
}

VRSensorState_Data::VRSensorState_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
VREyeParameters_Data* VREyeParameters_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VREyeParameters_Data))) VREyeParameters_Data();
}

// static
bool VREyeParameters_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VREyeParameters_Data* object = static_cast<const VREyeParameters_Data*>(data);

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
          object->minimumFieldOfView, "null minimumFieldOfView field in VREyeParameters struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->minimumFieldOfView, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->maximumFieldOfView, "null maximumFieldOfView field in VREyeParameters struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->maximumFieldOfView, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->recommendedFieldOfView, "null recommendedFieldOfView field in VREyeParameters struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->recommendedFieldOfView, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->eyeTranslation, "null eyeTranslation field in VREyeParameters struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->eyeTranslation, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->renderRect, "null renderRect field in VREyeParameters struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->renderRect, bounds_checker))
    return false;

  return true;
}

void VREyeParameters_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&minimumFieldOfView, handles);
  mojo::internal::Encode(&maximumFieldOfView, handles);
  mojo::internal::Encode(&recommendedFieldOfView, handles);
  mojo::internal::Encode(&eyeTranslation, handles);
  mojo::internal::Encode(&renderRect, handles);
}

void VREyeParameters_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&minimumFieldOfView, handles);
  mojo::internal::Decode(&maximumFieldOfView, handles);
  mojo::internal::Decode(&recommendedFieldOfView, handles);
  mojo::internal::Decode(&eyeTranslation, handles);
  mojo::internal::Decode(&renderRect, handles);
}

VREyeParameters_Data::VREyeParameters_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
VRHMDInfo_Data* VRHMDInfo_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VRHMDInfo_Data))) VRHMDInfo_Data();
}

// static
bool VRHMDInfo_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VRHMDInfo_Data* object = static_cast<const VRHMDInfo_Data*>(data);

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
          object->leftEye, "null leftEye field in VRHMDInfo struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->leftEye, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->rightEye, "null rightEye field in VRHMDInfo struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->rightEye, bounds_checker))
    return false;

  return true;
}

void VRHMDInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&leftEye, handles);
  mojo::internal::Encode(&rightEye, handles);
}

void VRHMDInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&leftEye, handles);
  mojo::internal::Decode(&rightEye, handles);
}

VRHMDInfo_Data::VRHMDInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
VRDeviceInfo_Data* VRDeviceInfo_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(VRDeviceInfo_Data))) VRDeviceInfo_Data();
}

// static
bool VRDeviceInfo_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const VRDeviceInfo_Data* object = static_cast<const VRDeviceInfo_Data*>(data);

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
          object->deviceName, "null deviceName field in VRDeviceInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams deviceName_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->deviceName, bounds_checker,
                                     &deviceName_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->hmdInfo, bounds_checker))
    return false;

  return true;
}

void VRDeviceInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&deviceName, handles);
  mojo::internal::Encode(&hmdInfo, handles);
}

void VRDeviceInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&deviceName, handles);
  mojo::internal::Decode(&hmdInfo, handles);
}

VRDeviceInfo_Data::VRDeviceInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
VRVector3Ptr VRVector3::New() {
  VRVector3Ptr rv;
  mojo::internal::StructHelper<VRVector3>::Initialize(&rv);
  return rv;
}

VRVector3::VRVector3()
    : x(),
      y(),
      z() {
}

VRVector3::~VRVector3() {
}


VRVector3Ptr VRVector3::Clone() const {
  VRVector3Ptr rv(New());
  rv->x = x;
  rv->y = y;
  rv->z = z;
  return rv;
}


bool VRVector3::Equals(const VRVector3& other) const {
  if (!mojo::internal::ValueTraits<float>::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->y, other.y))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->z, other.z))
    return false;
  return true;
}// static
VRVector4Ptr VRVector4::New() {
  VRVector4Ptr rv;
  mojo::internal::StructHelper<VRVector4>::Initialize(&rv);
  return rv;
}

VRVector4::VRVector4()
    : x(),
      y(),
      z(),
      w() {
}

VRVector4::~VRVector4() {
}


VRVector4Ptr VRVector4::Clone() const {
  VRVector4Ptr rv(New());
  rv->x = x;
  rv->y = y;
  rv->z = z;
  rv->w = w;
  return rv;
}


bool VRVector4::Equals(const VRVector4& other) const {
  if (!mojo::internal::ValueTraits<float>::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->y, other.y))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->z, other.z))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->w, other.w))
    return false;
  return true;
}// static
VRRectPtr VRRect::New() {
  VRRectPtr rv;
  mojo::internal::StructHelper<VRRect>::Initialize(&rv);
  return rv;
}

VRRect::VRRect()
    : x(),
      y(),
      width(),
      height() {
}

VRRect::~VRRect() {
}


VRRectPtr VRRect::Clone() const {
  VRRectPtr rv(New());
  rv->x = x;
  rv->y = y;
  rv->width = width;
  rv->height = height;
  return rv;
}


bool VRRect::Equals(const VRRect& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->y, other.y))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->height, other.height))
    return false;
  return true;
}// static
VRFieldOfViewPtr VRFieldOfView::New() {
  VRFieldOfViewPtr rv;
  mojo::internal::StructHelper<VRFieldOfView>::Initialize(&rv);
  return rv;
}

VRFieldOfView::VRFieldOfView()
    : upDegrees(),
      downDegrees(),
      leftDegrees(),
      rightDegrees() {
}

VRFieldOfView::~VRFieldOfView() {
}


VRFieldOfViewPtr VRFieldOfView::Clone() const {
  VRFieldOfViewPtr rv(New());
  rv->upDegrees = upDegrees;
  rv->downDegrees = downDegrees;
  rv->leftDegrees = leftDegrees;
  rv->rightDegrees = rightDegrees;
  return rv;
}


bool VRFieldOfView::Equals(const VRFieldOfView& other) const {
  if (!mojo::internal::ValueTraits<float>::Equals(this->upDegrees, other.upDegrees))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->downDegrees, other.downDegrees))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->leftDegrees, other.leftDegrees))
    return false;
  if (!mojo::internal::ValueTraits<float>::Equals(this->rightDegrees, other.rightDegrees))
    return false;
  return true;
}// static
VRSensorStatePtr VRSensorState::New() {
  VRSensorStatePtr rv;
  mojo::internal::StructHelper<VRSensorState>::Initialize(&rv);
  return rv;
}

VRSensorState::VRSensorState()
    : timestamp(),
      frameIndex(),
      orientation(),
      position(),
      angularVelocity(),
      linearVelocity(),
      angularAcceleration(),
      linearAcceleration() {
}

VRSensorState::~VRSensorState() {
}


VRSensorStatePtr VRSensorState::Clone() const {
  VRSensorStatePtr rv(New());
  rv->timestamp = timestamp;
  rv->frameIndex = frameIndex;
  rv->orientation = orientation.Clone();
  rv->position = position.Clone();
  rv->angularVelocity = angularVelocity.Clone();
  rv->linearVelocity = linearVelocity.Clone();
  rv->angularAcceleration = angularAcceleration.Clone();
  rv->linearAcceleration = linearAcceleration.Clone();
  return rv;
}


bool VRSensorState::Equals(const VRSensorState& other) const {
  if (!mojo::internal::ValueTraits<double>::Equals(this->timestamp, other.timestamp))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->frameIndex, other.frameIndex))
    return false;
  if (!mojo::internal::ValueTraits<VRVector4Ptr>::Equals(this->orientation, other.orientation))
    return false;
  if (!mojo::internal::ValueTraits<VRVector3Ptr>::Equals(this->position, other.position))
    return false;
  if (!mojo::internal::ValueTraits<VRVector3Ptr>::Equals(this->angularVelocity, other.angularVelocity))
    return false;
  if (!mojo::internal::ValueTraits<VRVector3Ptr>::Equals(this->linearVelocity, other.linearVelocity))
    return false;
  if (!mojo::internal::ValueTraits<VRVector3Ptr>::Equals(this->angularAcceleration, other.angularAcceleration))
    return false;
  if (!mojo::internal::ValueTraits<VRVector3Ptr>::Equals(this->linearAcceleration, other.linearAcceleration))
    return false;
  return true;
}// static
VREyeParametersPtr VREyeParameters::New() {
  VREyeParametersPtr rv;
  mojo::internal::StructHelper<VREyeParameters>::Initialize(&rv);
  return rv;
}

VREyeParameters::VREyeParameters()
    : minimumFieldOfView(),
      maximumFieldOfView(),
      recommendedFieldOfView(),
      eyeTranslation(),
      renderRect() {
}

VREyeParameters::~VREyeParameters() {
}


VREyeParametersPtr VREyeParameters::Clone() const {
  VREyeParametersPtr rv(New());
  rv->minimumFieldOfView = minimumFieldOfView.Clone();
  rv->maximumFieldOfView = maximumFieldOfView.Clone();
  rv->recommendedFieldOfView = recommendedFieldOfView.Clone();
  rv->eyeTranslation = eyeTranslation.Clone();
  rv->renderRect = renderRect.Clone();
  return rv;
}


bool VREyeParameters::Equals(const VREyeParameters& other) const {
  if (!mojo::internal::ValueTraits<VRFieldOfViewPtr>::Equals(this->minimumFieldOfView, other.minimumFieldOfView))
    return false;
  if (!mojo::internal::ValueTraits<VRFieldOfViewPtr>::Equals(this->maximumFieldOfView, other.maximumFieldOfView))
    return false;
  if (!mojo::internal::ValueTraits<VRFieldOfViewPtr>::Equals(this->recommendedFieldOfView, other.recommendedFieldOfView))
    return false;
  if (!mojo::internal::ValueTraits<VRVector3Ptr>::Equals(this->eyeTranslation, other.eyeTranslation))
    return false;
  if (!mojo::internal::ValueTraits<VRRectPtr>::Equals(this->renderRect, other.renderRect))
    return false;
  return true;
}// static
VRHMDInfoPtr VRHMDInfo::New() {
  VRHMDInfoPtr rv;
  mojo::internal::StructHelper<VRHMDInfo>::Initialize(&rv);
  return rv;
}

VRHMDInfo::VRHMDInfo()
    : leftEye(),
      rightEye() {
}

VRHMDInfo::~VRHMDInfo() {
}


VRHMDInfoPtr VRHMDInfo::Clone() const {
  VRHMDInfoPtr rv(New());
  rv->leftEye = leftEye.Clone();
  rv->rightEye = rightEye.Clone();
  return rv;
}


bool VRHMDInfo::Equals(const VRHMDInfo& other) const {
  if (!mojo::internal::ValueTraits<VREyeParametersPtr>::Equals(this->leftEye, other.leftEye))
    return false;
  if (!mojo::internal::ValueTraits<VREyeParametersPtr>::Equals(this->rightEye, other.rightEye))
    return false;
  return true;
}// static
VRDeviceInfoPtr VRDeviceInfo::New() {
  VRDeviceInfoPtr rv;
  mojo::internal::StructHelper<VRDeviceInfo>::Initialize(&rv);
  return rv;
}

VRDeviceInfo::VRDeviceInfo()
    : index(),
      deviceName(),
      hmdInfo() {
}

VRDeviceInfo::~VRDeviceInfo() {
}


VRDeviceInfoPtr VRDeviceInfo::Clone() const {
  VRDeviceInfoPtr rv(New());
  rv->index = index;
  rv->deviceName = deviceName;
  rv->hmdInfo = hmdInfo.Clone();
  return rv;
}


bool VRDeviceInfo::Equals(const VRDeviceInfo& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->index, other.index))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->deviceName, other.deviceName))
    return false;
  if (!mojo::internal::ValueTraits<VRHMDInfoPtr>::Equals(this->hmdInfo, other.hmdInfo))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char VRService::Name_[] = "content::VRService";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t VRService::Version_;
class VRService_GetDevices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VRService_GetDevices_ForwardToCallback(
      const VRService::GetDevicesCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VRService::GetDevicesCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(VRService_GetDevices_ForwardToCallback);
};
bool VRService_GetDevices_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::VRService_GetDevices_ResponseParams_Data* params =
      reinterpret_cast<internal::VRService_GetDevices_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::Array<VRDeviceInfoPtr> p_devices{};
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
class VRService_GetSensorState_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VRService_GetSensorState_ForwardToCallback(
      const VRService::GetSensorStateCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VRService::GetSensorStateCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(VRService_GetSensorState_ForwardToCallback);
};
bool VRService_GetSensorState_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::VRService_GetSensorState_ResponseParams_Data* params =
      reinterpret_cast<internal::VRService_GetSensorState_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  VRSensorStatePtr p_state{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->state.ptr, &p_state, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_state));
  return true;
}

VRServiceProxy::VRServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void VRServiceProxy::GetDevices(
    const GetDevicesCallback& callback) {
  size_t size = sizeof(internal::VRService_GetDevices_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kVRService_GetDevices_Name, size);

  internal::VRService_GetDevices_Params_Data* params =
      internal::VRService_GetDevices_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new VRService_GetDevices_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void VRServiceProxy::GetSensorState(
    uint32_t in_index, const GetSensorStateCallback& callback) {
  size_t size = sizeof(internal::VRService_GetSensorState_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kVRService_GetSensorState_Name, size);

  internal::VRService_GetSensorState_Params_Data* params =
      internal::VRService_GetSensorState_Params_Data::New(builder.buffer());
  params->index = in_index;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new VRService_GetSensorState_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void VRServiceProxy::ResetSensor(
    uint32_t in_index) {
  size_t size = sizeof(internal::VRService_ResetSensor_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kVRService_ResetSensor_Name, size);

  internal::VRService_ResetSensor_Params_Data* params =
      internal::VRService_ResetSensor_Params_Data::New(builder.buffer());
  params->index = in_index;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
class VRService_GetDevices_ProxyToResponder
    : public VRService::GetDevicesCallback::Runnable {
 public:
  ~VRService_GetDevices_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "VRService::GetDevices(callback) "
        "was never run.";
  }

  VRService_GetDevices_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::Array<VRDeviceInfoPtr> in_devices) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(VRService_GetDevices_ProxyToResponder);
};
void VRService_GetDevices_ProxyToResponder::Run(
    mojo::Array<VRDeviceInfoPtr> in_devices) const {
  size_t size = sizeof(internal::VRService_GetDevices_ResponseParams_Data);
  size += GetSerializedSize_(in_devices);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kVRService_GetDevices_Name, size, request_id_);
  internal::VRService_GetDevices_ResponseParams_Data* params =
      internal::VRService_GetDevices_ResponseParams_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams devices_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_devices), builder.buffer(),
      &params->devices.ptr, &devices_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->devices.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null devices in VRService.GetDevices response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class VRService_GetSensorState_ProxyToResponder
    : public VRService::GetSensorStateCallback::Runnable {
 public:
  ~VRService_GetSensorState_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "VRService::GetSensorState(p_index, callback) "
        "was never run.";
  }

  VRService_GetSensorState_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(VRSensorStatePtr in_state) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(VRService_GetSensorState_ProxyToResponder);
};
void VRService_GetSensorState_ProxyToResponder::Run(
    VRSensorStatePtr in_state) const {
  size_t size = sizeof(internal::VRService_GetSensorState_ResponseParams_Data);
  size += GetSerializedSize_(in_state);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kVRService_GetSensorState_Name, size, request_id_);
  internal::VRService_GetSensorState_ResponseParams_Data* params =
      internal::VRService_GetSensorState_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_state), builder.buffer(), &params->state.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->state.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null state in VRService.GetSensorState response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

VRServiceStub::VRServiceStub()
    : sink_(nullptr),
      control_message_handler_(VRService::Version_) {
}

VRServiceStub::~VRServiceStub() {}

bool VRServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kVRService_GetDevices_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.VRService.GetDevices", __FILE__, __LINE__);
      break;
    }
    case internal::kVRService_GetSensorState_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.VRService.GetSensorState", __FILE__, __LINE__);
      break;
    }
    case internal::kVRService_ResetSensor_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.VRService.ResetSensor", __FILE__, __LINE__);
      internal::VRService_ResetSensor_Params_Data* params =
          reinterpret_cast<internal::VRService_ResetSensor_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_index{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_index = params->index;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VRService::ResetSensor");
      sink_->ResetSensor(p_index);
      return true;
    }
  }
  return false;
}

bool VRServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kVRService_GetDevices_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::VRService::GetDevices", __FILE__, __LINE__);
      internal::VRService_GetDevices_Params_Data* params =
          reinterpret_cast<internal::VRService_GetDevices_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      VRService::GetDevicesCallback::Runnable* runnable =
          new VRService_GetDevices_ProxyToResponder(
              message->request_id(), responder);
      VRService::GetDevicesCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VRService::GetDevices");
      sink_->GetDevices(callback);
      return true;
    }
    case internal::kVRService_GetSensorState_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::VRService::GetSensorState", __FILE__, __LINE__);
      internal::VRService_GetSensorState_Params_Data* params =
          reinterpret_cast<internal::VRService_GetSensorState_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_index{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_index = params->index;
      } while (false);
      if (!success)
        return false;
      VRService::GetSensorStateCallback::Runnable* runnable =
          new VRService_GetSensorState_ProxyToResponder(
              message->request_id(), responder);
      VRService::GetSensorStateCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VRService::GetSensorState");
      sink_->GetSensorState(p_index, callback);
      return true;
    }
    case internal::kVRService_ResetSensor_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::VRService::ResetSensor", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

VRServiceRequestValidator::VRServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool VRServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kVRService_GetDevices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_GetDevices_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kVRService_GetSensorState_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_GetSensorState_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kVRService_ResetSensor_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_ResetSensor_Params_Data>(message)) {
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

VRServiceResponseValidator::VRServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool VRServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kVRService_GetDevices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_GetDevices_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kVRService_GetSensorState_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VRService_GetSensorState_ResponseParams_Data>(message)) {
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
size_t GetSerializedSize_(const VRVector3Ptr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::VRVector3_Data);
  return size;
}

void Serialize_(VRVector3Ptr input, mojo::internal::Buffer* buf,
                internal::VRVector3_Data** output) {
  if (input) {
    internal::VRVector3_Data* result =
        internal::VRVector3_Data::New(buf);
    result->x = input->x;
    result->y = input->y;
    result->z = input->z;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::VRVector3_Data* input,
                  VRVector3Ptr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    VRVector3Ptr result(VRVector3::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->x = input->x;
      result->y = input->y;
      result->z = input->z;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

VRVector3_Reader::VRVector3_Reader(
    internal::VRVector3_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const VRVector4Ptr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::VRVector4_Data);
  return size;
}

void Serialize_(VRVector4Ptr input, mojo::internal::Buffer* buf,
                internal::VRVector4_Data** output) {
  if (input) {
    internal::VRVector4_Data* result =
        internal::VRVector4_Data::New(buf);
    result->x = input->x;
    result->y = input->y;
    result->z = input->z;
    result->w = input->w;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::VRVector4_Data* input,
                  VRVector4Ptr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    VRVector4Ptr result(VRVector4::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->x = input->x;
      result->y = input->y;
      result->z = input->z;
      result->w = input->w;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

VRVector4_Reader::VRVector4_Reader(
    internal::VRVector4_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const VRRectPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::VRRect_Data);
  return size;
}

void Serialize_(VRRectPtr input, mojo::internal::Buffer* buf,
                internal::VRRect_Data** output) {
  if (input) {
    internal::VRRect_Data* result =
        internal::VRRect_Data::New(buf);
    result->x = input->x;
    result->y = input->y;
    result->width = input->width;
    result->height = input->height;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::VRRect_Data* input,
                  VRRectPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    VRRectPtr result(VRRect::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->x = input->x;
      result->y = input->y;
      result->width = input->width;
      result->height = input->height;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

VRRect_Reader::VRRect_Reader(
    internal::VRRect_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const VRFieldOfViewPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::VRFieldOfView_Data);
  return size;
}

void Serialize_(VRFieldOfViewPtr input, mojo::internal::Buffer* buf,
                internal::VRFieldOfView_Data** output) {
  if (input) {
    internal::VRFieldOfView_Data* result =
        internal::VRFieldOfView_Data::New(buf);
    result->upDegrees = input->upDegrees;
    result->downDegrees = input->downDegrees;
    result->leftDegrees = input->leftDegrees;
    result->rightDegrees = input->rightDegrees;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::VRFieldOfView_Data* input,
                  VRFieldOfViewPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    VRFieldOfViewPtr result(VRFieldOfView::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->upDegrees = input->upDegrees;
      result->downDegrees = input->downDegrees;
      result->leftDegrees = input->leftDegrees;
      result->rightDegrees = input->rightDegrees;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

VRFieldOfView_Reader::VRFieldOfView_Reader(
    internal::VRFieldOfView_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const VRSensorStatePtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::VRSensorState_Data);
  size += GetSerializedSize_(input->orientation);
  size += GetSerializedSize_(input->position);
  size += GetSerializedSize_(input->angularVelocity);
  size += GetSerializedSize_(input->linearVelocity);
  size += GetSerializedSize_(input->angularAcceleration);
  size += GetSerializedSize_(input->linearAcceleration);
  return size;
}

void Serialize_(VRSensorStatePtr input, mojo::internal::Buffer* buf,
                internal::VRSensorState_Data** output) {
  if (input) {
    internal::VRSensorState_Data* result =
        internal::VRSensorState_Data::New(buf);
    result->timestamp = input->timestamp;
    result->frameIndex = input->frameIndex;
    Serialize_(std::move(input->orientation), buf, &result->orientation.ptr);
    Serialize_(std::move(input->position), buf, &result->position.ptr);
    Serialize_(std::move(input->angularVelocity), buf, &result->angularVelocity.ptr);
    Serialize_(std::move(input->linearVelocity), buf, &result->linearVelocity.ptr);
    Serialize_(std::move(input->angularAcceleration), buf, &result->angularAcceleration.ptr);
    Serialize_(std::move(input->linearAcceleration), buf, &result->linearAcceleration.ptr);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::VRSensorState_Data* input,
                  VRSensorStatePtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    VRSensorStatePtr result(VRSensorState::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->timestamp = input->timestamp;
      result->frameIndex = input->frameIndex;
      if (!Deserialize_(input->orientation.ptr, &result->orientation, context))
        success = false;
      if (!Deserialize_(input->position.ptr, &result->position, context))
        success = false;
      if (!Deserialize_(input->angularVelocity.ptr, &result->angularVelocity, context))
        success = false;
      if (!Deserialize_(input->linearVelocity.ptr, &result->linearVelocity, context))
        success = false;
      if (!Deserialize_(input->angularAcceleration.ptr, &result->angularAcceleration, context))
        success = false;
      if (!Deserialize_(input->linearAcceleration.ptr, &result->linearAcceleration, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

VRSensorState_Reader::VRSensorState_Reader(
    internal::VRSensorState_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
VRVector4_Reader VRSensorState_Reader::orientation() const {
  return VRVector4_Reader(data_->orientation.ptr, context_);
}
VRVector3_Reader VRSensorState_Reader::position() const {
  return VRVector3_Reader(data_->position.ptr, context_);
}
VRVector3_Reader VRSensorState_Reader::angularVelocity() const {
  return VRVector3_Reader(data_->angularVelocity.ptr, context_);
}
VRVector3_Reader VRSensorState_Reader::linearVelocity() const {
  return VRVector3_Reader(data_->linearVelocity.ptr, context_);
}
VRVector3_Reader VRSensorState_Reader::angularAcceleration() const {
  return VRVector3_Reader(data_->angularAcceleration.ptr, context_);
}
VRVector3_Reader VRSensorState_Reader::linearAcceleration() const {
  return VRVector3_Reader(data_->linearAcceleration.ptr, context_);
}
size_t GetSerializedSize_(const VREyeParametersPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::VREyeParameters_Data);
  size += GetSerializedSize_(input->minimumFieldOfView);
  size += GetSerializedSize_(input->maximumFieldOfView);
  size += GetSerializedSize_(input->recommendedFieldOfView);
  size += GetSerializedSize_(input->eyeTranslation);
  size += GetSerializedSize_(input->renderRect);
  return size;
}

void Serialize_(VREyeParametersPtr input, mojo::internal::Buffer* buf,
                internal::VREyeParameters_Data** output) {
  if (input) {
    internal::VREyeParameters_Data* result =
        internal::VREyeParameters_Data::New(buf);
    Serialize_(std::move(input->minimumFieldOfView), buf, &result->minimumFieldOfView.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->minimumFieldOfView.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null minimumFieldOfView in VREyeParameters struct");
    Serialize_(std::move(input->maximumFieldOfView), buf, &result->maximumFieldOfView.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->maximumFieldOfView.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null maximumFieldOfView in VREyeParameters struct");
    Serialize_(std::move(input->recommendedFieldOfView), buf, &result->recommendedFieldOfView.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->recommendedFieldOfView.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null recommendedFieldOfView in VREyeParameters struct");
    Serialize_(std::move(input->eyeTranslation), buf, &result->eyeTranslation.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->eyeTranslation.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null eyeTranslation in VREyeParameters struct");
    Serialize_(std::move(input->renderRect), buf, &result->renderRect.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->renderRect.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null renderRect in VREyeParameters struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::VREyeParameters_Data* input,
                  VREyeParametersPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    VREyeParametersPtr result(VREyeParameters::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->minimumFieldOfView.ptr, &result->minimumFieldOfView, context))
        success = false;
      if (!Deserialize_(input->maximumFieldOfView.ptr, &result->maximumFieldOfView, context))
        success = false;
      if (!Deserialize_(input->recommendedFieldOfView.ptr, &result->recommendedFieldOfView, context))
        success = false;
      if (!Deserialize_(input->eyeTranslation.ptr, &result->eyeTranslation, context))
        success = false;
      if (!Deserialize_(input->renderRect.ptr, &result->renderRect, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

VREyeParameters_Reader::VREyeParameters_Reader(
    internal::VREyeParameters_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
VRFieldOfView_Reader VREyeParameters_Reader::minimumFieldOfView() const {
  return VRFieldOfView_Reader(data_->minimumFieldOfView.ptr, context_);
}
VRFieldOfView_Reader VREyeParameters_Reader::maximumFieldOfView() const {
  return VRFieldOfView_Reader(data_->maximumFieldOfView.ptr, context_);
}
VRFieldOfView_Reader VREyeParameters_Reader::recommendedFieldOfView() const {
  return VRFieldOfView_Reader(data_->recommendedFieldOfView.ptr, context_);
}
VRVector3_Reader VREyeParameters_Reader::eyeTranslation() const {
  return VRVector3_Reader(data_->eyeTranslation.ptr, context_);
}
VRRect_Reader VREyeParameters_Reader::renderRect() const {
  return VRRect_Reader(data_->renderRect.ptr, context_);
}
size_t GetSerializedSize_(const VRHMDInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::VRHMDInfo_Data);
  size += GetSerializedSize_(input->leftEye);
  size += GetSerializedSize_(input->rightEye);
  return size;
}

void Serialize_(VRHMDInfoPtr input, mojo::internal::Buffer* buf,
                internal::VRHMDInfo_Data** output) {
  if (input) {
    internal::VRHMDInfo_Data* result =
        internal::VRHMDInfo_Data::New(buf);
    Serialize_(std::move(input->leftEye), buf, &result->leftEye.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->leftEye.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null leftEye in VRHMDInfo struct");
    Serialize_(std::move(input->rightEye), buf, &result->rightEye.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->rightEye.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null rightEye in VRHMDInfo struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::VRHMDInfo_Data* input,
                  VRHMDInfoPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    VRHMDInfoPtr result(VRHMDInfo::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->leftEye.ptr, &result->leftEye, context))
        success = false;
      if (!Deserialize_(input->rightEye.ptr, &result->rightEye, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

VRHMDInfo_Reader::VRHMDInfo_Reader(
    internal::VRHMDInfo_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
VREyeParameters_Reader VRHMDInfo_Reader::leftEye() const {
  return VREyeParameters_Reader(data_->leftEye.ptr, context_);
}
VREyeParameters_Reader VRHMDInfo_Reader::rightEye() const {
  return VREyeParameters_Reader(data_->rightEye.ptr, context_);
}
size_t GetSerializedSize_(const VRDeviceInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::VRDeviceInfo_Data);
  size += GetSerializedSize_(input->deviceName);
  size += GetSerializedSize_(input->hmdInfo);
  return size;
}

void Serialize_(VRDeviceInfoPtr input, mojo::internal::Buffer* buf,
                internal::VRDeviceInfo_Data** output) {
  if (input) {
    internal::VRDeviceInfo_Data* result =
        internal::VRDeviceInfo_Data::New(buf);
    result->index = input->index;
    Serialize_(std::move(input->deviceName), buf, &result->deviceName.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->deviceName.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null deviceName in VRDeviceInfo struct");
    Serialize_(std::move(input->hmdInfo), buf, &result->hmdInfo.ptr);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::VRDeviceInfo_Data* input,
                  VRDeviceInfoPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    VRDeviceInfoPtr result(VRDeviceInfo::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->index = input->index;
      if (!Deserialize_(input->deviceName.ptr, &result->deviceName, context))
        success = false;
      if (!Deserialize_(input->hmdInfo.ptr, &result->hmdInfo, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

VRDeviceInfo_Reader::VRDeviceInfo_Reader(
    internal::VRDeviceInfo_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
VRHMDInfo_Reader VRDeviceInfo_Reader::hmdInfo() const {
  return VRHMDInfo_Reader(data_->hmdInfo.ptr, context_);
}
}  // namespace content

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif