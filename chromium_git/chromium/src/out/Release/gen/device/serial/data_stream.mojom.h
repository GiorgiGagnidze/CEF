// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_SERIAL_DATA_STREAM_MOJOM_H_
#define DEVICE_SERIAL_DATA_STREAM_MOJOM_H_

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
#include "device/serial/data_stream.mojom-internal.h"
namespace device {
namespace serial {

class DataSource;
using DataSourcePtr = mojo::InterfacePtr<DataSource>;
using DataSourcePtrInfo = mojo::InterfacePtrInfo<DataSource>;
using DataSourceAssociatedPtr =
    mojo::AssociatedInterfacePtr<DataSource>;
using DataSourceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DataSource>;

class DataSourceClient;
using DataSourceClientPtr = mojo::InterfacePtr<DataSourceClient>;
using DataSourceClientPtrInfo = mojo::InterfacePtrInfo<DataSourceClient>;
using DataSourceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<DataSourceClient>;
using DataSourceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DataSourceClient>;

class DataSink;
using DataSinkPtr = mojo::InterfacePtr<DataSink>;
using DataSinkPtrInfo = mojo::InterfacePtrInfo<DataSink>;
using DataSinkAssociatedPtr =
    mojo::AssociatedInterfacePtr<DataSink>;
using DataSinkAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DataSink>;


class DataSourceProxy;
class DataSourceStub;

class DataSourceRequestValidator;

class DataSource {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::device::serial::DataSource;

  using Proxy_ = DataSourceProxy;
  using Stub_ = DataSourceStub;

  using RequestValidator_ = DataSourceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~DataSource() {}

  virtual void Init(uint32_t buffer_size) = 0;

  virtual void Resume() = 0;

  virtual void ReportBytesReceived(uint32_t bytes_sent) = 0;
};

class DataSourceClientProxy;
class DataSourceClientStub;

class DataSourceClientRequestValidator;

class DataSourceClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::device::serial::DataSourceClient;

  using Proxy_ = DataSourceClientProxy;
  using Stub_ = DataSourceClientStub;

  using RequestValidator_ = DataSourceClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;

  virtual ~DataSourceClient() {}

  virtual void OnError(int32_t error) = 0;

  virtual void OnData(mojo::Array<uint8_t> data) = 0;
};

class DataSinkProxy;
class DataSinkStub;

class DataSinkRequestValidator;
class DataSinkResponseValidator;

class DataSink {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;

  using GenericInterface = ::device::serial::DataSink;

  using Proxy_ = DataSinkProxy;
  using Stub_ = DataSinkStub;

  using RequestValidator_ = DataSinkRequestValidator;
  using ResponseValidator_ = DataSinkResponseValidator;

  virtual ~DataSink() {}

  virtual void Cancel(int32_t error) = 0;

  using OnDataCallback = mojo::Callback<void(uint32_t, int32_t)>;
  virtual void OnData(mojo::Array<uint8_t> data, const OnDataCallback& callback) = 0;

  virtual void ClearError() = 0;
};

class DataSourceProxy
    : public DataSource,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit DataSourceProxy(mojo::MessageReceiverWithResponder* receiver);
  void Init(
      uint32_t buffer_size
  ) override;
  void Resume(
      
  ) override;
  void ReportBytesReceived(
      uint32_t bytes_sent
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class DataSourceClientProxy
    : public DataSourceClient,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit DataSourceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnError(
      int32_t error
  ) override;
  void OnData(
      mojo::Array<uint8_t> data
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class DataSinkProxy
    : public DataSink,
      public mojo::internal::ControlMessageProxy {
 public:
  explicit DataSinkProxy(mojo::MessageReceiverWithResponder* receiver);
  void Cancel(
      int32_t error
  ) override;
  void OnData(
      mojo::Array<uint8_t> data, const OnDataCallback& callback
  ) override;
  void ClearError(
      
  ) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class DataSourceStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  DataSourceStub();
  ~DataSourceStub() override;
  void set_sink(DataSource* sink) { sink_ = sink; }
  DataSource* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  DataSource* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class DataSourceClientStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  DataSourceClientStub();
  ~DataSourceClientStub() override;
  void set_sink(DataSourceClient* sink) { sink_ = sink; }
  DataSourceClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  DataSourceClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class DataSinkStub : public mojo::MessageReceiverWithResponderStatus {
 public:
  DataSinkStub();
  ~DataSinkStub() override;
  void set_sink(DataSink* sink) { sink_ = sink; }
  DataSink* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  DataSink* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class DataSourceRequestValidator : public mojo::MessageFilter {
 public:
  explicit DataSourceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class DataSourceClientRequestValidator : public mojo::MessageFilter {
 public:
  explicit DataSourceClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class DataSinkRequestValidator : public mojo::MessageFilter {
 public:
  explicit DataSinkRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class DataSinkResponseValidator : public mojo::MessageFilter {
 public:
  explicit DataSinkResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



}  // namespace serial
}  // namespace device

#endif  // DEVICE_SERIAL_DATA_STREAM_MOJOM_H_