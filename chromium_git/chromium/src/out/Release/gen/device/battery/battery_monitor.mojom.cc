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

#include "device/battery/battery_monitor.mojom.h"

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
namespace device {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kBatteryMonitor_QueryNextStatus_Name = 0;

class BatteryMonitor_QueryNextStatus_Params_Data {
 public:
  static BatteryMonitor_QueryNextStatus_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  BatteryMonitor_QueryNextStatus_Params_Data();
  ~BatteryMonitor_QueryNextStatus_Params_Data() = delete;
};
static_assert(sizeof(BatteryMonitor_QueryNextStatus_Params_Data) == 8,
              "Bad sizeof(BatteryMonitor_QueryNextStatus_Params_Data)");

// static
BatteryMonitor_QueryNextStatus_Params_Data* BatteryMonitor_QueryNextStatus_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BatteryMonitor_QueryNextStatus_Params_Data))) BatteryMonitor_QueryNextStatus_Params_Data();
}

// static
bool BatteryMonitor_QueryNextStatus_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BatteryMonitor_QueryNextStatus_Params_Data* object = static_cast<const BatteryMonitor_QueryNextStatus_Params_Data*>(data);

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

void BatteryMonitor_QueryNextStatus_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void BatteryMonitor_QueryNextStatus_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

BatteryMonitor_QueryNextStatus_Params_Data::BatteryMonitor_QueryNextStatus_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class BatteryMonitor_QueryNextStatus_ResponseParams_Data {
 public:
  static BatteryMonitor_QueryNextStatus_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<device::internal::BatteryStatus_Data> status;

 private:
  BatteryMonitor_QueryNextStatus_ResponseParams_Data();
  ~BatteryMonitor_QueryNextStatus_ResponseParams_Data() = delete;
};
static_assert(sizeof(BatteryMonitor_QueryNextStatus_ResponseParams_Data) == 16,
              "Bad sizeof(BatteryMonitor_QueryNextStatus_ResponseParams_Data)");

// static
BatteryMonitor_QueryNextStatus_ResponseParams_Data* BatteryMonitor_QueryNextStatus_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(BatteryMonitor_QueryNextStatus_ResponseParams_Data))) BatteryMonitor_QueryNextStatus_ResponseParams_Data();
}

// static
bool BatteryMonitor_QueryNextStatus_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const BatteryMonitor_QueryNextStatus_ResponseParams_Data* object = static_cast<const BatteryMonitor_QueryNextStatus_ResponseParams_Data*>(data);

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
          object->status, "null status field in BatteryMonitor_QueryNextStatus_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->status, bounds_checker))
    return false;

  return true;
}

void BatteryMonitor_QueryNextStatus_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&status, handles);
}

void BatteryMonitor_QueryNextStatus_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&status, handles);
}

BatteryMonitor_QueryNextStatus_ResponseParams_Data::BatteryMonitor_QueryNextStatus_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char BatteryMonitor::Name_[] = "device::BatteryMonitor";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t BatteryMonitor::Version_;
class BatteryMonitor_QueryNextStatus_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BatteryMonitor_QueryNextStatus_ForwardToCallback(
      const BatteryMonitor::QueryNextStatusCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BatteryMonitor::QueryNextStatusCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BatteryMonitor_QueryNextStatus_ForwardToCallback);
};
bool BatteryMonitor_QueryNextStatus_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data* params =
      reinterpret_cast<internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  device::BatteryStatusPtr p_status{};
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

BatteryMonitorProxy::BatteryMonitorProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void BatteryMonitorProxy::QueryNextStatus(
    const QueryNextStatusCallback& callback) {
  size_t size = sizeof(internal::BatteryMonitor_QueryNextStatus_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kBatteryMonitor_QueryNextStatus_Name, size);

  internal::BatteryMonitor_QueryNextStatus_Params_Data* params =
      internal::BatteryMonitor_QueryNextStatus_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new BatteryMonitor_QueryNextStatus_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class BatteryMonitor_QueryNextStatus_ProxyToResponder
    : public BatteryMonitor::QueryNextStatusCallback::Runnable {
 public:
  ~BatteryMonitor_QueryNextStatus_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "BatteryMonitor::QueryNextStatus(callback) "
        "was never run.";
  }

  BatteryMonitor_QueryNextStatus_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(device::BatteryStatusPtr in_status) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(BatteryMonitor_QueryNextStatus_ProxyToResponder);
};
void BatteryMonitor_QueryNextStatus_ProxyToResponder::Run(
    device::BatteryStatusPtr in_status) const {
  size_t size = sizeof(internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data);
  size += GetSerializedSize_(in_status);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kBatteryMonitor_QueryNextStatus_Name, size, request_id_);
  internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data* params =
      internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_status), builder.buffer(), &params->status.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->status.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null status in BatteryMonitor.QueryNextStatus response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

BatteryMonitorStub::BatteryMonitorStub()
    : sink_(nullptr),
      control_message_handler_(BatteryMonitor::Version_) {
}

BatteryMonitorStub::~BatteryMonitorStub() {}

bool BatteryMonitorStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kBatteryMonitor_QueryNextStatus_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.device.BatteryMonitor.QueryNextStatus", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool BatteryMonitorStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kBatteryMonitor_QueryNextStatus_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::device::BatteryMonitor::QueryNextStatus", __FILE__, __LINE__);
      internal::BatteryMonitor_QueryNextStatus_Params_Data* params =
          reinterpret_cast<internal::BatteryMonitor_QueryNextStatus_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      BatteryMonitor::QueryNextStatusCallback::Runnable* runnable =
          new BatteryMonitor_QueryNextStatus_ProxyToResponder(
              message->request_id(), responder);
      BatteryMonitor::QueryNextStatusCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BatteryMonitor::QueryNextStatus");
      sink_->QueryNextStatus(callback);
      return true;
    }
  }
  return false;
}

BatteryMonitorRequestValidator::BatteryMonitorRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool BatteryMonitorRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kBatteryMonitor_QueryNextStatus_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::BatteryMonitor_QueryNextStatus_Params_Data>(message)) {
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

BatteryMonitorResponseValidator::BatteryMonitorResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool BatteryMonitorResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kBatteryMonitor_QueryNextStatus_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BatteryMonitor_QueryNextStatus_ResponseParams_Data>(message)) {
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
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif