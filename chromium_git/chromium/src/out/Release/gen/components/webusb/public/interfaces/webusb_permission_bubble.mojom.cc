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

#include "components/webusb/public/interfaces/webusb_permission_bubble.mojom.h"

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
namespace webusb {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kWebUsbPermissionBubble_GetPermission_Name = 0;

class WebUsbPermissionBubble_GetPermission_Params_Data {
 public:
  static WebUsbPermissionBubble_GetPermission_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::ArrayPointer<device::usb::internal::DeviceFilter_Data*> device_filters;

 private:
  WebUsbPermissionBubble_GetPermission_Params_Data();
  ~WebUsbPermissionBubble_GetPermission_Params_Data() = delete;
};
static_assert(sizeof(WebUsbPermissionBubble_GetPermission_Params_Data) == 16,
              "Bad sizeof(WebUsbPermissionBubble_GetPermission_Params_Data)");

// static
WebUsbPermissionBubble_GetPermission_Params_Data* WebUsbPermissionBubble_GetPermission_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebUsbPermissionBubble_GetPermission_Params_Data))) WebUsbPermissionBubble_GetPermission_Params_Data();
}

// static
bool WebUsbPermissionBubble_GetPermission_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebUsbPermissionBubble_GetPermission_Params_Data* object = static_cast<const WebUsbPermissionBubble_GetPermission_Params_Data*>(data);

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
          object->device_filters, "null device_filters field in WebUsbPermissionBubble_GetPermission_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams device_filters_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->device_filters, bounds_checker,
                                     &device_filters_validate_params)) {
    return false;
  }

  return true;
}

void WebUsbPermissionBubble_GetPermission_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&device_filters, handles);
}

void WebUsbPermissionBubble_GetPermission_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&device_filters, handles);
}

WebUsbPermissionBubble_GetPermission_Params_Data::WebUsbPermissionBubble_GetPermission_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class WebUsbPermissionBubble_GetPermission_ResponseParams_Data {
 public:
  static WebUsbPermissionBubble_GetPermission_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<device::usb::internal::DeviceInfo_Data> result;

 private:
  WebUsbPermissionBubble_GetPermission_ResponseParams_Data();
  ~WebUsbPermissionBubble_GetPermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebUsbPermissionBubble_GetPermission_ResponseParams_Data) == 16,
              "Bad sizeof(WebUsbPermissionBubble_GetPermission_ResponseParams_Data)");

// static
WebUsbPermissionBubble_GetPermission_ResponseParams_Data* WebUsbPermissionBubble_GetPermission_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebUsbPermissionBubble_GetPermission_ResponseParams_Data))) WebUsbPermissionBubble_GetPermission_ResponseParams_Data();
}

// static
bool WebUsbPermissionBubble_GetPermission_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebUsbPermissionBubble_GetPermission_ResponseParams_Data* object = static_cast<const WebUsbPermissionBubble_GetPermission_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  return true;
}

void WebUsbPermissionBubble_GetPermission_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
}

void WebUsbPermissionBubble_GetPermission_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
}

WebUsbPermissionBubble_GetPermission_ResponseParams_Data::WebUsbPermissionBubble_GetPermission_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char WebUsbPermissionBubble::Name_[] = "webusb::WebUsbPermissionBubble";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t WebUsbPermissionBubble::Version_;
class WebUsbPermissionBubble_GetPermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebUsbPermissionBubble_GetPermission_ForwardToCallback(
      const WebUsbPermissionBubble::GetPermissionCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebUsbPermissionBubble::GetPermissionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(WebUsbPermissionBubble_GetPermission_ForwardToCallback);
};
bool WebUsbPermissionBubble_GetPermission_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::WebUsbPermissionBubble_GetPermission_ResponseParams_Data* params =
      reinterpret_cast<internal::WebUsbPermissionBubble_GetPermission_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  device::usb::DeviceInfoPtr p_result{};
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

WebUsbPermissionBubbleProxy::WebUsbPermissionBubbleProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void WebUsbPermissionBubbleProxy::GetPermission(
    mojo::Array<device::usb::DeviceFilterPtr> in_device_filters, const GetPermissionCallback& callback) {
  size_t size = sizeof(internal::WebUsbPermissionBubble_GetPermission_Params_Data);
  size += GetSerializedSize_(in_device_filters);
  mojo::internal::RequestMessageBuilder builder(internal::kWebUsbPermissionBubble_GetPermission_Name, size);

  internal::WebUsbPermissionBubble_GetPermission_Params_Data* params =
      internal::WebUsbPermissionBubble_GetPermission_Params_Data::New(builder.buffer());
  const mojo::internal::ArrayValidateParams device_filters_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_device_filters), builder.buffer(),
      &params->device_filters.ptr, &device_filters_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->device_filters.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_filters in WebUsbPermissionBubble.GetPermission request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new WebUsbPermissionBubble_GetPermission_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class WebUsbPermissionBubble_GetPermission_ProxyToResponder
    : public WebUsbPermissionBubble::GetPermissionCallback::Runnable {
 public:
  ~WebUsbPermissionBubble_GetPermission_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "WebUsbPermissionBubble::GetPermission(std::move(p_device_filters), callback) "
        "was never run.";
  }

  WebUsbPermissionBubble_GetPermission_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(device::usb::DeviceInfoPtr in_result) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(WebUsbPermissionBubble_GetPermission_ProxyToResponder);
};
void WebUsbPermissionBubble_GetPermission_ProxyToResponder::Run(
    device::usb::DeviceInfoPtr in_result) const {
  size_t size = sizeof(internal::WebUsbPermissionBubble_GetPermission_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kWebUsbPermissionBubble_GetPermission_Name, size, request_id_);
  internal::WebUsbPermissionBubble_GetPermission_ResponseParams_Data* params =
      internal::WebUsbPermissionBubble_GetPermission_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

WebUsbPermissionBubbleStub::WebUsbPermissionBubbleStub()
    : sink_(nullptr),
      control_message_handler_(WebUsbPermissionBubble::Version_) {
}

WebUsbPermissionBubbleStub::~WebUsbPermissionBubbleStub() {}

bool WebUsbPermissionBubbleStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWebUsbPermissionBubble_GetPermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.webusb.WebUsbPermissionBubble.GetPermission", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool WebUsbPermissionBubbleStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWebUsbPermissionBubble_GetPermission_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::webusb::WebUsbPermissionBubble::GetPermission", __FILE__, __LINE__);
      internal::WebUsbPermissionBubble_GetPermission_Params_Data* params =
          reinterpret_cast<internal::WebUsbPermissionBubble_GetPermission_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::Array<device::usb::DeviceFilterPtr> p_device_filters{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->device_filters.ptr, &p_device_filters, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      WebUsbPermissionBubble::GetPermissionCallback::Runnable* runnable =
          new WebUsbPermissionBubble_GetPermission_ProxyToResponder(
              message->request_id(), responder);
      WebUsbPermissionBubble::GetPermissionCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebUsbPermissionBubble::GetPermission");
      sink_->GetPermission(std::move(p_device_filters), callback);
      return true;
    }
  }
  return false;
}

WebUsbPermissionBubbleRequestValidator::WebUsbPermissionBubbleRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WebUsbPermissionBubbleRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWebUsbPermissionBubble_GetPermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebUsbPermissionBubble_GetPermission_Params_Data>(message)) {
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

WebUsbPermissionBubbleResponseValidator::WebUsbPermissionBubbleResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WebUsbPermissionBubbleResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kWebUsbPermissionBubble_GetPermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebUsbPermissionBubble_GetPermission_ResponseParams_Data>(message)) {
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
}  // namespace webusb

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif