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

#include "mojo/services/network/public/interfaces/cookie_store.mojom.h"

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
const uint32_t kCookieStore_Get_Name = 0;

class CookieStore_Get_Params_Data {
 public:
  static CookieStore_Get_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;

 private:
  CookieStore_Get_Params_Data();
  ~CookieStore_Get_Params_Data() = delete;
};
static_assert(sizeof(CookieStore_Get_Params_Data) == 16,
              "Bad sizeof(CookieStore_Get_Params_Data)");

// static
CookieStore_Get_Params_Data* CookieStore_Get_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(CookieStore_Get_Params_Data))) CookieStore_Get_Params_Data();
}

// static
bool CookieStore_Get_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieStore_Get_Params_Data* object = static_cast<const CookieStore_Get_Params_Data*>(data);

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
          object->url, "null url field in CookieStore_Get_Params struct")) {
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

void CookieStore_Get_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
}

void CookieStore_Get_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
}

CookieStore_Get_Params_Data::CookieStore_Get_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class CookieStore_Get_ResponseParams_Data {
 public:
  static CookieStore_Get_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer cookies;

 private:
  CookieStore_Get_ResponseParams_Data();
  ~CookieStore_Get_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieStore_Get_ResponseParams_Data) == 16,
              "Bad sizeof(CookieStore_Get_ResponseParams_Data)");

// static
CookieStore_Get_ResponseParams_Data* CookieStore_Get_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(CookieStore_Get_ResponseParams_Data))) CookieStore_Get_ResponseParams_Data();
}

// static
bool CookieStore_Get_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieStore_Get_ResponseParams_Data* object = static_cast<const CookieStore_Get_ResponseParams_Data*>(data);

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
          object->cookies, "null cookies field in CookieStore_Get_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams cookies_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->cookies, bounds_checker,
                                     &cookies_validate_params)) {
    return false;
  }

  return true;
}

void CookieStore_Get_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&cookies, handles);
}

void CookieStore_Get_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&cookies, handles);
}

CookieStore_Get_ResponseParams_Data::CookieStore_Get_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kCookieStore_Set_Name = 1;

class CookieStore_Set_Params_Data {
 public:
  static CookieStore_Set_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;
  mojo::internal::StringPointer cookie;

 private:
  CookieStore_Set_Params_Data();
  ~CookieStore_Set_Params_Data() = delete;
};
static_assert(sizeof(CookieStore_Set_Params_Data) == 24,
              "Bad sizeof(CookieStore_Set_Params_Data)");

// static
CookieStore_Set_Params_Data* CookieStore_Set_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(CookieStore_Set_Params_Data))) CookieStore_Set_Params_Data();
}

// static
bool CookieStore_Set_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieStore_Set_Params_Data* object = static_cast<const CookieStore_Set_Params_Data*>(data);

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
          object->url, "null url field in CookieStore_Set_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->cookie, "null cookie field in CookieStore_Set_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams cookie_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->cookie, bounds_checker,
                                     &cookie_validate_params)) {
    return false;
  }

  return true;
}

void CookieStore_Set_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
  mojo::internal::Encode(&cookie, handles);
}

void CookieStore_Set_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
  mojo::internal::Decode(&cookie, handles);
}

CookieStore_Set_Params_Data::CookieStore_Set_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class CookieStore_Set_ResponseParams_Data {
 public:
  static CookieStore_Set_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  CookieStore_Set_ResponseParams_Data();
  ~CookieStore_Set_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieStore_Set_ResponseParams_Data) == 16,
              "Bad sizeof(CookieStore_Set_ResponseParams_Data)");

// static
CookieStore_Set_ResponseParams_Data* CookieStore_Set_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(CookieStore_Set_ResponseParams_Data))) CookieStore_Set_ResponseParams_Data();
}

// static
bool CookieStore_Set_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const CookieStore_Set_ResponseParams_Data* object = static_cast<const CookieStore_Set_ResponseParams_Data*>(data);

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

void CookieStore_Set_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void CookieStore_Set_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

CookieStore_Set_ResponseParams_Data::CookieStore_Set_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char CookieStore::Name_[] = "mojo::CookieStore";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t CookieStore::Version_;
class CookieStore_Get_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieStore_Get_ForwardToCallback(
      const CookieStore::GetCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieStore::GetCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(CookieStore_Get_ForwardToCallback);
};
bool CookieStore_Get_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::CookieStore_Get_ResponseParams_Data* params =
      reinterpret_cast<internal::CookieStore_Get_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::String p_cookies{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->cookies.ptr, &p_cookies, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_cookies);
  return true;
}
class CookieStore_Set_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  CookieStore_Set_ForwardToCallback(
      const CookieStore::SetCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  CookieStore::SetCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(CookieStore_Set_ForwardToCallback);
};
bool CookieStore_Set_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::CookieStore_Set_ResponseParams_Data* params =
      reinterpret_cast<internal::CookieStore_Set_ResponseParams_Data*>(
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

CookieStoreProxy::CookieStoreProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void CookieStoreProxy::Get(
    const mojo::String& in_url, const GetCallback& callback) {
  size_t size = sizeof(internal::CookieStore_Get_Params_Data);
  size += GetSerializedSize_(in_url);
  mojo::internal::RequestMessageBuilder builder(internal::kCookieStore_Get_Name, size);

  internal::CookieStore_Get_Params_Data* params =
      internal::CookieStore_Get_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_url), builder.buffer(), &params->url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in CookieStore.Get request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new CookieStore_Get_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void CookieStoreProxy::Set(
    const mojo::String& in_url, const mojo::String& in_cookie, const SetCallback& callback) {
  size_t size = sizeof(internal::CookieStore_Set_Params_Data);
  size += GetSerializedSize_(in_url);
  size += GetSerializedSize_(in_cookie);
  mojo::internal::RequestMessageBuilder builder(internal::kCookieStore_Set_Name, size);

  internal::CookieStore_Set_Params_Data* params =
      internal::CookieStore_Set_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_url), builder.buffer(), &params->url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in CookieStore.Set request");
  Serialize_(std::move(in_cookie), builder.buffer(), &params->cookie.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->cookie.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie in CookieStore.Set request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new CookieStore_Set_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class CookieStore_Get_ProxyToResponder
    : public CookieStore::GetCallback::Runnable {
 public:
  ~CookieStore_Get_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "CookieStore::Get(p_url, callback) "
        "was never run.";
  }

  CookieStore_Get_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(const mojo::String& in_cookies) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(CookieStore_Get_ProxyToResponder);
};
void CookieStore_Get_ProxyToResponder::Run(
    const mojo::String& in_cookies) const {
  size_t size = sizeof(internal::CookieStore_Get_ResponseParams_Data);
  size += GetSerializedSize_(in_cookies);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kCookieStore_Get_Name, size, request_id_);
  internal::CookieStore_Get_ResponseParams_Data* params =
      internal::CookieStore_Get_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_cookies), builder.buffer(), &params->cookies.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->cookies.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookies in CookieStore.Get response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class CookieStore_Set_ProxyToResponder
    : public CookieStore::SetCallback::Runnable {
 public:
  ~CookieStore_Set_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "CookieStore::Set(p_url, p_cookie, callback) "
        "was never run.";
  }

  CookieStore_Set_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(bool in_success) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(CookieStore_Set_ProxyToResponder);
};
void CookieStore_Set_ProxyToResponder::Run(
    bool in_success) const {
  size_t size = sizeof(internal::CookieStore_Set_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kCookieStore_Set_Name, size, request_id_);
  internal::CookieStore_Set_ResponseParams_Data* params =
      internal::CookieStore_Set_ResponseParams_Data::New(builder.buffer());
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

CookieStoreStub::CookieStoreStub()
    : sink_(nullptr),
      control_message_handler_(CookieStore::Version_) {
}

CookieStoreStub::~CookieStoreStub() {}

bool CookieStoreStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kCookieStore_Get_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.CookieStore.Get", __FILE__, __LINE__);
      break;
    }
    case internal::kCookieStore_Set_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.CookieStore.Set", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool CookieStoreStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kCookieStore_Get_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::CookieStore::Get", __FILE__, __LINE__);
      internal::CookieStore_Get_Params_Data* params =
          reinterpret_cast<internal::CookieStore_Get_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_url{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->url.ptr, &p_url, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      CookieStore::GetCallback::Runnable* runnable =
          new CookieStore_Get_ProxyToResponder(
              message->request_id(), responder);
      CookieStore::GetCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "CookieStore::Get");
      sink_->Get(p_url, callback);
      return true;
    }
    case internal::kCookieStore_Set_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::CookieStore::Set", __FILE__, __LINE__);
      internal::CookieStore_Set_Params_Data* params =
          reinterpret_cast<internal::CookieStore_Set_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_url{};
      mojo::String p_cookie{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->url.ptr, &p_url, &serialization_context_))
          success = false;
        if (!Deserialize_(params->cookie.ptr, &p_cookie, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      CookieStore::SetCallback::Runnable* runnable =
          new CookieStore_Set_ProxyToResponder(
              message->request_id(), responder);
      CookieStore::SetCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "CookieStore::Set");
      sink_->Set(p_url, p_cookie, callback);
      return true;
    }
  }
  return false;
}

CookieStoreRequestValidator::CookieStoreRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool CookieStoreRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kCookieStore_Get_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieStore_Get_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kCookieStore_Set_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieStore_Set_Params_Data>(message)) {
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

CookieStoreResponseValidator::CookieStoreResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool CookieStoreResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kCookieStore_Get_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieStore_Get_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kCookieStore_Set_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::CookieStore_Set_ResponseParams_Data>(message)) {
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