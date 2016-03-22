// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_PRESENTATION_PRESENTATION_SERVICE_MOJOM_H_
#define CONTENT_COMMON_PRESENTATION_PRESENTATION_SERVICE_MOJOM_H_

#include <stdint.h>
#include <ostream>

#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/callback.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/native_serialization.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "content/common/presentation/presentation_service.mojom-internal.h"
namespace presentation {

  
enum class PresentationConnectionState : int32_t {
  CONNECTING,
  CONNECTED,
  CLOSED,
  TERMINATED,
};
  
inline std::ostream& operator<<(std::ostream& os, PresentationConnectionState value) {
  switch(value) {
    case PresentationConnectionState::CONNECTING:
      return os << "PresentationConnectionState::CONNECTING";
    case PresentationConnectionState::CONNECTED:
      return os << "PresentationConnectionState::CONNECTED";
    case PresentationConnectionState::CLOSED:
      return os << "PresentationConnectionState::CLOSED";
    case PresentationConnectionState::TERMINATED:
      return os << "PresentationConnectionState::TERMINATED";
    default:
      return os << "Unknown PresentationConnectionState value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(PresentationConnectionState value) {
  return ::presentation::internal::PresentationConnectionState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class PresentationErrorType : int32_t {
  NO_AVAILABLE_SCREENS,
  SESSION_REQUEST_CANCELLED,
  NO_PRESENTATION_FOUND,
  UNKNOWN,
};
  
inline std::ostream& operator<<(std::ostream& os, PresentationErrorType value) {
  switch(value) {
    case PresentationErrorType::NO_AVAILABLE_SCREENS:
      return os << "PresentationErrorType::NO_AVAILABLE_SCREENS";
    case PresentationErrorType::SESSION_REQUEST_CANCELLED:
      return os << "PresentationErrorType::SESSION_REQUEST_CANCELLED";
    case PresentationErrorType::NO_PRESENTATION_FOUND:
      return os << "PresentationErrorType::NO_PRESENTATION_FOUND";
    case PresentationErrorType::UNKNOWN:
      return os << "PresentationErrorType::UNKNOWN";
    default:
      return os << "Unknown PresentationErrorType value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(PresentationErrorType value) {
  return ::presentation::internal::PresentationErrorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class PresentationMessageType : int32_t {
  TEXT,
  ARRAY_BUFFER,
  BLOB,
};
  
inline std::ostream& operator<<(std::ostream& os, PresentationMessageType value) {
  switch(value) {
    case PresentationMessageType::TEXT:
      return os << "PresentationMessageType::TEXT";
    case PresentationMessageType::ARRAY_BUFFER:
      return os << "PresentationMessageType::ARRAY_BUFFER";
    case PresentationMessageType::BLOB:
      return os << "PresentationMessageType::BLOB";
    default:
      return os << "Unknown PresentationMessageType value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(PresentationMessageType value) {
  return ::presentation::internal::PresentationMessageType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class PresentationService;
using PresentationServicePtr = mojo::InterfacePtr<PresentationService>;
using PresentationServicePtrInfo = mojo::InterfacePtrInfo<PresentationService>;
using PresentationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PresentationService>;
using PresentationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PresentationService>;

class PresentationServiceClient;
using PresentationServiceClientPtr = mojo::InterfacePtr<PresentationServiceClient>;
using PresentationServiceClientPtrInfo = mojo::InterfacePtrInfo<PresentationServiceClient>;
using PresentationServiceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<PresentationServiceClient>;
using PresentationServiceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PresentationServiceClient>;

class PresentationSessionInfo;
class PresentationSessionInfo_Reader;

using PresentationSessionInfoPtr = mojo::InlinedStructPtr<PresentationSessionInfo>;


class PresentationError;
class PresentationError_Reader;

using PresentationErrorPtr = mojo::InlinedStructPtr<PresentationError>;


class SessionMessage;
class SessionMessage_Reader;

using SessionMessagePtr = mojo::StructPtr<SessionMessage>;



class PresentationServiceProxy;
class PresentationServiceStub;

class PresentationServiceRequestValidator;
class PresentationServiceResponseValidator;

class PresentationService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::presentation::PresentationService;

  using Proxy_ = PresentationServiceProxy;
  using Stub_ = PresentationServiceStub;

  using RequestValidator_ = PresentationServiceRequestValidator;
  using ResponseValidator_ = PresentationServiceResponseValidator;

  virtual ~PresentationService() {}

  virtual void SetClient(PresentationServiceClientPtr client) = 0;

  virtual void SetDefaultPresentationURL(const mojo::String& url) = 0;

  virtual void ListenForScreenAvailability(const mojo::String& url) = 0;

  virtual void StopListeningForScreenAvailability(const mojo::String& url) = 0;

  using StartSessionCallback = mojo::Callback<void(PresentationSessionInfoPtr, PresentationErrorPtr)>;
  virtual void StartSession(const mojo::String& presentation_url, const StartSessionCallback& callback) = 0;

  using JoinSessionCallback = mojo::Callback<void(PresentationSessionInfoPtr, PresentationErrorPtr)>;
  virtual void JoinSession(const mojo::String& presentation_url, const mojo::String& presentation_id, const JoinSessionCallback& callback) = 0;

  using SendSessionMessageCallback = mojo::Callback<void(bool)>;
  virtual void SendSessionMessage(PresentationSessionInfoPtr sessionInfo, SessionMessagePtr message_request, const SendSessionMessageCallback& callback) = 0;

  virtual void CloseConnection(const mojo::String& presentation_url, const mojo::String& presentation_id) = 0;

  virtual void Terminate(const mojo::String& presentation_url, const mojo::String& presentation_id) = 0;

  virtual void ListenForSessionMessages(PresentationSessionInfoPtr sessionInfo) = 0;
};

class PresentationServiceClientProxy;
class PresentationServiceClientStub;

class PresentationServiceClientRequestValidator;

class PresentationServiceClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::presentation::PresentationServiceClient;

  using Proxy_ = PresentationServiceClientProxy;
  using Stub_ = PresentationServiceClientStub;

  using RequestValidator_ = PresentationServiceClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~PresentationServiceClient() {}

  virtual void OnScreenAvailabilityNotSupported(const mojo::String& url) = 0;

  virtual void OnScreenAvailabilityUpdated(const mojo::String& url, bool available) = 0;

  virtual void OnConnectionStateChanged(PresentationSessionInfoPtr connection, PresentationConnectionState newState) = 0;

  virtual void OnSessionMessagesReceived(PresentationSessionInfoPtr sessionInfo, mojo::Array<SessionMessagePtr> messages) = 0;

  virtual void OnDefaultSessionStarted(PresentationSessionInfoPtr sessionInfo) = 0;
};

class PresentationServiceProxy
    : public PresentationService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit PresentationServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(
      PresentationServiceClientPtr client
  ) override;
  void SetDefaultPresentationURL(
      const mojo::String& url
  ) override;
  void ListenForScreenAvailability(
      const mojo::String& url
  ) override;
  void StopListeningForScreenAvailability(
      const mojo::String& url
  ) override;
  void StartSession(
      const mojo::String& presentation_url, const StartSessionCallback& callback
  ) override;
  void JoinSession(
      const mojo::String& presentation_url, const mojo::String& presentation_id, const JoinSessionCallback& callback
  ) override;
  void SendSessionMessage(
      PresentationSessionInfoPtr sessionInfo, SessionMessagePtr message_request, const SendSessionMessageCallback& callback
  ) override;
  void CloseConnection(
      const mojo::String& presentation_url, const mojo::String& presentation_id
  ) override;
  void Terminate(
      const mojo::String& presentation_url, const mojo::String& presentation_id
  ) override;
  void ListenForSessionMessages(
      PresentationSessionInfoPtr sessionInfo
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class PresentationServiceClientProxy
    : public PresentationServiceClient,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit PresentationServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnScreenAvailabilityNotSupported(
      const mojo::String& url
  ) override;
  void OnScreenAvailabilityUpdated(
      const mojo::String& url, bool available
  ) override;
  void OnConnectionStateChanged(
      PresentationSessionInfoPtr connection, PresentationConnectionState newState
  ) override;
  void OnSessionMessagesReceived(
      PresentationSessionInfoPtr sessionInfo, mojo::Array<SessionMessagePtr> messages
  ) override;
  void OnDefaultSessionStarted(
      PresentationSessionInfoPtr sessionInfo
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class PresentationServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  PresentationServiceStub();
  ~PresentationServiceStub() override;
  void set_sink(PresentationService* sink) { sink_ = sink; }
  PresentationService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PresentationService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class PresentationServiceClientStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  PresentationServiceClientStub();
  ~PresentationServiceClientStub() override;
  void set_sink(PresentationServiceClient* sink) { sink_ = sink; }
  PresentationServiceClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PresentationServiceClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class PresentationServiceRequestValidator : public mojo::MessageFilter {
 public:
  explicit PresentationServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class PresentationServiceClientRequestValidator : public mojo::MessageFilter {
 public:
  explicit PresentationServiceClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class PresentationServiceResponseValidator : public mojo::MessageFilter {
 public:
  explicit PresentationServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



class PresentationSessionInfo_Reader;

class PresentationSessionInfo {
 public:
  using Data_ = internal::PresentationSessionInfo_Data;
  using Reader = PresentationSessionInfo_Reader;

  static PresentationSessionInfoPtr New();

  template <typename U>
  static PresentationSessionInfoPtr From(const U& u) {
    return mojo::TypeConverter<PresentationSessionInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PresentationSessionInfo>::Convert(*this);
  }

  PresentationSessionInfo();
  ~PresentationSessionInfo();


  PresentationSessionInfoPtr Clone() const;
  bool Equals(const PresentationSessionInfo& other) const;

  mojo::String url;
  mojo::String id;
};


class PresentationError_Reader;

class PresentationError {
 public:
  using Data_ = internal::PresentationError_Data;
  using Reader = PresentationError_Reader;

  static PresentationErrorPtr New();

  template <typename U>
  static PresentationErrorPtr From(const U& u) {
    return mojo::TypeConverter<PresentationErrorPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PresentationError>::Convert(*this);
  }

  PresentationError();
  ~PresentationError();


  PresentationErrorPtr Clone() const;
  bool Equals(const PresentationError& other) const;

  PresentationErrorType error_type;
  mojo::String message;
};






class SessionMessage_Reader;

class SessionMessage {
 public:
  using Data_ = internal::SessionMessage_Data;
  using Reader = SessionMessage_Reader;

  static SessionMessagePtr New();

  template <typename U>
  static SessionMessagePtr From(const U& u) {
    return mojo::TypeConverter<SessionMessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SessionMessage>::Convert(*this);
  }

  SessionMessage();
  ~SessionMessage();


  SessionMessagePtr Clone() const;
  bool Equals(const SessionMessage& other) const;

  PresentationMessageType type;
  mojo::String message;
  mojo::Array<uint8_t> data;
};


size_t GetSerializedSize_(const PresentationSessionInfoPtr& input);
void Serialize_(PresentationSessionInfoPtr input, mojo::internal::Buffer* buffer,
                internal::PresentationSessionInfo_Data** output);
bool Deserialize_(internal::PresentationSessionInfo_Data* input,
                  PresentationSessionInfoPtr* output,
                  mojo::internal::SerializationContext* context);


class PresentationSessionInfo_Reader {
 public:
  PresentationSessionInfo_Reader(internal::PresentationSessionInfo_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (url() omitted)
  // TODO(rockot): Support reading other object kinds. (id() omitted)

 private:
  internal::PresentationSessionInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct PresentationSessionInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::PresentationSessionInfo_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field url";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field id";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::PresentationSessionInfo_Data** output) {
    internal::PresentationSessionInfo_Data* result =
        internal::PresentationSessionInfo_Data::New(buffer);
    result->url = mojo::StructTraits<PresentationSessionInfo, NativeType>
        ::url(input);
    result->id = mojo::StructTraits<PresentationSessionInfo, NativeType>
        ::id(input);
    *output = result;
  }

  static bool Deserialize(internal::PresentationSessionInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<PresentationSessionInfo, NativeType>::Read(
        PresentationSessionInfo_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const PresentationErrorPtr& input);
void Serialize_(PresentationErrorPtr input, mojo::internal::Buffer* buffer,
                internal::PresentationError_Data** output);
bool Deserialize_(internal::PresentationError_Data* input,
                  PresentationErrorPtr* output,
                  mojo::internal::SerializationContext* context);


class PresentationError_Reader {
 public:
  PresentationError_Reader(internal::PresentationError_Data* data,
                         mojo::internal::SerializationContext* context);
  PresentationErrorType error_type() const {
    return static_cast<PresentationErrorType>(data_->error_type.value);
  }
  // TODO(rockot): Support reading other object kinds. (message() omitted)

 private:
  internal::PresentationError_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct PresentationError_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::PresentationError_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field message";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::PresentationError_Data** output) {
    internal::PresentationError_Data* result =
        internal::PresentationError_Data::New(buffer);
    result->error_type = mojo::StructTraits<PresentationError, NativeType>
        ::error_type(input);
    result->message = mojo::StructTraits<PresentationError, NativeType>
        ::message(input);
    *output = result;
  }

  static bool Deserialize(internal::PresentationError_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<PresentationError, NativeType>::Read(
        PresentationError_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const SessionMessagePtr& input);
void Serialize_(SessionMessagePtr input, mojo::internal::Buffer* buffer,
                internal::SessionMessage_Data** output);
bool Deserialize_(internal::SessionMessage_Data* input,
                  SessionMessagePtr* output,
                  mojo::internal::SerializationContext* context);


class SessionMessage_Reader {
 public:
  SessionMessage_Reader(internal::SessionMessage_Data* data,
                         mojo::internal::SerializationContext* context);
  PresentationMessageType type() const {
    return static_cast<PresentationMessageType>(data_->type.value);
  }
  // TODO(rockot): Support reading other object kinds. (message() omitted)
  // TODO(rockot): Support reading other object kinds. (data() omitted)

 private:
  internal::SessionMessage_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct SessionMessage_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::SessionMessage_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field message";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field data";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::SessionMessage_Data** output) {
    internal::SessionMessage_Data* result =
        internal::SessionMessage_Data::New(buffer);
    result->type = mojo::StructTraits<SessionMessage, NativeType>
        ::type(input);
    result->message = mojo::StructTraits<SessionMessage, NativeType>
        ::message(input);
    result->data = mojo::StructTraits<SessionMessage, NativeType>
        ::data(input);
    *output = result;
  }

  static bool Deserialize(internal::SessionMessage_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<SessionMessage, NativeType>::Read(
        SessionMessage_Reader(input, context), output);
  }
};  
}  // namespace presentation

#endif  // CONTENT_COMMON_PRESENTATION_PRESENTATION_SERVICE_MOJOM_H_