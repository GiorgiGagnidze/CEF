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

#include "extensions/common/api/mime_handler.mojom.h"

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
namespace extensions {
namespace mime_handler {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kMimeHandlerService_GetStreamInfo_Name = 0;

class MimeHandlerService_GetStreamInfo_Params_Data {
 public:
  static MimeHandlerService_GetStreamInfo_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  MimeHandlerService_GetStreamInfo_Params_Data();
  ~MimeHandlerService_GetStreamInfo_Params_Data() = delete;
};
static_assert(sizeof(MimeHandlerService_GetStreamInfo_Params_Data) == 8,
              "Bad sizeof(MimeHandlerService_GetStreamInfo_Params_Data)");

// static
MimeHandlerService_GetStreamInfo_Params_Data* MimeHandlerService_GetStreamInfo_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MimeHandlerService_GetStreamInfo_Params_Data))) MimeHandlerService_GetStreamInfo_Params_Data();
}

// static
bool MimeHandlerService_GetStreamInfo_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MimeHandlerService_GetStreamInfo_Params_Data* object = static_cast<const MimeHandlerService_GetStreamInfo_Params_Data*>(data);

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

void MimeHandlerService_GetStreamInfo_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void MimeHandlerService_GetStreamInfo_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

MimeHandlerService_GetStreamInfo_Params_Data::MimeHandlerService_GetStreamInfo_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class MimeHandlerService_GetStreamInfo_ResponseParams_Data {
 public:
  static MimeHandlerService_GetStreamInfo_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<internal::StreamInfo_Data> stream_info;

 private:
  MimeHandlerService_GetStreamInfo_ResponseParams_Data();
  ~MimeHandlerService_GetStreamInfo_ResponseParams_Data() = delete;
};
static_assert(sizeof(MimeHandlerService_GetStreamInfo_ResponseParams_Data) == 16,
              "Bad sizeof(MimeHandlerService_GetStreamInfo_ResponseParams_Data)");

// static
MimeHandlerService_GetStreamInfo_ResponseParams_Data* MimeHandlerService_GetStreamInfo_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MimeHandlerService_GetStreamInfo_ResponseParams_Data))) MimeHandlerService_GetStreamInfo_ResponseParams_Data();
}

// static
bool MimeHandlerService_GetStreamInfo_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MimeHandlerService_GetStreamInfo_ResponseParams_Data* object = static_cast<const MimeHandlerService_GetStreamInfo_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->stream_info, bounds_checker))
    return false;

  return true;
}

void MimeHandlerService_GetStreamInfo_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&stream_info, handles);
}

void MimeHandlerService_GetStreamInfo_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&stream_info, handles);
}

MimeHandlerService_GetStreamInfo_ResponseParams_Data::MimeHandlerService_GetStreamInfo_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kMimeHandlerService_AbortStream_Name = 1;

class MimeHandlerService_AbortStream_Params_Data {
 public:
  static MimeHandlerService_AbortStream_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  MimeHandlerService_AbortStream_Params_Data();
  ~MimeHandlerService_AbortStream_Params_Data() = delete;
};
static_assert(sizeof(MimeHandlerService_AbortStream_Params_Data) == 8,
              "Bad sizeof(MimeHandlerService_AbortStream_Params_Data)");

// static
MimeHandlerService_AbortStream_Params_Data* MimeHandlerService_AbortStream_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MimeHandlerService_AbortStream_Params_Data))) MimeHandlerService_AbortStream_Params_Data();
}

// static
bool MimeHandlerService_AbortStream_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MimeHandlerService_AbortStream_Params_Data* object = static_cast<const MimeHandlerService_AbortStream_Params_Data*>(data);

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

void MimeHandlerService_AbortStream_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void MimeHandlerService_AbortStream_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

MimeHandlerService_AbortStream_Params_Data::MimeHandlerService_AbortStream_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class MimeHandlerService_AbortStream_ResponseParams_Data {
 public:
  static MimeHandlerService_AbortStream_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  MimeHandlerService_AbortStream_ResponseParams_Data();
  ~MimeHandlerService_AbortStream_ResponseParams_Data() = delete;
};
static_assert(sizeof(MimeHandlerService_AbortStream_ResponseParams_Data) == 8,
              "Bad sizeof(MimeHandlerService_AbortStream_ResponseParams_Data)");

// static
MimeHandlerService_AbortStream_ResponseParams_Data* MimeHandlerService_AbortStream_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MimeHandlerService_AbortStream_ResponseParams_Data))) MimeHandlerService_AbortStream_ResponseParams_Data();
}

// static
bool MimeHandlerService_AbortStream_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MimeHandlerService_AbortStream_ResponseParams_Data* object = static_cast<const MimeHandlerService_AbortStream_ResponseParams_Data*>(data);

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

void MimeHandlerService_AbortStream_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void MimeHandlerService_AbortStream_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

MimeHandlerService_AbortStream_ResponseParams_Data::MimeHandlerService_AbortStream_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
StreamInfo_Data* StreamInfo_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(StreamInfo_Data))) StreamInfo_Data();
}

// static
bool StreamInfo_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const StreamInfo_Data* object = static_cast<const StreamInfo_Data*>(data);

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
          object->mime_type, "null mime_type field in StreamInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams mime_type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->mime_type, bounds_checker,
                                     &mime_type_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->original_url, "null original_url field in StreamInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams original_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->original_url, bounds_checker,
                                     &original_url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->stream_url, "null stream_url field in StreamInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams stream_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->stream_url, bounds_checker,
                                     &stream_url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->response_headers, "null response_headers field in StreamInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams response_headers_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateMap(object->response_headers, bounds_checker,
                                   &response_headers_validate_params)) {
    return false;
  }

  return true;
}

void StreamInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&mime_type, handles);
  mojo::internal::Encode(&original_url, handles);
  mojo::internal::Encode(&stream_url, handles);
  mojo::internal::Encode(&response_headers, handles);
}

void StreamInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&mime_type, handles);
  mojo::internal::Decode(&original_url, handles);
  mojo::internal::Decode(&stream_url, handles);
  mojo::internal::Decode(&response_headers, handles);
}

StreamInfo_Data::StreamInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
StreamInfoPtr StreamInfo::New() {
  StreamInfoPtr rv;
  mojo::internal::StructHelper<StreamInfo>::Initialize(&rv);
  return rv;
}

StreamInfo::StreamInfo()
    : mime_type(),
      original_url(),
      stream_url(),
      tab_id(),
      response_headers(),
      embedded() {
}

StreamInfo::~StreamInfo() {
}


StreamInfoPtr StreamInfo::Clone() const {
  StreamInfoPtr rv(New());
  rv->mime_type = mime_type;
  rv->original_url = original_url;
  rv->stream_url = stream_url;
  rv->tab_id = tab_id;
  rv->response_headers = response_headers.Clone();
  rv->embedded = embedded;
  return rv;
}


bool StreamInfo::Equals(const StreamInfo& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->mime_type, other.mime_type))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->original_url, other.original_url))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->stream_url, other.stream_url))
    return false;
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->tab_id, other.tab_id))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Map<mojo::String, mojo::String>>::Equals(this->response_headers, other.response_headers))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->embedded, other.embedded))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char MimeHandlerService::Name_[] = "extensions::mime_handler::MimeHandlerService";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t MimeHandlerService::Version_;
class MimeHandlerService_GetStreamInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MimeHandlerService_GetStreamInfo_ForwardToCallback(
      const MimeHandlerService::GetStreamInfoCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MimeHandlerService::GetStreamInfoCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MimeHandlerService_GetStreamInfo_ForwardToCallback);
};
bool MimeHandlerService_GetStreamInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::MimeHandlerService_GetStreamInfo_ResponseParams_Data* params =
      reinterpret_cast<internal::MimeHandlerService_GetStreamInfo_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  StreamInfoPtr p_stream_info{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->stream_info.ptr, &p_stream_info, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_stream_info));
  return true;
}
class MimeHandlerService_AbortStream_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  MimeHandlerService_AbortStream_ForwardToCallback(
      const MimeHandlerService::AbortStreamCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  MimeHandlerService::AbortStreamCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MimeHandlerService_AbortStream_ForwardToCallback);
};
bool MimeHandlerService_AbortStream_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::MimeHandlerService_AbortStream_ResponseParams_Data* params =
      reinterpret_cast<internal::MimeHandlerService_AbortStream_ResponseParams_Data*>(
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

MimeHandlerServiceProxy::MimeHandlerServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void MimeHandlerServiceProxy::GetStreamInfo(
    const GetStreamInfoCallback& callback) {
  size_t size = sizeof(internal::MimeHandlerService_GetStreamInfo_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kMimeHandlerService_GetStreamInfo_Name, size);

  internal::MimeHandlerService_GetStreamInfo_Params_Data* params =
      internal::MimeHandlerService_GetStreamInfo_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new MimeHandlerService_GetStreamInfo_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void MimeHandlerServiceProxy::AbortStream(
    const AbortStreamCallback& callback) {
  size_t size = sizeof(internal::MimeHandlerService_AbortStream_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kMimeHandlerService_AbortStream_Name, size);

  internal::MimeHandlerService_AbortStream_Params_Data* params =
      internal::MimeHandlerService_AbortStream_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new MimeHandlerService_AbortStream_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class MimeHandlerService_GetStreamInfo_ProxyToResponder
    : public MimeHandlerService::GetStreamInfoCallback::Runnable {
 public:
  ~MimeHandlerService_GetStreamInfo_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "MimeHandlerService::GetStreamInfo(callback) "
        "was never run.";
  }

  MimeHandlerService_GetStreamInfo_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(StreamInfoPtr in_stream_info) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MimeHandlerService_GetStreamInfo_ProxyToResponder);
};
void MimeHandlerService_GetStreamInfo_ProxyToResponder::Run(
    StreamInfoPtr in_stream_info) const {
  size_t size = sizeof(internal::MimeHandlerService_GetStreamInfo_ResponseParams_Data);
  size += GetSerializedSize_(in_stream_info);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kMimeHandlerService_GetStreamInfo_Name, size, request_id_);
  internal::MimeHandlerService_GetStreamInfo_ResponseParams_Data* params =
      internal::MimeHandlerService_GetStreamInfo_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_stream_info), builder.buffer(), &params->stream_info.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class MimeHandlerService_AbortStream_ProxyToResponder
    : public MimeHandlerService::AbortStreamCallback::Runnable {
 public:
  ~MimeHandlerService_AbortStream_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "MimeHandlerService::AbortStream(callback) "
        "was never run.";
  }

  MimeHandlerService_AbortStream_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run() const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(MimeHandlerService_AbortStream_ProxyToResponder);
};
void MimeHandlerService_AbortStream_ProxyToResponder::Run(
    ) const {
  size_t size = sizeof(internal::MimeHandlerService_AbortStream_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kMimeHandlerService_AbortStream_Name, size, request_id_);
  internal::MimeHandlerService_AbortStream_ResponseParams_Data* params =
      internal::MimeHandlerService_AbortStream_ResponseParams_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

MimeHandlerServiceStub::MimeHandlerServiceStub()
    : sink_(nullptr),
      control_message_handler_(MimeHandlerService::Version_) {
}

MimeHandlerServiceStub::~MimeHandlerServiceStub() {}

bool MimeHandlerServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kMimeHandlerService_GetStreamInfo_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.extensions::mime_handler.MimeHandlerService.GetStreamInfo", __FILE__, __LINE__);
      break;
    }
    case internal::kMimeHandlerService_AbortStream_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.extensions::mime_handler.MimeHandlerService.AbortStream", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool MimeHandlerServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kMimeHandlerService_GetStreamInfo_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::extensions::mime_handler::MimeHandlerService::GetStreamInfo", __FILE__, __LINE__);
      internal::MimeHandlerService_GetStreamInfo_Params_Data* params =
          reinterpret_cast<internal::MimeHandlerService_GetStreamInfo_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      MimeHandlerService::GetStreamInfoCallback::Runnable* runnable =
          new MimeHandlerService_GetStreamInfo_ProxyToResponder(
              message->request_id(), responder);
      MimeHandlerService::GetStreamInfoCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MimeHandlerService::GetStreamInfo");
      sink_->GetStreamInfo(callback);
      return true;
    }
    case internal::kMimeHandlerService_AbortStream_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::extensions::mime_handler::MimeHandlerService::AbortStream", __FILE__, __LINE__);
      internal::MimeHandlerService_AbortStream_Params_Data* params =
          reinterpret_cast<internal::MimeHandlerService_AbortStream_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      MimeHandlerService::AbortStreamCallback::Runnable* runnable =
          new MimeHandlerService_AbortStream_ProxyToResponder(
              message->request_id(), responder);
      MimeHandlerService::AbortStreamCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "MimeHandlerService::AbortStream");
      sink_->AbortStream(callback);
      return true;
    }
  }
  return false;
}

MimeHandlerServiceRequestValidator::MimeHandlerServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool MimeHandlerServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kMimeHandlerService_GetStreamInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MimeHandlerService_GetStreamInfo_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMimeHandlerService_AbortStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::MimeHandlerService_AbortStream_Params_Data>(message)) {
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

MimeHandlerServiceResponseValidator::MimeHandlerServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool MimeHandlerServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kMimeHandlerService_GetStreamInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MimeHandlerService_GetStreamInfo_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kMimeHandlerService_AbortStream_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::MimeHandlerService_AbortStream_ResponseParams_Data>(message)) {
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
size_t GetSerializedSize_(const StreamInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::StreamInfo_Data);
  size += GetSerializedSize_(input->mime_type);
  size += GetSerializedSize_(input->original_url);
  size += GetSerializedSize_(input->stream_url);
  size += GetSerializedSize_(input->response_headers);
  return size;
}

void Serialize_(StreamInfoPtr input, mojo::internal::Buffer* buf,
                internal::StreamInfo_Data** output) {
  if (input) {
    internal::StreamInfo_Data* result =
        internal::StreamInfo_Data::New(buf);
    Serialize_(std::move(input->mime_type), buf, &result->mime_type.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->mime_type.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mime_type in StreamInfo struct");
    Serialize_(std::move(input->original_url), buf, &result->original_url.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->original_url.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null original_url in StreamInfo struct");
    Serialize_(std::move(input->stream_url), buf, &result->stream_url.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->stream_url.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null stream_url in StreamInfo struct");
    result->tab_id = input->tab_id;
    const mojo::internal::ArrayValidateParams response_headers_validate_params(
        0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
    mojo::SerializeMap_(std::move(input->response_headers), buf,
        &result->response_headers.ptr, &response_headers_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->response_headers.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null response_headers in StreamInfo struct");
    result->embedded = input->embedded;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::StreamInfo_Data* input,
                  StreamInfoPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    StreamInfoPtr result(StreamInfo::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->mime_type.ptr, &result->mime_type, context))
        success = false;
      if (!Deserialize_(input->original_url.ptr, &result->original_url, context))
        success = false;
      if (!Deserialize_(input->stream_url.ptr, &result->stream_url, context))
        success = false;
      result->tab_id = input->tab_id;
      if (!Deserialize_(input->response_headers.ptr, &result->response_headers, context))
        success = false;
      result->embedded = input->embedded;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

StreamInfo_Reader::StreamInfo_Reader(
    internal::StreamInfo_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace mime_handler
}  // namespace extensions

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif