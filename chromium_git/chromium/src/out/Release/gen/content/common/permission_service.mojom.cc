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

#include "content/common/permission_service.mojom.h"

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
const uint32_t kPermissionService_HasPermission_Name = 0;

class PermissionService_HasPermission_Params_Data {
 public:
  static PermissionService_HasPermission_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::PermissionName_Data permission;
  uint8_t pad0_[4];
  mojo::internal::StringPointer origin;

 private:
  PermissionService_HasPermission_Params_Data();
  ~PermissionService_HasPermission_Params_Data() = delete;
};
static_assert(sizeof(PermissionService_HasPermission_Params_Data) == 24,
              "Bad sizeof(PermissionService_HasPermission_Params_Data)");

// static
PermissionService_HasPermission_Params_Data* PermissionService_HasPermission_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionService_HasPermission_Params_Data))) PermissionService_HasPermission_Params_Data();
}

// static
bool PermissionService_HasPermission_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionService_HasPermission_Params_Data* object = static_cast<const PermissionService_HasPermission_Params_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->permission))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, "null origin field in PermissionService_HasPermission_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams origin_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->origin, bounds_checker,
                                     &origin_validate_params)) {
    return false;
  }

  return true;
}

void PermissionService_HasPermission_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&origin, handles);
}

void PermissionService_HasPermission_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&origin, handles);
}

PermissionService_HasPermission_Params_Data::PermissionService_HasPermission_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class PermissionService_HasPermission_ResponseParams_Data {
 public:
  static PermissionService_HasPermission_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  content::internal::PermissionStatus_Data status;
  uint8_t padfinal_[4];

 private:
  PermissionService_HasPermission_ResponseParams_Data();
  ~PermissionService_HasPermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(PermissionService_HasPermission_ResponseParams_Data) == 16,
              "Bad sizeof(PermissionService_HasPermission_ResponseParams_Data)");

// static
PermissionService_HasPermission_ResponseParams_Data* PermissionService_HasPermission_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionService_HasPermission_ResponseParams_Data))) PermissionService_HasPermission_ResponseParams_Data();
}

// static
bool PermissionService_HasPermission_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionService_HasPermission_ResponseParams_Data* object = static_cast<const PermissionService_HasPermission_ResponseParams_Data*>(data);

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

void PermissionService_HasPermission_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void PermissionService_HasPermission_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

PermissionService_HasPermission_ResponseParams_Data::PermissionService_HasPermission_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPermissionService_RequestPermission_Name = 1;

class PermissionService_RequestPermission_Params_Data {
 public:
  static PermissionService_RequestPermission_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::PermissionName_Data permission;
  uint8_t user_gesture : 1;
  uint8_t pad1_[3];
  mojo::internal::StringPointer origin;

 private:
  PermissionService_RequestPermission_Params_Data();
  ~PermissionService_RequestPermission_Params_Data() = delete;
};
static_assert(sizeof(PermissionService_RequestPermission_Params_Data) == 24,
              "Bad sizeof(PermissionService_RequestPermission_Params_Data)");

// static
PermissionService_RequestPermission_Params_Data* PermissionService_RequestPermission_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionService_RequestPermission_Params_Data))) PermissionService_RequestPermission_Params_Data();
}

// static
bool PermissionService_RequestPermission_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionService_RequestPermission_Params_Data* object = static_cast<const PermissionService_RequestPermission_Params_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->permission))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, "null origin field in PermissionService_RequestPermission_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams origin_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->origin, bounds_checker,
                                     &origin_validate_params)) {
    return false;
  }

  return true;
}

void PermissionService_RequestPermission_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&origin, handles);
}

void PermissionService_RequestPermission_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&origin, handles);
}

PermissionService_RequestPermission_Params_Data::PermissionService_RequestPermission_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class PermissionService_RequestPermission_ResponseParams_Data {
 public:
  static PermissionService_RequestPermission_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  content::internal::PermissionStatus_Data status;
  uint8_t padfinal_[4];

 private:
  PermissionService_RequestPermission_ResponseParams_Data();
  ~PermissionService_RequestPermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(PermissionService_RequestPermission_ResponseParams_Data) == 16,
              "Bad sizeof(PermissionService_RequestPermission_ResponseParams_Data)");

// static
PermissionService_RequestPermission_ResponseParams_Data* PermissionService_RequestPermission_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionService_RequestPermission_ResponseParams_Data))) PermissionService_RequestPermission_ResponseParams_Data();
}

// static
bool PermissionService_RequestPermission_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionService_RequestPermission_ResponseParams_Data* object = static_cast<const PermissionService_RequestPermission_ResponseParams_Data*>(data);

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

void PermissionService_RequestPermission_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void PermissionService_RequestPermission_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

PermissionService_RequestPermission_ResponseParams_Data::PermissionService_RequestPermission_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPermissionService_RequestPermissions_Name = 2;

class PermissionService_RequestPermissions_Params_Data {
 public:
  static PermissionService_RequestPermissions_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::PermissionName_Data> permission;
  mojo::internal::StringPointer origin;
  uint8_t user_gesture : 1;
  uint8_t padfinal_[7];

 private:
  PermissionService_RequestPermissions_Params_Data();
  ~PermissionService_RequestPermissions_Params_Data() = delete;
};
static_assert(sizeof(PermissionService_RequestPermissions_Params_Data) == 32,
              "Bad sizeof(PermissionService_RequestPermissions_Params_Data)");

// static
PermissionService_RequestPermissions_Params_Data* PermissionService_RequestPermissions_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionService_RequestPermissions_Params_Data))) PermissionService_RequestPermissions_Params_Data();
}

// static
bool PermissionService_RequestPermissions_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionService_RequestPermissions_Params_Data* object = static_cast<const PermissionService_RequestPermissions_Params_Data*>(data);

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
          object->permission, "null permission field in PermissionService_RequestPermissions_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams permission_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->permission, bounds_checker,
                                     &permission_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, "null origin field in PermissionService_RequestPermissions_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams origin_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->origin, bounds_checker,
                                     &origin_validate_params)) {
    return false;
  }

  return true;
}

void PermissionService_RequestPermissions_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&permission, handles);
  mojo::internal::Encode(&origin, handles);
}

void PermissionService_RequestPermissions_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&permission, handles);
  mojo::internal::Decode(&origin, handles);
}

PermissionService_RequestPermissions_Params_Data::PermissionService_RequestPermissions_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class PermissionService_RequestPermissions_ResponseParams_Data {
 public:
  static PermissionService_RequestPermissions_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<content::internal::PermissionStatus_Data> statuses;

 private:
  PermissionService_RequestPermissions_ResponseParams_Data();
  ~PermissionService_RequestPermissions_ResponseParams_Data() = delete;
};
static_assert(sizeof(PermissionService_RequestPermissions_ResponseParams_Data) == 16,
              "Bad sizeof(PermissionService_RequestPermissions_ResponseParams_Data)");

// static
PermissionService_RequestPermissions_ResponseParams_Data* PermissionService_RequestPermissions_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionService_RequestPermissions_ResponseParams_Data))) PermissionService_RequestPermissions_ResponseParams_Data();
}

// static
bool PermissionService_RequestPermissions_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionService_RequestPermissions_ResponseParams_Data* object = static_cast<const PermissionService_RequestPermissions_ResponseParams_Data*>(data);

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
          object->statuses, "null statuses field in PermissionService_RequestPermissions_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams statuses_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->statuses, bounds_checker,
                                     &statuses_validate_params)) {
    return false;
  }

  return true;
}

void PermissionService_RequestPermissions_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&statuses, handles);
}

void PermissionService_RequestPermissions_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&statuses, handles);
}

PermissionService_RequestPermissions_ResponseParams_Data::PermissionService_RequestPermissions_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPermissionService_RevokePermission_Name = 3;

class PermissionService_RevokePermission_Params_Data {
 public:
  static PermissionService_RevokePermission_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::PermissionName_Data permission;
  uint8_t pad0_[4];
  mojo::internal::StringPointer origin;

 private:
  PermissionService_RevokePermission_Params_Data();
  ~PermissionService_RevokePermission_Params_Data() = delete;
};
static_assert(sizeof(PermissionService_RevokePermission_Params_Data) == 24,
              "Bad sizeof(PermissionService_RevokePermission_Params_Data)");

// static
PermissionService_RevokePermission_Params_Data* PermissionService_RevokePermission_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionService_RevokePermission_Params_Data))) PermissionService_RevokePermission_Params_Data();
}

// static
bool PermissionService_RevokePermission_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionService_RevokePermission_Params_Data* object = static_cast<const PermissionService_RevokePermission_Params_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->permission))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, "null origin field in PermissionService_RevokePermission_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams origin_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->origin, bounds_checker,
                                     &origin_validate_params)) {
    return false;
  }

  return true;
}

void PermissionService_RevokePermission_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&origin, handles);
}

void PermissionService_RevokePermission_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&origin, handles);
}

PermissionService_RevokePermission_Params_Data::PermissionService_RevokePermission_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class PermissionService_RevokePermission_ResponseParams_Data {
 public:
  static PermissionService_RevokePermission_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  content::internal::PermissionStatus_Data status;
  uint8_t padfinal_[4];

 private:
  PermissionService_RevokePermission_ResponseParams_Data();
  ~PermissionService_RevokePermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(PermissionService_RevokePermission_ResponseParams_Data) == 16,
              "Bad sizeof(PermissionService_RevokePermission_ResponseParams_Data)");

// static
PermissionService_RevokePermission_ResponseParams_Data* PermissionService_RevokePermission_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionService_RevokePermission_ResponseParams_Data))) PermissionService_RevokePermission_ResponseParams_Data();
}

// static
bool PermissionService_RevokePermission_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionService_RevokePermission_ResponseParams_Data* object = static_cast<const PermissionService_RevokePermission_ResponseParams_Data*>(data);

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

void PermissionService_RevokePermission_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void PermissionService_RevokePermission_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

PermissionService_RevokePermission_ResponseParams_Data::PermissionService_RevokePermission_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPermissionService_GetNextPermissionChange_Name = 4;

class PermissionService_GetNextPermissionChange_Params_Data {
 public:
  static PermissionService_GetNextPermissionChange_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::PermissionName_Data permission;
  content::internal::PermissionStatus_Data last_known_status;
  mojo::internal::StringPointer origin;

 private:
  PermissionService_GetNextPermissionChange_Params_Data();
  ~PermissionService_GetNextPermissionChange_Params_Data() = delete;
};
static_assert(sizeof(PermissionService_GetNextPermissionChange_Params_Data) == 24,
              "Bad sizeof(PermissionService_GetNextPermissionChange_Params_Data)");

// static
PermissionService_GetNextPermissionChange_Params_Data* PermissionService_GetNextPermissionChange_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionService_GetNextPermissionChange_Params_Data))) PermissionService_GetNextPermissionChange_Params_Data();
}

// static
bool PermissionService_GetNextPermissionChange_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionService_GetNextPermissionChange_Params_Data* object = static_cast<const PermissionService_GetNextPermissionChange_Params_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->permission))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, "null origin field in PermissionService_GetNextPermissionChange_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams origin_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->origin, bounds_checker,
                                     &origin_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateEnum(object->last_known_status))
    return false;

  return true;
}

void PermissionService_GetNextPermissionChange_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&origin, handles);
}

void PermissionService_GetNextPermissionChange_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&origin, handles);
}

PermissionService_GetNextPermissionChange_Params_Data::PermissionService_GetNextPermissionChange_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class PermissionService_GetNextPermissionChange_ResponseParams_Data {
 public:
  static PermissionService_GetNextPermissionChange_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  content::internal::PermissionStatus_Data status;
  uint8_t padfinal_[4];

 private:
  PermissionService_GetNextPermissionChange_ResponseParams_Data();
  ~PermissionService_GetNextPermissionChange_ResponseParams_Data() = delete;
};
static_assert(sizeof(PermissionService_GetNextPermissionChange_ResponseParams_Data) == 16,
              "Bad sizeof(PermissionService_GetNextPermissionChange_ResponseParams_Data)");

// static
PermissionService_GetNextPermissionChange_ResponseParams_Data* PermissionService_GetNextPermissionChange_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PermissionService_GetNextPermissionChange_ResponseParams_Data))) PermissionService_GetNextPermissionChange_ResponseParams_Data();
}

// static
bool PermissionService_GetNextPermissionChange_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PermissionService_GetNextPermissionChange_ResponseParams_Data* object = static_cast<const PermissionService_GetNextPermissionChange_ResponseParams_Data*>(data);

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

void PermissionService_GetNextPermissionChange_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void PermissionService_GetNextPermissionChange_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

PermissionService_GetNextPermissionChange_ResponseParams_Data::PermissionService_GetNextPermissionChange_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char PermissionService::Name_[] = "content::PermissionService";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t PermissionService::Version_;
class PermissionService_HasPermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_HasPermission_ForwardToCallback(
      const PermissionService::HasPermissionCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::HasPermissionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionService_HasPermission_ForwardToCallback);
};
bool PermissionService_HasPermission_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionService_HasPermission_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionService_HasPermission_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  content::PermissionStatus p_status{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_status = static_cast<content::PermissionStatus>(params->status.value);
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_status);
  return true;
}
class PermissionService_RequestPermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_RequestPermission_ForwardToCallback(
      const PermissionService::RequestPermissionCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::RequestPermissionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionService_RequestPermission_ForwardToCallback);
};
bool PermissionService_RequestPermission_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionService_RequestPermission_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionService_RequestPermission_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  content::PermissionStatus p_status{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_status = static_cast<content::PermissionStatus>(params->status.value);
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_status);
  return true;
}
class PermissionService_RequestPermissions_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_RequestPermissions_ForwardToCallback(
      const PermissionService::RequestPermissionsCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::RequestPermissionsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionService_RequestPermissions_ForwardToCallback);
};
bool PermissionService_RequestPermissions_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionService_RequestPermissions_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionService_RequestPermissions_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::Array<content::PermissionStatus> p_statuses{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->statuses.ptr, &p_statuses, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_statuses));
  return true;
}
class PermissionService_RevokePermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_RevokePermission_ForwardToCallback(
      const PermissionService::RevokePermissionCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::RevokePermissionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionService_RevokePermission_ForwardToCallback);
};
bool PermissionService_RevokePermission_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionService_RevokePermission_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionService_RevokePermission_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  content::PermissionStatus p_status{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_status = static_cast<content::PermissionStatus>(params->status.value);
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_status);
  return true;
}
class PermissionService_GetNextPermissionChange_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PermissionService_GetNextPermissionChange_ForwardToCallback(
      const PermissionService::GetNextPermissionChangeCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PermissionService::GetNextPermissionChangeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionService_GetNextPermissionChange_ForwardToCallback);
};
bool PermissionService_GetNextPermissionChange_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PermissionService_GetNextPermissionChange_ResponseParams_Data* params =
      reinterpret_cast<internal::PermissionService_GetNextPermissionChange_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  content::PermissionStatus p_status{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_status = static_cast<content::PermissionStatus>(params->status.value);
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_status);
  return true;
}

PermissionServiceProxy::PermissionServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void PermissionServiceProxy::HasPermission(
    PermissionName in_permission, const mojo::String& in_origin, const HasPermissionCallback& callback) {
  size_t size = sizeof(internal::PermissionService_HasPermission_Params_Data);
  size += GetSerializedSize_(in_origin);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionService_HasPermission_Name, size);

  internal::PermissionService_HasPermission_Params_Data* params =
      internal::PermissionService_HasPermission_Params_Data::New(builder.buffer());
  params->permission.value = static_cast<int32_t>(in_permission);
  Serialize_(std::move(in_origin), builder.buffer(), &params->origin.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->origin.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PermissionService.HasPermission request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionService_HasPermission_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void PermissionServiceProxy::RequestPermission(
    PermissionName in_permission, const mojo::String& in_origin, bool in_user_gesture, const RequestPermissionCallback& callback) {
  size_t size = sizeof(internal::PermissionService_RequestPermission_Params_Data);
  size += GetSerializedSize_(in_origin);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionService_RequestPermission_Name, size);

  internal::PermissionService_RequestPermission_Params_Data* params =
      internal::PermissionService_RequestPermission_Params_Data::New(builder.buffer());
  params->permission.value = static_cast<int32_t>(in_permission);
  Serialize_(std::move(in_origin), builder.buffer(), &params->origin.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->origin.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PermissionService.RequestPermission request");
  params->user_gesture = in_user_gesture;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionService_RequestPermission_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void PermissionServiceProxy::RequestPermissions(
    mojo::Array<PermissionName> in_permission, const mojo::String& in_origin, bool in_user_gesture, const RequestPermissionsCallback& callback) {
  size_t size = sizeof(internal::PermissionService_RequestPermissions_Params_Data);
  size += GetSerializedSize_(in_permission);
  size += GetSerializedSize_(in_origin);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionService_RequestPermissions_Name, size);

  internal::PermissionService_RequestPermissions_Params_Data* params =
      internal::PermissionService_RequestPermissions_Params_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams permission_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_permission), builder.buffer(),
      &params->permission.ptr, &permission_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->permission.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null permission in PermissionService.RequestPermissions request");
  Serialize_(std::move(in_origin), builder.buffer(), &params->origin.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->origin.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PermissionService.RequestPermissions request");
  params->user_gesture = in_user_gesture;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionService_RequestPermissions_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void PermissionServiceProxy::RevokePermission(
    PermissionName in_permission, const mojo::String& in_origin, const RevokePermissionCallback& callback) {
  size_t size = sizeof(internal::PermissionService_RevokePermission_Params_Data);
  size += GetSerializedSize_(in_origin);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionService_RevokePermission_Name, size);

  internal::PermissionService_RevokePermission_Params_Data* params =
      internal::PermissionService_RevokePermission_Params_Data::New(builder.buffer());
  params->permission.value = static_cast<int32_t>(in_permission);
  Serialize_(std::move(in_origin), builder.buffer(), &params->origin.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->origin.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PermissionService.RevokePermission request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionService_RevokePermission_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void PermissionServiceProxy::GetNextPermissionChange(
    PermissionName in_permission, const mojo::String& in_origin, content::PermissionStatus in_last_known_status, const GetNextPermissionChangeCallback& callback) {
  size_t size = sizeof(internal::PermissionService_GetNextPermissionChange_Params_Data);
  size += GetSerializedSize_(in_origin);
  mojo::internal::RequestMessageBuilder builder(internal::kPermissionService_GetNextPermissionChange_Name, size);

  internal::PermissionService_GetNextPermissionChange_Params_Data* params =
      internal::PermissionService_GetNextPermissionChange_Params_Data::New(builder.buffer());
  params->permission.value = static_cast<int32_t>(in_permission);
  Serialize_(std::move(in_origin), builder.buffer(), &params->origin.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->origin.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in PermissionService.GetNextPermissionChange request");
  params->last_known_status.value = static_cast<int32_t>(in_last_known_status);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PermissionService_GetNextPermissionChange_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class PermissionService_HasPermission_ProxyToResponder
    : public PermissionService::HasPermissionCallback::Runnable {
 public:
  ~PermissionService_HasPermission_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PermissionService::HasPermission(p_permission, p_origin, callback) "
        "was never run.";
  }

  PermissionService_HasPermission_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(content::PermissionStatus in_status) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionService_HasPermission_ProxyToResponder);
};
void PermissionService_HasPermission_ProxyToResponder::Run(
    content::PermissionStatus in_status) const {
  size_t size = sizeof(internal::PermissionService_HasPermission_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionService_HasPermission_Name, size, request_id_);
  internal::PermissionService_HasPermission_ResponseParams_Data* params =
      internal::PermissionService_HasPermission_ResponseParams_Data::New(builder.buffer());
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
class PermissionService_RequestPermission_ProxyToResponder
    : public PermissionService::RequestPermissionCallback::Runnable {
 public:
  ~PermissionService_RequestPermission_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PermissionService::RequestPermission(p_permission, p_origin, p_user_gesture, callback) "
        "was never run.";
  }

  PermissionService_RequestPermission_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(content::PermissionStatus in_status) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionService_RequestPermission_ProxyToResponder);
};
void PermissionService_RequestPermission_ProxyToResponder::Run(
    content::PermissionStatus in_status) const {
  size_t size = sizeof(internal::PermissionService_RequestPermission_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionService_RequestPermission_Name, size, request_id_);
  internal::PermissionService_RequestPermission_ResponseParams_Data* params =
      internal::PermissionService_RequestPermission_ResponseParams_Data::New(builder.buffer());
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
class PermissionService_RequestPermissions_ProxyToResponder
    : public PermissionService::RequestPermissionsCallback::Runnable {
 public:
  ~PermissionService_RequestPermissions_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PermissionService::RequestPermissions(std::move(p_permission), p_origin, p_user_gesture, callback) "
        "was never run.";
  }

  PermissionService_RequestPermissions_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::Array<content::PermissionStatus> in_statuses) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionService_RequestPermissions_ProxyToResponder);
};
void PermissionService_RequestPermissions_ProxyToResponder::Run(
    mojo::Array<content::PermissionStatus> in_statuses) const {
  size_t size = sizeof(internal::PermissionService_RequestPermissions_ResponseParams_Data);
  size += GetSerializedSize_(in_statuses);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionService_RequestPermissions_Name, size, request_id_);
  internal::PermissionService_RequestPermissions_ResponseParams_Data* params =
      internal::PermissionService_RequestPermissions_ResponseParams_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams statuses_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_statuses), builder.buffer(),
      &params->statuses.ptr, &statuses_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->statuses.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null statuses in PermissionService.RequestPermissions response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class PermissionService_RevokePermission_ProxyToResponder
    : public PermissionService::RevokePermissionCallback::Runnable {
 public:
  ~PermissionService_RevokePermission_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PermissionService::RevokePermission(p_permission, p_origin, callback) "
        "was never run.";
  }

  PermissionService_RevokePermission_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(content::PermissionStatus in_status) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionService_RevokePermission_ProxyToResponder);
};
void PermissionService_RevokePermission_ProxyToResponder::Run(
    content::PermissionStatus in_status) const {
  size_t size = sizeof(internal::PermissionService_RevokePermission_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionService_RevokePermission_Name, size, request_id_);
  internal::PermissionService_RevokePermission_ResponseParams_Data* params =
      internal::PermissionService_RevokePermission_ResponseParams_Data::New(builder.buffer());
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
class PermissionService_GetNextPermissionChange_ProxyToResponder
    : public PermissionService::GetNextPermissionChangeCallback::Runnable {
 public:
  ~PermissionService_GetNextPermissionChange_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PermissionService::GetNextPermissionChange(p_permission, p_origin, p_last_known_status, callback) "
        "was never run.";
  }

  PermissionService_GetNextPermissionChange_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(content::PermissionStatus in_status) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PermissionService_GetNextPermissionChange_ProxyToResponder);
};
void PermissionService_GetNextPermissionChange_ProxyToResponder::Run(
    content::PermissionStatus in_status) const {
  size_t size = sizeof(internal::PermissionService_GetNextPermissionChange_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPermissionService_GetNextPermissionChange_Name, size, request_id_);
  internal::PermissionService_GetNextPermissionChange_ResponseParams_Data* params =
      internal::PermissionService_GetNextPermissionChange_ResponseParams_Data::New(builder.buffer());
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

PermissionServiceStub::PermissionServiceStub()
    : sink_(nullptr),
      control_message_handler_(PermissionService::Version_) {
}

PermissionServiceStub::~PermissionServiceStub() {}

bool PermissionServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPermissionService_HasPermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.PermissionService.HasPermission", __FILE__, __LINE__);
      break;
    }
    case internal::kPermissionService_RequestPermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.PermissionService.RequestPermission", __FILE__, __LINE__);
      break;
    }
    case internal::kPermissionService_RequestPermissions_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.PermissionService.RequestPermissions", __FILE__, __LINE__);
      break;
    }
    case internal::kPermissionService_RevokePermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.PermissionService.RevokePermission", __FILE__, __LINE__);
      break;
    }
    case internal::kPermissionService_GetNextPermissionChange_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.PermissionService.GetNextPermissionChange", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool PermissionServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPermissionService_HasPermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::PermissionService::HasPermission", __FILE__, __LINE__);
      internal::PermissionService_HasPermission_Params_Data* params =
          reinterpret_cast<internal::PermissionService_HasPermission_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      PermissionName p_permission{};
      mojo::String p_origin{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_permission = static_cast<PermissionName>(params->permission.value);
        if (!Deserialize_(params->origin.ptr, &p_origin, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      PermissionService::HasPermissionCallback::Runnable* runnable =
          new PermissionService_HasPermission_ProxyToResponder(
              message->request_id(), responder);
      PermissionService::HasPermissionCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionService::HasPermission");
      sink_->HasPermission(p_permission, p_origin, callback);
      return true;
    }
    case internal::kPermissionService_RequestPermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::PermissionService::RequestPermission", __FILE__, __LINE__);
      internal::PermissionService_RequestPermission_Params_Data* params =
          reinterpret_cast<internal::PermissionService_RequestPermission_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      PermissionName p_permission{};
      mojo::String p_origin{};
      bool p_user_gesture{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_permission = static_cast<PermissionName>(params->permission.value);
        if (!Deserialize_(params->origin.ptr, &p_origin, &serialization_context_))
          success = false;
        p_user_gesture = params->user_gesture;
      } while (false);
      if (!success)
        return false;
      PermissionService::RequestPermissionCallback::Runnable* runnable =
          new PermissionService_RequestPermission_ProxyToResponder(
              message->request_id(), responder);
      PermissionService::RequestPermissionCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionService::RequestPermission");
      sink_->RequestPermission(p_permission, p_origin, p_user_gesture, callback);
      return true;
    }
    case internal::kPermissionService_RequestPermissions_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::PermissionService::RequestPermissions", __FILE__, __LINE__);
      internal::PermissionService_RequestPermissions_Params_Data* params =
          reinterpret_cast<internal::PermissionService_RequestPermissions_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::Array<PermissionName> p_permission{};
      mojo::String p_origin{};
      bool p_user_gesture{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->permission.ptr, &p_permission, &serialization_context_))
          success = false;
        if (!Deserialize_(params->origin.ptr, &p_origin, &serialization_context_))
          success = false;
        p_user_gesture = params->user_gesture;
      } while (false);
      if (!success)
        return false;
      PermissionService::RequestPermissionsCallback::Runnable* runnable =
          new PermissionService_RequestPermissions_ProxyToResponder(
              message->request_id(), responder);
      PermissionService::RequestPermissionsCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionService::RequestPermissions");
      sink_->RequestPermissions(std::move(p_permission), p_origin, p_user_gesture, callback);
      return true;
    }
    case internal::kPermissionService_RevokePermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::PermissionService::RevokePermission", __FILE__, __LINE__);
      internal::PermissionService_RevokePermission_Params_Data* params =
          reinterpret_cast<internal::PermissionService_RevokePermission_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      PermissionName p_permission{};
      mojo::String p_origin{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_permission = static_cast<PermissionName>(params->permission.value);
        if (!Deserialize_(params->origin.ptr, &p_origin, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      PermissionService::RevokePermissionCallback::Runnable* runnable =
          new PermissionService_RevokePermission_ProxyToResponder(
              message->request_id(), responder);
      PermissionService::RevokePermissionCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionService::RevokePermission");
      sink_->RevokePermission(p_permission, p_origin, callback);
      return true;
    }
    case internal::kPermissionService_GetNextPermissionChange_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::PermissionService::GetNextPermissionChange", __FILE__, __LINE__);
      internal::PermissionService_GetNextPermissionChange_Params_Data* params =
          reinterpret_cast<internal::PermissionService_GetNextPermissionChange_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      PermissionName p_permission{};
      mojo::String p_origin{};
      content::PermissionStatus p_last_known_status{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_permission = static_cast<PermissionName>(params->permission.value);
        if (!Deserialize_(params->origin.ptr, &p_origin, &serialization_context_))
          success = false;
        p_last_known_status = static_cast<content::PermissionStatus>(params->last_known_status.value);
      } while (false);
      if (!success)
        return false;
      PermissionService::GetNextPermissionChangeCallback::Runnable* runnable =
          new PermissionService_GetNextPermissionChange_ProxyToResponder(
              message->request_id(), responder);
      PermissionService::GetNextPermissionChangeCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PermissionService::GetNextPermissionChange");
      sink_->GetNextPermissionChange(p_permission, p_origin, p_last_known_status, callback);
      return true;
    }
  }
  return false;
}

PermissionServiceRequestValidator::PermissionServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PermissionServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPermissionService_HasPermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_HasPermission_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_RequestPermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RequestPermission_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_RequestPermissions_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RequestPermissions_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_RevokePermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RevokePermission_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_GetNextPermissionChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_GetNextPermissionChange_Params_Data>(message)) {
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

PermissionServiceResponseValidator::PermissionServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PermissionServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kPermissionService_HasPermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_HasPermission_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_RequestPermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RequestPermission_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_RequestPermissions_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RequestPermissions_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_RevokePermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_RevokePermission_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPermissionService_GetNextPermissionChange_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PermissionService_GetNextPermissionChange_ResponseParams_Data>(message)) {
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
}  // namespace content

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif