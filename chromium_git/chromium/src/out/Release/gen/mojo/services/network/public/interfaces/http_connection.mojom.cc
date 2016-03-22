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

#include "mojo/services/network/public/interfaces/http_connection.mojom.h"

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
const uint32_t kHttpConnection_SetSendBufferSize_Name = 0;

class HttpConnection_SetSendBufferSize_Params_Data {
 public:
  static HttpConnection_SetSendBufferSize_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t size;
  uint8_t padfinal_[4];

 private:
  HttpConnection_SetSendBufferSize_Params_Data();
  ~HttpConnection_SetSendBufferSize_Params_Data() = delete;
};
static_assert(sizeof(HttpConnection_SetSendBufferSize_Params_Data) == 16,
              "Bad sizeof(HttpConnection_SetSendBufferSize_Params_Data)");

// static
HttpConnection_SetSendBufferSize_Params_Data* HttpConnection_SetSendBufferSize_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HttpConnection_SetSendBufferSize_Params_Data))) HttpConnection_SetSendBufferSize_Params_Data();
}

// static
bool HttpConnection_SetSendBufferSize_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HttpConnection_SetSendBufferSize_Params_Data* object = static_cast<const HttpConnection_SetSendBufferSize_Params_Data*>(data);

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

void HttpConnection_SetSendBufferSize_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void HttpConnection_SetSendBufferSize_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

HttpConnection_SetSendBufferSize_Params_Data::HttpConnection_SetSendBufferSize_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class HttpConnection_SetSendBufferSize_ResponseParams_Data {
 public:
  static HttpConnection_SetSendBufferSize_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;

 private:
  HttpConnection_SetSendBufferSize_ResponseParams_Data();
  ~HttpConnection_SetSendBufferSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(HttpConnection_SetSendBufferSize_ResponseParams_Data) == 16,
              "Bad sizeof(HttpConnection_SetSendBufferSize_ResponseParams_Data)");

// static
HttpConnection_SetSendBufferSize_ResponseParams_Data* HttpConnection_SetSendBufferSize_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HttpConnection_SetSendBufferSize_ResponseParams_Data))) HttpConnection_SetSendBufferSize_ResponseParams_Data();
}

// static
bool HttpConnection_SetSendBufferSize_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HttpConnection_SetSendBufferSize_ResponseParams_Data* object = static_cast<const HttpConnection_SetSendBufferSize_ResponseParams_Data*>(data);

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
          object->result, "null result field in HttpConnection_SetSendBufferSize_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  return true;
}

void HttpConnection_SetSendBufferSize_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
}

void HttpConnection_SetSendBufferSize_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
}

HttpConnection_SetSendBufferSize_ResponseParams_Data::HttpConnection_SetSendBufferSize_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kHttpConnection_SetReceiveBufferSize_Name = 1;

class HttpConnection_SetReceiveBufferSize_Params_Data {
 public:
  static HttpConnection_SetReceiveBufferSize_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t size;
  uint8_t padfinal_[4];

 private:
  HttpConnection_SetReceiveBufferSize_Params_Data();
  ~HttpConnection_SetReceiveBufferSize_Params_Data() = delete;
};
static_assert(sizeof(HttpConnection_SetReceiveBufferSize_Params_Data) == 16,
              "Bad sizeof(HttpConnection_SetReceiveBufferSize_Params_Data)");

// static
HttpConnection_SetReceiveBufferSize_Params_Data* HttpConnection_SetReceiveBufferSize_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HttpConnection_SetReceiveBufferSize_Params_Data))) HttpConnection_SetReceiveBufferSize_Params_Data();
}

// static
bool HttpConnection_SetReceiveBufferSize_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HttpConnection_SetReceiveBufferSize_Params_Data* object = static_cast<const HttpConnection_SetReceiveBufferSize_Params_Data*>(data);

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

void HttpConnection_SetReceiveBufferSize_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void HttpConnection_SetReceiveBufferSize_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

HttpConnection_SetReceiveBufferSize_Params_Data::HttpConnection_SetReceiveBufferSize_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class HttpConnection_SetReceiveBufferSize_ResponseParams_Data {
 public:
  static HttpConnection_SetReceiveBufferSize_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;

 private:
  HttpConnection_SetReceiveBufferSize_ResponseParams_Data();
  ~HttpConnection_SetReceiveBufferSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(HttpConnection_SetReceiveBufferSize_ResponseParams_Data) == 16,
              "Bad sizeof(HttpConnection_SetReceiveBufferSize_ResponseParams_Data)");

// static
HttpConnection_SetReceiveBufferSize_ResponseParams_Data* HttpConnection_SetReceiveBufferSize_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HttpConnection_SetReceiveBufferSize_ResponseParams_Data))) HttpConnection_SetReceiveBufferSize_ResponseParams_Data();
}

// static
bool HttpConnection_SetReceiveBufferSize_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HttpConnection_SetReceiveBufferSize_ResponseParams_Data* object = static_cast<const HttpConnection_SetReceiveBufferSize_ResponseParams_Data*>(data);

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
          object->result, "null result field in HttpConnection_SetReceiveBufferSize_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  return true;
}

void HttpConnection_SetReceiveBufferSize_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
}

void HttpConnection_SetReceiveBufferSize_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
}

HttpConnection_SetReceiveBufferSize_ResponseParams_Data::HttpConnection_SetReceiveBufferSize_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kHttpConnectionDelegate_OnReceivedRequest_Name = 0;

class HttpConnectionDelegate_OnReceivedRequest_Params_Data {
 public:
  static HttpConnectionDelegate_OnReceivedRequest_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::HttpRequest_Data> request;

 private:
  HttpConnectionDelegate_OnReceivedRequest_Params_Data();
  ~HttpConnectionDelegate_OnReceivedRequest_Params_Data() = delete;
};
static_assert(sizeof(HttpConnectionDelegate_OnReceivedRequest_Params_Data) == 16,
              "Bad sizeof(HttpConnectionDelegate_OnReceivedRequest_Params_Data)");

// static
HttpConnectionDelegate_OnReceivedRequest_Params_Data* HttpConnectionDelegate_OnReceivedRequest_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HttpConnectionDelegate_OnReceivedRequest_Params_Data))) HttpConnectionDelegate_OnReceivedRequest_Params_Data();
}

// static
bool HttpConnectionDelegate_OnReceivedRequest_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HttpConnectionDelegate_OnReceivedRequest_Params_Data* object = static_cast<const HttpConnectionDelegate_OnReceivedRequest_Params_Data*>(data);

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
          object->request, "null request field in HttpConnectionDelegate_OnReceivedRequest_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request, bounds_checker))
    return false;

  return true;
}

void HttpConnectionDelegate_OnReceivedRequest_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&request, handles);
}

void HttpConnectionDelegate_OnReceivedRequest_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&request, handles);
}

HttpConnectionDelegate_OnReceivedRequest_Params_Data::HttpConnectionDelegate_OnReceivedRequest_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data {
 public:
  static HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::HttpResponse_Data> response;

 private:
  HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data();
  ~HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data() = delete;
};
static_assert(sizeof(HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data) == 16,
              "Bad sizeof(HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data)");

// static
HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data* HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data))) HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data();
}

// static
bool HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data* object = static_cast<const HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data*>(data);

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
          object->response, "null response field in HttpConnectionDelegate_OnReceivedRequest_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response, bounds_checker))
    return false;

  return true;
}

void HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&response, handles);
}

void HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&response, handles);
}

HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data::HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kHttpConnectionDelegate_OnReceivedWebSocketRequest_Name = 1;

class HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data {
 public:
  static HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::HttpRequest_Data> request;

 private:
  HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data();
  ~HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data() = delete;
};
static_assert(sizeof(HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data) == 16,
              "Bad sizeof(HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data)");

// static
HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data* HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data))) HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data();
}

// static
bool HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data* object = static_cast<const HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data*>(data);

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
          object->request, "null request field in HttpConnectionDelegate_OnReceivedWebSocketRequest_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request, bounds_checker))
    return false;

  return true;
}

void HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&request, handles);
}

void HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&request, handles);
}

HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data::HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data {
 public:
  static HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::MessagePipeHandle web_socket;
  mojo::DataPipeConsumerHandle send_stream;
  mojo::internal::Interface_Data client;

 private:
  HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data();
  ~HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data() = delete;
};
static_assert(sizeof(HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data) == 24,
              "Bad sizeof(HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data)");

// static
HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data* HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data))) HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data();
}

// static
bool HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data* object = static_cast<const HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data*>(data);

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

  const mojo::Handle web_socket_handle = object->web_socket;
  if (!mojo::internal::ValidateHandle(web_socket_handle, bounds_checker))
    return false;

  const mojo::Handle send_stream_handle = object->send_stream;
  if (!mojo::internal::ValidateHandle(send_stream_handle, bounds_checker))
    return false;

  const mojo::Handle client_handle = object->client.handle;
  if (!mojo::internal::ValidateHandle(client_handle, bounds_checker))
    return false;

  return true;
}

void HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&web_socket, handles);
  mojo::internal::EncodeHandle(&send_stream, handles);
  mojo::internal::EncodeHandle(&client, handles);
}

void HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&web_socket, handles);
  mojo::internal::DecodeHandle(&send_stream, handles);
  mojo::internal::DecodeHandle(&client, handles);
}

HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data::HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char HttpConnection::Name_[] = "mojo::HttpConnection";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t HttpConnection::Version_;
class HttpConnection_SetSendBufferSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HttpConnection_SetSendBufferSize_ForwardToCallback(
      const HttpConnection::SetSendBufferSizeCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HttpConnection::SetSendBufferSizeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpConnection_SetSendBufferSize_ForwardToCallback);
};
bool HttpConnection_SetSendBufferSize_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::HttpConnection_SetSendBufferSize_ResponseParams_Data* params =
      reinterpret_cast<internal::HttpConnection_SetSendBufferSize_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result));
  return true;
}
class HttpConnection_SetReceiveBufferSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HttpConnection_SetReceiveBufferSize_ForwardToCallback(
      const HttpConnection::SetReceiveBufferSizeCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HttpConnection::SetReceiveBufferSizeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpConnection_SetReceiveBufferSize_ForwardToCallback);
};
bool HttpConnection_SetReceiveBufferSize_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::HttpConnection_SetReceiveBufferSize_ResponseParams_Data* params =
      reinterpret_cast<internal::HttpConnection_SetReceiveBufferSize_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result));
  return true;
}

HttpConnectionProxy::HttpConnectionProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void HttpConnectionProxy::SetSendBufferSize(
    uint32_t in_size, const SetSendBufferSizeCallback& callback) {
  size_t size = sizeof(internal::HttpConnection_SetSendBufferSize_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kHttpConnection_SetSendBufferSize_Name, size);

  internal::HttpConnection_SetSendBufferSize_Params_Data* params =
      internal::HttpConnection_SetSendBufferSize_Params_Data::New(builder.buffer());
  params->size = in_size;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new HttpConnection_SetSendBufferSize_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void HttpConnectionProxy::SetReceiveBufferSize(
    uint32_t in_size, const SetReceiveBufferSizeCallback& callback) {
  size_t size = sizeof(internal::HttpConnection_SetReceiveBufferSize_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kHttpConnection_SetReceiveBufferSize_Name, size);

  internal::HttpConnection_SetReceiveBufferSize_Params_Data* params =
      internal::HttpConnection_SetReceiveBufferSize_Params_Data::New(builder.buffer());
  params->size = in_size;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new HttpConnection_SetReceiveBufferSize_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class HttpConnection_SetSendBufferSize_ProxyToResponder
    : public HttpConnection::SetSendBufferSizeCallback::Runnable {
 public:
  ~HttpConnection_SetSendBufferSize_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "HttpConnection::SetSendBufferSize(p_size, callback) "
        "was never run.";
  }

  HttpConnection_SetSendBufferSize_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpConnection_SetSendBufferSize_ProxyToResponder);
};
void HttpConnection_SetSendBufferSize_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result) const {
  size_t size = sizeof(internal::HttpConnection_SetSendBufferSize_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kHttpConnection_SetSendBufferSize_Name, size, request_id_);
  internal::HttpConnection_SetSendBufferSize_ResponseParams_Data* params =
      internal::HttpConnection_SetSendBufferSize_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in HttpConnection.SetSendBufferSize response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class HttpConnection_SetReceiveBufferSize_ProxyToResponder
    : public HttpConnection::SetReceiveBufferSizeCallback::Runnable {
 public:
  ~HttpConnection_SetReceiveBufferSize_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "HttpConnection::SetReceiveBufferSize(p_size, callback) "
        "was never run.";
  }

  HttpConnection_SetReceiveBufferSize_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpConnection_SetReceiveBufferSize_ProxyToResponder);
};
void HttpConnection_SetReceiveBufferSize_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result) const {
  size_t size = sizeof(internal::HttpConnection_SetReceiveBufferSize_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kHttpConnection_SetReceiveBufferSize_Name, size, request_id_);
  internal::HttpConnection_SetReceiveBufferSize_ResponseParams_Data* params =
      internal::HttpConnection_SetReceiveBufferSize_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in HttpConnection.SetReceiveBufferSize response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

HttpConnectionStub::HttpConnectionStub()
    : sink_(nullptr),
      control_message_handler_(HttpConnection::Version_) {
}

HttpConnectionStub::~HttpConnectionStub() {}

bool HttpConnectionStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kHttpConnection_SetSendBufferSize_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.HttpConnection.SetSendBufferSize", __FILE__, __LINE__);
      break;
    }
    case internal::kHttpConnection_SetReceiveBufferSize_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.HttpConnection.SetReceiveBufferSize", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool HttpConnectionStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kHttpConnection_SetSendBufferSize_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::HttpConnection::SetSendBufferSize", __FILE__, __LINE__);
      internal::HttpConnection_SetSendBufferSize_Params_Data* params =
          reinterpret_cast<internal::HttpConnection_SetSendBufferSize_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_size{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_size = params->size;
      } while (false);
      if (!success)
        return false;
      HttpConnection::SetSendBufferSizeCallback::Runnable* runnable =
          new HttpConnection_SetSendBufferSize_ProxyToResponder(
              message->request_id(), responder);
      HttpConnection::SetSendBufferSizeCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "HttpConnection::SetSendBufferSize");
      sink_->SetSendBufferSize(p_size, callback);
      return true;
    }
    case internal::kHttpConnection_SetReceiveBufferSize_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::HttpConnection::SetReceiveBufferSize", __FILE__, __LINE__);
      internal::HttpConnection_SetReceiveBufferSize_Params_Data* params =
          reinterpret_cast<internal::HttpConnection_SetReceiveBufferSize_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_size{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_size = params->size;
      } while (false);
      if (!success)
        return false;
      HttpConnection::SetReceiveBufferSizeCallback::Runnable* runnable =
          new HttpConnection_SetReceiveBufferSize_ProxyToResponder(
              message->request_id(), responder);
      HttpConnection::SetReceiveBufferSizeCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "HttpConnection::SetReceiveBufferSize");
      sink_->SetReceiveBufferSize(p_size, callback);
      return true;
    }
  }
  return false;
}

HttpConnectionRequestValidator::HttpConnectionRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool HttpConnectionRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kHttpConnection_SetSendBufferSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::HttpConnection_SetSendBufferSize_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kHttpConnection_SetReceiveBufferSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::HttpConnection_SetReceiveBufferSize_Params_Data>(message)) {
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

HttpConnectionResponseValidator::HttpConnectionResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool HttpConnectionResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kHttpConnection_SetSendBufferSize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HttpConnection_SetSendBufferSize_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kHttpConnection_SetReceiveBufferSize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HttpConnection_SetReceiveBufferSize_ResponseParams_Data>(message)) {
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
MOJO_STATIC_CONST_MEMBER_DEFINITION const char HttpConnectionDelegate::Name_[] = "mojo::HttpConnectionDelegate";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t HttpConnectionDelegate::Version_;
class HttpConnectionDelegate_OnReceivedRequest_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HttpConnectionDelegate_OnReceivedRequest_ForwardToCallback(
      const HttpConnectionDelegate::OnReceivedRequestCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HttpConnectionDelegate::OnReceivedRequestCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpConnectionDelegate_OnReceivedRequest_ForwardToCallback);
};
bool HttpConnectionDelegate_OnReceivedRequest_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data* params =
      reinterpret_cast<internal::HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::HttpResponsePtr p_response{};
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
class HttpConnectionDelegate_OnReceivedWebSocketRequest_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  HttpConnectionDelegate_OnReceivedWebSocketRequest_ForwardToCallback(
      const HttpConnectionDelegate::OnReceivedWebSocketRequestCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  HttpConnectionDelegate::OnReceivedWebSocketRequestCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpConnectionDelegate_OnReceivedWebSocketRequest_ForwardToCallback);
};
bool HttpConnectionDelegate_OnReceivedWebSocketRequest_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data* params =
      reinterpret_cast<internal::HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::InterfaceRequest<mojo::WebSocket> p_web_socket{};
  mojo::ScopedDataPipeConsumerHandle p_send_stream{};
  mojo::WebSocketClientPtr p_client{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_web_socket.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->web_socket)));
    p_send_stream.reset(mojo::internal::FetchAndReset(&params->send_stream));
    mojo::internal::InterfaceDataToPointer(&params->client, &p_client);
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_web_socket), std::move(p_send_stream), std::move(p_client));
  return true;
}

HttpConnectionDelegateProxy::HttpConnectionDelegateProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void HttpConnectionDelegateProxy::OnReceivedRequest(
    mojo::HttpRequestPtr in_request, const OnReceivedRequestCallback& callback) {
  size_t size = sizeof(internal::HttpConnectionDelegate_OnReceivedRequest_Params_Data);
  size += GetSerializedSize_(in_request);
  mojo::internal::RequestMessageBuilder builder(internal::kHttpConnectionDelegate_OnReceivedRequest_Name, size);

  internal::HttpConnectionDelegate_OnReceivedRequest_Params_Data* params =
      internal::HttpConnectionDelegate_OnReceivedRequest_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_request), builder.buffer(), &params->request.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->request.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in HttpConnectionDelegate.OnReceivedRequest request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new HttpConnectionDelegate_OnReceivedRequest_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void HttpConnectionDelegateProxy::OnReceivedWebSocketRequest(
    mojo::HttpRequestPtr in_request, const OnReceivedWebSocketRequestCallback& callback) {
  size_t size = sizeof(internal::HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data);
  size += GetSerializedSize_(in_request);
  mojo::internal::RequestMessageBuilder builder(internal::kHttpConnectionDelegate_OnReceivedWebSocketRequest_Name, size);

  internal::HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data* params =
      internal::HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_request), builder.buffer(), &params->request.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->request.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in HttpConnectionDelegate.OnReceivedWebSocketRequest request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new HttpConnectionDelegate_OnReceivedWebSocketRequest_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class HttpConnectionDelegate_OnReceivedRequest_ProxyToResponder
    : public HttpConnectionDelegate::OnReceivedRequestCallback::Runnable {
 public:
  ~HttpConnectionDelegate_OnReceivedRequest_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "HttpConnectionDelegate::OnReceivedRequest(std::move(p_request), callback) "
        "was never run.";
  }

  HttpConnectionDelegate_OnReceivedRequest_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::HttpResponsePtr in_response) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpConnectionDelegate_OnReceivedRequest_ProxyToResponder);
};
void HttpConnectionDelegate_OnReceivedRequest_ProxyToResponder::Run(
    mojo::HttpResponsePtr in_response) const {
  size_t size = sizeof(internal::HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data);
  size += GetSerializedSize_(in_response);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kHttpConnectionDelegate_OnReceivedRequest_Name, size, request_id_);
  internal::HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data* params =
      internal::HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_response), builder.buffer(), &params->response.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->response.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in HttpConnectionDelegate.OnReceivedRequest response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class HttpConnectionDelegate_OnReceivedWebSocketRequest_ProxyToResponder
    : public HttpConnectionDelegate::OnReceivedWebSocketRequestCallback::Runnable {
 public:
  ~HttpConnectionDelegate_OnReceivedWebSocketRequest_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "HttpConnectionDelegate::OnReceivedWebSocketRequest(std::move(p_request), callback) "
        "was never run.";
  }

  HttpConnectionDelegate_OnReceivedWebSocketRequest_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::InterfaceRequest<mojo::WebSocket> in_web_socket, mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::WebSocketClientPtr in_client) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(HttpConnectionDelegate_OnReceivedWebSocketRequest_ProxyToResponder);
};
void HttpConnectionDelegate_OnReceivedWebSocketRequest_ProxyToResponder::Run(
    mojo::InterfaceRequest<mojo::WebSocket> in_web_socket, mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::WebSocketClientPtr in_client) const {
  size_t size = sizeof(internal::HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kHttpConnectionDelegate_OnReceivedWebSocketRequest_Name, size, request_id_);
  internal::HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data* params =
      internal::HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data::New(builder.buffer());
  params->web_socket = in_web_socket.PassMessagePipe().release();
  params->send_stream = in_send_stream.release();
  mojo::internal::InterfacePointerToData(std::move(in_client), &params->client);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

HttpConnectionDelegateStub::HttpConnectionDelegateStub()
    : sink_(nullptr),
      control_message_handler_(HttpConnectionDelegate::Version_) {
}

HttpConnectionDelegateStub::~HttpConnectionDelegateStub() {}

bool HttpConnectionDelegateStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kHttpConnectionDelegate_OnReceivedRequest_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.HttpConnectionDelegate.OnReceivedRequest", __FILE__, __LINE__);
      break;
    }
    case internal::kHttpConnectionDelegate_OnReceivedWebSocketRequest_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.HttpConnectionDelegate.OnReceivedWebSocketRequest", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool HttpConnectionDelegateStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kHttpConnectionDelegate_OnReceivedRequest_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::HttpConnectionDelegate::OnReceivedRequest", __FILE__, __LINE__);
      internal::HttpConnectionDelegate_OnReceivedRequest_Params_Data* params =
          reinterpret_cast<internal::HttpConnectionDelegate_OnReceivedRequest_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::HttpRequestPtr p_request{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->request.ptr, &p_request, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      HttpConnectionDelegate::OnReceivedRequestCallback::Runnable* runnable =
          new HttpConnectionDelegate_OnReceivedRequest_ProxyToResponder(
              message->request_id(), responder);
      HttpConnectionDelegate::OnReceivedRequestCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "HttpConnectionDelegate::OnReceivedRequest");
      sink_->OnReceivedRequest(std::move(p_request), callback);
      return true;
    }
    case internal::kHttpConnectionDelegate_OnReceivedWebSocketRequest_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::HttpConnectionDelegate::OnReceivedWebSocketRequest", __FILE__, __LINE__);
      internal::HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data* params =
          reinterpret_cast<internal::HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::HttpRequestPtr p_request{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->request.ptr, &p_request, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      HttpConnectionDelegate::OnReceivedWebSocketRequestCallback::Runnable* runnable =
          new HttpConnectionDelegate_OnReceivedWebSocketRequest_ProxyToResponder(
              message->request_id(), responder);
      HttpConnectionDelegate::OnReceivedWebSocketRequestCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "HttpConnectionDelegate::OnReceivedWebSocketRequest");
      sink_->OnReceivedWebSocketRequest(std::move(p_request), callback);
      return true;
    }
  }
  return false;
}

HttpConnectionDelegateRequestValidator::HttpConnectionDelegateRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool HttpConnectionDelegateRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kHttpConnectionDelegate_OnReceivedRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::HttpConnectionDelegate_OnReceivedRequest_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kHttpConnectionDelegate_OnReceivedWebSocketRequest_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::HttpConnectionDelegate_OnReceivedWebSocketRequest_Params_Data>(message)) {
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

HttpConnectionDelegateResponseValidator::HttpConnectionDelegateResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool HttpConnectionDelegateResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kHttpConnectionDelegate_OnReceivedRequest_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HttpConnectionDelegate_OnReceivedRequest_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kHttpConnectionDelegate_OnReceivedWebSocketRequest_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::HttpConnectionDelegate_OnReceivedWebSocketRequest_ResponseParams_Data>(message)) {
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
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif