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

#include "content/common/geolocation_service.mojom.h"

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
const uint32_t kGeolocationService_SetHighAccuracy_Name = 0;

class GeolocationService_SetHighAccuracy_Params_Data {
 public:
  static GeolocationService_SetHighAccuracy_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t high_accuracy : 1;
  uint8_t padfinal_[7];

 private:
  GeolocationService_SetHighAccuracy_Params_Data();
  ~GeolocationService_SetHighAccuracy_Params_Data() = delete;
};
static_assert(sizeof(GeolocationService_SetHighAccuracy_Params_Data) == 16,
              "Bad sizeof(GeolocationService_SetHighAccuracy_Params_Data)");

// static
GeolocationService_SetHighAccuracy_Params_Data* GeolocationService_SetHighAccuracy_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(GeolocationService_SetHighAccuracy_Params_Data))) GeolocationService_SetHighAccuracy_Params_Data();
}

// static
bool GeolocationService_SetHighAccuracy_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GeolocationService_SetHighAccuracy_Params_Data* object = static_cast<const GeolocationService_SetHighAccuracy_Params_Data*>(data);

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

void GeolocationService_SetHighAccuracy_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void GeolocationService_SetHighAccuracy_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

GeolocationService_SetHighAccuracy_Params_Data::GeolocationService_SetHighAccuracy_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kGeolocationService_QueryNextPosition_Name = 1;

class GeolocationService_QueryNextPosition_Params_Data {
 public:
  static GeolocationService_QueryNextPosition_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  GeolocationService_QueryNextPosition_Params_Data();
  ~GeolocationService_QueryNextPosition_Params_Data() = delete;
};
static_assert(sizeof(GeolocationService_QueryNextPosition_Params_Data) == 8,
              "Bad sizeof(GeolocationService_QueryNextPosition_Params_Data)");

// static
GeolocationService_QueryNextPosition_Params_Data* GeolocationService_QueryNextPosition_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(GeolocationService_QueryNextPosition_Params_Data))) GeolocationService_QueryNextPosition_Params_Data();
}

// static
bool GeolocationService_QueryNextPosition_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GeolocationService_QueryNextPosition_Params_Data* object = static_cast<const GeolocationService_QueryNextPosition_Params_Data*>(data);

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

void GeolocationService_QueryNextPosition_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void GeolocationService_QueryNextPosition_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

GeolocationService_QueryNextPosition_Params_Data::GeolocationService_QueryNextPosition_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class GeolocationService_QueryNextPosition_ResponseParams_Data {
 public:
  static GeolocationService_QueryNextPosition_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<content::internal::MojoGeoposition_Data> geoposition;

 private:
  GeolocationService_QueryNextPosition_ResponseParams_Data();
  ~GeolocationService_QueryNextPosition_ResponseParams_Data() = delete;
};
static_assert(sizeof(GeolocationService_QueryNextPosition_ResponseParams_Data) == 16,
              "Bad sizeof(GeolocationService_QueryNextPosition_ResponseParams_Data)");

// static
GeolocationService_QueryNextPosition_ResponseParams_Data* GeolocationService_QueryNextPosition_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(GeolocationService_QueryNextPosition_ResponseParams_Data))) GeolocationService_QueryNextPosition_ResponseParams_Data();
}

// static
bool GeolocationService_QueryNextPosition_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const GeolocationService_QueryNextPosition_ResponseParams_Data* object = static_cast<const GeolocationService_QueryNextPosition_ResponseParams_Data*>(data);

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
          object->geoposition, "null geoposition field in GeolocationService_QueryNextPosition_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->geoposition, bounds_checker))
    return false;

  return true;
}

void GeolocationService_QueryNextPosition_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&geoposition, handles);
}

void GeolocationService_QueryNextPosition_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&geoposition, handles);
}

GeolocationService_QueryNextPosition_ResponseParams_Data::GeolocationService_QueryNextPosition_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char GeolocationService::Name_[] = "content::GeolocationService";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t GeolocationService::Version_;
class GeolocationService_QueryNextPosition_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  GeolocationService_QueryNextPosition_ForwardToCallback(
      const GeolocationService::QueryNextPositionCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  GeolocationService::QueryNextPositionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(GeolocationService_QueryNextPosition_ForwardToCallback);
};
bool GeolocationService_QueryNextPosition_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::GeolocationService_QueryNextPosition_ResponseParams_Data* params =
      reinterpret_cast<internal::GeolocationService_QueryNextPosition_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  content::MojoGeopositionPtr p_geoposition{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->geoposition.ptr, &p_geoposition, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_geoposition));
  return true;
}

GeolocationServiceProxy::GeolocationServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void GeolocationServiceProxy::SetHighAccuracy(
    bool in_high_accuracy) {
  size_t size = sizeof(internal::GeolocationService_SetHighAccuracy_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kGeolocationService_SetHighAccuracy_Name, size);

  internal::GeolocationService_SetHighAccuracy_Params_Data* params =
      internal::GeolocationService_SetHighAccuracy_Params_Data::New(builder.buffer());
  params->high_accuracy = in_high_accuracy;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void GeolocationServiceProxy::QueryNextPosition(
    const QueryNextPositionCallback& callback) {
  size_t size = sizeof(internal::GeolocationService_QueryNextPosition_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kGeolocationService_QueryNextPosition_Name, size);

  internal::GeolocationService_QueryNextPosition_Params_Data* params =
      internal::GeolocationService_QueryNextPosition_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new GeolocationService_QueryNextPosition_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class GeolocationService_QueryNextPosition_ProxyToResponder
    : public GeolocationService::QueryNextPositionCallback::Runnable {
 public:
  ~GeolocationService_QueryNextPosition_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "GeolocationService::QueryNextPosition(callback) "
        "was never run.";
  }

  GeolocationService_QueryNextPosition_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(content::MojoGeopositionPtr in_geoposition) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(GeolocationService_QueryNextPosition_ProxyToResponder);
};
void GeolocationService_QueryNextPosition_ProxyToResponder::Run(
    content::MojoGeopositionPtr in_geoposition) const {
  size_t size = sizeof(internal::GeolocationService_QueryNextPosition_ResponseParams_Data);
  size += GetSerializedSize_(in_geoposition);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kGeolocationService_QueryNextPosition_Name, size, request_id_);
  internal::GeolocationService_QueryNextPosition_ResponseParams_Data* params =
      internal::GeolocationService_QueryNextPosition_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_geoposition), builder.buffer(), &params->geoposition.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->geoposition.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null geoposition in GeolocationService.QueryNextPosition response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

GeolocationServiceStub::GeolocationServiceStub()
    : sink_(nullptr),
      control_message_handler_(GeolocationService::Version_) {
}

GeolocationServiceStub::~GeolocationServiceStub() {}

bool GeolocationServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kGeolocationService_SetHighAccuracy_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.GeolocationService.SetHighAccuracy", __FILE__, __LINE__);
      internal::GeolocationService_SetHighAccuracy_Params_Data* params =
          reinterpret_cast<internal::GeolocationService_SetHighAccuracy_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      bool p_high_accuracy{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_high_accuracy = params->high_accuracy;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "GeolocationService::SetHighAccuracy");
      sink_->SetHighAccuracy(p_high_accuracy);
      return true;
    }
    case internal::kGeolocationService_QueryNextPosition_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.GeolocationService.QueryNextPosition", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool GeolocationServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kGeolocationService_SetHighAccuracy_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::GeolocationService::SetHighAccuracy", __FILE__, __LINE__);
      break;
    }
    case internal::kGeolocationService_QueryNextPosition_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::GeolocationService::QueryNextPosition", __FILE__, __LINE__);
      internal::GeolocationService_QueryNextPosition_Params_Data* params =
          reinterpret_cast<internal::GeolocationService_QueryNextPosition_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      GeolocationService::QueryNextPositionCallback::Runnable* runnable =
          new GeolocationService_QueryNextPosition_ProxyToResponder(
              message->request_id(), responder);
      GeolocationService::QueryNextPositionCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "GeolocationService::QueryNextPosition");
      sink_->QueryNextPosition(callback);
      return true;
    }
  }
  return false;
}

GeolocationServiceRequestValidator::GeolocationServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool GeolocationServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kGeolocationService_SetHighAccuracy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::GeolocationService_SetHighAccuracy_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kGeolocationService_QueryNextPosition_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::GeolocationService_QueryNextPosition_Params_Data>(message)) {
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

GeolocationServiceResponseValidator::GeolocationServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool GeolocationServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kGeolocationService_QueryNextPosition_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::GeolocationService_QueryNextPosition_ResponseParams_Data>(message)) {
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