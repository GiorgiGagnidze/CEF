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

#include "net/interfaces/host_resolver_service.mojom.h"

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
const uint32_t kHostResolverRequestClient_ReportResult_Name = 0;

class HostResolverRequestClient_ReportResult_Params_Data {
 public:
  static HostResolverRequestClient_ReportResult_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::StructPointer<internal::AddressList_Data> result;

 private:
  HostResolverRequestClient_ReportResult_Params_Data();
  ~HostResolverRequestClient_ReportResult_Params_Data() = delete;
};
static_assert(sizeof(HostResolverRequestClient_ReportResult_Params_Data) == 24,
              "Bad sizeof(HostResolverRequestClient_ReportResult_Params_Data)");

// static
HostResolverRequestClient_ReportResult_Params_Data* HostResolverRequestClient_ReportResult_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HostResolverRequestClient_ReportResult_Params_Data))) HostResolverRequestClient_ReportResult_Params_Data();
}

// static
bool HostResolverRequestClient_ReportResult_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HostResolverRequestClient_ReportResult_Params_Data* object = static_cast<const HostResolverRequestClient_ReportResult_Params_Data*>(data);

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

  if (!mojo::internal::ValidateStruct(object->result, bounds_checker))
    return false;

  return true;
}

void HostResolverRequestClient_ReportResult_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&result, handles);
}

void HostResolverRequestClient_ReportResult_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&result, handles);
}

HostResolverRequestClient_ReportResult_Params_Data::HostResolverRequestClient_ReportResult_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace


// static
HostResolverRequestInfo_Data* HostResolverRequestInfo_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(HostResolverRequestInfo_Data))) HostResolverRequestInfo_Data();
}

// static
bool HostResolverRequestInfo_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const HostResolverRequestInfo_Data* object = static_cast<const HostResolverRequestInfo_Data*>(data);

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
          object->host, "null host field in HostResolverRequestInfo struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams host_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->host, bounds_checker,
                                     &host_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateEnum(object->address_family))
    return false;

  return true;
}

void HostResolverRequestInfo_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&host, handles);
}

void HostResolverRequestInfo_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&host, handles);
}

HostResolverRequestInfo_Data::HostResolverRequestInfo_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
IPEndPoint_Data* IPEndPoint_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(IPEndPoint_Data))) IPEndPoint_Data();
}

// static
bool IPEndPoint_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const IPEndPoint_Data* object = static_cast<const IPEndPoint_Data*>(data);

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
          object->address, "null address field in IPEndPoint struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams address_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->address, bounds_checker,
                                     &address_validate_params)) {
    return false;
  }

  return true;
}

void IPEndPoint_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&address, handles);
}

void IPEndPoint_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&address, handles);
}

IPEndPoint_Data::IPEndPoint_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

// static
AddressList_Data* AddressList_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(AddressList_Data))) AddressList_Data();
}

// static
bool AddressList_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const AddressList_Data* object = static_cast<const AddressList_Data*>(data);

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
          object->addresses, "null addresses field in AddressList struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams addresses_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->addresses, bounds_checker,
                                     &addresses_validate_params)) {
    return false;
  }

  return true;
}

void AddressList_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&addresses, handles);
}

void AddressList_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&addresses, handles);
}

AddressList_Data::AddressList_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}


}  // namespace internal// static
HostResolverRequestInfoPtr HostResolverRequestInfo::New() {
  HostResolverRequestInfoPtr rv;
  mojo::internal::StructHelper<HostResolverRequestInfo>::Initialize(&rv);
  return rv;
}

HostResolverRequestInfo::HostResolverRequestInfo()
    : host(),
      port(),
      address_family(),
      is_my_ip_address() {
}

HostResolverRequestInfo::~HostResolverRequestInfo() {
}


HostResolverRequestInfoPtr HostResolverRequestInfo::Clone() const {
  HostResolverRequestInfoPtr rv(New());
  rv->host = host;
  rv->port = port;
  rv->address_family = address_family;
  rv->is_my_ip_address = is_my_ip_address;
  return rv;
}


bool HostResolverRequestInfo::Equals(const HostResolverRequestInfo& other) const {
  if (!mojo::internal::ValueTraits<mojo::String>::Equals(this->host, other.host))
    return false;
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->port, other.port))
    return false;
  if (!mojo::internal::ValueTraits<AddressFamily>::Equals(this->address_family, other.address_family))
    return false;
  if (!mojo::internal::ValueTraits<bool>::Equals(this->is_my_ip_address, other.is_my_ip_address))
    return false;
  return true;
}// static
IPEndPointPtr IPEndPoint::New() {
  IPEndPointPtr rv;
  mojo::internal::StructHelper<IPEndPoint>::Initialize(&rv);
  return rv;
}

IPEndPoint::IPEndPoint()
    : address(),
      port() {
}

IPEndPoint::~IPEndPoint() {
}


IPEndPointPtr IPEndPoint::Clone() const {
  IPEndPointPtr rv(New());
  rv->address = address.Clone();
  rv->port = port;
  return rv;
}


bool IPEndPoint::Equals(const IPEndPoint& other) const {
  if (!mojo::internal::ValueTraits<mojo::Array<uint8_t>>::Equals(this->address, other.address))
    return false;
  if (!mojo::internal::ValueTraits<uint16_t>::Equals(this->port, other.port))
    return false;
  return true;
}// static
AddressListPtr AddressList::New() {
  AddressListPtr rv;
  mojo::internal::StructHelper<AddressList>::Initialize(&rv);
  return rv;
}

AddressList::AddressList()
    : addresses() {
}

AddressList::~AddressList() {
}


AddressListPtr AddressList::Clone() const {
  AddressListPtr rv(New());
  rv->addresses = addresses.Clone();
  return rv;
}


bool AddressList::Equals(const AddressList& other) const {
  if (!mojo::internal::ValueTraits<mojo::Array<IPEndPointPtr>>::Equals(this->addresses, other.addresses))
    return false;
  return true;
}
MOJO_STATIC_CONST_MEMBER_DEFINITION const char HostResolverRequestClient::Name_[] = "net::interfaces::HostResolverRequestClient";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t HostResolverRequestClient::Version_;

HostResolverRequestClientProxy::HostResolverRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void HostResolverRequestClientProxy::ReportResult(
    int32_t in_error, AddressListPtr in_result) {
  size_t size = sizeof(internal::HostResolverRequestClient_ReportResult_Params_Data);
  size += GetSerializedSize_(in_result);
  mojo::internal::MessageBuilder builder(internal::kHostResolverRequestClient_ReportResult_Name, size);

  internal::HostResolverRequestClient_ReportResult_Params_Data* params =
      internal::HostResolverRequestClient_ReportResult_Params_Data::New(builder.buffer());
  params->error = in_error;
  Serialize_(std::move(in_result), builder.buffer(), &params->result.ptr);
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

HostResolverRequestClientStub::HostResolverRequestClientStub()
    : sink_(nullptr),
      control_message_handler_(HostResolverRequestClient::Version_) {
}

HostResolverRequestClientStub::~HostResolverRequestClientStub() {}

bool HostResolverRequestClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kHostResolverRequestClient_ReportResult_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.net::interfaces.HostResolverRequestClient.ReportResult", __FILE__, __LINE__);
      internal::HostResolverRequestClient_ReportResult_Params_Data* params =
          reinterpret_cast<internal::HostResolverRequestClient_ReportResult_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int32_t p_error{};
      AddressListPtr p_result{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_error = params->error;
        if (!Deserialize_(params->result.ptr, &p_result, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "HostResolverRequestClient::ReportResult");
      sink_->ReportResult(p_error, std::move(p_result));
      return true;
    }
  }
  return false;
}

bool HostResolverRequestClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kHostResolverRequestClient_ReportResult_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::net::interfaces::HostResolverRequestClient::ReportResult", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

HostResolverRequestClientRequestValidator::HostResolverRequestClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool HostResolverRequestClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kHostResolverRequestClient_ReportResult_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::HostResolverRequestClient_ReportResult_Params_Data>(message)) {
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

size_t GetSerializedSize_(const HostResolverRequestInfoPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::HostResolverRequestInfo_Data);
  size += GetSerializedSize_(input->host);
  return size;
}

void Serialize_(HostResolverRequestInfoPtr input, mojo::internal::Buffer* buf,
                internal::HostResolverRequestInfo_Data** output) {
  if (input) {
    internal::HostResolverRequestInfo_Data* result =
        internal::HostResolverRequestInfo_Data::New(buf);
    Serialize_(std::move(input->host), buf, &result->host.ptr);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->host.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null host in HostResolverRequestInfo struct");
    result->port = input->port;
    result->address_family.value = static_cast<int32_t>(input->address_family);
    result->is_my_ip_address = input->is_my_ip_address;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::HostResolverRequestInfo_Data* input,
                  HostResolverRequestInfoPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    HostResolverRequestInfoPtr result(HostResolverRequestInfo::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->host.ptr, &result->host, context))
        success = false;
      result->port = input->port;
      result->address_family = static_cast<AddressFamily>(input->address_family.value);
      result->is_my_ip_address = input->is_my_ip_address;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

HostResolverRequestInfo_Reader::HostResolverRequestInfo_Reader(
    internal::HostResolverRequestInfo_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const IPEndPointPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::IPEndPoint_Data);
  size += GetSerializedSize_(input->address);
  return size;
}

void Serialize_(IPEndPointPtr input, mojo::internal::Buffer* buf,
                internal::IPEndPoint_Data** output) {
  if (input) {
    internal::IPEndPoint_Data* result =
        internal::IPEndPoint_Data::New(buf);
    const mojo::internal::ArrayValidateParams address_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->address), buf,
        &result->address.ptr, &address_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->address.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null address in IPEndPoint struct");
    result->port = input->port;
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::IPEndPoint_Data* input,
                  IPEndPointPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    IPEndPointPtr result(IPEndPoint::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->address.ptr, &result->address, context))
        success = false;
      result->port = input->port;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

IPEndPoint_Reader::IPEndPoint_Reader(
    internal::IPEndPoint_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
size_t GetSerializedSize_(const AddressListPtr& input) {
  if (!input)
    return 0;
  size_t size = sizeof(internal::AddressList_Data);
  size += GetSerializedSize_(input->addresses);
  return size;
}

void Serialize_(AddressListPtr input, mojo::internal::Buffer* buf,
                internal::AddressList_Data** output) {
  if (input) {
    internal::AddressList_Data* result =
        internal::AddressList_Data::New(buf);
    const mojo::internal::ArrayValidateParams addresses_validate_params(
        0, false, nullptr);
    mojo::SerializeArray_(std::move(input->addresses), buf,
        &result->addresses.ptr, &addresses_validate_params);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        !result->addresses.ptr,
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null addresses in AddressList struct");
    *output = result;
  } else {
    *output = nullptr;
  }
}

bool Deserialize_(internal::AddressList_Data* input,
                  AddressListPtr* output,
                  mojo::internal::SerializationContext* context) {
  bool success = true;
  if (input) {
    AddressListPtr result(AddressList::New());
    do {
      // NOTE: The memory backing |input| may has be smaller than
      // |sizeof(*input)| if the message comes from an older version.
      if (!Deserialize_(input->addresses.ptr, &result->addresses, context))
        success = false;
    } while (false);
    *output = std::move(result);
  } else {
    output->reset();
  }
  return success;
}

AddressList_Reader::AddressList_Reader(
    internal::AddressList_Data*  data,
    mojo::internal::SerializationContext* context)
    : data_(data), context_(context) { }
}  // namespace interfaces
}  // namespace net

#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif