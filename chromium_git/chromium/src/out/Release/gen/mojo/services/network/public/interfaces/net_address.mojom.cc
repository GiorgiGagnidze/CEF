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

#include "mojo/services/network/public/interfaces/net_address.mojom.h"

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

#pragma pack(pop)

}  // namespace


// static
NetAddressIPv4_Data* NetAddressIPv4_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetAddressIPv4_Data))) NetAddressIPv4_Data();
}

// static
bool NetAddressIPv4_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetAddressIPv4_Data* object = static_cast<const NetAddressIPv4_Data*>(data);

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
          object->addr, "null addr field in NetAddressIPv4 struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams addr_validate_params(
      4, false, nullptr);
  if (!mojo::internal::ValidateArray(object->addr, bounds_checker,
                                     &addr_validate_params)) {
    return false;
  }

  return true;
}

void NetAddressIPv4_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&addr, handles);
}

void NetAddressIPv4_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&addr, handles);
}

NetAddressIPv4_Data::NetAddressIPv4_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
NetAddressIPv6_Data* NetAddressIPv6_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetAddressIPv6_Data))) NetAddressIPv6_Data();
}

// static
bool NetAddressIPv6_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetAddressIPv6_Data* object = static_cast<const NetAddressIPv6_Data*>(data);

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
          object->addr, "null addr field in NetAddressIPv6 struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams addr_validate_params(
      16, false, nullptr);
  if (!mojo::internal::ValidateArray(object->addr, bounds_checker,
                                     &addr_validate_params)) {
    return false;
  }

  return true;
}

void NetAddressIPv6_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&addr, handles);
}

void NetAddressIPv6_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&addr, handles);
}

NetAddressIPv6_Data::NetAddressIPv6_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
NetAddress_Data* NetAddress_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(NetAddress_Data))) NetAddress_Data();
}

// static
bool NetAddress_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const NetAddress_Data* object = static_cast<const NetAddress_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->family))
    return false;

  if (!mojo::internal::ValidateStruct(object->ipv4, bounds_checker))
    return false;

  if (!mojo::internal::ValidateStruct(object->ipv6, bounds_checker))
    return false;

  return true;
}

void NetAddress_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&ipv4, handles);
  mojo::internal::Encode(&ipv6, handles);
}

void NetAddress_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&ipv4, handles);
  mojo::internal::Decode(&ipv6, handles);
}

NetAddress_Data::NetAddress_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
NetAddressIPv4Ptr NetAddressIPv4::New() {
  NetAddressIPv4Ptr rv;
  mojo::internal::StructHelper<NetAddressIPv4>::Initialize(&rv);
  return rv;
}

NetAddressIPv4::NetAddressIPv4()
    : port(),
      addr() {
}

NetAddressIPv4::~NetAddressIPv4() {
}


NetAddressIPv4Ptr NetAddressIPv4::Clone() const {
  NetAddressIPv4Ptr rv(New());
  rv->port = port;
  rv->addr = addr.Clone();
  return rv;
}


bool NetAddressIPv4::Equals(const NetAddressIPv4& other) const {
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->port, other.port))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<uint8_t>>::Equals(this->addr, other.addr))
    return false;
  return true;
}// static
NetAddressIPv6Ptr NetAddressIPv6::New() {
  NetAddressIPv6Ptr rv;
  mojo::internal::StructHelper<NetAddressIPv6>::Initialize(&rv);
  return rv;
}

NetAddressIPv6::NetAddressIPv6()
    : port(),
      addr() {
}

NetAddressIPv6::~NetAddressIPv6() {
}


NetAddressIPv6Ptr NetAddressIPv6::Clone() const {
  NetAddressIPv6Ptr rv(New());
  rv->port = port;
  rv->addr = addr.Clone();
  return rv;
}


bool NetAddressIPv6::Equals(const NetAddressIPv6& other) const {
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->port, other.port))
    return false;
  if (!mojo::internal::ValueTraits<mojo::Array<uint8_t>>::Equals(this->addr, other.addr))
    return false;
  return true;
}// static
NetAddressPtr NetAddress::New() {
  NetAddressPtr rv;
  mojo::internal::StructHelper<NetAddress>::Initialize(&rv);
  return rv;
}

NetAddress::NetAddress()
    : family(NetAddressFamily::UNSPECIFIED),
      ipv4(),
      ipv6() {
}

NetAddress::~NetAddress() {
}


NetAddressPtr NetAddress::Clone() const {
  NetAddressPtr rv(New());
  rv->family = family;
  rv->ipv4 = ipv4.Clone();
  rv->ipv6 = ipv6.Clone();
  return rv;
}


bool NetAddress::Equals(const NetAddress& other) const {
  if (!mojo::internal::ValueTraits<NetAddressFamily>::Equals(this->family, other.family))
    return false;
  if (!mojo::internal::ValueTraits<NetAddressIPv4Ptr>::Equals(this->ipv4, other.ipv4))
    return false;
  if (!mojo::internal::ValueTraits<NetAddressIPv6Ptr>::Equals(this->ipv6, other.ipv6))
    return false;
  return true;
}
size_t GetSerializedSize_(const NetAddressIPv4Ptr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::NetAddressIPv4_Data);
  size += GetSerializedSize_(input->addr);
  return size;
}

void Serialize_(NetAddressIPv4Ptr input, mojo::internal::Buffer* buf,
                internal::NetAddressIPv4_Data** output) {
  if (input) {
    internal::NetAddressIPv4_Data* result =
        internal::NetAddressIPv4_Data::New(buf);
    result->port = input->port;
    const mojo::internal::ArrayValidateParams addr_validate_params(
        4, false, nullptr);
    mojo::SerializeArray_(std::move(input->addr), buf,
        &result->addr.ptr, &addr_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->addr.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null addr in NetAddressIPv4 struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::NetAddressIPv4_Data* input,
                  NetAddressIPv4Ptr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    NetAddressIPv4Ptr result(NetAddressIPv4::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->port = input->port;
      if (!Deserialize_(input->addr.ptr, &result->addr, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

NetAddressIPv4_Reader::NetAddressIPv4_Reader(
    internal::NetAddressIPv4_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const NetAddressIPv6Ptr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::NetAddressIPv6_Data);
  size += GetSerializedSize_(input->addr);
  return size;
}

void Serialize_(NetAddressIPv6Ptr input, mojo::internal::Buffer* buf,
                internal::NetAddressIPv6_Data** output) {
  if (input) {
    internal::NetAddressIPv6_Data* result =
        internal::NetAddressIPv6_Data::New(buf);
    result->port = input->port;
    const mojo::internal::ArrayValidateParams addr_validate_params(
        16, false, nullptr);
    mojo::SerializeArray_(std::move(input->addr), buf,
        &result->addr.ptr, &addr_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->addr.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null addr in NetAddressIPv6 struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::NetAddressIPv6_Data* input,
                  NetAddressIPv6Ptr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    NetAddressIPv6Ptr result(NetAddressIPv6::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->port = input->port;
      if (!Deserialize_(input->addr.ptr, &result->addr, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

NetAddressIPv6_Reader::NetAddressIPv6_Reader(
    internal::NetAddressIPv6_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const NetAddressPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::NetAddress_Data);
  size += GetSerializedSize_(input->ipv4);
  size += GetSerializedSize_(input->ipv6);
  return size;
}

void Serialize_(NetAddressPtr input, mojo::internal::Buffer* buf,
                internal::NetAddress_Data** output) {
  if (input) {
    internal::NetAddress_Data* result =
        internal::NetAddress_Data::New(buf);
    result->family.value = static_cast<int32_t>(input->family);
    Serialize_(std::move(input->ipv4), buf, &result->ipv4.ptr);
    Serialize_(std::move(input->ipv6), buf, &result->ipv6.ptr);
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::NetAddress_Data* input,
                  NetAddressPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    NetAddressPtr result(NetAddress::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      result->family = static_cast<NetAddressFamily>(input->family.value);
      if (!Deserialize_(input->ipv4.ptr, &result->ipv4, context))
        success = false;
      if (!Deserialize_(input->ipv6.ptr, &result->ipv6, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

NetAddress_Reader::NetAddress_Reader(
    internal::NetAddress_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
NetAddressIPv4_Reader NetAddress_Reader::ipv4() const {
  return NetAddressIPv4_Reader(data_->ipv4.ptr, context_);
}
NetAddressIPv6_Reader NetAddress_Reader::ipv6() const {
  return NetAddressIPv6_Reader(data_->ipv6.ptr, context_);
}
}  // namespace mojo

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif