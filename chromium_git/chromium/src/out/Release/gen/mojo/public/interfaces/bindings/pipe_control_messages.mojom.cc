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

#include "mojo/public/interfaces/bindings/pipe_control_messages.mojom.h"

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
namespace pipe_control {

namespace internal {
namespace {

#pragma pack(push, 1)

#pragma pack(pop)

}  // namespace


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

  if (!mojo::internal::ValidateInlinedUnionNonNullable(
          object->input, "null input field in RunOrClosePipeMessageParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateInlinedUnion(object->input, bounds_checker)) {
    return false;
  }

  return true;
}

void RunOrClosePipeMessageParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  input.EncodePointersAndHandles(handles);
}

void RunOrClosePipeMessageParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  input.DecodePointersAndHandles(handles);
}

RunOrClosePipeMessageParams_Data::RunOrClosePipeMessageParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
PeerAssociatedEndpointClosedEvent_Data* PeerAssociatedEndpointClosedEvent_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(PeerAssociatedEndpointClosedEvent_Data))) PeerAssociatedEndpointClosedEvent_Data();
}

// static
bool PeerAssociatedEndpointClosedEvent_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const PeerAssociatedEndpointClosedEvent_Data* object = static_cast<const PeerAssociatedEndpointClosedEvent_Data*>(data);

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

void PeerAssociatedEndpointClosedEvent_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void PeerAssociatedEndpointClosedEvent_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

PeerAssociatedEndpointClosedEvent_Data::PeerAssociatedEndpointClosedEvent_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
AssociatedEndpointClosedBeforeSentEvent_Data* AssociatedEndpointClosedBeforeSentEvent_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(AssociatedEndpointClosedBeforeSentEvent_Data))) AssociatedEndpointClosedBeforeSentEvent_Data();
}

// static
bool AssociatedEndpointClosedBeforeSentEvent_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AssociatedEndpointClosedBeforeSentEvent_Data* object = static_cast<const AssociatedEndpointClosedBeforeSentEvent_Data*>(data);

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

void AssociatedEndpointClosedBeforeSentEvent_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void AssociatedEndpointClosedBeforeSentEvent_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

AssociatedEndpointClosedBeforeSentEvent_Data::AssociatedEndpointClosedBeforeSentEvent_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
// static
RunOrClosePipeInput_Data* RunOrClosePipeInput_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(RunOrClosePipeInput_Data))) RunOrClosePipeInput_Data();
}

// static
bool RunOrClosePipeInput_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker,
                              bool inlined) {
  if (!data) {
    return true;
  }

  if (!mojo::internal::IsAligned(data)) {
    ReportValidationError(mojo::internal::VALIDATION_ERROR_MISALIGNED_OBJECT);
    return false;
  }

  // If the union is inlined in another structure its memory was already claimed.
  // This ONLY applies to the union itself, NOT anything which the union points
  // to.
  if (!inlined && !bounds_checker->ClaimMemory(data, sizeof(RunOrClosePipeInput_Data))) {
    ReportValidationError(
        mojo::internal::VALIDATION_ERROR_ILLEGAL_MEMORY_RANGE);
    return false;
  }
  const RunOrClosePipeInput_Data* object = static_cast<const RunOrClosePipeInput_Data*>(data);
  MOJO_ALLOW_UNUSED_LOCAL(object);

  switch (object->tag) {

    case RunOrClosePipeInput_Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT: {
      
      if (!(reinterpret_cast<const mojo::internal::StructPointer<internal::PeerAssociatedEndpointClosedEvent_Data>*>(&object->data.f_peer_associated_endpoint_closed_event))->offset) {
        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null peer_associated_endpoint_closed_event field in RunOrClosePipeInput");
        return false;
      }
      
      if (!mojo::internal::ValidateEncodedPointer(&(reinterpret_cast<const mojo::internal::StructPointer<internal::PeerAssociatedEndpointClosedEvent_Data>*>(&object->data.f_peer_associated_endpoint_closed_event))->offset)) {
        ReportValidationError(mojo::internal::VALIDATION_ERROR_ILLEGAL_POINTER);
        return false;
      }
      return true;
    }
    case RunOrClosePipeInput_Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT: {
      
      if (!(reinterpret_cast<const mojo::internal::StructPointer<internal::AssociatedEndpointClosedBeforeSentEvent_Data>*>(&object->data.f_associated_endpoint_closed_before_sent_event))->offset) {
        ReportValidationError(
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null associated_endpoint_closed_before_sent_event field in RunOrClosePipeInput");
        return false;
      }
      
      if (!mojo::internal::ValidateEncodedPointer(&(reinterpret_cast<const mojo::internal::StructPointer<internal::AssociatedEndpointClosedBeforeSentEvent_Data>*>(&object->data.f_associated_endpoint_closed_before_sent_event))->offset)) {
        ReportValidationError(mojo::internal::VALIDATION_ERROR_ILLEGAL_POINTER);
        return false;
      }
      return true;
    }
    default: {
      ReportValidationError(
          mojo::internal::VALIDATION_ERROR_UNKNOWN_UNION_TAG,
          "unknown tag in RunOrClosePipeInput");
      return false;
    }
  }
}

void RunOrClosePipeInput_Data::set_null() {
  size = 0U;
  tag = static_cast<RunOrClosePipeInput_Tag>(0);
  data.unknown = 0U;
}

RunOrClosePipeInput_Data::RunOrClosePipeInput_Data() {
}

void RunOrClosePipeInput_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  switch (tag) {
    case RunOrClosePipeInput_Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT: {
      mojo::internal::Encode(&data.f_peer_associated_endpoint_closed_event, handles);
      return;
    }
    case RunOrClosePipeInput_Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT: {
      mojo::internal::Encode(&data.f_associated_endpoint_closed_before_sent_event, handles);
      return;
    }
  }
}

void RunOrClosePipeInput_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  switch (tag) {
    case RunOrClosePipeInput_Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT: {
      mojo::internal::Decode(&data.f_peer_associated_endpoint_closed_event, handles);
      return;
    }
    case RunOrClosePipeInput_Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT: {
      mojo::internal::Decode(&data.f_associated_endpoint_closed_before_sent_event, handles);
      return;
    }
  }
}

}  // namespace internal// static
RunOrClosePipeMessageParamsPtr RunOrClosePipeMessageParams::New() {
  RunOrClosePipeMessageParamsPtr rv;
  mojo::internal::StructHelper<RunOrClosePipeMessageParams>::Initialize(&rv);
  return rv;
}

RunOrClosePipeMessageParams::RunOrClosePipeMessageParams()
    : input() {
}

RunOrClosePipeMessageParams::~RunOrClosePipeMessageParams() {
}


RunOrClosePipeMessageParamsPtr RunOrClosePipeMessageParams::Clone() const {
  RunOrClosePipeMessageParamsPtr rv(New());
  rv->input = input.Clone();
  return rv;
}


bool RunOrClosePipeMessageParams::Equals(const RunOrClosePipeMessageParams& other) const {
  if (!mojo::internal::ValueTraits<RunOrClosePipeInputPtr>::Equals(this->input, other.input))
    return false;
  return true;
}// static
PeerAssociatedEndpointClosedEventPtr PeerAssociatedEndpointClosedEvent::New() {
  PeerAssociatedEndpointClosedEventPtr rv;
  mojo::internal::StructHelper<PeerAssociatedEndpointClosedEvent>::Initialize(&rv);
  return rv;
}

PeerAssociatedEndpointClosedEvent::PeerAssociatedEndpointClosedEvent()
    : id() {
}

PeerAssociatedEndpointClosedEvent::~PeerAssociatedEndpointClosedEvent() {
}


PeerAssociatedEndpointClosedEventPtr PeerAssociatedEndpointClosedEvent::Clone() const {
  PeerAssociatedEndpointClosedEventPtr rv(New());
  rv->id = id;
  return rv;
}


bool PeerAssociatedEndpointClosedEvent::Equals(const PeerAssociatedEndpointClosedEvent& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->id, other.id))
    return false;
  return true;
}// static
AssociatedEndpointClosedBeforeSentEventPtr AssociatedEndpointClosedBeforeSentEvent::New() {
  AssociatedEndpointClosedBeforeSentEventPtr rv;
  mojo::internal::StructHelper<AssociatedEndpointClosedBeforeSentEvent>::Initialize(&rv);
  return rv;
}

AssociatedEndpointClosedBeforeSentEvent::AssociatedEndpointClosedBeforeSentEvent()
    : id() {
}

AssociatedEndpointClosedBeforeSentEvent::~AssociatedEndpointClosedBeforeSentEvent() {
}


AssociatedEndpointClosedBeforeSentEventPtr AssociatedEndpointClosedBeforeSentEvent::Clone() const {
  AssociatedEndpointClosedBeforeSentEventPtr rv(New());
  rv->id = id;
  return rv;
}


bool AssociatedEndpointClosedBeforeSentEvent::Equals(const AssociatedEndpointClosedBeforeSentEvent& other) const {
  if (!mojo::internal::ValueTraits<uint32_t>::Equals(this->id, other.id))
    return false;
  return true;
}// static
RunOrClosePipeInputPtr RunOrClosePipeInput::New() {
  RunOrClosePipeInputPtr rv;
  mojo::internal::StructHelper<RunOrClosePipeInput>::Initialize(&rv);
  return rv;
}

RunOrClosePipeInput::RunOrClosePipeInput() {
  // TODO(azani): Implement default values here when/if we support them.
  // TODO(azani): Set to UNKNOWN when unknown is implemented.
  SetActive(static_cast<Tag>(0));
}

RunOrClosePipeInput::~RunOrClosePipeInput() {
  DestroyActive();
}


RunOrClosePipeInputPtr RunOrClosePipeInput::Clone() const {
  RunOrClosePipeInputPtr rv(New());
  switch (tag_) {

    case Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT:

      rv->set_peer_associated_endpoint_closed_event(data_.peer_associated_endpoint_closed_event->Clone());
      break;
    case Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT:

      rv->set_associated_endpoint_closed_before_sent_event(data_.associated_endpoint_closed_before_sent_event->Clone());
      break;
  };
  return rv;
}

bool RunOrClosePipeInput::Equals(const RunOrClosePipeInput& other) const {
  if (tag_ != other.which()) {
    return false;
  }

  switch (tag_) {

    case Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT:

      return mojo::internal::ValueTraits<PeerAssociatedEndpointClosedEventPtr>::Equals(*(data_.peer_associated_endpoint_closed_event), *(other.data_.peer_associated_endpoint_closed_event));
    case Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT:

      return mojo::internal::ValueTraits<AssociatedEndpointClosedBeforeSentEventPtr>::Equals(*(data_.associated_endpoint_closed_before_sent_event), *(other.data_.associated_endpoint_closed_before_sent_event));
  };

  return false;
}


bool RunOrClosePipeInput::is_peer_associated_endpoint_closed_event() const {
  return tag_ == Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT;
}

PeerAssociatedEndpointClosedEventPtr& RunOrClosePipeInput::get_peer_associated_endpoint_closed_event() const {
  MOJO_DCHECK(tag_ == Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT);

  return *(data_.peer_associated_endpoint_closed_event);
}

void RunOrClosePipeInput::set_peer_associated_endpoint_closed_event(PeerAssociatedEndpointClosedEventPtr peer_associated_endpoint_closed_event) {
  SwitchActive(Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT);

  *(data_.peer_associated_endpoint_closed_event) = std::move(peer_associated_endpoint_closed_event);

}
bool RunOrClosePipeInput::is_associated_endpoint_closed_before_sent_event() const {
  return tag_ == Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT;
}

AssociatedEndpointClosedBeforeSentEventPtr& RunOrClosePipeInput::get_associated_endpoint_closed_before_sent_event() const {
  MOJO_DCHECK(tag_ == Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT);

  return *(data_.associated_endpoint_closed_before_sent_event);
}

void RunOrClosePipeInput::set_associated_endpoint_closed_before_sent_event(AssociatedEndpointClosedBeforeSentEventPtr associated_endpoint_closed_before_sent_event) {
  SwitchActive(Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT);

  *(data_.associated_endpoint_closed_before_sent_event) = std::move(associated_endpoint_closed_before_sent_event);

}

void RunOrClosePipeInput::SwitchActive(Tag new_active) {
  if (new_active == tag_) {
    return;
  }

  DestroyActive();
  SetActive(new_active);
}

void RunOrClosePipeInput::SetActive(Tag new_active) {
  switch (new_active) {

    case Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT:

      data_.peer_associated_endpoint_closed_event = new PeerAssociatedEndpointClosedEventPtr();
      break;
    case Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT:

      data_.associated_endpoint_closed_before_sent_event = new AssociatedEndpointClosedBeforeSentEventPtr();
      break;
  }

  tag_ = new_active;
}

void RunOrClosePipeInput::DestroyActive() {
  switch (tag_) {

    case Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT:

      delete data_.peer_associated_endpoint_closed_event;
      break;
    case Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT:

      delete data_.associated_endpoint_closed_before_sent_event;
      break;
  }
}
size_t GetSerializedSize_(const RunOrClosePipeMessageParamsPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::RunOrClosePipeMessageParams_Data);
  size += GetSerializedSize_(input->input, true);
  return size;
}

void Serialize_(RunOrClosePipeMessageParamsPtr input, mojo::internal::Buffer* buf,
                internal::RunOrClosePipeMessageParams_Data** output) {
  if (input) {
    internal::RunOrClosePipeMessageParams_Data* result =
        internal::RunOrClosePipeMessageParams_Data::New(buf);
    internal::RunOrClosePipeInput_Data* input_ptr = &result->input;
    SerializeUnion_(std::move(input->input), buf, &input_ptr, true);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        result->input.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null input in RunOrClosePipeMessageParams struct");
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
      if (!Deserialize_(&input->input, &result->input, context))
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
size_t GetSerializedSize_(const PeerAssociatedEndpointClosedEventPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::PeerAssociatedEndpointClosedEvent_Data);
  return size;
}

void Serialize_(PeerAssociatedEndpointClosedEventPtr input, mojo::internal::Buffer* buf,
                internal::PeerAssociatedEndpointClosedEvent_Data** output) {
  if (input) {
    internal::PeerAssociatedEndpointClosedEvent_Data* result =
        internal::PeerAssociatedEndpointClosedEvent_Data::New(buf);
    result->id = input->id;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::PeerAssociatedEndpointClosedEvent_Data* input,
                  PeerAssociatedEndpointClosedEventPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    PeerAssociatedEndpointClosedEventPtr result(PeerAssociatedEndpointClosedEvent::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->id = input->id;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

PeerAssociatedEndpointClosedEvent_Reader::PeerAssociatedEndpointClosedEvent_Reader(
    internal::PeerAssociatedEndpointClosedEvent_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const AssociatedEndpointClosedBeforeSentEventPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::AssociatedEndpointClosedBeforeSentEvent_Data);
  return size;
}

void Serialize_(AssociatedEndpointClosedBeforeSentEventPtr input, mojo::internal::Buffer* buf,
                internal::AssociatedEndpointClosedBeforeSentEvent_Data** output) {
  if (input) {
    internal::AssociatedEndpointClosedBeforeSentEvent_Data* result =
        internal::AssociatedEndpointClosedBeforeSentEvent_Data::New(buf);
    result->id = input->id;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::AssociatedEndpointClosedBeforeSentEvent_Data* input,
                  AssociatedEndpointClosedBeforeSentEventPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    AssociatedEndpointClosedBeforeSentEventPtr result(AssociatedEndpointClosedBeforeSentEvent::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->id = input->id;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

AssociatedEndpointClosedBeforeSentEvent_Reader::AssociatedEndpointClosedBeforeSentEvent_Reader(
    internal::AssociatedEndpointClosedBeforeSentEvent_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }size_t GetSerializedSize_(const RunOrClosePipeInputPtr& input, bool inlined) {
  size_t size = 0U;
  if (!inlined) {
    size += sizeof(internal::RunOrClosePipeInput_Data);
  }

  if (!input)
    return size;

  mojo::internal::UnionAccessor<RunOrClosePipeInput> input_acc(input.get());
  switch (input->which()) {


    case RunOrClosePipeInput::Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT:

      size += GetSerializedSize_(*(input_acc.data()->peer_associated_endpoint_closed_event));

      break;

    case RunOrClosePipeInput::Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT:

      size += GetSerializedSize_(*(input_acc.data()->associated_endpoint_closed_before_sent_event));

      break;
    default:
      break;
  }
  return size;
}

void SerializeUnion_(RunOrClosePipeInputPtr input, mojo::internal::Buffer* buf,
                     internal::RunOrClosePipeInput_Data** output, bool inlined) {
  internal::RunOrClosePipeInput_Data* result = *output;
  if (input) {
    if (!inlined) {
      result = internal::RunOrClosePipeInput_Data::New(buf);
    }
    mojo::internal::UnionAccessor<RunOrClosePipeInput> input_acc(input.get());
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = 16;
    result->tag = input->which();
    switch (input->which()) {

      case RunOrClosePipeInput::Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT: {


        Serialize_(
            std::move(*(input_acc.data()->peer_associated_endpoint_closed_event)),
            buf, &result->data.f_peer_associated_endpoint_closed_event.ptr);


        break;
      }
      case RunOrClosePipeInput::Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT: {


        Serialize_(
            std::move(*(input_acc.data()->associated_endpoint_closed_before_sent_event)),
            buf, &result->data.f_associated_endpoint_closed_before_sent_event.ptr);


        break;
      }
    }
  } else if (inlined) {
    result->set_null();
  } else {
    result = nullptr;
  }
  *output = result;
}

bool Deserialize_(internal::RunOrClosePipeInput_Data* input,
                  RunOrClosePipeInputPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input && !input->is_null()) {
    RunOrClosePipeInputPtr result(RunOrClosePipeInput::New());
    mojo::internal::UnionAccessor<RunOrClosePipeInput> result_acc(result.get());
    switch (input->tag) {

      case RunOrClosePipeInput::Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT: {

        result_acc.SwitchActive(RunOrClosePipeInput::Tag::PEER_ASSOCIATED_ENDPOINT_CLOSED_EVENT);
        if (!Deserialize_(input->data.f_peer_associated_endpoint_closed_event.ptr, result_acc.data()->peer_associated_endpoint_closed_event, context))
          success = false;

        break;
      }
      case RunOrClosePipeInput::Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT: {

        result_acc.SwitchActive(RunOrClosePipeInput::Tag::ASSOCIATED_ENDPOINT_CLOSED_BEFORE_SENT_EVENT);
        if (!Deserialize_(input->data.f_associated_endpoint_closed_before_sent_event.ptr, result_acc.data()->associated_endpoint_closed_before_sent_event, context))
          success = false;

        break;
      }
    }
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}
}  // namespace pipe_control
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif