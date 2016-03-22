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

#include "content/common/process_control.mojom.h"

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
const uint32_t kProcessControl_LoadApplication_Name = 0;

class ProcessControl_LoadApplication_Params_Data {
 public:
  static ProcessControl_LoadApplication_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;
  mojo::MessagePipeHandle request;
  uint8_t padfinal_[4];

 private:
  ProcessControl_LoadApplication_Params_Data();
  ~ProcessControl_LoadApplication_Params_Data() = delete;
};
static_assert(sizeof(ProcessControl_LoadApplication_Params_Data) == 24,
              "Bad sizeof(ProcessControl_LoadApplication_Params_Data)");

// static
ProcessControl_LoadApplication_Params_Data* ProcessControl_LoadApplication_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProcessControl_LoadApplication_Params_Data))) ProcessControl_LoadApplication_Params_Data();
}

// static
bool ProcessControl_LoadApplication_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProcessControl_LoadApplication_Params_Data* object = static_cast<const ProcessControl_LoadApplication_Params_Data*>(data);

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
          object->url, "null url field in ProcessControl_LoadApplication_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  const mojo::Handle request_handle = object->request;
  if (!mojo::internal::ValidateHandleNonNullable(
          request_handle,
          "invalid request field in ProcessControl_LoadApplication_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(request_handle, bounds_checker))
    return false;

  return true;
}

void ProcessControl_LoadApplication_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
  mojo::internal::EncodeHandle(&request, handles);
}

void ProcessControl_LoadApplication_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
  mojo::internal::DecodeHandle(&request, handles);
}

ProcessControl_LoadApplication_Params_Data::ProcessControl_LoadApplication_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class ProcessControl_LoadApplication_ResponseParams_Data {
 public:
  static ProcessControl_LoadApplication_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  ProcessControl_LoadApplication_ResponseParams_Data();
  ~ProcessControl_LoadApplication_ResponseParams_Data() = delete;
};
static_assert(sizeof(ProcessControl_LoadApplication_ResponseParams_Data) == 16,
              "Bad sizeof(ProcessControl_LoadApplication_ResponseParams_Data)");

// static
ProcessControl_LoadApplication_ResponseParams_Data* ProcessControl_LoadApplication_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProcessControl_LoadApplication_ResponseParams_Data))) ProcessControl_LoadApplication_ResponseParams_Data();
}

// static
bool ProcessControl_LoadApplication_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProcessControl_LoadApplication_ResponseParams_Data* object = static_cast<const ProcessControl_LoadApplication_ResponseParams_Data*>(data);

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

void ProcessControl_LoadApplication_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ProcessControl_LoadApplication_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ProcessControl_LoadApplication_ResponseParams_Data::ProcessControl_LoadApplication_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char ProcessControl::Name_[] = "content::ProcessControl";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ProcessControl::Version_;
class ProcessControl_LoadApplication_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ProcessControl_LoadApplication_ForwardToCallback(
      const ProcessControl::LoadApplicationCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ProcessControl::LoadApplicationCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ProcessControl_LoadApplication_ForwardToCallback);
};
bool ProcessControl_LoadApplication_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ProcessControl_LoadApplication_ResponseParams_Data* params =
      reinterpret_cast<internal::ProcessControl_LoadApplication_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  bool p_success{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_success = params->success;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_success);
  return true;
}

ProcessControlProxy::ProcessControlProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ProcessControlProxy::LoadApplication(
    const mojo::String& in_url, mojo::InterfaceRequest<mojo::Application> in_request, const LoadApplicationCallback& callback) {
  size_t size = sizeof(internal::ProcessControl_LoadApplication_Params_Data);
  size += GetSerializedSize_(in_url);
  mojo::internal::RequestMessageBuilder builder(internal::kProcessControl_LoadApplication_Name, size);

  internal::ProcessControl_LoadApplication_Params_Data* params =
      internal::ProcessControl_LoadApplication_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_url), builder.buffer(), &params->url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ProcessControl.LoadApplication request");
  params->request = in_request.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->request.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in ProcessControl.LoadApplication request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ProcessControl_LoadApplication_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ProcessControl_LoadApplication_ProxyToResponder
    : public ProcessControl::LoadApplicationCallback::Runnable {
 public:
  ~ProcessControl_LoadApplication_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "ProcessControl::LoadApplication(p_url, std::move(p_request), callback) "
        "was never run.";
  }

  ProcessControl_LoadApplication_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ProcessControl_LoadApplication_ProxyToResponder);
};
void ProcessControl_LoadApplication_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::ProcessControl_LoadApplication_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kProcessControl_LoadApplication_Name, size, request_id_);
  internal::ProcessControl_LoadApplication_ResponseParams_Data* params =
      internal::ProcessControl_LoadApplication_ResponseParams_Data::New(builder.buffer());
  params->success = in_success;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

ProcessControlStub::ProcessControlStub()
    : sink_(nullptr),
      control_message_handler_(ProcessControl::Version_) {
}

ProcessControlStub::~ProcessControlStub() {}

bool ProcessControlStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kProcessControl_LoadApplication_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.ProcessControl.LoadApplication", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool ProcessControlStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kProcessControl_LoadApplication_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::ProcessControl::LoadApplication", __FILE__, __LINE__);
      internal::ProcessControl_LoadApplication_Params_Data* params =
          reinterpret_cast<internal::ProcessControl_LoadApplication_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_url{};
      mojo::InterfaceRequest<mojo::Application> p_request{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->url.ptr, &p_url, &serialization_context_))
          success = false;
        p_request.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->request)));
      } while (false);
      if (!success)
        return false;
      ProcessControl::LoadApplicationCallback::Runnable* runnable =
          new ProcessControl_LoadApplication_ProxyToResponder(
              message->request_id(), responder);
      ProcessControl::LoadApplicationCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ProcessControl::LoadApplication");
      sink_->LoadApplication(p_url, std::move(p_request), callback);
      return true;
    }
  }
  return false;
}

ProcessControlRequestValidator::ProcessControlRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ProcessControlRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kProcessControl_LoadApplication_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessControl_LoadApplication_Params_Data>(message)) {
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

ProcessControlResponseValidator::ProcessControlResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ProcessControlResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kProcessControl_LoadApplication_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProcessControl_LoadApplication_ResponseParams_Data>(message)) {
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