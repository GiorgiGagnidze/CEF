// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_SHELL_PUBLIC_INTERFACES_APPLICATION_MANAGER_MOJOM_H_
#define MOJO_SHELL_PUBLIC_INTERFACES_APPLICATION_MANAGER_MOJOM_H_

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
#include "mojo/shell/public/interfaces/application_manager.mojom-internal.h"
#include "mojo/shell/public/interfaces/shell.mojom.h"
namespace mojo {
namespace shell {
namespace mojom {

class ApplicationManagerListener;
using ApplicationManagerListenerPtr = mojo::InterfacePtr<ApplicationManagerListener>;
using ApplicationManagerListenerPtrInfo = mojo::InterfacePtrInfo<ApplicationManagerListener>;
using ApplicationManagerListenerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ApplicationManagerListener>;
using ApplicationManagerListenerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ApplicationManagerListener>;

class PIDReceiver;
using PIDReceiverPtr = mojo::InterfacePtr<PIDReceiver>;
using PIDReceiverPtrInfo = mojo::InterfacePtrInfo<PIDReceiver>;
using PIDReceiverAssociatedPtr =
    mojo::AssociatedInterfacePtr<PIDReceiver>;
using PIDReceiverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PIDReceiver>;

class ApplicationManager;
using ApplicationManagerPtr = mojo::InterfacePtr<ApplicationManager>;
using ApplicationManagerPtrInfo = mojo::InterfacePtrInfo<ApplicationManager>;
using ApplicationManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<ApplicationManager>;
using ApplicationManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ApplicationManager>;

class ApplicationInfo;
class ApplicationInfo_Reader;

using ApplicationInfoPtr = mojo::StructPtr<ApplicationInfo>;



class ApplicationManagerListenerProxy;
class ApplicationManagerListenerStub;

class ApplicationManagerListenerRequestValidator;

class ApplicationManagerListener {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::shell::mojom::ApplicationManagerListener;

  using Proxy_ = ApplicationManagerListenerProxy;
  using Stub_ = ApplicationManagerListenerStub;

  using RequestValidator_ = ApplicationManagerListenerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~ApplicationManagerListener() {}

  virtual void SetRunningApplications(mojo::Array<ApplicationInfoPtr> applications) = 0;

  virtual void ApplicationInstanceCreated(ApplicationInfoPtr application) = 0;

  virtual void ApplicationInstanceDestroyed(uint32_t id) = 0;

  virtual void ApplicationPIDAvailable(uint32_t id, uint32_t pid) = 0;
};

class PIDReceiverProxy;
class PIDReceiverStub;

class PIDReceiverRequestValidator;

class PIDReceiver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::shell::mojom::PIDReceiver;

  using Proxy_ = PIDReceiverProxy;
  using Stub_ = PIDReceiverStub;

  using RequestValidator_ = PIDReceiverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~PIDReceiver() {}

  virtual void SetPID(uint32_t pid) = 0;
};

class ApplicationManagerProxy;
class ApplicationManagerStub;

class ApplicationManagerRequestValidator;

class ApplicationManager {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::mojo::shell::mojom::ApplicationManager;

  using Proxy_ = ApplicationManagerProxy;
  using Stub_ = ApplicationManagerStub;

  using RequestValidator_ = ApplicationManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~ApplicationManager() {}

  virtual void CreateInstanceForHandle(mojo::ScopedHandle channel, const mojo::String& url, mojo::CapabilityFilterPtr filter, mojo::InterfaceRequest<PIDReceiver> pid_receiver) = 0;

  virtual void AddListener(ApplicationManagerListenerPtr listener) = 0;
};

class ApplicationManagerListenerProxy
    : public ApplicationManagerListener,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ApplicationManagerListenerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetRunningApplications(
      mojo::Array<ApplicationInfoPtr> applications
  ) override;
  void ApplicationInstanceCreated(
      ApplicationInfoPtr application
  ) override;
  void ApplicationInstanceDestroyed(
      uint32_t id
  ) override;
  void ApplicationPIDAvailable(
      uint32_t id, uint32_t pid
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class PIDReceiverProxy
    : public PIDReceiver,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit PIDReceiverProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetPID(
      uint32_t pid
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class ApplicationManagerProxy
    : public ApplicationManager,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit ApplicationManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateInstanceForHandle(
      mojo::ScopedHandle channel, const mojo::String& url, mojo::CapabilityFilterPtr filter, mojo::InterfaceRequest<PIDReceiver> pid_receiver
  ) override;
  void AddListener(
      ApplicationManagerListenerPtr listener
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class ApplicationManagerListenerStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ApplicationManagerListenerStub();
  ~ApplicationManagerListenerStub() override;
  void set_sink(ApplicationManagerListener* sink) { sink_ = sink; }
  ApplicationManagerListener* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ApplicationManagerListener* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class PIDReceiverStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  PIDReceiverStub();
  ~PIDReceiverStub() override;
  void set_sink(PIDReceiver* sink) { sink_ = sink; }
  PIDReceiver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PIDReceiver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ApplicationManagerStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  ApplicationManagerStub();
  ~ApplicationManagerStub() override;
  void set_sink(ApplicationManager* sink) { sink_ = sink; }
  ApplicationManager* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ApplicationManager* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class ApplicationManagerListenerRequestValidator : public mojo::MessageFilter {
 public:
  explicit ApplicationManagerListenerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class PIDReceiverRequestValidator : public mojo::MessageFilter {
 public:
  explicit PIDReceiverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class ApplicationManagerRequestValidator : public mojo::MessageFilter {
 public:
  explicit ApplicationManagerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class ApplicationInfo_Reader;

class ApplicationInfo {
 public:
  using Data_ = internal::ApplicationInfo_Data;
  using Reader = ApplicationInfo_Reader;

  static ApplicationInfoPtr New();

  template <typename U>
  static ApplicationInfoPtr From(const U& u) {
    return mojo::TypeConverter<ApplicationInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ApplicationInfo>::Convert(*this);
  }

  ApplicationInfo();
  ~ApplicationInfo();


  ApplicationInfoPtr Clone() const;
  bool Equals(const ApplicationInfo& other) const;

  uint32_t id;
  mojo::String url;
  mojo::String qualifier;
  uint32_t pid;
  mojo::String name;
};


size_t GetSerializedSize_(const ApplicationInfoPtr& input);
void Serialize_(ApplicationInfoPtr input, mojo::internal::Buffer* buffer,
                internal::ApplicationInfo_Data** output);
bool Deserialize_(internal::ApplicationInfo_Data* input,
                  ApplicationInfoPtr* output,
                  mojo::internal::SerializationContext* context);


class ApplicationInfo_Reader {
 public:
  ApplicationInfo_Reader(internal::ApplicationInfo_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t id() const { return data_->id; }
  // TODO(rockot): Support reading other object kinds. (url() omitted)
  // TODO(rockot): Support reading other object kinds. (qualifier() omitted)
  uint32_t pid() const { return data_->pid; }
  // TODO(rockot): Support reading other object kinds. (name() omitted)

 private:
  internal::ApplicationInfo_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct ApplicationInfo_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::ApplicationInfo_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field url";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field qualifier";
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field name";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::ApplicationInfo_Data** output) {
    internal::ApplicationInfo_Data* result =
        internal::ApplicationInfo_Data::New(buffer);
    result->id = mojo::StructTraits<ApplicationInfo, NativeType>
        ::id(input);
    result->url = mojo::StructTraits<ApplicationInfo, NativeType>
        ::url(input);
    result->qualifier = mojo::StructTraits<ApplicationInfo, NativeType>
        ::qualifier(input);
    result->pid = mojo::StructTraits<ApplicationInfo, NativeType>
        ::pid(input);
    result->name = mojo::StructTraits<ApplicationInfo, NativeType>
        ::name(input);
    *output = result;
  }

  static bool Deserialize(internal::ApplicationInfo_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<ApplicationInfo, NativeType>::Read(
        ApplicationInfo_Reader(input, context), output);
  }
};  
}  // namespace mojom
}  // namespace shell
}  // namespace mojo

#endif  // MOJO_SHELL_PUBLIC_INTERFACES_APPLICATION_MANAGER_MOJOM_H_