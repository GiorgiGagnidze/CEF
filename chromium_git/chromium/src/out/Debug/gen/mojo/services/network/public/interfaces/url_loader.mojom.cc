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

#include "mojo/services/network/public/interfaces/url_loader.mojom.h"

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

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kURLLoader_Start_Name = 0;

class URLLoader_Start_Params_Data {
 public:
  static URLLoader_Start_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::URLRequest_Data> request;

 private:
  URLLoader_Start_Params_Data();
  ~URLLoader_Start_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_Start_Params_Data) == 16,
              "Bad sizeof(URLLoader_Start_Params_Data)");

// static
URLLoader_Start_Params_Data* URLLoader_Start_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(URLLoader_Start_Params_Data))) URLLoader_Start_Params_Data();
}

// static
bool URLLoader_Start_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoader_Start_Params_Data* object = static_cast<const URLLoader_Start_Params_Data*>(data);

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
          object->request, "null request field in URLLoader_Start_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request, bounds_checker))
    return false;

  return true;
}

void URLLoader_Start_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&request, handles);
}

void URLLoader_Start_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&request, handles);
}

URLLoader_Start_Params_Data::URLLoader_Start_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class URLLoader_Start_ResponseParams_Data {
 public:
  static URLLoader_Start_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::URLResponse_Data> response;

 private:
  URLLoader_Start_ResponseParams_Data();
  ~URLLoader_Start_ResponseParams_Data() = delete;
};
static_assert(sizeof(URLLoader_Start_ResponseParams_Data) == 16,
              "Bad sizeof(URLLoader_Start_ResponseParams_Data)");

// static
URLLoader_Start_ResponseParams_Data* URLLoader_Start_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(URLLoader_Start_ResponseParams_Data))) URLLoader_Start_ResponseParams_Data();
}

// static
bool URLLoader_Start_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoader_Start_ResponseParams_Data* object = static_cast<const URLLoader_Start_ResponseParams_Data*>(data);

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
          object->response, "null response field in URLLoader_Start_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response, bounds_checker))
    return false;

  return true;
}

void URLLoader_Start_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&response, handles);
}

void URLLoader_Start_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&response, handles);
}

URLLoader_Start_ResponseParams_Data::URLLoader_Start_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kURLLoader_FollowRedirect_Name = 1;

class URLLoader_FollowRedirect_Params_Data {
 public:
  static URLLoader_FollowRedirect_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  URLLoader_FollowRedirect_Params_Data();
  ~URLLoader_FollowRedirect_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_FollowRedirect_Params_Data) == 8,
              "Bad sizeof(URLLoader_FollowRedirect_Params_Data)");

// static
URLLoader_FollowRedirect_Params_Data* URLLoader_FollowRedirect_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(URLLoader_FollowRedirect_Params_Data))) URLLoader_FollowRedirect_Params_Data();
}

// static
bool URLLoader_FollowRedirect_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoader_FollowRedirect_Params_Data* object = static_cast<const URLLoader_FollowRedirect_Params_Data*>(data);

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

void URLLoader_FollowRedirect_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void URLLoader_FollowRedirect_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

URLLoader_FollowRedirect_Params_Data::URLLoader_FollowRedirect_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class URLLoader_FollowRedirect_ResponseParams_Data {
 public:
  static URLLoader_FollowRedirect_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::URLResponse_Data> response;

 private:
  URLLoader_FollowRedirect_ResponseParams_Data();
  ~URLLoader_FollowRedirect_ResponseParams_Data() = delete;
};
static_assert(sizeof(URLLoader_FollowRedirect_ResponseParams_Data) == 16,
              "Bad sizeof(URLLoader_FollowRedirect_ResponseParams_Data)");

// static
URLLoader_FollowRedirect_ResponseParams_Data* URLLoader_FollowRedirect_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(URLLoader_FollowRedirect_ResponseParams_Data))) URLLoader_FollowRedirect_ResponseParams_Data();
}

// static
bool URLLoader_FollowRedirect_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoader_FollowRedirect_ResponseParams_Data* object = static_cast<const URLLoader_FollowRedirect_ResponseParams_Data*>(data);

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
          object->response, "null response field in URLLoader_FollowRedirect_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response, bounds_checker))
    return false;

  return true;
}

void URLLoader_FollowRedirect_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&response, handles);
}

void URLLoader_FollowRedirect_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&response, handles);
}

URLLoader_FollowRedirect_ResponseParams_Data::URLLoader_FollowRedirect_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kURLLoader_QueryStatus_Name = 2;

class URLLoader_QueryStatus_Params_Data {
 public:
  static URLLoader_QueryStatus_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  URLLoader_QueryStatus_Params_Data();
  ~URLLoader_QueryStatus_Params_Data() = delete;
};
static_assert(sizeof(URLLoader_QueryStatus_Params_Data) == 8,
              "Bad sizeof(URLLoader_QueryStatus_Params_Data)");

// static
URLLoader_QueryStatus_Params_Data* URLLoader_QueryStatus_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(URLLoader_QueryStatus_Params_Data))) URLLoader_QueryStatus_Params_Data();
}

// static
bool URLLoader_QueryStatus_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoader_QueryStatus_Params_Data* object = static_cast<const URLLoader_QueryStatus_Params_Data*>(data);

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

void URLLoader_QueryStatus_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void URLLoader_QueryStatus_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

URLLoader_QueryStatus_Params_Data::URLLoader_QueryStatus_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class URLLoader_QueryStatus_ResponseParams_Data {
 public:
  static URLLoader_QueryStatus_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::URLLoaderStatus_Data> status;

 private:
  URLLoader_QueryStatus_ResponseParams_Data();
  ~URLLoader_QueryStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(URLLoader_QueryStatus_ResponseParams_Data) == 16,
              "Bad sizeof(URLLoader_QueryStatus_ResponseParams_Data)");

// static
URLLoader_QueryStatus_ResponseParams_Data* URLLoader_QueryStatus_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(URLLoader_QueryStatus_ResponseParams_Data))) URLLoader_QueryStatus_ResponseParams_Data();
}

// static
bool URLLoader_QueryStatus_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoader_QueryStatus_ResponseParams_Data* object = static_cast<const URLLoader_QueryStatus_ResponseParams_Data*>(data);

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
          object->status, "null status field in URLLoader_QueryStatus_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->status, bounds_checker))
    return false;

  return true;
}

void URLLoader_QueryStatus_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&status, handles);
}

void URLLoader_QueryStatus_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&status, handles);
}

URLLoader_QueryStatus_ResponseParams_Data::URLLoader_QueryStatus_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
URLRequest_Data* URLRequest_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(URLRequest_Data))) URLRequest_Data();
}

// static
bool URLRequest_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLRequest_Data* object = static_cast<const URLRequest_Data*>(data);

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
          object->url, "null url field in URLRequest struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->method, "null method field in URLRequest struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams method_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->method, bounds_checker,
                                     &method_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams headers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->headers, bounds_checker,
                                     &headers_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams body_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->body, bounds_checker,
                                     &body_validate_params)) {
    return false;
  }

  return true;
}

void URLRequest_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
  mojo::internal::Encode(&method, handles);
  mojo::internal::Encode(&headers, handles);
  mojo::internal::Encode(&body, handles);
}

void URLRequest_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
  mojo::internal::Decode(&method, handles);
  mojo::internal::Decode(&headers, handles);
  mojo::internal::Decode(&body, handles);
}

URLRequest_Data::URLRequest_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
URLResponse_Data* URLResponse_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(URLResponse_Data))) URLResponse_Data();
}

// static
bool URLResponse_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLResponse_Data* object = static_cast<const URLResponse_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 96 }};

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

  if (!mojo::internal::ValidateStruct(object->error, bounds_checker))
    return false;

  const mojo::Handle body_handle = object->body;
  if (!mojo::internal::ValidateHandle(body_handle, bounds_checker))
    return false;

  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams site_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->site, bounds_checker,
                                     &site_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams status_line_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->status_line, bounds_checker,
                                     &status_line_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams headers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->headers, bounds_checker,
                                     &headers_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams mime_type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->mime_type, bounds_checker,
                                     &mime_type_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams charset_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->charset, bounds_checker,
                                     &charset_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams redirect_method_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->redirect_method, bounds_checker,
                                     &redirect_method_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams redirect_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->redirect_url, bounds_checker,
                                     &redirect_url_validate_params)) {
    return false;
  }

  const mojo::internal::ArrayValidateParams redirect_referrer_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->redirect_referrer, bounds_checker,
                                     &redirect_referrer_validate_params)) {
    return false;
  }

  return true;
}

void URLResponse_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&error, handles);
  mojo::internal::EncodeHandle(&body, handles);
  mojo::internal::Encode(&url, handles);
  mojo::internal::Encode(&site, handles);
  mojo::internal::Encode(&status_line, handles);
  mojo::internal::Encode(&headers, handles);
  mojo::internal::Encode(&mime_type, handles);
  mojo::internal::Encode(&charset, handles);
  mojo::internal::Encode(&redirect_method, handles);
  mojo::internal::Encode(&redirect_url, handles);
  mojo::internal::Encode(&redirect_referrer, handles);
}

void URLResponse_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&error, handles);
  mojo::internal::DecodeHandle(&body, handles);
  mojo::internal::Decode(&url, handles);
  mojo::internal::Decode(&site, handles);
  mojo::internal::Decode(&status_line, handles);
  mojo::internal::Decode(&headers, handles);
  mojo::internal::Decode(&mime_type, handles);
  mojo::internal::Decode(&charset, handles);
  mojo::internal::Decode(&redirect_method, handles);
  mojo::internal::Decode(&redirect_url, handles);
  mojo::internal::Decode(&redirect_referrer, handles);
}

URLResponse_Data::URLResponse_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
URLLoaderStatus_Data* URLLoaderStatus_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(URLLoaderStatus_Data))) URLLoaderStatus_Data();
}

// static
bool URLLoaderStatus_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const URLLoaderStatus_Data* object = static_cast<const URLLoaderStatus_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->error, bounds_checker))
    return false;

  return true;
}

void URLLoaderStatus_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&error, handles);
}

void URLLoaderStatus_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&error, handles);
}

URLLoaderStatus_Data::URLLoaderStatus_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
URLRequestPtr URLRequest::New() {
  URLRequestPtr rv;
  mojo::internal::StructHelper<URLRequest>::Initialize(&rv);
  return rv;
}

URLRequest::URLRequest()
    : url(),
      method("GET"),
      headers(),
      body(),
      response_body_buffer_size(0U),
      auto_follow_redirects(false),
      bypass_cache(false),
      originating_time_ticks(0) {
}

URLRequest::~URLRequest() {
}



bool URLRequest::Equals(const URLRequest& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->url, other.url))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->method, other.method))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<mojo::HttpHeaderPtr>>::Equals(this->headers, other.headers))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<mojo::ScopedDataPipeConsumerHandle>>::Equals(this->body, other.body))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->response_body_buffer_size, other.response_body_buffer_size))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->auto_follow_redirects, other.auto_follow_redirects))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->bypass_cache, other.bypass_cache))
    return false;
  if (!mojo::internal::ValueTraits<int64_t>::Equals(this->originating_time_ticks, other.originating_time_ticks))
    return false;
  return true;
}// static
URLResponsePtr URLResponse::New() {
  URLResponsePtr rv;
  mojo::internal::StructHelper<URLResponse>::Initialize(&rv);
  return rv;
}

URLResponse::URLResponse()
    : error(),
      body(),
      url(),
      site(),
      status_code(),
      status_line(),
      headers(),
      mime_type(),
      charset(),
      redirect_method(),
      redirect_url(),
      redirect_referrer() {
}

URLResponse::~URLResponse() {
}



bool URLResponse::Equals(const URLResponse& other) const {
  if (!mojo::internal::ValueTraits<mojo::NetworkErrorPtr>::Equals(this->error, other.error))
    return false;
  if (!mojo::internal::ValueTraits<mojo::ScopedDataPipeConsumerHandle>::Equals(this->body, other.body))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->url, other.url))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->site, other.site))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->status_code, other.status_code))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->status_line, other.status_line))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<mojo::HttpHeaderPtr>>::Equals(this->headers, other.headers))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->mime_type, other.mime_type))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->charset, other.charset))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->redirect_method, other.redirect_method))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->redirect_url, other.redirect_url))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->redirect_referrer, other.redirect_referrer))
    return false;
  return true;
}// static
URLLoaderStatusPtr URLLoaderStatus::New() {
  URLLoaderStatusPtr rv;
  mojo::internal::StructHelper<URLLoaderStatus>::Initialize(&rv);
  return rv;
}

URLLoaderStatus::URLLoaderStatus()
    : error(),
      is_loading(),
      content_length(),
      bytes_read() {
}

URLLoaderStatus::~URLLoaderStatus() {
}


URLLoaderStatusPtr URLLoaderStatus::Clone() const {
  URLLoaderStatusPtr rv(New());
  rv->error = error.Clone();
  rv->is_loading = is_loading;
  rv->content_length = content_length;
  rv->bytes_read = bytes_read;
  return rv;
}


bool URLLoaderStatus::Equals(const URLLoaderStatus& other) const {
  if (!mojo::internal::ValueTraits<mojo::NetworkErrorPtr>::Equals(this->error, other.error))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->is_loading, other.is_loading))
    return false;
  if (!mojo::internal::ValueTraits<int64_t>::Equals(this->content_length, other.content_length))
    return false;
  if (!mojo::internal::ValueTraits<int64_t>::Equals(this->bytes_read, other.bytes_read))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char URLLoader::Name_[] = "mojo::URLLoader";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t URLLoader::Version_;
class URLLoader_Start_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  URLLoader_Start_ForwardToCallback(
      const URLLoader::StartCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  URLLoader::StartCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(URLLoader_Start_ForwardToCallback);
};
bool URLLoader_Start_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::URLLoader_Start_ResponseParams_Data* params =
      reinterpret_cast<internal::URLLoader_Start_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  URLResponsePtr p_response{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->response.ptr, &p_response, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_response));
  return true;
}
class URLLoader_FollowRedirect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  URLLoader_FollowRedirect_ForwardToCallback(
      const URLLoader::FollowRedirectCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  URLLoader::FollowRedirectCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(URLLoader_FollowRedirect_ForwardToCallback);
};
bool URLLoader_FollowRedirect_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::URLLoader_FollowRedirect_ResponseParams_Data* params =
      reinterpret_cast<internal::URLLoader_FollowRedirect_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  URLResponsePtr p_response{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->response.ptr, &p_response, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_response));
  return true;
}
class URLLoader_QueryStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  URLLoader_QueryStatus_ForwardToCallback(
      const URLLoader::QueryStatusCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  URLLoader::QueryStatusCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(URLLoader_QueryStatus_ForwardToCallback);
};
bool URLLoader_QueryStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::URLLoader_QueryStatus_ResponseParams_Data* params =
      reinterpret_cast<internal::URLLoader_QueryStatus_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  URLLoaderStatusPtr p_status{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->status.ptr, &p_status, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_status));
  return true;
}

URLLoaderProxy::URLLoaderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void URLLoaderProxy::Start(
    URLRequestPtr in_request, const StartCallback& callback) {
  size_t size = sizeof(internal::URLLoader_Start_Params_Data);
  size += GetSerializedSize_(in_request);
  mojo::internal::RequestMessageBuilder builder(internal::kURLLoader_Start_Name, size);

  internal::URLLoader_Start_Params_Data* params =
      internal::URLLoader_Start_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_request), builder.buffer(), &params->request.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->request.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in URLLoader.Start request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new URLLoader_Start_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void URLLoaderProxy::FollowRedirect(
    const FollowRedirectCallback& callback) {
  size_t size = sizeof(internal::URLLoader_FollowRedirect_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kURLLoader_FollowRedirect_Name, size);

  internal::URLLoader_FollowRedirect_Params_Data* params =
      internal::URLLoader_FollowRedirect_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new URLLoader_FollowRedirect_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void URLLoaderProxy::QueryStatus(
    const QueryStatusCallback& callback) {
  size_t size = sizeof(internal::URLLoader_QueryStatus_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kURLLoader_QueryStatus_Name, size);

  internal::URLLoader_QueryStatus_Params_Data* params =
      internal::URLLoader_QueryStatus_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new URLLoader_QueryStatus_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class URLLoader_Start_ProxyToResponder
    : public URLLoader::StartCallback::Runnable {
 public:
  ~URLLoader_Start_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "URLLoader::Start(std::move(p_request), callback) "
        "was never run.";
  }

  URLLoader_Start_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(URLResponsePtr in_response) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(URLLoader_Start_ProxyToResponder);
};
void URLLoader_Start_ProxyToResponder::Run(
    URLResponsePtr in_response) const {
  size_t size = sizeof(internal::URLLoader_Start_ResponseParams_Data);
  size += GetSerializedSize_(in_response);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kURLLoader_Start_Name, size, request_id_);
  internal::URLLoader_Start_ResponseParams_Data* params =
      internal::URLLoader_Start_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_response), builder.buffer(), &params->response.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->response.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in URLLoader.Start response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class URLLoader_FollowRedirect_ProxyToResponder
    : public URLLoader::FollowRedirectCallback::Runnable {
 public:
  ~URLLoader_FollowRedirect_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "URLLoader::FollowRedirect(callback) "
        "was never run.";
  }

  URLLoader_FollowRedirect_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(URLResponsePtr in_response) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(URLLoader_FollowRedirect_ProxyToResponder);
};
void URLLoader_FollowRedirect_ProxyToResponder::Run(
    URLResponsePtr in_response) const {
  size_t size = sizeof(internal::URLLoader_FollowRedirect_ResponseParams_Data);
  size += GetSerializedSize_(in_response);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kURLLoader_FollowRedirect_Name, size, request_id_);
  internal::URLLoader_FollowRedirect_ResponseParams_Data* params =
      internal::URLLoader_FollowRedirect_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_response), builder.buffer(), &params->response.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->response.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in URLLoader.FollowRedirect response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class URLLoader_QueryStatus_ProxyToResponder
    : public URLLoader::QueryStatusCallback::Runnable {
 public:
  ~URLLoader_QueryStatus_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "URLLoader::QueryStatus(callback) "
        "was never run.";
  }

  URLLoader_QueryStatus_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(URLLoaderStatusPtr in_status) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(URLLoader_QueryStatus_ProxyToResponder);
};
void URLLoader_QueryStatus_ProxyToResponder::Run(
    URLLoaderStatusPtr in_status) const {
  size_t size = sizeof(internal::URLLoader_QueryStatus_ResponseParams_Data);
  size += GetSerializedSize_(in_status);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kURLLoader_QueryStatus_Name, size, request_id_);
  internal::URLLoader_QueryStatus_ResponseParams_Data* params =
      internal::URLLoader_QueryStatus_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_status), builder.buffer(), &params->status.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->status.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null status in URLLoader.QueryStatus response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

URLLoaderStub::URLLoaderStub()
    : sink_(nullptr),
      control_message_handler_(URLLoader::Version_) {
}

URLLoaderStub::~URLLoaderStub() {}

bool URLLoaderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kURLLoader_Start_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.URLLoader.Start", __FILE__, __LINE__);
      break;
    }
    case internal::kURLLoader_FollowRedirect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.URLLoader.FollowRedirect", __FILE__, __LINE__);
      break;
    }
    case internal::kURLLoader_QueryStatus_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.URLLoader.QueryStatus", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool URLLoaderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kURLLoader_Start_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::URLLoader::Start", __FILE__, __LINE__);
      internal::URLLoader_Start_Params_Data* params =
          reinterpret_cast<internal::URLLoader_Start_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      URLRequestPtr p_request{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->request.ptr, &p_request, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      URLLoader::StartCallback::Runnable* runnable =
          new URLLoader_Start_ProxyToResponder(
              message->request_id(), responder);
      URLLoader::StartCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "URLLoader::Start");
      sink_->Start(std::move(p_request), callback);
      return true;
    }
    case internal::kURLLoader_FollowRedirect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::URLLoader::FollowRedirect", __FILE__, __LINE__);
      internal::URLLoader_FollowRedirect_Params_Data* params =
          reinterpret_cast<internal::URLLoader_FollowRedirect_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      URLLoader::FollowRedirectCallback::Runnable* runnable =
          new URLLoader_FollowRedirect_ProxyToResponder(
              message->request_id(), responder);
      URLLoader::FollowRedirectCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "URLLoader::FollowRedirect");
      sink_->FollowRedirect(callback);
      return true;
    }
    case internal::kURLLoader_QueryStatus_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::URLLoader::QueryStatus", __FILE__, __LINE__);
      internal::URLLoader_QueryStatus_Params_Data* params =
          reinterpret_cast<internal::URLLoader_QueryStatus_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      URLLoader::QueryStatusCallback::Runnable* runnable =
          new URLLoader_QueryStatus_ProxyToResponder(
              message->request_id(), responder);
      URLLoader::QueryStatusCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "URLLoader::QueryStatus");
      sink_->QueryStatus(callback);
      return true;
    }
  }
  return false;
}

URLLoaderRequestValidator::URLLoaderRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool URLLoaderRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kURLLoader_Start_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_Start_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kURLLoader_FollowRedirect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_FollowRedirect_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kURLLoader_QueryStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_QueryStatus_Params_Data>(message)) {
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

URLLoaderResponseValidator::URLLoaderResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool URLLoaderResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kURLLoader_Start_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_Start_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kURLLoader_FollowRedirect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_FollowRedirect_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kURLLoader_QueryStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::URLLoader_QueryStatus_ResponseParams_Data>(message)) {
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
size_t GetSerializedSize_(const URLRequestPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::URLRequest_Data);
  size += GetSerializedSize_(input->url);
  size += GetSerializedSize_(input->method);
  size += GetSerializedSize_(input->headers);
  size += GetSerializedSize_(input->body);
  return size;
}

void Serialize_(URLRequestPtr input, mojo::internal::Buffer* buf,
                internal::URLRequest_Data** output) {
  if (input) {
    internal::URLRequest_Data* result =
        internal::URLRequest_Data::New(buf);
    Serialize_(std::move(input->url), buf, &result->url.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->url.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null url in URLRequest struct");
    Serialize_(std::move(input->method), buf, &result->method.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->method.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method in URLRequest struct");
    const mojo::internal::ArrayValidateParams headers_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->headers), buf,
        &result->headers.ptr, &headers_validate_params);
    const mojo::internal::ArrayValidateParams body_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->body), buf,
        &result->body.ptr, &body_validate_params);
    result->response_body_buffer_size = input->response_body_buffer_size;
    result->auto_follow_redirects = input->auto_follow_redirects;
    result->bypass_cache = input->bypass_cache;
    result->originating_time_ticks = input->originating_time_ticks;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::URLRequest_Data* input,
                  URLRequestPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    URLRequestPtr result(URLRequest::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->url.ptr, &result->url, context))
        success = false;
      if (!Deserialize_(input->method.ptr, &result->method, context))
        success = false;
      if (!Deserialize_(input->headers.ptr, &result->headers, context))
        success = false;
      if (!Deserialize_(input->body.ptr, &result->body, context))
        success = false;
      result->response_body_buffer_size = input->response_body_buffer_size;
      result->auto_follow_redirects = input->auto_follow_redirects;
      result->bypass_cache = input->bypass_cache;
      result->originating_time_ticks = input->originating_time_ticks;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

URLRequest_Reader::URLRequest_Reader(
    internal::URLRequest_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const URLResponsePtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::URLResponse_Data);
  size += GetSerializedSize_(input->error);
  size += GetSerializedSize_(input->url);
  size += GetSerializedSize_(input->site);
  size += GetSerializedSize_(input->status_line);
  size += GetSerializedSize_(input->headers);
  size += GetSerializedSize_(input->mime_type);
  size += GetSerializedSize_(input->charset);
  size += GetSerializedSize_(input->redirect_method);
  size += GetSerializedSize_(input->redirect_url);
  size += GetSerializedSize_(input->redirect_referrer);
  return size;
}

void Serialize_(URLResponsePtr input, mojo::internal::Buffer* buf,
                internal::URLResponse_Data** output) {
  if (input) {
    internal::URLResponse_Data* result =
        internal::URLResponse_Data::New(buf);
    Serialize_(std::move(input->error), buf, &result->error.ptr);
    result->body = input->body.release();
    Serialize_(std::move(input->url), buf, &result->url.ptr);
    Serialize_(std::move(input->site), buf, &result->site.ptr);
    result->status_code = input->status_code;
    Serialize_(std::move(input->status_line), buf, &result->status_line.ptr);
    const mojo::internal::ArrayValidateParams headers_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->headers), buf,
        &result->headers.ptr, &headers_validate_params);
    Serialize_(std::move(input->mime_type), buf, &result->mime_type.ptr);
    Serialize_(std::move(input->charset), buf, &result->charset.ptr);
    Serialize_(std::move(input->redirect_method), buf, &result->redirect_method.ptr);
    Serialize_(std::move(input->redirect_url), buf, &result->redirect_url.ptr);
    Serialize_(std::move(input->redirect_referrer), buf, &result->redirect_referrer.ptr);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::URLResponse_Data* input,
                  URLResponsePtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    URLResponsePtr result(URLResponse::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->error.ptr, &result->error, context))
        success = false;
      result->body.reset(mojo::internal::FetchAndReset(&input->body));
      if (!Deserialize_(input->url.ptr, &result->url, context))
        success = false;
      if (!Deserialize_(input->site.ptr, &result->site, context))
        success = false;
      result->status_code = input->status_code;
      if (!Deserialize_(input->status_line.ptr, &result->status_line, context))
        success = false;
      if (!Deserialize_(input->headers.ptr, &result->headers, context))
        success = false;
      if (!Deserialize_(input->mime_type.ptr, &result->mime_type, context))
        success = false;
      if (!Deserialize_(input->charset.ptr, &result->charset, context))
        success = false;
      if (!Deserialize_(input->redirect_method.ptr, &result->redirect_method, context))
        success = false;
      if (!Deserialize_(input->redirect_url.ptr, &result->redirect_url, context))
        success = false;
      if (!Deserialize_(input->redirect_referrer.ptr, &result->redirect_referrer, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

URLResponse_Reader::URLResponse_Reader(
    internal::URLResponse_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
mojo::NetworkError_Reader URLResponse_Reader::error() const {
  return mojo::NetworkError_Reader(data_->error.ptr, context_);
}
size_t GetSerializedSize_(const URLLoaderStatusPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::URLLoaderStatus_Data);
  size += GetSerializedSize_(input->error);
  return size;
}

void Serialize_(URLLoaderStatusPtr input, mojo::internal::Buffer* buf,
                internal::URLLoaderStatus_Data** output) {
  if (input) {
    internal::URLLoaderStatus_Data* result =
        internal::URLLoaderStatus_Data::New(buf);
    Serialize_(std::move(input->error), buf, &result->error.ptr);
    result->is_loading = input->is_loading;
    result->content_length = input->content_length;
    result->bytes_read = input->bytes_read;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::URLLoaderStatus_Data* input,
                  URLLoaderStatusPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    URLLoaderStatusPtr result(URLLoaderStatus::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->error.ptr, &result->error, context))
        success = false;
      result->is_loading = input->is_loading;
      result->content_length = input->content_length;
      result->bytes_read = input->bytes_read;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

URLLoaderStatus_Reader::URLLoaderStatus_Reader(
    internal::URLLoaderStatus_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
mojo::NetworkError_Reader URLLoaderStatus_Reader::error() const {
  return mojo::NetworkError_Reader(data_->error.ptr, context_);
}
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif