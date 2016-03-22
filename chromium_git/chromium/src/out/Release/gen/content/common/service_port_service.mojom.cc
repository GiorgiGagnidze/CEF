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

#include "content/common/service_port_service.mojom.h"

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
const uint32_t kServicePortService_SetClient_Name = 0;

class ServicePortService_SetClient_Params_Data {
 public:
  static ServicePortService_SetClient_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  ServicePortService_SetClient_Params_Data();
  ~ServicePortService_SetClient_Params_Data() = delete;
};
static_assert(sizeof(ServicePortService_SetClient_Params_Data) == 16,
              "Bad sizeof(ServicePortService_SetClient_Params_Data)");

// static
ServicePortService_SetClient_Params_Data* ServicePortService_SetClient_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ServicePortService_SetClient_Params_Data))) ServicePortService_SetClient_Params_Data();
}

// static
bool ServicePortService_SetClient_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServicePortService_SetClient_Params_Data* object = static_cast<const ServicePortService_SetClient_Params_Data*>(data);

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

  const mojo::Handle client_handle = object->client.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          client_handle,
          "invalid client field in ServicePortService_SetClient_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(client_handle, bounds_checker))
    return false;

  return true;
}

void ServicePortService_SetClient_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&client, handles);
}

void ServicePortService_SetClient_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&client, handles);
}

ServicePortService_SetClient_Params_Data::ServicePortService_SetClient_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kServicePortService_Connect_Name = 1;

class ServicePortService_Connect_Params_Data {
 public:
  static ServicePortService_Connect_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer target_url;
  mojo::internal::StringPointer origin;

 private:
  ServicePortService_Connect_Params_Data();
  ~ServicePortService_Connect_Params_Data() = delete;
};
static_assert(sizeof(ServicePortService_Connect_Params_Data) == 24,
              "Bad sizeof(ServicePortService_Connect_Params_Data)");

// static
ServicePortService_Connect_Params_Data* ServicePortService_Connect_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ServicePortService_Connect_Params_Data))) ServicePortService_Connect_Params_Data();
}

// static
bool ServicePortService_Connect_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServicePortService_Connect_Params_Data* object = static_cast<const ServicePortService_Connect_Params_Data*>(data);

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
          object->target_url, "null target_url field in ServicePortService_Connect_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams target_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->target_url, bounds_checker,
                                     &target_url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, "null origin field in ServicePortService_Connect_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams origin_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->origin, bounds_checker,
                                     &origin_validate_params)) {
    return false;
  }

  return true;
}

void ServicePortService_Connect_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&target_url, handles);
  mojo::internal::Encode(&origin, handles);
}

void ServicePortService_Connect_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&target_url, handles);
  mojo::internal::Decode(&origin, handles);
}

ServicePortService_Connect_Params_Data::ServicePortService_Connect_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class ServicePortService_Connect_ResponseParams_Data {
 public:
  static ServicePortService_Connect_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::ServicePortConnectResult_Data result;
  int32_t port_id;

 private:
  ServicePortService_Connect_ResponseParams_Data();
  ~ServicePortService_Connect_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServicePortService_Connect_ResponseParams_Data) == 16,
              "Bad sizeof(ServicePortService_Connect_ResponseParams_Data)");

// static
ServicePortService_Connect_ResponseParams_Data* ServicePortService_Connect_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ServicePortService_Connect_ResponseParams_Data))) ServicePortService_Connect_ResponseParams_Data();
}

// static
bool ServicePortService_Connect_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServicePortService_Connect_ResponseParams_Data* object = static_cast<const ServicePortService_Connect_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->result))
    return false;

  return true;
}

void ServicePortService_Connect_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ServicePortService_Connect_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ServicePortService_Connect_ResponseParams_Data::ServicePortService_Connect_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kServicePortService_PostMessageToPort_Name = 2;

class ServicePortService_PostMessageToPort_Params_Data {
 public:
  static ServicePortService_PostMessageToPort_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t port_id;
  uint8_t pad0_[4];
  mojo::internal::StringPointer message;
  mojo::internal::ArrayPointer<internal::MojoTransferredMessagePort_Data*> ports;

 private:
  ServicePortService_PostMessageToPort_Params_Data();
  ~ServicePortService_PostMessageToPort_Params_Data() = delete;
};
static_assert(sizeof(ServicePortService_PostMessageToPort_Params_Data) == 32,
              "Bad sizeof(ServicePortService_PostMessageToPort_Params_Data)");

// static
ServicePortService_PostMessageToPort_Params_Data* ServicePortService_PostMessageToPort_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ServicePortService_PostMessageToPort_Params_Data))) ServicePortService_PostMessageToPort_Params_Data();
}

// static
bool ServicePortService_PostMessageToPort_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServicePortService_PostMessageToPort_Params_Data* object = static_cast<const ServicePortService_PostMessageToPort_Params_Data*>(data);

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
          object->message, "null message field in ServicePortService_PostMessageToPort_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->message, bounds_checker,
                                     &message_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ports, "null ports field in ServicePortService_PostMessageToPort_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams ports_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->ports, bounds_checker,
                                     &ports_validate_params)) {
    return false;
  }

  return true;
}

void ServicePortService_PostMessageToPort_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&message, handles);
  mojo::internal::Encode(&ports, handles);
}

void ServicePortService_PostMessageToPort_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&message, handles);
  mojo::internal::Decode(&ports, handles);
}

ServicePortService_PostMessageToPort_Params_Data::ServicePortService_PostMessageToPort_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kServicePortService_ClosePort_Name = 3;

class ServicePortService_ClosePort_Params_Data {
 public:
  static ServicePortService_ClosePort_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t port_id;
  uint8_t padfinal_[4];

 private:
  ServicePortService_ClosePort_Params_Data();
  ~ServicePortService_ClosePort_Params_Data() = delete;
};
static_assert(sizeof(ServicePortService_ClosePort_Params_Data) == 16,
              "Bad sizeof(ServicePortService_ClosePort_Params_Data)");

// static
ServicePortService_ClosePort_Params_Data* ServicePortService_ClosePort_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ServicePortService_ClosePort_Params_Data))) ServicePortService_ClosePort_Params_Data();
}

// static
bool ServicePortService_ClosePort_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServicePortService_ClosePort_Params_Data* object = static_cast<const ServicePortService_ClosePort_Params_Data*>(data);

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

void ServicePortService_ClosePort_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void ServicePortService_ClosePort_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

ServicePortService_ClosePort_Params_Data::ServicePortService_ClosePort_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kServicePortServiceClient_PostMessageToPort_Name = 0;

class ServicePortServiceClient_PostMessageToPort_Params_Data {
 public:
  static ServicePortServiceClient_PostMessageToPort_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t port_id;
  uint8_t pad0_[4];
  mojo::internal::StringPointer message;
  mojo::internal::ArrayPointer<internal::MojoTransferredMessagePort_Data*> ports;
  mojo::internal::ArrayPointer<int32_t> new_routing_ids;

 private:
  ServicePortServiceClient_PostMessageToPort_Params_Data();
  ~ServicePortServiceClient_PostMessageToPort_Params_Data() = delete;
};
static_assert(sizeof(ServicePortServiceClient_PostMessageToPort_Params_Data) == 40,
              "Bad sizeof(ServicePortServiceClient_PostMessageToPort_Params_Data)");

// static
ServicePortServiceClient_PostMessageToPort_Params_Data* ServicePortServiceClient_PostMessageToPort_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ServicePortServiceClient_PostMessageToPort_Params_Data))) ServicePortServiceClient_PostMessageToPort_Params_Data();
}

// static
bool ServicePortServiceClient_PostMessageToPort_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServicePortServiceClient_PostMessageToPort_Params_Data* object = static_cast<const ServicePortServiceClient_PostMessageToPort_Params_Data*>(data);

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
          object->message, "null message field in ServicePortServiceClient_PostMessageToPort_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->message, bounds_checker,
                                     &message_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->ports, "null ports field in ServicePortServiceClient_PostMessageToPort_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams ports_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->ports, bounds_checker,
                                     &ports_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->new_routing_ids, "null new_routing_ids field in ServicePortServiceClient_PostMessageToPort_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams new_routing_ids_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->new_routing_ids, bounds_checker,
                                     &new_routing_ids_validate_params)) {
    return false;
  }

  return true;
}

void ServicePortServiceClient_PostMessageToPort_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&message, handles);
  mojo::internal::Encode(&ports, handles);
  mojo::internal::Encode(&new_routing_ids, handles);
}

void ServicePortServiceClient_PostMessageToPort_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&message, handles);
  mojo::internal::Decode(&ports, handles);
  mojo::internal::Decode(&new_routing_ids, handles);
}

ServicePortServiceClient_PostMessageToPort_Params_Data::ServicePortServiceClient_PostMessageToPort_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kServicePortDispatcher_Connect_Name = 0;

class ServicePortDispatcher_Connect_Params_Data {
 public:
  static ServicePortDispatcher_Connect_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer target_url;
  mojo::internal::StringPointer origin;
  int32_t port_id;
  uint8_t padfinal_[4];

 private:
  ServicePortDispatcher_Connect_Params_Data();
  ~ServicePortDispatcher_Connect_Params_Data() = delete;
};
static_assert(sizeof(ServicePortDispatcher_Connect_Params_Data) == 32,
              "Bad sizeof(ServicePortDispatcher_Connect_Params_Data)");

// static
ServicePortDispatcher_Connect_Params_Data* ServicePortDispatcher_Connect_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ServicePortDispatcher_Connect_Params_Data))) ServicePortDispatcher_Connect_Params_Data();
}

// static
bool ServicePortDispatcher_Connect_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServicePortDispatcher_Connect_Params_Data* object = static_cast<const ServicePortDispatcher_Connect_Params_Data*>(data);

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
          object->target_url, "null target_url field in ServicePortDispatcher_Connect_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams target_url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->target_url, bounds_checker,
                                     &target_url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, "null origin field in ServicePortDispatcher_Connect_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams origin_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->origin, bounds_checker,
                                     &origin_validate_params)) {
    return false;
  }

  return true;
}

void ServicePortDispatcher_Connect_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&target_url, handles);
  mojo::internal::Encode(&origin, handles);
}

void ServicePortDispatcher_Connect_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&target_url, handles);
  mojo::internal::Decode(&origin, handles);
}

ServicePortDispatcher_Connect_Params_Data::ServicePortDispatcher_Connect_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class ServicePortDispatcher_Connect_ResponseParams_Data {
 public:
  static ServicePortDispatcher_Connect_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  internal::ServicePortConnectResult_Data result;
  uint8_t pad0_[4];
  mojo::internal::StringPointer name;
  mojo::internal::StringPointer data;

 private:
  ServicePortDispatcher_Connect_ResponseParams_Data();
  ~ServicePortDispatcher_Connect_ResponseParams_Data() = delete;
};
static_assert(sizeof(ServicePortDispatcher_Connect_ResponseParams_Data) == 32,
              "Bad sizeof(ServicePortDispatcher_Connect_ResponseParams_Data)");

// static
ServicePortDispatcher_Connect_ResponseParams_Data* ServicePortDispatcher_Connect_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(ServicePortDispatcher_Connect_ResponseParams_Data))) ServicePortDispatcher_Connect_ResponseParams_Data();
}

// static
bool ServicePortDispatcher_Connect_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const ServicePortDispatcher_Connect_ResponseParams_Data* object = static_cast<const ServicePortDispatcher_Connect_ResponseParams_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->result))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, "null name field in ServicePortDispatcher_Connect_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->name, bounds_checker,
                                     &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, "null data field in ServicePortDispatcher_Connect_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->data, bounds_checker,
                                     &data_validate_params)) {
    return false;
  }

  return true;
}

void ServicePortDispatcher_Connect_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&name, handles);
  mojo::internal::Encode(&data, handles);
}

void ServicePortDispatcher_Connect_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&name, handles);
  mojo::internal::Decode(&data, handles);
}

ServicePortDispatcher_Connect_ResponseParams_Data::ServicePortDispatcher_Connect_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
MojoTransferredMessagePort_Data* MojoTransferredMessagePort_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(MojoTransferredMessagePort_Data))) MojoTransferredMessagePort_Data();
}

// static
bool MojoTransferredMessagePort_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const MojoTransferredMessagePort_Data* object = static_cast<const MojoTransferredMessagePort_Data*>(data);

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

void MojoTransferredMessagePort_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void MojoTransferredMessagePort_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

MojoTransferredMessagePort_Data::MojoTransferredMessagePort_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
MojoTransferredMessagePortPtr MojoTransferredMessagePort::New() {
  MojoTransferredMessagePortPtr rv;
  mojo::internal::StructHelper<MojoTransferredMessagePort>::Initialize(&rv);
  return rv;
}

MojoTransferredMessagePort::MojoTransferredMessagePort()
    : id(),
      send_messages_as_values() {
}

MojoTransferredMessagePort::~MojoTransferredMessagePort() {
}


MojoTransferredMessagePortPtr MojoTransferredMessagePort::Clone() const {
  MojoTransferredMessagePortPtr rv(New());
  rv->id = id;
  rv->send_messages_as_values = send_messages_as_values;
  return rv;
}


bool MojoTransferredMessagePort::Equals(const MojoTransferredMessagePort& other) const {
  if (!mojo::internal::ValueTraits<int32_t>::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->send_messages_as_values, other.send_messages_as_values))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char ServicePortService::Name_[] = "content::ServicePortService";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ServicePortService::Version_;
class ServicePortService_Connect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServicePortService_Connect_ForwardToCallback(
      const ServicePortService::ConnectCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServicePortService::ConnectCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ServicePortService_Connect_ForwardToCallback);
};
bool ServicePortService_Connect_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ServicePortService_Connect_ResponseParams_Data* params =
      reinterpret_cast<internal::ServicePortService_Connect_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  ServicePortConnectResult p_result{};
  int32_t p_port_id{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_result = static_cast<ServicePortConnectResult>(params->result.value);
    p_port_id = params->port_id;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_result, p_port_id);
  return true;
}

ServicePortServiceProxy::ServicePortServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ServicePortServiceProxy::SetClient(
    ServicePortServiceClientPtr in_client) {
  size_t size = sizeof(internal::ServicePortService_SetClient_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kServicePortService_SetClient_Name, size);

  internal::ServicePortService_SetClient_Params_Data* params =
      internal::ServicePortService_SetClient_Params_Data::New(builder.buffer());
  mojo::internal::InterfacePointerToData(std::move(in_client), &params->client);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->client.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in ServicePortService.SetClient request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ServicePortServiceProxy::Connect(
    const mojo::String& in_target_url, const mojo::String& in_origin, const ConnectCallback& callback) {
  size_t size = sizeof(internal::ServicePortService_Connect_Params_Data);
  size += GetSerializedSize_(in_target_url);
  size += GetSerializedSize_(in_origin);
  mojo::internal::RequestMessageBuilder builder(internal::kServicePortService_Connect_Name, size);

  internal::ServicePortService_Connect_Params_Data* params =
      internal::ServicePortService_Connect_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_target_url), builder.buffer(), &params->target_url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->target_url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target_url in ServicePortService.Connect request");
  Serialize_(std::move(in_origin), builder.buffer(), &params->origin.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->origin.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in ServicePortService.Connect request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ServicePortService_Connect_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void ServicePortServiceProxy::PostMessageToPort(
    int32_t in_port_id, const mojo::String& in_message, mojo::Array<MojoTransferredMessagePortPtr> in_ports) {
  size_t size = sizeof(internal::ServicePortService_PostMessageToPort_Params_Data);
  size += GetSerializedSize_(in_message);
  size += GetSerializedSize_(in_ports);
  mojo::internal::MessageBuilder builder(internal::kServicePortService_PostMessageToPort_Name, size);

  internal::ServicePortService_PostMessageToPort_Params_Data* params =
      internal::ServicePortService_PostMessageToPort_Params_Data::New(builder.buffer());
  params->port_id = in_port_id;
  Serialize_(std::move(in_message), builder.buffer(), &params->message.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->message.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ServicePortService.PostMessageToPort request");
  const mojo::internal::ArrayValidateParams ports_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_ports), builder.buffer(),
      &params->ports.ptr, &ports_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->ports.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ports in ServicePortService.PostMessageToPort request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void ServicePortServiceProxy::ClosePort(
    int32_t in_port_id) {
  size_t size = sizeof(internal::ServicePortService_ClosePort_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kServicePortService_ClosePort_Name, size);

  internal::ServicePortService_ClosePort_Params_Data* params =
      internal::ServicePortService_ClosePort_Params_Data::New(builder.buffer());
  params->port_id = in_port_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
class ServicePortService_Connect_ProxyToResponder
    : public ServicePortService::ConnectCallback::Runnable {
 public:
  ~ServicePortService_Connect_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "ServicePortService::Connect(p_target_url, p_origin, callback) "
        "was never run.";
  }

  ServicePortService_Connect_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(ServicePortConnectResult in_result, int32_t in_port_id) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ServicePortService_Connect_ProxyToResponder);
};
void ServicePortService_Connect_ProxyToResponder::Run(
    ServicePortConnectResult in_result, int32_t in_port_id) const {
  size_t size = sizeof(internal::ServicePortService_Connect_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kServicePortService_Connect_Name, size, request_id_);
  internal::ServicePortService_Connect_ResponseParams_Data* params =
      internal::ServicePortService_Connect_ResponseParams_Data::New(builder.buffer());
  params->result.value = static_cast<int32_t>(in_result);
  params->port_id = in_port_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

ServicePortServiceStub::ServicePortServiceStub()
    : sink_(nullptr),
      control_message_handler_(ServicePortService::Version_) {
}

ServicePortServiceStub::~ServicePortServiceStub() {}

bool ServicePortServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kServicePortService_SetClient_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.ServicePortService.SetClient", __FILE__, __LINE__);
      internal::ServicePortService_SetClient_Params_Data* params =
          reinterpret_cast<internal::ServicePortService_SetClient_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      ServicePortServiceClientPtr p_client{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        mojo::internal::InterfaceDataToPointer(&params->client, &p_client);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServicePortService::SetClient");
      sink_->SetClient(std::move(p_client));
      return true;
    }
    case internal::kServicePortService_Connect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.ServicePortService.Connect", __FILE__, __LINE__);
      break;
    }
    case internal::kServicePortService_PostMessageToPort_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.ServicePortService.PostMessageToPort", __FILE__, __LINE__);
      internal::ServicePortService_PostMessageToPort_Params_Data* params =
          reinterpret_cast<internal::ServicePortService_PostMessageToPort_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int32_t p_port_id{};
      mojo::String p_message{};
      mojo::Array<MojoTransferredMessagePortPtr> p_ports{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_port_id = params->port_id;
        if (!Deserialize_(params->message.ptr, &p_message, &serialization_context_))
          success = false;
        if (!Deserialize_(params->ports.ptr, &p_ports, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServicePortService::PostMessageToPort");
      sink_->PostMessageToPort(p_port_id, p_message, std::move(p_ports));
      return true;
    }
    case internal::kServicePortService_ClosePort_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.ServicePortService.ClosePort", __FILE__, __LINE__);
      internal::ServicePortService_ClosePort_Params_Data* params =
          reinterpret_cast<internal::ServicePortService_ClosePort_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int32_t p_port_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_port_id = params->port_id;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServicePortService::ClosePort");
      sink_->ClosePort(p_port_id);
      return true;
    }
  }
  return false;
}

bool ServicePortServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kServicePortService_SetClient_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::ServicePortService::SetClient", __FILE__, __LINE__);
      break;
    }
    case internal::kServicePortService_Connect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::ServicePortService::Connect", __FILE__, __LINE__);
      internal::ServicePortService_Connect_Params_Data* params =
          reinterpret_cast<internal::ServicePortService_Connect_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_target_url{};
      mojo::String p_origin{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->target_url.ptr, &p_target_url, &serialization_context_))
          success = false;
        if (!Deserialize_(params->origin.ptr, &p_origin, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      ServicePortService::ConnectCallback::Runnable* runnable =
          new ServicePortService_Connect_ProxyToResponder(
              message->request_id(), responder);
      ServicePortService::ConnectCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServicePortService::Connect");
      sink_->Connect(p_target_url, p_origin, callback);
      return true;
    }
    case internal::kServicePortService_PostMessageToPort_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::ServicePortService::PostMessageToPort", __FILE__, __LINE__);
      break;
    }
    case internal::kServicePortService_ClosePort_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::ServicePortService::ClosePort", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

ServicePortServiceRequestValidator::ServicePortServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ServicePortServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kServicePortService_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServicePortService_SetClient_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kServicePortService_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServicePortService_Connect_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kServicePortService_PostMessageToPort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServicePortService_PostMessageToPort_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kServicePortService_ClosePort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServicePortService_ClosePort_Params_Data>(message)) {
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

ServicePortServiceResponseValidator::ServicePortServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ServicePortServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kServicePortService_Connect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServicePortService_Connect_ResponseParams_Data>(message)) {
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
MOJO_STATIC_CONST_MEMBER_DEFINITION const char ServicePortServiceClient::Name_[] = "content::ServicePortServiceClient";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ServicePortServiceClient::Version_;

ServicePortServiceClientProxy::ServicePortServiceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ServicePortServiceClientProxy::PostMessageToPort(
    int32_t in_port_id, const mojo::String& in_message, mojo::Array<MojoTransferredMessagePortPtr> in_ports, mojo::Array<int32_t> in_new_routing_ids) {
  size_t size = sizeof(internal::ServicePortServiceClient_PostMessageToPort_Params_Data);
  size += GetSerializedSize_(in_message);
  size += GetSerializedSize_(in_ports);
  size += GetSerializedSize_(in_new_routing_ids);
  mojo::internal::MessageBuilder builder(internal::kServicePortServiceClient_PostMessageToPort_Name, size);

  internal::ServicePortServiceClient_PostMessageToPort_Params_Data* params =
      internal::ServicePortServiceClient_PostMessageToPort_Params_Data::New(builder.buffer());
  params->port_id = in_port_id;
  Serialize_(std::move(in_message), builder.buffer(), &params->message.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->message.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ServicePortServiceClient.PostMessageToPort request");
  const mojo::internal::ArrayValidateParams ports_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_ports), builder.buffer(),
      &params->ports.ptr, &ports_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->ports.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null ports in ServicePortServiceClient.PostMessageToPort request");
  const mojo::internal::ArrayValidateParams new_routing_ids_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_new_routing_ids), builder.buffer(),
      &params->new_routing_ids.ptr, &new_routing_ids_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->new_routing_ids.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null new_routing_ids in ServicePortServiceClient.PostMessageToPort request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

ServicePortServiceClientStub::ServicePortServiceClientStub()
    : sink_(nullptr),
      control_message_handler_(ServicePortServiceClient::Version_) {
}

ServicePortServiceClientStub::~ServicePortServiceClientStub() {}

bool ServicePortServiceClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kServicePortServiceClient_PostMessageToPort_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.ServicePortServiceClient.PostMessageToPort", __FILE__, __LINE__);
      internal::ServicePortServiceClient_PostMessageToPort_Params_Data* params =
          reinterpret_cast<internal::ServicePortServiceClient_PostMessageToPort_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int32_t p_port_id{};
      mojo::String p_message{};
      mojo::Array<MojoTransferredMessagePortPtr> p_ports{};
      mojo::Array<int32_t> p_new_routing_ids{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_port_id = params->port_id;
        if (!Deserialize_(params->message.ptr, &p_message, &serialization_context_))
          success = false;
        if (!Deserialize_(params->ports.ptr, &p_ports, &serialization_context_))
          success = false;
        if (!Deserialize_(params->new_routing_ids.ptr, &p_new_routing_ids, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServicePortServiceClient::PostMessageToPort");
      sink_->PostMessageToPort(p_port_id, p_message, std::move(p_ports), std::move(p_new_routing_ids));
      return true;
    }
  }
  return false;
}

bool ServicePortServiceClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kServicePortServiceClient_PostMessageToPort_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::ServicePortServiceClient::PostMessageToPort", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

ServicePortServiceClientRequestValidator::ServicePortServiceClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ServicePortServiceClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kServicePortServiceClient_PostMessageToPort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServicePortServiceClient_PostMessageToPort_Params_Data>(message)) {
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

MOJO_STATIC_CONST_MEMBER_DEFINITION const char ServicePortDispatcher::Name_[] = "content::ServicePortDispatcher";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t ServicePortDispatcher::Version_;
class ServicePortDispatcher_Connect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServicePortDispatcher_Connect_ForwardToCallback(
      const ServicePortDispatcher::ConnectCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ServicePortDispatcher::ConnectCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ServicePortDispatcher_Connect_ForwardToCallback);
};
bool ServicePortDispatcher_Connect_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ServicePortDispatcher_Connect_ResponseParams_Data* params =
      reinterpret_cast<internal::ServicePortDispatcher_Connect_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  ServicePortConnectResult p_result{};
  mojo::String p_name{};
  mojo::String p_data{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_result = static_cast<ServicePortConnectResult>(params->result.value);
    if (!Deserialize_(params->name.ptr, &p_name, &serialization_context_))
      success = false;
    if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_result, p_name, p_data);
  return true;
}

ServicePortDispatcherProxy::ServicePortDispatcherProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void ServicePortDispatcherProxy::Connect(
    const mojo::String& in_target_url, const mojo::String& in_origin, int32_t in_port_id, const ConnectCallback& callback) {
  size_t size = sizeof(internal::ServicePortDispatcher_Connect_Params_Data);
  size += GetSerializedSize_(in_target_url);
  size += GetSerializedSize_(in_origin);
  mojo::internal::RequestMessageBuilder builder(internal::kServicePortDispatcher_Connect_Name, size);

  internal::ServicePortDispatcher_Connect_Params_Data* params =
      internal::ServicePortDispatcher_Connect_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_target_url), builder.buffer(), &params->target_url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->target_url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target_url in ServicePortDispatcher.Connect request");
  Serialize_(std::move(in_origin), builder.buffer(), &params->origin.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->origin.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in ServicePortDispatcher.Connect request");
  params->port_id = in_port_id;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ServicePortDispatcher_Connect_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ServicePortDispatcher_Connect_ProxyToResponder
    : public ServicePortDispatcher::ConnectCallback::Runnable {
 public:
  ~ServicePortDispatcher_Connect_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "ServicePortDispatcher::Connect(p_target_url, p_origin, p_port_id, callback) "
        "was never run.";
  }

  ServicePortDispatcher_Connect_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(ServicePortConnectResult in_result, const mojo::String& in_name, const mojo::String& in_data) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(ServicePortDispatcher_Connect_ProxyToResponder);
};
void ServicePortDispatcher_Connect_ProxyToResponder::Run(
    ServicePortConnectResult in_result, const mojo::String& in_name, const mojo::String& in_data) const {
  size_t size = sizeof(internal::ServicePortDispatcher_Connect_ResponseParams_Data);
  size += GetSerializedSize_(in_name);
  size += GetSerializedSize_(in_data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kServicePortDispatcher_Connect_Name, size, request_id_);
  internal::ServicePortDispatcher_Connect_ResponseParams_Data* params =
      internal::ServicePortDispatcher_Connect_ResponseParams_Data::New(builder.buffer());
  params->result.value = static_cast<int32_t>(in_result);
  Serialize_(std::move(in_name), builder.buffer(), &params->name.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->name.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in ServicePortDispatcher.Connect response");
  Serialize_(std::move(in_data), builder.buffer(), &params->data.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->data.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in ServicePortDispatcher.Connect response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

ServicePortDispatcherStub::ServicePortDispatcherStub()
    : sink_(nullptr),
      control_message_handler_(ServicePortDispatcher::Version_) {
}

ServicePortDispatcherStub::~ServicePortDispatcherStub() {}

bool ServicePortDispatcherStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kServicePortDispatcher_Connect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.content.ServicePortDispatcher.Connect", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool ServicePortDispatcherStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kServicePortDispatcher_Connect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::content::ServicePortDispatcher::Connect", __FILE__, __LINE__);
      internal::ServicePortDispatcher_Connect_Params_Data* params =
          reinterpret_cast<internal::ServicePortDispatcher_Connect_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_target_url{};
      mojo::String p_origin{};
      int32_t p_port_id{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->target_url.ptr, &p_target_url, &serialization_context_))
          success = false;
        if (!Deserialize_(params->origin.ptr, &p_origin, &serialization_context_))
          success = false;
        p_port_id = params->port_id;
      } while (false);
      if (!success)
        return false;
      ServicePortDispatcher::ConnectCallback::Runnable* runnable =
          new ServicePortDispatcher_Connect_ProxyToResponder(
              message->request_id(), responder);
      ServicePortDispatcher::ConnectCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServicePortDispatcher::Connect");
      sink_->Connect(p_target_url, p_origin, p_port_id, callback);
      return true;
    }
  }
  return false;
}

ServicePortDispatcherRequestValidator::ServicePortDispatcherRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ServicePortDispatcherRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kServicePortDispatcher_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServicePortDispatcher_Connect_Params_Data>(message)) {
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

ServicePortDispatcherResponseValidator::ServicePortDispatcherResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ServicePortDispatcherResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kServicePortDispatcher_Connect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServicePortDispatcher_Connect_ResponseParams_Data>(message)) {
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
size_t GetSerializedSize_(const MojoTransferredMessagePortPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::MojoTransferredMessagePort_Data);
  return size;
}

void Serialize_(MojoTransferredMessagePortPtr input, mojo::internal::Buffer* buf,
                internal::MojoTransferredMessagePort_Data** output) {
  if (input) {
    internal::MojoTransferredMessagePort_Data* result =
        internal::MojoTransferredMessagePort_Data::New(buf);
    result->id = input->id;
    result->send_messages_as_values = input->send_messages_as_values;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::MojoTransferredMessagePort_Data* input,
                  MojoTransferredMessagePortPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    MojoTransferredMessagePortPtr result(MojoTransferredMessagePort::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->id = input->id;
      result->send_messages_as_values = input->send_messages_as_values;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

MojoTransferredMessagePort_Reader::MojoTransferredMessagePort_Reader(
    internal::MojoTransferredMessagePort_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace content

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif