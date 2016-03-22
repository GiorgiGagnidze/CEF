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

#include "mojo/shell/public/interfaces/application.mojom.h"

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
const uint32_t kApplication_Initialize_Name = 0;

class Application_Initialize_Params_Data {
 public:
  static Application_Initialize_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data shell;
  mojo::internal::StringPointer url;
  uint32_t id;
  uint8_t padfinal_[4];

 private:
  Application_Initialize_Params_Data();
  ~Application_Initialize_Params_Data() = delete;
};
static_assert(sizeof(Application_Initialize_Params_Data) == 32,
              "Bad sizeof(Application_Initialize_Params_Data)");

// static
Application_Initialize_Params_Data* Application_Initialize_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Application_Initialize_Params_Data))) Application_Initialize_Params_Data();
}

// static
bool Application_Initialize_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Application_Initialize_Params_Data* object = static_cast<const Application_Initialize_Params_Data*>(data);

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

  const mojo::Handle shell_handle = object->shell.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          shell_handle,
          "invalid shell field in Application_Initialize_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(shell_handle, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->url, "null url field in Application_Initialize_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  return true;
}

void Application_Initialize_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&shell, handles);
  mojo::internal::Encode(&url, handles);
}

void Application_Initialize_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&shell, handles);
  mojo::internal::Decode(&url, handles);
}

Application_Initialize_Params_Data::Application_Initialize_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kApplication_AcceptConnection_Name = 1;

class Application_AcceptConnection_Params_Data {
 public:
  static Application_AcceptConnection_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer requestor_url;
  uint32_t requestor_id;
  mojo::MessagePipeHandle services;
  mojo::internal::Interface_Data exposed_services;
  mojo::internal::ArrayPointer<mojo::internal::String_Data*> allowed_interfaces;
  mojo::internal::StringPointer resolved_url;

 private:
  Application_AcceptConnection_Params_Data();
  ~Application_AcceptConnection_Params_Data() = delete;
};
static_assert(sizeof(Application_AcceptConnection_Params_Data) == 48,
              "Bad sizeof(Application_AcceptConnection_Params_Data)");

// static
Application_AcceptConnection_Params_Data* Application_AcceptConnection_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Application_AcceptConnection_Params_Data))) Application_AcceptConnection_Params_Data();
}

// static
bool Application_AcceptConnection_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Application_AcceptConnection_Params_Data* object = static_cast<const Application_AcceptConnection_Params_Data*>(data);

  static const struct {
    uint32_t version;
    uint32_t num_bytes;
  } kVersionSizes[] = {{ 0, 48 }};

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
          object->requestor_url, "null requestor_url field in Application_AcceptConnection_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams requestor_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->requestor_url, bounds_checker,
                                     &requestor_url_validate_params)) {
    return false;
  }

  const mojo::Handle services_handle = object->services;
  if (!mojo::internal::ValidateHandle(services_handle, bounds_checker))
    return false;

  const mojo::Handle exposed_services_handle = object->exposed_services.handle;
  if (!mojo::internal::ValidateHandle(exposed_services_handle, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->allowed_interfaces, "null allowed_interfaces field in Application_AcceptConnection_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams allowed_interfaces_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateArray(object->allowed_interfaces, bounds_checker,
                                     &allowed_interfaces_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->resolved_url, "null resolved_url field in Application_AcceptConnection_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams resolved_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->resolved_url, bounds_checker,
                                     &resolved_url_validate_params)) {
    return false;
  }

  return true;
}

void Application_AcceptConnection_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&requestor_url, handles);
  mojo::internal::EncodeHandle(&services, handles);
  mojo::internal::EncodeHandle(&exposed_services, handles);
  mojo::internal::Encode(&allowed_interfaces, handles);
  mojo::internal::Encode(&resolved_url, handles);
}

void Application_AcceptConnection_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&requestor_url, handles);
  mojo::internal::DecodeHandle(&services, handles);
  mojo::internal::DecodeHandle(&exposed_services, handles);
  mojo::internal::Decode(&allowed_interfaces, handles);
  mojo::internal::Decode(&resolved_url, handles);
}

Application_AcceptConnection_Params_Data::Application_AcceptConnection_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kApplication_OnQuitRequested_Name = 2;

class Application_OnQuitRequested_Params_Data {
 public:
  static Application_OnQuitRequested_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  Application_OnQuitRequested_Params_Data();
  ~Application_OnQuitRequested_Params_Data() = delete;
};
static_assert(sizeof(Application_OnQuitRequested_Params_Data) == 8,
              "Bad sizeof(Application_OnQuitRequested_Params_Data)");

// static
Application_OnQuitRequested_Params_Data* Application_OnQuitRequested_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Application_OnQuitRequested_Params_Data))) Application_OnQuitRequested_Params_Data();
}

// static
bool Application_OnQuitRequested_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Application_OnQuitRequested_Params_Data* object = static_cast<const Application_OnQuitRequested_Params_Data*>(data);

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

void Application_OnQuitRequested_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Application_OnQuitRequested_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Application_OnQuitRequested_Params_Data::Application_OnQuitRequested_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Application_OnQuitRequested_ResponseParams_Data {
 public:
  static Application_OnQuitRequested_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t can_quit : 1;
  uint8_t padfinal_[7];

 private:
  Application_OnQuitRequested_ResponseParams_Data();
  ~Application_OnQuitRequested_ResponseParams_Data() = delete;
};
static_assert(sizeof(Application_OnQuitRequested_ResponseParams_Data) == 16,
              "Bad sizeof(Application_OnQuitRequested_ResponseParams_Data)");

// static
Application_OnQuitRequested_ResponseParams_Data* Application_OnQuitRequested_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Application_OnQuitRequested_ResponseParams_Data))) Application_OnQuitRequested_ResponseParams_Data();
}

// static
bool Application_OnQuitRequested_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Application_OnQuitRequested_ResponseParams_Data* object = static_cast<const Application_OnQuitRequested_ResponseParams_Data*>(data);

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

void Application_OnQuitRequested_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Application_OnQuitRequested_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Application_OnQuitRequested_ResponseParams_Data::Application_OnQuitRequested_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char Application::Name_[] = "mojo::Application";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t Application::Version_;
class Application_OnQuitRequested_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Application_OnQuitRequested_ForwardToCallback(
      const Application::OnQuitRequestedCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Application::OnQuitRequestedCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Application_OnQuitRequested_ForwardToCallback);
};
bool Application_OnQuitRequested_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Application_OnQuitRequested_ResponseParams_Data* params =
      reinterpret_cast<internal::Application_OnQuitRequested_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  bool p_can_quit{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_can_quit = params->can_quit;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_can_quit);
  return true;
}

ApplicationProxy::ApplicationProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ApplicationProxy::Initialize(
    mojo::ShellPtr in_shell, const mojo::String& in_url, uint32_t in_id) {
  size_t size = sizeof(internal::Application_Initialize_Params_Data);
  size += GetSerializedSize_(in_url);
  mojo::internal::MessageBuilder builder(internal::kApplication_Initialize_Name, size);

  internal::Application_Initialize_Params_Data* params =
      internal::Application_Initialize_Params_Data::New(builder.buffer());
  mojo::internal::InterfacePointerToData(std::move(in_shell), &params->shell);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->shell.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid shell in Application.Initialize request");
  Serialize_(std::move(in_url), builder.buffer(), &params->url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in Application.Initialize request");
  params->id = in_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ApplicationProxy::AcceptConnection(
    const mojo::String& in_requestor_url, uint32_t in_requestor_id, mojo::InterfaceRequest<mojo::ServiceProvider> in_services, mojo::ServiceProviderPtr in_exposed_services, mojo::Array<mojo::String> in_allowed_interfaces, const mojo::String& in_resolved_url) {
  size_t size = sizeof(internal::Application_AcceptConnection_Params_Data);
  size += GetSerializedSize_(in_requestor_url);
  size += GetSerializedSize_(in_allowed_interfaces);
  size += GetSerializedSize_(in_resolved_url);
  mojo::internal::MessageBuilder builder(internal::kApplication_AcceptConnection_Name, size);

  internal::Application_AcceptConnection_Params_Data* params =
      internal::Application_AcceptConnection_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_requestor_url), builder.buffer(), &params->requestor_url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->requestor_url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null requestor_url in Application.AcceptConnection request");
  params->requestor_id = in_requestor_id;
  params->services = in_services.PassMessagePipe().release();
  mojo::internal::InterfacePointerToData(std::move(in_exposed_services), &params->exposed_services);
  const mojo::internal::ArrayValidateParams allowed_interfaces_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  mojo::SerializeArray_(std::move(in_allowed_interfaces), builder.buffer(),
      &params->allowed_interfaces.ptr, &allowed_interfaces_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->allowed_interfaces.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null allowed_interfaces in Application.AcceptConnection request");
  Serialize_(std::move(in_resolved_url), builder.buffer(), &params->resolved_url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->resolved_url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null resolved_url in Application.AcceptConnection request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ApplicationProxy::OnQuitRequested(
    const OnQuitRequestedCallback& callback) {
  size_t size = sizeof(internal::Application_OnQuitRequested_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kApplication_OnQuitRequested_Name, size);

  internal::Application_OnQuitRequested_Params_Data* params =
      internal::Application_OnQuitRequested_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Application_OnQuitRequested_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class Application_OnQuitRequested_ProxyToResponder
    : public Application::OnQuitRequestedCallback::Runnable {
 public:
  ~Application_OnQuitRequested_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Application::OnQuitRequested(callback) "
        "was never run.";
  }

  Application_OnQuitRequested_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_can_quit) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Application_OnQuitRequested_ProxyToResponder);
};
void Application_OnQuitRequested_ProxyToResponder::Run(
    bool in_can_quit) const {
  size_t size = sizeof(internal::Application_OnQuitRequested_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kApplication_OnQuitRequested_Name, size, request_id_);
  internal::Application_OnQuitRequested_ResponseParams_Data* params =
      internal::Application_OnQuitRequested_ResponseParams_Data::New(builder.buffer());
  params->can_quit = in_can_quit;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

ApplicationStub::ApplicationStub()
    : sink_(nullptr),
      control_message_handler_(Application::Version_) {
}

ApplicationStub::~ApplicationStub() {}

bool ApplicationStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kApplication_Initialize_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.Application.Initialize", __FILE__, __LINE__);
      internal::Application_Initialize_Params_Data* params =
          reinterpret_cast<internal::Application_Initialize_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::ShellPtr p_shell{};
      mojo::String p_url{};
      uint32_t p_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        mojo::internal::InterfaceDataToPointer(&params->shell, &p_shell);
        if (!Deserialize_(params->url.ptr, &p_url, &serialization_context_))
          success = false;
        p_id = params->id;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Application::Initialize");
      sink_->Initialize(std::move(p_shell), p_url, p_id);
      return true;
    }
    case internal::kApplication_AcceptConnection_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.Application.AcceptConnection", __FILE__, __LINE__);
      internal::Application_AcceptConnection_Params_Data* params =
          reinterpret_cast<internal::Application_AcceptConnection_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_requestor_url{};
      uint32_t p_requestor_id{};
      mojo::InterfaceRequest<mojo::ServiceProvider> p_services{};
      mojo::ServiceProviderPtr p_exposed_services{};
      mojo::Array<mojo::String> p_allowed_interfaces{};
      mojo::String p_resolved_url{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->requestor_url.ptr, &p_requestor_url, &serialization_context_))
          success = false;
        p_requestor_id = params->requestor_id;
        p_services.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->services)));
        mojo::internal::InterfaceDataToPointer(&params->exposed_services, &p_exposed_services);
        if (!Deserialize_(params->allowed_interfaces.ptr, &p_allowed_interfaces, &serialization_context_))
          success = false;
        if (!Deserialize_(params->resolved_url.ptr, &p_resolved_url, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Application::AcceptConnection");
      sink_->AcceptConnection(p_requestor_url, p_requestor_id, std::move(p_services), std::move(p_exposed_services), std::move(p_allowed_interfaces), p_resolved_url);
      return true;
    }
    case internal::kApplication_OnQuitRequested_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.Application.OnQuitRequested", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool ApplicationStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kApplication_Initialize_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::Application::Initialize", __FILE__, __LINE__);
      break;
    }
    case internal::kApplication_AcceptConnection_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::Application::AcceptConnection", __FILE__, __LINE__);
      break;
    }
    case internal::kApplication_OnQuitRequested_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::Application::OnQuitRequested", __FILE__, __LINE__);
      internal::Application_OnQuitRequested_Params_Data* params =
          reinterpret_cast<internal::Application_OnQuitRequested_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      Application::OnQuitRequestedCallback::Runnable* runnable =
          new Application_OnQuitRequested_ProxyToResponder(
              message->request_id(), responder);
      Application::OnQuitRequestedCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Application::OnQuitRequested");
      sink_->OnQuitRequested(callback);
      return true;
    }
  }
  return false;
}

ApplicationRequestValidator::ApplicationRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ApplicationRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kApplication_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Application_Initialize_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kApplication_AcceptConnection_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Application_AcceptConnection_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kApplication_OnQuitRequested_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Application_OnQuitRequested_Params_Data>(message)) {
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

ApplicationResponseValidator::ApplicationResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ApplicationResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kApplication_OnQuitRequested_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Application_OnQuitRequested_ResponseParams_Data>(message)) {
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