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

#include "net/interfaces/proxy_resolver_service.mojom.h"

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
namespace net {
namespace interfaces {

namespace internal {
namespace {

#pragma pack(push, 1)
const uint32_t kProxyResolver_GetProxyForUrl_Name = 0;

class ProxyResolver_GetProxyForUrl_Params_Data {
 public:
  static ProxyResolver_GetProxyForUrl_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;
  mojo::internal::Interface_Data client;

 private:
  ProxyResolver_GetProxyForUrl_Params_Data();
  ~ProxyResolver_GetProxyForUrl_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolver_GetProxyForUrl_Params_Data) == 24,
              "Bad sizeof(ProxyResolver_GetProxyForUrl_Params_Data)");

// static
ProxyResolver_GetProxyForUrl_Params_Data* ProxyResolver_GetProxyForUrl_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProxyResolver_GetProxyForUrl_Params_Data))) ProxyResolver_GetProxyForUrl_Params_Data();
}

// static
bool ProxyResolver_GetProxyForUrl_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolver_GetProxyForUrl_Params_Data* object = static_cast<const ProxyResolver_GetProxyForUrl_Params_Data*>(data);

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
          object->url, "null url field in ProxyResolver_GetProxyForUrl_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  const mojo::Handle client_handle = object->client.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          client_handle,
          "invalid client field in ProxyResolver_GetProxyForUrl_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(client_handle, bounds_checker))
    return false;

  return true;
}

void ProxyResolver_GetProxyForUrl_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
  mojo::internal::EncodeHandle(&client, handles);
}

void ProxyResolver_GetProxyForUrl_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
  mojo::internal::DecodeHandle(&client, handles);
}

ProxyResolver_GetProxyForUrl_Params_Data::ProxyResolver_GetProxyForUrl_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kProxyResolverRequestClient_ReportResult_Name = 0;

class ProxyResolverRequestClient_ReportResult_Params_Data {
 public:
  static ProxyResolverRequestClient_ReportResult_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::ArrayPointer<internal::ProxyServer_Data*> proxy_servers;

 private:
  ProxyResolverRequestClient_ReportResult_Params_Data();
  ~ProxyResolverRequestClient_ReportResult_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverRequestClient_ReportResult_Params_Data) == 24,
              "Bad sizeof(ProxyResolverRequestClient_ReportResult_Params_Data)");

// static
ProxyResolverRequestClient_ReportResult_Params_Data* ProxyResolverRequestClient_ReportResult_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProxyResolverRequestClient_ReportResult_Params_Data))) ProxyResolverRequestClient_ReportResult_Params_Data();
}

// static
bool ProxyResolverRequestClient_ReportResult_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverRequestClient_ReportResult_Params_Data* object = static_cast<const ProxyResolverRequestClient_ReportResult_Params_Data*>(data);

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

  const mojo::internal::ArrayValidateParams proxy_servers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->proxy_servers, bounds_checker,
                                     &proxy_servers_validate_params)) {
    return false;
  }

  return true;
}

void ProxyResolverRequestClient_ReportResult_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&proxy_servers, handles);
}

void ProxyResolverRequestClient_ReportResult_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&proxy_servers, handles);
}

ProxyResolverRequestClient_ReportResult_Params_Data::ProxyResolverRequestClient_ReportResult_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kProxyResolverRequestClient_Alert_Name = 1;

class ProxyResolverRequestClient_Alert_Params_Data {
 public:
  static ProxyResolverRequestClient_Alert_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer error;

 private:
  ProxyResolverRequestClient_Alert_Params_Data();
  ~ProxyResolverRequestClient_Alert_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverRequestClient_Alert_Params_Data) == 16,
              "Bad sizeof(ProxyResolverRequestClient_Alert_Params_Data)");

// static
ProxyResolverRequestClient_Alert_Params_Data* ProxyResolverRequestClient_Alert_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProxyResolverRequestClient_Alert_Params_Data))) ProxyResolverRequestClient_Alert_Params_Data();
}

// static
bool ProxyResolverRequestClient_Alert_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverRequestClient_Alert_Params_Data* object = static_cast<const ProxyResolverRequestClient_Alert_Params_Data*>(data);

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
          object->error, "null error field in ProxyResolverRequestClient_Alert_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams error_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->error, bounds_checker,
                                     &error_validate_params)) {
    return false;
  }

  return true;
}

void ProxyResolverRequestClient_Alert_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&error, handles);
}

void ProxyResolverRequestClient_Alert_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&error, handles);
}

ProxyResolverRequestClient_Alert_Params_Data::ProxyResolverRequestClient_Alert_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kProxyResolverRequestClient_OnError_Name = 2;

class ProxyResolverRequestClient_OnError_Params_Data {
 public:
  static ProxyResolverRequestClient_OnError_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t line_number;
  uint8_t pad0_[4];
  mojo::internal::StringPointer error;

 private:
  ProxyResolverRequestClient_OnError_Params_Data();
  ~ProxyResolverRequestClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverRequestClient_OnError_Params_Data) == 24,
              "Bad sizeof(ProxyResolverRequestClient_OnError_Params_Data)");

// static
ProxyResolverRequestClient_OnError_Params_Data* ProxyResolverRequestClient_OnError_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProxyResolverRequestClient_OnError_Params_Data))) ProxyResolverRequestClient_OnError_Params_Data();
}

// static
bool ProxyResolverRequestClient_OnError_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverRequestClient_OnError_Params_Data* object = static_cast<const ProxyResolverRequestClient_OnError_Params_Data*>(data);

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
          object->error, "null error field in ProxyResolverRequestClient_OnError_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams error_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->error, bounds_checker,
                                     &error_validate_params)) {
    return false;
  }

  return true;
}

void ProxyResolverRequestClient_OnError_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&error, handles);
}

void ProxyResolverRequestClient_OnError_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&error, handles);
}

ProxyResolverRequestClient_OnError_Params_Data::ProxyResolverRequestClient_OnError_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kProxyResolverRequestClient_ResolveDns_Name = 3;

class ProxyResolverRequestClient_ResolveDns_Params_Data {
 public:
  static ProxyResolverRequestClient_ResolveDns_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<net::interfaces::internal::HostResolverRequestInfo_Data> request_info;
  mojo::internal::Interface_Data client;

 private:
  ProxyResolverRequestClient_ResolveDns_Params_Data();
  ~ProxyResolverRequestClient_ResolveDns_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverRequestClient_ResolveDns_Params_Data) == 24,
              "Bad sizeof(ProxyResolverRequestClient_ResolveDns_Params_Data)");

// static
ProxyResolverRequestClient_ResolveDns_Params_Data* ProxyResolverRequestClient_ResolveDns_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProxyResolverRequestClient_ResolveDns_Params_Data))) ProxyResolverRequestClient_ResolveDns_Params_Data();
}

// static
bool ProxyResolverRequestClient_ResolveDns_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverRequestClient_ResolveDns_Params_Data* object = static_cast<const ProxyResolverRequestClient_ResolveDns_Params_Data*>(data);

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
          object->request_info, "null request_info field in ProxyResolverRequestClient_ResolveDns_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request_info, bounds_checker))
    return false;

  const mojo::Handle client_handle = object->client.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          client_handle,
          "invalid client field in ProxyResolverRequestClient_ResolveDns_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(client_handle, bounds_checker))
    return false;

  return true;
}

void ProxyResolverRequestClient_ResolveDns_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&request_info, handles);
  mojo::internal::EncodeHandle(&client, handles);
}

void ProxyResolverRequestClient_ResolveDns_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&request_info, handles);
  mojo::internal::DecodeHandle(&client, handles);
}

ProxyResolverRequestClient_ResolveDns_Params_Data::ProxyResolverRequestClient_ResolveDns_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kProxyResolverFactory_CreateResolver_Name = 0;

class ProxyResolverFactory_CreateResolver_Params_Data {
 public:
  static ProxyResolverFactory_CreateResolver_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer pac_script;
  mojo::MessagePipeHandle resolver;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  ProxyResolverFactory_CreateResolver_Params_Data();
  ~ProxyResolverFactory_CreateResolver_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactory_CreateResolver_Params_Data) == 32,
              "Bad sizeof(ProxyResolverFactory_CreateResolver_Params_Data)");

// static
ProxyResolverFactory_CreateResolver_Params_Data* ProxyResolverFactory_CreateResolver_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProxyResolverFactory_CreateResolver_Params_Data))) ProxyResolverFactory_CreateResolver_Params_Data();
}

// static
bool ProxyResolverFactory_CreateResolver_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverFactory_CreateResolver_Params_Data* object = static_cast<const ProxyResolverFactory_CreateResolver_Params_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->pac_script, "null pac_script field in ProxyResolverFactory_CreateResolver_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams pac_script_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->pac_script, bounds_checker,
                                     &pac_script_validate_params)) {
    return false;
  }

  const mojo::Handle resolver_handle = object->resolver;
  if (!mojo::internal::ValidateHandleNonNullable(
          resolver_handle,
          "invalid resolver field in ProxyResolverFactory_CreateResolver_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(resolver_handle, bounds_checker))
    return false;

  const mojo::Handle client_handle = object->client.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          client_handle,
          "invalid client field in ProxyResolverFactory_CreateResolver_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(client_handle, bounds_checker))
    return false;

  return true;
}

void ProxyResolverFactory_CreateResolver_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&pac_script, handles);
  mojo::internal::EncodeHandle(&resolver, handles);
  mojo::internal::EncodeHandle(&client, handles);
}

void ProxyResolverFactory_CreateResolver_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&pac_script, handles);
  mojo::internal::DecodeHandle(&resolver, handles);
  mojo::internal::DecodeHandle(&client, handles);
}

ProxyResolverFactory_CreateResolver_Params_Data::ProxyResolverFactory_CreateResolver_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kProxyResolverFactoryRequestClient_ReportResult_Name = 0;

class ProxyResolverFactoryRequestClient_ReportResult_Params_Data {
 public:
  static ProxyResolverFactoryRequestClient_ReportResult_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t padfinal_[4];

 private:
  ProxyResolverFactoryRequestClient_ReportResult_Params_Data();
  ~ProxyResolverFactoryRequestClient_ReportResult_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactoryRequestClient_ReportResult_Params_Data) == 16,
              "Bad sizeof(ProxyResolverFactoryRequestClient_ReportResult_Params_Data)");

// static
ProxyResolverFactoryRequestClient_ReportResult_Params_Data* ProxyResolverFactoryRequestClient_ReportResult_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProxyResolverFactoryRequestClient_ReportResult_Params_Data))) ProxyResolverFactoryRequestClient_ReportResult_Params_Data();
}

// static
bool ProxyResolverFactoryRequestClient_ReportResult_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverFactoryRequestClient_ReportResult_Params_Data* object = static_cast<const ProxyResolverFactoryRequestClient_ReportResult_Params_Data*>(data);

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

void ProxyResolverFactoryRequestClient_ReportResult_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ProxyResolverFactoryRequestClient_ReportResult_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ProxyResolverFactoryRequestClient_ReportResult_Params_Data::ProxyResolverFactoryRequestClient_ReportResult_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kProxyResolverFactoryRequestClient_Alert_Name = 1;

class ProxyResolverFactoryRequestClient_Alert_Params_Data {
 public:
  static ProxyResolverFactoryRequestClient_Alert_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer error;

 private:
  ProxyResolverFactoryRequestClient_Alert_Params_Data();
  ~ProxyResolverFactoryRequestClient_Alert_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactoryRequestClient_Alert_Params_Data) == 16,
              "Bad sizeof(ProxyResolverFactoryRequestClient_Alert_Params_Data)");

// static
ProxyResolverFactoryRequestClient_Alert_Params_Data* ProxyResolverFactoryRequestClient_Alert_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProxyResolverFactoryRequestClient_Alert_Params_Data))) ProxyResolverFactoryRequestClient_Alert_Params_Data();
}

// static
bool ProxyResolverFactoryRequestClient_Alert_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverFactoryRequestClient_Alert_Params_Data* object = static_cast<const ProxyResolverFactoryRequestClient_Alert_Params_Data*>(data);

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
          object->error, "null error field in ProxyResolverFactoryRequestClient_Alert_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams error_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->error, bounds_checker,
                                     &error_validate_params)) {
    return false;
  }

  return true;
}

void ProxyResolverFactoryRequestClient_Alert_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&error, handles);
}

void ProxyResolverFactoryRequestClient_Alert_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&error, handles);
}

ProxyResolverFactoryRequestClient_Alert_Params_Data::ProxyResolverFactoryRequestClient_Alert_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kProxyResolverFactoryRequestClient_OnError_Name = 2;

class ProxyResolverFactoryRequestClient_OnError_Params_Data {
 public:
  static ProxyResolverFactoryRequestClient_OnError_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t line_number;
  uint8_t pad0_[4];
  mojo::internal::StringPointer error;

 private:
  ProxyResolverFactoryRequestClient_OnError_Params_Data();
  ~ProxyResolverFactoryRequestClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactoryRequestClient_OnError_Params_Data) == 24,
              "Bad sizeof(ProxyResolverFactoryRequestClient_OnError_Params_Data)");

// static
ProxyResolverFactoryRequestClient_OnError_Params_Data* ProxyResolverFactoryRequestClient_OnError_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProxyResolverFactoryRequestClient_OnError_Params_Data))) ProxyResolverFactoryRequestClient_OnError_Params_Data();
}

// static
bool ProxyResolverFactoryRequestClient_OnError_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverFactoryRequestClient_OnError_Params_Data* object = static_cast<const ProxyResolverFactoryRequestClient_OnError_Params_Data*>(data);

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
          object->error, "null error field in ProxyResolverFactoryRequestClient_OnError_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams error_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->error, bounds_checker,
                                     &error_validate_params)) {
    return false;
  }

  return true;
}

void ProxyResolverFactoryRequestClient_OnError_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&error, handles);
}

void ProxyResolverFactoryRequestClient_OnError_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&error, handles);
}

ProxyResolverFactoryRequestClient_OnError_Params_Data::ProxyResolverFactoryRequestClient_OnError_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kProxyResolverFactoryRequestClient_ResolveDns_Name = 3;

class ProxyResolverFactoryRequestClient_ResolveDns_Params_Data {
 public:
  static ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<net::interfaces::internal::HostResolverRequestInfo_Data> request_info;
  mojo::internal::Interface_Data client;

 private:
  ProxyResolverFactoryRequestClient_ResolveDns_Params_Data();
  ~ProxyResolverFactoryRequestClient_ResolveDns_Params_Data() = delete;
};
static_assert(sizeof(ProxyResolverFactoryRequestClient_ResolveDns_Params_Data) == 24,
              "Bad sizeof(ProxyResolverFactoryRequestClient_ResolveDns_Params_Data)");

// static
ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* ProxyResolverFactoryRequestClient_ResolveDns_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProxyResolverFactoryRequestClient_ResolveDns_Params_Data))) ProxyResolverFactoryRequestClient_ResolveDns_Params_Data();
}

// static
bool ProxyResolverFactoryRequestClient_ResolveDns_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* object = static_cast<const ProxyResolverFactoryRequestClient_ResolveDns_Params_Data*>(data);

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
          object->request_info, "null request_info field in ProxyResolverFactoryRequestClient_ResolveDns_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request_info, bounds_checker))
    return false;

  const mojo::Handle client_handle = object->client.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          client_handle,
          "invalid client field in ProxyResolverFactoryRequestClient_ResolveDns_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(client_handle, bounds_checker))
    return false;

  return true;
}

void ProxyResolverFactoryRequestClient_ResolveDns_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&request_info, handles);
  mojo::internal::EncodeHandle(&client, handles);
}

void ProxyResolverFactoryRequestClient_ResolveDns_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&request_info, handles);
  mojo::internal::DecodeHandle(&client, handles);
}

ProxyResolverFactoryRequestClient_ResolveDns_Params_Data::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
ProxyServer_Data* ProxyServer_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ProxyServer_Data))) ProxyServer_Data();
}

// static
bool ProxyServer_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ProxyServer_Data* object = static_cast<const ProxyServer_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->scheme))
    return false;

  const mojo::internal::ArrayValidateParams host_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->host, bounds_checker,
                                     &host_validate_params)) {
    return false;
  }

  return true;
}

void ProxyServer_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&host, handles);
}

void ProxyServer_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&host, handles);
}

ProxyServer_Data::ProxyServer_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
ProxyServerPtr ProxyServer::New() {
  ProxyServerPtr rv;
  mojo::internal::StructHelper<ProxyServer>::Initialize(&rv);
  return rv;
}

ProxyServer::ProxyServer()
    : scheme(),
      host(),
      port() {
}

ProxyServer::~ProxyServer() {
}


ProxyServerPtr ProxyServer::Clone() const {
  ProxyServerPtr rv(New());
  rv->scheme = scheme;
  rv->host = host;
  rv->port = port;
  return rv;
}


bool ProxyServer::Equals(const ProxyServer& other) const {
  if (!mojo::internal::ValueTraits<ProxyScheme>::Equals(this->scheme, other.scheme))
    return false;
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->host, other.host))
    return false;
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->port, other.port))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char ProxyResolver::Name_[] = "net::interfaces::ProxyResolver";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ProxyResolver::Version_;

ProxyResolverProxy::ProxyResolverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ProxyResolverProxy::GetProxyForUrl(
    const mojo::String& in_url, ProxyResolverRequestClientPtr in_client) {
  size_t size = sizeof(internal::ProxyResolver_GetProxyForUrl_Params_Data);
  size += GetSerializedSize_(in_url);
  mojo::internal::MessageBuilder builder(internal::kProxyResolver_GetProxyForUrl_Name, size);

  internal::ProxyResolver_GetProxyForUrl_Params_Data* params =
      internal::ProxyResolver_GetProxyForUrl_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_url), builder.buffer(), &params->url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in ProxyResolver.GetProxyForUrl request");
  mojo::internal::InterfacePointerToData(std::move(in_client), &params->client);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->client.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProxyResolver.GetProxyForUrl request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

ProxyResolverStub::ProxyResolverStub()
    : sink_(nullptr),
      control_message_handler_(ProxyResolver::Version_) {
}

ProxyResolverStub::~ProxyResolverStub() {}

bool ProxyResolverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kProxyResolver_GetProxyForUrl_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.net::interfaces.ProxyResolver.GetProxyForUrl", __FILE__, __LINE__);
      internal::ProxyResolver_GetProxyForUrl_Params_Data* params =
          reinterpret_cast<internal::ProxyResolver_GetProxyForUrl_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_url{};
      ProxyResolverRequestClientPtr p_client{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->url.ptr, &p_url, &serialization_context_))
          success = false;
        mojo::internal::InterfaceDataToPointer(&params->client, &p_client);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ProxyResolver::GetProxyForUrl");
      sink_->GetProxyForUrl(p_url, std::move(p_client));
      return true;
    }
  }
  return false;
}

bool ProxyResolverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kProxyResolver_GetProxyForUrl_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::net::interfaces::ProxyResolver::GetProxyForUrl", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

ProxyResolverRequestValidator::ProxyResolverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ProxyResolverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kProxyResolver_GetProxyForUrl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolver_GetProxyForUrl_Params_Data>(message)) {
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

MOJO_STATIC_CONST_MEMBER_DEFINITION const char ProxyResolverRequestClient::Name_[] = "net::interfaces::ProxyResolverRequestClient";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ProxyResolverRequestClient::Version_;

ProxyResolverRequestClientProxy::ProxyResolverRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ProxyResolverRequestClientProxy::ReportResult(
    int32_t in_error, mojo::Array<ProxyServerPtr> in_proxy_servers) {
  size_t size = sizeof(internal::ProxyResolverRequestClient_ReportResult_Params_Data);
  size += GetSerializedSize_(in_proxy_servers);
  mojo::internal::MessageBuilder builder(internal::kProxyResolverRequestClient_ReportResult_Name, size);

  internal::ProxyResolverRequestClient_ReportResult_Params_Data* params =
      internal::ProxyResolverRequestClient_ReportResult_Params_Data::New(builder.buffer());
  params->error = in_error;
  const mojo::internal::ArrayValidateParams proxy_servers_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_proxy_servers), builder.buffer(),
      &params->proxy_servers.ptr, &proxy_servers_validate_params);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ProxyResolverRequestClientProxy::Alert(
    const mojo::String& in_error) {
  size_t size = sizeof(internal::ProxyResolverRequestClient_Alert_Params_Data);
  size += GetSerializedSize_(in_error);
  mojo::internal::MessageBuilder builder(internal::kProxyResolverRequestClient_Alert_Name, size);

  internal::ProxyResolverRequestClient_Alert_Params_Data* params =
      internal::ProxyResolverRequestClient_Alert_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_error), builder.buffer(), &params->error.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->error.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ProxyResolverRequestClient.Alert request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ProxyResolverRequestClientProxy::OnError(
    int32_t in_line_number, const mojo::String& in_error) {
  size_t size = sizeof(internal::ProxyResolverRequestClient_OnError_Params_Data);
  size += GetSerializedSize_(in_error);
  mojo::internal::MessageBuilder builder(internal::kProxyResolverRequestClient_OnError_Name, size);

  internal::ProxyResolverRequestClient_OnError_Params_Data* params =
      internal::ProxyResolverRequestClient_OnError_Params_Data::New(builder.buffer());
  params->line_number = in_line_number;
  Serialize_(std::move(in_error), builder.buffer(), &params->error.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->error.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ProxyResolverRequestClient.OnError request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ProxyResolverRequestClientProxy::ResolveDns(
    net::interfaces::HostResolverRequestInfoPtr in_request_info, net::interfaces::HostResolverRequestClientPtr in_client) {
  size_t size = sizeof(internal::ProxyResolverRequestClient_ResolveDns_Params_Data);
  size += GetSerializedSize_(in_request_info);
  mojo::internal::MessageBuilder builder(internal::kProxyResolverRequestClient_ResolveDns_Name, size);

  internal::ProxyResolverRequestClient_ResolveDns_Params_Data* params =
      internal::ProxyResolverRequestClient_ResolveDns_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_request_info), builder.buffer(), &params->request_info.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->request_info.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_info in ProxyResolverRequestClient.ResolveDns request");
  mojo::internal::InterfacePointerToData(std::move(in_client), &params->client);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->client.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProxyResolverRequestClient.ResolveDns request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

ProxyResolverRequestClientStub::ProxyResolverRequestClientStub()
    : sink_(nullptr),
      control_message_handler_(ProxyResolverRequestClient::Version_) {
}

ProxyResolverRequestClientStub::~ProxyResolverRequestClientStub() {}

bool ProxyResolverRequestClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kProxyResolverRequestClient_ReportResult_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.net::interfaces.ProxyResolverRequestClient.ReportResult", __FILE__, __LINE__);
      internal::ProxyResolverRequestClient_ReportResult_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverRequestClient_ReportResult_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int32_t p_error{};
      mojo::Array<ProxyServerPtr> p_proxy_servers{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_error = params->error;
        if (!Deserialize_(params->proxy_servers.ptr, &p_proxy_servers, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ProxyResolverRequestClient::ReportResult");
      sink_->ReportResult(p_error, std::move(p_proxy_servers));
      return true;
    }
    case internal::kProxyResolverRequestClient_Alert_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.net::interfaces.ProxyResolverRequestClient.Alert", __FILE__, __LINE__);
      internal::ProxyResolverRequestClient_Alert_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverRequestClient_Alert_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_error{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->error.ptr, &p_error, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ProxyResolverRequestClient::Alert");
      sink_->Alert(p_error);
      return true;
    }
    case internal::kProxyResolverRequestClient_OnError_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.net::interfaces.ProxyResolverRequestClient.OnError", __FILE__, __LINE__);
      internal::ProxyResolverRequestClient_OnError_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverRequestClient_OnError_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int32_t p_line_number{};
      mojo::String p_error{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_line_number = params->line_number;
        if (!Deserialize_(params->error.ptr, &p_error, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ProxyResolverRequestClient::OnError");
      sink_->OnError(p_line_number, p_error);
      return true;
    }
    case internal::kProxyResolverRequestClient_ResolveDns_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.net::interfaces.ProxyResolverRequestClient.ResolveDns", __FILE__, __LINE__);
      internal::ProxyResolverRequestClient_ResolveDns_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverRequestClient_ResolveDns_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      net::interfaces::HostResolverRequestInfoPtr p_request_info{};
      net::interfaces::HostResolverRequestClientPtr p_client{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->request_info.ptr, &p_request_info, &serialization_context_))
          success = false;
        mojo::internal::InterfaceDataToPointer(&params->client, &p_client);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ProxyResolverRequestClient::ResolveDns");
      sink_->ResolveDns(std::move(p_request_info), std::move(p_client));
      return true;
    }
  }
  return false;
}

bool ProxyResolverRequestClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kProxyResolverRequestClient_ReportResult_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::net::interfaces::ProxyResolverRequestClient::ReportResult", __FILE__, __LINE__);
      break;
    }
    case internal::kProxyResolverRequestClient_Alert_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::net::interfaces::ProxyResolverRequestClient::Alert", __FILE__, __LINE__);
      break;
    }
    case internal::kProxyResolverRequestClient_OnError_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::net::interfaces::ProxyResolverRequestClient::OnError", __FILE__, __LINE__);
      break;
    }
    case internal::kProxyResolverRequestClient_ResolveDns_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::net::interfaces::ProxyResolverRequestClient::ResolveDns", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

ProxyResolverRequestClientRequestValidator::ProxyResolverRequestClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ProxyResolverRequestClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kProxyResolverRequestClient_ReportResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverRequestClient_ReportResult_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kProxyResolverRequestClient_Alert_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverRequestClient_Alert_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kProxyResolverRequestClient_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverRequestClient_OnError_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kProxyResolverRequestClient_ResolveDns_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverRequestClient_ResolveDns_Params_Data>(message)) {
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

MOJO_STATIC_CONST_MEMBER_DEFINITION const char ProxyResolverFactory::Name_[] = "net::interfaces::ProxyResolverFactory";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ProxyResolverFactory::Version_;

ProxyResolverFactoryProxy::ProxyResolverFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ProxyResolverFactoryProxy::CreateResolver(
    const mojo::String& in_pac_script, mojo::InterfaceRequest<ProxyResolver> in_resolver, ProxyResolverFactoryRequestClientPtr in_client) {
  size_t size = sizeof(internal::ProxyResolverFactory_CreateResolver_Params_Data);
  size += GetSerializedSize_(in_pac_script);
  mojo::internal::MessageBuilder builder(internal::kProxyResolverFactory_CreateResolver_Name, size);

  internal::ProxyResolverFactory_CreateResolver_Params_Data* params =
      internal::ProxyResolverFactory_CreateResolver_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_pac_script), builder.buffer(), &params->pac_script.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->pac_script.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null pac_script in ProxyResolverFactory.CreateResolver request");
  params->resolver = in_resolver.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->resolver.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid resolver in ProxyResolverFactory.CreateResolver request");
  mojo::internal::InterfacePointerToData(std::move(in_client), &params->client);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->client.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProxyResolverFactory.CreateResolver request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

ProxyResolverFactoryStub::ProxyResolverFactoryStub()
    : sink_(nullptr),
      control_message_handler_(ProxyResolverFactory::Version_) {
}

ProxyResolverFactoryStub::~ProxyResolverFactoryStub() {}

bool ProxyResolverFactoryStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kProxyResolverFactory_CreateResolver_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.net::interfaces.ProxyResolverFactory.CreateResolver", __FILE__, __LINE__);
      internal::ProxyResolverFactory_CreateResolver_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactory_CreateResolver_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_pac_script{};
      mojo::InterfaceRequest<ProxyResolver> p_resolver{};
      ProxyResolverFactoryRequestClientPtr p_client{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->pac_script.ptr, &p_pac_script, &serialization_context_))
          success = false;
        p_resolver.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->resolver)));
        mojo::internal::InterfaceDataToPointer(&params->client, &p_client);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ProxyResolverFactory::CreateResolver");
      sink_->CreateResolver(p_pac_script, std::move(p_resolver), std::move(p_client));
      return true;
    }
  }
  return false;
}

bool ProxyResolverFactoryStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kProxyResolverFactory_CreateResolver_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::net::interfaces::ProxyResolverFactory::CreateResolver", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

ProxyResolverFactoryRequestValidator::ProxyResolverFactoryRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ProxyResolverFactoryRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kProxyResolverFactory_CreateResolver_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactory_CreateResolver_Params_Data>(message)) {
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

MOJO_STATIC_CONST_MEMBER_DEFINITION const char ProxyResolverFactoryRequestClient::Name_[] = "net::interfaces::ProxyResolverFactoryRequestClient";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ProxyResolverFactoryRequestClient::Version_;

ProxyResolverFactoryRequestClientProxy::ProxyResolverFactoryRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ProxyResolverFactoryRequestClientProxy::ReportResult(
    int32_t in_error) {
  size_t size = sizeof(internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kProxyResolverFactoryRequestClient_ReportResult_Name, size);

  internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data* params =
      internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data::New(builder.buffer());
  params->error = in_error;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ProxyResolverFactoryRequestClientProxy::Alert(
    const mojo::String& in_error) {
  size_t size = sizeof(internal::ProxyResolverFactoryRequestClient_Alert_Params_Data);
  size += GetSerializedSize_(in_error);
  mojo::internal::MessageBuilder builder(internal::kProxyResolverFactoryRequestClient_Alert_Name, size);

  internal::ProxyResolverFactoryRequestClient_Alert_Params_Data* params =
      internal::ProxyResolverFactoryRequestClient_Alert_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_error), builder.buffer(), &params->error.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->error.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ProxyResolverFactoryRequestClient.Alert request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ProxyResolverFactoryRequestClientProxy::OnError(
    int32_t in_line_number, const mojo::String& in_error) {
  size_t size = sizeof(internal::ProxyResolverFactoryRequestClient_OnError_Params_Data);
  size += GetSerializedSize_(in_error);
  mojo::internal::MessageBuilder builder(internal::kProxyResolverFactoryRequestClient_OnError_Name, size);

  internal::ProxyResolverFactoryRequestClient_OnError_Params_Data* params =
      internal::ProxyResolverFactoryRequestClient_OnError_Params_Data::New(builder.buffer());
  params->line_number = in_line_number;
  Serialize_(std::move(in_error), builder.buffer(), &params->error.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->error.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null error in ProxyResolverFactoryRequestClient.OnError request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ProxyResolverFactoryRequestClientProxy::ResolveDns(
    net::interfaces::HostResolverRequestInfoPtr in_request_info, net::interfaces::HostResolverRequestClientPtr in_client) {
  size_t size = sizeof(internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data);
  size += GetSerializedSize_(in_request_info);
  mojo::internal::MessageBuilder builder(internal::kProxyResolverFactoryRequestClient_ResolveDns_Name, size);

  internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* params =
      internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_request_info), builder.buffer(), &params->request_info.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->request_info.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_info in ProxyResolverFactoryRequestClient.ResolveDns request");
  mojo::internal::InterfacePointerToData(std::move(in_client), &params->client);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->client.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ProxyResolverFactoryRequestClient.ResolveDns request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

ProxyResolverFactoryRequestClientStub::ProxyResolverFactoryRequestClientStub()
    : sink_(nullptr),
      control_message_handler_(ProxyResolverFactoryRequestClient::Version_) {
}

ProxyResolverFactoryRequestClientStub::~ProxyResolverFactoryRequestClientStub() {}

bool ProxyResolverFactoryRequestClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kProxyResolverFactoryRequestClient_ReportResult_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.net::interfaces.ProxyResolverFactoryRequestClient.ReportResult", __FILE__, __LINE__);
      internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int32_t p_error{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_error = params->error;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ProxyResolverFactoryRequestClient::ReportResult");
      sink_->ReportResult(p_error);
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_Alert_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.net::interfaces.ProxyResolverFactoryRequestClient.Alert", __FILE__, __LINE__);
      internal::ProxyResolverFactoryRequestClient_Alert_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactoryRequestClient_Alert_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_error{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->error.ptr, &p_error, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ProxyResolverFactoryRequestClient::Alert");
      sink_->Alert(p_error);
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_OnError_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.net::interfaces.ProxyResolverFactoryRequestClient.OnError", __FILE__, __LINE__);
      internal::ProxyResolverFactoryRequestClient_OnError_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactoryRequestClient_OnError_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int32_t p_line_number{};
      mojo::String p_error{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_line_number = params->line_number;
        if (!Deserialize_(params->error.ptr, &p_error, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ProxyResolverFactoryRequestClient::OnError");
      sink_->OnError(p_line_number, p_error);
      return true;
    }
    case internal::kProxyResolverFactoryRequestClient_ResolveDns_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.net::interfaces.ProxyResolverFactoryRequestClient.ResolveDns", __FILE__, __LINE__);
      internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data* params =
          reinterpret_cast<internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      net::interfaces::HostResolverRequestInfoPtr p_request_info{};
      net::interfaces::HostResolverRequestClientPtr p_client{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->request_info.ptr, &p_request_info, &serialization_context_))
          success = false;
        mojo::internal::InterfaceDataToPointer(&params->client, &p_client);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ProxyResolverFactoryRequestClient::ResolveDns");
      sink_->ResolveDns(std::move(p_request_info), std::move(p_client));
      return true;
    }
  }
  return false;
}

bool ProxyResolverFactoryRequestClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kProxyResolverFactoryRequestClient_ReportResult_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::net::interfaces::ProxyResolverFactoryRequestClient::ReportResult", __FILE__, __LINE__);
      break;
    }
    case internal::kProxyResolverFactoryRequestClient_Alert_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::net::interfaces::ProxyResolverFactoryRequestClient::Alert", __FILE__, __LINE__);
      break;
    }
    case internal::kProxyResolverFactoryRequestClient_OnError_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::net::interfaces::ProxyResolverFactoryRequestClient::OnError", __FILE__, __LINE__);
      break;
    }
    case internal::kProxyResolverFactoryRequestClient_ResolveDns_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::net::interfaces::ProxyResolverFactoryRequestClient::ResolveDns", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

ProxyResolverFactoryRequestClientRequestValidator::ProxyResolverFactoryRequestClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ProxyResolverFactoryRequestClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kProxyResolverFactoryRequestClient_ReportResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactoryRequestClient_ReportResult_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kProxyResolverFactoryRequestClient_Alert_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactoryRequestClient_Alert_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kProxyResolverFactoryRequestClient_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactoryRequestClient_OnError_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kProxyResolverFactoryRequestClient_ResolveDns_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProxyResolverFactoryRequestClient_ResolveDns_Params_Data>(message)) {
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

size_t GetSerializedSize_(const ProxyServerPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::ProxyServer_Data);
  size += GetSerializedSize_(input->host);
  return size;
}

void Serialize_(ProxyServerPtr input, mojo::internal::Buffer* buf,
                internal::ProxyServer_Data** output) {
  if (input) {
    internal::ProxyServer_Data* result =
        internal::ProxyServer_Data::New(buf);
    result->scheme.value = static_cast<int32_t>(input->scheme);
    Serialize_(std::move(input->host), buf, &result->host.ptr);
    result->port = input->port;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::ProxyServer_Data* input,
                  ProxyServerPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    ProxyServerPtr result(ProxyServer::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->scheme = static_cast<ProxyScheme>(input->scheme.value);
      if (!Deserialize_(input->host.ptr, &result->host, context))
        success = false;
      result->port = input->port;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

ProxyServer_Reader::ProxyServer_Reader(
    internal::ProxyServer_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace interfaces
}  // namespace net

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif