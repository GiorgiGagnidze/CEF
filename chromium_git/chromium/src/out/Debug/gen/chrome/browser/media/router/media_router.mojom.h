// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_MEDIA_ROUTER_MEDIA_ROUTER_MOJOM_H_
#define CHROME_BROWSER_MEDIA_ROUTER_MEDIA_ROUTER_MOJOM_H_

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
#include "chrome/browser/media/router/media_router.mojom-internal.h"
namespace media_router {
namespace interfaces {

class MediaRouteProvider;
using MediaRouteProviderPtr = mojo::InterfacePtr<MediaRouteProvider>;
using MediaRouteProviderPtrInfo = mojo::InterfacePtrInfo<MediaRouteProvider>;
using MediaRouteProviderAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaRouteProvider>;
using MediaRouteProviderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaRouteProvider>;

class MediaRouter;
using MediaRouterPtr = mojo::InterfacePtr<MediaRouter>;
using MediaRouterPtrInfo = mojo::InterfacePtrInfo<MediaRouter>;
using MediaRouterAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaRouter>;
using MediaRouterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaRouter>;

class MediaSink;
class MediaSink_Reader;

using MediaSinkPtr = mojo::StructPtr<MediaSink>;


class MediaRoute;
class MediaRoute_Reader;

using MediaRoutePtr = mojo::StructPtr<MediaRoute>;


class Issue;
class Issue_Reader;

using IssuePtr = mojo::StructPtr<Issue>;


class RouteMessage;
class RouteMessage_Reader;

using RouteMessagePtr = mojo::StructPtr<RouteMessage>;



class MediaRouteProviderProxy;
class MediaRouteProviderStub;

class MediaRouteProviderRequestValidator;
class MediaRouteProviderResponseValidator;

class MediaRouteProvider {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::media_router::interfaces::MediaRouteProvider;

  using Proxy_ = MediaRouteProviderProxy;
  using Stub_ = MediaRouteProviderStub;

  using RequestValidator_ = MediaRouteProviderRequestValidator;
  using ResponseValidator_ = MediaRouteProviderResponseValidator;

  virtual ~MediaRouteProvider() {}

  using CreateRouteCallback = mojo::Callback<void(MediaRoutePtr, mojo::String)>;
  virtual void CreateRoute(const mojo::String& media_source, const mojo::String& sink_id, const mojo::String& original_presentation_id, const mojo::String& origin, int32_t tab_id, const CreateRouteCallback& callback) = 0;

  using JoinRouteCallback = mojo::Callback<void(MediaRoutePtr, mojo::String)>;
  virtual void JoinRoute(const mojo::String& media_source, const mojo::String& presentation_id, const mojo::String& origin, int32_t tab_id, const JoinRouteCallback& callback) = 0;

  using ConnectRouteByRouteIdCallback = mojo::Callback<void(MediaRoutePtr, mojo::String)>;
  virtual void ConnectRouteByRouteId(const mojo::String& media_source, const mojo::String& route_id, const mojo::String& presentation_id, const mojo::String& origin, int32_t tab_id, const ConnectRouteByRouteIdCallback& callback) = 0;

  virtual void TerminateRoute(const mojo::String& route_id) = 0;

  using SendRouteMessageCallback = mojo::Callback<void(bool)>;
  virtual void SendRouteMessage(const mojo::String& media_route_id, const mojo::String& message, const SendRouteMessageCallback& callback) = 0;

  using SendRouteBinaryMessageCallback = mojo::Callback<void(bool)>;
  virtual void SendRouteBinaryMessage(const mojo::String& media_route_id, mojo::Array<uint8_t> data, const SendRouteBinaryMessageCallback& callback) = 0;

  virtual void StartObservingMediaSinks(const mojo::String& media_source) = 0;

  virtual void StopObservingMediaSinks(const mojo::String& media_source) = 0;

  virtual void StartObservingMediaRoutes(const mojo::String& media_source) = 0;

  virtual void StopObservingMediaRoutes(const mojo::String& media_source) = 0;

  using ListenForRouteMessagesCallback = mojo::Callback<void(mojo::Array<RouteMessagePtr>, bool)>;
  virtual void ListenForRouteMessages(const mojo::String& route_id, const ListenForRouteMessagesCallback& callback) = 0;

  virtual void StopListeningForRouteMessages(const mojo::String& route_id) = 0;

  virtual void DetachRoute(const mojo::String& route_id) = 0;
};

class MediaRouterProxy;
class MediaRouterStub;

class MediaRouterRequestValidator;
class MediaRouterResponseValidator;

class MediaRouter {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::media_router::interfaces::MediaRouter;

  using Proxy_ = MediaRouterProxy;
  using Stub_ = MediaRouterStub;

  using RequestValidator_ = MediaRouterRequestValidator;
  using ResponseValidator_ = MediaRouterResponseValidator;

  
  enum class SinkAvailability : int32_t {
    UNAVAILABLE,
    PER_SOURCE,
    AVAILABLE,
  };
  
  enum class PresentationConnectionState : int32_t {
    CONNECTING,
    CONNECTED,
    CLOSED,
    TERMINATED,
  };
  virtual ~MediaRouter() {}

  using RegisterMediaRouteProviderCallback = mojo::Callback<void(mojo::String)>;
  virtual void RegisterMediaRouteProvider(MediaRouteProviderPtr media_router_provider, const RegisterMediaRouteProviderCallback& callback) = 0;

  virtual void OnSinksReceived(const mojo::String& media_source, mojo::Array<MediaSinkPtr> sinks) = 0;

  virtual void OnIssue(IssuePtr issue) = 0;

  virtual void OnRoutesUpdated(mojo::Array<MediaRoutePtr> routes, const mojo::String& media_source, mojo::Array<mojo::String> joinable_route_ids) = 0;

  virtual void OnSinkAvailabilityUpdated(MediaRouter::SinkAvailability availability) = 0;

  virtual void OnPresentationConnectionStateChanged(const mojo::String& route_id, MediaRouter::PresentationConnectionState state) = 0;
};

class MediaRouteProviderProxy
    : public MediaRouteProvider,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit MediaRouteProviderProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateRoute(
      const mojo::String& media_source, const mojo::String& sink_id, const mojo::String& original_presentation_id, const mojo::String& origin, int32_t tab_id, const CreateRouteCallback& callback
  ) override;
  void JoinRoute(
      const mojo::String& media_source, const mojo::String& presentation_id, const mojo::String& origin, int32_t tab_id, const JoinRouteCallback& callback
  ) override;
  void ConnectRouteByRouteId(
      const mojo::String& media_source, const mojo::String& route_id, const mojo::String& presentation_id, const mojo::String& origin, int32_t tab_id, const ConnectRouteByRouteIdCallback& callback
  ) override;
  void TerminateRoute(
      const mojo::String& route_id
  ) override;
  void SendRouteMessage(
      const mojo::String& media_route_id, const mojo::String& message, const SendRouteMessageCallback& callback
  ) override;
  void SendRouteBinaryMessage(
      const mojo::String& media_route_id, mojo::Array<uint8_t> data, const SendRouteBinaryMessageCallback& callback
  ) override;
  void StartObservingMediaSinks(
      const mojo::String& media_source
  ) override;
  void StopObservingMediaSinks(
      const mojo::String& media_source
  ) override;
  void StartObservingMediaRoutes(
      const mojo::String& media_source
  ) override;
  void StopObservingMediaRoutes(
      const mojo::String& media_source
  ) override;
  void ListenForRouteMessages(
      const mojo::String& route_id, const ListenForRouteMessagesCallback& callback
  ) override;
  void StopListeningForRouteMessages(
      const mojo::String& route_id
  ) override;
  void DetachRoute(
      const mojo::String& route_id
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class MediaRouterProxy
    : public MediaRouter,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit MediaRouterProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterMediaRouteProvider(
      MediaRouteProviderPtr media_router_provider, const RegisterMediaRouteProviderCallback& callback
  ) override;
  void OnSinksReceived(
      const mojo::String& media_source, mojo::Array<MediaSinkPtr> sinks
  ) override;
  void OnIssue(
      IssuePtr issue
  ) override;
  void OnRoutesUpdated(
      mojo::Array<MediaRoutePtr> routes, const mojo::String& media_source, mojo::Array<mojo::String> joinable_route_ids
  ) override;
  void OnSinkAvailabilityUpdated(
      MediaRouter::SinkAvailability availability
  ) override;
  void OnPresentationConnectionStateChanged(
      const mojo::String& route_id, MediaRouter::PresentationConnectionState state
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class MediaRouteProviderStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  MediaRouteProviderStub();
  ~MediaRouteProviderStub() override;
  void set_sink(MediaRouteProvider* sink) { sink_ = sink; }
  MediaRouteProvider* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  MediaRouteProvider* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class MediaRouterStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  MediaRouterStub();
  ~MediaRouterStub() override;
  void set_sink(MediaRouter* sink) { sink_ = sink; }
  MediaRouter* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  MediaRouter* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class MediaRouteProviderRequestValidator : public mojo::MessageFilter {
 public:
  explicit MediaRouteProviderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class MediaRouterRequestValidator : public mojo::MessageFilter {
 public:
  explicit MediaRouterRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class MediaRouteProviderResponseValidator : public mojo::MessageFilter {
 public:
  explicit MediaRouteProviderResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class MediaRouterResponseValidator : public mojo::MessageFilter {
 public:
  explicit MediaRouterResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};








class MediaSink_Reader;

class MediaSink {
 public:
  using Data_ = internal::MediaSink_Data;
  using Reader = MediaSink_Reader;
  enum class IconType : int32_t {
    CAST,
    CAST_AUDIO,
    CAST_AUDIO_GROUP,
    GENERIC,
    HANGOUT,
  };

  static MediaSinkPtr New();

  template <typename U>
  static MediaSinkPtr From(const U& u) {
    return mojo::TypeConverter<MediaSinkPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaSink>::Convert(*this);
  }

  MediaSink();
  ~MediaSink();


  MediaSinkPtr Clone() const;
  bool Equals(const MediaSink& other) const;

  mojo::String sink_id;
  mojo::String name;
  mojo::String description;
  mojo::String domain;
  MediaSink::IconType icon_type;
};


class MediaRoute_Reader;

class MediaRoute {
 public:
  using Data_ = internal::MediaRoute_Data;
  using Reader = MediaRoute_Reader;

  static MediaRoutePtr New();

  template <typename U>
  static MediaRoutePtr From(const U& u) {
    return mojo::TypeConverter<MediaRoutePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MediaRoute>::Convert(*this);
  }

  MediaRoute();
  ~MediaRoute();


  MediaRoutePtr Clone() const;
  bool Equals(const MediaRoute& other) const;

  mojo::String media_route_id;
  mojo::String media_source;
  mojo::String media_sink_id;
  mojo::String description;
  bool is_local;
  mojo::String custom_controller_path;
  bool for_display;
};


class Issue_Reader;

class Issue {
 public:
  using Data_ = internal::Issue_Data;
  using Reader = Issue_Reader;
  enum class Severity : int32_t {
    FATAL,
    WARNING,
    NOTIFICATION,
  };
  enum class ActionType : int32_t {
    DISMISS,
    LEARN_MORE,
  };

  static IssuePtr New();

  template <typename U>
  static IssuePtr From(const U& u) {
    return mojo::TypeConverter<IssuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Issue>::Convert(*this);
  }

  Issue();
  ~Issue();


  IssuePtr Clone() const;
  bool Equals(const Issue& other) const;

  mojo::String route_id;
  Issue::Severity severity;
  bool is_blocking;
  mojo::String title;
  mojo::String message;
  Issue::ActionType default_action;
  mojo::Array<Issue::ActionType> secondary_actions;
  mojo::String help_url;
};


class RouteMessage_Reader;

class RouteMessage {
 public:
  using Data_ = internal::RouteMessage_Data;
  using Reader = RouteMessage_Reader;
  enum class Type : int32_t {
    TEXT,
    BINARY,
  };

  static RouteMessagePtr New();

  template <typename U>
  static RouteMessagePtr From(const U& u) {
    return mojo::TypeConverter<RouteMessagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RouteMessage>::Convert(*this);
  }

  RouteMessage();
  ~RouteMessage();


  RouteMessagePtr Clone() const;
  bool Equals(const RouteMessage& other) const;

  RouteMessage::Type type;
  mojo::String message;
  mojo::Array<uint8_t> data;
};


size_t GetSerializedSize_(const MediaSinkPtr& input);
void Serialize_(MediaSinkPtr input, mojo::internal::Buffer* buffer,
                internal::MediaSink_Data** output);
bool Deserialize_(internal::MediaSink_Data* input,
                  MediaSinkPtr* output,
                  mojo::internal::SerializationContext* context);


class MediaSink_Reader {
 public:
  MediaSink_Reader(internal::MediaSink_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (sink_id() omitted)
  // TODO(rockot): Support reading other object kinds. (name() omitted)
  // TODO(rockot): Support reading other object kinds. (description() omitted)
  // TODO(rockot): Support reading other object kinds. (domain() omitted)
  MediaSink::IconType icon_type() const {
    return static_cast<MediaSink::IconType>(data_->icon_type.value);
  }

 private:
  internal::MediaSink_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct MediaSink_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::MediaSink_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field sink_id";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field name";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field description";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field domain";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::MediaSink_Data** output) {
    internal::MediaSink_Data* result =
        internal::MediaSink_Data::New(buffer);
    result->sink_id = mojo::StructTraits<MediaSink, NativeType>
        ::sink_id(input);
    result->name = mojo::StructTraits<MediaSink, NativeType>
        ::name(input);
    result->description = mojo::StructTraits<MediaSink, NativeType>
        ::description(input);
    result->domain = mojo::StructTraits<MediaSink, NativeType>
        ::domain(input);
    result->icon_type = mojo::StructTraits<MediaSink, NativeType>
        ::icon_type(input);
    *output = result;
  }

  static bool Deserialize(internal::MediaSink_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<MediaSink, NativeType>::Read(
        MediaSink_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const MediaRoutePtr& input);
void Serialize_(MediaRoutePtr input, mojo::internal::Buffer* buffer,
                internal::MediaRoute_Data** output);
bool Deserialize_(internal::MediaRoute_Data* input,
                  MediaRoutePtr* output,
                  mojo::internal::SerializationContext* context);


class MediaRoute_Reader {
 public:
  MediaRoute_Reader(internal::MediaRoute_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (media_route_id() omitted)
  // TODO(rockot): Support reading other object kinds. (media_source() omitted)
  // TODO(rockot): Support reading other object kinds. (media_sink_id() omitted)
  // TODO(rockot): Support reading other object kinds. (description() omitted)
  bool is_local() const { return data_->is_local; }
  // TODO(rockot): Support reading other object kinds. (custom_controller_path() omitted)
  bool for_display() const { return data_->for_display; }

 private:
  internal::MediaRoute_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct MediaRoute_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::MediaRoute_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field media_route_id";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field media_source";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field media_sink_id";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field description";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field custom_controller_path";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::MediaRoute_Data** output) {
    internal::MediaRoute_Data* result =
        internal::MediaRoute_Data::New(buffer);
    result->media_route_id = mojo::StructTraits<MediaRoute, NativeType>
        ::media_route_id(input);
    result->media_source = mojo::StructTraits<MediaRoute, NativeType>
        ::media_source(input);
    result->media_sink_id = mojo::StructTraits<MediaRoute, NativeType>
        ::media_sink_id(input);
    result->description = mojo::StructTraits<MediaRoute, NativeType>
        ::description(input);
    result->is_local = mojo::StructTraits<MediaRoute, NativeType>
        ::is_local(input);
    result->custom_controller_path = mojo::StructTraits<MediaRoute, NativeType>
        ::custom_controller_path(input);
    result->for_display = mojo::StructTraits<MediaRoute, NativeType>
        ::for_display(input);
    *output = result;
  }

  static bool Deserialize(internal::MediaRoute_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<MediaRoute, NativeType>::Read(
        MediaRoute_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const IssuePtr& input);
void Serialize_(IssuePtr input, mojo::internal::Buffer* buffer,
                internal::Issue_Data** output);
bool Deserialize_(internal::Issue_Data* input,
                  IssuePtr* output,
                  mojo::internal::SerializationContext* context);


class Issue_Reader {
 public:
  Issue_Reader(internal::Issue_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading other object kinds. (route_id() omitted)
  Issue::Severity severity() const {
    return static_cast<Issue::Severity>(data_->severity.value);
  }
  bool is_blocking() const { return data_->is_blocking; }
  // TODO(rockot): Support reading other object kinds. (title() omitted)
  // TODO(rockot): Support reading other object kinds. (message() omitted)
  Issue::ActionType default_action() const {
    return static_cast<Issue::ActionType>(data_->default_action.value);
  }
  // TODO(rockot): Support reading other object kinds. (secondary_actions() omitted)
  // TODO(rockot): Support reading other object kinds. (help_url() omitted)

 private:
  internal::Issue_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct Issue_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::Issue_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field route_id";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field title";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field message";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field secondary_actions";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field help_url";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::Issue_Data** output) {
    internal::Issue_Data* result =
        internal::Issue_Data::New(buffer);
    result->route_id = mojo::StructTraits<Issue, NativeType>
        ::route_id(input);
    result->severity = mojo::StructTraits<Issue, NativeType>
        ::severity(input);
    result->is_blocking = mojo::StructTraits<Issue, NativeType>
        ::is_blocking(input);
    result->title = mojo::StructTraits<Issue, NativeType>
        ::title(input);
    result->message = mojo::StructTraits<Issue, NativeType>
        ::message(input);
    result->default_action = mojo::StructTraits<Issue, NativeType>
        ::default_action(input);
    result->secondary_actions = mojo::StructTraits<Issue, NativeType>
        ::secondary_actions(input);
    result->help_url = mojo::StructTraits<Issue, NativeType>
        ::help_url(input);
    *output = result;
  }

  static bool Deserialize(internal::Issue_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<Issue, NativeType>::Read(
        Issue_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const RouteMessagePtr& input);
void Serialize_(RouteMessagePtr input, mojo::internal::Buffer* buffer,
                internal::RouteMessage_Data** output);
bool Deserialize_(internal::RouteMessage_Data* input,
                  RouteMessagePtr* output,
                  mojo::internal::SerializationContext* context);


class RouteMessage_Reader {
 public:
  RouteMessage_Reader(internal::RouteMessage_Data* data,
                         mojo::internal::SerializationContext* context);
  RouteMessage::Type type() const {
    return static_cast<RouteMessage::Type>(data_->type.value);
  }
  // TODO(rockot): Support reading other object kinds. (message() omitted)
  // TODO(rockot): Support reading other object kinds. (data() omitted)

 private:
  internal::RouteMessage_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct RouteMessage_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::RouteMessage_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field message";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field data";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::RouteMessage_Data** output) {
    internal::RouteMessage_Data* result =
        internal::RouteMessage_Data::New(buffer);
    result->type = mojo::StructTraits<RouteMessage, NativeType>
        ::type(input);
    result->message = mojo::StructTraits<RouteMessage, NativeType>
        ::message(input);
    result->data = mojo::StructTraits<RouteMessage, NativeType>
        ::data(input);
    *output = result;
  }

  static bool Deserialize(internal::RouteMessage_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<RouteMessage, NativeType>::Read(
        RouteMessage_Reader(input, context), output);
  }
};  

inline std::ostream& operator<<(std::ostream& os, MediaSink::IconType value) {
  switch(value) {
    case MediaSink::IconType::CAST:
      return os << "MediaSink::IconType::CAST";
    case MediaSink::IconType::CAST_AUDIO:
      return os << "MediaSink::IconType::CAST_AUDIO";
    case MediaSink::IconType::CAST_AUDIO_GROUP:
      return os << "MediaSink::IconType::CAST_AUDIO_GROUP";
    case MediaSink::IconType::GENERIC:
      return os << "MediaSink::IconType::GENERIC";
    case MediaSink::IconType::HANGOUT:
      return os << "MediaSink::IconType::HANGOUT";
    default:
      return os << "Unknown MediaSink::IconType value: " << static_cast<int32_t>(value);
  }
}

inline bool IsKnownEnumValue(MediaSink::IconType value) {
  return ::media_router::interfaces::internal::MediaSink_Data::IconType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

inline std::ostream& operator<<(std::ostream& os, Issue::Severity value) {
  switch(value) {
    case Issue::Severity::FATAL:
      return os << "Issue::Severity::FATAL";
    case Issue::Severity::WARNING:
      return os << "Issue::Severity::WARNING";
    case Issue::Severity::NOTIFICATION:
      return os << "Issue::Severity::NOTIFICATION";
    default:
      return os << "Unknown Issue::Severity value: " << static_cast<int32_t>(value);
  }
}

inline bool IsKnownEnumValue(Issue::Severity value) {
  return ::media_router::interfaces::internal::Issue_Data::Severity_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

inline std::ostream& operator<<(std::ostream& os, Issue::ActionType value) {
  switch(value) {
    case Issue::ActionType::DISMISS:
      return os << "Issue::ActionType::DISMISS";
    case Issue::ActionType::LEARN_MORE:
      return os << "Issue::ActionType::LEARN_MORE";
    default:
      return os << "Unknown Issue::ActionType value: " << static_cast<int32_t>(value);
  }
}

inline bool IsKnownEnumValue(Issue::ActionType value) {
  return ::media_router::interfaces::internal::Issue_Data::ActionType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

inline std::ostream& operator<<(std::ostream& os, RouteMessage::Type value) {
  switch(value) {
    case RouteMessage::Type::TEXT:
      return os << "RouteMessage::Type::TEXT";
    case RouteMessage::Type::BINARY:
      return os << "RouteMessage::Type::BINARY";
    default:
      return os << "Unknown RouteMessage::Type value: " << static_cast<int32_t>(value);
  }
}

inline bool IsKnownEnumValue(RouteMessage::Type value) {
  return ::media_router::interfaces::internal::RouteMessage_Data::Type_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

inline std::ostream& operator<<(std::ostream& os, MediaRouter::SinkAvailability value) {
  switch(value) {
    case MediaRouter::SinkAvailability::UNAVAILABLE:
      return os << "MediaRouter::SinkAvailability::UNAVAILABLE";
    case MediaRouter::SinkAvailability::PER_SOURCE:
      return os << "MediaRouter::SinkAvailability::PER_SOURCE";
    case MediaRouter::SinkAvailability::AVAILABLE:
      return os << "MediaRouter::SinkAvailability::AVAILABLE";
    default:
      return os << "Unknown MediaRouter::SinkAvailability value: " << static_cast<int32_t>(value);
  }
}

inline bool IsKnownEnumValue(MediaRouter::SinkAvailability value) {
  return ::media_router::interfaces::internal::MediaRouter_Data::SinkAvailability_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

inline std::ostream& operator<<(std::ostream& os, MediaRouter::PresentationConnectionState value) {
  switch(value) {
    case MediaRouter::PresentationConnectionState::CONNECTING:
      return os << "MediaRouter::PresentationConnectionState::CONNECTING";
    case MediaRouter::PresentationConnectionState::CONNECTED:
      return os << "MediaRouter::PresentationConnectionState::CONNECTED";
    case MediaRouter::PresentationConnectionState::CLOSED:
      return os << "MediaRouter::PresentationConnectionState::CLOSED";
    case MediaRouter::PresentationConnectionState::TERMINATED:
      return os << "MediaRouter::PresentationConnectionState::TERMINATED";
    default:
      return os << "Unknown MediaRouter::PresentationConnectionState value: " << static_cast<int32_t>(value);
  }
}

inline bool IsKnownEnumValue(MediaRouter::PresentationConnectionState value) {
  return ::media_router::interfaces::internal::MediaRouter_Data::PresentationConnectionState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace interfaces
}  // namespace media_router

#endif  // CHROME_BROWSER_MEDIA_ROUTER_MEDIA_ROUTER_MOJOM_H_