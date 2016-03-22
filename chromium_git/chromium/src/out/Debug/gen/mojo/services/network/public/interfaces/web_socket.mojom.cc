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

#include "mojo/services/network/public/interfaces/web_socket.mojom.h"

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
const uint32_t kWebSocket_Connect_Name = 0;

class WebSocket_Connect_Params_Data {
 public:
  static WebSocket_Connect_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer url;
  mojo::internal::ArrayPointer<mojo::internal::String_Data*> protocols;
  mojo::internal::StringPointer origin;
  mojo::DataPipeConsumerHandle send_stream;
  mojo::internal::Interface_Data client;
  uint8_t padfinal_[4];

 private:
  WebSocket_Connect_Params_Data();
  ~WebSocket_Connect_Params_Data() = delete;
};
static_assert(sizeof(WebSocket_Connect_Params_Data) == 48,
              "Bad sizeof(WebSocket_Connect_Params_Data)");

// static
WebSocket_Connect_Params_Data* WebSocket_Connect_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebSocket_Connect_Params_Data))) WebSocket_Connect_Params_Data();
}

// static
bool WebSocket_Connect_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebSocket_Connect_Params_Data* object = static_cast<const WebSocket_Connect_Params_Data*>(data);

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
          object->url, "null url field in WebSocket_Connect_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams url_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->url, bounds_checker,
                                     &url_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->protocols, "null protocols field in WebSocket_Connect_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams protocols_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateArray(object->protocols, bounds_checker,
                                     &protocols_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->origin, "null origin field in WebSocket_Connect_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams origin_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->origin, bounds_checker,
                                     &origin_validate_params)) {
    return false;
  }

  const mojo::Handle send_stream_handle = object->send_stream;
  if (!mojo::internal::ValidateHandleNonNullable(
          send_stream_handle,
          "invalid send_stream field in WebSocket_Connect_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(send_stream_handle, bounds_checker))
    return false;

  const mojo::Handle client_handle = object->client.handle;
  if (!mojo::internal::ValidateHandleNonNullable(
          client_handle,
          "invalid client field in WebSocket_Connect_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(client_handle, bounds_checker))
    return false;

  return true;
}

void WebSocket_Connect_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&url, handles);
  mojo::internal::Encode(&protocols, handles);
  mojo::internal::Encode(&origin, handles);
  mojo::internal::EncodeHandle(&send_stream, handles);
  mojo::internal::EncodeHandle(&client, handles);
}

void WebSocket_Connect_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&url, handles);
  mojo::internal::Decode(&protocols, handles);
  mojo::internal::Decode(&origin, handles);
  mojo::internal::DecodeHandle(&send_stream, handles);
  mojo::internal::DecodeHandle(&client, handles);
}

WebSocket_Connect_Params_Data::WebSocket_Connect_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kWebSocket_Send_Name = 1;

class WebSocket_Send_Params_Data {
 public:
  static WebSocket_Send_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t fin : 1;
  uint8_t pad0_[3];
  internal::WebSocket_Data::MessageType_Data type;
  uint32_t num_bytes;
  uint8_t padfinal_[4];

 private:
  WebSocket_Send_Params_Data();
  ~WebSocket_Send_Params_Data() = delete;
};
static_assert(sizeof(WebSocket_Send_Params_Data) == 24,
              "Bad sizeof(WebSocket_Send_Params_Data)");

// static
WebSocket_Send_Params_Data* WebSocket_Send_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebSocket_Send_Params_Data))) WebSocket_Send_Params_Data();
}

// static
bool WebSocket_Send_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebSocket_Send_Params_Data* object = static_cast<const WebSocket_Send_Params_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->type))
    return false;

  return true;
}

void WebSocket_Send_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void WebSocket_Send_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

WebSocket_Send_Params_Data::WebSocket_Send_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kWebSocket_FlowControl_Name = 2;

class WebSocket_FlowControl_Params_Data {
 public:
  static WebSocket_FlowControl_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int64_t quota;

 private:
  WebSocket_FlowControl_Params_Data();
  ~WebSocket_FlowControl_Params_Data() = delete;
};
static_assert(sizeof(WebSocket_FlowControl_Params_Data) == 16,
              "Bad sizeof(WebSocket_FlowControl_Params_Data)");

// static
WebSocket_FlowControl_Params_Data* WebSocket_FlowControl_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebSocket_FlowControl_Params_Data))) WebSocket_FlowControl_Params_Data();
}

// static
bool WebSocket_FlowControl_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebSocket_FlowControl_Params_Data* object = static_cast<const WebSocket_FlowControl_Params_Data*>(data);

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

void WebSocket_FlowControl_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void WebSocket_FlowControl_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

WebSocket_FlowControl_Params_Data::WebSocket_FlowControl_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kWebSocket_Close_Name = 3;

class WebSocket_Close_Params_Data {
 public:
  static WebSocket_Close_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint16_t code;
  uint8_t pad0_[6];
  mojo::internal::StringPointer reason;

 private:
  WebSocket_Close_Params_Data();
  ~WebSocket_Close_Params_Data() = delete;
};
static_assert(sizeof(WebSocket_Close_Params_Data) == 24,
              "Bad sizeof(WebSocket_Close_Params_Data)");

// static
WebSocket_Close_Params_Data* WebSocket_Close_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebSocket_Close_Params_Data))) WebSocket_Close_Params_Data();
}

// static
bool WebSocket_Close_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebSocket_Close_Params_Data* object = static_cast<const WebSocket_Close_Params_Data*>(data);

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
          object->reason, "null reason field in WebSocket_Close_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams reason_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->reason, bounds_checker,
                                     &reason_validate_params)) {
    return false;
  }

  return true;
}

void WebSocket_Close_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&reason, handles);
}

void WebSocket_Close_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&reason, handles);
}

WebSocket_Close_Params_Data::WebSocket_Close_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kWebSocketClient_DidConnect_Name = 0;

class WebSocketClient_DidConnect_Params_Data {
 public:
  static WebSocketClient_DidConnect_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer selected_subprotocol;
  mojo::internal::StringPointer extensions;
  mojo::DataPipeConsumerHandle receive_stream;
  uint8_t padfinal_[4];

 private:
  WebSocketClient_DidConnect_Params_Data();
  ~WebSocketClient_DidConnect_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_DidConnect_Params_Data) == 32,
              "Bad sizeof(WebSocketClient_DidConnect_Params_Data)");

// static
WebSocketClient_DidConnect_Params_Data* WebSocketClient_DidConnect_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebSocketClient_DidConnect_Params_Data))) WebSocketClient_DidConnect_Params_Data();
}

// static
bool WebSocketClient_DidConnect_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebSocketClient_DidConnect_Params_Data* object = static_cast<const WebSocketClient_DidConnect_Params_Data*>(data);

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
          object->selected_subprotocol, "null selected_subprotocol field in WebSocketClient_DidConnect_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams selected_subprotocol_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->selected_subprotocol, bounds_checker,
                                     &selected_subprotocol_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->extensions, "null extensions field in WebSocketClient_DidConnect_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams extensions_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->extensions, bounds_checker,
                                     &extensions_validate_params)) {
    return false;
  }

  const mojo::Handle receive_stream_handle = object->receive_stream;
  if (!mojo::internal::ValidateHandleNonNullable(
          receive_stream_handle,
          "invalid receive_stream field in WebSocketClient_DidConnect_Params struct")) {
    return false;
  }
  if (!mojo::internal::ValidateHandle(receive_stream_handle, bounds_checker))
    return false;

  return true;
}

void WebSocketClient_DidConnect_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&selected_subprotocol, handles);
  mojo::internal::Encode(&extensions, handles);
  mojo::internal::EncodeHandle(&receive_stream, handles);
}

void WebSocketClient_DidConnect_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&selected_subprotocol, handles);
  mojo::internal::Decode(&extensions, handles);
  mojo::internal::DecodeHandle(&receive_stream, handles);
}

WebSocketClient_DidConnect_Params_Data::WebSocketClient_DidConnect_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kWebSocketClient_DidReceiveData_Name = 1;

class WebSocketClient_DidReceiveData_Params_Data {
 public:
  static WebSocketClient_DidReceiveData_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t fin : 1;
  uint8_t pad0_[3];
  internal::WebSocket_Data::MessageType_Data type;
  uint32_t num_bytes;
  uint8_t padfinal_[4];

 private:
  WebSocketClient_DidReceiveData_Params_Data();
  ~WebSocketClient_DidReceiveData_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_DidReceiveData_Params_Data) == 24,
              "Bad sizeof(WebSocketClient_DidReceiveData_Params_Data)");

// static
WebSocketClient_DidReceiveData_Params_Data* WebSocketClient_DidReceiveData_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebSocketClient_DidReceiveData_Params_Data))) WebSocketClient_DidReceiveData_Params_Data();
}

// static
bool WebSocketClient_DidReceiveData_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebSocketClient_DidReceiveData_Params_Data* object = static_cast<const WebSocketClient_DidReceiveData_Params_Data*>(data);

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

  if (!mojo::internal::ValidateEnum(object->type))
    return false;

  return true;
}

void WebSocketClient_DidReceiveData_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void WebSocketClient_DidReceiveData_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

WebSocketClient_DidReceiveData_Params_Data::WebSocketClient_DidReceiveData_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kWebSocketClient_DidReceiveFlowControl_Name = 2;

class WebSocketClient_DidReceiveFlowControl_Params_Data {
 public:
  static WebSocketClient_DidReceiveFlowControl_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  int64_t quota;

 private:
  WebSocketClient_DidReceiveFlowControl_Params_Data();
  ~WebSocketClient_DidReceiveFlowControl_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_DidReceiveFlowControl_Params_Data) == 16,
              "Bad sizeof(WebSocketClient_DidReceiveFlowControl_Params_Data)");

// static
WebSocketClient_DidReceiveFlowControl_Params_Data* WebSocketClient_DidReceiveFlowControl_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebSocketClient_DidReceiveFlowControl_Params_Data))) WebSocketClient_DidReceiveFlowControl_Params_Data();
}

// static
bool WebSocketClient_DidReceiveFlowControl_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebSocketClient_DidReceiveFlowControl_Params_Data* object = static_cast<const WebSocketClient_DidReceiveFlowControl_Params_Data*>(data);

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

void WebSocketClient_DidReceiveFlowControl_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
}

void WebSocketClient_DidReceiveFlowControl_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
}

WebSocketClient_DidReceiveFlowControl_Params_Data::WebSocketClient_DidReceiveFlowControl_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kWebSocketClient_DidFail_Name = 3;

class WebSocketClient_DidFail_Params_Data {
 public:
  static WebSocketClient_DidFail_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  mojo::internal::StringPointer message;

 private:
  WebSocketClient_DidFail_Params_Data();
  ~WebSocketClient_DidFail_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_DidFail_Params_Data) == 16,
              "Bad sizeof(WebSocketClient_DidFail_Params_Data)");

// static
WebSocketClient_DidFail_Params_Data* WebSocketClient_DidFail_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebSocketClient_DidFail_Params_Data))) WebSocketClient_DidFail_Params_Data();
}

// static
bool WebSocketClient_DidFail_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebSocketClient_DidFail_Params_Data* object = static_cast<const WebSocketClient_DidFail_Params_Data*>(data);

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
          object->message, "null message field in WebSocketClient_DidFail_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams message_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->message, bounds_checker,
                                     &message_validate_params)) {
    return false;
  }

  return true;
}

void WebSocketClient_DidFail_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&message, handles);
}

void WebSocketClient_DidFail_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&message, handles);
}

WebSocketClient_DidFail_Params_Data::WebSocketClient_DidFail_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}
const uint32_t kWebSocketClient_DidClose_Name = 4;

class WebSocketClient_DidClose_Params_Data {
 public:
  static WebSocketClient_DidClose_Params_Data* New(mojo::internal::Buffer* buf);

  static bool Validate(const void* data,
                       mojo::internal::BoundsChecker* bounds_checker);

  void EncodePointersAndHandles(std::vector<mojo::Handle>* handles);
  void DecodePointersAndHandles(std::vector<mojo::Handle>* handles);



  mojo::internal::StructHeader header_;
  uint8_t was_clean : 1;
  uint8_t pad0_[1];
  uint16_t code;
  uint8_t pad1_[4];
  mojo::internal::StringPointer reason;

 private:
  WebSocketClient_DidClose_Params_Data();
  ~WebSocketClient_DidClose_Params_Data() = delete;
};
static_assert(sizeof(WebSocketClient_DidClose_Params_Data) == 24,
              "Bad sizeof(WebSocketClient_DidClose_Params_Data)");

// static
WebSocketClient_DidClose_Params_Data* WebSocketClient_DidClose_Params_Data::New(mojo::internal::Buffer* buf) {
  return new (buf->Allocate(sizeof(WebSocketClient_DidClose_Params_Data))) WebSocketClient_DidClose_Params_Data();
}

// static
bool WebSocketClient_DidClose_Params_Data::Validate(const void* data,
                              mojo::internal::BoundsChecker* bounds_checker) {
  if (!data)
    return true;

  if (!ValidateStructHeaderAndClaimMemory(data, bounds_checker))
    return false;

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  const WebSocketClient_DidClose_Params_Data* object = static_cast<const WebSocketClient_DidClose_Params_Data*>(data);

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
          object->reason, "null reason field in WebSocketClient_DidClose_Params struct")) {
    return false;
  }
  const mojo::internal::ArrayValidateParams reason_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateArray(object->reason, bounds_checker,
                                     &reason_validate_params)) {
    return false;
  }

  return true;
}

void WebSocketClient_DidClose_Params_Data::EncodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  MOJO_CHECK(header_.version == 0);
  mojo::internal::Encode(&reason, handles);
}

void WebSocketClient_DidClose_Params_Data::DecodePointersAndHandles(
    std::vector<mojo::Handle>* handles) {
  // NOTE: The memory backing |this| may has be smaller than |sizeof(*this)|, if
  // the message comes from an older version.
  mojo::internal::Decode(&reason, handles);
}

WebSocketClient_DidClose_Params_Data::WebSocketClient_DidClose_Params_Data() {
  header_.num_bytes = sizeof(*this);
  header_.version = 0;
}

#pragma pack(pop)

}  // namespace



}  // namespace internal
MOJO_STATIC_CONST_MEMBER_DEFINITION const char WebSocket::Name_[] = "mojo::WebSocket";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t WebSocket::Version_;
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint16_t WebSocket::kAbnormalCloseCode;

WebSocketProxy::WebSocketProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void WebSocketProxy::Connect(
    const mojo::String& in_url, mojo::Array<mojo::String> in_protocols, const mojo::String& in_origin, mojo::ScopedDataPipeConsumerHandle in_send_stream, WebSocketClientPtr in_client) {
  size_t size = sizeof(internal::WebSocket_Connect_Params_Data);
  size += GetSerializedSize_(in_url);
  size += GetSerializedSize_(in_protocols);
  size += GetSerializedSize_(in_origin);
  mojo::internal::MessageBuilder builder(internal::kWebSocket_Connect_Name, size);

  internal::WebSocket_Connect_Params_Data* params =
      internal::WebSocket_Connect_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_url), builder.buffer(), &params->url.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->url.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in WebSocket.Connect request");
  const mojo::internal::ArrayValidateParams protocols_validate_params(
      0, false, new mojo::internal::ArrayValidateParams(0, false, nullptr));
  mojo::SerializeArray_(std::move(in_protocols), builder.buffer(),
      &params->protocols.ptr, &protocols_validate_params);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->protocols.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null protocols in WebSocket.Connect request");
  Serialize_(std::move(in_origin), builder.buffer(), &params->origin.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->origin.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in WebSocket.Connect request");
  params->send_stream = in_send_stream.release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->send_stream.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid send_stream in WebSocket.Connect request");
  mojo::internal::InterfacePointerToData(std::move(in_client), &params->client);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->client.handle.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in WebSocket.Connect request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void WebSocketProxy::Send(
    bool in_fin, WebSocket::MessageType in_type, uint32_t in_num_bytes) {
  size_t size = sizeof(internal::WebSocket_Send_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWebSocket_Send_Name, size);

  internal::WebSocket_Send_Params_Data* params =
      internal::WebSocket_Send_Params_Data::New(builder.buffer());
  params->fin = in_fin;
  params->type.value = static_cast<int32_t>(in_type);
  params->num_bytes = in_num_bytes;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void WebSocketProxy::FlowControl(
    int64_t in_quota) {
  size_t size = sizeof(internal::WebSocket_FlowControl_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWebSocket_FlowControl_Name, size);

  internal::WebSocket_FlowControl_Params_Data* params =
      internal::WebSocket_FlowControl_Params_Data::New(builder.buffer());
  params->quota = in_quota;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void WebSocketProxy::Close(
    uint16_t in_code, const mojo::String& in_reason) {
  size_t size = sizeof(internal::WebSocket_Close_Params_Data);
  size += GetSerializedSize_(in_reason);
  mojo::internal::MessageBuilder builder(internal::kWebSocket_Close_Name, size);

  internal::WebSocket_Close_Params_Data* params =
      internal::WebSocket_Close_Params_Data::New(builder.buffer());
  params->code = in_code;
  Serialize_(std::move(in_reason), builder.buffer(), &params->reason.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->reason.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null reason in WebSocket.Close request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

WebSocketStub::WebSocketStub()
    : sink_(nullptr),
      control_message_handler_(WebSocket::Version_) {
}

WebSocketStub::~WebSocketStub() {}

bool WebSocketStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWebSocket_Connect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.WebSocket.Connect", __FILE__, __LINE__);
      internal::WebSocket_Connect_Params_Data* params =
          reinterpret_cast<internal::WebSocket_Connect_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_url{};
      mojo::Array<mojo::String> p_protocols{};
      mojo::String p_origin{};
      mojo::ScopedDataPipeConsumerHandle p_send_stream{};
      WebSocketClientPtr p_client{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->url.ptr, &p_url, &serialization_context_))
          success = false;
        if (!Deserialize_(params->protocols.ptr, &p_protocols, &serialization_context_))
          success = false;
        if (!Deserialize_(params->origin.ptr, &p_origin, &serialization_context_))
          success = false;
        p_send_stream.reset(mojo::internal::FetchAndReset(&params->send_stream));
        mojo::internal::InterfaceDataToPointer(&params->client, &p_client);
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocket::Connect");
      sink_->Connect(p_url, std::move(p_protocols), p_origin, std::move(p_send_stream), std::move(p_client));
      return true;
    }
    case internal::kWebSocket_Send_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.WebSocket.Send", __FILE__, __LINE__);
      internal::WebSocket_Send_Params_Data* params =
          reinterpret_cast<internal::WebSocket_Send_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      bool p_fin{};
      WebSocket::MessageType p_type{};
      uint32_t p_num_bytes{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_fin = params->fin;
        p_type = static_cast<WebSocket::MessageType>(params->type.value);
        p_num_bytes = params->num_bytes;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocket::Send");
      sink_->Send(p_fin, p_type, p_num_bytes);
      return true;
    }
    case internal::kWebSocket_FlowControl_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.WebSocket.FlowControl", __FILE__, __LINE__);
      internal::WebSocket_FlowControl_Params_Data* params =
          reinterpret_cast<internal::WebSocket_FlowControl_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int64_t p_quota{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_quota = params->quota;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocket::FlowControl");
      sink_->FlowControl(p_quota);
      return true;
    }
    case internal::kWebSocket_Close_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.WebSocket.Close", __FILE__, __LINE__);
      internal::WebSocket_Close_Params_Data* params =
          reinterpret_cast<internal::WebSocket_Close_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      uint16_t p_code{};
      mojo::String p_reason{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_code = params->code;
        if (!Deserialize_(params->reason.ptr, &p_reason, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocket::Close");
      sink_->Close(p_code, p_reason);
      return true;
    }
  }
  return false;
}

bool WebSocketStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWebSocket_Connect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::WebSocket::Connect", __FILE__, __LINE__);
      break;
    }
    case internal::kWebSocket_Send_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::WebSocket::Send", __FILE__, __LINE__);
      break;
    }
    case internal::kWebSocket_FlowControl_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::WebSocket::FlowControl", __FILE__, __LINE__);
      break;
    }
    case internal::kWebSocket_Close_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::WebSocket::Close", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

WebSocketRequestValidator::WebSocketRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WebSocketRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWebSocket_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocket_Connect_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocket_Send_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocket_Send_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocket_FlowControl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocket_FlowControl_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocket_Close_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocket_Close_Params_Data>(message)) {
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

MOJO_STATIC_CONST_MEMBER_DEFINITION const char WebSocketClient::Name_[] = "mojo::WebSocketClient";
MOJO_STATIC_CONST_MEMBER_DEFINITION const uint32_t WebSocketClient::Version_;

WebSocketClientProxy::WebSocketClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
void WebSocketClientProxy::DidConnect(
    const mojo::String& in_selected_subprotocol, const mojo::String& in_extensions, mojo::ScopedDataPipeConsumerHandle in_receive_stream) {
  size_t size = sizeof(internal::WebSocketClient_DidConnect_Params_Data);
  size += GetSerializedSize_(in_selected_subprotocol);
  size += GetSerializedSize_(in_extensions);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_DidConnect_Name, size);

  internal::WebSocketClient_DidConnect_Params_Data* params =
      internal::WebSocketClient_DidConnect_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_selected_subprotocol), builder.buffer(), &params->selected_subprotocol.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->selected_subprotocol.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null selected_subprotocol in WebSocketClient.DidConnect request");
  Serialize_(std::move(in_extensions), builder.buffer(), &params->extensions.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->extensions.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null extensions in WebSocketClient.DidConnect request");
  params->receive_stream = in_receive_stream.release();
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->receive_stream.is_valid(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receive_stream in WebSocketClient.DidConnect request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void WebSocketClientProxy::DidReceiveData(
    bool in_fin, WebSocket::MessageType in_type, uint32_t in_num_bytes) {
  size_t size = sizeof(internal::WebSocketClient_DidReceiveData_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_DidReceiveData_Name, size);

  internal::WebSocketClient_DidReceiveData_Params_Data* params =
      internal::WebSocketClient_DidReceiveData_Params_Data::New(builder.buffer());
  params->fin = in_fin;
  params->type.value = static_cast<int32_t>(in_type);
  params->num_bytes = in_num_bytes;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void WebSocketClientProxy::DidReceiveFlowControl(
    int64_t in_quota) {
  size_t size = sizeof(internal::WebSocketClient_DidReceiveFlowControl_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_DidReceiveFlowControl_Name, size);

  internal::WebSocketClient_DidReceiveFlowControl_Params_Data* params =
      internal::WebSocketClient_DidReceiveFlowControl_Params_Data::New(builder.buffer());
  params->quota = in_quota;
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void WebSocketClientProxy::DidFail(
    const mojo::String& in_message) {
  size_t size = sizeof(internal::WebSocketClient_DidFail_Params_Data);
  size += GetSerializedSize_(in_message);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_DidFail_Name, size);

  internal::WebSocketClient_DidFail_Params_Data* params =
      internal::WebSocketClient_DidFail_Params_Data::New(builder.buffer());
  Serialize_(std::move(in_message), builder.buffer(), &params->message.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->message.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in WebSocketClient.DidFail request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}
void WebSocketClientProxy::DidClose(
    bool in_was_clean, uint16_t in_code, const mojo::String& in_reason) {
  size_t size = sizeof(internal::WebSocketClient_DidClose_Params_Data);
  size += GetSerializedSize_(in_reason);
  mojo::internal::MessageBuilder builder(internal::kWebSocketClient_DidClose_Name, size);

  internal::WebSocketClient_DidClose_Params_Data* params =
      internal::WebSocketClient_DidClose_Params_Data::New(builder.buffer());
  params->was_clean = in_was_clean;
  params->code = in_code;
  Serialize_(std::move(in_reason), builder.buffer(), &params->reason.ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !params->reason.ptr,
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null reason in WebSocketClient.DidClose request");
  params->EncodePointersAndHandles(builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  MOJO_ALLOW_UNUSED_LOCAL(ok);
}

WebSocketClientStub::WebSocketClientStub()
    : sink_(nullptr),
      control_message_handler_(WebSocketClient::Version_) {
}

WebSocketClientStub::~WebSocketClientStub() {}

bool WebSocketClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWebSocketClient_DidConnect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.WebSocketClient.DidConnect", __FILE__, __LINE__);
      internal::WebSocketClient_DidConnect_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_DidConnect_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_selected_subprotocol{};
      mojo::String p_extensions{};
      mojo::ScopedDataPipeConsumerHandle p_receive_stream{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->selected_subprotocol.ptr, &p_selected_subprotocol, &serialization_context_))
          success = false;
        if (!Deserialize_(params->extensions.ptr, &p_extensions, &serialization_context_))
          success = false;
        p_receive_stream.reset(mojo::internal::FetchAndReset(&params->receive_stream));
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::DidConnect");
      sink_->DidConnect(p_selected_subprotocol, p_extensions, std::move(p_receive_stream));
      return true;
    }
    case internal::kWebSocketClient_DidReceiveData_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.WebSocketClient.DidReceiveData", __FILE__, __LINE__);
      internal::WebSocketClient_DidReceiveData_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_DidReceiveData_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      bool p_fin{};
      WebSocket::MessageType p_type{};
      uint32_t p_num_bytes{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_fin = params->fin;
        p_type = static_cast<WebSocket::MessageType>(params->type.value);
        p_num_bytes = params->num_bytes;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::DidReceiveData");
      sink_->DidReceiveData(p_fin, p_type, p_num_bytes);
      return true;
    }
    case internal::kWebSocketClient_DidReceiveFlowControl_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.WebSocketClient.DidReceiveFlowControl", __FILE__, __LINE__);
      internal::WebSocketClient_DidReceiveFlowControl_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_DidReceiveFlowControl_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      int64_t p_quota{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_quota = params->quota;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::DidReceiveFlowControl");
      sink_->DidReceiveFlowControl(p_quota);
      return true;
    }
    case internal::kWebSocketClient_DidFail_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.WebSocketClient.DidFail", __FILE__, __LINE__);
      internal::WebSocketClient_DidFail_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_DidFail_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      mojo::String p_message{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        if (!Deserialize_(params->message.ptr, &p_message, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::DidFail");
      sink_->DidFail(p_message);
      return true;
    }
    case internal::kWebSocketClient_DidClose_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo.mojo.WebSocketClient.DidClose", __FILE__, __LINE__);
      internal::WebSocketClient_DidClose_Params_Data* params =
          reinterpret_cast<internal::WebSocketClient_DidClose_Params_Data*>(
              message->mutable_payload());

      params->DecodePointersAndHandles(message->mutable_handles());
      
      bool success = true;
      bool p_was_clean{};
      uint16_t p_code{};
      mojo::String p_reason{};
      do {
        // NOTE: The memory backing |params| may has be smaller than
        // |sizeof(*params)| if the message comes from an older version.
        p_was_clean = params->was_clean;
        p_code = params->code;
        if (!Deserialize_(params->reason.ptr, &p_reason, &serialization_context_))
          success = false;
      } while (false);
      if (!success)
        return false;
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebSocketClient::DidClose");
      sink_->DidClose(p_was_clean, p_code, p_reason);
      return true;
    }
  }
  return false;
}

bool WebSocketClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWebSocketClient_DidConnect_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::WebSocketClient::DidConnect", __FILE__, __LINE__);
      break;
    }
    case internal::kWebSocketClient_DidReceiveData_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::WebSocketClient::DidReceiveData", __FILE__, __LINE__);
      break;
    }
    case internal::kWebSocketClient_DidReceiveFlowControl_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::WebSocketClient::DidReceiveFlowControl", __FILE__, __LINE__);
      break;
    }
    case internal::kWebSocketClient_DidFail_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::WebSocketClient::DidFail", __FILE__, __LINE__);
      break;
    }
    case internal::kWebSocketClient_DidClose_Name: {
      mojo::internal::ScopedTaskTracking task_id("mojo::mojo::WebSocketClient::DidClose", __FILE__, __LINE__);
      break;
    }
  }
  return false;
}

WebSocketClientRequestValidator::WebSocketClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WebSocketClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWebSocketClient_DidConnect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_DidConnect_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocketClient_DidReceiveData_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_DidReceiveData_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocketClient_DidReceiveFlowControl_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_DidReceiveFlowControl_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocketClient_DidFail_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_DidFail_Params_Data>(message)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebSocketClient_DidClose_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(message))
        return false;
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebSocketClient_DidClose_Params_Data>(message)) {
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