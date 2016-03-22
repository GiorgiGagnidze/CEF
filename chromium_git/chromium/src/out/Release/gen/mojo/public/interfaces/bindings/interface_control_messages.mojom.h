// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_H_

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
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom-internal.h"
namespace mojo {

const uint32_t kRunMessageId = 0xFFFFFFFFU;
const uint32_t kRunOrClosePipeMessageId = 0xFFFFFFFEU;
class RunMessageParams;
class RunMessageParams_Reader;

using RunMessageParamsPtr = mojo::StructPtr<RunMessageParams>;


class RunResponseMessageParams;
class RunResponseMessageParams_Reader;

using RunResponseMessageParamsPtr = mojo::StructPtr<RunResponseMessageParams>;


class QueryVersion;
class QueryVersion_Reader;

using QueryVersionPtr = mojo::InlinedStructPtr<QueryVersion>;


class QueryVersionResult;
class QueryVersionResult_Reader;

using QueryVersionResultPtr = mojo::InlinedStructPtr<QueryVersionResult>;


class RunOrClosePipeMessageParams;
class RunOrClosePipeMessageParams_Reader;

using RunOrClosePipeMessageParamsPtr = mojo::StructPtr<RunOrClosePipeMessageParams>;


class RequireVersion;
class RequireVersion_Reader;

using RequireVersionPtr = mojo::InlinedStructPtr<RequireVersion>;







class QueryVersion_Reader;

class QueryVersion {
 public:
  using Data_ = internal::QueryVersion_Data;
  using Reader = QueryVersion_Reader;

  static QueryVersionPtr New();

  template <typename U>
  static QueryVersionPtr From(const U& u) {
    return mojo::TypeConverter<QueryVersionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, QueryVersion>::Convert(*this);
  }

  QueryVersion();
  ~QueryVersion();


  QueryVersionPtr Clone() const;
  bool Equals(const QueryVersion& other) const;

};


class QueryVersionResult_Reader;

class QueryVersionResult {
 public:
  using Data_ = internal::QueryVersionResult_Data;
  using Reader = QueryVersionResult_Reader;

  static QueryVersionResultPtr New();

  template <typename U>
  static QueryVersionResultPtr From(const U& u) {
    return mojo::TypeConverter<QueryVersionResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, QueryVersionResult>::Convert(*this);
  }

  QueryVersionResult();
  ~QueryVersionResult();


  QueryVersionResultPtr Clone() const;
  bool Equals(const QueryVersionResult& other) const;

  uint32_t version;
};



class RequireVersion_Reader;

class RequireVersion {
 public:
  using Data_ = internal::RequireVersion_Data;
  using Reader = RequireVersion_Reader;

  static RequireVersionPtr New();

  template <typename U>
  static RequireVersionPtr From(const U& u) {
    return mojo::TypeConverter<RequireVersionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RequireVersion>::Convert(*this);
  }

  RequireVersion();
  ~RequireVersion();


  RequireVersionPtr Clone() const;
  bool Equals(const RequireVersion& other) const;

  uint32_t version;
};



class RunMessageParams_Reader;

class RunMessageParams {
 public:
  using Data_ = internal::RunMessageParams_Data;
  using Reader = RunMessageParams_Reader;

  static RunMessageParamsPtr New();

  template <typename U>
  static RunMessageParamsPtr From(const U& u) {
    return mojo::TypeConverter<RunMessageParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunMessageParams>::Convert(*this);
  }

  RunMessageParams();
  ~RunMessageParams();


  RunMessageParamsPtr Clone() const;
  bool Equals(const RunMessageParams& other) const;

  uint32_t reserved0;
  uint32_t reserved1;
  QueryVersionPtr query_version;
};


class RunResponseMessageParams_Reader;

class RunResponseMessageParams {
 public:
  using Data_ = internal::RunResponseMessageParams_Data;
  using Reader = RunResponseMessageParams_Reader;

  static RunResponseMessageParamsPtr New();

  template <typename U>
  static RunResponseMessageParamsPtr From(const U& u) {
    return mojo::TypeConverter<RunResponseMessageParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RunResponseMessageParams>::Convert(*this);
  }

  RunResponseMessageParams();
  ~RunResponseMessageParams();


  RunResponseMessageParamsPtr Clone() const;
  bool Equals(const RunResponseMessageParams& other) const;

  uint32_t reserved0;
  uint32_t reserved1;
  QueryVersionResultPtr query_version_result;
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

  uint32_t reserved0;
  uint32_t reserved1;
  RequireVersionPtr require_version;
};



size_t GetSerializedSize_(const RunMessageParamsPtr& input);
void Serialize_(RunMessageParamsPtr input, mojo::internal::Buffer* buffer,
                internal::RunMessageParams_Data** output);
bool Deserialize_(internal::RunMessageParams_Data* input,
                  RunMessageParamsPtr* output,
                  mojo::internal::SerializationContext* context);


class RunMessageParams_Reader {
 public:
  RunMessageParams_Reader(internal::RunMessageParams_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t reserved0() const { return data_->reserved0; }
  uint32_t reserved1() const { return data_->reserved1; }
  QueryVersion::Reader query_version() const;

 private:
  internal::RunMessageParams_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct RunMessageParams_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::RunMessageParams_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field query_version";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::RunMessageParams_Data** output) {
    internal::RunMessageParams_Data* result =
        internal::RunMessageParams_Data::New(buffer);
    result->reserved0 = mojo::StructTraits<RunMessageParams, NativeType>
        ::reserved0(input);
    result->reserved1 = mojo::StructTraits<RunMessageParams, NativeType>
        ::reserved1(input);
    result->query_version = mojo::StructTraits<RunMessageParams, NativeType>
        ::query_version(input);
    *output = result;
  }

  static bool Deserialize(internal::RunMessageParams_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<RunMessageParams, NativeType>::Read(
        RunMessageParams_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const RunResponseMessageParamsPtr& input);
void Serialize_(RunResponseMessageParamsPtr input, mojo::internal::Buffer* buffer,
                internal::RunResponseMessageParams_Data** output);
bool Deserialize_(internal::RunResponseMessageParams_Data* input,
                  RunResponseMessageParamsPtr* output,
                  mojo::internal::SerializationContext* context);


class RunResponseMessageParams_Reader {
 public:
  RunResponseMessageParams_Reader(internal::RunResponseMessageParams_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t reserved0() const { return data_->reserved0; }
  uint32_t reserved1() const { return data_->reserved1; }
  QueryVersionResult::Reader query_version_result() const;

 private:
  internal::RunResponseMessageParams_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct RunResponseMessageParams_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::RunResponseMessageParams_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field query_version_result";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::RunResponseMessageParams_Data** output) {
    internal::RunResponseMessageParams_Data* result =
        internal::RunResponseMessageParams_Data::New(buffer);
    result->reserved0 = mojo::StructTraits<RunResponseMessageParams, NativeType>
        ::reserved0(input);
    result->reserved1 = mojo::StructTraits<RunResponseMessageParams, NativeType>
        ::reserved1(input);
    result->query_version_result = mojo::StructTraits<RunResponseMessageParams, NativeType>
        ::query_version_result(input);
    *output = result;
  }

  static bool Deserialize(internal::RunResponseMessageParams_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<RunResponseMessageParams, NativeType>::Read(
        RunResponseMessageParams_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const QueryVersionPtr& input);
void Serialize_(QueryVersionPtr input, mojo::internal::Buffer* buffer,
                internal::QueryVersion_Data** output);
bool Deserialize_(internal::QueryVersion_Data* input,
                  QueryVersionPtr* output,
                  mojo::internal::SerializationContext* context);


class QueryVersion_Reader {
 public:
  QueryVersion_Reader(internal::QueryVersion_Data* data,
                         mojo::internal::SerializationContext* context);

 private:
  internal::QueryVersion_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct QueryVersion_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::QueryVersion_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::QueryVersion_Data** output) {
    internal::QueryVersion_Data* result =
        internal::QueryVersion_Data::New(buffer);
    *output = result;
  }

  static bool Deserialize(internal::QueryVersion_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<QueryVersion, NativeType>::Read(
        QueryVersion_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const QueryVersionResultPtr& input);
void Serialize_(QueryVersionResultPtr input, mojo::internal::Buffer* buffer,
                internal::QueryVersionResult_Data** output);
bool Deserialize_(internal::QueryVersionResult_Data* input,
                  QueryVersionResultPtr* output,
                  mojo::internal::SerializationContext* context);


class QueryVersionResult_Reader {
 public:
  QueryVersionResult_Reader(internal::QueryVersionResult_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t version() const { return data_->version; }

 private:
  internal::QueryVersionResult_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct QueryVersionResult_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::QueryVersionResult_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::QueryVersionResult_Data** output) {
    internal::QueryVersionResult_Data* result =
        internal::QueryVersionResult_Data::New(buffer);
    result->version = mojo::StructTraits<QueryVersionResult, NativeType>
        ::version(input);
    *output = result;
  }

  static bool Deserialize(internal::QueryVersionResult_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<QueryVersionResult, NativeType>::Read(
        QueryVersionResult_Reader(input, context), output);
  }
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
  uint32_t reserved0() const { return data_->reserved0; }
  uint32_t reserved1() const { return data_->reserved1; }
  RequireVersion::Reader require_version() const;

 private:
  internal::RunOrClosePipeMessageParams_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct RunOrClosePipeMessageParams_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::RunOrClosePipeMessageParams_Data);
    NOTREACHED() << "Mojom struct traits only support POD fields at this time. "
        << "Cannot determine the size of field require_version";
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::RunOrClosePipeMessageParams_Data** output) {
    internal::RunOrClosePipeMessageParams_Data* result =
        internal::RunOrClosePipeMessageParams_Data::New(buffer);
    result->reserved0 = mojo::StructTraits<RunOrClosePipeMessageParams, NativeType>
        ::reserved0(input);
    result->reserved1 = mojo::StructTraits<RunOrClosePipeMessageParams, NativeType>
        ::reserved1(input);
    result->require_version = mojo::StructTraits<RunOrClosePipeMessageParams, NativeType>
        ::require_version(input);
    *output = result;
  }

  static bool Deserialize(internal::RunOrClosePipeMessageParams_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<RunOrClosePipeMessageParams, NativeType>::Read(
        RunOrClosePipeMessageParams_Reader(input, context), output);
  }
};  
size_t GetSerializedSize_(const RequireVersionPtr& input);
void Serialize_(RequireVersionPtr input, mojo::internal::Buffer* buffer,
                internal::RequireVersion_Data** output);
bool Deserialize_(internal::RequireVersion_Data* input,
                  RequireVersionPtr* output,
                  mojo::internal::SerializationContext* context);


class RequireVersion_Reader {
 public:
  RequireVersion_Reader(internal::RequireVersion_Data* data,
                         mojo::internal::SerializationContext* context);
  uint32_t version() const { return data_->version; }

 private:
  internal::RequireVersion_Data* data_;
  mojo::internal::SerializationContext* context_;
};

template <typename NativeType>
struct RequireVersion_SerializerTraits_ {
  static size_t GetSize(const NativeType& input) {
    size_t size = sizeof(internal::RequireVersion_Data);
    return size;
  }

  static void Serialize(const NativeType& input,
                        mojo::internal::Buffer* buffer,
                        internal::RequireVersion_Data** output) {
    internal::RequireVersion_Data* result =
        internal::RequireVersion_Data::New(buffer);
    result->version = mojo::StructTraits<RequireVersion, NativeType>
        ::version(input);
    *output = result;
  }

  static bool Deserialize(internal::RequireVersion_Data* input,
                          NativeType* output,
                          mojo::internal::SerializationContext* context) {
    return mojo::StructTraits<RequireVersion, NativeType>::Read(
        RequireVersion_Reader(input, context), output);
  }
};  
}  // namespace mojo

#endif  // MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_H_