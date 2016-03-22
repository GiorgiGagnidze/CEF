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

#include "chrome/browser/media/router/media_router.mojom.h"

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
namespace media_router {
namespace interfaces {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kMediaRouteProvider_CreateRoute_Name = 0;

class MediaRouteProvider_CreateRoute_Params_Data {
 public:
  static MediaRouteProvider_CreateRoute_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer media_source;
  mojo::internal::StringPointer sink_id;
  mojo::internal::StringPointer original_presentation_id;
  mojo::internal::StringPointer origin;
  int32_t tab_id;
  uint8_t padfinal_[4];

 private:
  MediaRouteProvider_CreateRoute_Params_Data();
  ~MediaRouteProvider_CreateRoute_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_CreateRoute_Params_Data) == 48,
              "Bad sizeof(MediaRouteProvider_CreateRoute_Params_Data)");

// static
MediaRouteProvider_CreateRoute_Params_Data* MediaRouteProvider_CreateRoute_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_CreateRoute_Params_Data))) MediaRouteProvider_CreateRoute_Params_Data();
}

// static
bool MediaRouteProvider_CreateRoute_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_CreateRoute_Params_Data* object = static_cast<const MediaRouteProvider_CreateRoute_Params_Data*>(data);

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
          object->media_source, "null media_source field in MediaRouteProvider_CreateRoute_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_source, bounds_checker,
                                     &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sink_id, "null sink_id field in MediaRouteProvider_CreateRoute_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams sink_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->sink_id, bounds_checker,
                                     &sink_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->original_presentation_id, "null original_presentation_id field in MediaRouteProvider_CreateRoute_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams original_presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->original_presentation_id, bounds_checker,
                                     &original_presentation_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, "null origin field in MediaRouteProvider_CreateRoute_Params struct")) {
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

void MediaRouteProvider_CreateRoute_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&media_source, handles);
  mojo::internal::Encode(&sink_id, handles);
  mojo::internal::Encode(&original_presentation_id, handles);
  mojo::internal::Encode(&origin, handles);
}

void MediaRouteProvider_CreateRoute_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&media_source, handles);
  mojo::internal::Decode(&sink_id, handles);
  mojo::internal::Decode(&original_presentation_id, handles);
  mojo::internal::Decode(&origin, handles);
}

MediaRouteProvider_CreateRoute_Params_Data::MediaRouteProvider_CreateRoute_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class MediaRouteProvider_CreateRoute_ResponseParams_Data {
 public:
  static MediaRouteProvider_CreateRoute_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::MediaRoute_Data> route;
  mojo::internal::StringPointer error_text;

 private:
  MediaRouteProvider_CreateRoute_ResponseParams_Data();
  ~MediaRouteProvider_CreateRoute_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_CreateRoute_ResponseParams_Data) == 24,
              "Bad sizeof(MediaRouteProvider_CreateRoute_ResponseParams_Data)");

// static
MediaRouteProvider_CreateRoute_ResponseParams_Data* MediaRouteProvider_CreateRoute_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_CreateRoute_ResponseParams_Data))) MediaRouteProvider_CreateRoute_ResponseParams_Data();
}

// static
bool MediaRouteProvider_CreateRoute_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_CreateRoute_ResponseParams_Data* object = static_cast<const MediaRouteProvider_CreateRoute_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->route, bounds_checker))
    return false;

  const mojo::internal::ArrayValidateParams error_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->error_text, bounds_checker,
                                     &error_text_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouteProvider_CreateRoute_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&route, handles);
  mojo::internal::Encode(&error_text, handles);
}

void MediaRouteProvider_CreateRoute_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&route, handles);
  mojo::internal::Decode(&error_text, handles);
}

MediaRouteProvider_CreateRoute_ResponseParams_Data::MediaRouteProvider_CreateRoute_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouteProvider_JoinRoute_Name = 1;

class MediaRouteProvider_JoinRoute_Params_Data {
 public:
  static MediaRouteProvider_JoinRoute_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer media_source;
  mojo::internal::StringPointer presentation_id;
  mojo::internal::StringPointer origin;
  int32_t tab_id;
  uint8_t padfinal_[4];

 private:
  MediaRouteProvider_JoinRoute_Params_Data();
  ~MediaRouteProvider_JoinRoute_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_JoinRoute_Params_Data) == 40,
              "Bad sizeof(MediaRouteProvider_JoinRoute_Params_Data)");

// static
MediaRouteProvider_JoinRoute_Params_Data* MediaRouteProvider_JoinRoute_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_JoinRoute_Params_Data))) MediaRouteProvider_JoinRoute_Params_Data();
}

// static
bool MediaRouteProvider_JoinRoute_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_JoinRoute_Params_Data* object = static_cast<const MediaRouteProvider_JoinRoute_Params_Data*>(data);

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
          object->media_source, "null media_source field in MediaRouteProvider_JoinRoute_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_source, bounds_checker,
                                     &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->presentation_id, "null presentation_id field in MediaRouteProvider_JoinRoute_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->presentation_id, bounds_checker,
                                     &presentation_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, "null origin field in MediaRouteProvider_JoinRoute_Params struct")) {
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

void MediaRouteProvider_JoinRoute_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&media_source, handles);
  mojo::internal::Encode(&presentation_id, handles);
  mojo::internal::Encode(&origin, handles);
}

void MediaRouteProvider_JoinRoute_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&media_source, handles);
  mojo::internal::Decode(&presentation_id, handles);
  mojo::internal::Decode(&origin, handles);
}

MediaRouteProvider_JoinRoute_Params_Data::MediaRouteProvider_JoinRoute_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class MediaRouteProvider_JoinRoute_ResponseParams_Data {
 public:
  static MediaRouteProvider_JoinRoute_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::MediaRoute_Data> route;
  mojo::internal::StringPointer error_text;

 private:
  MediaRouteProvider_JoinRoute_ResponseParams_Data();
  ~MediaRouteProvider_JoinRoute_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_JoinRoute_ResponseParams_Data) == 24,
              "Bad sizeof(MediaRouteProvider_JoinRoute_ResponseParams_Data)");

// static
MediaRouteProvider_JoinRoute_ResponseParams_Data* MediaRouteProvider_JoinRoute_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_JoinRoute_ResponseParams_Data))) MediaRouteProvider_JoinRoute_ResponseParams_Data();
}

// static
bool MediaRouteProvider_JoinRoute_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_JoinRoute_ResponseParams_Data* object = static_cast<const MediaRouteProvider_JoinRoute_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->route, bounds_checker))
    return false;

  const mojo::internal::ArrayValidateParams error_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->error_text, bounds_checker,
                                     &error_text_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouteProvider_JoinRoute_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&route, handles);
  mojo::internal::Encode(&error_text, handles);
}

void MediaRouteProvider_JoinRoute_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&route, handles);
  mojo::internal::Decode(&error_text, handles);
}

MediaRouteProvider_JoinRoute_ResponseParams_Data::MediaRouteProvider_JoinRoute_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouteProvider_ConnectRouteByRouteId_Name = 2;

class MediaRouteProvider_ConnectRouteByRouteId_Params_Data {
 public:
  static MediaRouteProvider_ConnectRouteByRouteId_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer media_source;
  mojo::internal::StringPointer route_id;
  mojo::internal::StringPointer presentation_id;
  mojo::internal::StringPointer origin;
  int32_t tab_id;
  uint8_t padfinal_[4];

 private:
  MediaRouteProvider_ConnectRouteByRouteId_Params_Data();
  ~MediaRouteProvider_ConnectRouteByRouteId_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_ConnectRouteByRouteId_Params_Data) == 48,
              "Bad sizeof(MediaRouteProvider_ConnectRouteByRouteId_Params_Data)");

// static
MediaRouteProvider_ConnectRouteByRouteId_Params_Data* MediaRouteProvider_ConnectRouteByRouteId_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_ConnectRouteByRouteId_Params_Data))) MediaRouteProvider_ConnectRouteByRouteId_Params_Data();
}

// static
bool MediaRouteProvider_ConnectRouteByRouteId_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_ConnectRouteByRouteId_Params_Data* object = static_cast<const MediaRouteProvider_ConnectRouteByRouteId_Params_Data*>(data);

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
          object->media_source, "null media_source field in MediaRouteProvider_ConnectRouteByRouteId_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_source, bounds_checker,
                                     &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->route_id, "null route_id field in MediaRouteProvider_ConnectRouteByRouteId_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->route_id, bounds_checker,
                                     &route_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->presentation_id, "null presentation_id field in MediaRouteProvider_ConnectRouteByRouteId_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams presentation_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->presentation_id, bounds_checker,
                                     &presentation_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, "null origin field in MediaRouteProvider_ConnectRouteByRouteId_Params struct")) {
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

void MediaRouteProvider_ConnectRouteByRouteId_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&media_source, handles);
  mojo::internal::Encode(&route_id, handles);
  mojo::internal::Encode(&presentation_id, handles);
  mojo::internal::Encode(&origin, handles);
}

void MediaRouteProvider_ConnectRouteByRouteId_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&media_source, handles);
  mojo::internal::Decode(&route_id, handles);
  mojo::internal::Decode(&presentation_id, handles);
  mojo::internal::Decode(&origin, handles);
}

MediaRouteProvider_ConnectRouteByRouteId_Params_Data::MediaRouteProvider_ConnectRouteByRouteId_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data {
 public:
  static MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::MediaRoute_Data> route;
  mojo::internal::StringPointer error_text;

 private:
  MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data();
  ~MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data) == 24,
              "Bad sizeof(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data)");

// static
MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data* MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data))) MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data();
}

// static
bool MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data* object = static_cast<const MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->route, bounds_checker))
    return false;

  const mojo::internal::ArrayValidateParams error_text_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->error_text, bounds_checker,
                                     &error_text_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&route, handles);
  mojo::internal::Encode(&error_text, handles);
}

void MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&route, handles);
  mojo::internal::Decode(&error_text, handles);
}

MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouteProvider_TerminateRoute_Name = 3;

class MediaRouteProvider_TerminateRoute_Params_Data {
 public:
  static MediaRouteProvider_TerminateRoute_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer route_id;

 private:
  MediaRouteProvider_TerminateRoute_Params_Data();
  ~MediaRouteProvider_TerminateRoute_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_TerminateRoute_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_TerminateRoute_Params_Data)");

// static
MediaRouteProvider_TerminateRoute_Params_Data* MediaRouteProvider_TerminateRoute_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_TerminateRoute_Params_Data))) MediaRouteProvider_TerminateRoute_Params_Data();
}

// static
bool MediaRouteProvider_TerminateRoute_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_TerminateRoute_Params_Data* object = static_cast<const MediaRouteProvider_TerminateRoute_Params_Data*>(data);

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
          object->route_id, "null route_id field in MediaRouteProvider_TerminateRoute_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->route_id, bounds_checker,
                                     &route_id_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouteProvider_TerminateRoute_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&route_id, handles);
}

void MediaRouteProvider_TerminateRoute_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&route_id, handles);
}

MediaRouteProvider_TerminateRoute_Params_Data::MediaRouteProvider_TerminateRoute_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouteProvider_SendRouteMessage_Name = 4;

class MediaRouteProvider_SendRouteMessage_Params_Data {
 public:
  static MediaRouteProvider_SendRouteMessage_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer media_route_id;
  mojo::internal::StringPointer message;

 private:
  MediaRouteProvider_SendRouteMessage_Params_Data();
  ~MediaRouteProvider_SendRouteMessage_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_SendRouteMessage_Params_Data) == 24,
              "Bad sizeof(MediaRouteProvider_SendRouteMessage_Params_Data)");

// static
MediaRouteProvider_SendRouteMessage_Params_Data* MediaRouteProvider_SendRouteMessage_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_SendRouteMessage_Params_Data))) MediaRouteProvider_SendRouteMessage_Params_Data();
}

// static
bool MediaRouteProvider_SendRouteMessage_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_SendRouteMessage_Params_Data* object = static_cast<const MediaRouteProvider_SendRouteMessage_Params_Data*>(data);

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
          object->media_route_id, "null media_route_id field in MediaRouteProvider_SendRouteMessage_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_route_id, bounds_checker,
                                     &media_route_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->message, "null message field in MediaRouteProvider_SendRouteMessage_Params struct")) {
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

void MediaRouteProvider_SendRouteMessage_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&media_route_id, handles);
  mojo::internal::Encode(&message, handles);
}

void MediaRouteProvider_SendRouteMessage_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&media_route_id, handles);
  mojo::internal::Decode(&message, handles);
}

MediaRouteProvider_SendRouteMessage_Params_Data::MediaRouteProvider_SendRouteMessage_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class MediaRouteProvider_SendRouteMessage_ResponseParams_Data {
 public:
  static MediaRouteProvider_SendRouteMessage_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t sent : 1;
  uint8_t padfinal_[7];

 private:
  MediaRouteProvider_SendRouteMessage_ResponseParams_Data();
  ~MediaRouteProvider_SendRouteMessage_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_SendRouteMessage_ResponseParams_Data) == 16,
              "Bad sizeof(MediaRouteProvider_SendRouteMessage_ResponseParams_Data)");

// static
MediaRouteProvider_SendRouteMessage_ResponseParams_Data* MediaRouteProvider_SendRouteMessage_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_SendRouteMessage_ResponseParams_Data))) MediaRouteProvider_SendRouteMessage_ResponseParams_Data();
}

// static
bool MediaRouteProvider_SendRouteMessage_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_SendRouteMessage_ResponseParams_Data* object = static_cast<const MediaRouteProvider_SendRouteMessage_ResponseParams_Data*>(data);

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

void MediaRouteProvider_SendRouteMessage_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void MediaRouteProvider_SendRouteMessage_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

MediaRouteProvider_SendRouteMessage_ResponseParams_Data::MediaRouteProvider_SendRouteMessage_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouteProvider_SendRouteBinaryMessage_Name = 5;

class MediaRouteProvider_SendRouteBinaryMessage_Params_Data {
 public:
  static MediaRouteProvider_SendRouteBinaryMessage_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer media_route_id;
  mojo::internal::ArrayPointer<uint8_t> data;

 private:
  MediaRouteProvider_SendRouteBinaryMessage_Params_Data();
  ~MediaRouteProvider_SendRouteBinaryMessage_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_SendRouteBinaryMessage_Params_Data) == 24,
              "Bad sizeof(MediaRouteProvider_SendRouteBinaryMessage_Params_Data)");

// static
MediaRouteProvider_SendRouteBinaryMessage_Params_Data* MediaRouteProvider_SendRouteBinaryMessage_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_SendRouteBinaryMessage_Params_Data))) MediaRouteProvider_SendRouteBinaryMessage_Params_Data();
}

// static
bool MediaRouteProvider_SendRouteBinaryMessage_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_SendRouteBinaryMessage_Params_Data* object = static_cast<const MediaRouteProvider_SendRouteBinaryMessage_Params_Data*>(data);

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
          object->media_route_id, "null media_route_id field in MediaRouteProvider_SendRouteBinaryMessage_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_route_id, bounds_checker,
                                     &media_route_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, "null data field in MediaRouteProvider_SendRouteBinaryMessage_Params struct")) {
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

void MediaRouteProvider_SendRouteBinaryMessage_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&media_route_id, handles);
  mojo::internal::Encode(&data, handles);
}

void MediaRouteProvider_SendRouteBinaryMessage_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&media_route_id, handles);
  mojo::internal::Decode(&data, handles);
}

MediaRouteProvider_SendRouteBinaryMessage_Params_Data::MediaRouteProvider_SendRouteBinaryMessage_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data {
 public:
  static MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t sent : 1;
  uint8_t padfinal_[7];

 private:
  MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data();
  ~MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data) == 16,
              "Bad sizeof(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data)");

// static
MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data* MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data))) MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data();
}

// static
bool MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data* object = static_cast<const MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data*>(data);

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

void MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouteProvider_StartObservingMediaSinks_Name = 6;

class MediaRouteProvider_StartObservingMediaSinks_Params_Data {
 public:
  static MediaRouteProvider_StartObservingMediaSinks_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer media_source;

 private:
  MediaRouteProvider_StartObservingMediaSinks_Params_Data();
  ~MediaRouteProvider_StartObservingMediaSinks_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_StartObservingMediaSinks_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_StartObservingMediaSinks_Params_Data)");

// static
MediaRouteProvider_StartObservingMediaSinks_Params_Data* MediaRouteProvider_StartObservingMediaSinks_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_StartObservingMediaSinks_Params_Data))) MediaRouteProvider_StartObservingMediaSinks_Params_Data();
}

// static
bool MediaRouteProvider_StartObservingMediaSinks_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_StartObservingMediaSinks_Params_Data* object = static_cast<const MediaRouteProvider_StartObservingMediaSinks_Params_Data*>(data);

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
          object->media_source, "null media_source field in MediaRouteProvider_StartObservingMediaSinks_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_source, bounds_checker,
                                     &media_source_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouteProvider_StartObservingMediaSinks_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&media_source, handles);
}

void MediaRouteProvider_StartObservingMediaSinks_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&media_source, handles);
}

MediaRouteProvider_StartObservingMediaSinks_Params_Data::MediaRouteProvider_StartObservingMediaSinks_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouteProvider_StopObservingMediaSinks_Name = 7;

class MediaRouteProvider_StopObservingMediaSinks_Params_Data {
 public:
  static MediaRouteProvider_StopObservingMediaSinks_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer media_source;

 private:
  MediaRouteProvider_StopObservingMediaSinks_Params_Data();
  ~MediaRouteProvider_StopObservingMediaSinks_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_StopObservingMediaSinks_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_StopObservingMediaSinks_Params_Data)");

// static
MediaRouteProvider_StopObservingMediaSinks_Params_Data* MediaRouteProvider_StopObservingMediaSinks_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_StopObservingMediaSinks_Params_Data))) MediaRouteProvider_StopObservingMediaSinks_Params_Data();
}

// static
bool MediaRouteProvider_StopObservingMediaSinks_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_StopObservingMediaSinks_Params_Data* object = static_cast<const MediaRouteProvider_StopObservingMediaSinks_Params_Data*>(data);

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
          object->media_source, "null media_source field in MediaRouteProvider_StopObservingMediaSinks_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_source, bounds_checker,
                                     &media_source_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouteProvider_StopObservingMediaSinks_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&media_source, handles);
}

void MediaRouteProvider_StopObservingMediaSinks_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&media_source, handles);
}

MediaRouteProvider_StopObservingMediaSinks_Params_Data::MediaRouteProvider_StopObservingMediaSinks_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouteProvider_StartObservingMediaRoutes_Name = 8;

class MediaRouteProvider_StartObservingMediaRoutes_Params_Data {
 public:
  static MediaRouteProvider_StartObservingMediaRoutes_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer media_source;

 private:
  MediaRouteProvider_StartObservingMediaRoutes_Params_Data();
  ~MediaRouteProvider_StartObservingMediaRoutes_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_StartObservingMediaRoutes_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_StartObservingMediaRoutes_Params_Data)");

// static
MediaRouteProvider_StartObservingMediaRoutes_Params_Data* MediaRouteProvider_StartObservingMediaRoutes_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_StartObservingMediaRoutes_Params_Data))) MediaRouteProvider_StartObservingMediaRoutes_Params_Data();
}

// static
bool MediaRouteProvider_StartObservingMediaRoutes_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_StartObservingMediaRoutes_Params_Data* object = static_cast<const MediaRouteProvider_StartObservingMediaRoutes_Params_Data*>(data);

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
          object->media_source, "null media_source field in MediaRouteProvider_StartObservingMediaRoutes_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_source, bounds_checker,
                                     &media_source_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouteProvider_StartObservingMediaRoutes_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&media_source, handles);
}

void MediaRouteProvider_StartObservingMediaRoutes_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&media_source, handles);
}

MediaRouteProvider_StartObservingMediaRoutes_Params_Data::MediaRouteProvider_StartObservingMediaRoutes_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouteProvider_StopObservingMediaRoutes_Name = 9;

class MediaRouteProvider_StopObservingMediaRoutes_Params_Data {
 public:
  static MediaRouteProvider_StopObservingMediaRoutes_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer media_source;

 private:
  MediaRouteProvider_StopObservingMediaRoutes_Params_Data();
  ~MediaRouteProvider_StopObservingMediaRoutes_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_StopObservingMediaRoutes_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_StopObservingMediaRoutes_Params_Data)");

// static
MediaRouteProvider_StopObservingMediaRoutes_Params_Data* MediaRouteProvider_StopObservingMediaRoutes_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_StopObservingMediaRoutes_Params_Data))) MediaRouteProvider_StopObservingMediaRoutes_Params_Data();
}

// static
bool MediaRouteProvider_StopObservingMediaRoutes_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_StopObservingMediaRoutes_Params_Data* object = static_cast<const MediaRouteProvider_StopObservingMediaRoutes_Params_Data*>(data);

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
          object->media_source, "null media_source field in MediaRouteProvider_StopObservingMediaRoutes_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_source, bounds_checker,
                                     &media_source_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouteProvider_StopObservingMediaRoutes_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&media_source, handles);
}

void MediaRouteProvider_StopObservingMediaRoutes_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&media_source, handles);
}

MediaRouteProvider_StopObservingMediaRoutes_Params_Data::MediaRouteProvider_StopObservingMediaRoutes_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouteProvider_ListenForRouteMessages_Name = 10;

class MediaRouteProvider_ListenForRouteMessages_Params_Data {
 public:
  static MediaRouteProvider_ListenForRouteMessages_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer route_id;

 private:
  MediaRouteProvider_ListenForRouteMessages_Params_Data();
  ~MediaRouteProvider_ListenForRouteMessages_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_ListenForRouteMessages_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_ListenForRouteMessages_Params_Data)");

// static
MediaRouteProvider_ListenForRouteMessages_Params_Data* MediaRouteProvider_ListenForRouteMessages_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_ListenForRouteMessages_Params_Data))) MediaRouteProvider_ListenForRouteMessages_Params_Data();
}

// static
bool MediaRouteProvider_ListenForRouteMessages_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_ListenForRouteMessages_Params_Data* object = static_cast<const MediaRouteProvider_ListenForRouteMessages_Params_Data*>(data);

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
          object->route_id, "null route_id field in MediaRouteProvider_ListenForRouteMessages_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->route_id, bounds_checker,
                                     &route_id_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouteProvider_ListenForRouteMessages_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&route_id, handles);
}

void MediaRouteProvider_ListenForRouteMessages_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&route_id, handles);
}

MediaRouteProvider_ListenForRouteMessages_Params_Data::MediaRouteProvider_ListenForRouteMessages_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data {
 public:
  static MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::RouteMessage_Data*> messages;
  uint8_t error : 1;
  uint8_t padfinal_[7];

 private:
  MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data();
  ~MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data) == 24,
              "Bad sizeof(MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data)");

// static
MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data* MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data))) MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data();
}

// static
bool MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data* object = static_cast<const MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data*>(data);

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
          object->messages, "null messages field in MediaRouteProvider_ListenForRouteMessages_ResponseParams struct")) {
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

void MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&messages, handles);
}

void MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&messages, handles);
}

MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data::MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouteProvider_StopListeningForRouteMessages_Name = 11;

class MediaRouteProvider_StopListeningForRouteMessages_Params_Data {
 public:
  static MediaRouteProvider_StopListeningForRouteMessages_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer route_id;

 private:
  MediaRouteProvider_StopListeningForRouteMessages_Params_Data();
  ~MediaRouteProvider_StopListeningForRouteMessages_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_StopListeningForRouteMessages_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_StopListeningForRouteMessages_Params_Data)");

// static
MediaRouteProvider_StopListeningForRouteMessages_Params_Data* MediaRouteProvider_StopListeningForRouteMessages_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_StopListeningForRouteMessages_Params_Data))) MediaRouteProvider_StopListeningForRouteMessages_Params_Data();
}

// static
bool MediaRouteProvider_StopListeningForRouteMessages_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_StopListeningForRouteMessages_Params_Data* object = static_cast<const MediaRouteProvider_StopListeningForRouteMessages_Params_Data*>(data);

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
          object->route_id, "null route_id field in MediaRouteProvider_StopListeningForRouteMessages_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->route_id, bounds_checker,
                                     &route_id_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouteProvider_StopListeningForRouteMessages_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&route_id, handles);
}

void MediaRouteProvider_StopListeningForRouteMessages_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&route_id, handles);
}

MediaRouteProvider_StopListeningForRouteMessages_Params_Data::MediaRouteProvider_StopListeningForRouteMessages_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouteProvider_DetachRoute_Name = 12;

class MediaRouteProvider_DetachRoute_Params_Data {
 public:
  static MediaRouteProvider_DetachRoute_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer route_id;

 private:
  MediaRouteProvider_DetachRoute_Params_Data();
  ~MediaRouteProvider_DetachRoute_Params_Data() = delete;
};
static_assert(sizeof(MediaRouteProvider_DetachRoute_Params_Data) == 16,
              "Bad sizeof(MediaRouteProvider_DetachRoute_Params_Data)");

// static
MediaRouteProvider_DetachRoute_Params_Data* MediaRouteProvider_DetachRoute_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouteProvider_DetachRoute_Params_Data))) MediaRouteProvider_DetachRoute_Params_Data();
}

// static
bool MediaRouteProvider_DetachRoute_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouteProvider_DetachRoute_Params_Data* object = static_cast<const MediaRouteProvider_DetachRoute_Params_Data*>(data);

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
          object->route_id, "null route_id field in MediaRouteProvider_DetachRoute_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->route_id, bounds_checker,
                                     &route_id_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouteProvider_DetachRoute_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&route_id, handles);
}

void MediaRouteProvider_DetachRoute_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&route_id, handles);
}

MediaRouteProvider_DetachRoute_Params_Data::MediaRouteProvider_DetachRoute_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouter_RegisterMediaRouteProvider_Name = 0;

class MediaRouter_RegisterMediaRouteProvider_Params_Data {
 public:
  static MediaRouter_RegisterMediaRouteProvider_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data media_router_provider;

 private:
  MediaRouter_RegisterMediaRouteProvider_Params_Data();
  ~MediaRouter_RegisterMediaRouteProvider_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_RegisterMediaRouteProvider_Params_Data) == 16,
              "Bad sizeof(MediaRouter_RegisterMediaRouteProvider_Params_Data)");

// static
MediaRouter_RegisterMediaRouteProvider_Params_Data* MediaRouter_RegisterMediaRouteProvider_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouter_RegisterMediaRouteProvider_Params_Data))) MediaRouter_RegisterMediaRouteProvider_Params_Data();
}

// static
bool MediaRouter_RegisterMediaRouteProvider_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_RegisterMediaRouteProvider_Params_Data* object = static_cast<const MediaRouter_RegisterMediaRouteProvider_Params_Data*>(data);

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

  const mojo::Handle media_router_provider_handle = object->media_router_provider.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          media_router_provider_handle,
          "invalid media_router_provider field in MediaRouter_RegisterMediaRouteProvider_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(media_router_provider_handle, bounds_checker))
    return false;

  return true;
}

void MediaRouter_RegisterMediaRouteProvider_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&media_router_provider, handles);
}

void MediaRouter_RegisterMediaRouteProvider_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&media_router_provider, handles);
}

MediaRouter_RegisterMediaRouteProvider_Params_Data::MediaRouter_RegisterMediaRouteProvider_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data {
 public:
  static MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer instance_id;

 private:
  MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data();
  ~MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data) == 16,
              "Bad sizeof(MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data)");

// static
MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data* MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data))) MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data();
}

// static
bool MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data* object = static_cast<const MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data*>(data);

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
          object->instance_id, "null instance_id field in MediaRouter_RegisterMediaRouteProvider_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams instance_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->instance_id, bounds_checker,
                                     &instance_id_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&instance_id, handles);
}

void MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&instance_id, handles);
}

MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouter_OnSinksReceived_Name = 1;

class MediaRouter_OnSinksReceived_Params_Data {
 public:
  static MediaRouter_OnSinksReceived_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer media_source;
  mojo::internal::ArrayPointer<internal::MediaSink_Data*> sinks;

 private:
  MediaRouter_OnSinksReceived_Params_Data();
  ~MediaRouter_OnSinksReceived_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnSinksReceived_Params_Data) == 24,
              "Bad sizeof(MediaRouter_OnSinksReceived_Params_Data)");

// static
MediaRouter_OnSinksReceived_Params_Data* MediaRouter_OnSinksReceived_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouter_OnSinksReceived_Params_Data))) MediaRouter_OnSinksReceived_Params_Data();
}

// static
bool MediaRouter_OnSinksReceived_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnSinksReceived_Params_Data* object = static_cast<const MediaRouter_OnSinksReceived_Params_Data*>(data);

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
          object->media_source, "null media_source field in MediaRouter_OnSinksReceived_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_source, bounds_checker,
                                     &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->sinks, "null sinks field in MediaRouter_OnSinksReceived_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams sinks_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->sinks, bounds_checker,
                                     &sinks_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouter_OnSinksReceived_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&media_source, handles);
  mojo::internal::Encode(&sinks, handles);
}

void MediaRouter_OnSinksReceived_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&media_source, handles);
  mojo::internal::Decode(&sinks, handles);
}

MediaRouter_OnSinksReceived_Params_Data::MediaRouter_OnSinksReceived_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouter_OnIssue_Name = 2;

class MediaRouter_OnIssue_Params_Data {
 public:
  static MediaRouter_OnIssue_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::Issue_Data> issue;

 private:
  MediaRouter_OnIssue_Params_Data();
  ~MediaRouter_OnIssue_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnIssue_Params_Data) == 16,
              "Bad sizeof(MediaRouter_OnIssue_Params_Data)");

// static
MediaRouter_OnIssue_Params_Data* MediaRouter_OnIssue_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouter_OnIssue_Params_Data))) MediaRouter_OnIssue_Params_Data();
}

// static
bool MediaRouter_OnIssue_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnIssue_Params_Data* object = static_cast<const MediaRouter_OnIssue_Params_Data*>(data);

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
          object->issue, "null issue field in MediaRouter_OnIssue_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->issue, bounds_checker))
    return false;

  return true;
}

void MediaRouter_OnIssue_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&issue, handles);
}

void MediaRouter_OnIssue_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&issue, handles);
}

MediaRouter_OnIssue_Params_Data::MediaRouter_OnIssue_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouter_OnRoutesUpdated_Name = 3;

class MediaRouter_OnRoutesUpdated_Params_Data {
 public:
  static MediaRouter_OnRoutesUpdated_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::MediaRoute_Data*> routes;
  mojo::internal::StringPointer media_source;
  mojo::internal::ArrayPointer<mojo::internal::String_Data*> joinable_route_ids;

 private:
  MediaRouter_OnRoutesUpdated_Params_Data();
  ~MediaRouter_OnRoutesUpdated_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnRoutesUpdated_Params_Data) == 32,
              "Bad sizeof(MediaRouter_OnRoutesUpdated_Params_Data)");

// static
MediaRouter_OnRoutesUpdated_Params_Data* MediaRouter_OnRoutesUpdated_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouter_OnRoutesUpdated_Params_Data))) MediaRouter_OnRoutesUpdated_Params_Data();
}

// static
bool MediaRouter_OnRoutesUpdated_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnRoutesUpdated_Params_Data* object = static_cast<const MediaRouter_OnRoutesUpdated_Params_Data*>(data);

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
          object->routes, "null routes field in MediaRouter_OnRoutesUpdated_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams routes_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->routes, bounds_checker,
                                     &routes_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->media_source, "null media_source field in MediaRouter_OnRoutesUpdated_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_source, bounds_checker,
                                     &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->joinable_route_ids, "null joinable_route_ids field in MediaRouter_OnRoutesUpdated_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams joinable_route_ids_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateArray(object->joinable_route_ids, bounds_checker,
                                     &joinable_route_ids_validate_params)) {
    return false;
  }

  return true;
}

void MediaRouter_OnRoutesUpdated_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&routes, handles);
  mojo::internal::Encode(&media_source, handles);
  mojo::internal::Encode(&joinable_route_ids, handles);
}

void MediaRouter_OnRoutesUpdated_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&routes, handles);
  mojo::internal::Decode(&media_source, handles);
  mojo::internal::Decode(&joinable_route_ids, handles);
}

MediaRouter_OnRoutesUpdated_Params_Data::MediaRouter_OnRoutesUpdated_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouter_OnSinkAvailabilityUpdated_Name = 4;

class MediaRouter_OnSinkAvailabilityUpdated_Params_Data {
 public:
  static MediaRouter_OnSinkAvailabilityUpdated_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::MediaRouter_Data::SinkAvailability_Data availability;
  uint8_t padfinal_[4];

 private:
  MediaRouter_OnSinkAvailabilityUpdated_Params_Data();
  ~MediaRouter_OnSinkAvailabilityUpdated_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnSinkAvailabilityUpdated_Params_Data) == 16,
              "Bad sizeof(MediaRouter_OnSinkAvailabilityUpdated_Params_Data)");

// static
MediaRouter_OnSinkAvailabilityUpdated_Params_Data* MediaRouter_OnSinkAvailabilityUpdated_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouter_OnSinkAvailabilityUpdated_Params_Data))) MediaRouter_OnSinkAvailabilityUpdated_Params_Data();
}

// static
bool MediaRouter_OnSinkAvailabilityUpdated_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnSinkAvailabilityUpdated_Params_Data* object = static_cast<const MediaRouter_OnSinkAvailabilityUpdated_Params_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->availability))
    return false;

  return true;
}

void MediaRouter_OnSinkAvailabilityUpdated_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void MediaRouter_OnSinkAvailabilityUpdated_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

MediaRouter_OnSinkAvailabilityUpdated_Params_Data::MediaRouter_OnSinkAvailabilityUpdated_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMediaRouter_OnPresentationConnectionStateChanged_Name = 5;

class MediaRouter_OnPresentationConnectionStateChanged_Params_Data {
 public:
  static MediaRouter_OnPresentationConnectionStateChanged_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer route_id;
  internal::MediaRouter_Data::PresentationConnectionState_Data state;
  uint8_t padfinal_[4];

 private:
  MediaRouter_OnPresentationConnectionStateChanged_Params_Data();
  ~MediaRouter_OnPresentationConnectionStateChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaRouter_OnPresentationConnectionStateChanged_Params_Data) == 24,
              "Bad sizeof(MediaRouter_OnPresentationConnectionStateChanged_Params_Data)");

// static
MediaRouter_OnPresentationConnectionStateChanged_Params_Data* MediaRouter_OnPresentationConnectionStateChanged_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRouter_OnPresentationConnectionStateChanged_Params_Data))) MediaRouter_OnPresentationConnectionStateChanged_Params_Data();
}

// static
bool MediaRouter_OnPresentationConnectionStateChanged_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRouter_OnPresentationConnectionStateChanged_Params_Data* object = static_cast<const MediaRouter_OnPresentationConnectionStateChanged_Params_Data*>(data);

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
          object->route_id, "null route_id field in MediaRouter_OnPresentationConnectionStateChanged_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->route_id, bounds_checker,
                                     &route_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateEnum(object->state))
    return false;

  return true;
}

void MediaRouter_OnPresentationConnectionStateChanged_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&route_id, handles);
}

void MediaRouter_OnPresentationConnectionStateChanged_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&route_id, handles);
}

MediaRouter_OnPresentationConnectionStateChanged_Params_Data::MediaRouter_OnPresentationConnectionStateChanged_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
MediaSink_Data* MediaSink_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaSink_Data))) MediaSink_Data();
}

// static
bool MediaSink_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaSink_Data* object = static_cast<const MediaSink_Data*>(data);

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
          object->sink_id, "null sink_id field in MediaSink struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams sink_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->sink_id, bounds_checker,
                                     &sink_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, "null name field in MediaSink struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->name, bounds_checker,
                                     &name_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams description_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->description, bounds_checker,
                                     &description_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams domain_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->domain, bounds_checker,
                                     &domain_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateEnum(object->icon_type))
    return false;

  return true;
}

void MediaSink_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&sink_id, handles);
  mojo::internal::Encode(&name, handles);
  mojo::internal::Encode(&description, handles);
  mojo::internal::Encode(&domain, handles);
}

void MediaSink_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&sink_id, handles);
  mojo::internal::Decode(&name, handles);
  mojo::internal::Decode(&description, handles);
  mojo::internal::Decode(&domain, handles);
}

MediaSink_Data::MediaSink_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
MediaRoute_Data* MediaRoute_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MediaRoute_Data))) MediaRoute_Data();
}

// static
bool MediaRoute_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MediaRoute_Data* object = static_cast<const MediaRoute_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 56 }};

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
          object->media_route_id, "null media_route_id field in MediaRoute struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_route_id, bounds_checker,
                                     &media_route_id_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams media_source_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_source, bounds_checker,
                                     &media_source_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->media_sink_id, "null media_sink_id field in MediaRoute struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams media_sink_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->media_sink_id, bounds_checker,
                                     &media_sink_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->description, "null description field in MediaRoute struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams description_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->description, bounds_checker,
                                     &description_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams custom_controller_path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->custom_controller_path, bounds_checker,
                                     &custom_controller_path_validate_params)) {
    return false;
  }

  return true;
}

void MediaRoute_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&media_route_id, handles);
  mojo::internal::Encode(&media_source, handles);
  mojo::internal::Encode(&media_sink_id, handles);
  mojo::internal::Encode(&description, handles);
  mojo::internal::Encode(&custom_controller_path, handles);
}

void MediaRoute_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&media_route_id, handles);
  mojo::internal::Decode(&media_source, handles);
  mojo::internal::Decode(&media_sink_id, handles);
  mojo::internal::Decode(&description, handles);
  mojo::internal::Decode(&custom_controller_path, handles);
}

MediaRoute_Data::MediaRoute_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
Issue_Data* Issue_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Issue_Data))) Issue_Data();
}

// static
bool Issue_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Issue_Data* object = static_cast<const Issue_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 64 }};

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

  const mojo::internal::ArrayValidateParams route_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->route_id, bounds_checker,
                                     &route_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateEnum(object->severity))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->title, "null title field in Issue struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams title_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->title, bounds_checker,
                                     &title_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->message, bounds_checker,
                                     &message_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateEnum(object->default_action))
    return false;

  const mojo::internal::ArrayValidateParams secondary_actions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->secondary_actions, bounds_checker,
                                     &secondary_actions_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams help_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->help_url, bounds_checker,
                                     &help_url_validate_params)) {
    return false;
  }

  return true;
}

void Issue_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&route_id, handles);
  mojo::internal::Encode(&title, handles);
  mojo::internal::Encode(&message, handles);
  mojo::internal::Encode(&secondary_actions, handles);
  mojo::internal::Encode(&help_url, handles);
}

void Issue_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&route_id, handles);
  mojo::internal::Decode(&title, handles);
  mojo::internal::Decode(&message, handles);
  mojo::internal::Decode(&secondary_actions, handles);
  mojo::internal::Decode(&help_url, handles);
}

Issue_Data::Issue_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
RouteMessage_Data* RouteMessage_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(RouteMessage_Data))) RouteMessage_Data();
}

// static
bool RouteMessage_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RouteMessage_Data* object = static_cast<const RouteMessage_Data*>(data);

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

void RouteMessage_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&message, handles);
  mojo::internal::Encode(&data, handles);
}

void RouteMessage_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&message, handles);
  mojo::internal::Decode(&data, handles);
}

RouteMessage_Data::RouteMessage_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
MediaSinkPtr MediaSink::New() {
  MediaSinkPtr rv;
  mojo::internal::StructHelper<MediaSink>::Initialize(&rv);
  return rv;
}

MediaSink::MediaSink()
    : sink_id(),
      name(),
      description(),
      domain(),
      icon_type() {
}

MediaSink::~MediaSink() {
}


MediaSinkPtr MediaSink::Clone() const {
  MediaSinkPtr rv(New());
  rv->sink_id = sink_id;
  rv->name = name;
  rv->description = description;
  rv->domain = domain;
  rv->icon_type = icon_type;
  return rv;
}


bool MediaSink::Equals(const MediaSink& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->sink_id, other.sink_id))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->description, other.description))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->domain, other.domain))
    return false;
  if (!mojo::internal::ValueTraits<MediaSink::IconType>::Equals(this->icon_type, other.icon_type))
    return false;
  return true;
}// static
MediaRoutePtr MediaRoute::New() {
  MediaRoutePtr rv;
  mojo::internal::StructHelper<MediaRoute>::Initialize(&rv);
  return rv;
}

MediaRoute::MediaRoute()
    : media_route_id(),
      media_source(),
      media_sink_id(),
      description(),
      is_local(),
      custom_controller_path(),
      for_display() {
}

MediaRoute::~MediaRoute() {
}


MediaRoutePtr MediaRoute::Clone() const {
  MediaRoutePtr rv(New());
  rv->media_route_id = media_route_id;
  rv->media_source = media_source;
  rv->media_sink_id = media_sink_id;
  rv->description = description;
  rv->is_local = is_local;
  rv->custom_controller_path = custom_controller_path;
  rv->for_display = for_display;
  return rv;
}


bool MediaRoute::Equals(const MediaRoute& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->media_route_id, other.media_route_id))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->media_source, other.media_source))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->media_sink_id, other.media_sink_id))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->description, other.description))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->is_local, other.is_local))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->custom_controller_path, other.custom_controller_path))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->for_display, other.for_display))
    return false;
  return true;
}// static
IssuePtr Issue::New() {
  IssuePtr rv;
  mojo::internal::StructHelper<Issue>::Initialize(&rv);
  return rv;
}

Issue::Issue()
    : route_id(),
      severity(),
      is_blocking(),
      title(),
      message(),
      default_action(),
      secondary_actions(),
      help_url() {
}

Issue::~Issue() {
}


IssuePtr Issue::Clone() const {
  IssuePtr rv(New());
  rv->route_id = route_id;
  rv->severity = severity;
  rv->is_blocking = is_blocking;
  rv->title = title;
  rv->message = message;
  rv->default_action = default_action;
  rv->secondary_actions = secondary_actions.Clone();
  rv->help_url = help_url;
  return rv;
}


bool Issue::Equals(const Issue& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->route_id, other.route_id))
    return false;
  if (!mojo::internal::ValueTraits<Issue::Severity>::Equals(this->severity, other.severity))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->is_blocking, other.is_blocking))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->title, other.title))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->message, other.message))
    return false;
  if (!mojo::internal::ValueTraits<Issue::ActionType>::Equals(this->default_action, other.default_action))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<Issue::ActionType>>::Equals(this->secondary_actions, other.secondary_actions))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->help_url, other.help_url))
    return false;
  return true;
}// static
RouteMessagePtr RouteMessage::New() {
  RouteMessagePtr rv;
  mojo::internal::StructHelper<RouteMessage>::Initialize(&rv);
  return rv;
}

RouteMessage::RouteMessage()
    : type(),
      message(),
      data() {
}

RouteMessage::~RouteMessage() {
}


RouteMessagePtr RouteMessage::Clone() const {
  RouteMessagePtr rv(New());
  rv->type = type;
  rv->message = message;
  rv->data = data.Clone();
  return rv;
}


bool RouteMessage::Equals(const RouteMessage& other) const {
  if (!mojo::internal::ValueTraits<RouteMessage::Type>::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->message, other.message))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<uint8_t>>::Equals(this->data, other.data))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char MediaRouteProvider::Name_[] = "media_router::interfaces::MediaRouteProvider";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t MediaRouteProvider::Version_;
class MediaRouteProvider_CreateRoute_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_CreateRoute_ForwardToCallback(
      const MediaRouteProvider::CreateRouteCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::CreateRouteCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_CreateRoute_ForwardToCallback);
};
bool MediaRouteProvider_CreateRoute_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::MediaRouteProvider_CreateRoute_ResponseParams_Data* params =
      reinterpret_cast<internal::MediaRouteProvider_CreateRoute_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  MediaRoutePtr p_route{};
  mojo::String p_error_text{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->route.ptr, &p_route, &serialization_context_))
      success = false;
    if (!Deserialize_(params->error_text.ptr, &p_error_text, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_route), p_error_text);
  return true;
}
class MediaRouteProvider_JoinRoute_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_JoinRoute_ForwardToCallback(
      const MediaRouteProvider::JoinRouteCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::JoinRouteCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_JoinRoute_ForwardToCallback);
};
bool MediaRouteProvider_JoinRoute_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::MediaRouteProvider_JoinRoute_ResponseParams_Data* params =
      reinterpret_cast<internal::MediaRouteProvider_JoinRoute_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  MediaRoutePtr p_route{};
  mojo::String p_error_text{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->route.ptr, &p_route, &serialization_context_))
      success = false;
    if (!Deserialize_(params->error_text.ptr, &p_error_text, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_route), p_error_text);
  return true;
}
class MediaRouteProvider_ConnectRouteByRouteId_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_ConnectRouteByRouteId_ForwardToCallback(
      const MediaRouteProvider::ConnectRouteByRouteIdCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::ConnectRouteByRouteIdCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_ConnectRouteByRouteId_ForwardToCallback);
};
bool MediaRouteProvider_ConnectRouteByRouteId_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data* params =
      reinterpret_cast<internal::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  MediaRoutePtr p_route{};
  mojo::String p_error_text{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->route.ptr, &p_route, &serialization_context_))
      success = false;
    if (!Deserialize_(params->error_text.ptr, &p_error_text, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_route), p_error_text);
  return true;
}
class MediaRouteProvider_SendRouteMessage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_SendRouteMessage_ForwardToCallback(
      const MediaRouteProvider::SendRouteMessageCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::SendRouteMessageCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_SendRouteMessage_ForwardToCallback);
};
bool MediaRouteProvider_SendRouteMessage_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::MediaRouteProvider_SendRouteMessage_ResponseParams_Data* params =
      reinterpret_cast<internal::MediaRouteProvider_SendRouteMessage_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  bool p_sent{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_sent = params->sent;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_sent);
  return true;
}
class MediaRouteProvider_SendRouteBinaryMessage_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_SendRouteBinaryMessage_ForwardToCallback(
      const MediaRouteProvider::SendRouteBinaryMessageCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::SendRouteBinaryMessageCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_SendRouteBinaryMessage_ForwardToCallback);
};
bool MediaRouteProvider_SendRouteBinaryMessage_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data* params =
      reinterpret_cast<internal::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  bool p_sent{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_sent = params->sent;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_sent);
  return true;
}
class MediaRouteProvider_ListenForRouteMessages_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouteProvider_ListenForRouteMessages_ForwardToCallback(
      const MediaRouteProvider::ListenForRouteMessagesCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouteProvider::ListenForRouteMessagesCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_ListenForRouteMessages_ForwardToCallback);
};
bool MediaRouteProvider_ListenForRouteMessages_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data* params =
      reinterpret_cast<internal::MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::Array<RouteMessagePtr> p_messages{};
  bool p_error{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->messages.ptr, &p_messages, &serialization_context_))
      success = false;
    p_error = params->error;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_messages), p_error);
  return true;
}

MediaRouteProviderProxy::MediaRouteProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void MediaRouteProviderProxy::CreateRoute(
    const mojo::String& in_media_source, const mojo::String& in_sink_id, const mojo::String& in_original_presentation_id, const mojo::String& in_origin, int32_t in_tab_id, const CreateRouteCallback& callback) {
  size_t size = sizeof(internal::MediaRouteProvider_CreateRoute_Params_Data);
  size += GetSerializedSize_(in_media_source);
  size += GetSerializedSize_(in_sink_id);
  size += GetSerializedSize_(in_original_presentation_id);
  size += GetSerializedSize_(in_origin);
  mojo::internal::RequestMessageBuilder builder(internal::kMediaRouteProvider_CreateRoute_Name, size);

  internal::MediaRouteProvider_CreateRoute_Params_Data* params =
      internal::MediaRouteProvider_CreateRoute_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_media_source), builder.buffer(), &params->media_source.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->media_source.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.CreateRoute request");
  Serialize_(std::move(in_sink_id), builder.buffer(), &params->sink_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->sink_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sink_id in MediaRouteProvider.CreateRoute request");
  Serialize_(std::move(in_original_presentation_id), builder.buffer(), &params->original_presentation_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->original_presentation_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null original_presentation_id in MediaRouteProvider.CreateRoute request");
  Serialize_(std::move(in_origin), builder.buffer(), &params->origin.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->origin.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in MediaRouteProvider.CreateRoute request");
  params->tab_id = in_tab_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new MediaRouteProvider_CreateRoute_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void MediaRouteProviderProxy::JoinRoute(
    const mojo::String& in_media_source, const mojo::String& in_presentation_id, const mojo::String& in_origin, int32_t in_tab_id, const JoinRouteCallback& callback) {
  size_t size = sizeof(internal::MediaRouteProvider_JoinRoute_Params_Data);
  size += GetSerializedSize_(in_media_source);
  size += GetSerializedSize_(in_presentation_id);
  size += GetSerializedSize_(in_origin);
  mojo::internal::RequestMessageBuilder builder(internal::kMediaRouteProvider_JoinRoute_Name, size);

  internal::MediaRouteProvider_JoinRoute_Params_Data* params =
      internal::MediaRouteProvider_JoinRoute_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_media_source), builder.buffer(), &params->media_source.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->media_source.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.JoinRoute request");
  Serialize_(std::move(in_presentation_id), builder.buffer(), &params->presentation_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->presentation_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_id in MediaRouteProvider.JoinRoute request");
  Serialize_(std::move(in_origin), builder.buffer(), &params->origin.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->origin.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in MediaRouteProvider.JoinRoute request");
  params->tab_id = in_tab_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new MediaRouteProvider_JoinRoute_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void MediaRouteProviderProxy::ConnectRouteByRouteId(
    const mojo::String& in_media_source, const mojo::String& in_route_id, const mojo::String& in_presentation_id, const mojo::String& in_origin, int32_t in_tab_id, const ConnectRouteByRouteIdCallback& callback) {
  size_t size = sizeof(internal::MediaRouteProvider_ConnectRouteByRouteId_Params_Data);
  size += GetSerializedSize_(in_media_source);
  size += GetSerializedSize_(in_route_id);
  size += GetSerializedSize_(in_presentation_id);
  size += GetSerializedSize_(in_origin);
  mojo::internal::RequestMessageBuilder builder(internal::kMediaRouteProvider_ConnectRouteByRouteId_Name, size);

  internal::MediaRouteProvider_ConnectRouteByRouteId_Params_Data* params =
      internal::MediaRouteProvider_ConnectRouteByRouteId_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_media_source), builder.buffer(), &params->media_source.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->media_source.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.ConnectRouteByRouteId request");
  Serialize_(std::move(in_route_id), builder.buffer(), &params->route_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->route_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouteProvider.ConnectRouteByRouteId request");
  Serialize_(std::move(in_presentation_id), builder.buffer(), &params->presentation_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->presentation_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null presentation_id in MediaRouteProvider.ConnectRouteByRouteId request");
  Serialize_(std::move(in_origin), builder.buffer(), &params->origin.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->origin.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in MediaRouteProvider.ConnectRouteByRouteId request");
  params->tab_id = in_tab_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new MediaRouteProvider_ConnectRouteByRouteId_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void MediaRouteProviderProxy::TerminateRoute(
    const mojo::String& in_route_id) {
  size_t size = sizeof(internal::MediaRouteProvider_TerminateRoute_Params_Data);
  size += GetSerializedSize_(in_route_id);
  mojo::internal::MessageBuilder builder(internal::kMediaRouteProvider_TerminateRoute_Name, size);

  internal::MediaRouteProvider_TerminateRoute_Params_Data* params =
      internal::MediaRouteProvider_TerminateRoute_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_route_id), builder.buffer(), &params->route_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->route_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouteProvider.TerminateRoute request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void MediaRouteProviderProxy::SendRouteMessage(
    const mojo::String& in_media_route_id, const mojo::String& in_message, const SendRouteMessageCallback& callback) {
  size_t size = sizeof(internal::MediaRouteProvider_SendRouteMessage_Params_Data);
  size += GetSerializedSize_(in_media_route_id);
  size += GetSerializedSize_(in_message);
  mojo::internal::RequestMessageBuilder builder(internal::kMediaRouteProvider_SendRouteMessage_Name, size);

  internal::MediaRouteProvider_SendRouteMessage_Params_Data* params =
      internal::MediaRouteProvider_SendRouteMessage_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_media_route_id), builder.buffer(), &params->media_route_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->media_route_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_route_id in MediaRouteProvider.SendRouteMessage request");
  Serialize_(std::move(in_message), builder.buffer(), &params->message.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->message.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in MediaRouteProvider.SendRouteMessage request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new MediaRouteProvider_SendRouteMessage_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void MediaRouteProviderProxy::SendRouteBinaryMessage(
    const mojo::String& in_media_route_id, mojo::Array<uint8_t> in_data, const SendRouteBinaryMessageCallback& callback) {
  size_t size = sizeof(internal::MediaRouteProvider_SendRouteBinaryMessage_Params_Data);
  size += GetSerializedSize_(in_media_route_id);
  size += GetSerializedSize_(in_data);
  mojo::internal::RequestMessageBuilder builder(internal::kMediaRouteProvider_SendRouteBinaryMessage_Name, size);

  internal::MediaRouteProvider_SendRouteBinaryMessage_Params_Data* params =
      internal::MediaRouteProvider_SendRouteBinaryMessage_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_media_route_id), builder.buffer(), &params->media_route_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->media_route_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_route_id in MediaRouteProvider.SendRouteBinaryMessage request");
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_data), builder.buffer(),
      &params->data.ptr, &data_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->data.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in MediaRouteProvider.SendRouteBinaryMessage request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new MediaRouteProvider_SendRouteBinaryMessage_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void MediaRouteProviderProxy::StartObservingMediaSinks(
    const mojo::String& in_media_source) {
  size_t size = sizeof(internal::MediaRouteProvider_StartObservingMediaSinks_Params_Data);
  size += GetSerializedSize_(in_media_source);
  mojo::internal::MessageBuilder builder(internal::kMediaRouteProvider_StartObservingMediaSinks_Name, size);

  internal::MediaRouteProvider_StartObservingMediaSinks_Params_Data* params =
      internal::MediaRouteProvider_StartObservingMediaSinks_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_media_source), builder.buffer(), &params->media_source.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->media_source.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.StartObservingMediaSinks request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void MediaRouteProviderProxy::StopObservingMediaSinks(
    const mojo::String& in_media_source) {
  size_t size = sizeof(internal::MediaRouteProvider_StopObservingMediaSinks_Params_Data);
  size += GetSerializedSize_(in_media_source);
  mojo::internal::MessageBuilder builder(internal::kMediaRouteProvider_StopObservingMediaSinks_Name, size);

  internal::MediaRouteProvider_StopObservingMediaSinks_Params_Data* params =
      internal::MediaRouteProvider_StopObservingMediaSinks_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_media_source), builder.buffer(), &params->media_source.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->media_source.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.StopObservingMediaSinks request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void MediaRouteProviderProxy::StartObservingMediaRoutes(
    const mojo::String& in_media_source) {
  size_t size = sizeof(internal::MediaRouteProvider_StartObservingMediaRoutes_Params_Data);
  size += GetSerializedSize_(in_media_source);
  mojo::internal::MessageBuilder builder(internal::kMediaRouteProvider_StartObservingMediaRoutes_Name, size);

  internal::MediaRouteProvider_StartObservingMediaRoutes_Params_Data* params =
      internal::MediaRouteProvider_StartObservingMediaRoutes_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_media_source), builder.buffer(), &params->media_source.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->media_source.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.StartObservingMediaRoutes request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void MediaRouteProviderProxy::StopObservingMediaRoutes(
    const mojo::String& in_media_source) {
  size_t size = sizeof(internal::MediaRouteProvider_StopObservingMediaRoutes_Params_Data);
  size += GetSerializedSize_(in_media_source);
  mojo::internal::MessageBuilder builder(internal::kMediaRouteProvider_StopObservingMediaRoutes_Name, size);

  internal::MediaRouteProvider_StopObservingMediaRoutes_Params_Data* params =
      internal::MediaRouteProvider_StopObservingMediaRoutes_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_media_source), builder.buffer(), &params->media_source.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->media_source.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouteProvider.StopObservingMediaRoutes request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void MediaRouteProviderProxy::ListenForRouteMessages(
    const mojo::String& in_route_id, const ListenForRouteMessagesCallback& callback) {
  size_t size = sizeof(internal::MediaRouteProvider_ListenForRouteMessages_Params_Data);
  size += GetSerializedSize_(in_route_id);
  mojo::internal::RequestMessageBuilder builder(internal::kMediaRouteProvider_ListenForRouteMessages_Name, size);

  internal::MediaRouteProvider_ListenForRouteMessages_Params_Data* params =
      internal::MediaRouteProvider_ListenForRouteMessages_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_route_id), builder.buffer(), &params->route_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->route_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouteProvider.ListenForRouteMessages request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new MediaRouteProvider_ListenForRouteMessages_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void MediaRouteProviderProxy::StopListeningForRouteMessages(
    const mojo::String& in_route_id) {
  size_t size = sizeof(internal::MediaRouteProvider_StopListeningForRouteMessages_Params_Data);
  size += GetSerializedSize_(in_route_id);
  mojo::internal::MessageBuilder builder(internal::kMediaRouteProvider_StopListeningForRouteMessages_Name, size);

  internal::MediaRouteProvider_StopListeningForRouteMessages_Params_Data* params =
      internal::MediaRouteProvider_StopListeningForRouteMessages_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_route_id), builder.buffer(), &params->route_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->route_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouteProvider.StopListeningForRouteMessages request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void MediaRouteProviderProxy::DetachRoute(
    const mojo::String& in_route_id) {
  size_t size = sizeof(internal::MediaRouteProvider_DetachRoute_Params_Data);
  size += GetSerializedSize_(in_route_id);
  mojo::internal::MessageBuilder builder(internal::kMediaRouteProvider_DetachRoute_Name, size);

  internal::MediaRouteProvider_DetachRoute_Params_Data* params =
      internal::MediaRouteProvider_DetachRoute_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_route_id), builder.buffer(), &params->route_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->route_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouteProvider.DetachRoute request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
class MediaRouteProvider_CreateRoute_ProxyToResponder
    : public MediaRouteProvider::CreateRouteCallback::Runnable {
 public:
  ~MediaRouteProvider_CreateRoute_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "MediaRouteProvider::CreateRoute(p_media_source, p_sink_id, p_original_presentation_id, p_origin, p_tab_id, callback) "
        "was never run.";
  }

  MediaRouteProvider_CreateRoute_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(MediaRoutePtr in_route, const mojo::String& in_error_text) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_CreateRoute_ProxyToResponder);
};
void MediaRouteProvider_CreateRoute_ProxyToResponder::Run(
    MediaRoutePtr in_route, const mojo::String& in_error_text) const {
  size_t size = sizeof(internal::MediaRouteProvider_CreateRoute_ResponseParams_Data);
  size += GetSerializedSize_(in_route);
  size += GetSerializedSize_(in_error_text);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kMediaRouteProvider_CreateRoute_Name, size, request_id_);
  internal::MediaRouteProvider_CreateRoute_ResponseParams_Data* params =
      internal::MediaRouteProvider_CreateRoute_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_route), builder.buffer(), &params->route.ptr);
  Serialize_(std::move(in_error_text), builder.buffer(), &params->error_text.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class MediaRouteProvider_JoinRoute_ProxyToResponder
    : public MediaRouteProvider::JoinRouteCallback::Runnable {
 public:
  ~MediaRouteProvider_JoinRoute_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "MediaRouteProvider::JoinRoute(p_media_source, p_presentation_id, p_origin, p_tab_id, callback) "
        "was never run.";
  }

  MediaRouteProvider_JoinRoute_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(MediaRoutePtr in_route, const mojo::String& in_error_text) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_JoinRoute_ProxyToResponder);
};
void MediaRouteProvider_JoinRoute_ProxyToResponder::Run(
    MediaRoutePtr in_route, const mojo::String& in_error_text) const {
  size_t size = sizeof(internal::MediaRouteProvider_JoinRoute_ResponseParams_Data);
  size += GetSerializedSize_(in_route);
  size += GetSerializedSize_(in_error_text);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kMediaRouteProvider_JoinRoute_Name, size, request_id_);
  internal::MediaRouteProvider_JoinRoute_ResponseParams_Data* params =
      internal::MediaRouteProvider_JoinRoute_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_route), builder.buffer(), &params->route.ptr);
  Serialize_(std::move(in_error_text), builder.buffer(), &params->error_text.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder
    : public MediaRouteProvider::ConnectRouteByRouteIdCallback::Runnable {
 public:
  ~MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "MediaRouteProvider::ConnectRouteByRouteId(p_media_source, p_route_id, p_presentation_id, p_origin, p_tab_id, callback) "
        "was never run.";
  }

  MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(MediaRoutePtr in_route, const mojo::String& in_error_text) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder);
};
void MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder::Run(
    MediaRoutePtr in_route, const mojo::String& in_error_text) const {
  size_t size = sizeof(internal::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data);
  size += GetSerializedSize_(in_route);
  size += GetSerializedSize_(in_error_text);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kMediaRouteProvider_ConnectRouteByRouteId_Name, size, request_id_);
  internal::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data* params =
      internal::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_route), builder.buffer(), &params->route.ptr);
  Serialize_(std::move(in_error_text), builder.buffer(), &params->error_text.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class MediaRouteProvider_SendRouteMessage_ProxyToResponder
    : public MediaRouteProvider::SendRouteMessageCallback::Runnable {
 public:
  ~MediaRouteProvider_SendRouteMessage_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "MediaRouteProvider::SendRouteMessage(p_media_route_id, p_message, callback) "
        "was never run.";
  }

  MediaRouteProvider_SendRouteMessage_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_sent) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_SendRouteMessage_ProxyToResponder);
};
void MediaRouteProvider_SendRouteMessage_ProxyToResponder::Run(
    bool in_sent) const {
  size_t size = sizeof(internal::MediaRouteProvider_SendRouteMessage_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kMediaRouteProvider_SendRouteMessage_Name, size, request_id_);
  internal::MediaRouteProvider_SendRouteMessage_ResponseParams_Data* params =
      internal::MediaRouteProvider_SendRouteMessage_ResponseParams_Data::New(builder.buffer());
  params->sent = in_sent;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder
    : public MediaRouteProvider::SendRouteBinaryMessageCallback::Runnable {
 public:
  ~MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "MediaRouteProvider::SendRouteBinaryMessage(p_media_route_id, std::move(p_data), callback) "
        "was never run.";
  }

  MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_sent) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder);
};
void MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder::Run(
    bool in_sent) const {
  size_t size = sizeof(internal::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kMediaRouteProvider_SendRouteBinaryMessage_Name, size, request_id_);
  internal::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data* params =
      internal::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data::New(builder.buffer());
  params->sent = in_sent;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class MediaRouteProvider_ListenForRouteMessages_ProxyToResponder
    : public MediaRouteProvider::ListenForRouteMessagesCallback::Runnable {
 public:
  ~MediaRouteProvider_ListenForRouteMessages_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "MediaRouteProvider::ListenForRouteMessages(p_route_id, callback) "
        "was never run.";
  }

  MediaRouteProvider_ListenForRouteMessages_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::Array<RouteMessagePtr> in_messages, bool in_error) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouteProvider_ListenForRouteMessages_ProxyToResponder);
};
void MediaRouteProvider_ListenForRouteMessages_ProxyToResponder::Run(
    mojo::Array<RouteMessagePtr> in_messages, bool in_error) const {
  size_t size = sizeof(internal::MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data);
  size += GetSerializedSize_(in_messages);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kMediaRouteProvider_ListenForRouteMessages_Name, size, request_id_);
  internal::MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data* params =
      internal::MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams messages_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_messages), builder.buffer(),
      &params->messages.ptr, &messages_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->messages.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null messages in MediaRouteProvider.ListenForRouteMessages response");
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

MediaRouteProviderStub::MediaRouteProviderStub()
    : sink_(nullptr),
      control_message_handler_(MediaRouteProvider::Version_) {
}

MediaRouteProviderStub::~MediaRouteProviderStub() {}

bool MediaRouteProviderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kMediaRouteProvider_CreateRoute_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.CreateRoute", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouteProvider_JoinRoute_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.JoinRoute", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouteProvider_ConnectRouteByRouteId_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.ConnectRouteByRouteId", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouteProvider_TerminateRoute_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.TerminateRoute", __FILE__, __LINE__);
      internal::MediaRouteProvider_TerminateRoute_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_TerminateRoute_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_route_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->route_id.ptr, &p_route_id, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::TerminateRoute");
      sink_->TerminateRoute(p_route_id);
      return true;
    }
    case internal::kMediaRouteProvider_SendRouteMessage_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.SendRouteMessage", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouteProvider_SendRouteBinaryMessage_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.SendRouteBinaryMessage", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouteProvider_StartObservingMediaSinks_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.StartObservingMediaSinks", __FILE__, __LINE__);
      internal::MediaRouteProvider_StartObservingMediaSinks_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_StartObservingMediaSinks_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_media_source{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->media_source.ptr, &p_media_source, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::StartObservingMediaSinks");
      sink_->StartObservingMediaSinks(p_media_source);
      return true;
    }
    case internal::kMediaRouteProvider_StopObservingMediaSinks_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.StopObservingMediaSinks", __FILE__, __LINE__);
      internal::MediaRouteProvider_StopObservingMediaSinks_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_StopObservingMediaSinks_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_media_source{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->media_source.ptr, &p_media_source, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::StopObservingMediaSinks");
      sink_->StopObservingMediaSinks(p_media_source);
      return true;
    }
    case internal::kMediaRouteProvider_StartObservingMediaRoutes_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.StartObservingMediaRoutes", __FILE__, __LINE__);
      internal::MediaRouteProvider_StartObservingMediaRoutes_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_StartObservingMediaRoutes_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_media_source{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->media_source.ptr, &p_media_source, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::StartObservingMediaRoutes");
      sink_->StartObservingMediaRoutes(p_media_source);
      return true;
    }
    case internal::kMediaRouteProvider_StopObservingMediaRoutes_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.StopObservingMediaRoutes", __FILE__, __LINE__);
      internal::MediaRouteProvider_StopObservingMediaRoutes_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_StopObservingMediaRoutes_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_media_source{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->media_source.ptr, &p_media_source, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::StopObservingMediaRoutes");
      sink_->StopObservingMediaRoutes(p_media_source);
      return true;
    }
    case internal::kMediaRouteProvider_ListenForRouteMessages_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.ListenForRouteMessages", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouteProvider_StopListeningForRouteMessages_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.StopListeningForRouteMessages", __FILE__, __LINE__);
      internal::MediaRouteProvider_StopListeningForRouteMessages_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_StopListeningForRouteMessages_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_route_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->route_id.ptr, &p_route_id, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::StopListeningForRouteMessages");
      sink_->StopListeningForRouteMessages(p_route_id);
      return true;
    }
    case internal::kMediaRouteProvider_DetachRoute_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouteProvider.DetachRoute", __FILE__, __LINE__);
      internal::MediaRouteProvider_DetachRoute_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_DetachRoute_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_route_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->route_id.ptr, &p_route_id, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::DetachRoute");
      sink_->DetachRoute(p_route_id);
      return true;
    }
  }
  return false;
}

bool MediaRouteProviderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kMediaRouteProvider_CreateRoute_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::CreateRoute", __FILE__, __LINE__);
      internal::MediaRouteProvider_CreateRoute_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_CreateRoute_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_media_source{};
      mojo::String p_sink_id{};
      mojo::String p_original_presentation_id{};
      mojo::String p_origin{};
      int32_t p_tab_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->media_source.ptr, &p_media_source, &serialization_context_))
          success = false;
        if (!Deserialize_(params->sink_id.ptr, &p_sink_id, &serialization_context_))
          success = false;
        if (!Deserialize_(params->original_presentation_id.ptr, &p_original_presentation_id, &serialization_context_))
          success = false;
        if (!Deserialize_(params->origin.ptr, &p_origin, &serialization_context_))
          success = false;
        p_tab_id = params->tab_id;
      } while (false);
      if (!success)
        return false;
      MediaRouteProvider::CreateRouteCallback::Runnable* runnable =
          new MediaRouteProvider_CreateRoute_ProxyToResponder(
              message->request_id(), responder);
      MediaRouteProvider::CreateRouteCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::CreateRoute");
      sink_->CreateRoute(p_media_source, p_sink_id, p_original_presentation_id, p_origin, p_tab_id, callback);
      return true;
    }
    case internal::kMediaRouteProvider_JoinRoute_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::JoinRoute", __FILE__, __LINE__);
      internal::MediaRouteProvider_JoinRoute_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_JoinRoute_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_media_source{};
      mojo::String p_presentation_id{};
      mojo::String p_origin{};
      int32_t p_tab_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->media_source.ptr, &p_media_source, &serialization_context_))
          success = false;
        if (!Deserialize_(params->presentation_id.ptr, &p_presentation_id, &serialization_context_))
          success = false;
        if (!Deserialize_(params->origin.ptr, &p_origin, &serialization_context_))
          success = false;
        p_tab_id = params->tab_id;
      } while (false);
      if (!success)
        return false;
      MediaRouteProvider::JoinRouteCallback::Runnable* runnable =
          new MediaRouteProvider_JoinRoute_ProxyToResponder(
              message->request_id(), responder);
      MediaRouteProvider::JoinRouteCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::JoinRoute");
      sink_->JoinRoute(p_media_source, p_presentation_id, p_origin, p_tab_id, callback);
      return true;
    }
    case internal::kMediaRouteProvider_ConnectRouteByRouteId_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::ConnectRouteByRouteId", __FILE__, __LINE__);
      internal::MediaRouteProvider_ConnectRouteByRouteId_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_ConnectRouteByRouteId_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_media_source{};
      mojo::String p_route_id{};
      mojo::String p_presentation_id{};
      mojo::String p_origin{};
      int32_t p_tab_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->media_source.ptr, &p_media_source, &serialization_context_))
          success = false;
        if (!Deserialize_(params->route_id.ptr, &p_route_id, &serialization_context_))
          success = false;
        if (!Deserialize_(params->presentation_id.ptr, &p_presentation_id, &serialization_context_))
          success = false;
        if (!Deserialize_(params->origin.ptr, &p_origin, &serialization_context_))
          success = false;
        p_tab_id = params->tab_id;
      } while (false);
      if (!success)
        return false;
      MediaRouteProvider::ConnectRouteByRouteIdCallback::Runnable* runnable =
          new MediaRouteProvider_ConnectRouteByRouteId_ProxyToResponder(
              message->request_id(), responder);
      MediaRouteProvider::ConnectRouteByRouteIdCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::ConnectRouteByRouteId");
      sink_->ConnectRouteByRouteId(p_media_source, p_route_id, p_presentation_id, p_origin, p_tab_id, callback);
      return true;
    }
    case internal::kMediaRouteProvider_TerminateRoute_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::TerminateRoute", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouteProvider_SendRouteMessage_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::SendRouteMessage", __FILE__, __LINE__);
      internal::MediaRouteProvider_SendRouteMessage_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_SendRouteMessage_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_media_route_id{};
      mojo::String p_message{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->media_route_id.ptr, &p_media_route_id, &serialization_context_))
          success = false;
        if (!Deserialize_(params->message.ptr, &p_message, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      MediaRouteProvider::SendRouteMessageCallback::Runnable* runnable =
          new MediaRouteProvider_SendRouteMessage_ProxyToResponder(
              message->request_id(), responder);
      MediaRouteProvider::SendRouteMessageCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::SendRouteMessage");
      sink_->SendRouteMessage(p_media_route_id, p_message, callback);
      return true;
    }
    case internal::kMediaRouteProvider_SendRouteBinaryMessage_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::SendRouteBinaryMessage", __FILE__, __LINE__);
      internal::MediaRouteProvider_SendRouteBinaryMessage_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_SendRouteBinaryMessage_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_media_route_id{};
      mojo::Array<uint8_t> p_data{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->media_route_id.ptr, &p_media_route_id, &serialization_context_))
          success = false;
        if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      MediaRouteProvider::SendRouteBinaryMessageCallback::Runnable* runnable =
          new MediaRouteProvider_SendRouteBinaryMessage_ProxyToResponder(
              message->request_id(), responder);
      MediaRouteProvider::SendRouteBinaryMessageCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::SendRouteBinaryMessage");
      sink_->SendRouteBinaryMessage(p_media_route_id, std::move(p_data), callback);
      return true;
    }
    case internal::kMediaRouteProvider_StartObservingMediaSinks_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::StartObservingMediaSinks", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouteProvider_StopObservingMediaSinks_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::StopObservingMediaSinks", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouteProvider_StartObservingMediaRoutes_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::StartObservingMediaRoutes", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouteProvider_StopObservingMediaRoutes_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::StopObservingMediaRoutes", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouteProvider_ListenForRouteMessages_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::ListenForRouteMessages", __FILE__, __LINE__);
      internal::MediaRouteProvider_ListenForRouteMessages_Params_Data* params =
          reinterpret_cast<internal::MediaRouteProvider_ListenForRouteMessages_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_route_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->route_id.ptr, &p_route_id, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      MediaRouteProvider::ListenForRouteMessagesCallback::Runnable* runnable =
          new MediaRouteProvider_ListenForRouteMessages_ProxyToResponder(
              message->request_id(), responder);
      MediaRouteProvider::ListenForRouteMessagesCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouteProvider::ListenForRouteMessages");
      sink_->ListenForRouteMessages(p_route_id, callback);
      return true;
    }
    case internal::kMediaRouteProvider_StopListeningForRouteMessages_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::StopListeningForRouteMessages", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouteProvider_DetachRoute_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouteProvider::DetachRoute", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

MediaRouteProviderRequestValidator::MediaRouteProviderRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool MediaRouteProviderRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kMediaRouteProvider_CreateRoute_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_CreateRoute_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_JoinRoute_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_JoinRoute_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_ConnectRouteByRouteId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_ConnectRouteByRouteId_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_TerminateRoute_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_TerminateRoute_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_SendRouteMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_SendRouteMessage_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_SendRouteBinaryMessage_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_SendRouteBinaryMessage_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_StartObservingMediaSinks_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_StartObservingMediaSinks_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_StopObservingMediaSinks_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_StopObservingMediaSinks_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_StartObservingMediaRoutes_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_StartObservingMediaRoutes_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_StopObservingMediaRoutes_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_StopObservingMediaRoutes_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_ListenForRouteMessages_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_ListenForRouteMessages_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_StopListeningForRouteMessages_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_StopListeningForRouteMessages_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_DetachRoute_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_DetachRoute_Params_Data>(message)) {
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

MediaRouteProviderResponseValidator::MediaRouteProviderResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool MediaRouteProviderResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kMediaRouteProvider_CreateRoute_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_CreateRoute_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_JoinRoute_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_JoinRoute_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_ConnectRouteByRouteId_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_ConnectRouteByRouteId_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_SendRouteMessage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_SendRouteMessage_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_SendRouteBinaryMessage_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_SendRouteBinaryMessage_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouteProvider_ListenForRouteMessages_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouteProvider_ListenForRouteMessages_ResponseParams_Data>(message)) {
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
MOJO_STATIC_CONST_MEMBER_DEFINITION const char MediaRouter::Name_[] = "media_router::interfaces::MediaRouter";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t MediaRouter::Version_;
class MediaRouter_RegisterMediaRouteProvider_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MediaRouter_RegisterMediaRouteProvider_ForwardToCallback(
      const MediaRouter::RegisterMediaRouteProviderCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MediaRouter::RegisterMediaRouteProviderCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouter_RegisterMediaRouteProvider_ForwardToCallback);
};
bool MediaRouter_RegisterMediaRouteProvider_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data* params =
      reinterpret_cast<internal::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::String p_instance_id{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->instance_id.ptr, &p_instance_id, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_instance_id);
  return true;
}

MediaRouterProxy::MediaRouterProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void MediaRouterProxy::RegisterMediaRouteProvider(
    MediaRouteProviderPtr in_media_router_provider, const RegisterMediaRouteProviderCallback& callback) {
  size_t size = sizeof(internal::MediaRouter_RegisterMediaRouteProvider_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kMediaRouter_RegisterMediaRouteProvider_Name, size);

  internal::MediaRouter_RegisterMediaRouteProvider_Params_Data* params =
      internal::MediaRouter_RegisterMediaRouteProvider_Params_Data::New(builder.buffer());
  mojo::internal::InterfacePointerToData(std::move(in_media_router_provider), &params->media_router_provider);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->media_router_provider.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid media_router_provider in MediaRouter.RegisterMediaRouteProvider request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new MediaRouter_RegisterMediaRouteProvider_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void MediaRouterProxy::OnSinksReceived(
    const mojo::String& in_media_source, mojo::Array<MediaSinkPtr> in_sinks) {
  size_t size = sizeof(internal::MediaRouter_OnSinksReceived_Params_Data);
  size += GetSerializedSize_(in_media_source);
  size += GetSerializedSize_(in_sinks);
  mojo::internal::MessageBuilder builder(internal::kMediaRouter_OnSinksReceived_Name, size);

  internal::MediaRouter_OnSinksReceived_Params_Data* params =
      internal::MediaRouter_OnSinksReceived_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_media_source), builder.buffer(), &params->media_source.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->media_source.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouter.OnSinksReceived request");
  const mojo::internal::ArrayValidateParams sinks_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_sinks), builder.buffer(),
      &params->sinks.ptr, &sinks_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->sinks.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sinks in MediaRouter.OnSinksReceived request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void MediaRouterProxy::OnIssue(
    IssuePtr in_issue) {
  size_t size = sizeof(internal::MediaRouter_OnIssue_Params_Data);
  size += GetSerializedSize_(in_issue);
  mojo::internal::MessageBuilder builder(internal::kMediaRouter_OnIssue_Name, size);

  internal::MediaRouter_OnIssue_Params_Data* params =
      internal::MediaRouter_OnIssue_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_issue), builder.buffer(), &params->issue.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->issue.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null issue in MediaRouter.OnIssue request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void MediaRouterProxy::OnRoutesUpdated(
    mojo::Array<MediaRoutePtr> in_routes, const mojo::String& in_media_source, mojo::Array<mojo::String> in_joinable_route_ids) {
  size_t size = sizeof(internal::MediaRouter_OnRoutesUpdated_Params_Data);
  size += GetSerializedSize_(in_routes);
  size += GetSerializedSize_(in_media_source);
  size += GetSerializedSize_(in_joinable_route_ids);
  mojo::internal::MessageBuilder builder(internal::kMediaRouter_OnRoutesUpdated_Name, size);

  internal::MediaRouter_OnRoutesUpdated_Params_Data* params =
      internal::MediaRouter_OnRoutesUpdated_Params_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams routes_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_routes), builder.buffer(),
      &params->routes.ptr, &routes_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->routes.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null routes in MediaRouter.OnRoutesUpdated request");
  Serialize_(std::move(in_media_source), builder.buffer(), &params->media_source.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->media_source.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null media_source in MediaRouter.OnRoutesUpdated request");
  const mojo::internal::ArrayValidateParams joinable_route_ids_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  mojo::SerializeArray_(std::move(in_joinable_route_ids), builder.buffer(),
      &params->joinable_route_ids.ptr, &joinable_route_ids_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->joinable_route_ids.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null joinable_route_ids in MediaRouter.OnRoutesUpdated request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void MediaRouterProxy::OnSinkAvailabilityUpdated(
    MediaRouter::SinkAvailability in_availability) {
  size_t size = sizeof(internal::MediaRouter_OnSinkAvailabilityUpdated_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kMediaRouter_OnSinkAvailabilityUpdated_Name, size);

  internal::MediaRouter_OnSinkAvailabilityUpdated_Params_Data* params =
      internal::MediaRouter_OnSinkAvailabilityUpdated_Params_Data::New(builder.buffer());
  params->availability.value = static_cast<int32_t>(in_availability);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void MediaRouterProxy::OnPresentationConnectionStateChanged(
    const mojo::String& in_route_id, MediaRouter::PresentationConnectionState in_state) {
  size_t size = sizeof(internal::MediaRouter_OnPresentationConnectionStateChanged_Params_Data);
  size += GetSerializedSize_(in_route_id);
  mojo::internal::MessageBuilder builder(internal::kMediaRouter_OnPresentationConnectionStateChanged_Name, size);

  internal::MediaRouter_OnPresentationConnectionStateChanged_Params_Data* params =
      internal::MediaRouter_OnPresentationConnectionStateChanged_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_route_id), builder.buffer(), &params->route_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->route_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null route_id in MediaRouter.OnPresentationConnectionStateChanged request");
  params->state.value = static_cast<int32_t>(in_state);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
class MediaRouter_RegisterMediaRouteProvider_ProxyToResponder
    : public MediaRouter::RegisterMediaRouteProviderCallback::Runnable {
 public:
  ~MediaRouter_RegisterMediaRouteProvider_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "MediaRouter::RegisterMediaRouteProvider(std::move(p_media_router_provider), callback) "
        "was never run.";
  }

  MediaRouter_RegisterMediaRouteProvider_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(const mojo::String& in_instance_id) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MediaRouter_RegisterMediaRouteProvider_ProxyToResponder);
};
void MediaRouter_RegisterMediaRouteProvider_ProxyToResponder::Run(
    const mojo::String& in_instance_id) const {
  size_t size = sizeof(internal::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data);
  size += GetSerializedSize_(in_instance_id);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kMediaRouter_RegisterMediaRouteProvider_Name, size, request_id_);
  internal::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data* params =
      internal::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_instance_id), builder.buffer(), &params->instance_id.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->instance_id.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null instance_id in MediaRouter.RegisterMediaRouteProvider response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

MediaRouterStub::MediaRouterStub()
    : sink_(nullptr),
      control_message_handler_(MediaRouter::Version_) {
}

MediaRouterStub::~MediaRouterStub() {}

bool MediaRouterStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kMediaRouter_RegisterMediaRouteProvider_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouter.RegisterMediaRouteProvider", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouter_OnSinksReceived_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouter.OnSinksReceived", __FILE__, __LINE__);
      internal::MediaRouter_OnSinksReceived_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnSinksReceived_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_media_source{};
      mojo::Array<MediaSinkPtr> p_sinks{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->media_source.ptr, &p_media_source, &serialization_context_))
          success = false;
        if (!Deserialize_(params->sinks.ptr, &p_sinks, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouter::OnSinksReceived");
      sink_->OnSinksReceived(p_media_source, std::move(p_sinks));
      return true;
    }
    case internal::kMediaRouter_OnIssue_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouter.OnIssue", __FILE__, __LINE__);
      internal::MediaRouter_OnIssue_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnIssue_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      IssuePtr p_issue{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->issue.ptr, &p_issue, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouter::OnIssue");
      sink_->OnIssue(std::move(p_issue));
      return true;
    }
    case internal::kMediaRouter_OnRoutesUpdated_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouter.OnRoutesUpdated", __FILE__, __LINE__);
      internal::MediaRouter_OnRoutesUpdated_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnRoutesUpdated_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::Array<MediaRoutePtr> p_routes{};
      mojo::String p_media_source{};
      mojo::Array<mojo::String> p_joinable_route_ids{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->routes.ptr, &p_routes, &serialization_context_))
          success = false;
        if (!Deserialize_(params->media_source.ptr, &p_media_source, &serialization_context_))
          success = false;
        if (!Deserialize_(params->joinable_route_ids.ptr, &p_joinable_route_ids, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouter::OnRoutesUpdated");
      sink_->OnRoutesUpdated(std::move(p_routes), p_media_source, std::move(p_joinable_route_ids));
      return true;
    }
    case internal::kMediaRouter_OnSinkAvailabilityUpdated_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouter.OnSinkAvailabilityUpdated", __FILE__, __LINE__);
      internal::MediaRouter_OnSinkAvailabilityUpdated_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnSinkAvailabilityUpdated_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      MediaRouter::SinkAvailability p_availability{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_availability = static_cast<MediaRouter::SinkAvailability>(params->availability.value);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouter::OnSinkAvailabilityUpdated");
      sink_->OnSinkAvailabilityUpdated(p_availability);
      return true;
    }
    case internal::kMediaRouter_OnPresentationConnectionStateChanged_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.media_router::interfaces.MediaRouter.OnPresentationConnectionStateChanged", __FILE__, __LINE__);
      internal::MediaRouter_OnPresentationConnectionStateChanged_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_OnPresentationConnectionStateChanged_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_route_id{};
      MediaRouter::PresentationConnectionState p_state{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->route_id.ptr, &p_route_id, &serialization_context_))
          success = false;
        p_state = static_cast<MediaRouter::PresentationConnectionState>(params->state.value);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouter::OnPresentationConnectionStateChanged");
      sink_->OnPresentationConnectionStateChanged(p_route_id, p_state);
      return true;
    }
  }
  return false;
}

bool MediaRouterStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kMediaRouter_RegisterMediaRouteProvider_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouter::RegisterMediaRouteProvider", __FILE__, __LINE__);
      internal::MediaRouter_RegisterMediaRouteProvider_Params_Data* params =
          reinterpret_cast<internal::MediaRouter_RegisterMediaRouteProvider_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      MediaRouteProviderPtr p_media_router_provider{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        mojo::internal::InterfaceDataToPointer(&params->media_router_provider, &p_media_router_provider);
      } while (false);
      if (!success)
        return false;
      MediaRouter::RegisterMediaRouteProviderCallback::Runnable* runnable =
          new MediaRouter_RegisterMediaRouteProvider_ProxyToResponder(
              message->request_id(), responder);
      MediaRouter::RegisterMediaRouteProviderCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MediaRouter::RegisterMediaRouteProvider");
      sink_->RegisterMediaRouteProvider(std::move(p_media_router_provider), callback);
      return true;
    }
    case internal::kMediaRouter_OnSinksReceived_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouter::OnSinksReceived", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouter_OnIssue_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouter::OnIssue", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouter_OnRoutesUpdated_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouter::OnRoutesUpdated", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouter_OnSinkAvailabilityUpdated_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouter::OnSinkAvailabilityUpdated", __FILE__, __LINE__);
      break;
    }
    case internal::kMediaRouter_OnPresentationConnectionStateChanged_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::media_router::interfaces::MediaRouter::OnPresentationConnectionStateChanged", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

MediaRouterRequestValidator::MediaRouterRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool MediaRouterRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kMediaRouter_RegisterMediaRouteProvider_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_RegisterMediaRouteProvider_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouter_OnSinksReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnSinksReceived_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouter_OnIssue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnIssue_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouter_OnRoutesUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnRoutesUpdated_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouter_OnSinkAvailabilityUpdated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnSinkAvailabilityUpdated_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMediaRouter_OnPresentationConnectionStateChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_OnPresentationConnectionStateChanged_Params_Data>(message)) {
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

MediaRouterResponseValidator::MediaRouterResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool MediaRouterResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kMediaRouter_RegisterMediaRouteProvider_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MediaRouter_RegisterMediaRouteProvider_ResponseParams_Data>(message)) {
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
size_t GetSerializedSize_(const MediaSinkPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::MediaSink_Data);
  size += GetSerializedSize_(input->sink_id);
  size += GetSerializedSize_(input->name);
  size += GetSerializedSize_(input->description);
  size += GetSerializedSize_(input->domain);
  return size;
}

void Serialize_(MediaSinkPtr input, mojo::internal::Buffer* buf,
                internal::MediaSink_Data** output) {
  if (input) {
    internal::MediaSink_Data* result =
        internal::MediaSink_Data::New(buf);
    Serialize_(std::move(input->sink_id), buf, &result->sink_id.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->sink_id.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null sink_id in MediaSink struct");
    Serialize_(std::move(input->name), buf, &result->name.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->name.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null name in MediaSink struct");
    Serialize_(std::move(input->description), buf, &result->description.ptr);
    Serialize_(std::move(input->domain), buf, &result->domain.ptr);
    result->icon_type.value = static_cast<int32_t>(input->icon_type);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::MediaSink_Data* input,
                  MediaSinkPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    MediaSinkPtr result(MediaSink::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->sink_id.ptr, &result->sink_id, context))
        success = false;
      if (!Deserialize_(input->name.ptr, &result->name, context))
        success = false;
      if (!Deserialize_(input->description.ptr, &result->description, context))
        success = false;
      if (!Deserialize_(input->domain.ptr, &result->domain, context))
        success = false;
      result->icon_type = static_cast<MediaSink::IconType>(input->icon_type.value);
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

MediaSink_Reader::MediaSink_Reader(
    internal::MediaSink_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const MediaRoutePtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::MediaRoute_Data);
  size += GetSerializedSize_(input->media_route_id);
  size += GetSerializedSize_(input->media_source);
  size += GetSerializedSize_(input->media_sink_id);
  size += GetSerializedSize_(input->description);
  size += GetSerializedSize_(input->custom_controller_path);
  return size;
}

void Serialize_(MediaRoutePtr input, mojo::internal::Buffer* buf,
                internal::MediaRoute_Data** output) {
  if (input) {
    internal::MediaRoute_Data* result =
        internal::MediaRoute_Data::New(buf);
    Serialize_(std::move(input->media_route_id), buf, &result->media_route_id.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->media_route_id.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null media_route_id in MediaRoute struct");
    Serialize_(std::move(input->media_source), buf, &result->media_source.ptr);
    Serialize_(std::move(input->media_sink_id), buf, &result->media_sink_id.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->media_sink_id.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null media_sink_id in MediaRoute struct");
    Serialize_(std::move(input->description), buf, &result->description.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->description.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null description in MediaRoute struct");
    result->is_local = input->is_local;
    Serialize_(std::move(input->custom_controller_path), buf, &result->custom_controller_path.ptr);
    result->for_display = input->for_display;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::MediaRoute_Data* input,
                  MediaRoutePtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    MediaRoutePtr result(MediaRoute::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->media_route_id.ptr, &result->media_route_id, context))
        success = false;
      if (!Deserialize_(input->media_source.ptr, &result->media_source, context))
        success = false;
      if (!Deserialize_(input->media_sink_id.ptr, &result->media_sink_id, context))
        success = false;
      if (!Deserialize_(input->description.ptr, &result->description, context))
        success = false;
      result->is_local = input->is_local;
      if (!Deserialize_(input->custom_controller_path.ptr, &result->custom_controller_path, context))
        success = false;
      result->for_display = input->for_display;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

MediaRoute_Reader::MediaRoute_Reader(
    internal::MediaRoute_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const IssuePtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::Issue_Data);
  size += GetSerializedSize_(input->route_id);
  size += GetSerializedSize_(input->title);
  size += GetSerializedSize_(input->message);
  size += GetSerializedSize_(input->secondary_actions);
  size += GetSerializedSize_(input->help_url);
  return size;
}

void Serialize_(IssuePtr input, mojo::internal::Buffer* buf,
                internal::Issue_Data** output) {
  if (input) {
    internal::Issue_Data* result =
        internal::Issue_Data::New(buf);
    Serialize_(std::move(input->route_id), buf, &result->route_id.ptr);
    result->severity.value = static_cast<int32_t>(input->severity);
    result->is_blocking = input->is_blocking;
    Serialize_(std::move(input->title), buf, &result->title.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->title.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in Issue struct");
    Serialize_(std::move(input->message), buf, &result->message.ptr);
    result->default_action.value = static_cast<int32_t>(input->default_action);
    const mojo::internal::ArrayValidateParams secondary_actions_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->secondary_actions), buf,
        &result->secondary_actions.ptr, &secondary_actions_validate_params);
    Serialize_(std::move(input->help_url), buf, &result->help_url.ptr);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::Issue_Data* input,
                  IssuePtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    IssuePtr result(Issue::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->route_id.ptr, &result->route_id, context))
        success = false;
      result->severity = static_cast<Issue::Severity>(input->severity.value);
      result->is_blocking = input->is_blocking;
      if (!Deserialize_(input->title.ptr, &result->title, context))
        success = false;
      if (!Deserialize_(input->message.ptr, &result->message, context))
        success = false;
      result->default_action = static_cast<Issue::ActionType>(input->default_action.value);
      if (!Deserialize_(input->secondary_actions.ptr, &result->secondary_actions, context))
        success = false;
      if (!Deserialize_(input->help_url.ptr, &result->help_url, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

Issue_Reader::Issue_Reader(
    internal::Issue_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const RouteMessagePtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::RouteMessage_Data);
  size += GetSerializedSize_(input->message);
  size += GetSerializedSize_(input->data);
  return size;
}

void Serialize_(RouteMessagePtr input, mojo::internal::Buffer* buf,
                internal::RouteMessage_Data** output) {
  if (input) {
    internal::RouteMessage_Data* result =
        internal::RouteMessage_Data::New(buf);
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

bool Deserialize_(internal::RouteMessage_Data* input,
                  RouteMessagePtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    RouteMessagePtr result(RouteMessage::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->type = static_cast<RouteMessage::Type>(input->type.value);
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

RouteMessage_Reader::RouteMessage_Reader(
    internal::RouteMessage_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace interfaces
}  // namespace media_router

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif