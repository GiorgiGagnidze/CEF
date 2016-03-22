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

#include "mojo/services/network/public/interfaces/udp_socket.mojom.h"

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
const uint32_t kUDPSocket_AllowAddressReuse_Name = 0;

class UDPSocket_AllowAddressReuse_Params_Data {
 public:
  static UDPSocket_AllowAddressReuse_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;

 private:
  UDPSocket_AllowAddressReuse_Params_Data();
  ~UDPSocket_AllowAddressReuse_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_AllowAddressReuse_Params_Data) == 8,
              "Bad sizeof(UDPSocket_AllowAddressReuse_Params_Data)");

// static
UDPSocket_AllowAddressReuse_Params_Data* UDPSocket_AllowAddressReuse_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_AllowAddressReuse_Params_Data))) UDPSocket_AllowAddressReuse_Params_Data();
}

// static
bool UDPSocket_AllowAddressReuse_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_AllowAddressReuse_Params_Data* object = static_cast<const UDPSocket_AllowAddressReuse_Params_Data*>(data);

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

void UDPSocket_AllowAddressReuse_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void UDPSocket_AllowAddressReuse_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

UDPSocket_AllowAddressReuse_Params_Data::UDPSocket_AllowAddressReuse_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class UDPSocket_AllowAddressReuse_ResponseParams_Data {
 public:
  static UDPSocket_AllowAddressReuse_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;

 private:
  UDPSocket_AllowAddressReuse_ResponseParams_Data();
  ~UDPSocket_AllowAddressReuse_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_AllowAddressReuse_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_AllowAddressReuse_ResponseParams_Data)");

// static
UDPSocket_AllowAddressReuse_ResponseParams_Data* UDPSocket_AllowAddressReuse_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_AllowAddressReuse_ResponseParams_Data))) UDPSocket_AllowAddressReuse_ResponseParams_Data();
}

// static
bool UDPSocket_AllowAddressReuse_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_AllowAddressReuse_ResponseParams_Data* object = static_cast<const UDPSocket_AllowAddressReuse_ResponseParams_Data*>(data);

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
          object->result, "null result field in UDPSocket_AllowAddressReuse_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  return true;
}

void UDPSocket_AllowAddressReuse_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
}

void UDPSocket_AllowAddressReuse_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
}

UDPSocket_AllowAddressReuse_ResponseParams_Data::UDPSocket_AllowAddressReuse_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kUDPSocket_Bind_Name = 1;

class UDPSocket_Bind_Params_Data {
 public:
  static UDPSocket_Bind_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> addr;

 private:
  UDPSocket_Bind_Params_Data();
  ~UDPSocket_Bind_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_Bind_Params_Data) == 16,
              "Bad sizeof(UDPSocket_Bind_Params_Data)");

// static
UDPSocket_Bind_Params_Data* UDPSocket_Bind_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_Bind_Params_Data))) UDPSocket_Bind_Params_Data();
}

// static
bool UDPSocket_Bind_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_Bind_Params_Data* object = static_cast<const UDPSocket_Bind_Params_Data*>(data);

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
          object->addr, "null addr field in UDPSocket_Bind_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->addr, bounds_checker))
    return false;

  return true;
}

void UDPSocket_Bind_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&addr, handles);
}

void UDPSocket_Bind_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&addr, handles);
}

UDPSocket_Bind_Params_Data::UDPSocket_Bind_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class UDPSocket_Bind_ResponseParams_Data {
 public:
  static UDPSocket_Bind_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> bound_addr;
  mojo::MessagePipeHandle receiver;
  uint8_t padfinal_[4];

 private:
  UDPSocket_Bind_ResponseParams_Data();
  ~UDPSocket_Bind_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_Bind_ResponseParams_Data) == 32,
              "Bad sizeof(UDPSocket_Bind_ResponseParams_Data)");

// static
UDPSocket_Bind_ResponseParams_Data* UDPSocket_Bind_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_Bind_ResponseParams_Data))) UDPSocket_Bind_ResponseParams_Data();
}

// static
bool UDPSocket_Bind_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_Bind_ResponseParams_Data* object = static_cast<const UDPSocket_Bind_ResponseParams_Data*>(data);

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
          object->result, "null result field in UDPSocket_Bind_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->bound_addr, bounds_checker))
    return false;

  const mojo::Handle receiver_handle = object->receiver;
  if (!mojo::internal::ValidateHandle(receiver_handle, bounds_checker))
    return false;

  return true;
}

void UDPSocket_Bind_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
  mojo::internal::Encode(&bound_addr, handles);
  mojo::internal::EncodeHandle(&receiver, handles);
}

void UDPSocket_Bind_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
  mojo::internal::Decode(&bound_addr, handles);
  mojo::internal::DecodeHandle(&receiver, handles);
}

UDPSocket_Bind_ResponseParams_Data::UDPSocket_Bind_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kUDPSocket_Connect_Name = 2;

class UDPSocket_Connect_Params_Data {
 public:
  static UDPSocket_Connect_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> remote_addr;

 private:
  UDPSocket_Connect_Params_Data();
  ~UDPSocket_Connect_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_Connect_Params_Data) == 16,
              "Bad sizeof(UDPSocket_Connect_Params_Data)");

// static
UDPSocket_Connect_Params_Data* UDPSocket_Connect_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_Connect_Params_Data))) UDPSocket_Connect_Params_Data();
}

// static
bool UDPSocket_Connect_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_Connect_Params_Data* object = static_cast<const UDPSocket_Connect_Params_Data*>(data);

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
          object->remote_addr, "null remote_addr field in UDPSocket_Connect_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->remote_addr, bounds_checker))
    return false;

  return true;
}

void UDPSocket_Connect_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&remote_addr, handles);
}

void UDPSocket_Connect_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&remote_addr, handles);
}

UDPSocket_Connect_Params_Data::UDPSocket_Connect_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class UDPSocket_Connect_ResponseParams_Data {
 public:
  static UDPSocket_Connect_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> local_addr;
  mojo::MessagePipeHandle receiver;
  uint8_t padfinal_[4];

 private:
  UDPSocket_Connect_ResponseParams_Data();
  ~UDPSocket_Connect_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_Connect_ResponseParams_Data) == 32,
              "Bad sizeof(UDPSocket_Connect_ResponseParams_Data)");

// static
UDPSocket_Connect_ResponseParams_Data* UDPSocket_Connect_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_Connect_ResponseParams_Data))) UDPSocket_Connect_ResponseParams_Data();
}

// static
bool UDPSocket_Connect_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_Connect_ResponseParams_Data* object = static_cast<const UDPSocket_Connect_ResponseParams_Data*>(data);

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
          object->result, "null result field in UDPSocket_Connect_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->local_addr, bounds_checker))
    return false;

  const mojo::Handle receiver_handle = object->receiver;
  if (!mojo::internal::ValidateHandle(receiver_handle, bounds_checker))
    return false;

  return true;
}

void UDPSocket_Connect_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
  mojo::internal::Encode(&local_addr, handles);
  mojo::internal::EncodeHandle(&receiver, handles);
}

void UDPSocket_Connect_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
  mojo::internal::Decode(&local_addr, handles);
  mojo::internal::DecodeHandle(&receiver, handles);
}

UDPSocket_Connect_ResponseParams_Data::UDPSocket_Connect_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kUDPSocket_SetSendBufferSize_Name = 3;

class UDPSocket_SetSendBufferSize_Params_Data {
 public:
  static UDPSocket_SetSendBufferSize_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t size;
  uint8_t padfinal_[4];

 private:
  UDPSocket_SetSendBufferSize_Params_Data();
  ~UDPSocket_SetSendBufferSize_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_SetSendBufferSize_Params_Data) == 16,
              "Bad sizeof(UDPSocket_SetSendBufferSize_Params_Data)");

// static
UDPSocket_SetSendBufferSize_Params_Data* UDPSocket_SetSendBufferSize_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_SetSendBufferSize_Params_Data))) UDPSocket_SetSendBufferSize_Params_Data();
}

// static
bool UDPSocket_SetSendBufferSize_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_SetSendBufferSize_Params_Data* object = static_cast<const UDPSocket_SetSendBufferSize_Params_Data*>(data);

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

void UDPSocket_SetSendBufferSize_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void UDPSocket_SetSendBufferSize_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

UDPSocket_SetSendBufferSize_Params_Data::UDPSocket_SetSendBufferSize_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class UDPSocket_SetSendBufferSize_ResponseParams_Data {
 public:
  static UDPSocket_SetSendBufferSize_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;

 private:
  UDPSocket_SetSendBufferSize_ResponseParams_Data();
  ~UDPSocket_SetSendBufferSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_SetSendBufferSize_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_SetSendBufferSize_ResponseParams_Data)");

// static
UDPSocket_SetSendBufferSize_ResponseParams_Data* UDPSocket_SetSendBufferSize_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_SetSendBufferSize_ResponseParams_Data))) UDPSocket_SetSendBufferSize_ResponseParams_Data();
}

// static
bool UDPSocket_SetSendBufferSize_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_SetSendBufferSize_ResponseParams_Data* object = static_cast<const UDPSocket_SetSendBufferSize_ResponseParams_Data*>(data);

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
          object->result, "null result field in UDPSocket_SetSendBufferSize_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  return true;
}

void UDPSocket_SetSendBufferSize_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
}

void UDPSocket_SetSendBufferSize_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
}

UDPSocket_SetSendBufferSize_ResponseParams_Data::UDPSocket_SetSendBufferSize_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kUDPSocket_SetReceiveBufferSize_Name = 4;

class UDPSocket_SetReceiveBufferSize_Params_Data {
 public:
  static UDPSocket_SetReceiveBufferSize_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t size;
  uint8_t padfinal_[4];

 private:
  UDPSocket_SetReceiveBufferSize_Params_Data();
  ~UDPSocket_SetReceiveBufferSize_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_SetReceiveBufferSize_Params_Data) == 16,
              "Bad sizeof(UDPSocket_SetReceiveBufferSize_Params_Data)");

// static
UDPSocket_SetReceiveBufferSize_Params_Data* UDPSocket_SetReceiveBufferSize_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_SetReceiveBufferSize_Params_Data))) UDPSocket_SetReceiveBufferSize_Params_Data();
}

// static
bool UDPSocket_SetReceiveBufferSize_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_SetReceiveBufferSize_Params_Data* object = static_cast<const UDPSocket_SetReceiveBufferSize_Params_Data*>(data);

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

void UDPSocket_SetReceiveBufferSize_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void UDPSocket_SetReceiveBufferSize_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

UDPSocket_SetReceiveBufferSize_Params_Data::UDPSocket_SetReceiveBufferSize_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class UDPSocket_SetReceiveBufferSize_ResponseParams_Data {
 public:
  static UDPSocket_SetReceiveBufferSize_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;

 private:
  UDPSocket_SetReceiveBufferSize_ResponseParams_Data();
  ~UDPSocket_SetReceiveBufferSize_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_SetReceiveBufferSize_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_SetReceiveBufferSize_ResponseParams_Data)");

// static
UDPSocket_SetReceiveBufferSize_ResponseParams_Data* UDPSocket_SetReceiveBufferSize_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_SetReceiveBufferSize_ResponseParams_Data))) UDPSocket_SetReceiveBufferSize_ResponseParams_Data();
}

// static
bool UDPSocket_SetReceiveBufferSize_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_SetReceiveBufferSize_ResponseParams_Data* object = static_cast<const UDPSocket_SetReceiveBufferSize_ResponseParams_Data*>(data);

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
          object->result, "null result field in UDPSocket_SetReceiveBufferSize_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  return true;
}

void UDPSocket_SetReceiveBufferSize_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
}

void UDPSocket_SetReceiveBufferSize_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
}

UDPSocket_SetReceiveBufferSize_ResponseParams_Data::UDPSocket_SetReceiveBufferSize_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kUDPSocket_NegotiateMaxPendingSendRequests_Name = 5;

class UDPSocket_NegotiateMaxPendingSendRequests_Params_Data {
 public:
  static UDPSocket_NegotiateMaxPendingSendRequests_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t requested_size;
  uint8_t padfinal_[4];

 private:
  UDPSocket_NegotiateMaxPendingSendRequests_Params_Data();
  ~UDPSocket_NegotiateMaxPendingSendRequests_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_NegotiateMaxPendingSendRequests_Params_Data) == 16,
              "Bad sizeof(UDPSocket_NegotiateMaxPendingSendRequests_Params_Data)");

// static
UDPSocket_NegotiateMaxPendingSendRequests_Params_Data* UDPSocket_NegotiateMaxPendingSendRequests_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_NegotiateMaxPendingSendRequests_Params_Data))) UDPSocket_NegotiateMaxPendingSendRequests_Params_Data();
}

// static
bool UDPSocket_NegotiateMaxPendingSendRequests_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_NegotiateMaxPendingSendRequests_Params_Data* object = static_cast<const UDPSocket_NegotiateMaxPendingSendRequests_Params_Data*>(data);

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

void UDPSocket_NegotiateMaxPendingSendRequests_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void UDPSocket_NegotiateMaxPendingSendRequests_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

UDPSocket_NegotiateMaxPendingSendRequests_Params_Data::UDPSocket_NegotiateMaxPendingSendRequests_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data {
 public:
  static UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t actual_size;
  uint8_t padfinal_[4];

 private:
  UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data();
  ~UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data)");

// static
UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data* UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data))) UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data();
}

// static
bool UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data* object = static_cast<const UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data*>(data);

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

void UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data::UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kUDPSocket_ReceiveMore_Name = 6;

class UDPSocket_ReceiveMore_Params_Data {
 public:
  static UDPSocket_ReceiveMore_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint32_t datagram_number;
  uint8_t padfinal_[4];

 private:
  UDPSocket_ReceiveMore_Params_Data();
  ~UDPSocket_ReceiveMore_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_ReceiveMore_Params_Data) == 16,
              "Bad sizeof(UDPSocket_ReceiveMore_Params_Data)");

// static
UDPSocket_ReceiveMore_Params_Data* UDPSocket_ReceiveMore_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_ReceiveMore_Params_Data))) UDPSocket_ReceiveMore_Params_Data();
}

// static
bool UDPSocket_ReceiveMore_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_ReceiveMore_Params_Data* object = static_cast<const UDPSocket_ReceiveMore_Params_Data*>(data);

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

void UDPSocket_ReceiveMore_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void UDPSocket_ReceiveMore_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

UDPSocket_ReceiveMore_Params_Data::UDPSocket_ReceiveMore_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kUDPSocket_SendTo_Name = 7;

class UDPSocket_SendTo_Params_Data {
 public:
  static UDPSocket_SendTo_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> dest_addr;
  mojo::internal::ArrayPointer<uint8_t> data;

 private:
  UDPSocket_SendTo_Params_Data();
  ~UDPSocket_SendTo_Params_Data() = delete;
};
static_assert(sizeof(UDPSocket_SendTo_Params_Data) == 24,
              "Bad sizeof(UDPSocket_SendTo_Params_Data)");

// static
UDPSocket_SendTo_Params_Data* UDPSocket_SendTo_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_SendTo_Params_Data))) UDPSocket_SendTo_Params_Data();
}

// static
bool UDPSocket_SendTo_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_SendTo_Params_Data* object = static_cast<const UDPSocket_SendTo_Params_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->dest_addr, bounds_checker))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, "null data field in UDPSocket_SendTo_Params struct")) {
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

void UDPSocket_SendTo_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&dest_addr, handles);
  mojo::internal::Encode(&data, handles);
}

void UDPSocket_SendTo_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&dest_addr, handles);
  mojo::internal::Decode(&data, handles);
}

UDPSocket_SendTo_Params_Data::UDPSocket_SendTo_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
class UDPSocket_SendTo_ResponseParams_Data {
 public:
  static UDPSocket_SendTo_ResponseParams_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;

 private:
  UDPSocket_SendTo_ResponseParams_Data();
  ~UDPSocket_SendTo_ResponseParams_Data() = delete;
};
static_assert(sizeof(UDPSocket_SendTo_ResponseParams_Data) == 16,
              "Bad sizeof(UDPSocket_SendTo_ResponseParams_Data)");

// static
UDPSocket_SendTo_ResponseParams_Data* UDPSocket_SendTo_ResponseParams_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocket_SendTo_ResponseParams_Data))) UDPSocket_SendTo_ResponseParams_Data();
}

// static
bool UDPSocket_SendTo_ResponseParams_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocket_SendTo_ResponseParams_Data* object = static_cast<const UDPSocket_SendTo_ResponseParams_Data*>(data);

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
          object->result, "null result field in UDPSocket_SendTo_ResponseParams struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  return true;
}

void UDPSocket_SendTo_ResponseParams_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
}

void UDPSocket_SendTo_ResponseParams_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
}

UDPSocket_SendTo_ResponseParams_Data::UDPSocket_SendTo_ResponseParams_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kUDPSocketReceiver_OnReceived_Name = 0;

class UDPSocketReceiver_OnReceived_Params_Data {
 public:
  static UDPSocketReceiver_OnReceived_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StructPointer<mojo::internal::NetworkError_Data> result;
  mojo::internal::StructPointer<mojo::internal::NetAddress_Data> src_addr;
  mojo::internal::ArrayPointer<uint8_t> data;

 private:
  UDPSocketReceiver_OnReceived_Params_Data();
  ~UDPSocketReceiver_OnReceived_Params_Data() = delete;
};
static_assert(sizeof(UDPSocketReceiver_OnReceived_Params_Data) == 32,
              "Bad sizeof(UDPSocketReceiver_OnReceived_Params_Data)");

// static
UDPSocketReceiver_OnReceived_Params_Data* UDPSocketReceiver_OnReceived_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(UDPSocketReceiver_OnReceived_Params_Data))) UDPSocketReceiver_OnReceived_Params_Data();
}

// static
bool UDPSocketReceiver_OnReceived_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const UDPSocketReceiver_OnReceived_Params_Data* object = static_cast<const UDPSocketReceiver_OnReceived_Params_Data*>(data);

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
          object->result, "null result field in UDPSocketReceiver_OnReceived_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->src_addr, bounds_checker))
    return false;

  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->data, bounds_checker,
                                     &data_validate_params)) {
    return false;
  }

  return true;
}

void UDPSocketReceiver_OnReceived_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
  mojo::internal::Encode(&src_addr, handles);
  mojo::internal::Encode(&data, handles);
}

void UDPSocketReceiver_OnReceived_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
  mojo::internal::Decode(&src_addr, handles);
  mojo::internal::Decode(&data, handles);
}

UDPSocketReceiver_OnReceived_Params_Data::UDPSocketReceiver_OnReceived_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char UDPSocket::Name_[] = "mojo::UDPSocket";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t UDPSocket::Version_;
class UDPSocket_AllowAddressReuse_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_AllowAddressReuse_ForwardToCallback(
      const UDPSocket::AllowAddressReuseCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::AllowAddressReuseCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_AllowAddressReuse_ForwardToCallback);
};
bool UDPSocket_AllowAddressReuse_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::UDPSocket_AllowAddressReuse_ResponseParams_Data* params =
      reinterpret_cast<internal::UDPSocket_AllowAddressReuse_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result));
  return true;
}
class UDPSocket_Bind_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_Bind_ForwardToCallback(
      const UDPSocket::BindCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::BindCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_Bind_ForwardToCallback);
};
bool UDPSocket_Bind_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::UDPSocket_Bind_ResponseParams_Data* params =
      reinterpret_cast<internal::UDPSocket_Bind_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  mojo::NetAddressPtr p_bound_addr{};
  mojo::InterfaceRequest<UDPSocketReceiver> p_receiver{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
    if (!Deserialize_(params->bound_addr.ptr, &p_bound_addr, &serialization_context_))
      success = false;
    p_receiver.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->receiver)));
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result), std::move(p_bound_addr), std::move(p_receiver));
  return true;
}
class UDPSocket_Connect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_Connect_ForwardToCallback(
      const UDPSocket::ConnectCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::ConnectCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_Connect_ForwardToCallback);
};
bool UDPSocket_Connect_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::UDPSocket_Connect_ResponseParams_Data* params =
      reinterpret_cast<internal::UDPSocket_Connect_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  mojo::NetAddressPtr p_local_addr{};
  mojo::InterfaceRequest<UDPSocketReceiver> p_receiver{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
    if (!Deserialize_(params->local_addr.ptr, &p_local_addr, &serialization_context_))
      success = false;
    p_receiver.Bind(mojo::MakeScopedHandle(mojo::internal::FetchAndReset(&params->receiver)));
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result), std::move(p_local_addr), std::move(p_receiver));
  return true;
}
class UDPSocket_SetSendBufferSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_SetSendBufferSize_ForwardToCallback(
      const UDPSocket::SetSendBufferSizeCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::SetSendBufferSizeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_SetSendBufferSize_ForwardToCallback);
};
bool UDPSocket_SetSendBufferSize_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::UDPSocket_SetSendBufferSize_ResponseParams_Data* params =
      reinterpret_cast<internal::UDPSocket_SetSendBufferSize_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result));
  return true;
}
class UDPSocket_SetReceiveBufferSize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_SetReceiveBufferSize_ForwardToCallback(
      const UDPSocket::SetReceiveBufferSizeCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::SetReceiveBufferSizeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_SetReceiveBufferSize_ForwardToCallback);
};
bool UDPSocket_SetReceiveBufferSize_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::UDPSocket_SetReceiveBufferSize_ResponseParams_Data* params =
      reinterpret_cast<internal::UDPSocket_SetReceiveBufferSize_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result));
  return true;
}
class UDPSocket_NegotiateMaxPendingSendRequests_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_NegotiateMaxPendingSendRequests_ForwardToCallback(
      const UDPSocket::NegotiateMaxPendingSendRequestsCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::NegotiateMaxPendingSendRequestsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_NegotiateMaxPendingSendRequests_ForwardToCallback);
};
bool UDPSocket_NegotiateMaxPendingSendRequests_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data* params =
      reinterpret_cast<internal::UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  uint32_t p_actual_size{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    p_actual_size = params->actual_size;
  } while (false);
  if (!success)
    return false;
  callback_.Run(p_actual_size);
  return true;
}
class UDPSocket_SendTo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  UDPSocket_SendTo_ForwardToCallback(
      const UDPSocket::SendToCallback& callback,
      scoped_refptr<mojo::internal::MultiplexRouter> router)
      : callback_(callback), serialization_context_(std::move(router)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  UDPSocket::SendToCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_SendTo_ForwardToCallback);
};
bool UDPSocket_SendTo_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::UDPSocket_SendTo_ResponseParams_Data* params =
      reinterpret_cast<internal::UDPSocket_SendTo_ResponseParams_Data*>(
          message->mutable_payload());

  params->DecodePointersAndHandles(message->mutable_handles());
  
  bool success = true;
  mojo::NetworkErrorPtr p_result{};
  do {
    // NOTE: The memory backing |params| may has be smaller than
    // |sizeof(*params)| if the message comes from an older version.
    if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
      success = false;
  } while (false);
  if (!success)
    return false;
  callback_.Run(std::move(p_result));
  return true;
}

UDPSocketProxy::UDPSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void UDPSocketProxy::AllowAddressReuse(
    const AllowAddressReuseCallback& callback) {
  size_t size = sizeof(internal::UDPSocket_AllowAddressReuse_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kUDPSocket_AllowAddressReuse_Name, size);

  internal::UDPSocket_AllowAddressReuse_Params_Data* params =
      internal::UDPSocket_AllowAddressReuse_Params_Data::New(builder.buffer());
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new UDPSocket_AllowAddressReuse_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void UDPSocketProxy::Bind(
    mojo::NetAddressPtr in_addr, const BindCallback& callback) {
  size_t size = sizeof(internal::UDPSocket_Bind_Params_Data);
  size += GetSerializedSize_(in_addr);
  mojo::internal::RequestMessageBuilder builder(internal::kUDPSocket_Bind_Name, size);

  internal::UDPSocket_Bind_Params_Data* params =
      internal::UDPSocket_Bind_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_addr), builder.buffer(), &params->addr.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->addr.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null addr in UDPSocket.Bind request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new UDPSocket_Bind_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void UDPSocketProxy::Connect(
    mojo::NetAddressPtr in_remote_addr, const ConnectCallback& callback) {
  size_t size = sizeof(internal::UDPSocket_Connect_Params_Data);
  size += GetSerializedSize_(in_remote_addr);
  mojo::internal::RequestMessageBuilder builder(internal::kUDPSocket_Connect_Name, size);

  internal::UDPSocket_Connect_Params_Data* params =
      internal::UDPSocket_Connect_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_remote_addr), builder.buffer(), &params->remote_addr.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->remote_addr.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null remote_addr in UDPSocket.Connect request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new UDPSocket_Connect_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void UDPSocketProxy::SetSendBufferSize(
    uint32_t in_size, const SetSendBufferSizeCallback& callback) {
  size_t size = sizeof(internal::UDPSocket_SetSendBufferSize_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kUDPSocket_SetSendBufferSize_Name, size);

  internal::UDPSocket_SetSendBufferSize_Params_Data* params =
      internal::UDPSocket_SetSendBufferSize_Params_Data::New(builder.buffer());
  params->size = in_size;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new UDPSocket_SetSendBufferSize_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void UDPSocketProxy::SetReceiveBufferSize(
    uint32_t in_size, const SetReceiveBufferSizeCallback& callback) {
  size_t size = sizeof(internal::UDPSocket_SetReceiveBufferSize_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kUDPSocket_SetReceiveBufferSize_Name, size);

  internal::UDPSocket_SetReceiveBufferSize_Params_Data* params =
      internal::UDPSocket_SetReceiveBufferSize_Params_Data::New(builder.buffer());
  params->size = in_size;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new UDPSocket_SetReceiveBufferSize_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void UDPSocketProxy::NegotiateMaxPendingSendRequests(
    uint32_t in_requested_size, const NegotiateMaxPendingSendRequestsCallback& callback) {
  size_t size = sizeof(internal::UDPSocket_NegotiateMaxPendingSendRequests_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kUDPSocket_NegotiateMaxPendingSendRequests_Name, size);

  internal::UDPSocket_NegotiateMaxPendingSendRequests_Params_Data* params =
      internal::UDPSocket_NegotiateMaxPendingSendRequests_Params_Data::New(builder.buffer());
  params->requested_size = in_requested_size;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new UDPSocket_NegotiateMaxPendingSendRequests_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
void UDPSocketProxy::ReceiveMore(
    uint32_t in_datagram_number) {
  size_t size = sizeof(internal::UDPSocket_ReceiveMore_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kUDPSocket_ReceiveMore_Name, size);

  internal::UDPSocket_ReceiveMore_Params_Data* params =
      internal::UDPSocket_ReceiveMore_Params_Data::New(builder.buffer());
  params->datagram_number = in_datagram_number;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void UDPSocketProxy::SendTo(
    mojo::NetAddressPtr in_dest_addr, mojo::Array<uint8_t> in_data, const SendToCallback& callback) {
  size_t size = sizeof(internal::UDPSocket_SendTo_Params_Data);
  size += GetSerializedSize_(in_dest_addr);
  size += GetSerializedSize_(in_data);
  mojo::internal::RequestMessageBuilder builder(internal::kUDPSocket_SendTo_Name, size);

  internal::UDPSocket_SendTo_Params_Data* params =
      internal::UDPSocket_SendTo_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_dest_addr), builder.buffer(), &params->dest_addr.ptr);
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_data), builder.buffer(),
      &params->data.ptr, &data_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->data.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null data in UDPSocket.SendTo request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new UDPSocket_SendTo_ForwardToCallback(callback, serialization_context_.router);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class UDPSocket_AllowAddressReuse_ProxyToResponder
    : public UDPSocket::AllowAddressReuseCallback::Runnable {
 public:
  ~UDPSocket_AllowAddressReuse_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "UDPSocket::AllowAddressReuse(callback) "
        "was never run.";
  }

  UDPSocket_AllowAddressReuse_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_AllowAddressReuse_ProxyToResponder);
};
void UDPSocket_AllowAddressReuse_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result) const {
  size_t size = sizeof(internal::UDPSocket_AllowAddressReuse_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kUDPSocket_AllowAddressReuse_Name, size, request_id_);
  internal::UDPSocket_AllowAddressReuse_ResponseParams_Data* params =
      internal::UDPSocket_AllowAddressReuse_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in UDPSocket.AllowAddressReuse response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class UDPSocket_Bind_ProxyToResponder
    : public UDPSocket::BindCallback::Runnable {
 public:
  ~UDPSocket_Bind_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "UDPSocket::Bind(std::move(p_addr), callback) "
        "was never run.";
  }

  UDPSocket_Bind_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_bound_addr, mojo::InterfaceRequest<UDPSocketReceiver> in_receiver) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_Bind_ProxyToResponder);
};
void UDPSocket_Bind_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_bound_addr, mojo::InterfaceRequest<UDPSocketReceiver> in_receiver) const {
  size_t size = sizeof(internal::UDPSocket_Bind_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  size += GetSerializedSize_(in_bound_addr);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kUDPSocket_Bind_Name, size, request_id_);
  internal::UDPSocket_Bind_ResponseParams_Data* params =
      internal::UDPSocket_Bind_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in UDPSocket.Bind response");
  Serialize_(std::move(in_bound_addr), builder.buffer(), &params->bound_addr.ptr);
  params->receiver = in_receiver.PassMessagePipe().release();
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class UDPSocket_Connect_ProxyToResponder
    : public UDPSocket::ConnectCallback::Runnable {
 public:
  ~UDPSocket_Connect_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "UDPSocket::Connect(std::move(p_remote_addr), callback) "
        "was never run.";
  }

  UDPSocket_Connect_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_local_addr, mojo::InterfaceRequest<UDPSocketReceiver> in_receiver) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_Connect_ProxyToResponder);
};
void UDPSocket_Connect_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_local_addr, mojo::InterfaceRequest<UDPSocketReceiver> in_receiver) const {
  size_t size = sizeof(internal::UDPSocket_Connect_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  size += GetSerializedSize_(in_local_addr);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kUDPSocket_Connect_Name, size, request_id_);
  internal::UDPSocket_Connect_ResponseParams_Data* params =
      internal::UDPSocket_Connect_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in UDPSocket.Connect response");
  Serialize_(std::move(in_local_addr), builder.buffer(), &params->local_addr.ptr);
  params->receiver = in_receiver.PassMessagePipe().release();
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class UDPSocket_SetSendBufferSize_ProxyToResponder
    : public UDPSocket::SetSendBufferSizeCallback::Runnable {
 public:
  ~UDPSocket_SetSendBufferSize_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "UDPSocket::SetSendBufferSize(p_size, callback) "
        "was never run.";
  }

  UDPSocket_SetSendBufferSize_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_SetSendBufferSize_ProxyToResponder);
};
void UDPSocket_SetSendBufferSize_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result) const {
  size_t size = sizeof(internal::UDPSocket_SetSendBufferSize_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kUDPSocket_SetSendBufferSize_Name, size, request_id_);
  internal::UDPSocket_SetSendBufferSize_ResponseParams_Data* params =
      internal::UDPSocket_SetSendBufferSize_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in UDPSocket.SetSendBufferSize response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class UDPSocket_SetReceiveBufferSize_ProxyToResponder
    : public UDPSocket::SetReceiveBufferSizeCallback::Runnable {
 public:
  ~UDPSocket_SetReceiveBufferSize_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "UDPSocket::SetReceiveBufferSize(p_size, callback) "
        "was never run.";
  }

  UDPSocket_SetReceiveBufferSize_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_SetReceiveBufferSize_ProxyToResponder);
};
void UDPSocket_SetReceiveBufferSize_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result) const {
  size_t size = sizeof(internal::UDPSocket_SetReceiveBufferSize_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kUDPSocket_SetReceiveBufferSize_Name, size, request_id_);
  internal::UDPSocket_SetReceiveBufferSize_ResponseParams_Data* params =
      internal::UDPSocket_SetReceiveBufferSize_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in UDPSocket.SetReceiveBufferSize response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class UDPSocket_NegotiateMaxPendingSendRequests_ProxyToResponder
    : public UDPSocket::NegotiateMaxPendingSendRequestsCallback::Runnable {
 public:
  ~UDPSocket_NegotiateMaxPendingSendRequests_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "UDPSocket::NegotiateMaxPendingSendRequests(p_requested_size, callback) "
        "was never run.";
  }

  UDPSocket_NegotiateMaxPendingSendRequests_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(uint32_t in_actual_size) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_NegotiateMaxPendingSendRequests_ProxyToResponder);
};
void UDPSocket_NegotiateMaxPendingSendRequests_ProxyToResponder::Run(
    uint32_t in_actual_size) const {
  size_t size = sizeof(internal::UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kUDPSocket_NegotiateMaxPendingSendRequests_Name, size, request_id_);
  internal::UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data* params =
      internal::UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data::New(builder.buffer());
  params->actual_size = in_actual_size;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class UDPSocket_SendTo_ProxyToResponder
    : public UDPSocket::SendToCallback::Runnable {
 public:
  ~UDPSocket_SendTo_ProxyToResponder() override {
    // Is the Mojo application destroying the callback without running it
    // and without first closing the pipe?
    bool callback_was_dropped = responder_ && responder_->IsValid();
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
    MOJO_DCHECK(!callback_was_dropped)  << "The callback passed to "
        "UDPSocket::SendTo(std::move(p_dest_addr), std::move(p_data), callback) "
        "was never run.";
  }

  UDPSocket_SendTo_ProxyToResponder(
      uint64_t request_id,
      mojo::MessageReceiverWithStatus* responder)
      : request_id_(request_id),
        responder_(responder) {
  }

  void Run(mojo::NetworkErrorPtr in_result) const override;

 private:
  uint64_t request_id_;
  mutable mojo::MessageReceiverWithStatus* responder_;
  MOJO_DISALLOW_COPY_AND_ASSIGN(UDPSocket_SendTo_ProxyToResponder);
};
void UDPSocket_SendTo_ProxyToResponder::Run(
    mojo::NetworkErrorPtr in_result) const {
  size_t size = sizeof(internal::UDPSocket_SendTo_ResponseParams_Data);
  size += GetSerializedSize_(in_result);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kUDPSocket_SendTo_Name, size, request_id_);
  internal::UDPSocket_SendTo_ResponseParams_Data* params =
      internal::UDPSocket_SendTo_ResponseParams_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in UDPSocket.SendTo response");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  MOJO_ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

UDPSocketStub::UDPSocketStub()
    : sink_(nullptr),
      control_message_handler_(UDPSocket::Version_) {
}

UDPSocketStub::~UDPSocketStub() {}

bool UDPSocketStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kUDPSocket_AllowAddressReuse_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.UDPSocket.AllowAddressReuse", __FILE__, __LINE__);
      break;
    }
    case internal::kUDPSocket_Bind_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.UDPSocket.Bind", __FILE__, __LINE__);
      break;
    }
    case internal::kUDPSocket_Connect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.UDPSocket.Connect", __FILE__, __LINE__);
      break;
    }
    case internal::kUDPSocket_SetSendBufferSize_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.UDPSocket.SetSendBufferSize", __FILE__, __LINE__);
      break;
    }
    case internal::kUDPSocket_SetReceiveBufferSize_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.UDPSocket.SetReceiveBufferSize", __FILE__, __LINE__);
      break;
    }
    case internal::kUDPSocket_NegotiateMaxPendingSendRequests_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.UDPSocket.NegotiateMaxPendingSendRequests", __FILE__, __LINE__);
      break;
    }
    case internal::kUDPSocket_ReceiveMore_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.UDPSocket.ReceiveMore", __FILE__, __LINE__);
      internal::UDPSocket_ReceiveMore_Params_Data* params =
          reinterpret_cast<internal::UDPSocket_ReceiveMore_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_datagram_number{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_datagram_number = params->datagram_number;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UDPSocket::ReceiveMore");
      sink_->ReceiveMore(p_datagram_number);
      return true;
    }
    case internal::kUDPSocket_SendTo_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.UDPSocket.SendTo", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

bool UDPSocketStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kUDPSocket_AllowAddressReuse_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::UDPSocket::AllowAddressReuse", __FILE__, __LINE__);
      internal::UDPSocket_AllowAddressReuse_Params_Data* params =
          reinterpret_cast<internal::UDPSocket_AllowAddressReuse_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
      } while (false);
      if (!success)
        return false;
      UDPSocket::AllowAddressReuseCallback::Runnable* runnable =
          new UDPSocket_AllowAddressReuse_ProxyToResponder(
              message->request_id(), responder);
      UDPSocket::AllowAddressReuseCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UDPSocket::AllowAddressReuse");
      sink_->AllowAddressReuse(callback);
      return true;
    }
    case internal::kUDPSocket_Bind_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::UDPSocket::Bind", __FILE__, __LINE__);
      internal::UDPSocket_Bind_Params_Data* params =
          reinterpret_cast<internal::UDPSocket_Bind_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::NetAddressPtr p_addr{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->addr.ptr, &p_addr, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      UDPSocket::BindCallback::Runnable* runnable =
          new UDPSocket_Bind_ProxyToResponder(
              message->request_id(), responder);
      UDPSocket::BindCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UDPSocket::Bind");
      sink_->Bind(std::move(p_addr), callback);
      return true;
    }
    case internal::kUDPSocket_Connect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::UDPSocket::Connect", __FILE__, __LINE__);
      internal::UDPSocket_Connect_Params_Data* params =
          reinterpret_cast<internal::UDPSocket_Connect_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::NetAddressPtr p_remote_addr{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->remote_addr.ptr, &p_remote_addr, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      UDPSocket::ConnectCallback::Runnable* runnable =
          new UDPSocket_Connect_ProxyToResponder(
              message->request_id(), responder);
      UDPSocket::ConnectCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UDPSocket::Connect");
      sink_->Connect(std::move(p_remote_addr), callback);
      return true;
    }
    case internal::kUDPSocket_SetSendBufferSize_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::UDPSocket::SetSendBufferSize", __FILE__, __LINE__);
      internal::UDPSocket_SetSendBufferSize_Params_Data* params =
          reinterpret_cast<internal::UDPSocket_SetSendBufferSize_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_size{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_size = params->size;
      } while (false);
      if (!success)
        return false;
      UDPSocket::SetSendBufferSizeCallback::Runnable* runnable =
          new UDPSocket_SetSendBufferSize_ProxyToResponder(
              message->request_id(), responder);
      UDPSocket::SetSendBufferSizeCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UDPSocket::SetSendBufferSize");
      sink_->SetSendBufferSize(p_size, callback);
      return true;
    }
    case internal::kUDPSocket_SetReceiveBufferSize_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::UDPSocket::SetReceiveBufferSize", __FILE__, __LINE__);
      internal::UDPSocket_SetReceiveBufferSize_Params_Data* params =
          reinterpret_cast<internal::UDPSocket_SetReceiveBufferSize_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_size{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_size = params->size;
      } while (false);
      if (!success)
        return false;
      UDPSocket::SetReceiveBufferSizeCallback::Runnable* runnable =
          new UDPSocket_SetReceiveBufferSize_ProxyToResponder(
              message->request_id(), responder);
      UDPSocket::SetReceiveBufferSizeCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UDPSocket::SetReceiveBufferSize");
      sink_->SetReceiveBufferSize(p_size, callback);
      return true;
    }
    case internal::kUDPSocket_NegotiateMaxPendingSendRequests_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::UDPSocket::NegotiateMaxPendingSendRequests", __FILE__, __LINE__);
      internal::UDPSocket_NegotiateMaxPendingSendRequests_Params_Data* params =
          reinterpret_cast<internal::UDPSocket_NegotiateMaxPendingSendRequests_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint32_t p_requested_size{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_requested_size = params->requested_size;
      } while (false);
      if (!success)
        return false;
      UDPSocket::NegotiateMaxPendingSendRequestsCallback::Runnable* runnable =
          new UDPSocket_NegotiateMaxPendingSendRequests_ProxyToResponder(
              message->request_id(), responder);
      UDPSocket::NegotiateMaxPendingSendRequestsCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UDPSocket::NegotiateMaxPendingSendRequests");
      sink_->NegotiateMaxPendingSendRequests(p_requested_size, callback);
      return true;
    }
    case internal::kUDPSocket_ReceiveMore_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::UDPSocket::ReceiveMore", __FILE__, __LINE__);
      break;
    }
    case internal::kUDPSocket_SendTo_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::UDPSocket::SendTo", __FILE__, __LINE__);
      internal::UDPSocket_SendTo_Params_Data* params =
          reinterpret_cast<internal::UDPSocket_SendTo_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::NetAddressPtr p_dest_addr{};
      mojo::Array<uint8_t> p_data{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->dest_addr.ptr, &p_dest_addr, &serialization_context_))
          success = false;
        if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      UDPSocket::SendToCallback::Runnable* runnable =
          new UDPSocket_SendTo_ProxyToResponder(
              message->request_id(), responder);
      UDPSocket::SendToCallback callback(runnable);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UDPSocket::SendTo");
      sink_->SendTo(std::move(p_dest_addr), std::move(p_data), callback);
      return true;
    }
  }
  return false;
}

UDPSocketRequestValidator::UDPSocketRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool UDPSocketRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kUDPSocket_AllowAddressReuse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_AllowAddressReuse_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_Bind_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_Bind_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_Connect_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_SetSendBufferSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SetSendBufferSize_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_SetReceiveBufferSize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SetReceiveBufferSize_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_NegotiateMaxPendingSendRequests_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_NegotiateMaxPendingSendRequests_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_ReceiveMore_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_ReceiveMore_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_SendTo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SendTo_Params_Data>(message)) {
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

UDPSocketResponseValidator::UDPSocketResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool UDPSocketResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message))
    return false;
  switch (message->header()->name) {
    case internal::kUDPSocket_AllowAddressReuse_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_AllowAddressReuse_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_Bind_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_Bind_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_Connect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_Connect_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_SetSendBufferSize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SetSendBufferSize_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_SetReceiveBufferSize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SetReceiveBufferSize_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_NegotiateMaxPendingSendRequests_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_NegotiateMaxPendingSendRequests_ResponseParams_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kUDPSocket_SendTo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocket_SendTo_ResponseParams_Data>(message)) {
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
MOJO_STATIC_CONST_MEMBER_DEFINITION const char UDPSocketReceiver::Name_[] = "mojo::UDPSocketReceiver";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t UDPSocketReceiver::Version_;

UDPSocketReceiverProxy::UDPSocketReceiverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void UDPSocketReceiverProxy::OnReceived(
    mojo::NetworkErrorPtr in_result, mojo::NetAddressPtr in_src_addr, mojo::Array<uint8_t> in_data) {
  size_t size = sizeof(internal::UDPSocketReceiver_OnReceived_Params_Data);
  size += GetSerializedSize_(in_result);
  size += GetSerializedSize_(in_src_addr);
  size += GetSerializedSize_(in_data);
  mojo::internal::MessageBuilder builder(internal::kUDPSocketReceiver_OnReceived_Name, size);

  internal::UDPSocketReceiver_OnReceived_Params_Data* params =
      internal::UDPSocketReceiver_OnReceived_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->result.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in UDPSocketReceiver.OnReceived request");
  Serialize_(std::move(in_src_addr), builder.buffer(), &params->src_addr.ptr);
  const mojo::internal::ArrayValidateParams data_validate_params(
      0, false, nullptr);
  mojo::SerializeArray_(std::move(in_data), builder.buffer(),
      &params->data.ptr, &data_validate_params);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

UDPSocketReceiverStub::UDPSocketReceiverStub()
    : sink_(nullptr),
      control_message_handler_(UDPSocketReceiver::Version_) {
}

UDPSocketReceiverStub::~UDPSocketReceiverStub() {}

bool UDPSocketReceiverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kUDPSocketReceiver_OnReceived_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.UDPSocketReceiver.OnReceived", __FILE__, __LINE__);
      internal::UDPSocketReceiver_OnReceived_Params_Data* params =
          reinterpret_cast<internal::UDPSocketReceiver_OnReceived_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::NetworkErrorPtr p_result{};
      mojo::NetAddressPtr p_src_addr{};
      mojo::Array<uint8_t> p_data{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
          success = false;
        if (!Deserialize_(params->src_addr.ptr, &p_src_addr, &serialization_context_))
          success = false;
        if (!Deserialize_(params->data.ptr, &p_data, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "UDPSocketReceiver::OnReceived");
      sink_->OnReceived(std::move(p_result), std::move(p_src_addr), std::move(p_data));
      return true;
    }
  }
  return false;
}

bool UDPSocketReceiverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kUDPSocketReceiver_OnReceived_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::UDPSocketReceiver::OnReceived", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

UDPSocketReceiverRequestValidator::UDPSocketReceiverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool UDPSocketReceiverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kUDPSocketReceiver_OnReceived_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::UDPSocketReceiver_OnReceived_Params_Data>(message)) {
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