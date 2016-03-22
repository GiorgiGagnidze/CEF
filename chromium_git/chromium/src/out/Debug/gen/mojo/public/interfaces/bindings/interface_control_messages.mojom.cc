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

#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

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

#pragma pack(pop)

}  // namespace


// static
RunMessageParams_Data* RunMessageParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(RunMessageParams_Data))) RunMessageParams_Data();
}

// static
bool RunMessageParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RunMessageParams_Data* object = static_cast<const RunMessageParams_Data*>(data);

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
          object->query_version, "null query_version field in RunMessageParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->query_version, bounds_checker))
    return false;

  return true;
}

void RunMessageParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&query_version, handles);
}

void RunMessageParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&query_version, handles);
}

RunMessageParams_Data::RunMessageParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
RunResponseMessageParams_Data* RunResponseMessageParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(RunResponseMessageParams_Data))) RunResponseMessageParams_Data();
}

// static
bool RunResponseMessageParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RunResponseMessageParams_Data* object = static_cast<const RunResponseMessageParams_Data*>(data);

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
          object->query_version_result, "null query_version_result field in RunResponseMessageParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->query_version_result, bounds_checker))
    return false;

  return true;
}

void RunResponseMessageParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&query_version_result, handles);
}

void RunResponseMessageParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&query_version_result, handles);
}

RunResponseMessageParams_Data::RunResponseMessageParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
QueryVersion_Data* QueryVersion_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(QueryVersion_Data))) QueryVersion_Data();
}

// static
bool QueryVersion_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const QueryVersion_Data* object = static_cast<const QueryVersion_Data*>(data);

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

void QueryVersion_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void QueryVersion_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

QueryVersion_Data::QueryVersion_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
QueryVersionResult_Data* QueryVersionResult_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(QueryVersionResult_Data))) QueryVersionResult_Data();
}

// static
bool QueryVersionResult_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const QueryVersionResult_Data* object = static_cast<const QueryVersionResult_Data*>(data);

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

void QueryVersionResult_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void QueryVersionResult_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

QueryVersionResult_Data::QueryVersionResult_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
RunOrClosePipeMessageParams_Data* RunOrClosePipeMessageParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(RunOrClosePipeMessageParams_Data))) RunOrClosePipeMessageParams_Data();
}

// static
bool RunOrClosePipeMessageParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RunOrClosePipeMessageParams_Data* object = static_cast<const RunOrClosePipeMessageParams_Data*>(data);

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
          object->require_version, "null require_version field in RunOrClosePipeMessageParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->require_version, bounds_checker))
    return false;

  return true;
}

void RunOrClosePipeMessageParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&require_version, handles);
}

void RunOrClosePipeMessageParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&require_version, handles);
}

RunOrClosePipeMessageParams_Data::RunOrClosePipeMessageParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
RequireVersion_Data* RequireVersion_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(RequireVersion_Data))) RequireVersion_Data();
}

// static
bool RequireVersion_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RequireVersion_Data* object = static_cast<const RequireVersion_Data*>(data);

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

void RequireVersion_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void RequireVersion_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

RequireVersion_Data::RequireVersion_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
RunMessageParamsPtr RunMessageParams::New() {
  RunMessageParamsPtr rv;
  mojo::internal::StructHelper<RunMessageParams>::Initialize(&rv);
  return rv;
}

RunMessageParams::RunMessageParams()
    : reserved0(),
      reserved1(),
      query_version() {
}

RunMessageParams::~RunMessageParams() {
}


RunMessageParamsPtr RunMessageParams::Clone() const {
  RunMessageParamsPtr rv(New());
  rv->reserved0 = reserved0;
  rv->reserved1 = reserved1;
  rv->query_version = query_version.Clone();
  return rv;
}


bool RunMessageParams::Equals(const RunMessageParams& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->reserved0, other.reserved0))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->reserved1, other.reserved1))
    return false;
  if (!mojo::internal::ValueTraits<QueryVersionPtr>::Equals(this->query_version, other.query_version))
    return false;
  return true;
}// static
RunResponseMessageParamsPtr RunResponseMessageParams::New() {
  RunResponseMessageParamsPtr rv;
  mojo::internal::StructHelper<RunResponseMessageParams>::Initialize(&rv);
  return rv;
}

RunResponseMessageParams::RunResponseMessageParams()
    : reserved0(),
      reserved1(),
      query_version_result() {
}

RunResponseMessageParams::~RunResponseMessageParams() {
}


RunResponseMessageParamsPtr RunResponseMessageParams::Clone() const {
  RunResponseMessageParamsPtr rv(New());
  rv->reserved0 = reserved0;
  rv->reserved1 = reserved1;
  rv->query_version_result = query_version_result.Clone();
  return rv;
}


bool RunResponseMessageParams::Equals(const RunResponseMessageParams& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->reserved0, other.reserved0))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->reserved1, other.reserved1))
    return false;
  if (!mojo::internal::ValueTraits<QueryVersionResultPtr>::Equals(this->query_version_result, other.query_version_result))
    return false;
  return true;
}// static
QueryVersionPtr QueryVersion::New() {
  QueryVersionPtr rv;
  mojo::internal::StructHelper<QueryVersion>::Initialize(&rv);
  return rv;
}

QueryVersion::QueryVersion() {
}

QueryVersion::~QueryVersion() {
}


QueryVersionPtr QueryVersion::Clone() const {
  QueryVersionPtr rv(New());
  return rv;
}


bool QueryVersion::Equals(const QueryVersion& other) const {
  return true;
}// static
QueryVersionResultPtr QueryVersionResult::New() {
  QueryVersionResultPtr rv;
  mojo::internal::StructHelper<QueryVersionResult>::Initialize(&rv);
  return rv;
}

QueryVersionResult::QueryVersionResult()
    : version() {
}

QueryVersionResult::~QueryVersionResult() {
}


QueryVersionResultPtr QueryVersionResult::Clone() const {
  QueryVersionResultPtr rv(New());
  rv->version = version;
  return rv;
}


bool QueryVersionResult::Equals(const QueryVersionResult& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->version, other.version))
    return false;
  return true;
}// static
RunOrClosePipeMessageParamsPtr RunOrClosePipeMessageParams::New() {
  RunOrClosePipeMessageParamsPtr rv;
  mojo::internal::StructHelper<RunOrClosePipeMessageParams>::Initialize(&rv);
  return rv;
}

RunOrClosePipeMessageParams::RunOrClosePipeMessageParams()
    : reserved0(),
      reserved1(),
      require_version() {
}

RunOrClosePipeMessageParams::~RunOrClosePipeMessageParams() {
}


RunOrClosePipeMessageParamsPtr RunOrClosePipeMessageParams::Clone() const {
  RunOrClosePipeMessageParamsPtr rv(New());
  rv->reserved0 = reserved0;
  rv->reserved1 = reserved1;
  rv->require_version = require_version.Clone();
  return rv;
}


bool RunOrClosePipeMessageParams::Equals(const RunOrClosePipeMessageParams& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->reserved0, other.reserved0))
    return false;
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->reserved1, other.reserved1))
    return false;
  if (!mojo::internal::ValueTraits<RequireVersionPtr>::Equals(this->require_version, other.require_version))
    return false;
  return true;
}// static
RequireVersionPtr RequireVersion::New() {
  RequireVersionPtr rv;
  mojo::internal::StructHelper<RequireVersion>::Initialize(&rv);
  return rv;
}

RequireVersion::RequireVersion()
    : version() {
}

RequireVersion::~RequireVersion() {
}


RequireVersionPtr RequireVersion::Clone() const {
  RequireVersionPtr rv(New());
  rv->version = version;
  return rv;
}


bool RequireVersion::Equals(const RequireVersion& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->version, other.version))
    return false;
  return true;
}
size_t GetSerializedSize_(const RunMessageParamsPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::RunMessageParams_Data);
  size += GetSerializedSize_(input->query_version);
  return size;
}

void Serialize_(RunMessageParamsPtr input, mojo::internal::Buffer* buf,
                internal::RunMessageParams_Data** output) {
  if (input) {
    internal::RunMessageParams_Data* result =
        internal::RunMessageParams_Data::New(buf);
    result->reserved0 = input->reserved0;
    result->reserved1 = input->reserved1;
    Serialize_(std::move(input->query_version), buf, &result->query_version.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->query_version.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null query_version in RunMessageParams struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::RunMessageParams_Data* input,
                  RunMessageParamsPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    RunMessageParamsPtr result(RunMessageParams::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->reserved0 = input->reserved0;
      result->reserved1 = input->reserved1;
      if (!Deserialize_(input->query_version.ptr, &result->query_version, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

RunMessageParams_Reader::RunMessageParams_Reader(
    internal::RunMessageParams_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
QueryVersion_Reader RunMessageParams_Reader::query_version() const {
  return QueryVersion_Reader(data_->query_version.ptr, context_);
}
size_t GetSerializedSize_(const RunResponseMessageParamsPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::RunResponseMessageParams_Data);
  size += GetSerializedSize_(input->query_version_result);
  return size;
}

void Serialize_(RunResponseMessageParamsPtr input, mojo::internal::Buffer* buf,
                internal::RunResponseMessageParams_Data** output) {
  if (input) {
    internal::RunResponseMessageParams_Data* result =
        internal::RunResponseMessageParams_Data::New(buf);
    result->reserved0 = input->reserved0;
    result->reserved1 = input->reserved1;
    Serialize_(std::move(input->query_version_result), buf, &result->query_version_result.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->query_version_result.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null query_version_result in RunResponseMessageParams struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::RunResponseMessageParams_Data* input,
                  RunResponseMessageParamsPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    RunResponseMessageParamsPtr result(RunResponseMessageParams::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->reserved0 = input->reserved0;
      result->reserved1 = input->reserved1;
      if (!Deserialize_(input->query_version_result.ptr, &result->query_version_result, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

RunResponseMessageParams_Reader::RunResponseMessageParams_Reader(
    internal::RunResponseMessageParams_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
QueryVersionResult_Reader RunResponseMessageParams_Reader::query_version_result() const {
  return QueryVersionResult_Reader(data_->query_version_result.ptr, context_);
}
size_t GetSerializedSize_(const QueryVersionPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::QueryVersion_Data);
  return size;
}

void Serialize_(QueryVersionPtr input, mojo::internal::Buffer* buf,
                internal::QueryVersion_Data** output) {
  if (input) {
    internal::QueryVersion_Data* result =
        internal::QueryVersion_Data::New(buf);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::QueryVersion_Data* input,
                  QueryVersionPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    QueryVersionPtr result(QueryVersion::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

QueryVersion_Reader::QueryVersion_Reader(
    internal::QueryVersion_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const QueryVersionResultPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::QueryVersionResult_Data);
  return size;
}

void Serialize_(QueryVersionResultPtr input, mojo::internal::Buffer* buf,
                internal::QueryVersionResult_Data** output) {
  if (input) {
    internal::QueryVersionResult_Data* result =
        internal::QueryVersionResult_Data::New(buf);
    result->version = input->version;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::QueryVersionResult_Data* input,
                  QueryVersionResultPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    QueryVersionResultPtr result(QueryVersionResult::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->version = input->version;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

QueryVersionResult_Reader::QueryVersionResult_Reader(
    internal::QueryVersionResult_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const RunOrClosePipeMessageParamsPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::RunOrClosePipeMessageParams_Data);
  size += GetSerializedSize_(input->require_version);
  return size;
}

void Serialize_(RunOrClosePipeMessageParamsPtr input, mojo::internal::Buffer* buf,
                internal::RunOrClosePipeMessageParams_Data** output) {
  if (input) {
    internal::RunOrClosePipeMessageParams_Data* result =
        internal::RunOrClosePipeMessageParams_Data::New(buf);
    result->reserved0 = input->reserved0;
    result->reserved1 = input->reserved1;
    Serialize_(std::move(input->require_version), buf, &result->require_version.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->require_version.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null require_version in RunOrClosePipeMessageParams struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::RunOrClosePipeMessageParams_Data* input,
                  RunOrClosePipeMessageParamsPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    RunOrClosePipeMessageParamsPtr result(RunOrClosePipeMessageParams::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->reserved0 = input->reserved0;
      result->reserved1 = input->reserved1;
      if (!Deserialize_(input->require_version.ptr, &result->require_version, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

RunOrClosePipeMessageParams_Reader::RunOrClosePipeMessageParams_Reader(
    internal::RunOrClosePipeMessageParams_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
RequireVersion_Reader RunOrClosePipeMessageParams_Reader::require_version() const {
  return RequireVersion_Reader(data_->require_version.ptr, context_);
}
size_t GetSerializedSize_(const RequireVersionPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::RequireVersion_Data);
  return size;
}

void Serialize_(RequireVersionPtr input, mojo::internal::Buffer* buf,
                internal::RequireVersion_Data** output) {
  if (input) {
    internal::RequireVersion_Data* result =
        internal::RequireVersion_Data::New(buf);
    result->version = input->version;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::RequireVersion_Data* input,
                  RequireVersionPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    RequireVersionPtr result(RequireVersion::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->version = input->version;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

RequireVersion_Reader::RequireVersion_Reader(
    internal::RequireVersion_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif