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

#include "mojo/shell/public/interfaces/service_provider.mojom.h"

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
const uint32_t kServiceProvider_ConnectToService_Name = 0;

class ServiceProvider_ConnectToService_Params_Data {
 public:
  static ServiceProvider_ConnectToService_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer interface_name;
  mojo::MessagePipeHandle pipe;
  uint8_t padfinal_[4];

 private:
  ServiceProvider_ConnectToService_Params_Data();
  ~ServiceProvider_ConnectToService_Params_Data() = delete;
};
static_assert(sizeof(ServiceProvider_ConnectToService_Params_Data) == 24,
              "Bad sizeof(ServiceProvider_ConnectToService_Params_Data)");

// static
ServiceProvider_ConnectToService_Params_Data* ServiceProvider_ConnectToService_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ServiceProvider_ConnectToService_Params_Data))) ServiceProvider_ConnectToService_Params_Data();
}

// static
bool ServiceProvider_ConnectToService_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServiceProvider_ConnectToService_Params_Data* object = static_cast<const ServiceProvider_ConnectToService_Params_Data*>(data);

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
          object->interface_name, "null interface_name field in ServiceProvider_ConnectToService_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams interface_name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->interface_name, bounds_checker,
                                     &interface_name_validate_params)) {
    return false;
  }

  const mojo::Handle pipe_handle = object->pipe;
  if (!mojo::internal::ValidateHandleNonNullable(
          pipe_handle,
          "invalid pipe field in ServiceProvider_ConnectToService_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(pipe_handle, bounds_checker))
    return false;

  return true;
}

void ServiceProvider_ConnectToService_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&interface_name, handles);
  mojo::internal::EncodeHandle(&pipe, handles);
}

void ServiceProvider_ConnectToService_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&interface_name, handles);
  mojo::internal::DecodeHandle(&pipe, handles);
}

ServiceProvider_ConnectToService_Params_Data::ServiceProvider_ConnectToService_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char ServiceProvider::Name_[] = "mojo::ServiceProvider";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ServiceProvider::Version_;

ServiceProviderProxy::ServiceProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ServiceProviderProxy::ConnectToService(
    const mojo::String& in_interface_name, mojo::ScopedMessagePipeHandle in_pipe) {
  size_t size = sizeof(internal::ServiceProvider_ConnectToService_Params_Data);
  size += GetSerializedSize_(in_interface_name);
  mojo::internal::MessageBuilder builder(internal::kServiceProvider_ConnectToService_Name, size);

  internal::ServiceProvider_ConnectToService_Params_Data* params =
      internal::ServiceProvider_ConnectToService_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_interface_name), builder.buffer(), &params->interface_name.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->interface_name.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null interface_name in ServiceProvider.ConnectToService request");
  params->pipe = in_pipe.release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->pipe.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid pipe in ServiceProvider.ConnectToService request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

ServiceProviderStub::ServiceProviderStub()
    : sink_(nullptr),
      control_message_handler_(ServiceProvider::Version_) {
}

ServiceProviderStub::~ServiceProviderStub() {}

bool ServiceProviderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kServiceProvider_ConnectToService_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.ServiceProvider.ConnectToService", __FILE__, __LINE__);
      internal::ServiceProvider_ConnectToService_Params_Data* params =
          reinterpret_cast<internal::ServiceProvider_ConnectToService_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_interface_name{};
      mojo::ScopedMessagePipeHandle p_pipe{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->interface_name.ptr, &p_interface_name, &serialization_context_))
          success = false;
        p_pipe.reset(mojo::internal::FetchAndReset(&params->pipe));
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServiceProvider::ConnectToService");
      sink_->ConnectToService(p_interface_name, std::move(p_pipe));
      return true;
    }
  }
  return false;
}

bool ServiceProviderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kServiceProvider_ConnectToService_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::ServiceProvider::ConnectToService", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

ServiceProviderRequestValidator::ServiceProviderRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ServiceProviderRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kServiceProvider_ConnectToService_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceProvider_ConnectToService_Params_Data>(message)) {
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