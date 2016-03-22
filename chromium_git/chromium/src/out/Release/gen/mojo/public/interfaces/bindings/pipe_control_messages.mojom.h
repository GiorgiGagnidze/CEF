// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/pipe_control_messages.mojom-internal.h"
namespace mojo {
namespace pipe_control {

const uint32_t kRunOrClosePipeMessageId = 0xFFFFFFFEU;
class RunOrClosePipeMessageParams;
class RunOrClosePipeMessageParams_Reader;

using RunOrClosePipeMessageParamsPtr = mojo::StructPtr<RunOrClosePipeMessageParams>;


class PeerAssociatedEndpointClosedEvent;
class PeerAssociatedEndpointClosedEvent_Reader;

using PeerAssociatedEndpointClosedEventPtr = mojo::InlinedStructPtr<PeerAssociatedEndpointClosedEvent>;


class AssociatedEndpointClosedBeforeSentEvent;
class AssociatedEndpointClosedBeforeSentEvent_Reader;

using AssociatedEndpointClosedBeforeSentEventPtr = mojo::InlinedStructPtr<AssociatedEndpointClosedBeforeSentEvent>;


class RunOrClosePipeInput;

typedef mojo::StructPtr<RunOrClosePipeInput> RunOrClosePipeInputPtr;


class RunOrClosePipeInput {
 public:
  using Data_ = internal::RunOrClosePipeInput_Data;
  using Tag = Data_::RunOrClosePipeInput_Tag;

  static RunOrClosePipeInputPtr New();

  template <typename U>
  static RunOrClosePipeInputPtr From(const U& u) {
    return mojo::TypeConverter<RunOrClosePipeInputPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunOrClosePipeInput>::Convert(*this);
  }

  RunOrClosePipeInput();
  ~RunOrClosePipeInput();


  RunOrClosePipeInputPtr Clone() const;
  bool Equals(const RunOrClosePipeInput& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_peer_associated_endpoint_closed_event() const;
  PeerAssociatedEndpointClosedEventPtr& get_peer_associated_endpoint_closed_event() const;
  void set_peer_associated_endpoint_closed_event(PeerAssociatedEndpointClosedEventPtr peer_associated_endpoint_closed_event);
  bool is_associated_endpoint_closed_before_sent_event() const;
  AssociatedEndpointClosedBeforeSentEventPtr& get_associated_endpoint_closed_before_sent_event() const;
  void set_associated_endpoint_closed_before_sent_event(AssociatedEndpointClosedBeforeSentEventPtr associated_endpoint_closed_before_sent_event);

 private:
  friend class mojo::internal::UnionAccessor<RunOrClosePipeInput>;
  union Union_ {
    Union_() {}
    ~Union_() {}

PeerAssociatedEndpointClosedEventPtr* peer_associated_endpoint_closed_event;

AssociatedEndpointClosedBeforeSentEventPtr* associated_endpoint_closed_before_sent_event;

  };
  void SwitchActive(Tag new_active);
  void SetActive(Tag new_active);
  void DestroyActive();
  Tag tag_;
  Union_ data_;
};



class PeerAssociatedEndpointClosedEvent_Reader;

class PeerAssociatedEndpointClosedEvent {
 public:
  using Data_ = internal::PeerAssociatedEndpointClosedEvent_Data;
  using Reader = PeerAssociatedEndpointClosedEvent_Reader;

  static PeerAssociatedEndpointClosedEventPtr New();

  template <typename U>
  static PeerAssociatedEndpointClosedEventPtr From(const U& u) {
    return mojo::TypeConverter<PeerAssociatedEndpointClosedEventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PeerAssociatedEndpointClosedEvent>::Convert(*this);
  }

  PeerAssociatedEndpointClosedEvent();
  ~PeerAssociatedEndpointClosedEvent();


  PeerAssociatedEndpointClosedEventPtr Clone() const;
  bool Equals(const PeerAssociatedEndpointClosedEvent& other) const;

  uint32_t id;
};


class AssociatedEndpointClosedBeforeSentEvent_Reader;

class AssociatedEndpointClosedBeforeSentEvent {
 public:
  using Data_ = internal::AssociatedEndpointClosedBeforeSentEvent_Data;
  using Reader = AssociatedEndpointClosedBeforeSentEvent_Reader;

  static AssociatedEndpointClosedBeforeSentEventPtr New();

  template <typename U>
  static AssociatedEndpointClosedBeforeSentEventPtr From(const U& u) {
    return mojo::TypeConverter<AssociatedEndpointClosedBeforeSentEventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AssociatedEndpointClosedBeforeSentEvent>::Convert(*this);
  }

  AssociatedEndpointClosedBeforeSentEvent();
  ~AssociatedEndpointClosedBeforeSentEvent();


  AssociatedEndpointClosedBeforeSentEventPtr Clone() const;
  bool Equals(const AssociatedEndpointClosedBeforeSentEvent& other) const;

  uint32_t id;
};



class RunOrClosePipeMessageParams_Reader;

class RunOrClosePipeMessageParams {
 public:
  using Data_ = internal::RunOrClosePipeMessageParams_Data;
  using Reader = RunOrClosePipeMessageParams_Reader;

  static RunOrClosePipeMessageParamsPtr New();

  template <typename U>
  static RunOrClosePipeMessageParamsPtr From(const U& u) {
    return mojo::TypeConverter<RunOrClosePipeMessageParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunOrClosePipeMessageParams>::Convert(*this);
  }

  RunOrClosePipeMessageParams();
  ~RunOrClosePipeMessageParams();


  RunOrClosePipeMessageParamsPtr Clone() const;
  bool Equals(const RunOrClosePipeMessageParams& other) const;

  RunOrClosePipeInputPtr input;
};




size_t GetSerializedSize_(const RunOrClosePipeMessageParamsPtr& input);
void Serialize_(RunOrClosePipeMessageParamsPtr input, mojo::internal::Buffer* buffer,
                internal::RunOrClosePipeMessageParams_Data** output);
bool Deserialize_(internal::RunOrClosePipeMessageParams_Data* input,
                  RunOrClosePipeMessageParamsPtr* output,
                  mojo::internal::SerializationContext* context);


class RunOrClosePipeMessageParams_Reader {
 public:
  RunOrClosePipeMessageParams_Reader(internal::RunOrClosePipeMessageParams_Data* data,
                         mojo::internal::SerializationContext* context);
  // TODO(rockot): Support reading unions. (input() omitted)

 private:
  internal::RunOrClosePipeMessageParams_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct RunOrClosePipeMessageParams_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::RunOrClosePipeMessageParams_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field input";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::RunOrClosePipeMessageParams_Data** output) {
    internal::RunOrClosePipeMessageParams_Data* result =
        internal::RunOrClosePipeMessageParams_Data::New(buffer);
    result->input = mojo::StructTraits<RunOrClosePipeMessageParams, NativeType>
        ::input(input);
    *output = result;
  }

  static bool Deserialize(internal::RunOrClosePipeMessageParams_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<RunOrClosePipeMessageParams, NativeType>::Read(
        RunOrClosePipeMessageParams_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const PeerAssociatedEndpointClosedEventPtr& input);
void Serialize_(PeerAssociatedEndpointClosedEventPtr input, mojo::internal::Buffer* buffer,
                internal::PeerAssociatedEndpointClosedEvent_Data** output);
bool Deserialize_(internal::PeerAssociatedEndpointClosedEvent_Data* input,
                  PeerAssociatedEndpointClosedEventPtr* output,
                  mojo::internal::SerializationContext* context);


class PeerAssociatedEndpointClosedEvent_Reader {
 public:
  PeerAssociatedEndpointClosedEvent_Reader(internal::PeerAssociatedEndpointClosedEvent_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t id() const { return data_->id; }

 private:
  internal::PeerAssociatedEndpointClosedEvent_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct PeerAssociatedEndpointClosedEvent_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::PeerAssociatedEndpointClosedEvent_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::PeerAssociatedEndpointClosedEvent_Data** output) {
    internal::PeerAssociatedEndpointClosedEvent_Data* result =
        internal::PeerAssociatedEndpointClosedEvent_Data::New(buffer);
    result->id = mojo::StructTraits<PeerAssociatedEndpointClosedEvent, NativeType>
        ::id(input);
    *output = result;
  }

  static bool Deserialize(internal::PeerAssociatedEndpointClosedEvent_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<PeerAssociatedEndpointClosedEvent, NativeType>::Read(
        PeerAssociatedEndpointClosedEvent_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const AssociatedEndpointClosedBeforeSentEventPtr& input);
void Serialize_(AssociatedEndpointClosedBeforeSentEventPtr input, mojo::internal::Buffer* buffer,
                internal::AssociatedEndpointClosedBeforeSentEvent_Data** output);
bool Deserialize_(internal::AssociatedEndpointClosedBeforeSentEvent_Data* input,
                  AssociatedEndpointClosedBeforeSentEventPtr* output,
                  mojo::internal::SerializationContext* context);


class AssociatedEndpointClosedBeforeSentEvent_Reader {
 public:
  AssociatedEndpointClosedBeforeSentEvent_Reader(internal::AssociatedEndpointClosedBeforeSentEvent_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t id() const { return data_->id; }

 private:
  internal::AssociatedEndpointClosedBeforeSentEvent_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct AssociatedEndpointClosedBeforeSentEvent_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::AssociatedEndpointClosedBeforeSentEvent_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::AssociatedEndpointClosedBeforeSentEvent_Data** output) {
    internal::AssociatedEndpointClosedBeforeSentEvent_Data* result =
        internal::AssociatedEndpointClosedBeforeSentEvent_Data::New(buffer);
    result->id = mojo::StructTraits<AssociatedEndpointClosedBeforeSentEvent, NativeType>
        ::id(input);
    *output = result;
  }

  static bool Deserialize(internal::AssociatedEndpointClosedBeforeSentEvent_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<AssociatedEndpointClosedBeforeSentEvent, NativeType>::Read(
        AssociatedEndpointClosedBeforeSentEvent_Reader(input, context), output);
  }
};  

size_t GetSerializedSize_(const RunOrClosePipeInputPtr& input, bool inlined);
void SerializeUnion_(RunOrClosePipeInputPtr input, mojo::internal::Buffer* buffer,
                     internal::RunOrClosePipeInput_Data** output, bool inlined);
bool Deserialize_(internal::RunOrClosePipeInput_Data* input,
                  RunOrClosePipeInputPtr* output,
                  mojo::internal::SerializationContext* context);
}  // namespace pipe_control
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_PIPE_CONTROL_MESSAGES_MOJOM_H_