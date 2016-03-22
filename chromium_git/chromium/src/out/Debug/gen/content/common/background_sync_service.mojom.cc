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

#include "content/common/background_sync_service.mojom.h"

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
const uint32_t kBackgroundSyncService_Register_Name = 0;

class BackgroundSyncService_Register_Params_Data {
 public:
  static BackgroundSyncService_Register_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<content::internal::SyncRegistration_Data> options;
  int64_t service_worker_registration_id;
  uint8_t requested_from_service_worker : 1;
  uint8_t padfinal_[7];

 private:
  BackgroundSyncService_Register_Params_Data();
  ~BackgroundSyncService_Register_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_Register_Params_Data) == 32,
              "Bad sizeof(BackgroundSyncService_Register_Params_Data)");

// static
BackgroundSyncService_Register_Params_Data* BackgroundSyncService_Register_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_Register_Params_Data))) BackgroundSyncService_Register_Params_Data();
}

// static
bool BackgroundSyncService_Register_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_Register_Params_Data* object = static_cast<const BackgroundSyncService_Register_Params_Data*>(data);

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
          object->options, "null options field in BackgroundSyncService_Register_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, bounds_checker))
    return false;

  return true;
}

void BackgroundSyncService_Register_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&options, handles);
}

void BackgroundSyncService_Register_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&options, handles);
}

BackgroundSyncService_Register_Params_Data::BackgroundSyncService_Register_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class BackgroundSyncService_Register_ResponseParams_Data {
 public:
  static BackgroundSyncService_Register_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::BackgroundSyncError_Data err;
  uint8_t pad0_[4];
  mojo::internal::StructPointer<content::internal::SyncRegistration_Data> options;

 private:
  BackgroundSyncService_Register_ResponseParams_Data();
  ~BackgroundSyncService_Register_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_Register_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundSyncService_Register_ResponseParams_Data)");

// static
BackgroundSyncService_Register_ResponseParams_Data* BackgroundSyncService_Register_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_Register_ResponseParams_Data))) BackgroundSyncService_Register_ResponseParams_Data();
}

// static
bool BackgroundSyncService_Register_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_Register_ResponseParams_Data* object = static_cast<const BackgroundSyncService_Register_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->err))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->options, "null options field in BackgroundSyncService_Register_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, bounds_checker))
    return false;

  return true;
}

void BackgroundSyncService_Register_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&options, handles);
}

void BackgroundSyncService_Register_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&options, handles);
}

BackgroundSyncService_Register_ResponseParams_Data::BackgroundSyncService_Register_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kBackgroundSyncService_GetRegistration_Name = 1;

class BackgroundSyncService_GetRegistration_Params_Data {
 public:
  static BackgroundSyncService_GetRegistration_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer tag;
  int64_t service_worker_registration_id;

 private:
  BackgroundSyncService_GetRegistration_Params_Data();
  ~BackgroundSyncService_GetRegistration_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_GetRegistration_Params_Data) == 24,
              "Bad sizeof(BackgroundSyncService_GetRegistration_Params_Data)");

// static
BackgroundSyncService_GetRegistration_Params_Data* BackgroundSyncService_GetRegistration_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_GetRegistration_Params_Data))) BackgroundSyncService_GetRegistration_Params_Data();
}

// static
bool BackgroundSyncService_GetRegistration_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_GetRegistration_Params_Data* object = static_cast<const BackgroundSyncService_GetRegistration_Params_Data*>(data);

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
          object->tag, "null tag field in BackgroundSyncService_GetRegistration_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams tag_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->tag, bounds_checker,
                                     &tag_validate_params)) {
    return false;
  }

  return true;
}

void BackgroundSyncService_GetRegistration_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&tag, handles);
}

void BackgroundSyncService_GetRegistration_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&tag, handles);
}

BackgroundSyncService_GetRegistration_Params_Data::BackgroundSyncService_GetRegistration_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class BackgroundSyncService_GetRegistration_ResponseParams_Data {
 public:
  static BackgroundSyncService_GetRegistration_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::BackgroundSyncError_Data err;
  uint8_t pad0_[4];
  mojo::internal::StructPointer<content::internal::SyncRegistration_Data> registration;

 private:
  BackgroundSyncService_GetRegistration_ResponseParams_Data();
  ~BackgroundSyncService_GetRegistration_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_GetRegistration_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundSyncService_GetRegistration_ResponseParams_Data)");

// static
BackgroundSyncService_GetRegistration_ResponseParams_Data* BackgroundSyncService_GetRegistration_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_GetRegistration_ResponseParams_Data))) BackgroundSyncService_GetRegistration_ResponseParams_Data();
}

// static
bool BackgroundSyncService_GetRegistration_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_GetRegistration_ResponseParams_Data* object = static_cast<const BackgroundSyncService_GetRegistration_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->err))
    return false;

  if (!mojo::internal::ValidateStruct(object->registration, bounds_checker))
    return false;

  return true;
}

void BackgroundSyncService_GetRegistration_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&registration, handles);
}

void BackgroundSyncService_GetRegistration_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&registration, handles);
}

BackgroundSyncService_GetRegistration_ResponseParams_Data::BackgroundSyncService_GetRegistration_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kBackgroundSyncService_GetRegistrations_Name = 2;

class BackgroundSyncService_GetRegistrations_Params_Data {
 public:
  static BackgroundSyncService_GetRegistrations_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int64_t service_worker_registration_id;

 private:
  BackgroundSyncService_GetRegistrations_Params_Data();
  ~BackgroundSyncService_GetRegistrations_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_GetRegistrations_Params_Data) == 16,
              "Bad sizeof(BackgroundSyncService_GetRegistrations_Params_Data)");

// static
BackgroundSyncService_GetRegistrations_Params_Data* BackgroundSyncService_GetRegistrations_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_GetRegistrations_Params_Data))) BackgroundSyncService_GetRegistrations_Params_Data();
}

// static
bool BackgroundSyncService_GetRegistrations_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_GetRegistrations_Params_Data* object = static_cast<const BackgroundSyncService_GetRegistrations_Params_Data*>(data);

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

void BackgroundSyncService_GetRegistrations_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void BackgroundSyncService_GetRegistrations_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

BackgroundSyncService_GetRegistrations_Params_Data::BackgroundSyncService_GetRegistrations_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class BackgroundSyncService_GetRegistrations_ResponseParams_Data {
 public:
  static BackgroundSyncService_GetRegistrations_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::BackgroundSyncError_Data err;
  uint8_t pad0_[4];
  mojo::internal::ArrayPointer<content::internal::SyncRegistration_Data*> registrations;

 private:
  BackgroundSyncService_GetRegistrations_ResponseParams_Data();
  ~BackgroundSyncService_GetRegistrations_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_GetRegistrations_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundSyncService_GetRegistrations_ResponseParams_Data)");

// static
BackgroundSyncService_GetRegistrations_ResponseParams_Data* BackgroundSyncService_GetRegistrations_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_GetRegistrations_ResponseParams_Data))) BackgroundSyncService_GetRegistrations_ResponseParams_Data();
}

// static
bool BackgroundSyncService_GetRegistrations_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_GetRegistrations_ResponseParams_Data* object = static_cast<const BackgroundSyncService_GetRegistrations_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->err))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->registrations, "null registrations field in BackgroundSyncService_GetRegistrations_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams registrations_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->registrations, bounds_checker,
                                     &registrations_validate_params)) {
    return false;
  }

  return true;
}

void BackgroundSyncService_GetRegistrations_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&registrations, handles);
}

void BackgroundSyncService_GetRegistrations_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&registrations, handles);
}

BackgroundSyncService_GetRegistrations_ResponseParams_Data::BackgroundSyncService_GetRegistrations_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kBackgroundSyncService_Unregister_Name = 3;

class BackgroundSyncService_Unregister_Params_Data {
 public:
  static BackgroundSyncService_Unregister_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int64_t handle_id;
  int64_t service_worker_registration_id;

 private:
  BackgroundSyncService_Unregister_Params_Data();
  ~BackgroundSyncService_Unregister_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_Unregister_Params_Data) == 24,
              "Bad sizeof(BackgroundSyncService_Unregister_Params_Data)");

// static
BackgroundSyncService_Unregister_Params_Data* BackgroundSyncService_Unregister_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_Unregister_Params_Data))) BackgroundSyncService_Unregister_Params_Data();
}

// static
bool BackgroundSyncService_Unregister_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_Unregister_Params_Data* object = static_cast<const BackgroundSyncService_Unregister_Params_Data*>(data);

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

void BackgroundSyncService_Unregister_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void BackgroundSyncService_Unregister_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

BackgroundSyncService_Unregister_Params_Data::BackgroundSyncService_Unregister_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class BackgroundSyncService_Unregister_ResponseParams_Data {
 public:
  static BackgroundSyncService_Unregister_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::BackgroundSyncError_Data err;
  uint8_t padfinal_[4];

 private:
  BackgroundSyncService_Unregister_ResponseParams_Data();
  ~BackgroundSyncService_Unregister_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_Unregister_ResponseParams_Data) == 16,
              "Bad sizeof(BackgroundSyncService_Unregister_ResponseParams_Data)");

// static
BackgroundSyncService_Unregister_ResponseParams_Data* BackgroundSyncService_Unregister_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_Unregister_ResponseParams_Data))) BackgroundSyncService_Unregister_ResponseParams_Data();
}

// static
bool BackgroundSyncService_Unregister_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_Unregister_ResponseParams_Data* object = static_cast<const BackgroundSyncService_Unregister_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->err))
    return false;

  return true;
}

void BackgroundSyncService_Unregister_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void BackgroundSyncService_Unregister_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

BackgroundSyncService_Unregister_ResponseParams_Data::BackgroundSyncService_Unregister_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kBackgroundSyncService_DuplicateRegistrationHandle_Name = 4;

class BackgroundSyncService_DuplicateRegistrationHandle_Params_Data {
 public:
  static BackgroundSyncService_DuplicateRegistrationHandle_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int64_t handle_id;

 private:
  BackgroundSyncService_DuplicateRegistrationHandle_Params_Data();
  ~BackgroundSyncService_DuplicateRegistrationHandle_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_DuplicateRegistrationHandle_Params_Data) == 16,
              "Bad sizeof(BackgroundSyncService_DuplicateRegistrationHandle_Params_Data)");

// static
BackgroundSyncService_DuplicateRegistrationHandle_Params_Data* BackgroundSyncService_DuplicateRegistrationHandle_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_DuplicateRegistrationHandle_Params_Data))) BackgroundSyncService_DuplicateRegistrationHandle_Params_Data();
}

// static
bool BackgroundSyncService_DuplicateRegistrationHandle_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_DuplicateRegistrationHandle_Params_Data* object = static_cast<const BackgroundSyncService_DuplicateRegistrationHandle_Params_Data*>(data);

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

void BackgroundSyncService_DuplicateRegistrationHandle_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void BackgroundSyncService_DuplicateRegistrationHandle_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

BackgroundSyncService_DuplicateRegistrationHandle_Params_Data::BackgroundSyncService_DuplicateRegistrationHandle_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data {
 public:
  static BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::BackgroundSyncError_Data err;
  uint8_t pad0_[4];
  mojo::internal::StructPointer<content::internal::SyncRegistration_Data> registration;

 private:
  BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data();
  ~BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data) == 24,
              "Bad sizeof(BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data)");

// static
BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data* BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data))) BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data();
}

// static
bool BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data* object = static_cast<const BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->err))
    return false;

  if (!mojo::internal::ValidateStruct(object->registration, bounds_checker))
    return false;

  return true;
}

void BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&registration, handles);
}

void BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&registration, handles);
}

BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data::BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kBackgroundSyncService_ReleaseRegistration_Name = 5;

class BackgroundSyncService_ReleaseRegistration_Params_Data {
 public:
  static BackgroundSyncService_ReleaseRegistration_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int64_t handle_id;

 private:
  BackgroundSyncService_ReleaseRegistration_Params_Data();
  ~BackgroundSyncService_ReleaseRegistration_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_ReleaseRegistration_Params_Data) == 16,
              "Bad sizeof(BackgroundSyncService_ReleaseRegistration_Params_Data)");

// static
BackgroundSyncService_ReleaseRegistration_Params_Data* BackgroundSyncService_ReleaseRegistration_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_ReleaseRegistration_Params_Data))) BackgroundSyncService_ReleaseRegistration_Params_Data();
}

// static
bool BackgroundSyncService_ReleaseRegistration_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_ReleaseRegistration_Params_Data* object = static_cast<const BackgroundSyncService_ReleaseRegistration_Params_Data*>(data);

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

void BackgroundSyncService_ReleaseRegistration_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void BackgroundSyncService_ReleaseRegistration_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

BackgroundSyncService_ReleaseRegistration_Params_Data::BackgroundSyncService_ReleaseRegistration_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kBackgroundSyncService_NotifyWhenFinished_Name = 6;

class BackgroundSyncService_NotifyWhenFinished_Params_Data {
 public:
  static BackgroundSyncService_NotifyWhenFinished_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int64_t handle_id;

 private:
  BackgroundSyncService_NotifyWhenFinished_Params_Data();
  ~BackgroundSyncService_NotifyWhenFinished_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_NotifyWhenFinished_Params_Data) == 16,
              "Bad sizeof(BackgroundSyncService_NotifyWhenFinished_Params_Data)");

// static
BackgroundSyncService_NotifyWhenFinished_Params_Data* BackgroundSyncService_NotifyWhenFinished_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_NotifyWhenFinished_Params_Data))) BackgroundSyncService_NotifyWhenFinished_Params_Data();
}

// static
bool BackgroundSyncService_NotifyWhenFinished_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_NotifyWhenFinished_Params_Data* object = static_cast<const BackgroundSyncService_NotifyWhenFinished_Params_Data*>(data);

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

void BackgroundSyncService_NotifyWhenFinished_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void BackgroundSyncService_NotifyWhenFinished_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

BackgroundSyncService_NotifyWhenFinished_Params_Data::BackgroundSyncService_NotifyWhenFinished_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data {
 public:
  static BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::BackgroundSyncError_Data err;
  internal::BackgroundSyncState_Data final_status;

 private:
  BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data();
  ~BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data) == 16,
              "Bad sizeof(BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data)");

// static
BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data* BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data))) BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data();
}

// static
bool BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data* object = static_cast<const BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->err))
    return false;

  if (!mojo::internal::ValidateEnum(object->final_status))
    return false;

  return true;
}

void BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data::BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kBackgroundSyncServiceClient_Sync_Name = 0;

class BackgroundSyncServiceClient_Sync_Params_Data {
 public:
  static BackgroundSyncServiceClient_Sync_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int64_t handle_id;
  internal::BackgroundSyncEventLastChance_Data last_chance;
  uint8_t padfinal_[4];

 private:
  BackgroundSyncServiceClient_Sync_Params_Data();
  ~BackgroundSyncServiceClient_Sync_Params_Data() = delete;
};
static_assert(sizeof(BackgroundSyncServiceClient_Sync_Params_Data) == 24,
              "Bad sizeof(BackgroundSyncServiceClient_Sync_Params_Data)");

// static
BackgroundSyncServiceClient_Sync_Params_Data* BackgroundSyncServiceClient_Sync_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncServiceClient_Sync_Params_Data))) BackgroundSyncServiceClient_Sync_Params_Data();
}

// static
bool BackgroundSyncServiceClient_Sync_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncServiceClient_Sync_Params_Data* object = static_cast<const BackgroundSyncServiceClient_Sync_Params_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->last_chance))
    return false;

  return true;
}

void BackgroundSyncServiceClient_Sync_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void BackgroundSyncServiceClient_Sync_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

BackgroundSyncServiceClient_Sync_Params_Data::BackgroundSyncServiceClient_Sync_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class BackgroundSyncServiceClient_Sync_ResponseParams_Data {
 public:
  static BackgroundSyncServiceClient_Sync_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  content::internal::ServiceWorkerEventStatus_Data status;
  uint8_t padfinal_[4];

 private:
  BackgroundSyncServiceClient_Sync_ResponseParams_Data();
  ~BackgroundSyncServiceClient_Sync_ResponseParams_Data() = delete;
};
static_assert(sizeof(BackgroundSyncServiceClient_Sync_ResponseParams_Data) == 16,
              "Bad sizeof(BackgroundSyncServiceClient_Sync_ResponseParams_Data)");

// static
BackgroundSyncServiceClient_Sync_ResponseParams_Data* BackgroundSyncServiceClient_Sync_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BackgroundSyncServiceClient_Sync_ResponseParams_Data))) BackgroundSyncServiceClient_Sync_ResponseParams_Data();
}

// static
bool BackgroundSyncServiceClient_Sync_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BackgroundSyncServiceClient_Sync_ResponseParams_Data* object = static_cast<const BackgroundSyncServiceClient_Sync_ResponseParams_Data*>(data);

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

void BackgroundSyncServiceClient_Sync_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void BackgroundSyncServiceClient_Sync_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

BackgroundSyncServiceClient_Sync_ResponseParams_Data::BackgroundSyncServiceClient_Sync_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char BackgroundSyncService::Name_[] = "content::BackgroundSyncService";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t BackgroundSyncService::Version_;
class BackgroundSyncService_Register_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncService_Register_ForwardToCallback(
      const BackgroundSyncService::RegisterCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncService::RegisterCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_Register_ForwardToCallback);
};
bool BackgroundSyncService_Register_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::BackgroundSyncService_Register_ResponseParams_Data* params =
      reinterpret_cast<internal::BackgroundSyncService_Register_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  BackgroundSyncError p_err{};
  content::SyncRegistrationPtr p_options{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_err = static_cast<BackgroundSyncError>(params->err.value);
    if (!Deserialize_(params->options.ptr, &p_options, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_err, std::move(p_options));
  return true;
}
class BackgroundSyncService_GetRegistration_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncService_GetRegistration_ForwardToCallback(
      const BackgroundSyncService::GetRegistrationCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncService::GetRegistrationCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_GetRegistration_ForwardToCallback);
};
bool BackgroundSyncService_GetRegistration_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::BackgroundSyncService_GetRegistration_ResponseParams_Data* params =
      reinterpret_cast<internal::BackgroundSyncService_GetRegistration_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  BackgroundSyncError p_err{};
  content::SyncRegistrationPtr p_registration{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_err = static_cast<BackgroundSyncError>(params->err.value);
    if (!Deserialize_(params->registration.ptr, &p_registration, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_err, std::move(p_registration));
  return true;
}
class BackgroundSyncService_GetRegistrations_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncService_GetRegistrations_ForwardToCallback(
      const BackgroundSyncService::GetRegistrationsCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncService::GetRegistrationsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_GetRegistrations_ForwardToCallback);
};
bool BackgroundSyncService_GetRegistrations_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data* params =
      reinterpret_cast<internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  BackgroundSyncError p_err{};
  mojo::Array<content::SyncRegistrationPtr> p_registrations{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_err = static_cast<BackgroundSyncError>(params->err.value);
    if (!Deserialize_(params->registrations.ptr, &p_registrations, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_err, std::move(p_registrations));
  return true;
}
class BackgroundSyncService_Unregister_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncService_Unregister_ForwardToCallback(
      const BackgroundSyncService::UnregisterCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncService::UnregisterCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_Unregister_ForwardToCallback);
};
bool BackgroundSyncService_Unregister_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::BackgroundSyncService_Unregister_ResponseParams_Data* params =
      reinterpret_cast<internal::BackgroundSyncService_Unregister_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  BackgroundSyncError p_err{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_err = static_cast<BackgroundSyncError>(params->err.value);
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_err);
  return true;
}
class BackgroundSyncService_DuplicateRegistrationHandle_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncService_DuplicateRegistrationHandle_ForwardToCallback(
      const BackgroundSyncService::DuplicateRegistrationHandleCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncService::DuplicateRegistrationHandleCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_DuplicateRegistrationHandle_ForwardToCallback);
};
bool BackgroundSyncService_DuplicateRegistrationHandle_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data* params =
      reinterpret_cast<internal::BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  BackgroundSyncError p_err{};
  content::SyncRegistrationPtr p_registration{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_err = static_cast<BackgroundSyncError>(params->err.value);
    if (!Deserialize_(params->registration.ptr, &p_registration, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_err, std::move(p_registration));
  return true;
}
class BackgroundSyncService_NotifyWhenFinished_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncService_NotifyWhenFinished_ForwardToCallback(
      const BackgroundSyncService::NotifyWhenFinishedCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncService::NotifyWhenFinishedCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_NotifyWhenFinished_ForwardToCallback);
};
bool BackgroundSyncService_NotifyWhenFinished_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data* params =
      reinterpret_cast<internal::BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  BackgroundSyncError p_err{};
  BackgroundSyncState p_final_status{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_err = static_cast<BackgroundSyncError>(params->err.value);
    p_final_status = static_cast<BackgroundSyncState>(params->final_status.value);
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_err, p_final_status);
  return true;
}

BackgroundSyncServiceProxy::BackgroundSyncServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void BackgroundSyncServiceProxy::Register(
    content::SyncRegistrationPtr in_options, int64_t in_service_worker_registration_id, bool in_requested_from_service_worker, const RegisterCallback& callback) {
  size_t size = sizeof(internal::BackgroundSyncService_Register_Params_Data);
  size += GetSerializedSize_(in_options);
  mojo::internal::RequestMessageBuilder builder(internal::kBackgroundSyncService_Register_Name, size);

  internal::BackgroundSyncService_Register_Params_Data* params =
      internal::BackgroundSyncService_Register_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_options), builder.buffer(), &params->options.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->options.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in BackgroundSyncService.Register request");
  params->service_worker_registration_id = in_service_worker_registration_id;
  params->requested_from_service_worker = in_requested_from_service_worker;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new BackgroundSyncService_Register_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void BackgroundSyncServiceProxy::GetRegistration(
    const mojo::String& in_tag, int64_t in_service_worker_registration_id, const GetRegistrationCallback& callback) {
  size_t size = sizeof(internal::BackgroundSyncService_GetRegistration_Params_Data);
  size += GetSerializedSize_(in_tag);
  mojo::internal::RequestMessageBuilder builder(internal::kBackgroundSyncService_GetRegistration_Name, size);

  internal::BackgroundSyncService_GetRegistration_Params_Data* params =
      internal::BackgroundSyncService_GetRegistration_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_tag), builder.buffer(), &params->tag.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->tag.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null tag in BackgroundSyncService.GetRegistration request");
  params->service_worker_registration_id = in_service_worker_registration_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new BackgroundSyncService_GetRegistration_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void BackgroundSyncServiceProxy::GetRegistrations(
    int64_t in_service_worker_registration_id, const GetRegistrationsCallback& callback) {
  size_t size = sizeof(internal::BackgroundSyncService_GetRegistrations_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kBackgroundSyncService_GetRegistrations_Name, size);

  internal::BackgroundSyncService_GetRegistrations_Params_Data* params =
      internal::BackgroundSyncService_GetRegistrations_Params_Data::New(builder.buffer());
  params->service_worker_registration_id = in_service_worker_registration_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new BackgroundSyncService_GetRegistrations_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void BackgroundSyncServiceProxy::Unregister(
    int64_t in_handle_id, int64_t in_service_worker_registration_id, const UnregisterCallback& callback) {
  size_t size = sizeof(internal::BackgroundSyncService_Unregister_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kBackgroundSyncService_Unregister_Name, size);

  internal::BackgroundSyncService_Unregister_Params_Data* params =
      internal::BackgroundSyncService_Unregister_Params_Data::New(builder.buffer());
  params->handle_id = in_handle_id;
  params->service_worker_registration_id = in_service_worker_registration_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new BackgroundSyncService_Unregister_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void BackgroundSyncServiceProxy::DuplicateRegistrationHandle(
    int64_t in_handle_id, const DuplicateRegistrationHandleCallback& callback) {
  size_t size = sizeof(internal::BackgroundSyncService_DuplicateRegistrationHandle_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kBackgroundSyncService_DuplicateRegistrationHandle_Name, size);

  internal::BackgroundSyncService_DuplicateRegistrationHandle_Params_Data* params =
      internal::BackgroundSyncService_DuplicateRegistrationHandle_Params_Data::New(builder.buffer());
  params->handle_id = in_handle_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new BackgroundSyncService_DuplicateRegistrationHandle_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void BackgroundSyncServiceProxy::ReleaseRegistration(
    int64_t in_handle_id) {
  size_t size = sizeof(internal::BackgroundSyncService_ReleaseRegistration_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kBackgroundSyncService_ReleaseRegistration_Name, size);

  internal::BackgroundSyncService_ReleaseRegistration_Params_Data* params =
      internal::BackgroundSyncService_ReleaseRegistration_Params_Data::New(builder.buffer());
  params->handle_id = in_handle_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void BackgroundSyncServiceProxy::NotifyWhenFinished(
    int64_t in_handle_id, const NotifyWhenFinishedCallback& callback) {
  size_t size = sizeof(internal::BackgroundSyncService_NotifyWhenFinished_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kBackgroundSyncService_NotifyWhenFinished_Name, size);

  internal::BackgroundSyncService_NotifyWhenFinished_Params_Data* params =
      internal::BackgroundSyncService_NotifyWhenFinished_Params_Data::New(builder.buffer());
  params->handle_id = in_handle_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new BackgroundSyncService_NotifyWhenFinished_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class BackgroundSyncService_Register_ProxyToResponder
    : public BackgroundSyncService::RegisterCallback::Runnable {
 public:
  ~BackgroundSyncService_Register_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "BackgroundSyncService::Register(std::move(p_options), p_service_worker_registration_id, p_requested_from_service_worker, callback) "
        "was never run.";
  }

  BackgroundSyncService_Register_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(BackgroundSyncError in_err, content::SyncRegistrationPtr in_options) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_Register_ProxyToResponder);
};
void BackgroundSyncService_Register_ProxyToResponder::Run(
    BackgroundSyncError in_err, content::SyncRegistrationPtr in_options) const {
  size_t size = sizeof(internal::BackgroundSyncService_Register_ResponseParams_Data);
  size += GetSerializedSize_(in_options);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kBackgroundSyncService_Register_Name, size, request_id_);
  internal::BackgroundSyncService_Register_ResponseParams_Data* params =
      internal::BackgroundSyncService_Register_ResponseParams_Data::New(builder.buffer());
  params->err.value = static_cast<int32_t>(in_err);
  Serialize_(std::move(in_options), builder.buffer(), &params->options.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->options.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in BackgroundSyncService.Register response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class BackgroundSyncService_GetRegistration_ProxyToResponder
    : public BackgroundSyncService::GetRegistrationCallback::Runnable {
 public:
  ~BackgroundSyncService_GetRegistration_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "BackgroundSyncService::GetRegistration(p_tag, p_service_worker_registration_id, callback) "
        "was never run.";
  }

  BackgroundSyncService_GetRegistration_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(BackgroundSyncError in_err, content::SyncRegistrationPtr in_registration) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_GetRegistration_ProxyToResponder);
};
void BackgroundSyncService_GetRegistration_ProxyToResponder::Run(
    BackgroundSyncError in_err, content::SyncRegistrationPtr in_registration) const {
  size_t size = sizeof(internal::BackgroundSyncService_GetRegistration_ResponseParams_Data);
  size += GetSerializedSize_(in_registration);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kBackgroundSyncService_GetRegistration_Name, size, request_id_);
  internal::BackgroundSyncService_GetRegistration_ResponseParams_Data* params =
      internal::BackgroundSyncService_GetRegistration_ResponseParams_Data::New(builder.buffer());
  params->err.value = static_cast<int32_t>(in_err);
  Serialize_(std::move(in_registration), builder.buffer(), &params->registration.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class BackgroundSyncService_GetRegistrations_ProxyToResponder
    : public BackgroundSyncService::GetRegistrationsCallback::Runnable {
 public:
  ~BackgroundSyncService_GetRegistrations_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "BackgroundSyncService::GetRegistrations(p_service_worker_registration_id, callback) "
        "was never run.";
  }

  BackgroundSyncService_GetRegistrations_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(BackgroundSyncError in_err, mojo::Array<content::SyncRegistrationPtr> in_registrations) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_GetRegistrations_ProxyToResponder);
};
void BackgroundSyncService_GetRegistrations_ProxyToResponder::Run(
    BackgroundSyncError in_err, mojo::Array<content::SyncRegistrationPtr> in_registrations) const {
  size_t size = sizeof(internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data);
  size += GetSerializedSize_(in_registrations);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kBackgroundSyncService_GetRegistrations_Name, size, request_id_);
  internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data* params =
      internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data::New(builder.buffer());
  params->err.value = static_cast<int32_t>(in_err);
  const mojo::internal::ArrayValidateParams registrations_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_registrations), builder.buffer(),
      &params->registrations.ptr, &registrations_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->registrations.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null registrations in BackgroundSyncService.GetRegistrations response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class BackgroundSyncService_Unregister_ProxyToResponder
    : public BackgroundSyncService::UnregisterCallback::Runnable {
 public:
  ~BackgroundSyncService_Unregister_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "BackgroundSyncService::Unregister(p_handle_id, p_service_worker_registration_id, callback) "
        "was never run.";
  }

  BackgroundSyncService_Unregister_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(BackgroundSyncError in_err) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_Unregister_ProxyToResponder);
};
void BackgroundSyncService_Unregister_ProxyToResponder::Run(
    BackgroundSyncError in_err) const {
  size_t size = sizeof(internal::BackgroundSyncService_Unregister_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kBackgroundSyncService_Unregister_Name, size, request_id_);
  internal::BackgroundSyncService_Unregister_ResponseParams_Data* params =
      internal::BackgroundSyncService_Unregister_ResponseParams_Data::New(builder.buffer());
  params->err.value = static_cast<int32_t>(in_err);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class BackgroundSyncService_DuplicateRegistrationHandle_ProxyToResponder
    : public BackgroundSyncService::DuplicateRegistrationHandleCallback::Runnable {
 public:
  ~BackgroundSyncService_DuplicateRegistrationHandle_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "BackgroundSyncService::DuplicateRegistrationHandle(p_handle_id, callback) "
        "was never run.";
  }

  BackgroundSyncService_DuplicateRegistrationHandle_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(BackgroundSyncError in_err, content::SyncRegistrationPtr in_registration) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_DuplicateRegistrationHandle_ProxyToResponder);
};
void BackgroundSyncService_DuplicateRegistrationHandle_ProxyToResponder::Run(
    BackgroundSyncError in_err, content::SyncRegistrationPtr in_registration) const {
  size_t size = sizeof(internal::BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data);
  size += GetSerializedSize_(in_registration);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kBackgroundSyncService_DuplicateRegistrationHandle_Name, size, request_id_);
  internal::BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data* params =
      internal::BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data::New(builder.buffer());
  params->err.value = static_cast<int32_t>(in_err);
  Serialize_(std::move(in_registration), builder.buffer(), &params->registration.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class BackgroundSyncService_NotifyWhenFinished_ProxyToResponder
    : public BackgroundSyncService::NotifyWhenFinishedCallback::Runnable {
 public:
  ~BackgroundSyncService_NotifyWhenFinished_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "BackgroundSyncService::NotifyWhenFinished(p_handle_id, callback) "
        "was never run.";
  }

  BackgroundSyncService_NotifyWhenFinished_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(BackgroundSyncError in_err, BackgroundSyncState in_final_status) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_NotifyWhenFinished_ProxyToResponder);
};
void BackgroundSyncService_NotifyWhenFinished_ProxyToResponder::Run(
    BackgroundSyncError in_err, BackgroundSyncState in_final_status) const {
  size_t size = sizeof(internal::BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kBackgroundSyncService_NotifyWhenFinished_Name, size, request_id_);
  internal::BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data* params =
      internal::BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data::New(builder.buffer());
  params->err.value = static_cast<int32_t>(in_err);
  params->final_status.value = static_cast<int32_t>(in_final_status);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

BackgroundSyncServiceStub::BackgroundSyncServiceStub()
    : sink_(nullptr),
      control_message_handler_(BackgroundSyncService::Version_) {
}

BackgroundSyncServiceStub::~BackgroundSyncServiceStub() {}

bool BackgroundSyncServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.BackgroundSyncService.Register", __FILE__, __LINE__);
      break;
    }
    case internal::kBackgroundSyncService_GetRegistration_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.BackgroundSyncService.GetRegistration", __FILE__, __LINE__);
      break;
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.BackgroundSyncService.GetRegistrations", __FILE__, __LINE__);
      break;
    }
    case internal::kBackgroundSyncService_Unregister_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.BackgroundSyncService.Unregister", __FILE__, __LINE__);
      break;
    }
    case internal::kBackgroundSyncService_DuplicateRegistrationHandle_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.BackgroundSyncService.DuplicateRegistrationHandle", __FILE__, __LINE__);
      break;
    }
    case internal::kBackgroundSyncService_ReleaseRegistration_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.BackgroundSyncService.ReleaseRegistration", __FILE__, __LINE__);
      internal::BackgroundSyncService_ReleaseRegistration_Params_Data* params =
          reinterpret_cast<internal::BackgroundSyncService_ReleaseRegistration_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int64_t p_handle_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_handle_id = params->handle_id;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BackgroundSyncService::ReleaseRegistration");
      sink_->ReleaseRegistration(p_handle_id);
      return true;
    }
    case internal::kBackgroundSyncService_NotifyWhenFinished_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.BackgroundSyncService.NotifyWhenFinished", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool BackgroundSyncServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::BackgroundSyncService::Register", __FILE__, __LINE__);
      internal::BackgroundSyncService_Register_Params_Data* params =
          reinterpret_cast<internal::BackgroundSyncService_Register_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      content::SyncRegistrationPtr p_options{};
      int64_t p_service_worker_registration_id{};
      bool p_requested_from_service_worker{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->options.ptr, &p_options, &serialization_context_))
          success = false;
        p_service_worker_registration_id = params->service_worker_registration_id;
        p_requested_from_service_worker = params->requested_from_service_worker;
      } while (false);
      if (!success)
        return false;
      BackgroundSyncService::RegisterCallback::Runnable* runnable =
          new BackgroundSyncService_Register_ProxyToResponder(
              message->request_id(), responder);
      BackgroundSyncService::RegisterCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BackgroundSyncService::Register");
      sink_->Register(std::move(p_options), p_service_worker_registration_id, p_requested_from_service_worker, callback);
      return true;
    }
    case internal::kBackgroundSyncService_GetRegistration_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::BackgroundSyncService::GetRegistration", __FILE__, __LINE__);
      internal::BackgroundSyncService_GetRegistration_Params_Data* params =
          reinterpret_cast<internal::BackgroundSyncService_GetRegistration_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_tag{};
      int64_t p_service_worker_registration_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->tag.ptr, &p_tag, &serialization_context_))
          success = false;
        p_service_worker_registration_id = params->service_worker_registration_id;
      } while (false);
      if (!success)
        return false;
      BackgroundSyncService::GetRegistrationCallback::Runnable* runnable =
          new BackgroundSyncService_GetRegistration_ProxyToResponder(
              message->request_id(), responder);
      BackgroundSyncService::GetRegistrationCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BackgroundSyncService::GetRegistration");
      sink_->GetRegistration(p_tag, p_service_worker_registration_id, callback);
      return true;
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::BackgroundSyncService::GetRegistrations", __FILE__, __LINE__);
      internal::BackgroundSyncService_GetRegistrations_Params_Data* params =
          reinterpret_cast<internal::BackgroundSyncService_GetRegistrations_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int64_t p_service_worker_registration_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_service_worker_registration_id = params->service_worker_registration_id;
      } while (false);
      if (!success)
        return false;
      BackgroundSyncService::GetRegistrationsCallback::Runnable* runnable =
          new BackgroundSyncService_GetRegistrations_ProxyToResponder(
              message->request_id(), responder);
      BackgroundSyncService::GetRegistrationsCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BackgroundSyncService::GetRegistrations");
      sink_->GetRegistrations(p_service_worker_registration_id, callback);
      return true;
    }
    case internal::kBackgroundSyncService_Unregister_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::BackgroundSyncService::Unregister", __FILE__, __LINE__);
      internal::BackgroundSyncService_Unregister_Params_Data* params =
          reinterpret_cast<internal::BackgroundSyncService_Unregister_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int64_t p_handle_id{};
      int64_t p_service_worker_registration_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_handle_id = params->handle_id;
        p_service_worker_registration_id = params->service_worker_registration_id;
      } while (false);
      if (!success)
        return false;
      BackgroundSyncService::UnregisterCallback::Runnable* runnable =
          new BackgroundSyncService_Unregister_ProxyToResponder(
              message->request_id(), responder);
      BackgroundSyncService::UnregisterCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BackgroundSyncService::Unregister");
      sink_->Unregister(p_handle_id, p_service_worker_registration_id, callback);
      return true;
    }
    case internal::kBackgroundSyncService_DuplicateRegistrationHandle_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::BackgroundSyncService::DuplicateRegistrationHandle", __FILE__, __LINE__);
      internal::BackgroundSyncService_DuplicateRegistrationHandle_Params_Data* params =
          reinterpret_cast<internal::BackgroundSyncService_DuplicateRegistrationHandle_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int64_t p_handle_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_handle_id = params->handle_id;
      } while (false);
      if (!success)
        return false;
      BackgroundSyncService::DuplicateRegistrationHandleCallback::Runnable* runnable =
          new BackgroundSyncService_DuplicateRegistrationHandle_ProxyToResponder(
              message->request_id(), responder);
      BackgroundSyncService::DuplicateRegistrationHandleCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BackgroundSyncService::DuplicateRegistrationHandle");
      sink_->DuplicateRegistrationHandle(p_handle_id, callback);
      return true;
    }
    case internal::kBackgroundSyncService_ReleaseRegistration_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::BackgroundSyncService::ReleaseRegistration", __FILE__, __LINE__);
      break;
    }
    case internal::kBackgroundSyncService_NotifyWhenFinished_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::BackgroundSyncService::NotifyWhenFinished", __FILE__, __LINE__);
      internal::BackgroundSyncService_NotifyWhenFinished_Params_Data* params =
          reinterpret_cast<internal::BackgroundSyncService_NotifyWhenFinished_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int64_t p_handle_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_handle_id = params->handle_id;
      } while (false);
      if (!success)
        return false;
      BackgroundSyncService::NotifyWhenFinishedCallback::Runnable* runnable =
          new BackgroundSyncService_NotifyWhenFinished_ProxyToResponder(
              message->request_id(), responder);
      BackgroundSyncService::NotifyWhenFinishedCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BackgroundSyncService::NotifyWhenFinished");
      sink_->NotifyWhenFinished(p_handle_id, callback);
      return true;
    }
  }
  return false;
}

BackgroundSyncServiceRequestValidator::BackgroundSyncServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool BackgroundSyncServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_Register_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_GetRegistration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_GetRegistration_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_GetRegistrations_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_Unregister_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_Unregister_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_DuplicateRegistrationHandle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_DuplicateRegistrationHandle_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_ReleaseRegistration_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_ReleaseRegistration_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_NotifyWhenFinished_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_NotifyWhenFinished_Params_Data>(message)) {
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

BackgroundSyncServiceResponseValidator::BackgroundSyncServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool BackgroundSyncServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_Register_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_GetRegistration_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_GetRegistration_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_Unregister_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_Unregister_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_DuplicateRegistrationHandle_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_DuplicateRegistrationHandle_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_NotifyWhenFinished_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_NotifyWhenFinished_ResponseParams_Data>(message)) {
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
MOJO_STATIC_CONST_MEMBER_DEFINITION const char BackgroundSyncServiceClient::Name_[] = "content::BackgroundSyncServiceClient";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t BackgroundSyncServiceClient::Version_;
class BackgroundSyncServiceClient_Sync_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncServiceClient_Sync_ForwardToCallback(
      const BackgroundSyncServiceClient::SyncCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncServiceClient::SyncCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncServiceClient_Sync_ForwardToCallback);
};
bool BackgroundSyncServiceClient_Sync_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data* params =
      reinterpret_cast<internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  content::ServiceWorkerEventStatus p_status{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_status = static_cast<content::ServiceWorkerEventStatus>(params->status.value);
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_status);
  return true;
}

BackgroundSyncServiceClientProxy::BackgroundSyncServiceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void BackgroundSyncServiceClientProxy::Sync(
    int64_t in_handle_id, BackgroundSyncEventLastChance in_last_chance, const SyncCallback& callback) {
  size_t size = sizeof(internal::BackgroundSyncServiceClient_Sync_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kBackgroundSyncServiceClient_Sync_Name, size);

  internal::BackgroundSyncServiceClient_Sync_Params_Data* params =
      internal::BackgroundSyncServiceClient_Sync_Params_Data::New(builder.buffer());
  params->handle_id = in_handle_id;
  params->last_chance.value = static_cast<int32_t>(in_last_chance);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new BackgroundSyncServiceClient_Sync_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class BackgroundSyncServiceClient_Sync_ProxyToResponder
    : public BackgroundSyncServiceClient::SyncCallback::Runnable {
 public:
  ~BackgroundSyncServiceClient_Sync_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "BackgroundSyncServiceClient::Sync(p_handle_id, p_last_chance, callback) "
        "was never run.";
  }

  BackgroundSyncServiceClient_Sync_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(content::ServiceWorkerEventStatus in_status) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BackgroundSyncServiceClient_Sync_ProxyToResponder);
};
void BackgroundSyncServiceClient_Sync_ProxyToResponder::Run(
    content::ServiceWorkerEventStatus in_status) const {
  size_t size = sizeof(internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kBackgroundSyncServiceClient_Sync_Name, size, request_id_);
  internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data* params =
      internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data::New(builder.buffer());
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

BackgroundSyncServiceClientStub::BackgroundSyncServiceClientStub()
    : sink_(nullptr),
      control_message_handler_(BackgroundSyncServiceClient::Version_) {
}

BackgroundSyncServiceClientStub::~BackgroundSyncServiceClientStub() {}

bool BackgroundSyncServiceClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kBackgroundSyncServiceClient_Sync_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.BackgroundSyncServiceClient.Sync", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool BackgroundSyncServiceClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kBackgroundSyncServiceClient_Sync_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::BackgroundSyncServiceClient::Sync", __FILE__, __LINE__);
      internal::BackgroundSyncServiceClient_Sync_Params_Data* params =
          reinterpret_cast<internal::BackgroundSyncServiceClient_Sync_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int64_t p_handle_id{};
      BackgroundSyncEventLastChance p_last_chance{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_handle_id = params->handle_id;
        p_last_chance = static_cast<BackgroundSyncEventLastChance>(params->last_chance.value);
      } while (false);
      if (!success)
        return false;
      BackgroundSyncServiceClient::SyncCallback::Runnable* runnable =
          new BackgroundSyncServiceClient_Sync_ProxyToResponder(
              message->request_id(), responder);
      BackgroundSyncServiceClient::SyncCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BackgroundSyncServiceClient::Sync");
      sink_->Sync(p_handle_id, p_last_chance, callback);
      return true;
    }
  }
  return false;
}

BackgroundSyncServiceClientRequestValidator::BackgroundSyncServiceClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool BackgroundSyncServiceClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kBackgroundSyncServiceClient_Sync_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncServiceClient_Sync_Params_Data>(message)) {
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

BackgroundSyncServiceClientResponseValidator::BackgroundSyncServiceClientResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool BackgroundSyncServiceClientResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kBackgroundSyncServiceClient_Sync_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data>(message)) {
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