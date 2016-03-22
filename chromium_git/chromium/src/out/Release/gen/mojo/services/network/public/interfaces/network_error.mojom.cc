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

#include "mojo/services/network/public/interfaces/network_error.mojom.h"

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
NetworkError_Data* NetworkError_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetworkError_Data))) NetworkError_Data();
}

// static
bool NetworkError_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkError_Data* object = static_cast<const NetworkError_Data*>(data);

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

  const mojo::internal::ArrayValidateParams description_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->description, bounds_checker,
                                     &description_validate_params)) {
    return false;
  }

  return true;
}

void NetworkError_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&description, handles);
}

void NetworkError_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&description, handles);
}

NetworkError_Data::NetworkError_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
NetworkErrorPtr NetworkError::New() {
  NetworkErrorPtr rv;
  mojo::internal::StructHelper<NetworkError>::Initialize(&rv);
  return rv;
}

NetworkError::NetworkError()
    : code(),
      description() {
}

NetworkError::~NetworkError() {
}


NetworkErrorPtr NetworkError::Clone() const {
  NetworkErrorPtr rv(New());
  rv->code = code;
  rv->description = description;
  return rv;
}


bool NetworkError::Equals(const NetworkError& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->code, other.code))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->description, other.description))
    return false;
  return true;
}
size_t GetSerializedSize_(const NetworkErrorPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::NetworkError_Data);
  size += GetSerializedSize_(input->description);
  return size;
}

void Serialize_(NetworkErrorPtr input, mojo::internal::Buffer* buf,
                internal::NetworkError_Data** output) {
  if (input) {
    internal::NetworkError_Data* result =
        internal::NetworkError_Data::New(buf);
    result->code = input->code;
    Serialize_(std::move(input->description), buf, &result->description.ptr);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::NetworkError_Data* input,
                  NetworkErrorPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    NetworkErrorPtr result(NetworkError::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->code = input->code;
      if (!Deserialize_(input->description.ptr, &result->description, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

NetworkError_Reader::NetworkError_Reader(
    internal::NetworkError_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif