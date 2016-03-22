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

#include "mojo/services/network/public/interfaces/network_service.mojom.h"

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
const uint32_t kNetworkService_CreateTCPBoundSocket_Name = 0;

class NetworkService_CreateTCPBoundSocket_Params_Data {
 public:
  static NetworkService_CreateTCPBoundSocket_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> local_address;
  mojo::MessagePipeHandle bound_socket;
  uint8_t padfinal_[4];

 private:
  NetworkService_CreateTCPBoundSocket_Params_Data();
  ~NetworkService_CreateTCPBoundSocket_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_CreateTCPBoundSocket_Params_Data) == 24,
              "Bad sizeof(NetworkService_CreateTCPBoundSocket_Params_Data)");

// static
NetworkService_CreateTCPBoundSocket_Params_Data* NetworkService_CreateTCPBoundSocket_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetworkService_CreateTCPBoundSocket_Params_Data))) NetworkService_CreateTCPBoundSocket_Params_Data();
}

// static
bool NetworkService_CreateTCPBoundSocket_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkService_CreateTCPBoundSocket_Params_Data* object = static_cast<const NetworkService_CreateTCPBoundSocket_Params_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->local_address, bounds_checker))
    return false;

  const mojo::Handle bound_socket_handle = object->bound_socket;
  if (!mojo::internal::ValidateHandleNonNullable(
          bound_socket_handle,
          "invalid bound_socket field in NetworkService_CreateTCPBoundSocket_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(bound_socket_handle, bounds_checker))
    return false;

  return true;
}

void NetworkService_CreateTCPBoundSocket_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&local_address, handles);
  mojo::internal::EncodeHandle(&bound_socket, handles);
}

void NetworkService_CreateTCPBoundSocket_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&local_address, handles);
  mojo::internal::DecodeHandle(&bound_socket, handles);
}

NetworkService_CreateTCPBoundSocket_Params_Data::NetworkService_CreateTCPBoundSocket_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class NetworkService_CreateTCPBoundSocket_ResponseParams_Data {
 public:
  static NetworkService_CreateTCPBoundSocket_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> bound_to;

 private:
  NetworkService_CreateTCPBoundSocket_ResponseParams_Data();
  ~NetworkService_CreateTCPBoundSocket_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkService_CreateTCPBoundSocket_ResponseParams_Data) == 24,
              "Bad sizeof(NetworkService_CreateTCPBoundSocket_ResponseParams_Data)");

// static
NetworkService_CreateTCPBoundSocket_ResponseParams_Data* NetworkService_CreateTCPBoundSocket_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetworkService_CreateTCPBoundSocket_ResponseParams_Data))) NetworkService_CreateTCPBoundSocket_ResponseParams_Data();
}

// static
bool NetworkService_CreateTCPBoundSocket_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkService_CreateTCPBoundSocket_ResponseParams_Data* object = static_cast<const NetworkService_CreateTCPBoundSocket_ResponseParams_Data*>(data);

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
          object->result, "null result field in NetworkService_CreateTCPBoundSocket_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->bound_to, bounds_checker))
    return false;

  return true;
}

void NetworkService_CreateTCPBoundSocket_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
  mojo::internal::Encode(&bound_to, handles);
}

void NetworkService_CreateTCPBoundSocket_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
  mojo::internal::Decode(&bound_to, handles);
}

NetworkService_CreateTCPBoundSocket_ResponseParams_Data::NetworkService_CreateTCPBoundSocket_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kNetworkService_CreateTCPConnectedSocket_Name = 1;

class NetworkService_CreateTCPConnectedSocket_Params_Data {
 public:
  static NetworkService_CreateTCPConnectedSocket_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> remote_address;
  mojo::DataPipeConsumerHandle send_stream;
  mojo::DataPipeProducerHandle receive_stream;
  mojo::MessagePipeHandle client_socket;
  uint8_t padfinal_[4];

 private:
  NetworkService_CreateTCPConnectedSocket_Params_Data();
  ~NetworkService_CreateTCPConnectedSocket_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_CreateTCPConnectedSocket_Params_Data) == 32,
              "Bad sizeof(NetworkService_CreateTCPConnectedSocket_Params_Data)");

// static
NetworkService_CreateTCPConnectedSocket_Params_Data* NetworkService_CreateTCPConnectedSocket_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetworkService_CreateTCPConnectedSocket_Params_Data))) NetworkService_CreateTCPConnectedSocket_Params_Data();
}

// static
bool NetworkService_CreateTCPConnectedSocket_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkService_CreateTCPConnectedSocket_Params_Data* object = static_cast<const NetworkService_CreateTCPConnectedSocket_Params_Data*>(data);

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
          object->remote_address, "null remote_address field in NetworkService_CreateTCPConnectedSocket_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->remote_address, bounds_checker))
    return false;

  const mojo::Handle send_stream_handle = object->send_stream;
  if (!mojo::internal::ValidateHandleNonNullable(
          send_stream_handle,
          "invalid send_stream field in NetworkService_CreateTCPConnectedSocket_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(send_stream_handle, bounds_checker))
    return false;

  const mojo::Handle receive_stream_handle = object->receive_stream;
  if (!mojo::internal::ValidateHandleNonNullable(
          receive_stream_handle,
          "invalid receive_stream field in NetworkService_CreateTCPConnectedSocket_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(receive_stream_handle, bounds_checker))
    return false;

  const mojo::Handle client_socket_handle = object->client_socket;
  if (!mojo::internal::ValidateHandleNonNullable(
          client_socket_handle,
          "invalid client_socket field in NetworkService_CreateTCPConnectedSocket_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(client_socket_handle, bounds_checker))
    return false;

  return true;
}

void NetworkService_CreateTCPConnectedSocket_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&remote_address, handles);
  mojo::internal::EncodeHandle(&send_stream, handles);
  mojo::internal::EncodeHandle(&receive_stream, handles);
  mojo::internal::EncodeHandle(&client_socket, handles);
}

void NetworkService_CreateTCPConnectedSocket_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&remote_address, handles);
  mojo::internal::DecodeHandle(&send_stream, handles);
  mojo::internal::DecodeHandle(&receive_stream, handles);
  mojo::internal::DecodeHandle(&client_socket, handles);
}

NetworkService_CreateTCPConnectedSocket_Params_Data::NetworkService_CreateTCPConnectedSocket_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class NetworkService_CreateTCPConnectedSocket_ResponseParams_Data {
 public:
  static NetworkService_CreateTCPConnectedSocket_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> local_address;

 private:
  NetworkService_CreateTCPConnectedSocket_ResponseParams_Data();
  ~NetworkService_CreateTCPConnectedSocket_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkService_CreateTCPConnectedSocket_ResponseParams_Data) == 24,
              "Bad sizeof(NetworkService_CreateTCPConnectedSocket_ResponseParams_Data)");

// static
NetworkService_CreateTCPConnectedSocket_ResponseParams_Data* NetworkService_CreateTCPConnectedSocket_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetworkService_CreateTCPConnectedSocket_ResponseParams_Data))) NetworkService_CreateTCPConnectedSocket_ResponseParams_Data();
}

// static
bool NetworkService_CreateTCPConnectedSocket_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkService_CreateTCPConnectedSocket_ResponseParams_Data* object = static_cast<const NetworkService_CreateTCPConnectedSocket_ResponseParams_Data*>(data);

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
          object->result, "null result field in NetworkService_CreateTCPConnectedSocket_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->local_address, bounds_checker))
    return false;

  return true;
}

void NetworkService_CreateTCPConnectedSocket_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
  mojo::internal::Encode(&local_address, handles);
}

void NetworkService_CreateTCPConnectedSocket_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
  mojo::internal::Decode(&local_address, handles);
}

NetworkService_CreateTCPConnectedSocket_ResponseParams_Data::NetworkService_CreateTCPConnectedSocket_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kNetworkService_CreateUDPSocket_Name = 2;

class NetworkService_CreateUDPSocket_Params_Data {
 public:
  static NetworkService_CreateUDPSocket_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::MessagePipeHandle socket;
  uint8_t padfinal_[4];

 private:
  NetworkService_CreateUDPSocket_Params_Data();
  ~NetworkService_CreateUDPSocket_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_CreateUDPSocket_Params_Data) == 16,
              "Bad sizeof(NetworkService_CreateUDPSocket_Params_Data)");

// static
NetworkService_CreateUDPSocket_Params_Data* NetworkService_CreateUDPSocket_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetworkService_CreateUDPSocket_Params_Data))) NetworkService_CreateUDPSocket_Params_Data();
}

// static
bool NetworkService_CreateUDPSocket_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkService_CreateUDPSocket_Params_Data* object = static_cast<const NetworkService_CreateUDPSocket_Params_Data*>(data);

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

  const mojo::Handle socket_handle = object->socket;
  if (!mojo::internal::ValidateHandleNonNullable(
          socket_handle,
          "invalid socket field in NetworkService_CreateUDPSocket_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(socket_handle, bounds_checker))
    return false;

  return true;
}

void NetworkService_CreateUDPSocket_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::EncodeHandle(&socket, handles);
}

void NetworkService_CreateUDPSocket_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::DecodeHandle(&socket, handles);
}

NetworkService_CreateUDPSocket_Params_Data::NetworkService_CreateUDPSocket_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kNetworkService_CreateHttpServer_Name = 3;

class NetworkService_CreateHttpServer_Params_Data {
 public:
  static NetworkService_CreateHttpServer_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> local_address;
  mojo::internal::Interface_Data delegate;

 private:
  NetworkService_CreateHttpServer_Params_Data();
  ~NetworkService_CreateHttpServer_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_CreateHttpServer_Params_Data) == 24,
              "Bad sizeof(NetworkService_CreateHttpServer_Params_Data)");

// static
NetworkService_CreateHttpServer_Params_Data* NetworkService_CreateHttpServer_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetworkService_CreateHttpServer_Params_Data))) NetworkService_CreateHttpServer_Params_Data();
}

// static
bool NetworkService_CreateHttpServer_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkService_CreateHttpServer_Params_Data* object = static_cast<const NetworkService_CreateHttpServer_Params_Data*>(data);

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
          object->local_address, "null local_address field in NetworkService_CreateHttpServer_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->local_address, bounds_checker))
    return false;

  const mojo::Handle delegate_handle = object->delegate.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          delegate_handle,
          "invalid delegate field in NetworkService_CreateHttpServer_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(delegate_handle, bounds_checker))
    return false;

  return true;
}

void NetworkService_CreateHttpServer_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&local_address, handles);
  mojo::internal::EncodeHandle(&delegate, handles);
}

void NetworkService_CreateHttpServer_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&local_address, handles);
  mojo::internal::DecodeHandle(&delegate, handles);
}

NetworkService_CreateHttpServer_Params_Data::NetworkService_CreateHttpServer_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class NetworkService_CreateHttpServer_ResponseParams_Data {
 public:
  static NetworkService_CreateHttpServer_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> bound_to;

 private:
  NetworkService_CreateHttpServer_ResponseParams_Data();
  ~NetworkService_CreateHttpServer_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkService_CreateHttpServer_ResponseParams_Data) == 24,
              "Bad sizeof(NetworkService_CreateHttpServer_ResponseParams_Data)");

// static
NetworkService_CreateHttpServer_ResponseParams_Data* NetworkService_CreateHttpServer_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetworkService_CreateHttpServer_ResponseParams_Data))) NetworkService_CreateHttpServer_ResponseParams_Data();
}

// static
bool NetworkService_CreateHttpServer_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkService_CreateHttpServer_ResponseParams_Data* object = static_cast<const NetworkService_CreateHttpServer_ResponseParams_Data*>(data);

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
          object->result, "null result field in NetworkService_CreateHttpServer_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->bound_to, bounds_checker))
    return false;

  return true;
}

void NetworkService_CreateHttpServer_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
  mojo::internal::Encode(&bound_to, handles);
}

void NetworkService_CreateHttpServer_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
  mojo::internal::Decode(&bound_to, handles);
}

NetworkService_CreateHttpServer_ResponseParams_Data::NetworkService_CreateHttpServer_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kNetworkService_GetMimeTypeFromFile_Name = 4;

class NetworkService_GetMimeTypeFromFile_Params_Data {
 public:
  static NetworkService_GetMimeTypeFromFile_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer file_path;

 private:
  NetworkService_GetMimeTypeFromFile_Params_Data();
  ~NetworkService_GetMimeTypeFromFile_Params_Data() = delete;
};
static_assert(sizeof(NetworkService_GetMimeTypeFromFile_Params_Data) == 16,
              "Bad sizeof(NetworkService_GetMimeTypeFromFile_Params_Data)");

// static
NetworkService_GetMimeTypeFromFile_Params_Data* NetworkService_GetMimeTypeFromFile_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetworkService_GetMimeTypeFromFile_Params_Data))) NetworkService_GetMimeTypeFromFile_Params_Data();
}

// static
bool NetworkService_GetMimeTypeFromFile_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkService_GetMimeTypeFromFile_Params_Data* object = static_cast<const NetworkService_GetMimeTypeFromFile_Params_Data*>(data);

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
          object->file_path, "null file_path field in NetworkService_GetMimeTypeFromFile_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams file_path_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->file_path, bounds_checker,
                                     &file_path_validate_params)) {
    return false;
  }

  return true;
}

void NetworkService_GetMimeTypeFromFile_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&file_path, handles);
}

void NetworkService_GetMimeTypeFromFile_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&file_path, handles);
}

NetworkService_GetMimeTypeFromFile_Params_Data::NetworkService_GetMimeTypeFromFile_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class NetworkService_GetMimeTypeFromFile_ResponseParams_Data {
 public:
  static NetworkService_GetMimeTypeFromFile_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer mime_type;

 private:
  NetworkService_GetMimeTypeFromFile_ResponseParams_Data();
  ~NetworkService_GetMimeTypeFromFile_ResponseParams_Data() = delete;
};
static_assert(sizeof(NetworkService_GetMimeTypeFromFile_ResponseParams_Data) == 16,
              "Bad sizeof(NetworkService_GetMimeTypeFromFile_ResponseParams_Data)");

// static
NetworkService_GetMimeTypeFromFile_ResponseParams_Data* NetworkService_GetMimeTypeFromFile_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetworkService_GetMimeTypeFromFile_ResponseParams_Data))) NetworkService_GetMimeTypeFromFile_ResponseParams_Data();
}

// static
bool NetworkService_GetMimeTypeFromFile_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetworkService_GetMimeTypeFromFile_ResponseParams_Data* object = static_cast<const NetworkService_GetMimeTypeFromFile_ResponseParams_Data*>(data);

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
          object->mime_type, "null mime_type field in NetworkService_GetMimeTypeFromFile_ResponseParams struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams mime_type_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->mime_type, bounds_checker,
                                     &mime_type_validate_params)) {
    return false;
  }

  return true;
}

void NetworkService_GetMimeTypeFromFile_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&mime_type, handles);
}

void NetworkService_GetMimeTypeFromFile_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&mime_type, handles);
}

NetworkService_GetMimeTypeFromFile_ResponseParams_Data::NetworkService_GetMimeTypeFromFile_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char NetworkService::Name_[] = "mojo::NetworkService";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t NetworkService::Version_;
class NetworkService_CreateTCPBoundSocket_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkService_CreateTCPBoundSocket_ForwardToCallback(
      const NetworkService::CreateTCPBoundSocketCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkService::CreateTCPBoundSocketCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(NetworkService_CreateTCPBoundSocket_ForwardToCallback);
};
bool NetworkService_CreateTCPBoundSocket_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::NetworkService_CreateTCPBoundSocket_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkService_CreateTCPBoundSocket_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  mojo::NetAddressPtr p_bound_to{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
    if (!Deserialize_(params->bound_to.ptr, &p_bound_to, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result), std::move(p_bound_to));
  return true;
}
class NetworkService_CreateTCPConnectedSocket_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkService_CreateTCPConnectedSocket_ForwardToCallback(
      const NetworkService::CreateTCPConnectedSocketCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkService::CreateTCPConnectedSocketCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(NetworkService_CreateTCPConnectedSocket_ForwardToCallback);
};
bool NetworkService_CreateTCPConnectedSocket_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::NetworkService_CreateTCPConnectedSocket_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkService_CreateTCPConnectedSocket_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  mojo::NetAddressPtr p_local_address{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
    if (!Deserialize_(params->local_address.ptr, &p_local_address, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result), std::move(p_local_address));
  return true;
}
class NetworkService_CreateHttpServer_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkService_CreateHttpServer_ForwardToCallback(
      const NetworkService::CreateHttpServerCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkService::CreateHttpServerCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(NetworkService_CreateHttpServer_ForwardToCallback);
};
bool NetworkService_CreateHttpServer_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::NetworkService_CreateHttpServer_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkService_CreateHttpServer_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  mojo::NetAddressPtr p_bound_to{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
    if (!Deserialize_(params->bound_to.ptr, &p_bound_to, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result), std::move(p_bound_to));
  return true;
}
class NetworkService_GetMimeTypeFromFile_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  NetworkService_GetMimeTypeFromFile_ForwardToCallback(
      const NetworkService::GetMimeTypeFromFileCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  NetworkService::GetMimeTypeFromFileCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(NetworkService_GetMimeTypeFromFile_ForwardToCallback);
};
bool NetworkService_GetMimeTypeFromFile_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::NetworkService_GetMimeTypeFromFile_ResponseParams_Data* params =
      reinterpret_cast<internal::NetworkService_GetMimeTypeFromFile_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::String p_mime_type{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->mime_type.ptr, &p_mime_type, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_mime_type);
  return true;
}

NetworkServiceProxy::NetworkServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void NetworkServiceProxy::CreateTCPBoundSocket(
    mojo::NetAddressPtr in_local_address, mojo::InterfaceRequest<mojo::TCPBoundSocket> in_bound_socket, const CreateTCPBoundSocketCallback& callback) {
  size_t size = sizeof(internal::NetworkService_CreateTCPBoundSocket_Params_Data);
  size += GetSerializedSize_(in_local_address);
  mojo::internal::RequestMessageBuilder builder(internal::kNetworkService_CreateTCPBoundSocket_Name, size);

  internal::NetworkService_CreateTCPBoundSocket_Params_Data* params =
      internal::NetworkService_CreateTCPBoundSocket_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_local_address), builder.buffer(), &params->local_address.ptr);
  params->bound_socket = in_bound_socket.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->bound_socket.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid bound_socket in NetworkService.CreateTCPBoundSocket request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new NetworkService_CreateTCPBoundSocket_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void NetworkServiceProxy::CreateTCPConnectedSocket(
    mojo::NetAddressPtr in_remote_address, mojo::ScopedDataPipeConsumerHandle in_send_stream, mojo::ScopedDataPipeProducerHandle in_receive_stream, mojo::InterfaceRequest<mojo::TCPConnectedSocket> in_client_socket, const CreateTCPConnectedSocketCallback& callback) {
  size_t size = sizeof(internal::NetworkService_CreateTCPConnectedSocket_Params_Data);
  size += GetSerializedSize_(in_remote_address);
  mojo::internal::RequestMessageBuilder builder(internal::kNetworkService_CreateTCPConnectedSocket_Name, size);

  internal::NetworkService_CreateTCPConnectedSocket_Params_Data* params =
      internal::NetworkService_CreateTCPConnectedSocket_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_remote_address), builder.buffer(), &params->remote_address.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->remote_address.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null remote_address in NetworkService.CreateTCPConnectedSocket request");
  params->send_stream = in_send_stream.release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->send_stream.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid send_stream in NetworkService.CreateTCPConnectedSocket request");
  params->receive_stream = in_receive_stream.release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->receive_stream.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receive_stream in NetworkService.CreateTCPConnectedSocket request");
  params->client_socket = in_client_socket.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->client_socket.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client_socket in NetworkService.CreateTCPConnectedSocket request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new NetworkService_CreateTCPConnectedSocket_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void NetworkServiceProxy::CreateUDPSocket(
    mojo::InterfaceRequest<mojo::UDPSocket> in_socket) {
  size_t size = sizeof(internal::NetworkService_CreateUDPSocket_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kNetworkService_CreateUDPSocket_Name, size);

  internal::NetworkService_CreateUDPSocket_Params_Data* params =
      internal::NetworkService_CreateUDPSocket_Params_Data::New(builder.buffer());
  params->socket = in_socket.PassMessagePipe().release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->socket.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid socket in NetworkService.CreateUDPSocket request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void NetworkServiceProxy::CreateHttpServer(
    mojo::NetAddressPtr in_local_address, mojo::HttpServerDelegatePtr in_delegate, const CreateHttpServerCallback& callback) {
  size_t size = sizeof(internal::NetworkService_CreateHttpServer_Params_Data);
  size += GetSerializedSize_(in_local_address);
  mojo::internal::RequestMessageBuilder builder(internal::kNetworkService_CreateHttpServer_Name, size);

  internal::NetworkService_CreateHttpServer_Params_Data* params =
      internal::NetworkService_CreateHttpServer_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_local_address), builder.buffer(), &params->local_address.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->local_address.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null local_address in NetworkService.CreateHttpServer request");
  mojo::internal::InterfacePointerToData(std::move(in_delegate), &params->delegate);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->delegate.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid delegate in NetworkService.CreateHttpServer request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new NetworkService_CreateHttpServer_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void NetworkServiceProxy::GetMimeTypeFromFile(
    const mojo::String& in_file_path, const GetMimeTypeFromFileCallback& callback) {
  size_t size = sizeof(internal::NetworkService_GetMimeTypeFromFile_Params_Data);
  size += GetSerializedSize_(in_file_path);
  mojo::internal::RequestMessageBuilder builder(internal::kNetworkService_GetMimeTypeFromFile_Name, size);

  internal::NetworkService_GetMimeTypeFromFile_Params_Data* params =
      internal::NetworkService_GetMimeTypeFromFile_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_file_path), builder.buffer(), &params->file_path.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->file_path.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file_path in NetworkService.GetMimeTypeFromFile request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new NetworkService_GetMimeTypeFromFile_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class NetworkService_CreateTCPBoundSocket_ProxyToResponder
    : public NetworkService::CreateTCPBoundSocketCallback::Runnable {
 public:
  ~NetworkService_CreateTCPBoundSocket_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "NetworkService::CreateTCPBoundSocket(std::move(p_local_address), std::move(p_bound_socket), callback) "
        "was never run.";
  }

  NetworkService_CreateTCPBoundSocket_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_bound_to) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(NetworkService_CreateTCPBoundSocket_ProxyToResponder);
};
void NetworkService_CreateTCPBoundSocket_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_bound_to) const {
  size_t size = sizeof(internal::NetworkService_CreateTCPBoundSocket_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  size += GetSerializedSize_(in_bound_to);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kNetworkService_CreateTCPBoundSocket_Name, size, request_id_);
  internal::NetworkService_CreateTCPBoundSocket_ResponseParams_Data* params =
      internal::NetworkService_CreateTCPBoundSocket_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in NetworkService.CreateTCPBoundSocket response");
  Serialize_(std::move(in_bound_to), builder.buffer(), &params->bound_to.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class NetworkService_CreateTCPConnectedSocket_ProxyToResponder
    : public NetworkService::CreateTCPConnectedSocketCallback::Runnable {
 public:
  ~NetworkService_CreateTCPConnectedSocket_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "NetworkService::CreateTCPConnectedSocket(std::move(p_remote_address), std::move(p_send_stream), std::move(p_receive_stream), std::move(p_client_socket), callback) "
        "was never run.";
  }

  NetworkService_CreateTCPConnectedSocket_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_local_address) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(NetworkService_CreateTCPConnectedSocket_ProxyToResponder);
};
void NetworkService_CreateTCPConnectedSocket_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_local_address) const {
  size_t size = sizeof(internal::NetworkService_CreateTCPConnectedSocket_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  size += GetSerializedSize_(in_local_address);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kNetworkService_CreateTCPConnectedSocket_Name, size, request_id_);
  internal::NetworkService_CreateTCPConnectedSocket_ResponseParams_Data* params =
      internal::NetworkService_CreateTCPConnectedSocket_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in NetworkService.CreateTCPConnectedSocket response");
  Serialize_(std::move(in_local_address), builder.buffer(), &params->local_address.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class NetworkService_CreateHttpServer_ProxyToResponder
    : public NetworkService::CreateHttpServerCallback::Runnable {
 public:
  ~NetworkService_CreateHttpServer_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "NetworkService::CreateHttpServer(std::move(p_local_address), std::move(p_delegate), callback) "
        "was never run.";
  }

  NetworkService_CreateHttpServer_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_bound_to) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(NetworkService_CreateHttpServer_ProxyToResponder);
};
void NetworkService_CreateHttpServer_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_bound_to) const {
  size_t size = sizeof(internal::NetworkService_CreateHttpServer_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  size += GetSerializedSize_(in_bound_to);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kNetworkService_CreateHttpServer_Name, size, request_id_);
  internal::NetworkService_CreateHttpServer_ResponseParams_Data* params =
      internal::NetworkService_CreateHttpServer_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in NetworkService.CreateHttpServer response");
  Serialize_(std::move(in_bound_to), builder.buffer(), &params->bound_to.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class NetworkService_GetMimeTypeFromFile_ProxyToResponder
    : public NetworkService::GetMimeTypeFromFileCallback::Runnable {
 public:
  ~NetworkService_GetMimeTypeFromFile_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "NetworkService::GetMimeTypeFromFile(p_file_path, callback) "
        "was never run.";
  }

  NetworkService_GetMimeTypeFromFile_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(const mojo::String& in_mime_type) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(NetworkService_GetMimeTypeFromFile_ProxyToResponder);
};
void NetworkService_GetMimeTypeFromFile_ProxyToResponder::Run(
    const mojo::String& in_mime_type) const {
  size_t size = sizeof(internal::NetworkService_GetMimeTypeFromFile_ResponseParams_Data);
  size += GetSerializedSize_(in_mime_type);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kNetworkService_GetMimeTypeFromFile_Name, size, request_id_);
  internal::NetworkService_GetMimeTypeFromFile_ResponseParams_Data* params =
      internal::NetworkService_GetMimeTypeFromFile_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_mime_type), builder.buffer(), &params->mime_type.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->mime_type.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mime_type in NetworkService.GetMimeTypeFromFile response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

NetworkServiceStub::NetworkServiceStub()
    : sink_(nullptr),
      control_message_handler_(NetworkService::Version_) {
}

NetworkServiceStub::~NetworkServiceStub() {}

bool NetworkServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kNetworkService_CreateTCPBoundSocket_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.NetworkService.CreateTCPBoundSocket", __FILE__, __LINE__);
      break;
    }
    case internal::kNetworkService_CreateTCPConnectedSocket_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.NetworkService.CreateTCPConnectedSocket", __FILE__, __LINE__);
      break;
    }
    case internal::kNetworkService_CreateUDPSocket_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.NetworkService.CreateUDPSocket", __FILE__, __LINE__);
      internal::NetworkService_CreateUDPSocket_Params_Data* params =
          reinterpret_cast<internal::NetworkService_CreateUDPSocket_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::InterfaceRequest<mojo::UDPSocket> p_socket{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_socket.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->socket)));
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NetworkService::CreateUDPSocket");
      sink_->CreateUDPSocket(std::move(p_socket));
      return true;
    }
    case internal::kNetworkService_CreateHttpServer_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.NetworkService.CreateHttpServer", __FILE__, __LINE__);
      break;
    }
    case internal::kNetworkService_GetMimeTypeFromFile_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.NetworkService.GetMimeTypeFromFile", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool NetworkServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kNetworkService_CreateTCPBoundSocket_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::NetworkService::CreateTCPBoundSocket", __FILE__, __LINE__);
      internal::NetworkService_CreateTCPBoundSocket_Params_Data* params =
          reinterpret_cast<internal::NetworkService_CreateTCPBoundSocket_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::NetAddressPtr p_local_address{};
      mojo::InterfaceRequest<mojo::TCPBoundSocket> p_bound_socket{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->local_address.ptr, &p_local_address, &serialization_context_))
          success = false;
        p_bound_socket.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->bound_socket)));
      } while (false);
      if (!success)
        return false;
      NetworkService::CreateTCPBoundSocketCallback::Runnable* runnable =
          new NetworkService_CreateTCPBoundSocket_ProxyToResponder(
              message->request_id(), responder);
      NetworkService::CreateTCPBoundSocketCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NetworkService::CreateTCPBoundSocket");
      sink_->CreateTCPBoundSocket(std::move(p_local_address), std::move(p_bound_socket), callback);
      return true;
    }
    case internal::kNetworkService_CreateTCPConnectedSocket_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::NetworkService::CreateTCPConnectedSocket", __FILE__, __LINE__);
      internal::NetworkService_CreateTCPConnectedSocket_Params_Data* params =
          reinterpret_cast<internal::NetworkService_CreateTCPConnectedSocket_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::NetAddressPtr p_remote_address{};
      mojo::ScopedDataPipeConsumerHandle p_send_stream{};
      mojo::ScopedDataPipeProducerHandle p_receive_stream{};
      mojo::InterfaceRequest<mojo::TCPConnectedSocket> p_client_socket{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->remote_address.ptr, &p_remote_address, &serialization_context_))
          success = false;
        p_send_stream.reset(mojo::internal::FetchAndReset(&params->send_stream));
        p_receive_stream.reset(mojo::internal::FetchAndReset(&params->receive_stream));
        p_client_socket.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->client_socket)));
      } while (false);
      if (!success)
        return false;
      NetworkService::CreateTCPConnectedSocketCallback::Runnable* runnable =
          new NetworkService_CreateTCPConnectedSocket_ProxyToResponder(
              message->request_id(), responder);
      NetworkService::CreateTCPConnectedSocketCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NetworkService::CreateTCPConnectedSocket");
      sink_->CreateTCPConnectedSocket(std::move(p_remote_address), std::move(p_send_stream), std::move(p_receive_stream), std::move(p_client_socket), callback);
      return true;
    }
    case internal::kNetworkService_CreateUDPSocket_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::NetworkService::CreateUDPSocket", __FILE__, __LINE__);
      break;
    }
    case internal::kNetworkService_CreateHttpServer_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::NetworkService::CreateHttpServer", __FILE__, __LINE__);
      internal::NetworkService_CreateHttpServer_Params_Data* params =
          reinterpret_cast<internal::NetworkService_CreateHttpServer_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::NetAddressPtr p_local_address{};
      mojo::HttpServerDelegatePtr p_delegate{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->local_address.ptr, &p_local_address, &serialization_context_))
          success = false;
        mojo::internal::InterfaceDataToPointer(&params->delegate, &p_delegate);
      } while (false);
      if (!success)
        return false;
      NetworkService::CreateHttpServerCallback::Runnable* runnable =
          new NetworkService_CreateHttpServer_ProxyToResponder(
              message->request_id(), responder);
      NetworkService::CreateHttpServerCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NetworkService::CreateHttpServer");
      sink_->CreateHttpServer(std::move(p_local_address), std::move(p_delegate), callback);
      return true;
    }
    case internal::kNetworkService_GetMimeTypeFromFile_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::NetworkService::GetMimeTypeFromFile", __FILE__, __LINE__);
      internal::NetworkService_GetMimeTypeFromFile_Params_Data* params =
          reinterpret_cast<internal::NetworkService_GetMimeTypeFromFile_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_file_path{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->file_path.ptr, &p_file_path, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      NetworkService::GetMimeTypeFromFileCallback::Runnable* runnable =
          new NetworkService_GetMimeTypeFromFile_ProxyToResponder(
              message->request_id(), responder);
      NetworkService::GetMimeTypeFromFileCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "NetworkService::GetMimeTypeFromFile");
      sink_->GetMimeTypeFromFile(p_file_path, callback);
      return true;
    }
  }
  return false;
}

NetworkServiceRequestValidator::NetworkServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool NetworkServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kNetworkService_CreateTCPBoundSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_CreateTCPBoundSocket_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNetworkService_CreateTCPConnectedSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_CreateTCPConnectedSocket_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNetworkService_CreateUDPSocket_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_CreateUDPSocket_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNetworkService_CreateHttpServer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_CreateHttpServer_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNetworkService_GetMimeTypeFromFile_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_GetMimeTypeFromFile_Params_Data>(message)) {
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

NetworkServiceResponseValidator::NetworkServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool NetworkServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kNetworkService_CreateTCPBoundSocket_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_CreateTCPBoundSocket_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNetworkService_CreateTCPConnectedSocket_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_CreateTCPConnectedSocket_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNetworkService_CreateHttpServer_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_CreateHttpServer_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kNetworkService_GetMimeTypeFromFile_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::NetworkService_GetMimeTypeFromFile_ResponseParams_Data>(message)) {
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