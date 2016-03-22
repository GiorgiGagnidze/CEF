// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_GEOLOCATION_SERVICE_MOJOM_H_
#define CONTENT_COMMON_GEOLOCATION_SERVICE_MOJOM_H_

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
#include "content/common/geolocation_service.mojom-internal.h"
#include "content/public/common/mojo_geoposition.mojom.h"
namespace content {

class GeolocationService;
using GeolocationServicePtr = mojo::InterfacePtr<GeolocationService>;
using GeolocationServicePtrInfo = mojo::InterfacePtrInfo<GeolocationService>;
using GeolocationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<GeolocationService>;
using GeolocationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GeolocationService>;


class GeolocationServiceProxy;
class GeolocationServiceStub;

class GeolocationServiceRequestValidator;
class GeolocationServiceResponseValidator;

class GeolocationService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::content::GeolocationService;

  using Proxy_ = GeolocationServiceProxy;
  using Stub_ = GeolocationServiceStub;

  using RequestValidator_ = GeolocationServiceRequestValidator;
  using ResponseValidator_ = GeolocationServiceResponseValidator;

  virtual ~GeolocationService() {}

  virtual void SetHighAccuracy(bool high_accuracy) = 0;

  using QueryNextPositionCallback = mojo::Callback<void(content::MojoGeopositionPtr)>;
  virtual void QueryNextPosition(const QueryNextPositionCallback& callback) = 0;
};

class GeolocationServiceProxy
    : public GeolocationService,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit GeolocationServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetHighAccuracy(
      bool high_accuracy
  ) override;
  void QueryNextPosition(
      const QueryNextPositionCallback& callback
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class GeolocationServiceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  GeolocationServiceStub();
  ~GeolocationServiceStub() override;
  void set_sink(GeolocationService* sink) { sink_ = sink; }
  GeolocationService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  GeolocationService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class GeolocationServiceRequestValidator : public mojo::MessageFilter {
 public:
  explicit GeolocationServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class GeolocationServiceResponseValidator : public mojo::MessageFilter {
 public:
  explicit GeolocationServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace content

#endif  // CONTENT_COMMON_GEOLOCATION_SERVICE_MOJOM_H_