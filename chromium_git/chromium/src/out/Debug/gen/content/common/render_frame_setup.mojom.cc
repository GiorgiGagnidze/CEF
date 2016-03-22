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

#include "content/common/render_frame_setup.mojom.h"

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
const uint32_t kRenderFrameSetup_ExchangeServiceProviders_Name = 0;

class RenderFrameSetup_ExchangeServiceProviders_Params_Data {
 public:
  static RenderFrameSetup_ExchangeServiceProviders_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t frame_routing_id;
  mojo::MessagePipeHandle services;
  mojo::internal::Interface_Data exposed_services;

 private:
  RenderFrameSetup_ExchangeServiceProviders_Params_Data();
  ~RenderFrameSetup_ExchangeServiceProviders_Params_Data() = delete;
};
static_assert(sizeof(RenderFrameSetup_ExchangeServiceProviders_Params_Data) == 24,
              "Bad sizeof(RenderFrameSetup_ExchangeServiceProviders_Params_Data)");

// static
RenderFrameSetup_ExchangeServiceProviders_Params_Data* RenderFrameSetup_ExchangeServiceProviders_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(RenderFrameSetup_ExchangeServiceProviders_Params_Data))) RenderFrameSetup_ExchangeServiceProviders_Params_Data();
}

// static
bool RenderFrameSetup_ExchangeServiceProviders_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const RenderFrameSetup_ExchangeServiceProviders_Params_Data* object = static_cast<const RenderFrameSetup_ExchangeServiceProviders_Params_Data*>(data);

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

  const mojo::Handle services_handle = object->services;
  if (!mojo::internal::ValidateHandleNonNullable(
          services_handle,
          "invalid services field in RenderFrameSetup_ExchangeServiceProviders_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(services_handle, bounds_checker))
    return false;

  const mojo::Handle exposed_services_handle = object->exposed_services.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          exposed_services_handle,
          "invalid exposed_services field in RenderFrameSetup_ExchangeServiceProviders_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(exposed_services_handle, bounds_checker))
    return false;

  return true;
}

void RenderFrameSetup_ExchangeServiceProviders_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&services, handles);
  mojo::internal::EncodeHandle(&exposed_services, handles);
}

void RenderFrameSetup_ExchangeServiceProviders_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&services, handles);
  mojo::internal::DecodeHandle(&exposed_services, handles);
}

RenderFrameSetup_ExchangeServiceProviders_Params_Data::RenderFrameSetup_ExchangeServiceProviders_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char RenderFrameSetup::Name_[] = "content::RenderFrameSetup";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t RenderFrameSetup::Version_;

RenderFrameSetupProxy::RenderFrameSetupProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void RenderFrameSetupProxy::ExchangeServiceProviders(
    int32_t in_frame_routing_id, mojo::InterfaceRequest<mojo::ServiceProvider> in_services, mojo::ServiceProviderPtr in_exposed_services) {
  size_t size = sizeof(internal::RenderFrameSetup_ExchangeServiceProviders_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kRenderFrameSetup_ExchangeServiceProviders_Name, size);

  internal::RenderFrameSetup_ExchangeServiceProviders_Params_Data* params =
      internal::RenderFrameSetup_ExchangeServiceProviders_Params_Data::New(builder.buffer());
  params->frame_routing_id = in_frame_routing_id;
  params->services = in_services.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->services.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid services in RenderFrameSetup.ExchangeServiceProviders request");
  mojo::internal::InterfacePointerToData(std::move(in_exposed_services), &params->exposed_services);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->exposed_services.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid exposed_services in RenderFrameSetup.ExchangeServiceProviders request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

RenderFrameSetupStub::RenderFrameSetupStub()
    : sink_(nullptr),
      control_message_handler_(RenderFrameSetup::Version_) {
}

RenderFrameSetupStub::~RenderFrameSetupStub() {}

bool RenderFrameSetupStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kRenderFrameSetup_ExchangeServiceProviders_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.RenderFrameSetup.ExchangeServiceProviders", __FILE__, __LINE__);
      internal::RenderFrameSetup_ExchangeServiceProviders_Params_Data* params =
          reinterpret_cast<internal::RenderFrameSetup_ExchangeServiceProviders_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int32_t p_frame_routing_id{};
      mojo::InterfaceRequest<mojo::ServiceProvider> p_services{};
      mojo::ServiceProviderPtr p_exposed_services{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_frame_routing_id = params->frame_routing_id;
        p_services.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->services)));
        mojo::internal::InterfaceDataToPointer(&params->exposed_services, &p_exposed_services);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "RenderFrameSetup::ExchangeServiceProviders");
      sink_->ExchangeServiceProviders(p_frame_routing_id, std::move(p_services), std::move(p_exposed_services));
      return true;
    }
  }
  return false;
}

bool RenderFrameSetupStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kRenderFrameSetup_ExchangeServiceProviders_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::RenderFrameSetup::ExchangeServiceProviders", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

RenderFrameSetupRequestValidator::RenderFrameSetupRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool RenderFrameSetupRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kRenderFrameSetup_ExchangeServiceProviders_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderFrameSetup_ExchangeServiceProviders_Params_Data>(message)) {
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