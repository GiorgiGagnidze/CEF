// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: entity_metadata.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "entity_metadata.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
// @@protoc_insertion_point(includes)

namespace sync_pb {

void protobuf_ShutdownFile_entity_5fmetadata_2eproto() {
  delete EntityMetadata::default_instance_;
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
void protobuf_AddDesc_entity_5fmetadata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#else
void protobuf_AddDesc_entity_5fmetadata_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#endif
  EntityMetadata::default_instance_ = new EntityMetadata();
  EntityMetadata::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_entity_5fmetadata_2eproto);
}

#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_entity_5fmetadata_2eproto_once_);
void protobuf_AddDesc_entity_5fmetadata_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_entity_5fmetadata_2eproto_once_,
                 &protobuf_AddDesc_entity_5fmetadata_2eproto_impl);
}
#else
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_entity_5fmetadata_2eproto {
  StaticDescriptorInitializer_entity_5fmetadata_2eproto() {
    protobuf_AddDesc_entity_5fmetadata_2eproto();
  }
} static_descriptor_initializer_entity_5fmetadata_2eproto_;
#endif

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int EntityMetadata::kClientTagHashFieldNumber;
const int EntityMetadata::kServerIdFieldNumber;
const int EntityMetadata::kIsDeletedFieldNumber;
const int EntityMetadata::kSequenceNumberFieldNumber;
const int EntityMetadata::kAckedSequenceNumberFieldNumber;
const int EntityMetadata::kServerVersionFieldNumber;
const int EntityMetadata::kCreationTimeFieldNumber;
const int EntityMetadata::kModificationTimeFieldNumber;
const int EntityMetadata::kSpecificsHashFieldNumber;
#endif  // !_MSC_VER

EntityMetadata::EntityMetadata()
  : ::google::protobuf::MessageLite() {
  SharedCtor();
}

void EntityMetadata::InitAsDefaultInstance() {
}

EntityMetadata::EntityMetadata(const EntityMetadata& from)
  : ::google::protobuf::MessageLite() {
  SharedCtor();
  MergeFrom(from);
}

void EntityMetadata::SharedCtor() {
  _cached_size_ = 0;
  client_tag_hash_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  server_id_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  is_deleted_ = false;
  sequence_number_ = GOOGLE_LONGLONG(0);
  acked_sequence_number_ = GOOGLE_LONGLONG(0);
  server_version_ = GOOGLE_LONGLONG(-1);
  creation_time_ = GOOGLE_LONGLONG(0);
  modification_time_ = GOOGLE_LONGLONG(0);
  specifics_hash_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyString());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EntityMetadata::~EntityMetadata() {
  SharedDtor();
}

void EntityMetadata::SharedDtor() {
  if (client_tag_hash_ != &::google::protobuf::internal::GetEmptyString()) {
    delete client_tag_hash_;
  }
  if (server_id_ != &::google::protobuf::internal::GetEmptyString()) {
    delete server_id_;
  }
  if (specifics_hash_ != &::google::protobuf::internal::GetEmptyString()) {
    delete specifics_hash_;
  }
  #ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  if (this != &default_instance()) {
  #else
  if (this != default_instance_) {
  #endif
  }
}

void EntityMetadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const EntityMetadata& EntityMetadata::default_instance() {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_AddDesc_entity_5fmetadata_2eproto();
#else
  if (default_instance_ == NULL) protobuf_AddDesc_entity_5fmetadata_2eproto();
#endif
  return *default_instance_;
}

EntityMetadata* EntityMetadata::default_instance_ = NULL;

EntityMetadata* EntityMetadata::New() const {
  return new EntityMetadata;
}

void EntityMetadata::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_client_tag_hash()) {
      if (client_tag_hash_ != &::google::protobuf::internal::GetEmptyString()) {
        client_tag_hash_->clear();
      }
    }
    if (has_server_id()) {
      if (server_id_ != &::google::protobuf::internal::GetEmptyString()) {
        server_id_->clear();
      }
    }
    is_deleted_ = false;
    sequence_number_ = GOOGLE_LONGLONG(0);
    acked_sequence_number_ = GOOGLE_LONGLONG(0);
    server_version_ = GOOGLE_LONGLONG(-1);
    creation_time_ = GOOGLE_LONGLONG(0);
    modification_time_ = GOOGLE_LONGLONG(0);
  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (has_specifics_hash()) {
      if (specifics_hash_ != &::google::protobuf::internal::GetEmptyString()) {
        specifics_hash_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool EntityMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string client_tag_hash = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_client_tag_hash()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_server_id;
        break;
      }

      // optional string server_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_server_id:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_server_id()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_is_deleted;
        break;
      }

      // optional bool is_deleted = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_is_deleted:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_deleted_)));
          set_has_is_deleted();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_sequence_number;
        break;
      }

      // optional int64 sequence_number = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_sequence_number:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sequence_number_)));
          set_has_sequence_number();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_acked_sequence_number;
        break;
      }

      // optional int64 acked_sequence_number = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_acked_sequence_number:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &acked_sequence_number_)));
          set_has_acked_sequence_number();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_server_version;
        break;
      }

      // optional int64 server_version = 6 [default = -1];
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_server_version:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &server_version_)));
          set_has_server_version();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_creation_time;
        break;
      }

      // optional int64 creation_time = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_creation_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &creation_time_)));
          set_has_creation_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_modification_time;
        break;
      }

      // optional int64 modification_time = 8;
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_modification_time:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &modification_time_)));
          set_has_modification_time();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(74)) goto parse_specifics_hash;
        break;
      }

      // optional string specifics_hash = 9;
      case 9: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_specifics_hash:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_specifics_hash()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void EntityMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string client_tag_hash = 1;
  if (has_client_tag_hash()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->client_tag_hash(), output);
  }

  // optional string server_id = 2;
  if (has_server_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->server_id(), output);
  }

  // optional bool is_deleted = 3;
  if (has_is_deleted()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(3, this->is_deleted(), output);
  }

  // optional int64 sequence_number = 4;
  if (has_sequence_number()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->sequence_number(), output);
  }

  // optional int64 acked_sequence_number = 5;
  if (has_acked_sequence_number()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(5, this->acked_sequence_number(), output);
  }

  // optional int64 server_version = 6 [default = -1];
  if (has_server_version()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(6, this->server_version(), output);
  }

  // optional int64 creation_time = 7;
  if (has_creation_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(7, this->creation_time(), output);
  }

  // optional int64 modification_time = 8;
  if (has_modification_time()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(8, this->modification_time(), output);
  }

  // optional string specifics_hash = 9;
  if (has_specifics_hash()) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      9, this->specifics_hash(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormatLite::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

int EntityMetadata::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string client_tag_hash = 1;
    if (has_client_tag_hash()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->client_tag_hash());
    }

    // optional string server_id = 2;
    if (has_server_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->server_id());
    }

    // optional bool is_deleted = 3;
    if (has_is_deleted()) {
      total_size += 1 + 1;
    }

    // optional int64 sequence_number = 4;
    if (has_sequence_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->sequence_number());
    }

    // optional int64 acked_sequence_number = 5;
    if (has_acked_sequence_number()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->acked_sequence_number());
    }

    // optional int64 server_version = 6 [default = -1];
    if (has_server_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->server_version());
    }

    // optional int64 creation_time = 7;
    if (has_creation_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->creation_time());
    }

    // optional int64 modification_time = 8;
    if (has_modification_time()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->modification_time());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional string specifics_hash = 9;
    if (has_specifics_hash()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->specifics_hash());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void EntityMetadata::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const EntityMetadata*>(&from));
}

void EntityMetadata::MergeFrom(const EntityMetadata& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_client_tag_hash()) {
      set_client_tag_hash(from.client_tag_hash());
    }
    if (from.has_server_id()) {
      set_server_id(from.server_id());
    }
    if (from.has_is_deleted()) {
      set_is_deleted(from.is_deleted());
    }
    if (from.has_sequence_number()) {
      set_sequence_number(from.sequence_number());
    }
    if (from.has_acked_sequence_number()) {
      set_acked_sequence_number(from.acked_sequence_number());
    }
    if (from.has_server_version()) {
      set_server_version(from.server_version());
    }
    if (from.has_creation_time()) {
      set_creation_time(from.creation_time());
    }
    if (from.has_modification_time()) {
      set_modification_time(from.modification_time());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_specifics_hash()) {
      set_specifics_hash(from.specifics_hash());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void EntityMetadata::CopyFrom(const EntityMetadata& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntityMetadata::IsInitialized() const {

  return true;
}

void EntityMetadata::Swap(EntityMetadata* other) {
  if (other != this) {
    std::swap(client_tag_hash_, other->client_tag_hash_);
    std::swap(server_id_, other->server_id_);
    std::swap(is_deleted_, other->is_deleted_);
    std::swap(sequence_number_, other->sequence_number_);
    std::swap(acked_sequence_number_, other->acked_sequence_number_);
    std::swap(server_version_, other->server_version_);
    std::swap(creation_time_, other->creation_time_);
    std::swap(modification_time_, other->modification_time_);
    std::swap(specifics_hash_, other->specifics_hash_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::std::string EntityMetadata::GetTypeName() const {
  return "sync_pb.EntityMetadata";
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)
