// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: managed_user_shared_setting_specifics.proto

#ifndef PROTOBUF_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto__INCLUDED
#define PROTOBUF_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include "sync/protocol/sync_proto_export.h"

namespace sync_pb {

// Internal implementation detail -- do not call these.
void SYNC_PROTO_EXPORT protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto();
void protobuf_AssignDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto();
void protobuf_ShutdownFile_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto();

class ManagedUserSharedSettingSpecifics;

// ===================================================================

class SYNC_PROTO_EXPORT ManagedUserSharedSettingSpecifics : public ::google::protobuf::MessageLite {
 public:
  ManagedUserSharedSettingSpecifics();
  virtual ~ManagedUserSharedSettingSpecifics();

  ManagedUserSharedSettingSpecifics(const ManagedUserSharedSettingSpecifics& from);

  inline ManagedUserSharedSettingSpecifics& operator=(const ManagedUserSharedSettingSpecifics& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ManagedUserSharedSettingSpecifics& default_instance();

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  // Returns the internal default instance pointer. This function can
  // return NULL thus should not be used by the user. This is intended
  // for Protobuf internal code. Please use default_instance() declared
  // above instead.
  static inline const ManagedUserSharedSettingSpecifics* internal_default_instance() {
    return default_instance_;
  }
  #endif

  void Swap(ManagedUserSharedSettingSpecifics* other);

  // implements Message ----------------------------------------------

  ManagedUserSharedSettingSpecifics* New() const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const ManagedUserSharedSettingSpecifics& from);
  void MergeFrom(const ManagedUserSharedSettingSpecifics& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string mu_id = 1;
  inline bool has_mu_id() const;
  inline void clear_mu_id();
  static const int kMuIdFieldNumber = 1;
  inline const ::std::string& mu_id() const;
  inline void set_mu_id(const ::std::string& value);
  inline void set_mu_id(const char* value);
  inline void set_mu_id(const char* value, size_t size);
  inline ::std::string* mutable_mu_id();
  inline ::std::string* release_mu_id();
  inline void set_allocated_mu_id(::std::string* mu_id);

  // optional string key = 2;
  inline bool has_key() const;
  inline void clear_key();
  static const int kKeyFieldNumber = 2;
  inline const ::std::string& key() const;
  inline void set_key(const ::std::string& value);
  inline void set_key(const char* value);
  inline void set_key(const char* value, size_t size);
  inline ::std::string* mutable_key();
  inline ::std::string* release_key();
  inline void set_allocated_key(::std::string* key);

  // optional string value = 3;
  inline bool has_value() const;
  inline void clear_value();
  static const int kValueFieldNumber = 3;
  inline const ::std::string& value() const;
  inline void set_value(const ::std::string& value);
  inline void set_value(const char* value);
  inline void set_value(const char* value, size_t size);
  inline ::std::string* mutable_value();
  inline ::std::string* release_value();
  inline void set_allocated_value(::std::string* value);

  // optional bool acknowledged = 4 [default = false];
  inline bool has_acknowledged() const;
  inline void clear_acknowledged();
  static const int kAcknowledgedFieldNumber = 4;
  inline bool acknowledged() const;
  inline void set_acknowledged(bool value);

  // @@protoc_insertion_point(class_scope:sync_pb.ManagedUserSharedSettingSpecifics)
 private:
  inline void set_has_mu_id();
  inline void clear_has_mu_id();
  inline void set_has_key();
  inline void clear_has_key();
  inline void set_has_value();
  inline void clear_has_value();
  inline void set_has_acknowledged();
  inline void clear_has_acknowledged();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* mu_id_;
  ::std::string* key_;
  ::std::string* value_;
  bool acknowledged_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(4 + 31) / 32];

  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  friend void SYNC_PROTO_EXPORT protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto_impl();
  #else
  friend void SYNC_PROTO_EXPORT protobuf_AddDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto();
  #endif
  friend void protobuf_AssignDesc_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto();
  friend void protobuf_ShutdownFile_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto();

  void InitAsDefaultInstance();
  static ManagedUserSharedSettingSpecifics* default_instance_;
};
// ===================================================================


// ===================================================================

// ManagedUserSharedSettingSpecifics

// optional string mu_id = 1;
inline bool ManagedUserSharedSettingSpecifics::has_mu_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void ManagedUserSharedSettingSpecifics::set_has_mu_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void ManagedUserSharedSettingSpecifics::clear_has_mu_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void ManagedUserSharedSettingSpecifics::clear_mu_id() {
  if (mu_id_ != &::google::protobuf::internal::GetEmptyString()) {
    mu_id_->clear();
  }
  clear_has_mu_id();
}
inline const ::std::string& ManagedUserSharedSettingSpecifics::mu_id() const {
  return *mu_id_;
}
inline void ManagedUserSharedSettingSpecifics::set_mu_id(const ::std::string& value) {
  set_has_mu_id();
  if (mu_id_ == &::google::protobuf::internal::GetEmptyString()) {
    mu_id_ = new ::std::string;
  }
  mu_id_->assign(value);
}
inline void ManagedUserSharedSettingSpecifics::set_mu_id(const char* value) {
  set_has_mu_id();
  if (mu_id_ == &::google::protobuf::internal::GetEmptyString()) {
    mu_id_ = new ::std::string;
  }
  mu_id_->assign(value);
}
inline void ManagedUserSharedSettingSpecifics::set_mu_id(const char* value, size_t size) {
  set_has_mu_id();
  if (mu_id_ == &::google::protobuf::internal::GetEmptyString()) {
    mu_id_ = new ::std::string;
  }
  mu_id_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ManagedUserSharedSettingSpecifics::mutable_mu_id() {
  set_has_mu_id();
  if (mu_id_ == &::google::protobuf::internal::GetEmptyString()) {
    mu_id_ = new ::std::string;
  }
  return mu_id_;
}
inline ::std::string* ManagedUserSharedSettingSpecifics::release_mu_id() {
  clear_has_mu_id();
  if (mu_id_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = mu_id_;
    mu_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void ManagedUserSharedSettingSpecifics::set_allocated_mu_id(::std::string* mu_id) {
  if (mu_id_ != &::google::protobuf::internal::GetEmptyString()) {
    delete mu_id_;
  }
  if (mu_id) {
    set_has_mu_id();
    mu_id_ = mu_id;
  } else {
    clear_has_mu_id();
    mu_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional string key = 2;
inline bool ManagedUserSharedSettingSpecifics::has_key() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void ManagedUserSharedSettingSpecifics::set_has_key() {
  _has_bits_[0] |= 0x00000002u;
}
inline void ManagedUserSharedSettingSpecifics::clear_has_key() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void ManagedUserSharedSettingSpecifics::clear_key() {
  if (key_ != &::google::protobuf::internal::GetEmptyString()) {
    key_->clear();
  }
  clear_has_key();
}
inline const ::std::string& ManagedUserSharedSettingSpecifics::key() const {
  return *key_;
}
inline void ManagedUserSharedSettingSpecifics::set_key(const ::std::string& value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyString()) {
    key_ = new ::std::string;
  }
  key_->assign(value);
}
inline void ManagedUserSharedSettingSpecifics::set_key(const char* value) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyString()) {
    key_ = new ::std::string;
  }
  key_->assign(value);
}
inline void ManagedUserSharedSettingSpecifics::set_key(const char* value, size_t size) {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyString()) {
    key_ = new ::std::string;
  }
  key_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ManagedUserSharedSettingSpecifics::mutable_key() {
  set_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyString()) {
    key_ = new ::std::string;
  }
  return key_;
}
inline ::std::string* ManagedUserSharedSettingSpecifics::release_key() {
  clear_has_key();
  if (key_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = key_;
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void ManagedUserSharedSettingSpecifics::set_allocated_key(::std::string* key) {
  if (key_ != &::google::protobuf::internal::GetEmptyString()) {
    delete key_;
  }
  if (key) {
    set_has_key();
    key_ = key;
  } else {
    clear_has_key();
    key_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional string value = 3;
inline bool ManagedUserSharedSettingSpecifics::has_value() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void ManagedUserSharedSettingSpecifics::set_has_value() {
  _has_bits_[0] |= 0x00000004u;
}
inline void ManagedUserSharedSettingSpecifics::clear_has_value() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void ManagedUserSharedSettingSpecifics::clear_value() {
  if (value_ != &::google::protobuf::internal::GetEmptyString()) {
    value_->clear();
  }
  clear_has_value();
}
inline const ::std::string& ManagedUserSharedSettingSpecifics::value() const {
  return *value_;
}
inline void ManagedUserSharedSettingSpecifics::set_value(const ::std::string& value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyString()) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void ManagedUserSharedSettingSpecifics::set_value(const char* value) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyString()) {
    value_ = new ::std::string;
  }
  value_->assign(value);
}
inline void ManagedUserSharedSettingSpecifics::set_value(const char* value, size_t size) {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyString()) {
    value_ = new ::std::string;
  }
  value_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* ManagedUserSharedSettingSpecifics::mutable_value() {
  set_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyString()) {
    value_ = new ::std::string;
  }
  return value_;
}
inline ::std::string* ManagedUserSharedSettingSpecifics::release_value() {
  clear_has_value();
  if (value_ == &::google::protobuf::internal::GetEmptyString()) {
    return NULL;
  } else {
    ::std::string* temp = value_;
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
    return temp;
  }
}
inline void ManagedUserSharedSettingSpecifics::set_allocated_value(::std::string* value) {
  if (value_ != &::google::protobuf::internal::GetEmptyString()) {
    delete value_;
  }
  if (value) {
    set_has_value();
    value_ = value;
  } else {
    clear_has_value();
    value_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  }
}

// optional bool acknowledged = 4 [default = false];
inline bool ManagedUserSharedSettingSpecifics::has_acknowledged() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void ManagedUserSharedSettingSpecifics::set_has_acknowledged() {
  _has_bits_[0] |= 0x00000008u;
}
inline void ManagedUserSharedSettingSpecifics::clear_has_acknowledged() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void ManagedUserSharedSettingSpecifics::clear_acknowledged() {
  acknowledged_ = false;
  clear_has_acknowledged();
}
inline bool ManagedUserSharedSettingSpecifics::acknowledged() const {
  return acknowledged_;
}
inline void ManagedUserSharedSettingSpecifics::set_acknowledged(bool value) {
  set_has_acknowledged();
  acknowledged_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_managed_5fuser_5fshared_5fsetting_5fspecifics_2eproto__INCLUDED
