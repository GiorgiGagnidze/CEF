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

#include "mojo/shell/public/interfaces/content_handler.mojom.h"

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
const uint32_t kContentHandler_StartApplication_Name = 0;

class ContentHandler_StartApplication_Params_Data {
 public:
  static ContentHandler_StartApplication_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::MessagePipeHandle application;
  uint8_t pad0_[4];
  mojo::internal::StructPointer<mojo::internal::URLResponse_Data> response;

 private:
  ContentHandler_StartApplication_Params_Data();
  ~ContentHandler_StartApplication_Params_Data() = delete;
};
static_assert(sizeof(ContentHandler_StartApplication_Params_Data) == 24,
              "Bad sizeof(ContentHandler_StartApplication_Params_Data)");

// static
ContentHandler_StartApplication_Params_Data* ContentHandler_StartApplication_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ContentHandler_StartApplication_Params_Data))) ContentHandler_StartApplication_Params_Data();
}

// static
bool ContentHandler_StartApplication_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentHandler_StartApplication_Params_Data* object = static_cast<const ContentHandler_StartApplication_Params_Data*>(data);

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

  const mojo::Handle application_handle = object->application;
  if (!mojo::internal::ValidateHandleNonNullable(
          application_handle,
          "invalid application field in ContentHandler_StartApplication_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(application_handle, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->response, "null response field in ContentHandler_StartApplication_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response, bounds_checker))
    return false;

  return true;
}

void ContentHandler_StartApplication_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&application, handles);
  mojo::internal::Encode(&response, handles);
}

void ContentHandler_StartApplication_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&application, handles);
  mojo::internal::Decode(&response, handles);
}

ContentHandler_StartApplication_Params_Data::ContentHandler_StartApplication_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class ContentHandler_StartApplication_ResponseParams_Data {
 public:
  static ContentHandler_StartApplication_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  ContentHandler_StartApplication_ResponseParams_Data();
  ~ContentHandler_StartApplication_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentHandler_StartApplication_ResponseParams_Data) == 8,
              "Bad sizeof(ContentHandler_StartApplication_ResponseParams_Data)");

// static
ContentHandler_StartApplication_ResponseParams_Data* ContentHandler_StartApplication_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ContentHandler_StartApplication_ResponseParams_Data))) ContentHandler_StartApplication_ResponseParams_Data();
}

// static
bool ContentHandler_StartApplication_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ContentHandler_StartApplication_ResponseParams_Data* object = static_cast<const ContentHandler_StartApplication_ResponseParams_Data*>(data);

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

void ContentHandler_StartApplication_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ContentHandler_StartApplication_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ContentHandler_StartApplication_ResponseParams_Data::ContentHandler_StartApplication_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char ContentHandler::Name_[] = "mojo::ContentHandler";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ContentHandler::Version_;
class ContentHandler_StartApplication_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ContentHandler_StartApplication_ForwardToCallback(
      const ContentHandler::StartApplicationCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ContentHandler::StartApplicationCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ContentHandler_StartApplication_ForwardToCallback);
};
bool ContentHandler_StartApplication_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ContentHandler_StartApplication_ResponseParams_Data* params =
      reinterpret_cast<internal::ContentHandler_StartApplication_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
  } while (false);
  if (!success)
    return false;
  callback_.Run();
  return true;
}

ContentHandlerProxy::ContentHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ContentHandlerProxy::StartApplication(
    mojo::InterfaceRequest<mojo::Application> in_application, mojo::URLResponsePtr in_response, const StartApplicationCallback& callback) {
  size_t size = sizeof(internal::ContentHandler_StartApplication_Params_Data);
  size += GetSerializedSize_(in_response);
  mojo::internal::RequestMessageBuilder builder(internal::kContentHandler_StartApplication_Name, size);

  internal::ContentHandler_StartApplication_Params_Data* params =
      internal::ContentHandler_StartApplication_Params_Data::New(builder.buffer());
  params->application = in_application.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->application.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid application in ContentHandler.StartApplication request");
  Serialize_(std::move(in_response), builder.buffer(), &params->response.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->response.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in ContentHandler.StartApplication request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ContentHandler_StartApplication_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ContentHandler_StartApplication_ProxyToResponder
    : public ContentHandler::StartApplicationCallback::Runnable {
 public:
  ~ContentHandler_StartApplication_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "ContentHandler::StartApplication(std::move(p_application), std::move(p_response), callback) "
        "was never run.";
  }

  ContentHandler_StartApplication_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run() const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ContentHandler_StartApplication_ProxyToResponder);
};
void ContentHandler_StartApplication_ProxyToResponder::Run(
    ) const {
  size_t size = sizeof(internal::ContentHandler_StartApplication_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kContentHandler_StartApplication_Name, size, request_id_);
  internal::ContentHandler_StartApplication_ResponseParams_Data* params =
      internal::ContentHandler_StartApplication_ResponseParams_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

ContentHandlerStub::ContentHandlerStub()
    : sink_(nullptr),
      control_message_handler_(ContentHandler::Version_) {
}

ContentHandlerStub::~ContentHandlerStub() {}

bool ContentHandlerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kContentHandler_StartApplication_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.ContentHandler.StartApplication", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool ContentHandlerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kContentHandler_StartApplication_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::ContentHandler::StartApplication", __FILE__, __LINE__);
      internal::ContentHandler_StartApplication_Params_Data* params =
          reinterpret_cast<internal::ContentHandler_StartApplication_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::InterfaceRequest<mojo::Application> p_application{};
      mojo::URLResponsePtr p_response{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_application.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->application)));
        if (!Deserialize_(params->response.ptr, &p_response, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      ContentHandler::StartApplicationCallback::Runnable* runnable =
          new ContentHandler_StartApplication_ProxyToResponder(
              message->request_id(), responder);
      ContentHandler::StartApplicationCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ContentHandler::StartApplication");
      sink_->StartApplication(std::move(p_application), std::move(p_response), callback);
      return true;
    }
  }
  return false;
}

ContentHandlerRequestValidator::ContentHandlerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ContentHandlerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kContentHandler_StartApplication_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentHandler_StartApplication_Params_Data>(message)) {
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

ContentHandlerResponseValidator::ContentHandlerResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ContentHandlerResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kContentHandler_StartApplication_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ContentHandler_StartApplication_ResponseParams_Data>(message)) {
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