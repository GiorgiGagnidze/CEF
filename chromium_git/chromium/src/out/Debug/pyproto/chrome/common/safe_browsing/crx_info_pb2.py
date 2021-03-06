# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: crx_info.proto

from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)




DESCRIPTOR = _descriptor.FileDescriptor(
  name='crx_info.proto',
  package='extensions',
  serialized_pb='\n\x0e\x63rx_info.proto\x12\nextensions\"6\n\x18\x43lientCRXListInfoRequest\x12\n\n\x02id\x18\x01 \x02(\t\x12\x0e\n\x06locale\x18\x02 \x01(\t\"\xdb\x02\n\x19\x43lientCRXListInfoResponse\x12P\n\x07verdict\x18\x01 \x01(\x0e\x32-.extensions.ClientCRXListInfoResponse.Verdict:\x10NOT_IN_BLACKLIST\x12G\n\x0cuser_message\x18\x02 \x01(\x0b\x32\x31.extensions.ClientCRXListInfoResponse.UserMessage\x1a%\n\x0bUserMessage\x12\x16\n\x0e\x64\x65tail_message\x18\x01 \x01(\t\"|\n\x07Verdict\x12\x14\n\x10NOT_IN_BLACKLIST\x10\x00\x12\x0b\n\x07MALWARE\x10\x01\x12\x1a\n\x16SECURITY_VULNERABILITY\x10\x02\x12\x18\n\x14\x43WS_POLICY_VIOLATION\x10\x03\x12\x18\n\x14POTENTIALLY_UNWANTED\x10\x04\x42\x02H\x03')



_CLIENTCRXLISTINFORESPONSE_VERDICT = _descriptor.EnumDescriptor(
  name='Verdict',
  full_name='extensions.ClientCRXListInfoResponse.Verdict',
  filename=None,
  file=DESCRIPTOR,
  values=[
    _descriptor.EnumValueDescriptor(
      name='NOT_IN_BLACKLIST', index=0, number=0,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='MALWARE', index=1, number=1,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='SECURITY_VULNERABILITY', index=2, number=2,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='CWS_POLICY_VIOLATION', index=3, number=3,
      options=None,
      type=None),
    _descriptor.EnumValueDescriptor(
      name='POTENTIALLY_UNWANTED', index=4, number=4,
      options=None,
      type=None),
  ],
  containing_type=None,
  options=None,
  serialized_start=310,
  serialized_end=434,
)


_CLIENTCRXLISTINFOREQUEST = _descriptor.Descriptor(
  name='ClientCRXListInfoRequest',
  full_name='extensions.ClientCRXListInfoRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='extensions.ClientCRXListInfoRequest.id', index=0,
      number=1, type=9, cpp_type=9, label=2,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='locale', full_name='extensions.ClientCRXListInfoRequest.locale', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=30,
  serialized_end=84,
)


_CLIENTCRXLISTINFORESPONSE_USERMESSAGE = _descriptor.Descriptor(
  name='UserMessage',
  full_name='extensions.ClientCRXListInfoResponse.UserMessage',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='detail_message', full_name='extensions.ClientCRXListInfoResponse.UserMessage.detail_message', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=unicode("", "utf-8"),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=271,
  serialized_end=308,
)

_CLIENTCRXLISTINFORESPONSE = _descriptor.Descriptor(
  name='ClientCRXListInfoResponse',
  full_name='extensions.ClientCRXListInfoResponse',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='verdict', full_name='extensions.ClientCRXListInfoResponse.verdict', index=0,
      number=1, type=14, cpp_type=8, label=1,
      has_default_value=True, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='user_message', full_name='extensions.ClientCRXListInfoResponse.user_message', index=1,
      number=2, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[_CLIENTCRXLISTINFORESPONSE_USERMESSAGE, ],
  enum_types=[
    _CLIENTCRXLISTINFORESPONSE_VERDICT,
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=87,
  serialized_end=434,
)

_CLIENTCRXLISTINFORESPONSE_USERMESSAGE.containing_type = _CLIENTCRXLISTINFORESPONSE;
_CLIENTCRXLISTINFORESPONSE.fields_by_name['verdict'].enum_type = _CLIENTCRXLISTINFORESPONSE_VERDICT
_CLIENTCRXLISTINFORESPONSE.fields_by_name['user_message'].message_type = _CLIENTCRXLISTINFORESPONSE_USERMESSAGE
_CLIENTCRXLISTINFORESPONSE_VERDICT.containing_type = _CLIENTCRXLISTINFORESPONSE;
DESCRIPTOR.message_types_by_name['ClientCRXListInfoRequest'] = _CLIENTCRXLISTINFOREQUEST
DESCRIPTOR.message_types_by_name['ClientCRXListInfoResponse'] = _CLIENTCRXLISTINFORESPONSE

class ClientCRXListInfoRequest(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _CLIENTCRXLISTINFOREQUEST

  # @@protoc_insertion_point(class_scope:extensions.ClientCRXListInfoRequest)

class ClientCRXListInfoResponse(_message.Message):
  __metaclass__ = _reflection.GeneratedProtocolMessageType

  class UserMessage(_message.Message):
    __metaclass__ = _reflection.GeneratedProtocolMessageType
    DESCRIPTOR = _CLIENTCRXLISTINFORESPONSE_USERMESSAGE

    # @@protoc_insertion_point(class_scope:extensions.ClientCRXListInfoResponse.UserMessage)
  DESCRIPTOR = _CLIENTCRXLISTINFORESPONSE

  # @@protoc_insertion_point(class_scope:extensions.ClientCRXListInfoResponse)


DESCRIPTOR.has_options = True
DESCRIPTOR._options = _descriptor._ParseOptions(descriptor_pb2.FileOptions(), 'H\003')
# @@protoc_insertion_point(module_scope)
