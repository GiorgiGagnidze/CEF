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

#include "content/public/common/background_sync.mojom.h"

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

#pragma pack(pop)

}  // namespace


// static
SyncRegistration_Data* SyncRegistration_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(SyncRegistration_Data))) SyncRegistration_Data();
}

// static
bool SyncRegistration_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const SyncRegistration_Data* object = static_cast<const SyncRegistration_Data*>(data);

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
          object->tag, "null tag field in SyncRegistration struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams tag_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->tag, bounds_checker,
                                     &tag_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateEnum(object->network_state))
    return false;

  return true;
}

void SyncRegistration_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&tag, handles);
}

void SyncRegistration_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&tag, handles);
}

SyncRegistration_Data::SyncRegistration_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
SyncRegistrationPtr SyncRegistration::New() {
  SyncRegistrationPtr rv;
  mojo::internal::StructHelper<SyncRegistration>::Initialize(&rv);
  return rv;
}

SyncRegistration::SyncRegistration()
    : handle_id(-1),
      tag(""),
      network_state(BackgroundSyncNetworkState::ONLINE) {
}

SyncRegistration::~SyncRegistration() {
}


SyncRegistrationPtr SyncRegistration::Clone() const {
  SyncRegistrationPtr rv(New());
  rv->handle_id = handle_id;
  rv->tag = tag;
  rv->network_state = network_state;
  return rv;
}


bool SyncRegistration::Equals(const SyncRegistration& other) const {
  if (!mojo::internal::ValueTraits<int64_t>::Equals(this->handle_id, other.handle_id))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->tag, other.tag))
    return false;
  if (!mojo::internal::ValueTraits<BackgroundSyncNetworkState>::Equals(this->network_state, other.network_state))
    return false;
  return true;
}
size_t GetSerializedSize_(const SyncRegistrationPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::SyncRegistration_Data);
  size += GetSerializedSize_(input->tag);
  return size;
}

void Serialize_(SyncRegistrationPtr input, mojo::internal::Buffer* buf,
                internal::SyncRegistration_Data** output) {
  if (input) {
    internal::SyncRegistration_Data* result =
        internal::SyncRegistration_Data::New(buf);
    result->handle_id = input->handle_id;
    Serialize_(std::move(input->tag), buf, &result->tag.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->tag.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null tag in SyncRegistration struct");
    result->network_state.value = static_cast<int32_t>(input->network_state);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::SyncRegistration_Data* input,
                  SyncRegistrationPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    SyncRegistrationPtr result(SyncRegistration::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->handle_id = input->handle_id;
      if (!Deserialize_(input->tag.ptr, &result->tag, context))
        success = false;
      result->network_state = static_cast<BackgroundSyncNetworkState>(input->network_state.value);
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

SyncRegistration_Reader::SyncRegistration_Reader(
    internal::SyncRegistration_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace content

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif