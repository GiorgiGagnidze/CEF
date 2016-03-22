// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_PERMISSION_SERVICE_MOJOM_H_
#define CONTENT_COMMON_PERMISSION_SERVICE_MOJOM_H_

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
#include "content/common/permission_service.mojom-internal.h"
#include "content/public/common/permission_status.mojom.h"
namespace content {

  
enum class PermissionName : int32_t {
  GEOLOCATION,
  NOTIFICATIONS,
  PUSH_NOTIFICATIONS,
  MIDI,
  MIDI_SYSEX,
  PROTECTED_MEDIA_IDENTIFIER,
  DURABLE_STORAGE,
  AUDIO_CAPTURE,
  VIDEO_CAPTURE,
};
  
inline std::ostream& operator<<(std::ostream& os, PermissionName value) {
  switch(value) {
    case PermissionName::GEOLOCATION:
      return os << "PermissionName::GEOLOCATION";
    case PermissionName::NOTIFICATIONS:
      return os << "PermissionName::NOTIFICATIONS";
    case PermissionName::PUSH_NOTIFICATIONS:
      return os << "PermissionName::PUSH_NOTIFICATIONS";
    case PermissionName::MIDI:
      return os << "PermissionName::MIDI";
    case PermissionName::MIDI_SYSEX:
      return os << "PermissionName::MIDI_SYSEX";
    case PermissionName::PROTECTED_MEDIA_IDENTIFIER:
      return os << "PermissionName::PROTECTED_MEDIA_IDENTIFIER";
    case PermissionName::DURABLE_STORAGE:
      return os << "PermissionName::DURABLE_STORAGE";
    case PermissionName::AUDIO_CAPTURE:
      return os << "PermissionName::AUDIO_CAPTURE";
    case PermissionName::VIDEO_CAPTURE:
      return os << "PermissionName::VIDEO_CAPTURE";
    default:
      return os << "Unknown PermissionName value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(PermissionName value) {
  return ::content::internal::PermissionName_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class PermissionService;
using PermissionServicePtr = mojo::InterfacePtr<PermissionService>;
using PermissionServicePtrInfo = mojo::InterfacePtrInfo<PermissionService>;
using PermissionServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<PermissionService>;
using PermissionServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PermissionService>;


class PermissionServiceProxy;
class PermissionServiceStub;

class PermissionServiceRequestValidator;
class PermissionServiceResponseValidator;

class PermissionService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::PermissionService;

  using Proxy_ = PermissionServiceProxy;
  using Stub_ = PermissionServiceStub;

  using RequestValidator_ = PermissionServiceRequestValidator;
  using ResponseValidator_ = PermissionServiceResponseValidator;

  virtual ~PermissionService() {}

  using HasPermissionCallback = mojo::Callback<void(content::PermissionStatus)>;
  virtual void HasPermission(PermissionName permission, const mojo::String& origin, const HasPermissionCallback& callback) = 0;

  using RequestPermissionCallback = mojo::Callback<void(content::PermissionStatus)>;
  virtual void RequestPermission(PermissionName permission, const mojo::String& origin, bool user_gesture, const RequestPermissionCallback& callback) = 0;

  using RequestPermissionsCallback = mojo::Callback<void(mojo::Array<content::PermissionStatus>)>;
  virtual void RequestPermissions(mojo::Array<PermissionName> permission, const mojo::String& origin, bool user_gesture, const RequestPermissionsCallback& callback) = 0;

  using RevokePermissionCallback = mojo::Callback<void(content::PermissionStatus)>;
  virtual void RevokePermission(PermissionName permission, const mojo::String& origin, const RevokePermissionCallback& callback) = 0;

  using GetNextPermissionChangeCallback = mojo::Callback<void(content::PermissionStatus)>;
  virtual void GetNextPermissionChange(PermissionName permission, const mojo::String& origin, content::PermissionStatus last_known_status, const GetNextPermissionChangeCallback& callback) = 0;
};

class PermissionServiceProxy
    : public PermissionService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit PermissionServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void HasPermission(
      PermissionName permission, const mojo::String& origin, const HasPermissionCallback& callback
  ) override;
  void RequestPermission(
      PermissionName permission, const mojo::String& origin, bool user_gesture, const RequestPermissionCallback& callback
  ) override;
  void RequestPermissions(
      mojo::Array<PermissionName> permission, const mojo::String& origin, bool user_gesture, const RequestPermissionsCallback& callback
  ) override;
  void RevokePermission(
      PermissionName permission, const mojo::String& origin, const RevokePermissionCallback& callback
  ) override;
  void GetNextPermissionChange(
      PermissionName permission, const mojo::String& origin, content::PermissionStatus last_known_status, const GetNextPermissionChangeCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class PermissionServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  PermissionServiceStub();
  ~PermissionServiceStub() override;
  void set_sink(PermissionService* sink) { sink_ = sink; }
  PermissionService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PermissionService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class PermissionServiceRequestValidator : public mojo::MessageFilter {
 public:
  explicit PermissionServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class PermissionServiceResponseValidator : public mojo::MessageFilter {
 public:
  explicit PermissionServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace content

#endif  // CONTENT_COMMON_PERMISSION_SERVICE_MOJOM_H_