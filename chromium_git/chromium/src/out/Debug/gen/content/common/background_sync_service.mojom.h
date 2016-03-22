// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_BACKGROUND_SYNC_SERVICE_MOJOM_H_
#define CONTENT_COMMON_BACKGROUND_SYNC_SERVICE_MOJOM_H_

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
#include "content/common/background_sync_service.mojom-internal.h"
#include "content/public/common/background_sync.mojom.h"
#include "content/public/common/service_worker_event_status.mojom.h"
namespace content {

  
enum class BackgroundSyncError : int32_t {
  NONE,
  STORAGE,
  NOT_FOUND,
  NO_SERVICE_WORKER,
  NOT_ALLOWED,
  MAX = BackgroundSyncError::NOT_ALLOWED,
};
  
inline std::ostream& operator<<(std::ostream& os, BackgroundSyncError value) {
  switch(value) {
    case BackgroundSyncError::NONE:
      return os << "BackgroundSyncError::NONE";
    case BackgroundSyncError::STORAGE:
      return os << "BackgroundSyncError::STORAGE";
    case BackgroundSyncError::NOT_FOUND:
      return os << "BackgroundSyncError::NOT_FOUND";
    case BackgroundSyncError::NO_SERVICE_WORKER:
      return os << "BackgroundSyncError::NO_SERVICE_WORKER";
    case BackgroundSyncError::NOT_ALLOWED:
      return os << "BackgroundSyncError::{NOT_ALLOWED, MAX}";
    default:
      return os << "Unknown BackgroundSyncError value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(BackgroundSyncError value) {
  return ::content::internal::BackgroundSyncError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class BackgroundSyncState : int32_t {
  PENDING,
  FIRING,
  UNREGISTERED_WHILE_FIRING,
  REREGISTERED_WHILE_FIRING,
  FAILED,
  SUCCESS,
  UNREGISTERED,
};
  
inline std::ostream& operator<<(std::ostream& os, BackgroundSyncState value) {
  switch(value) {
    case BackgroundSyncState::PENDING:
      return os << "BackgroundSyncState::PENDING";
    case BackgroundSyncState::FIRING:
      return os << "BackgroundSyncState::FIRING";
    case BackgroundSyncState::UNREGISTERED_WHILE_FIRING:
      return os << "BackgroundSyncState::UNREGISTERED_WHILE_FIRING";
    case BackgroundSyncState::REREGISTERED_WHILE_FIRING:
      return os << "BackgroundSyncState::REREGISTERED_WHILE_FIRING";
    case BackgroundSyncState::FAILED:
      return os << "BackgroundSyncState::FAILED";
    case BackgroundSyncState::SUCCESS:
      return os << "BackgroundSyncState::SUCCESS";
    case BackgroundSyncState::UNREGISTERED:
      return os << "BackgroundSyncState::UNREGISTERED";
    default:
      return os << "Unknown BackgroundSyncState value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(BackgroundSyncState value) {
  return ::content::internal::BackgroundSyncState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
  
enum class BackgroundSyncEventLastChance : int32_t {
  IS_NOT_LAST_CHANCE,
  IS_LAST_CHANCE,
};
  
inline std::ostream& operator<<(std::ostream& os, BackgroundSyncEventLastChance value) {
  switch(value) {
    case BackgroundSyncEventLastChance::IS_NOT_LAST_CHANCE:
      return os << "BackgroundSyncEventLastChance::IS_NOT_LAST_CHANCE";
    case BackgroundSyncEventLastChance::IS_LAST_CHANCE:
      return os << "BackgroundSyncEventLastChance::IS_LAST_CHANCE";
    default:
      return os << "Unknown BackgroundSyncEventLastChance value: " << static_cast<int32_t>(value);
  }
}
  
inline bool IsKnownEnumValue(BackgroundSyncEventLastChance value) {
  return ::content::internal::BackgroundSyncEventLastChance_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
class BackgroundSyncService;
using BackgroundSyncServicePtr = mojo::InterfacePtr<BackgroundSyncService>;
using BackgroundSyncServicePtrInfo = mojo::InterfacePtrInfo<BackgroundSyncService>;
using BackgroundSyncServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<BackgroundSyncService>;
using BackgroundSyncServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BackgroundSyncService>;

class BackgroundSyncServiceClient;
using BackgroundSyncServiceClientPtr = mojo::InterfacePtr<BackgroundSyncServiceClient>;
using BackgroundSyncServiceClientPtrInfo = mojo::InterfacePtrInfo<BackgroundSyncServiceClient>;
using BackgroundSyncServiceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<BackgroundSyncServiceClient>;
using BackgroundSyncServiceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<BackgroundSyncServiceClient>;


class BackgroundSyncServiceProxy;
class BackgroundSyncServiceStub;

class BackgroundSyncServiceRequestValidator;
class BackgroundSyncServiceResponseValidator;

class BackgroundSyncService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::BackgroundSyncService;

  using Proxy_ = BackgroundSyncServiceProxy;
  using Stub_ = BackgroundSyncServiceStub;

  using RequestValidator_ = BackgroundSyncServiceRequestValidator;
  using ResponseValidator_ = BackgroundSyncServiceResponseValidator;

  virtual ~BackgroundSyncService() {}

  using RegisterCallback = mojo::Callback<void(BackgroundSyncError, content::SyncRegistrationPtr)>;
  virtual void Register(content::SyncRegistrationPtr options, int64_t service_worker_registration_id, bool requested_from_service_worker, const RegisterCallback& callback) = 0;

  using GetRegistrationCallback = mojo::Callback<void(BackgroundSyncError, content::SyncRegistrationPtr)>;
  virtual void GetRegistration(const mojo::String& tag, int64_t service_worker_registration_id, const GetRegistrationCallback& callback) = 0;

  using GetRegistrationsCallback = mojo::Callback<void(BackgroundSyncError, mojo::Array<content::SyncRegistrationPtr>)>;
  virtual void GetRegistrations(int64_t service_worker_registration_id, const GetRegistrationsCallback& callback) = 0;

  using UnregisterCallback = mojo::Callback<void(BackgroundSyncError)>;
  virtual void Unregister(int64_t handle_id, int64_t service_worker_registration_id, const UnregisterCallback& callback) = 0;

  using DuplicateRegistrationHandleCallback = mojo::Callback<void(BackgroundSyncError, content::SyncRegistrationPtr)>;
  virtual void DuplicateRegistrationHandle(int64_t handle_id, const DuplicateRegistrationHandleCallback& callback) = 0;

  virtual void ReleaseRegistration(int64_t handle_id) = 0;

  using NotifyWhenFinishedCallback = mojo::Callback<void(BackgroundSyncError, BackgroundSyncState)>;
  virtual void NotifyWhenFinished(int64_t handle_id, const NotifyWhenFinishedCallback& callback) = 0;
};

class BackgroundSyncServiceClientProxy;
class BackgroundSyncServiceClientStub;

class BackgroundSyncServiceClientRequestValidator;
class BackgroundSyncServiceClientResponseValidator;

class BackgroundSyncServiceClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::BackgroundSyncServiceClient;

  using Proxy_ = BackgroundSyncServiceClientProxy;
  using Stub_ = BackgroundSyncServiceClientStub;

  using RequestValidator_ = BackgroundSyncServiceClientRequestValidator;
  using ResponseValidator_ = BackgroundSyncServiceClientResponseValidator;

  virtual ~BackgroundSyncServiceClient() {}

  using SyncCallback = mojo::Callback<void(content::ServiceWorkerEventStatus)>;
  virtual void Sync(int64_t handle_id, BackgroundSyncEventLastChance last_chance, const SyncCallback& callback) = 0;
};

class BackgroundSyncServiceProxy
    : public BackgroundSyncService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit BackgroundSyncServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Register(
      content::SyncRegistrationPtr options, int64_t service_worker_registration_id, bool requested_from_service_worker, const RegisterCallback& callback
  ) override;
  void GetRegistration(
      const mojo::String& tag, int64_t service_worker_registration_id, const GetRegistrationCallback& callback
  ) override;
  void GetRegistrations(
      int64_t service_worker_registration_id, const GetRegistrationsCallback& callback
  ) override;
  void Unregister(
      int64_t handle_id, int64_t service_worker_registration_id, const UnregisterCallback& callback
  ) override;
  void DuplicateRegistrationHandle(
      int64_t handle_id, const DuplicateRegistrationHandleCallback& callback
  ) override;
  void ReleaseRegistration(
      int64_t handle_id
  ) override;
  void NotifyWhenFinished(
      int64_t handle_id, const NotifyWhenFinishedCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class BackgroundSyncServiceClientProxy
    : public BackgroundSyncServiceClient,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit BackgroundSyncServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void Sync(
      int64_t handle_id, BackgroundSyncEventLastChance last_chance, const SyncCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class BackgroundSyncServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  BackgroundSyncServiceStub();
  ~BackgroundSyncServiceStub() override;
  void set_sink(BackgroundSyncService* sink) { sink_ = sink; }
  BackgroundSyncService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  BackgroundSyncService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BackgroundSyncServiceClientStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  BackgroundSyncServiceClientStub();
  ~BackgroundSyncServiceClientStub() override;
  void set_sink(BackgroundSyncServiceClient* sink) { sink_ = sink; }
  BackgroundSyncServiceClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  BackgroundSyncServiceClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BackgroundSyncServiceRequestValidator : public mojo::MessageFilter {
 public:
  explicit BackgroundSyncServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BackgroundSyncServiceClientRequestValidator : public mojo::MessageFilter {
 public:
  explicit BackgroundSyncServiceClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BackgroundSyncServiceResponseValidator : public mojo::MessageFilter {
 public:
  explicit BackgroundSyncServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BackgroundSyncServiceClientResponseValidator : public mojo::MessageFilter {
 public:
  explicit BackgroundSyncServiceClientResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace content

#endif  // CONTENT_COMMON_BACKGROUND_SYNC_SERVICE_MOJOM_H_