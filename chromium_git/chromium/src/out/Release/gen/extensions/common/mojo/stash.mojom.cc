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

#include "extensions/common/mojo/stash.mojom.h"

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
namespace extensions {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kStashService_AddToStash_Name = 0;

class StashService_AddToStash_Params_Data {
 public:
  static StashService_AddToStash_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::StashedObject_Data*> stashed_objects;

 private:
  StashService_AddToStash_Params_Data();
  ~StashService_AddToStash_Params_Data() = delete;
};
static_assert(sizeof(StashService_AddToStash_Params_Data) == 16,
              "Bad sizeof(StashService_AddToStash_Params_Data)");

// static
StashService_AddToStash_Params_Data* StashService_AddToStash_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(StashService_AddToStash_Params_Data))) StashService_AddToStash_Params_Data();
}

// static
bool StashService_AddToStash_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const StashService_AddToStash_Params_Data* object = static_cast<const StashService_AddToStash_Params_Data*>(data);

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
          object->stashed_objects, "null stashed_objects field in StashService_AddToStash_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams stashed_objects_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->stashed_objects, bounds_checker,
                                     &stashed_objects_validate_params)) {
    return false;
  }

  return true;
}

void StashService_AddToStash_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&stashed_objects, handles);
}

void StashService_AddToStash_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&stashed_objects, handles);
}

StashService_AddToStash_Params_Data::StashService_AddToStash_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kStashService_RetrieveStash_Name = 1;

class StashService_RetrieveStash_Params_Data {
 public:
  static StashService_RetrieveStash_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  StashService_RetrieveStash_Params_Data();
  ~StashService_RetrieveStash_Params_Data() = delete;
};
static_assert(sizeof(StashService_RetrieveStash_Params_Data) == 8,
              "Bad sizeof(StashService_RetrieveStash_Params_Data)");

// static
StashService_RetrieveStash_Params_Data* StashService_RetrieveStash_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(StashService_RetrieveStash_Params_Data))) StashService_RetrieveStash_Params_Data();
}

// static
bool StashService_RetrieveStash_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const StashService_RetrieveStash_Params_Data* object = static_cast<const StashService_RetrieveStash_Params_Data*>(data);

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

void StashService_RetrieveStash_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void StashService_RetrieveStash_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

StashService_RetrieveStash_Params_Data::StashService_RetrieveStash_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class StashService_RetrieveStash_ResponseParams_Data {
 public:
  static StashService_RetrieveStash_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<internal::StashedObject_Data*> stash;

 private:
  StashService_RetrieveStash_ResponseParams_Data();
  ~StashService_RetrieveStash_ResponseParams_Data() = delete;
};
static_assert(sizeof(StashService_RetrieveStash_ResponseParams_Data) == 16,
              "Bad sizeof(StashService_RetrieveStash_ResponseParams_Data)");

// static
StashService_RetrieveStash_ResponseParams_Data* StashService_RetrieveStash_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(StashService_RetrieveStash_ResponseParams_Data))) StashService_RetrieveStash_ResponseParams_Data();
}

// static
bool StashService_RetrieveStash_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const StashService_RetrieveStash_ResponseParams_Data* object = static_cast<const StashService_RetrieveStash_ResponseParams_Data*>(data);

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
          object->stash, "null stash field in StashService_RetrieveStash_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams stash_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->stash, bounds_checker,
                                     &stash_validate_params)) {
    return false;
  }

  return true;
}

void StashService_RetrieveStash_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&stash, handles);
}

void StashService_RetrieveStash_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&stash, handles);
}

StashService_RetrieveStash_ResponseParams_Data::StashService_RetrieveStash_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
StashedObject_Data* StashedObject_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(StashedObject_Data))) StashedObject_Data();
}

// static
bool StashedObject_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const StashedObject_Data* object = static_cast<const StashedObject_Data*>(data);

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
          object->id, "null id field in StashedObject struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->id, bounds_checker,
                                     &id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, "null data field in StashedObject struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->data, bounds_checker,
                                     &data_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->stashed_handles, "null stashed_handles field in StashedObject struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams stashed_handles_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->stashed_handles, bounds_checker,
                                     &stashed_handles_validate_params)) {
    return false;
  }

  return true;
}

void StashedObject_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&id, handles);
  mojo::internal::Encode(&data, handles);
  mojo::internal::Encode(&stashed_handles, handles);
}

void StashedObject_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&id, handles);
  mojo::internal::Decode(&data, handles);
  mojo::internal::Decode(&stashed_handles, handles);
}

StashedObject_Data::StashedObject_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
StashedObjectPtr StashedObject::New() {
  StashedObjectPtr rv;
  mojo::internal::StructHelper<StashedObject>::Initialize(&rv);
  return rv;
}

StashedObject::StashedObject()
    : id(),
      data(),
      stashed_handles(),
      monitor_handles(false) {
}

StashedObject::~StashedObject() {
}



bool StashedObject::Equals(const StashedObject& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<uint8_t>>::Equals(this->data, other.data))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<mojo::ScopedHandle>>::Equals(this->stashed_handles, other.stashed_handles))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->monitor_handles, other.monitor_handles))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char StashService::Name_[] = "extensions::StashService";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t StashService::Version_;
class StashService_RetrieveStash_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  StashService_RetrieveStash_ForwardToCallback(
      const StashService::RetrieveStashCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  StashService::RetrieveStashCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(StashService_RetrieveStash_ForwardToCallback);
};
bool StashService_RetrieveStash_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::StashService_RetrieveStash_ResponseParams_Data* params =
      reinterpret_cast<internal::StashService_RetrieveStash_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::Array<StashedObjectPtr> p_stash{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->stash.ptr, &p_stash, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_stash));
  return true;
}

StashServiceProxy::StashServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void StashServiceProxy::AddToStash(
    mojo::Array<StashedObjectPtr> in_stashed_objects) {
  size_t size = sizeof(internal::StashService_AddToStash_Params_Data);
  size += GetSerializedSize_(in_stashed_objects);
  mojo::internal::MessageBuilder builder(internal::kStashService_AddToStash_Name, size);

  internal::StashService_AddToStash_Params_Data* params =
      internal::StashService_AddToStash_Params_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams stashed_objects_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_stashed_objects), builder.buffer(),
      &params->stashed_objects.ptr, &stashed_objects_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->stashed_objects.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null stashed_objects in StashService.AddToStash request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void StashServiceProxy::RetrieveStash(
    const RetrieveStashCallback& callback) {
  size_t size = sizeof(internal::StashService_RetrieveStash_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kStashService_RetrieveStash_Name, size);

  internal::StashService_RetrieveStash_Params_Data* params =
      internal::StashService_RetrieveStash_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new StashService_RetrieveStash_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class StashService_RetrieveStash_ProxyToResponder
    : public StashService::RetrieveStashCallback::Runnable {
 public:
  ~StashService_RetrieveStash_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "StashService::RetrieveStash(callback) "
        "was never run.";
  }

  StashService_RetrieveStash_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::Array<StashedObjectPtr> in_stash) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(StashService_RetrieveStash_ProxyToResponder);
};
void StashService_RetrieveStash_ProxyToResponder::Run(
    mojo::Array<StashedObjectPtr> in_stash) const {
  size_t size = sizeof(internal::StashService_RetrieveStash_ResponseParams_Data);
  size += GetSerializedSize_(in_stash);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kStashService_RetrieveStash_Name, size, request_id_);
  internal::StashService_RetrieveStash_ResponseParams_Data* params =
      internal::StashService_RetrieveStash_ResponseParams_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams stash_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_stash), builder.buffer(),
      &params->stash.ptr, &stash_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->stash.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null stash in StashService.RetrieveStash response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

StashServiceStub::StashServiceStub()
    : sink_(nullptr),
      control_message_handler_(StashService::Version_) {
}

StashServiceStub::~StashServiceStub() {}

bool StashServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kStashService_AddToStash_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.extensions.StashService.AddToStash", __FILE__, __LINE__);
      internal::StashService_AddToStash_Params_Data* params =
          reinterpret_cast<internal::StashService_AddToStash_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::Array<StashedObjectPtr> p_stashed_objects{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->stashed_objects.ptr, &p_stashed_objects, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "StashService::AddToStash");
      sink_->AddToStash(std::move(p_stashed_objects));
      return true;
    }
    case internal::kStashService_RetrieveStash_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.extensions.StashService.RetrieveStash", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool StashServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kStashService_AddToStash_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::extensions::StashService::AddToStash", __FILE__, __LINE__);
      break;
    }
    case internal::kStashService_RetrieveStash_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::extensions::StashService::RetrieveStash", __FILE__, __LINE__);
      internal::StashService_RetrieveStash_Params_Data* params =
          reinterpret_cast<internal::StashService_RetrieveStash_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      StashService::RetrieveStashCallback::Runnable* runnable =
          new StashService_RetrieveStash_ProxyToResponder(
              message->request_id(), responder);
      StashService::RetrieveStashCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "StashService::RetrieveStash");
      sink_->RetrieveStash(callback);
      return true;
    }
  }
  return false;
}

StashServiceRequestValidator::StashServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool StashServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kStashService_AddToStash_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::StashService_AddToStash_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kStashService_RetrieveStash_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::StashService_RetrieveStash_Params_Data>(message)) {
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

StashServiceResponseValidator::StashServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool StashServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kStashService_RetrieveStash_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::StashService_RetrieveStash_ResponseParams_Data>(message)) {
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
size_t GetSerializedSize_(const StashedObjectPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::StashedObject_Data);
  size += GetSerializedSize_(input->id);
  size += GetSerializedSize_(input->data);
  size += GetSerializedSize_(input->stashed_handles);
  return size;
}

void Serialize_(StashedObjectPtr input, mojo::internal::Buffer* buf,
                internal::StashedObject_Data** output) {
  if (input) {
    internal::StashedObject_Data* result =
        internal::StashedObject_Data::New(buf);
    Serialize_(std::move(input->id), buf, &result->id.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->id.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null id in StashedObject struct");
    const mojo::internal::ArrayValidateParams data_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->data), buf,
        &result->data.ptr, &data_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->data.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in StashedObject struct");
    const mojo::internal::ArrayValidateParams stashed_handles_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->stashed_handles), buf,
        &result->stashed_handles.ptr, &stashed_handles_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->stashed_handles.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null stashed_handles in StashedObject struct");
    result->monitor_handles = input->monitor_handles;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::StashedObject_Data* input,
                  StashedObjectPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    StashedObjectPtr result(StashedObject::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->id.ptr, &result->id, context))
        success = false;
      if (!Deserialize_(input->data.ptr, &result->data, context))
        success = false;
      if (!Deserialize_(input->stashed_handles.ptr, &result->stashed_handles, context))
        success = false;
      result->monitor_handles = input->monitor_handles;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

StashedObject_Reader::StashedObject_Reader(
    internal::StashedObject_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace extensions

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif