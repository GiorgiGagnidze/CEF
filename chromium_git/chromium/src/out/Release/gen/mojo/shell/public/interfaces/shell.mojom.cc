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

#include "mojo/shell/public/interfaces/shell.mojom.h"

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
const uint32_t kShell_ConnectToApplication_Name = 0;

class Shell_ConnectToApplication_Params_Data {
 public:
  static Shell_ConnectToApplication_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::URLRequest_Data> application_url;
  mojo::MessagePipeHandle services;
  mojo::internal::Interface_Data exposed_services;
  uint8_t pad2_[4];
  mojo::internal::StructPointer<internal::CapabilityFilter_Data> filter;

 private:
  Shell_ConnectToApplication_Params_Data();
  ~Shell_ConnectToApplication_Params_Data() = delete;
};
static_assert(sizeof(Shell_ConnectToApplication_Params_Data) == 40,
              "Bad sizeof(Shell_ConnectToApplication_Params_Data)");

// static
Shell_ConnectToApplication_Params_Data* Shell_ConnectToApplication_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Shell_ConnectToApplication_Params_Data))) Shell_ConnectToApplication_Params_Data();
}

// static
bool Shell_ConnectToApplication_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Shell_ConnectToApplication_Params_Data* object = static_cast<const Shell_ConnectToApplication_Params_Data*>(data);

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
          object->application_url, "null application_url field in Shell_ConnectToApplication_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->application_url, bounds_checker))
    return false;

  const mojo::Handle services_handle = object->services;
  if (!mojo::internal::ValidateHandle(services_handle, bounds_checker))
    return false;

  const mojo::Handle exposed_services_handle = object->exposed_services.handle;
  if (!mojo::internal::ValidateHandle(exposed_services_handle, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->filter, "null filter field in Shell_ConnectToApplication_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->filter, bounds_checker))
    return false;

  return true;
}

void Shell_ConnectToApplication_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&application_url, handles);
  mojo::internal::EncodeHandle(&services, handles);
  mojo::internal::EncodeHandle(&exposed_services, handles);
  mojo::internal::Encode(&filter, handles);
}

void Shell_ConnectToApplication_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&application_url, handles);
  mojo::internal::DecodeHandle(&services, handles);
  mojo::internal::DecodeHandle(&exposed_services, handles);
  mojo::internal::Decode(&filter, handles);
}

Shell_ConnectToApplication_Params_Data::Shell_ConnectToApplication_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class Shell_ConnectToApplication_ResponseParams_Data {
 public:
  static Shell_ConnectToApplication_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t application_id;
  uint32_t content_handler_id;

 private:
  Shell_ConnectToApplication_ResponseParams_Data();
  ~Shell_ConnectToApplication_ResponseParams_Data() = delete;
};
static_assert(sizeof(Shell_ConnectToApplication_ResponseParams_Data) == 16,
              "Bad sizeof(Shell_ConnectToApplication_ResponseParams_Data)");

// static
Shell_ConnectToApplication_ResponseParams_Data* Shell_ConnectToApplication_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Shell_ConnectToApplication_ResponseParams_Data))) Shell_ConnectToApplication_ResponseParams_Data();
}

// static
bool Shell_ConnectToApplication_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Shell_ConnectToApplication_ResponseParams_Data* object = static_cast<const Shell_ConnectToApplication_ResponseParams_Data*>(data);

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

void Shell_ConnectToApplication_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Shell_ConnectToApplication_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Shell_ConnectToApplication_ResponseParams_Data::Shell_ConnectToApplication_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kShell_QuitApplication_Name = 1;

class Shell_QuitApplication_Params_Data {
 public:
  static Shell_QuitApplication_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  Shell_QuitApplication_Params_Data();
  ~Shell_QuitApplication_Params_Data() = delete;
};
static_assert(sizeof(Shell_QuitApplication_Params_Data) == 8,
              "Bad sizeof(Shell_QuitApplication_Params_Data)");

// static
Shell_QuitApplication_Params_Data* Shell_QuitApplication_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(Shell_QuitApplication_Params_Data))) Shell_QuitApplication_Params_Data();
}

// static
bool Shell_QuitApplication_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const Shell_QuitApplication_Params_Data* object = static_cast<const Shell_QuitApplication_Params_Data*>(data);

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

void Shell_QuitApplication_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void Shell_QuitApplication_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

Shell_QuitApplication_Params_Data::Shell_QuitApplication_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
CapabilityFilter_Data* CapabilityFilter_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(CapabilityFilter_Data))) CapabilityFilter_Data();
}

// static
bool CapabilityFilter_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CapabilityFilter_Data* object = static_cast<const CapabilityFilter_Data*>(data);

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
          object->filter, "null filter field in CapabilityFilter struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams filter_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateMap(object->filter, bounds_checker,
                                   &filter_validate_params)) {
    return false;
  }

  return true;
}

void CapabilityFilter_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&filter, handles);
}

void CapabilityFilter_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&filter, handles);
}

CapabilityFilter_Data::CapabilityFilter_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
CapabilityFilterPtr CapabilityFilter::New() {
  CapabilityFilterPtr rv;
  mojo::internal::StructHelper<CapabilityFilter>::Initialize(&rv);
  return rv;
}

CapabilityFilter::CapabilityFilter()
    : filter() {
}

CapabilityFilter::~CapabilityFilter() {
}


CapabilityFilterPtr CapabilityFilter::Clone() const {
  CapabilityFilterPtr rv(New());
  rv->filter = filter.Clone();
  return rv;
}


bool CapabilityFilter::Equals(const CapabilityFilter& other) const {
  if (!mojo::internal::ValueTraits<mojo::Map<mojo::String, mojo::Array<mojo::String> >>::Equals(this->filter, other.filter))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char Shell::Name_[] = "mojo::Shell";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t Shell::Version_;
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t Shell::kInvalidApplicationID;
class Shell_ConnectToApplication_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Shell_ConnectToApplication_ForwardToCallback(
      const Shell::ConnectToApplicationCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Shell::ConnectToApplicationCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Shell_ConnectToApplication_ForwardToCallback);
};
bool Shell_ConnectToApplication_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Shell_ConnectToApplication_ResponseParams_Data* params =
      reinterpret_cast<internal::Shell_ConnectToApplication_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  uint32_t p_application_id{};
  uint32_t p_content_handler_id{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_application_id = params->application_id;
    p_content_handler_id = params->content_handler_id;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_application_id, p_content_handler_id);
  return true;
}

ShellProxy::ShellProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ShellProxy::ConnectToApplication(
    mojo::URLRequestPtr in_application_url, mojo::InterfaceRequest<mojo::ServiceProvider> in_services, mojo::ServiceProviderPtr in_exposed_services, CapabilityFilterPtr in_filter, const ConnectToApplicationCallback& callback) {
  size_t size = sizeof(internal::Shell_ConnectToApplication_Params_Data);
  size += GetSerializedSize_(in_application_url);
  size += GetSerializedSize_(in_filter);
  mojo::internal::RequestMessageBuilder builder(internal::kShell_ConnectToApplication_Name, size);

  internal::Shell_ConnectToApplication_Params_Data* params =
      internal::Shell_ConnectToApplication_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_application_url), builder.buffer(), &params->application_url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->application_url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null application_url in Shell.ConnectToApplication request");
  params->services = in_services.PassMessagePipe().release();
  mojo::internal::InterfacePointerToData(std::move(in_exposed_services), &params->exposed_services);
  Serialize_(std::move(in_filter), builder.buffer(), &params->filter.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->filter.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null filter in Shell.ConnectToApplication request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Shell_ConnectToApplication_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void ShellProxy::QuitApplication(
    ) {
  size_t size = sizeof(internal::Shell_QuitApplication_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kShell_QuitApplication_Name, size);

  internal::Shell_QuitApplication_Params_Data* params =
      internal::Shell_QuitApplication_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
class Shell_ConnectToApplication_ProxyToResponder
    : public Shell::ConnectToApplicationCallback::Runnable {
 public:
  ~Shell_ConnectToApplication_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "Shell::ConnectToApplication(std::move(p_application_url), std::move(p_services), std::move(p_exposed_services), std::move(p_filter), callback) "
        "was never run.";
  }

  Shell_ConnectToApplication_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(uint32_t in_application_id, uint32_t in_content_handler_id) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(Shell_ConnectToApplication_ProxyToResponder);
};
void Shell_ConnectToApplication_ProxyToResponder::Run(
    uint32_t in_application_id, uint32_t in_content_handler_id) const {
  size_t size = sizeof(internal::Shell_ConnectToApplication_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kShell_ConnectToApplication_Name, size, request_id_);
  internal::Shell_ConnectToApplication_ResponseParams_Data* params =
      internal::Shell_ConnectToApplication_ResponseParams_Data::New(builder.buffer());
  params->application_id = in_application_id;
  params->content_handler_id = in_content_handler_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

ShellStub::ShellStub()
    : sink_(nullptr),
      control_message_handler_(Shell::Version_) {
}

ShellStub::~ShellStub() {}

bool ShellStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kShell_ConnectToApplication_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.Shell.ConnectToApplication", __FILE__, __LINE__);
      break;
    }
    case internal::kShell_QuitApplication_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.Shell.QuitApplication", __FILE__, __LINE__);
      internal::Shell_QuitApplication_Params_Data* params =
          reinterpret_cast<internal::Shell_QuitApplication_Params_Data*>(
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
      TRACE_EVENT0("mojom", "Shell::QuitApplication");
      sink_->QuitApplication();
      return true;
    }
  }
  return false;
}

bool ShellStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kShell_ConnectToApplication_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::Shell::ConnectToApplication", __FILE__, __LINE__);
      internal::Shell_ConnectToApplication_Params_Data* params =
          reinterpret_cast<internal::Shell_ConnectToApplication_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::URLRequestPtr p_application_url{};
      mojo::InterfaceRequest<mojo::ServiceProvider> p_services{};
      mojo::ServiceProviderPtr p_exposed_services{};
      CapabilityFilterPtr p_filter{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->application_url.ptr, &p_application_url, &serialization_context_))
          success = false;
        p_services.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->services)));
        mojo::internal::InterfaceDataToPointer(&params->exposed_services, &p_exposed_services);
        if (!Deserialize_(params->filter.ptr, &p_filter, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      Shell::ConnectToApplicationCallback::Runnable* runnable =
          new Shell_ConnectToApplication_ProxyToResponder(
              message->request_id(), responder);
      Shell::ConnectToApplicationCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Shell::ConnectToApplication");
      sink_->ConnectToApplication(std::move(p_application_url), std::move(p_services), std::move(p_exposed_services), std::move(p_filter), callback);
      return true;
    }
    case internal::kShell_QuitApplication_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::Shell::QuitApplication", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

ShellRequestValidator::ShellRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ShellRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kShell_ConnectToApplication_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Shell_ConnectToApplication_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kShell_QuitApplication_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::Shell_QuitApplication_Params_Data>(message)) {
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

ShellResponseValidator::ShellResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ShellResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kShell_ConnectToApplication_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Shell_ConnectToApplication_ResponseParams_Data>(message)) {
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
size_t GetSerializedSize_(const CapabilityFilterPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::CapabilityFilter_Data);
  size += GetSerializedSize_(input->filter);
  return size;
}

void Serialize_(CapabilityFilterPtr input, mojo::internal::Buffer* buf,
                internal::CapabilityFilter_Data** output) {
  if (input) {
    internal::CapabilityFilter_Data* result =
        internal::CapabilityFilter_Data::New(buf);
    const mojo::internal::ArrayValidateParams filter_validate_params(
        0, false, new mojo::internal::ArrayValidateParams(0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr)));
    mojo::SerializeMap_(std::move(input->filter), buf,
        &result->filter.ptr, &filter_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->filter.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null filter in CapabilityFilter struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::CapabilityFilter_Data* input,
                  CapabilityFilterPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    CapabilityFilterPtr result(CapabilityFilter::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->filter.ptr, &result->filter, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

CapabilityFilter_Reader::CapabilityFilter_Reader(
    internal::CapabilityFilter_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif