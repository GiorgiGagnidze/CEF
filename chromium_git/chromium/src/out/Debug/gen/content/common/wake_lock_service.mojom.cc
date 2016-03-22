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

#include "content/common/wake_lock_service.mojom.h"

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
const uint32_t kWakeLockService_RequestWakeLock_Name = 0;

class WakeLockService_RequestWakeLock_Params_Data {
 public:
  static WakeLockService_RequestWakeLock_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  WakeLockService_RequestWakeLock_Params_Data();
  ~WakeLockService_RequestWakeLock_Params_Data() = delete;
};
static_assert(sizeof(WakeLockService_RequestWakeLock_Params_Data) == 8,
              "Bad sizeof(WakeLockService_RequestWakeLock_Params_Data)");

// static
WakeLockService_RequestWakeLock_Params_Data* WakeLockService_RequestWakeLock_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WakeLockService_RequestWakeLock_Params_Data))) WakeLockService_RequestWakeLock_Params_Data();
}

// static
bool WakeLockService_RequestWakeLock_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WakeLockService_RequestWakeLock_Params_Data* object = static_cast<const WakeLockService_RequestWakeLock_Params_Data*>(data);

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

void WakeLockService_RequestWakeLock_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void WakeLockService_RequestWakeLock_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

WakeLockService_RequestWakeLock_Params_Data::WakeLockService_RequestWakeLock_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kWakeLockService_CancelWakeLock_Name = 1;

class WakeLockService_CancelWakeLock_Params_Data {
 public:
  static WakeLockService_CancelWakeLock_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  WakeLockService_CancelWakeLock_Params_Data();
  ~WakeLockService_CancelWakeLock_Params_Data() = delete;
};
static_assert(sizeof(WakeLockService_CancelWakeLock_Params_Data) == 8,
              "Bad sizeof(WakeLockService_CancelWakeLock_Params_Data)");

// static
WakeLockService_CancelWakeLock_Params_Data* WakeLockService_CancelWakeLock_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WakeLockService_CancelWakeLock_Params_Data))) WakeLockService_CancelWakeLock_Params_Data();
}

// static
bool WakeLockService_CancelWakeLock_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WakeLockService_CancelWakeLock_Params_Data* object = static_cast<const WakeLockService_CancelWakeLock_Params_Data*>(data);

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

void WakeLockService_CancelWakeLock_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void WakeLockService_CancelWakeLock_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

WakeLockService_CancelWakeLock_Params_Data::WakeLockService_CancelWakeLock_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char WakeLockService::Name_[] = "content::WakeLockService";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t WakeLockService::Version_;

WakeLockServiceProxy::WakeLockServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void WakeLockServiceProxy::RequestWakeLock(
    ) {
  size_t size = sizeof(internal::WakeLockService_RequestWakeLock_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWakeLockService_RequestWakeLock_Name, size);

  internal::WakeLockService_RequestWakeLock_Params_Data* params =
      internal::WakeLockService_RequestWakeLock_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void WakeLockServiceProxy::CancelWakeLock(
    ) {
  size_t size = sizeof(internal::WakeLockService_CancelWakeLock_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWakeLockService_CancelWakeLock_Name, size);

  internal::WakeLockService_CancelWakeLock_Params_Data* params =
      internal::WakeLockService_CancelWakeLock_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

WakeLockServiceStub::WakeLockServiceStub()
    : sink_(nullptr),
      control_message_handler_(WakeLockService::Version_) {
}

WakeLockServiceStub::~WakeLockServiceStub() {}

bool WakeLockServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWakeLockService_RequestWakeLock_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.WakeLockService.RequestWakeLock", __FILE__, __LINE__);
      internal::WakeLockService_RequestWakeLock_Params_Data* params =
          reinterpret_cast<internal::WakeLockService_RequestWakeLock_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WakeLockService::RequestWakeLock");
      sink_->RequestWakeLock();
      return true;
    }
    case internal::kWakeLockService_CancelWakeLock_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.WakeLockService.CancelWakeLock", __FILE__, __LINE__);
      internal::WakeLockService_CancelWakeLock_Params_Data* params =
          reinterpret_cast<internal::WakeLockService_CancelWakeLock_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WakeLockService::CancelWakeLock");
      sink_->CancelWakeLock();
      return true;
    }
  }
  return false;
}

bool WakeLockServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWakeLockService_RequestWakeLock_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::WakeLockService::RequestWakeLock", __FILE__, __LINE__);
      break;
    }
    case internal::kWakeLockService_CancelWakeLock_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::WakeLockService::CancelWakeLock", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

WakeLockServiceRequestValidator::WakeLockServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WakeLockServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWakeLockService_RequestWakeLock_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockService_RequestWakeLock_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWakeLockService_CancelWakeLock_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WakeLockService_CancelWakeLock_Params_Data>(message)) {
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

}  // namespace content

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif