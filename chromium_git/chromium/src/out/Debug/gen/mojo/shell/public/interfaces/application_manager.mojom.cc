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

#include "mojo/shell/public/interfaces/application_manager.mojom.h"

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
namespace mojo {
namespace shell {
namespace mojom {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kApplicationManagerListener_SetRunningApplications_Name = 0;

class ApplicationManagerListener_SetRunningApplications_Params_Data {
 public:
  static ApplicationManagerListener_SetRunningApplications_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::ApplicationInfo_Data*> applications;

 private:
  ApplicationManagerListener_SetRunningApplications_Params_Data();
  ~ApplicationManagerListener_SetRunningApplications_Params_Data() = delete;
};
static_assert(sizeof(ApplicationManagerListener_SetRunningApplications_Params_Data) == 16,
              "Bad sizeof(ApplicationManagerListener_SetRunningApplications_Params_Data)");

// static
ApplicationManagerListener_SetRunningApplications_Params_Data* ApplicationManagerListener_SetRunningApplications_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ApplicationManagerListener_SetRunningApplications_Params_Data))) ApplicationManagerListener_SetRunningApplications_Params_Data();
}

// static
bool ApplicationManagerListener_SetRunningApplications_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ApplicationManagerListener_SetRunningApplications_Params_Data* object = static_cast<const ApplicationManagerListener_SetRunningApplications_Params_Data*>(data);

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
          object->applications, "null applications field in ApplicationManagerListener_SetRunningApplications_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams applications_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->applications, bounds_checker,
                                     &applications_validate_params)) {
    return false;
  }

  return true;
}

void ApplicationManagerListener_SetRunningApplications_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&applications, handles);
}

void ApplicationManagerListener_SetRunningApplications_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&applications, handles);
}

ApplicationManagerListener_SetRunningApplications_Params_Data::ApplicationManagerListener_SetRunningApplications_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kApplicationManagerListener_ApplicationInstanceCreated_Name = 1;

class ApplicationManagerListener_ApplicationInstanceCreated_Params_Data {
 public:
  static ApplicationManagerListener_ApplicationInstanceCreated_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::ApplicationInfo_Data> application;

 private:
  ApplicationManagerListener_ApplicationInstanceCreated_Params_Data();
  ~ApplicationManagerListener_ApplicationInstanceCreated_Params_Data() = delete;
};
static_assert(sizeof(ApplicationManagerListener_ApplicationInstanceCreated_Params_Data) == 16,
              "Bad sizeof(ApplicationManagerListener_ApplicationInstanceCreated_Params_Data)");

// static
ApplicationManagerListener_ApplicationInstanceCreated_Params_Data* ApplicationManagerListener_ApplicationInstanceCreated_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ApplicationManagerListener_ApplicationInstanceCreated_Params_Data))) ApplicationManagerListener_ApplicationInstanceCreated_Params_Data();
}

// static
bool ApplicationManagerListener_ApplicationInstanceCreated_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ApplicationManagerListener_ApplicationInstanceCreated_Params_Data* object = static_cast<const ApplicationManagerListener_ApplicationInstanceCreated_Params_Data*>(data);

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
          object->application, "null application field in ApplicationManagerListener_ApplicationInstanceCreated_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->application, bounds_checker))
    return false;

  return true;
}

void ApplicationManagerListener_ApplicationInstanceCreated_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&application, handles);
}

void ApplicationManagerListener_ApplicationInstanceCreated_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&application, handles);
}

ApplicationManagerListener_ApplicationInstanceCreated_Params_Data::ApplicationManagerListener_ApplicationInstanceCreated_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kApplicationManagerListener_ApplicationInstanceDestroyed_Name = 2;

class ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data {
 public:
  static ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t id;
  uint8_t padfinal_[4];

 private:
  ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data();
  ~ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data() = delete;
};
static_assert(sizeof(ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data) == 16,
              "Bad sizeof(ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data)");

// static
ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data* ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data))) ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data();
}

// static
bool ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data* object = static_cast<const ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data*>(data);

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

void ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data::ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kApplicationManagerListener_ApplicationPIDAvailable_Name = 3;

class ApplicationManagerListener_ApplicationPIDAvailable_Params_Data {
 public:
  static ApplicationManagerListener_ApplicationPIDAvailable_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t id;
  uint32_t pid;

 private:
  ApplicationManagerListener_ApplicationPIDAvailable_Params_Data();
  ~ApplicationManagerListener_ApplicationPIDAvailable_Params_Data() = delete;
};
static_assert(sizeof(ApplicationManagerListener_ApplicationPIDAvailable_Params_Data) == 16,
              "Bad sizeof(ApplicationManagerListener_ApplicationPIDAvailable_Params_Data)");

// static
ApplicationManagerListener_ApplicationPIDAvailable_Params_Data* ApplicationManagerListener_ApplicationPIDAvailable_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ApplicationManagerListener_ApplicationPIDAvailable_Params_Data))) ApplicationManagerListener_ApplicationPIDAvailable_Params_Data();
}

// static
bool ApplicationManagerListener_ApplicationPIDAvailable_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ApplicationManagerListener_ApplicationPIDAvailable_Params_Data* object = static_cast<const ApplicationManagerListener_ApplicationPIDAvailable_Params_Data*>(data);

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

void ApplicationManagerListener_ApplicationPIDAvailable_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ApplicationManagerListener_ApplicationPIDAvailable_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ApplicationManagerListener_ApplicationPIDAvailable_Params_Data::ApplicationManagerListener_ApplicationPIDAvailable_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPIDReceiver_SetPID_Name = 0;

class PIDReceiver_SetPID_Params_Data {
 public:
  static PIDReceiver_SetPID_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t pid;
  uint8_t padfinal_[4];

 private:
  PIDReceiver_SetPID_Params_Data();
  ~PIDReceiver_SetPID_Params_Data() = delete;
};
static_assert(sizeof(PIDReceiver_SetPID_Params_Data) == 16,
              "Bad sizeof(PIDReceiver_SetPID_Params_Data)");

// static
PIDReceiver_SetPID_Params_Data* PIDReceiver_SetPID_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PIDReceiver_SetPID_Params_Data))) PIDReceiver_SetPID_Params_Data();
}

// static
bool PIDReceiver_SetPID_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PIDReceiver_SetPID_Params_Data* object = static_cast<const PIDReceiver_SetPID_Params_Data*>(data);

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

void PIDReceiver_SetPID_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void PIDReceiver_SetPID_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

PIDReceiver_SetPID_Params_Data::PIDReceiver_SetPID_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kApplicationManager_CreateInstanceForHandle_Name = 0;

class ApplicationManager_CreateInstanceForHandle_Params_Data {
 public:
  static ApplicationManager_CreateInstanceForHandle_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::Handle channel;
  mojo::MessagePipeHandle pid_receiver;
  mojo::internal::StringPointer url;
  mojo::internal::StructPointer<mojo::internal::CapabilityFilter_Data> filter;

 private:
  ApplicationManager_CreateInstanceForHandle_Params_Data();
  ~ApplicationManager_CreateInstanceForHandle_Params_Data() = delete;
};
static_assert(sizeof(ApplicationManager_CreateInstanceForHandle_Params_Data) == 32,
              "Bad sizeof(ApplicationManager_CreateInstanceForHandle_Params_Data)");

// static
ApplicationManager_CreateInstanceForHandle_Params_Data* ApplicationManager_CreateInstanceForHandle_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ApplicationManager_CreateInstanceForHandle_Params_Data))) ApplicationManager_CreateInstanceForHandle_Params_Data();
}

// static
bool ApplicationManager_CreateInstanceForHandle_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ApplicationManager_CreateInstanceForHandle_Params_Data* object = static_cast<const ApplicationManager_CreateInstanceForHandle_Params_Data*>(data);

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

  const mojo::Handle channel_handle = object->channel;
  if (!mojo::internal::ValidateHandleNonNullable(
          channel_handle,
          "invalid channel field in ApplicationManager_CreateInstanceForHandle_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(channel_handle, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, "null url field in ApplicationManager_CreateInstanceForHandle_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->filter, "null filter field in ApplicationManager_CreateInstanceForHandle_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->filter, bounds_checker))
    return false;

  const mojo::Handle pid_receiver_handle = object->pid_receiver;
  if (!mojo::internal::ValidateHandleNonNullable(
          pid_receiver_handle,
          "invalid pid_receiver field in ApplicationManager_CreateInstanceForHandle_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(pid_receiver_handle, bounds_checker))
    return false;

  return true;
}

void ApplicationManager_CreateInstanceForHandle_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&channel, handles);
  mojo::internal::Encode(&url, handles);
  mojo::internal::Encode(&filter, handles);
  mojo::internal::EncodeHandle(&pid_receiver, handles);
}

void ApplicationManager_CreateInstanceForHandle_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&channel, handles);
  mojo::internal::Decode(&url, handles);
  mojo::internal::Decode(&filter, handles);
  mojo::internal::DecodeHandle(&pid_receiver, handles);
}

ApplicationManager_CreateInstanceForHandle_Params_Data::ApplicationManager_CreateInstanceForHandle_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kApplicationManager_AddListener_Name = 1;

class ApplicationManager_AddListener_Params_Data {
 public:
  static ApplicationManager_AddListener_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data listener;

 private:
  ApplicationManager_AddListener_Params_Data();
  ~ApplicationManager_AddListener_Params_Data() = delete;
};
static_assert(sizeof(ApplicationManager_AddListener_Params_Data) == 16,
              "Bad sizeof(ApplicationManager_AddListener_Params_Data)");

// static
ApplicationManager_AddListener_Params_Data* ApplicationManager_AddListener_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ApplicationManager_AddListener_Params_Data))) ApplicationManager_AddListener_Params_Data();
}

// static
bool ApplicationManager_AddListener_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ApplicationManager_AddListener_Params_Data* object = static_cast<const ApplicationManager_AddListener_Params_Data*>(data);

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

  const mojo::Handle listener_handle = object->listener.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          listener_handle,
          "invalid listener field in ApplicationManager_AddListener_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(listener_handle, bounds_checker))
    return false;

  return true;
}

void ApplicationManager_AddListener_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&listener, handles);
}

void ApplicationManager_AddListener_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&listener, handles);
}

ApplicationManager_AddListener_Params_Data::ApplicationManager_AddListener_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
ApplicationInfo_Data* ApplicationInfo_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ApplicationInfo_Data))) ApplicationInfo_Data();
}

// static
bool ApplicationInfo_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ApplicationInfo_Data* object = static_cast<const ApplicationInfo_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 40 }};

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
          object->url, "null url field in ApplicationInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->qualifier, "null qualifier field in ApplicationInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams qualifier_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->qualifier, bounds_checker,
                                     &qualifier_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, "null name field in ApplicationInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->name, bounds_checker,
                                     &name_validate_params)) {
    return false;
  }

  return true;
}

void ApplicationInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
  mojo::internal::Encode(&qualifier, handles);
  mojo::internal::Encode(&name, handles);
}

void ApplicationInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
  mojo::internal::Decode(&qualifier, handles);
  mojo::internal::Decode(&name, handles);
}

ApplicationInfo_Data::ApplicationInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
ApplicationInfoPtr ApplicationInfo::New() {
  ApplicationInfoPtr rv;
  mojo::internal::StructHelper<ApplicationInfo>::Initialize(&rv);
  return rv;
}

ApplicationInfo::ApplicationInfo()
    : id(),
      url(),
      qualifier(),
      pid(),
      name() {
}

ApplicationInfo::~ApplicationInfo() {
}


ApplicationInfoPtr ApplicationInfo::Clone() const {
  ApplicationInfoPtr rv(New());
  rv->id = id;
  rv->url = url;
  rv->qualifier = qualifier;
  rv->pid = pid;
  rv->name = name;
  return rv;
}


bool ApplicationInfo::Equals(const ApplicationInfo& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->url, other.url))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->qualifier, other.qualifier))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->pid, other.pid))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->name, other.name))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char ApplicationManagerListener::Name_[] = "mojo::shell::mojom::ApplicationManagerListener";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ApplicationManagerListener::Version_;

ApplicationManagerListenerProxy::ApplicationManagerListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ApplicationManagerListenerProxy::SetRunningApplications(
    mojo::Array<ApplicationInfoPtr> in_applications) {
  size_t size = sizeof(internal::ApplicationManagerListener_SetRunningApplications_Params_Data);
  size += GetSerializedSize_(in_applications);
  mojo::internal::MessageBuilder builder(internal::kApplicationManagerListener_SetRunningApplications_Name, size);

  internal::ApplicationManagerListener_SetRunningApplications_Params_Data* params =
      internal::ApplicationManagerListener_SetRunningApplications_Params_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams applications_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_applications), builder.buffer(),
      &params->applications.ptr, &applications_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->applications.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null applications in ApplicationManagerListener.SetRunningApplications request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ApplicationManagerListenerProxy::ApplicationInstanceCreated(
    ApplicationInfoPtr in_application) {
  size_t size = sizeof(internal::ApplicationManagerListener_ApplicationInstanceCreated_Params_Data);
  size += GetSerializedSize_(in_application);
  mojo::internal::MessageBuilder builder(internal::kApplicationManagerListener_ApplicationInstanceCreated_Name, size);

  internal::ApplicationManagerListener_ApplicationInstanceCreated_Params_Data* params =
      internal::ApplicationManagerListener_ApplicationInstanceCreated_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_application), builder.buffer(), &params->application.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->application.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null application in ApplicationManagerListener.ApplicationInstanceCreated request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ApplicationManagerListenerProxy::ApplicationInstanceDestroyed(
    uint32_t in_id) {
  size_t size = sizeof(internal::ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kApplicationManagerListener_ApplicationInstanceDestroyed_Name, size);

  internal::ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data* params =
      internal::ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data::New(builder.buffer());
  params->id = in_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ApplicationManagerListenerProxy::ApplicationPIDAvailable(
    uint32_t in_id, uint32_t in_pid) {
  size_t size = sizeof(internal::ApplicationManagerListener_ApplicationPIDAvailable_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kApplicationManagerListener_ApplicationPIDAvailable_Name, size);

  internal::ApplicationManagerListener_ApplicationPIDAvailable_Params_Data* params =
      internal::ApplicationManagerListener_ApplicationPIDAvailable_Params_Data::New(builder.buffer());
  params->id = in_id;
  params->pid = in_pid;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

ApplicationManagerListenerStub::ApplicationManagerListenerStub()
    : sink_(nullptr),
      control_message_handler_(ApplicationManagerListener::Version_) {
}

ApplicationManagerListenerStub::~ApplicationManagerListenerStub() {}

bool ApplicationManagerListenerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kApplicationManagerListener_SetRunningApplications_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo::shell::mojom.ApplicationManagerListener.SetRunningApplications", __FILE__, __LINE__);
      internal::ApplicationManagerListener_SetRunningApplications_Params_Data* params =
          reinterpret_cast<internal::ApplicationManagerListener_SetRunningApplications_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::Array<ApplicationInfoPtr> p_applications{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->applications.ptr, &p_applications, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ApplicationManagerListener::SetRunningApplications");
      sink_->SetRunningApplications(std::move(p_applications));
      return true;
    }
    case internal::kApplicationManagerListener_ApplicationInstanceCreated_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo::shell::mojom.ApplicationManagerListener.ApplicationInstanceCreated", __FILE__, __LINE__);
      internal::ApplicationManagerListener_ApplicationInstanceCreated_Params_Data* params =
          reinterpret_cast<internal::ApplicationManagerListener_ApplicationInstanceCreated_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      ApplicationInfoPtr p_application{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->application.ptr, &p_application, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ApplicationManagerListener::ApplicationInstanceCreated");
      sink_->ApplicationInstanceCreated(std::move(p_application));
      return true;
    }
    case internal::kApplicationManagerListener_ApplicationInstanceDestroyed_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo::shell::mojom.ApplicationManagerListener.ApplicationInstanceDestroyed", __FILE__, __LINE__);
      internal::ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data* params =
          reinterpret_cast<internal::ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_id = params->id;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ApplicationManagerListener::ApplicationInstanceDestroyed");
      sink_->ApplicationInstanceDestroyed(p_id);
      return true;
    }
    case internal::kApplicationManagerListener_ApplicationPIDAvailable_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo::shell::mojom.ApplicationManagerListener.ApplicationPIDAvailable", __FILE__, __LINE__);
      internal::ApplicationManagerListener_ApplicationPIDAvailable_Params_Data* params =
          reinterpret_cast<internal::ApplicationManagerListener_ApplicationPIDAvailable_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_id{};
      uint32_t p_pid{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_id = params->id;
        p_pid = params->pid;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ApplicationManagerListener::ApplicationPIDAvailable");
      sink_->ApplicationPIDAvailable(p_id, p_pid);
      return true;
    }
  }
  return false;
}

bool ApplicationManagerListenerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kApplicationManagerListener_SetRunningApplications_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::shell::mojom::ApplicationManagerListener::SetRunningApplications", __FILE__, __LINE__);
      break;
    }
    case internal::kApplicationManagerListener_ApplicationInstanceCreated_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::shell::mojom::ApplicationManagerListener::ApplicationInstanceCreated", __FILE__, __LINE__);
      break;
    }
    case internal::kApplicationManagerListener_ApplicationInstanceDestroyed_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::shell::mojom::ApplicationManagerListener::ApplicationInstanceDestroyed", __FILE__, __LINE__);
      break;
    }
    case internal::kApplicationManagerListener_ApplicationPIDAvailable_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::shell::mojom::ApplicationManagerListener::ApplicationPIDAvailable", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

ApplicationManagerListenerRequestValidator::ApplicationManagerListenerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ApplicationManagerListenerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kApplicationManagerListener_SetRunningApplications_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ApplicationManagerListener_SetRunningApplications_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kApplicationManagerListener_ApplicationInstanceCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ApplicationManagerListener_ApplicationInstanceCreated_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kApplicationManagerListener_ApplicationInstanceDestroyed_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ApplicationManagerListener_ApplicationInstanceDestroyed_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kApplicationManagerListener_ApplicationPIDAvailable_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ApplicationManagerListener_ApplicationPIDAvailable_Params_Data>(message)) {
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

MOJO_STATIC_CONST_MEMBER_DEFINITION const char PIDReceiver::Name_[] = "mojo::shell::mojom::PIDReceiver";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t PIDReceiver::Version_;

PIDReceiverProxy::PIDReceiverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void PIDReceiverProxy::SetPID(
    uint32_t in_pid) {
  size_t size = sizeof(internal::PIDReceiver_SetPID_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPIDReceiver_SetPID_Name, size);

  internal::PIDReceiver_SetPID_Params_Data* params =
      internal::PIDReceiver_SetPID_Params_Data::New(builder.buffer());
  params->pid = in_pid;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

PIDReceiverStub::PIDReceiverStub()
    : sink_(nullptr),
      control_message_handler_(PIDReceiver::Version_) {
}

PIDReceiverStub::~PIDReceiverStub() {}

bool PIDReceiverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPIDReceiver_SetPID_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo::shell::mojom.PIDReceiver.SetPID", __FILE__, __LINE__);
      internal::PIDReceiver_SetPID_Params_Data* params =
          reinterpret_cast<internal::PIDReceiver_SetPID_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_pid{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_pid = params->pid;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PIDReceiver::SetPID");
      sink_->SetPID(p_pid);
      return true;
    }
  }
  return false;
}

bool PIDReceiverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPIDReceiver_SetPID_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::shell::mojom::PIDReceiver::SetPID", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

PIDReceiverRequestValidator::PIDReceiverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PIDReceiverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPIDReceiver_SetPID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PIDReceiver_SetPID_Params_Data>(message)) {
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

MOJO_STATIC_CONST_MEMBER_DEFINITION const char ApplicationManager::Name_[] = "mojo::shell::mojom::ApplicationManager";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ApplicationManager::Version_;

ApplicationManagerProxy::ApplicationManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ApplicationManagerProxy::CreateInstanceForHandle(
    mojo::ScopedHandle in_channel, const mojo::String& in_url, mojo::CapabilityFilterPtr in_filter, mojo::InterfaceRequest<PIDReceiver> in_pid_receiver) {
  size_t size = sizeof(internal::ApplicationManager_CreateInstanceForHandle_Params_Data);
  size += GetSerializedSize_(in_url);
  size += GetSerializedSize_(in_filter);
  mojo::internal::MessageBuilder builder(internal::kApplicationManager_CreateInstanceForHandle_Name, size);

  internal::ApplicationManager_CreateInstanceForHandle_Params_Data* params =
      internal::ApplicationManager_CreateInstanceForHandle_Params_Data::New(builder.buffer());
  params->channel = in_channel.release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->channel.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid channel in ApplicationManager.CreateInstanceForHandle request");
  Serialize_(std::move(in_url), builder.buffer(), &params->url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ApplicationManager.CreateInstanceForHandle request");
  Serialize_(std::move(in_filter), builder.buffer(), &params->filter.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->filter.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null filter in ApplicationManager.CreateInstanceForHandle request");
  params->pid_receiver = in_pid_receiver.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->pid_receiver.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid pid_receiver in ApplicationManager.CreateInstanceForHandle request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ApplicationManagerProxy::AddListener(
    ApplicationManagerListenerPtr in_listener) {
  size_t size = sizeof(internal::ApplicationManager_AddListener_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kApplicationManager_AddListener_Name, size);

  internal::ApplicationManager_AddListener_Params_Data* params =
      internal::ApplicationManager_AddListener_Params_Data::New(builder.buffer());
  mojo::internal::InterfacePointerToData(std::move(in_listener), &params->listener);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->listener.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in ApplicationManager.AddListener request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

ApplicationManagerStub::ApplicationManagerStub()
    : sink_(nullptr),
      control_message_handler_(ApplicationManager::Version_) {
}

ApplicationManagerStub::~ApplicationManagerStub() {}

bool ApplicationManagerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kApplicationManager_CreateInstanceForHandle_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo::shell::mojom.ApplicationManager.CreateInstanceForHandle", __FILE__, __LINE__);
      internal::ApplicationManager_CreateInstanceForHandle_Params_Data* params =
          reinterpret_cast<internal::ApplicationManager_CreateInstanceForHandle_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::ScopedHandle p_channel{};
      mojo::String p_url{};
      mojo::CapabilityFilterPtr p_filter{};
      mojo::InterfaceRequest<PIDReceiver> p_pid_receiver{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_channel.reset(mojo::internal::FetchAndReset(&params->channel));
        if (!Deserialize_(params->url.ptr, &p_url, &serialization_context_))
          success = false;
        if (!Deserialize_(params->filter.ptr, &p_filter, &serialization_context_))
          success = false;
        p_pid_receiver.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->pid_receiver)));
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ApplicationManager::CreateInstanceForHandle");
      sink_->CreateInstanceForHandle(std::move(p_channel), p_url, std::move(p_filter), std::move(p_pid_receiver));
      return true;
    }
    case internal::kApplicationManager_AddListener_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo::shell::mojom.ApplicationManager.AddListener", __FILE__, __LINE__);
      internal::ApplicationManager_AddListener_Params_Data* params =
          reinterpret_cast<internal::ApplicationManager_AddListener_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      ApplicationManagerListenerPtr p_listener{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        mojo::internal::InterfaceDataToPointer(&params->listener, &p_listener);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ApplicationManager::AddListener");
      sink_->AddListener(std::move(p_listener));
      return true;
    }
  }
  return false;
}

bool ApplicationManagerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kApplicationManager_CreateInstanceForHandle_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::shell::mojom::ApplicationManager::CreateInstanceForHandle", __FILE__, __LINE__);
      break;
    }
    case internal::kApplicationManager_AddListener_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::shell::mojom::ApplicationManager::AddListener", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

ApplicationManagerRequestValidator::ApplicationManagerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ApplicationManagerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kApplicationManager_CreateInstanceForHandle_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ApplicationManager_CreateInstanceForHandle_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kApplicationManager_AddListener_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ApplicationManager_AddListener_Params_Data>(message)) {
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

size_t GetSerializedSize_(const ApplicationInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::ApplicationInfo_Data);
  size += GetSerializedSize_(input->url);
  size += GetSerializedSize_(input->qualifier);
  size += GetSerializedSize_(input->name);
  return size;
}

void Serialize_(ApplicationInfoPtr input, mojo::internal::Buffer* buf,
                internal::ApplicationInfo_Data** output) {
  if (input) {
    internal::ApplicationInfo_Data* result =
        internal::ApplicationInfo_Data::New(buf);
    result->id = input->id;
    Serialize_(std::move(input->url), buf, &result->url.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->url.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in ApplicationInfo struct");
    Serialize_(std::move(input->qualifier), buf, &result->qualifier.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->qualifier.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null qualifier in ApplicationInfo struct");
    result->pid = input->pid;
    Serialize_(std::move(input->name), buf, &result->name.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->name.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in ApplicationInfo struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::ApplicationInfo_Data* input,
                  ApplicationInfoPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    ApplicationInfoPtr result(ApplicationInfo::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->id = input->id;
      if (!Deserialize_(input->url.ptr, &result->url, context))
        success = false;
      if (!Deserialize_(input->qualifier.ptr, &result->qualifier, context))
        success = false;
      result->pid = input->pid;
      if (!Deserialize_(input->name.ptr, &result->name, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

ApplicationInfo_Reader::ApplicationInfo_Reader(
    internal::ApplicationInfo_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace mojom
}  // namespace shell
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif