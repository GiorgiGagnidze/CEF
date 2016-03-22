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

#include "content/common/presentation/presentation_service.mojom.h"

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
namespace presentation {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kPresentationService_SetClient_Name = 0;

class PresentationService_SetClient_Params_Data {
 public:
  static PresentationService_SetClient_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  PresentationService_SetClient_Params_Data();
  ~PresentationService_SetClient_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_SetClient_Params_Data) == 16,
              "Bad sizeof(PresentationService_SetClient_Params_Data)");

// static
PresentationService_SetClient_Params_Data* PresentationService_SetClient_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_SetClient_Params_Data))) PresentationService_SetClient_Params_Data();
}

// static
bool PresentationService_SetClient_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_SetClient_Params_Data* object = static_cast<const PresentationService_SetClient_Params_Data*>(data);

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

  const mojo::Handle client_handle = object->client.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          client_handle,
          "invalid client field in PresentationService_SetClient_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(client_handle, bounds_checker))
    return false;

  return true;
}

void PresentationService_SetClient_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&client, handles);
}

void PresentationService_SetClient_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&client, handles);
}

PresentationService_SetClient_Params_Data::PresentationService_SetClient_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationService_SetDefaultPresentationURL_Name = 1;

class PresentationService_SetDefaultPresentationURL_Params_Data {
 public:
  static PresentationService_SetDefaultPresentationURL_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;

 private:
  PresentationService_SetDefaultPresentationURL_Params_Data();
  ~PresentationService_SetDefaultPresentationURL_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_SetDefaultPresentationURL_Params_Data) == 16,
              "Bad sizeof(PresentationService_SetDefaultPresentationURL_Params_Data)");

// static
PresentationService_SetDefaultPresentationURL_Params_Data* PresentationService_SetDefaultPresentationURL_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_SetDefaultPresentationURL_Params_Data))) PresentationService_SetDefaultPresentationURL_Params_Data();
}

// static
bool PresentationService_SetDefaultPresentationURL_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_SetDefaultPresentationURL_Params_Data* object = static_cast<const PresentationService_SetDefaultPresentationURL_Params_Data*>(data);

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
          object->url, "null url field in PresentationService_SetDefaultPresentationURL_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  return true;
}

void PresentationService_SetDefaultPresentationURL_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
}

void PresentationService_SetDefaultPresentationURL_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
}

PresentationService_SetDefaultPresentationURL_Params_Data::PresentationService_SetDefaultPresentationURL_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationService_ListenForScreenAvailability_Name = 2;

class PresentationService_ListenForScreenAvailability_Params_Data {
 public:
  static PresentationService_ListenForScreenAvailability_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;

 private:
  PresentationService_ListenForScreenAvailability_Params_Data();
  ~PresentationService_ListenForScreenAvailability_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_ListenForScreenAvailability_Params_Data) == 16,
              "Bad sizeof(PresentationService_ListenForScreenAvailability_Params_Data)");

// static
PresentationService_ListenForScreenAvailability_Params_Data* PresentationService_ListenForScreenAvailability_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_ListenForScreenAvailability_Params_Data))) PresentationService_ListenForScreenAvailability_Params_Data();
}

// static
bool PresentationService_ListenForScreenAvailability_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_ListenForScreenAvailability_Params_Data* object = static_cast<const PresentationService_ListenForScreenAvailability_Params_Data*>(data);

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
          object->url, "null url field in PresentationService_ListenForScreenAvailability_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  return true;
}

void PresentationService_ListenForScreenAvailability_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
}

void PresentationService_ListenForScreenAvailability_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
}

PresentationService_ListenForScreenAvailability_Params_Data::PresentationService_ListenForScreenAvailability_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationService_StopListeningForScreenAvailability_Name = 3;

class PresentationService_StopListeningForScreenAvailability_Params_Data {
 public:
  static PresentationService_StopListeningForScreenAvailability_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;

 private:
  PresentationService_StopListeningForScreenAvailability_Params_Data();
  ~PresentationService_StopListeningForScreenAvailability_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_StopListeningForScreenAvailability_Params_Data) == 16,
              "Bad sizeof(PresentationService_StopListeningForScreenAvailability_Params_Data)");

// static
PresentationService_StopListeningForScreenAvailability_Params_Data* PresentationService_StopListeningForScreenAvailability_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_StopListeningForScreenAvailability_Params_Data))) PresentationService_StopListeningForScreenAvailability_Params_Data();
}

// static
bool PresentationService_StopListeningForScreenAvailability_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_StopListeningForScreenAvailability_Params_Data* object = static_cast<const PresentationService_StopListeningForScreenAvailability_Params_Data*>(data);

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
          object->url, "null url field in PresentationService_StopListeningForScreenAvailability_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  return true;
}

void PresentationService_StopListeningForScreenAvailability_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
}

void PresentationService_StopListeningForScreenAvailability_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
}

PresentationService_StopListeningForScreenAvailability_Params_Data::PresentationService_StopListeningForScreenAvailability_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationService_StartSession_Name = 4;

class PresentationService_StartSession_Params_Data {
 public:
  static PresentationService_StartSession_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer presentation_url;

 private:
  PresentationService_StartSession_Params_Data();
  ~PresentationService_StartSession_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_StartSession_Params_Data) == 16,
              "Bad sizeof(PresentationService_StartSession_Params_Data)");

// static
PresentationService_StartSession_Params_Data* PresentationService_StartSession_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_StartSession_Params_Data))) PresentationService_StartSession_Params_Data();
}

// static
bool PresentationService_StartSession_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_StartSession_Params_Data* object = static_cast<const PresentationService_StartSession_Params_Data*>(data);

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
          object->presentation_url, "null presentation_url field in PresentationService_StartSession_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams presentation_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->presentation_url, bounds_checker,
                                     &presentation_url_validate_params)) {
    return false;
  }

  return true;
}

void PresentationService_StartSession_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&presentation_url, handles);
}

void PresentationService_StartSession_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&presentation_url, handles);
}

PresentationService_StartSession_Params_Data::PresentationService_StartSession_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class PresentationService_StartSession_ResponseParams_Data {
 public:
  static PresentationService_StartSession_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::PresentationSessionInfo_Data> sessionInfo;
  mojo::internal::StructPointer<internal::PresentationError_Data> error;

 private:
  PresentationService_StartSession_ResponseParams_Data();
  ~PresentationService_StartSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(PresentationService_StartSession_ResponseParams_Data) == 24,
              "Bad sizeof(PresentationService_StartSession_ResponseParams_Data)");

// static
PresentationService_StartSession_ResponseParams_Data* PresentationService_StartSession_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_StartSession_ResponseParams_Data))) PresentationService_StartSession_ResponseParams_Data();
}

// static
bool PresentationService_StartSession_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_StartSession_ResponseParams_Data* object = static_cast<const PresentationService_StartSession_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->sessionInfo, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->error, bounds_checker))
    return false;

  return true;
}

void PresentationService_StartSession_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&sessionInfo, handles);
  mojo::internal::Encode(&error, handles);
}

void PresentationService_StartSession_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&sessionInfo, handles);
  mojo::internal::Decode(&error, handles);
}

PresentationService_StartSession_ResponseParams_Data::PresentationService_StartSession_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationService_JoinSession_Name = 5;

class PresentationService_JoinSession_Params_Data {
 public:
  static PresentationService_JoinSession_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer presentation_url;
  mojo::internal::StringPointer presentation_id;

 private:
  PresentationService_JoinSession_Params_Data();
  ~PresentationService_JoinSession_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_JoinSession_Params_Data) == 24,
              "Bad sizeof(PresentationService_JoinSession_Params_Data)");

// static
PresentationService_JoinSession_Params_Data* PresentationService_JoinSession_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_JoinSession_Params_Data))) PresentationService_JoinSession_Params_Data();
}

// static
bool PresentationService_JoinSession_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_JoinSession_Params_Data* object = static_cast<const PresentationService_JoinSession_Params_Data*>(data);

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
          object->presentation_url, "null presentation_url field in PresentationService_JoinSession_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams presentation_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->presentation_url, bounds_checker,
                                     &presentation_url_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->presentation_id, bounds_checker,
                                     &presentation_id_validate_params)) {
    return false;
  }

  return true;
}

void PresentationService_JoinSession_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&presentation_url, handles);
  mojo::internal::Encode(&presentation_id, handles);
}

void PresentationService_JoinSession_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&presentation_url, handles);
  mojo::internal::Decode(&presentation_id, handles);
}

PresentationService_JoinSession_Params_Data::PresentationService_JoinSession_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class PresentationService_JoinSession_ResponseParams_Data {
 public:
  static PresentationService_JoinSession_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::PresentationSessionInfo_Data> sessionInfo;
  mojo::internal::StructPointer<internal::PresentationError_Data> error;

 private:
  PresentationService_JoinSession_ResponseParams_Data();
  ~PresentationService_JoinSession_ResponseParams_Data() = delete;
};
static_assert(sizeof(PresentationService_JoinSession_ResponseParams_Data) == 24,
              "Bad sizeof(PresentationService_JoinSession_ResponseParams_Data)");

// static
PresentationService_JoinSession_ResponseParams_Data* PresentationService_JoinSession_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_JoinSession_ResponseParams_Data))) PresentationService_JoinSession_ResponseParams_Data();
}

// static
bool PresentationService_JoinSession_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_JoinSession_ResponseParams_Data* object = static_cast<const PresentationService_JoinSession_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->sessionInfo, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->error, bounds_checker))
    return false;

  return true;
}

void PresentationService_JoinSession_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&sessionInfo, handles);
  mojo::internal::Encode(&error, handles);
}

void PresentationService_JoinSession_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&sessionInfo, handles);
  mojo::internal::Decode(&error, handles);
}

PresentationService_JoinSession_ResponseParams_Data::PresentationService_JoinSession_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationService_SendSessionMessage_Name = 6;

class PresentationService_SendSessionMessage_Params_Data {
 public:
  static PresentationService_SendSessionMessage_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::PresentationSessionInfo_Data> sessionInfo;
  mojo::internal::StructPointer<internal::SessionMessage_Data> message_request;

 private:
  PresentationService_SendSessionMessage_Params_Data();
  ~PresentationService_SendSessionMessage_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_SendSessionMessage_Params_Data) == 24,
              "Bad sizeof(PresentationService_SendSessionMessage_Params_Data)");

// static
PresentationService_SendSessionMessage_Params_Data* PresentationService_SendSessionMessage_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_SendSessionMessage_Params_Data))) PresentationService_SendSessionMessage_Params_Data();
}

// static
bool PresentationService_SendSessionMessage_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_SendSessionMessage_Params_Data* object = static_cast<const PresentationService_SendSessionMessage_Params_Data*>(data);

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
          object->sessionInfo, "null sessionInfo field in PresentationService_SendSessionMessage_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->sessionInfo, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message_request, "null message_request field in PresentationService_SendSessionMessage_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->message_request, bounds_checker))
    return false;

  return true;
}

void PresentationService_SendSessionMessage_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&sessionInfo, handles);
  mojo::internal::Encode(&message_request, handles);
}

void PresentationService_SendSessionMessage_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&sessionInfo, handles);
  mojo::internal::Decode(&message_request, handles);
}

PresentationService_SendSessionMessage_Params_Data::PresentationService_SendSessionMessage_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class PresentationService_SendSessionMessage_ResponseParams_Data {
 public:
  static PresentationService_SendSessionMessage_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  PresentationService_SendSessionMessage_ResponseParams_Data();
  ~PresentationService_SendSessionMessage_ResponseParams_Data() = delete;
};
static_assert(sizeof(PresentationService_SendSessionMessage_ResponseParams_Data) == 16,
              "Bad sizeof(PresentationService_SendSessionMessage_ResponseParams_Data)");

// static
PresentationService_SendSessionMessage_ResponseParams_Data* PresentationService_SendSessionMessage_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_SendSessionMessage_ResponseParams_Data))) PresentationService_SendSessionMessage_ResponseParams_Data();
}

// static
bool PresentationService_SendSessionMessage_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_SendSessionMessage_ResponseParams_Data* object = static_cast<const PresentationService_SendSessionMessage_ResponseParams_Data*>(data);

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

void PresentationService_SendSessionMessage_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void PresentationService_SendSessionMessage_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

PresentationService_SendSessionMessage_ResponseParams_Data::PresentationService_SendSessionMessage_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationService_CloseConnection_Name = 7;

class PresentationService_CloseConnection_Params_Data {
 public:
  static PresentationService_CloseConnection_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer presentation_url;
  mojo::internal::StringPointer presentation_id;

 private:
  PresentationService_CloseConnection_Params_Data();
  ~PresentationService_CloseConnection_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_CloseConnection_Params_Data) == 24,
              "Bad sizeof(PresentationService_CloseConnection_Params_Data)");

// static
PresentationService_CloseConnection_Params_Data* PresentationService_CloseConnection_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_CloseConnection_Params_Data))) PresentationService_CloseConnection_Params_Data();
}

// static
bool PresentationService_CloseConnection_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_CloseConnection_Params_Data* object = static_cast<const PresentationService_CloseConnection_Params_Data*>(data);

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
          object->presentation_url, "null presentation_url field in PresentationService_CloseConnection_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams presentation_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->presentation_url, bounds_checker,
                                     &presentation_url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->presentation_id, "null presentation_id field in PresentationService_CloseConnection_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->presentation_id, bounds_checker,
                                     &presentation_id_validate_params)) {
    return false;
  }

  return true;
}

void PresentationService_CloseConnection_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&presentation_url, handles);
  mojo::internal::Encode(&presentation_id, handles);
}

void PresentationService_CloseConnection_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&presentation_url, handles);
  mojo::internal::Decode(&presentation_id, handles);
}

PresentationService_CloseConnection_Params_Data::PresentationService_CloseConnection_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationService_Terminate_Name = 8;

class PresentationService_Terminate_Params_Data {
 public:
  static PresentationService_Terminate_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer presentation_url;
  mojo::internal::StringPointer presentation_id;

 private:
  PresentationService_Terminate_Params_Data();
  ~PresentationService_Terminate_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_Terminate_Params_Data) == 24,
              "Bad sizeof(PresentationService_Terminate_Params_Data)");

// static
PresentationService_Terminate_Params_Data* PresentationService_Terminate_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_Terminate_Params_Data))) PresentationService_Terminate_Params_Data();
}

// static
bool PresentationService_Terminate_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_Terminate_Params_Data* object = static_cast<const PresentationService_Terminate_Params_Data*>(data);

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
          object->presentation_url, "null presentation_url field in PresentationService_Terminate_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams presentation_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->presentation_url, bounds_checker,
                                     &presentation_url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->presentation_id, "null presentation_id field in PresentationService_Terminate_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->presentation_id, bounds_checker,
                                     &presentation_id_validate_params)) {
    return false;
  }

  return true;
}

void PresentationService_Terminate_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&presentation_url, handles);
  mojo::internal::Encode(&presentation_id, handles);
}

void PresentationService_Terminate_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&presentation_url, handles);
  mojo::internal::Decode(&presentation_id, handles);
}

PresentationService_Terminate_Params_Data::PresentationService_Terminate_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationService_ListenForSessionMessages_Name = 9;

class PresentationService_ListenForSessionMessages_Params_Data {
 public:
  static PresentationService_ListenForSessionMessages_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::PresentationSessionInfo_Data> sessionInfo;

 private:
  PresentationService_ListenForSessionMessages_Params_Data();
  ~PresentationService_ListenForSessionMessages_Params_Data() = delete;
};
static_assert(sizeof(PresentationService_ListenForSessionMessages_Params_Data) == 16,
              "Bad sizeof(PresentationService_ListenForSessionMessages_Params_Data)");

// static
PresentationService_ListenForSessionMessages_Params_Data* PresentationService_ListenForSessionMessages_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationService_ListenForSessionMessages_Params_Data))) PresentationService_ListenForSessionMessages_Params_Data();
}

// static
bool PresentationService_ListenForSessionMessages_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationService_ListenForSessionMessages_Params_Data* object = static_cast<const PresentationService_ListenForSessionMessages_Params_Data*>(data);

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
          object->sessionInfo, "null sessionInfo field in PresentationService_ListenForSessionMessages_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->sessionInfo, bounds_checker))
    return false;

  return true;
}

void PresentationService_ListenForSessionMessages_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&sessionInfo, handles);
}

void PresentationService_ListenForSessionMessages_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&sessionInfo, handles);
}

PresentationService_ListenForSessionMessages_Params_Data::PresentationService_ListenForSessionMessages_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name = 0;

class PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data {
 public:
  static PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;

 private:
  PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data();
  ~PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data() = delete;
};
static_assert(sizeof(PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data) == 16,
              "Bad sizeof(PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data)");

// static
PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data* PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data))) PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data();
}

// static
bool PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data* object = static_cast<const PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data*>(data);

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
          object->url, "null url field in PresentationServiceClient_OnScreenAvailabilityNotSupported_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  return true;
}

void PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
}

void PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
}

PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationServiceClient_OnScreenAvailabilityUpdated_Name = 1;

class PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data {
 public:
  static PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;
  uint8_t available : 1;
  uint8_t padfinal_[7];

 private:
  PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data();
  ~PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data() = delete;
};
static_assert(sizeof(PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data) == 24,
              "Bad sizeof(PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data)");

// static
PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data* PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data))) PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data();
}

// static
bool PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data* object = static_cast<const PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data*>(data);

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
          object->url, "null url field in PresentationServiceClient_OnScreenAvailabilityUpdated_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  return true;
}

void PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
}

void PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
}

PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationServiceClient_OnConnectionStateChanged_Name = 2;

class PresentationServiceClient_OnConnectionStateChanged_Params_Data {
 public:
  static PresentationServiceClient_OnConnectionStateChanged_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::PresentationSessionInfo_Data> connection;
  internal::PresentationConnectionState_Data newState;
  uint8_t padfinal_[4];

 private:
  PresentationServiceClient_OnConnectionStateChanged_Params_Data();
  ~PresentationServiceClient_OnConnectionStateChanged_Params_Data() = delete;
};
static_assert(sizeof(PresentationServiceClient_OnConnectionStateChanged_Params_Data) == 24,
              "Bad sizeof(PresentationServiceClient_OnConnectionStateChanged_Params_Data)");

// static
PresentationServiceClient_OnConnectionStateChanged_Params_Data* PresentationServiceClient_OnConnectionStateChanged_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationServiceClient_OnConnectionStateChanged_Params_Data))) PresentationServiceClient_OnConnectionStateChanged_Params_Data();
}

// static
bool PresentationServiceClient_OnConnectionStateChanged_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationServiceClient_OnConnectionStateChanged_Params_Data* object = static_cast<const PresentationServiceClient_OnConnectionStateChanged_Params_Data*>(data);

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
          object->connection, "null connection field in PresentationServiceClient_OnConnectionStateChanged_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->connection, bounds_checker))
    return false;

  if (!mojo::internal::ValidateEnum(object->newState))
    return false;

  return true;
}

void PresentationServiceClient_OnConnectionStateChanged_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&connection, handles);
}

void PresentationServiceClient_OnConnectionStateChanged_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&connection, handles);
}

PresentationServiceClient_OnConnectionStateChanged_Params_Data::PresentationServiceClient_OnConnectionStateChanged_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationServiceClient_OnSessionMessagesReceived_Name = 3;

class PresentationServiceClient_OnSessionMessagesReceived_Params_Data {
 public:
  static PresentationServiceClient_OnSessionMessagesReceived_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::PresentationSessionInfo_Data> sessionInfo;
  mojo::internal::ArrayPointer<internal::SessionMessage_Data*> messages;

 private:
  PresentationServiceClient_OnSessionMessagesReceived_Params_Data();
  ~PresentationServiceClient_OnSessionMessagesReceived_Params_Data() = delete;
};
static_assert(sizeof(PresentationServiceClient_OnSessionMessagesReceived_Params_Data) == 24,
              "Bad sizeof(PresentationServiceClient_OnSessionMessagesReceived_Params_Data)");

// static
PresentationServiceClient_OnSessionMessagesReceived_Params_Data* PresentationServiceClient_OnSessionMessagesReceived_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationServiceClient_OnSessionMessagesReceived_Params_Data))) PresentationServiceClient_OnSessionMessagesReceived_Params_Data();
}

// static
bool PresentationServiceClient_OnSessionMessagesReceived_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationServiceClient_OnSessionMessagesReceived_Params_Data* object = static_cast<const PresentationServiceClient_OnSessionMessagesReceived_Params_Data*>(data);

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
          object->sessionInfo, "null sessionInfo field in PresentationServiceClient_OnSessionMessagesReceived_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->sessionInfo, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->messages, "null messages field in PresentationServiceClient_OnSessionMessagesReceived_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams messages_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->messages, bounds_checker,
                                     &messages_validate_params)) {
    return false;
  }

  return true;
}

void PresentationServiceClient_OnSessionMessagesReceived_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&sessionInfo, handles);
  mojo::internal::Encode(&messages, handles);
}

void PresentationServiceClient_OnSessionMessagesReceived_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&sessionInfo, handles);
  mojo::internal::Decode(&messages, handles);
}

PresentationServiceClient_OnSessionMessagesReceived_Params_Data::PresentationServiceClient_OnSessionMessagesReceived_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kPresentationServiceClient_OnDefaultSessionStarted_Name = 4;

class PresentationServiceClient_OnDefaultSessionStarted_Params_Data {
 public:
  static PresentationServiceClient_OnDefaultSessionStarted_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::PresentationSessionInfo_Data> sessionInfo;

 private:
  PresentationServiceClient_OnDefaultSessionStarted_Params_Data();
  ~PresentationServiceClient_OnDefaultSessionStarted_Params_Data() = delete;
};
static_assert(sizeof(PresentationServiceClient_OnDefaultSessionStarted_Params_Data) == 16,
              "Bad sizeof(PresentationServiceClient_OnDefaultSessionStarted_Params_Data)");

// static
PresentationServiceClient_OnDefaultSessionStarted_Params_Data* PresentationServiceClient_OnDefaultSessionStarted_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationServiceClient_OnDefaultSessionStarted_Params_Data))) PresentationServiceClient_OnDefaultSessionStarted_Params_Data();
}

// static
bool PresentationServiceClient_OnDefaultSessionStarted_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationServiceClient_OnDefaultSessionStarted_Params_Data* object = static_cast<const PresentationServiceClient_OnDefaultSessionStarted_Params_Data*>(data);

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
          object->sessionInfo, "null sessionInfo field in PresentationServiceClient_OnDefaultSessionStarted_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->sessionInfo, bounds_checker))
    return false;

  return true;
}

void PresentationServiceClient_OnDefaultSessionStarted_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&sessionInfo, handles);
}

void PresentationServiceClient_OnDefaultSessionStarted_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&sessionInfo, handles);
}

PresentationServiceClient_OnDefaultSessionStarted_Params_Data::PresentationServiceClient_OnDefaultSessionStarted_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
PresentationSessionInfo_Data* PresentationSessionInfo_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationSessionInfo_Data))) PresentationSessionInfo_Data();
}

// static
bool PresentationSessionInfo_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationSessionInfo_Data* object = static_cast<const PresentationSessionInfo_Data*>(data);

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
          object->url, "null url field in PresentationSessionInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, "null id field in PresentationSessionInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->id, bounds_checker,
                                     &id_validate_params)) {
    return false;
  }

  return true;
}

void PresentationSessionInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
  mojo::internal::Encode(&id, handles);
}

void PresentationSessionInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
  mojo::internal::Decode(&id, handles);
}

PresentationSessionInfo_Data::PresentationSessionInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
PresentationError_Data* PresentationError_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PresentationError_Data))) PresentationError_Data();
}

// static
bool PresentationError_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PresentationError_Data* object = static_cast<const PresentationError_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->error_type))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, "null message field in PresentationError struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->message, bounds_checker,
                                     &message_validate_params)) {
    return false;
  }

  return true;
}

void PresentationError_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&message, handles);
}

void PresentationError_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&message, handles);
}

PresentationError_Data::PresentationError_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
SessionMessage_Data* SessionMessage_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(SessionMessage_Data))) SessionMessage_Data();
}

// static
bool SessionMessage_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SessionMessage_Data* object = static_cast<const SessionMessage_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->type))
    return false;

  const mojo::internal::ArrayValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->message, bounds_checker,
                                     &message_validate_params)) {
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

void SessionMessage_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&message, handles);
  mojo::internal::Encode(&data, handles);
}

void SessionMessage_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&message, handles);
  mojo::internal::Decode(&data, handles);
}

SessionMessage_Data::SessionMessage_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
PresentationSessionInfoPtr PresentationSessionInfo::New() {
  PresentationSessionInfoPtr rv;
  mojo::internal::StructHelper<PresentationSessionInfo>::Initialize(&rv);
  return rv;
}

PresentationSessionInfo::PresentationSessionInfo()
    : url(),
      id() {
}

PresentationSessionInfo::~PresentationSessionInfo() {
}


PresentationSessionInfoPtr PresentationSessionInfo::Clone() const {
  PresentationSessionInfoPtr rv(New());
  rv->url = url;
  rv->id = id;
  return rv;
}


bool PresentationSessionInfo::Equals(const PresentationSessionInfo& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->url, other.url))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->id, other.id))
    return false;
  return true;
}// static
PresentationErrorPtr PresentationError::New() {
  PresentationErrorPtr rv;
  mojo::internal::StructHelper<PresentationError>::Initialize(&rv);
  return rv;
}

PresentationError::PresentationError()
    : error_type(),
      message() {
}

PresentationError::~PresentationError() {
}


PresentationErrorPtr PresentationError::Clone() const {
  PresentationErrorPtr rv(New());
  rv->error_type = error_type;
  rv->message = message;
  return rv;
}


bool PresentationError::Equals(const PresentationError& other) const {
  if (!mojo::internal::ValueTraits<PresentationErrorType>::Equals(this->error_type, other.error_type))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->message, other.message))
    return false;
  return true;
}// static
SessionMessagePtr SessionMessage::New() {
  SessionMessagePtr rv;
  mojo::internal::StructHelper<SessionMessage>::Initialize(&rv);
  return rv;
}

SessionMessage::SessionMessage()
    : type(),
      message(),
      data() {
}

SessionMessage::~SessionMessage() {
}


SessionMessagePtr SessionMessage::Clone() const {
  SessionMessagePtr rv(New());
  rv->type = type;
  rv->message = message;
  rv->data = data.Clone();
  return rv;
}


bool SessionMessage::Equals(const SessionMessage& other) const {
  if (!mojo::internal::ValueTraits<PresentationMessageType>::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->message, other.message))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<uint8_t>>::Equals(this->data, other.data))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char PresentationService::Name_[] = "presentation::PresentationService";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t PresentationService::Version_;
class PresentationService_StartSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PresentationService_StartSession_ForwardToCallback(
      const PresentationService::StartSessionCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PresentationService::StartSessionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PresentationService_StartSession_ForwardToCallback);
};
bool PresentationService_StartSession_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PresentationService_StartSession_ResponseParams_Data* params =
      reinterpret_cast<internal::PresentationService_StartSession_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  PresentationSessionInfoPtr p_sessionInfo{};
  PresentationErrorPtr p_error{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->sessionInfo.ptr, &p_sessionInfo, &serialization_context_))
      success = false;
    if (!Deserialize_(params->error.ptr, &p_error, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_sessionInfo), std::move(p_error));
  return true;
}
class PresentationService_JoinSession_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PresentationService_JoinSession_ForwardToCallback(
      const PresentationService::JoinSessionCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PresentationService::JoinSessionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PresentationService_JoinSession_ForwardToCallback);
};
bool PresentationService_JoinSession_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PresentationService_JoinSession_ResponseParams_Data* params =
      reinterpret_cast<internal::PresentationService_JoinSession_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  PresentationSessionInfoPtr p_sessionInfo{};
  PresentationErrorPtr p_error{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->sessionInfo.ptr, &p_sessionInfo, &serialization_context_))
      success = false;
    if (!Deserialize_(params->error.ptr, &p_error, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_sessionInfo), std::move(p_error));
  return true;
}
class PresentationService_SendSessionMessage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  PresentationService_SendSessionMessage_ForwardToCallback(
      const PresentationService::SendSessionMessageCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  PresentationService::SendSessionMessageCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PresentationService_SendSessionMessage_ForwardToCallback);
};
bool PresentationService_SendSessionMessage_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::PresentationService_SendSessionMessage_ResponseParams_Data* params =
      reinterpret_cast<internal::PresentationService_SendSessionMessage_ResponseParams_Data*>(
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

PresentationServiceProxy::PresentationServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void PresentationServiceProxy::SetClient(
    PresentationServiceClientPtr in_client) {
  size_t size = sizeof(internal::PresentationService_SetClient_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_SetClient_Name, size);

  internal::PresentationService_SetClient_Params_Data* params =
      internal::PresentationService_SetClient_Params_Data::New(builder.buffer());
  mojo::internal::InterfacePointerToData(std::move(in_client), &params->client);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->client.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in PresentationService.SetClient request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PresentationServiceProxy::SetDefaultPresentationURL(
    const mojo::String& in_url) {
  size_t size = sizeof(internal::PresentationService_SetDefaultPresentationURL_Params_Data);
  size += GetSerializedSize_(in_url);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_SetDefaultPresentationURL_Name, size);

  internal::PresentationService_SetDefaultPresentationURL_Params_Data* params =
      internal::PresentationService_SetDefaultPresentationURL_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_url), builder.buffer(), &params->url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PresentationService.SetDefaultPresentationURL request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PresentationServiceProxy::ListenForScreenAvailability(
    const mojo::String& in_url) {
  size_t size = sizeof(internal::PresentationService_ListenForScreenAvailability_Params_Data);
  size += GetSerializedSize_(in_url);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_ListenForScreenAvailability_Name, size);

  internal::PresentationService_ListenForScreenAvailability_Params_Data* params =
      internal::PresentationService_ListenForScreenAvailability_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_url), builder.buffer(), &params->url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PresentationService.ListenForScreenAvailability request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PresentationServiceProxy::StopListeningForScreenAvailability(
    const mojo::String& in_url) {
  size_t size = sizeof(internal::PresentationService_StopListeningForScreenAvailability_Params_Data);
  size += GetSerializedSize_(in_url);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_StopListeningForScreenAvailability_Name, size);

  internal::PresentationService_StopListeningForScreenAvailability_Params_Data* params =
      internal::PresentationService_StopListeningForScreenAvailability_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_url), builder.buffer(), &params->url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PresentationService.StopListeningForScreenAvailability request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PresentationServiceProxy::StartSession(
    const mojo::String& in_presentation_url, const StartSessionCallback& callback) {
  size_t size = sizeof(internal::PresentationService_StartSession_Params_Data);
  size += GetSerializedSize_(in_presentation_url);
  mojo::internal::RequestMessageBuilder builder(internal::kPresentationService_StartSession_Name, size);

  internal::PresentationService_StartSession_Params_Data* params =
      internal::PresentationService_StartSession_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_presentation_url), builder.buffer(), &params->presentation_url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->presentation_url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_url in PresentationService.StartSession request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PresentationService_StartSession_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void PresentationServiceProxy::JoinSession(
    const mojo::String& in_presentation_url, const mojo::String& in_presentation_id, const JoinSessionCallback& callback) {
  size_t size = sizeof(internal::PresentationService_JoinSession_Params_Data);
  size += GetSerializedSize_(in_presentation_url);
  size += GetSerializedSize_(in_presentation_id);
  mojo::internal::RequestMessageBuilder builder(internal::kPresentationService_JoinSession_Name, size);

  internal::PresentationService_JoinSession_Params_Data* params =
      internal::PresentationService_JoinSession_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_presentation_url), builder.buffer(), &params->presentation_url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->presentation_url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_url in PresentationService.JoinSession request");
  Serialize_(std::move(in_presentation_id), builder.buffer(), &params->presentation_id.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PresentationService_JoinSession_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void PresentationServiceProxy::SendSessionMessage(
    PresentationSessionInfoPtr in_sessionInfo, SessionMessagePtr in_message_request, const SendSessionMessageCallback& callback) {
  size_t size = sizeof(internal::PresentationService_SendSessionMessage_Params_Data);
  size += GetSerializedSize_(in_sessionInfo);
  size += GetSerializedSize_(in_message_request);
  mojo::internal::RequestMessageBuilder builder(internal::kPresentationService_SendSessionMessage_Name, size);

  internal::PresentationService_SendSessionMessage_Params_Data* params =
      internal::PresentationService_SendSessionMessage_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_sessionInfo), builder.buffer(), &params->sessionInfo.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->sessionInfo.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sessionInfo in PresentationService.SendSessionMessage request");
  Serialize_(std::move(in_message_request), builder.buffer(), &params->message_request.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->message_request.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message_request in PresentationService.SendSessionMessage request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new PresentationService_SendSessionMessage_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void PresentationServiceProxy::CloseConnection(
    const mojo::String& in_presentation_url, const mojo::String& in_presentation_id) {
  size_t size = sizeof(internal::PresentationService_CloseConnection_Params_Data);
  size += GetSerializedSize_(in_presentation_url);
  size += GetSerializedSize_(in_presentation_id);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_CloseConnection_Name, size);

  internal::PresentationService_CloseConnection_Params_Data* params =
      internal::PresentationService_CloseConnection_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_presentation_url), builder.buffer(), &params->presentation_url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->presentation_url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_url in PresentationService.CloseConnection request");
  Serialize_(std::move(in_presentation_id), builder.buffer(), &params->presentation_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->presentation_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_id in PresentationService.CloseConnection request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PresentationServiceProxy::Terminate(
    const mojo::String& in_presentation_url, const mojo::String& in_presentation_id) {
  size_t size = sizeof(internal::PresentationService_Terminate_Params_Data);
  size += GetSerializedSize_(in_presentation_url);
  size += GetSerializedSize_(in_presentation_id);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_Terminate_Name, size);

  internal::PresentationService_Terminate_Params_Data* params =
      internal::PresentationService_Terminate_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_presentation_url), builder.buffer(), &params->presentation_url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->presentation_url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_url in PresentationService.Terminate request");
  Serialize_(std::move(in_presentation_id), builder.buffer(), &params->presentation_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->presentation_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_id in PresentationService.Terminate request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PresentationServiceProxy::ListenForSessionMessages(
    PresentationSessionInfoPtr in_sessionInfo) {
  size_t size = sizeof(internal::PresentationService_ListenForSessionMessages_Params_Data);
  size += GetSerializedSize_(in_sessionInfo);
  mojo::internal::MessageBuilder builder(internal::kPresentationService_ListenForSessionMessages_Name, size);

  internal::PresentationService_ListenForSessionMessages_Params_Data* params =
      internal::PresentationService_ListenForSessionMessages_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_sessionInfo), builder.buffer(), &params->sessionInfo.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->sessionInfo.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sessionInfo in PresentationService.ListenForSessionMessages request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
class PresentationService_StartSession_ProxyToResponder
    : public PresentationService::StartSessionCallback::Runnable {
 public:
  ~PresentationService_StartSession_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PresentationService::StartSession(p_presentation_url, callback) "
        "was never run.";
  }

  PresentationService_StartSession_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(PresentationSessionInfoPtr in_sessionInfo, PresentationErrorPtr in_error) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PresentationService_StartSession_ProxyToResponder);
};
void PresentationService_StartSession_ProxyToResponder::Run(
    PresentationSessionInfoPtr in_sessionInfo, PresentationErrorPtr in_error) const {
  size_t size = sizeof(internal::PresentationService_StartSession_ResponseParams_Data);
  size += GetSerializedSize_(in_sessionInfo);
  size += GetSerializedSize_(in_error);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPresentationService_StartSession_Name, size, request_id_);
  internal::PresentationService_StartSession_ResponseParams_Data* params =
      internal::PresentationService_StartSession_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_sessionInfo), builder.buffer(), &params->sessionInfo.ptr);
  Serialize_(std::move(in_error), builder.buffer(), &params->error.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class PresentationService_JoinSession_ProxyToResponder
    : public PresentationService::JoinSessionCallback::Runnable {
 public:
  ~PresentationService_JoinSession_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PresentationService::JoinSession(p_presentation_url, p_presentation_id, callback) "
        "was never run.";
  }

  PresentationService_JoinSession_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(PresentationSessionInfoPtr in_sessionInfo, PresentationErrorPtr in_error) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PresentationService_JoinSession_ProxyToResponder);
};
void PresentationService_JoinSession_ProxyToResponder::Run(
    PresentationSessionInfoPtr in_sessionInfo, PresentationErrorPtr in_error) const {
  size_t size = sizeof(internal::PresentationService_JoinSession_ResponseParams_Data);
  size += GetSerializedSize_(in_sessionInfo);
  size += GetSerializedSize_(in_error);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPresentationService_JoinSession_Name, size, request_id_);
  internal::PresentationService_JoinSession_ResponseParams_Data* params =
      internal::PresentationService_JoinSession_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_sessionInfo), builder.buffer(), &params->sessionInfo.ptr);
  Serialize_(std::move(in_error), builder.buffer(), &params->error.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class PresentationService_SendSessionMessage_ProxyToResponder
    : public PresentationService::SendSessionMessageCallback::Runnable {
 public:
  ~PresentationService_SendSessionMessage_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "PresentationService::SendSessionMessage(std::move(p_sessionInfo), std::move(p_message_request), callback) "
        "was never run.";
  }

  PresentationService_SendSessionMessage_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(PresentationService_SendSessionMessage_ProxyToResponder);
};
void PresentationService_SendSessionMessage_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::PresentationService_SendSessionMessage_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kPresentationService_SendSessionMessage_Name, size, request_id_);
  internal::PresentationService_SendSessionMessage_ResponseParams_Data* params =
      internal::PresentationService_SendSessionMessage_ResponseParams_Data::New(builder.buffer());
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

PresentationServiceStub::PresentationServiceStub()
    : sink_(nullptr),
      control_message_handler_(PresentationService::Version_) {
}

PresentationServiceStub::~PresentationServiceStub() {}

bool PresentationServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPresentationService_SetClient_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationService.SetClient", __FILE__, __LINE__);
      internal::PresentationService_SetClient_Params_Data* params =
          reinterpret_cast<internal::PresentationService_SetClient_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      PresentationServiceClientPtr p_client{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        mojo::internal::InterfaceDataToPointer(&params->client, &p_client);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::SetClient");
      sink_->SetClient(std::move(p_client));
      return true;
    }
    case internal::kPresentationService_SetDefaultPresentationURL_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationService.SetDefaultPresentationURL", __FILE__, __LINE__);
      internal::PresentationService_SetDefaultPresentationURL_Params_Data* params =
          reinterpret_cast<internal::PresentationService_SetDefaultPresentationURL_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_url{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->url.ptr, &p_url, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::SetDefaultPresentationURL");
      sink_->SetDefaultPresentationURL(p_url);
      return true;
    }
    case internal::kPresentationService_ListenForScreenAvailability_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationService.ListenForScreenAvailability", __FILE__, __LINE__);
      internal::PresentationService_ListenForScreenAvailability_Params_Data* params =
          reinterpret_cast<internal::PresentationService_ListenForScreenAvailability_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_url{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->url.ptr, &p_url, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::ListenForScreenAvailability");
      sink_->ListenForScreenAvailability(p_url);
      return true;
    }
    case internal::kPresentationService_StopListeningForScreenAvailability_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationService.StopListeningForScreenAvailability", __FILE__, __LINE__);
      internal::PresentationService_StopListeningForScreenAvailability_Params_Data* params =
          reinterpret_cast<internal::PresentationService_StopListeningForScreenAvailability_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_url{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->url.ptr, &p_url, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::StopListeningForScreenAvailability");
      sink_->StopListeningForScreenAvailability(p_url);
      return true;
    }
    case internal::kPresentationService_StartSession_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationService.StartSession", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationService_JoinSession_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationService.JoinSession", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationService_SendSessionMessage_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationService.SendSessionMessage", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationService_CloseConnection_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationService.CloseConnection", __FILE__, __LINE__);
      internal::PresentationService_CloseConnection_Params_Data* params =
          reinterpret_cast<internal::PresentationService_CloseConnection_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_presentation_url{};
      mojo::String p_presentation_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->presentation_url.ptr, &p_presentation_url, &serialization_context_))
          success = false;
        if (!Deserialize_(params->presentation_id.ptr, &p_presentation_id, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::CloseConnection");
      sink_->CloseConnection(p_presentation_url, p_presentation_id);
      return true;
    }
    case internal::kPresentationService_Terminate_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationService.Terminate", __FILE__, __LINE__);
      internal::PresentationService_Terminate_Params_Data* params =
          reinterpret_cast<internal::PresentationService_Terminate_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_presentation_url{};
      mojo::String p_presentation_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->presentation_url.ptr, &p_presentation_url, &serialization_context_))
          success = false;
        if (!Deserialize_(params->presentation_id.ptr, &p_presentation_id, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::Terminate");
      sink_->Terminate(p_presentation_url, p_presentation_id);
      return true;
    }
    case internal::kPresentationService_ListenForSessionMessages_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationService.ListenForSessionMessages", __FILE__, __LINE__);
      internal::PresentationService_ListenForSessionMessages_Params_Data* params =
          reinterpret_cast<internal::PresentationService_ListenForSessionMessages_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      PresentationSessionInfoPtr p_sessionInfo{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->sessionInfo.ptr, &p_sessionInfo, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::ListenForSessionMessages");
      sink_->ListenForSessionMessages(std::move(p_sessionInfo));
      return true;
    }
  }
  return false;
}

bool PresentationServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPresentationService_SetClient_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationService::SetClient", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationService_SetDefaultPresentationURL_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationService::SetDefaultPresentationURL", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationService_ListenForScreenAvailability_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationService::ListenForScreenAvailability", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationService_StopListeningForScreenAvailability_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationService::StopListeningForScreenAvailability", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationService_StartSession_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationService::StartSession", __FILE__, __LINE__);
      internal::PresentationService_StartSession_Params_Data* params =
          reinterpret_cast<internal::PresentationService_StartSession_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_presentation_url{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->presentation_url.ptr, &p_presentation_url, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      PresentationService::StartSessionCallback::Runnable* runnable =
          new PresentationService_StartSession_ProxyToResponder(
              message->request_id(), responder);
      PresentationService::StartSessionCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::StartSession");
      sink_->StartSession(p_presentation_url, callback);
      return true;
    }
    case internal::kPresentationService_JoinSession_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationService::JoinSession", __FILE__, __LINE__);
      internal::PresentationService_JoinSession_Params_Data* params =
          reinterpret_cast<internal::PresentationService_JoinSession_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_presentation_url{};
      mojo::String p_presentation_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->presentation_url.ptr, &p_presentation_url, &serialization_context_))
          success = false;
        if (!Deserialize_(params->presentation_id.ptr, &p_presentation_id, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      PresentationService::JoinSessionCallback::Runnable* runnable =
          new PresentationService_JoinSession_ProxyToResponder(
              message->request_id(), responder);
      PresentationService::JoinSessionCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::JoinSession");
      sink_->JoinSession(p_presentation_url, p_presentation_id, callback);
      return true;
    }
    case internal::kPresentationService_SendSessionMessage_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationService::SendSessionMessage", __FILE__, __LINE__);
      internal::PresentationService_SendSessionMessage_Params_Data* params =
          reinterpret_cast<internal::PresentationService_SendSessionMessage_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      PresentationSessionInfoPtr p_sessionInfo{};
      SessionMessagePtr p_message_request{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->sessionInfo.ptr, &p_sessionInfo, &serialization_context_))
          success = false;
        if (!Deserialize_(params->message_request.ptr, &p_message_request, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      PresentationService::SendSessionMessageCallback::Runnable* runnable =
          new PresentationService_SendSessionMessage_ProxyToResponder(
              message->request_id(), responder);
      PresentationService::SendSessionMessageCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationService::SendSessionMessage");
      sink_->SendSessionMessage(std::move(p_sessionInfo), std::move(p_message_request), callback);
      return true;
    }
    case internal::kPresentationService_CloseConnection_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationService::CloseConnection", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationService_Terminate_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationService::Terminate", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationService_ListenForSessionMessages_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationService::ListenForSessionMessages", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

PresentationServiceRequestValidator::PresentationServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PresentationServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPresentationService_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_SetClient_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_SetDefaultPresentationURL_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_SetDefaultPresentationURL_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_ListenForScreenAvailability_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_ListenForScreenAvailability_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_StopListeningForScreenAvailability_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_StopListeningForScreenAvailability_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_StartSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_StartSession_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_JoinSession_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_JoinSession_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_SendSessionMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_SendSessionMessage_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_CloseConnection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_CloseConnection_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_Terminate_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_Terminate_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_ListenForSessionMessages_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_ListenForSessionMessages_Params_Data>(message)) {
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

PresentationServiceResponseValidator::PresentationServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PresentationServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kPresentationService_StartSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_StartSession_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_JoinSession_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_JoinSession_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationService_SendSessionMessage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationService_SendSessionMessage_ResponseParams_Data>(message)) {
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
MOJO_STATIC_CONST_MEMBER_DEFINITION const char PresentationServiceClient::Name_[] = "presentation::PresentationServiceClient";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t PresentationServiceClient::Version_;

PresentationServiceClientProxy::PresentationServiceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void PresentationServiceClientProxy::OnScreenAvailabilityNotSupported(
    const mojo::String& in_url) {
  size_t size = sizeof(internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data);
  size += GetSerializedSize_(in_url);
  mojo::internal::MessageBuilder builder(internal::kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name, size);

  internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data* params =
      internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_url), builder.buffer(), &params->url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PresentationServiceClient.OnScreenAvailabilityNotSupported request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PresentationServiceClientProxy::OnScreenAvailabilityUpdated(
    const mojo::String& in_url, bool in_available) {
  size_t size = sizeof(internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data);
  size += GetSerializedSize_(in_url);
  mojo::internal::MessageBuilder builder(internal::kPresentationServiceClient_OnScreenAvailabilityUpdated_Name, size);

  internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data* params =
      internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_url), builder.buffer(), &params->url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PresentationServiceClient.OnScreenAvailabilityUpdated request");
  params->available = in_available;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PresentationServiceClientProxy::OnConnectionStateChanged(
    PresentationSessionInfoPtr in_connection, PresentationConnectionState in_newState) {
  size_t size = sizeof(internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data);
  size += GetSerializedSize_(in_connection);
  mojo::internal::MessageBuilder builder(internal::kPresentationServiceClient_OnConnectionStateChanged_Name, size);

  internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data* params =
      internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_connection), builder.buffer(), &params->connection.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->connection.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null connection in PresentationServiceClient.OnConnectionStateChanged request");
  params->newState.value = static_cast<int32_t>(in_newState);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PresentationServiceClientProxy::OnSessionMessagesReceived(
    PresentationSessionInfoPtr in_sessionInfo, mojo::Array<SessionMessagePtr> in_messages) {
  size_t size = sizeof(internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data);
  size += GetSerializedSize_(in_sessionInfo);
  size += GetSerializedSize_(in_messages);
  mojo::internal::MessageBuilder builder(internal::kPresentationServiceClient_OnSessionMessagesReceived_Name, size);

  internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data* params =
      internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_sessionInfo), builder.buffer(), &params->sessionInfo.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->sessionInfo.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sessionInfo in PresentationServiceClient.OnSessionMessagesReceived request");
  const mojo::internal::ArrayValidateParams messages_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_messages), builder.buffer(),
      &params->messages.ptr, &messages_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->messages.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null messages in PresentationServiceClient.OnSessionMessagesReceived request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void PresentationServiceClientProxy::OnDefaultSessionStarted(
    PresentationSessionInfoPtr in_sessionInfo) {
  size_t size = sizeof(internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data);
  size += GetSerializedSize_(in_sessionInfo);
  mojo::internal::MessageBuilder builder(internal::kPresentationServiceClient_OnDefaultSessionStarted_Name, size);

  internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data* params =
      internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_sessionInfo), builder.buffer(), &params->sessionInfo.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->sessionInfo.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sessionInfo in PresentationServiceClient.OnDefaultSessionStarted request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

PresentationServiceClientStub::PresentationServiceClientStub()
    : sink_(nullptr),
      control_message_handler_(PresentationServiceClient::Version_) {
}

PresentationServiceClientStub::~PresentationServiceClientStub() {}

bool PresentationServiceClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationServiceClient.OnScreenAvailabilityNotSupported", __FILE__, __LINE__);
      internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data* params =
          reinterpret_cast<internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_url{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->url.ptr, &p_url, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationServiceClient::OnScreenAvailabilityNotSupported");
      sink_->OnScreenAvailabilityNotSupported(p_url);
      return true;
    }
    case internal::kPresentationServiceClient_OnScreenAvailabilityUpdated_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationServiceClient.OnScreenAvailabilityUpdated", __FILE__, __LINE__);
      internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data* params =
          reinterpret_cast<internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_url{};
      bool p_available{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->url.ptr, &p_url, &serialization_context_))
          success = false;
        p_available = params->available;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationServiceClient::OnScreenAvailabilityUpdated");
      sink_->OnScreenAvailabilityUpdated(p_url, p_available);
      return true;
    }
    case internal::kPresentationServiceClient_OnConnectionStateChanged_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationServiceClient.OnConnectionStateChanged", __FILE__, __LINE__);
      internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data* params =
          reinterpret_cast<internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      PresentationSessionInfoPtr p_connection{};
      PresentationConnectionState p_newState{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->connection.ptr, &p_connection, &serialization_context_))
          success = false;
        p_newState = static_cast<PresentationConnectionState>(params->newState.value);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationServiceClient::OnConnectionStateChanged");
      sink_->OnConnectionStateChanged(std::move(p_connection), p_newState);
      return true;
    }
    case internal::kPresentationServiceClient_OnSessionMessagesReceived_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationServiceClient.OnSessionMessagesReceived", __FILE__, __LINE__);
      internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data* params =
          reinterpret_cast<internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      PresentationSessionInfoPtr p_sessionInfo{};
      mojo::Array<SessionMessagePtr> p_messages{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->sessionInfo.ptr, &p_sessionInfo, &serialization_context_))
          success = false;
        if (!Deserialize_(params->messages.ptr, &p_messages, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationServiceClient::OnSessionMessagesReceived");
      sink_->OnSessionMessagesReceived(std::move(p_sessionInfo), std::move(p_messages));
      return true;
    }
    case internal::kPresentationServiceClient_OnDefaultSessionStarted_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.presentation.PresentationServiceClient.OnDefaultSessionStarted", __FILE__, __LINE__);
      internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data* params =
          reinterpret_cast<internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      PresentationSessionInfoPtr p_sessionInfo{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->sessionInfo.ptr, &p_sessionInfo, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PresentationServiceClient::OnDefaultSessionStarted");
      sink_->OnDefaultSessionStarted(std::move(p_sessionInfo));
      return true;
    }
  }
  return false;
}

bool PresentationServiceClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationServiceClient::OnScreenAvailabilityNotSupported", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationServiceClient_OnScreenAvailabilityUpdated_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationServiceClient::OnScreenAvailabilityUpdated", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationServiceClient_OnConnectionStateChanged_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationServiceClient::OnConnectionStateChanged", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationServiceClient_OnSessionMessagesReceived_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationServiceClient::OnSessionMessagesReceived", __FILE__, __LINE__);
      break;
    }
    case internal::kPresentationServiceClient_OnDefaultSessionStarted_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::presentation::PresentationServiceClient::OnDefaultSessionStarted", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

PresentationServiceClientRequestValidator::PresentationServiceClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PresentationServiceClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPresentationServiceClient_OnScreenAvailabilityNotSupported_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationServiceClient_OnScreenAvailabilityNotSupported_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationServiceClient_OnScreenAvailabilityUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationServiceClient_OnScreenAvailabilityUpdated_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationServiceClient_OnConnectionStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationServiceClient_OnConnectionStateChanged_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationServiceClient_OnSessionMessagesReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationServiceClient_OnSessionMessagesReceived_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPresentationServiceClient_OnDefaultSessionStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::PresentationServiceClient_OnDefaultSessionStarted_Params_Data>(message)) {
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

size_t GetSerializedSize_(const PresentationSessionInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::PresentationSessionInfo_Data);
  size += GetSerializedSize_(input->url);
  size += GetSerializedSize_(input->id);
  return size;
}

void Serialize_(PresentationSessionInfoPtr input, mojo::internal::Buffer* buf,
                internal::PresentationSessionInfo_Data** output) {
  if (input) {
    internal::PresentationSessionInfo_Data* result =
        internal::PresentationSessionInfo_Data::New(buf);
    Serialize_(std::move(input->url), buf, &result->url.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->url.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in PresentationSessionInfo struct");
    Serialize_(std::move(input->id), buf, &result->id.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->id.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in PresentationSessionInfo struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::PresentationSessionInfo_Data* input,
                  PresentationSessionInfoPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    PresentationSessionInfoPtr result(PresentationSessionInfo::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->url.ptr, &result->url, context))
        success = false;
      if (!Deserialize_(input->id.ptr, &result->id, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

PresentationSessionInfo_Reader::PresentationSessionInfo_Reader(
    internal::PresentationSessionInfo_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const PresentationErrorPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::PresentationError_Data);
  size += GetSerializedSize_(input->message);
  return size;
}

void Serialize_(PresentationErrorPtr input, mojo::internal::Buffer* buf,
                internal::PresentationError_Data** output) {
  if (input) {
    internal::PresentationError_Data* result =
        internal::PresentationError_Data::New(buf);
    result->error_type.value = static_cast<int32_t>(input->error_type);
    Serialize_(std::move(input->message), buf, &result->message.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->message.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null message in PresentationError struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::PresentationError_Data* input,
                  PresentationErrorPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    PresentationErrorPtr result(PresentationError::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->error_type = static_cast<PresentationErrorType>(input->error_type.value);
      if (!Deserialize_(input->message.ptr, &result->message, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

PresentationError_Reader::PresentationError_Reader(
    internal::PresentationError_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const SessionMessagePtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::SessionMessage_Data);
  size += GetSerializedSize_(input->message);
  size += GetSerializedSize_(input->data);
  return size;
}

void Serialize_(SessionMessagePtr input, mojo::internal::Buffer* buf,
                internal::SessionMessage_Data** output) {
  if (input) {
    internal::SessionMessage_Data* result =
        internal::SessionMessage_Data::New(buf);
    result->type.value = static_cast<int32_t>(input->type);
    Serialize_(std::move(input->message), buf, &result->message.ptr);
    const mojo::internal::ArrayValidateParams data_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->data), buf,
        &result->data.ptr, &data_validate_params);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::SessionMessage_Data* input,
                  SessionMessagePtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    SessionMessagePtr result(SessionMessage::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->type = static_cast<PresentationMessageType>(input->type.value);
      if (!Deserialize_(input->message.ptr, &result->message, context))
        success = false;
      if (!Deserialize_(input->data.ptr, &result->data, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

SessionMessage_Reader::SessionMessage_Reader(
    internal::SessionMessage_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace presentation

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif