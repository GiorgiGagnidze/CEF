// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/socket.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/socket.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace socket {
//
// Types
//

std::string ToString(SocketType enum_param) {
  switch (enum_param) {
    case SOCKET_TYPE_TCP:
      return "tcp";
    case SOCKET_TYPE_UDP:
      return "udp";
    case SOCKET_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

SocketType ParseSocketType(const std::string& enum_string) {
  if (enum_string == "tcp")
    return SOCKET_TYPE_TCP;
  if (enum_string == "udp")
    return SOCKET_TYPE_UDP;
  return SOCKET_TYPE_NONE;
}


CreateOptions::CreateOptions()
 {}

CreateOptions::~CreateOptions() {}

// static
bool CreateOptions::Populate(
    const base::Value& value, CreateOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  return true;
}

// static
scoped_ptr<CreateOptions> CreateOptions::FromValue(const base::Value& value) {
  scoped_ptr<CreateOptions> out(new CreateOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<CreateOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> CreateOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());


  return value;
}


CreateInfo::CreateInfo()
: socket_id(0) {}

CreateInfo::~CreateInfo() {}

// static
bool CreateInfo::Populate(
    const base::Value& value, CreateInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* socket_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("socketId", &socket_id_value)) {
    return false;
  }
  {
    if (!socket_id_value->GetAsInteger(&out->socket_id)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<CreateInfo> CreateInfo::FromValue(const base::Value& value) {
  scoped_ptr<CreateInfo> out(new CreateInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<CreateInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> CreateInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("socketId", new base::FundamentalValue(this->socket_id));


  return value;
}


AcceptInfo::AcceptInfo()
: result_code(0) {}

AcceptInfo::~AcceptInfo() {}

// static
bool AcceptInfo::Populate(
    const base::Value& value, AcceptInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* result_code_value = NULL;
  if (!dict->GetWithoutPathExpansion("resultCode", &result_code_value)) {
    return false;
  }
  {
    if (!result_code_value->GetAsInteger(&out->result_code)) {
      return false;
    }
  }

  const base::Value* socket_id_value = NULL;
  if (dict->GetWithoutPathExpansion("socketId", &socket_id_value)) {
    {
      int temp;
      if (!socket_id_value->GetAsInteger(&temp)) {
        out->socket_id.reset();
        return false;
      }
      else
        out->socket_id.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<AcceptInfo> AcceptInfo::FromValue(const base::Value& value) {
  scoped_ptr<AcceptInfo> out(new AcceptInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<AcceptInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> AcceptInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("resultCode", new base::FundamentalValue(this->result_code));

  if (this->socket_id.get()) {
    value->SetWithoutPathExpansion("socketId", new base::FundamentalValue(*this->socket_id));

  }

  return value;
}


ReadInfo::ReadInfo()
: result_code(0) {}

ReadInfo::~ReadInfo() {}

// static
bool ReadInfo::Populate(
    const base::Value& value, ReadInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* result_code_value = NULL;
  if (!dict->GetWithoutPathExpansion("resultCode", &result_code_value)) {
    return false;
  }
  {
    if (!result_code_value->GetAsInteger(&out->result_code)) {
      return false;
    }
  }

  const base::Value* data_value = NULL;
  if (!dict->GetWithoutPathExpansion("data", &data_value)) {
    return false;
  }
  {
    const base::BinaryValue* binary_value = NULL;
    if (!data_value->IsType(base::Value::TYPE_BINARY)) {
      return false;
    }
    else {
       binary_value =
         static_cast<const base::BinaryValue*>(data_value);
      out->data.assign(
          binary_value->GetBuffer(),
          binary_value->GetBuffer() + binary_value->GetSize());
    }
  }

  return true;
}

// static
scoped_ptr<ReadInfo> ReadInfo::FromValue(const base::Value& value) {
  scoped_ptr<ReadInfo> out(new ReadInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<ReadInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> ReadInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("resultCode", new base::FundamentalValue(this->result_code));

  value->SetWithoutPathExpansion("data", base::BinaryValue::CreateWithCopiedBuffer(this->data.data(), this->data.size()));


  return value;
}


WriteInfo::WriteInfo()
: bytes_written(0) {}

WriteInfo::~WriteInfo() {}

// static
bool WriteInfo::Populate(
    const base::Value& value, WriteInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* bytes_written_value = NULL;
  if (!dict->GetWithoutPathExpansion("bytesWritten", &bytes_written_value)) {
    return false;
  }
  {
    if (!bytes_written_value->GetAsInteger(&out->bytes_written)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<WriteInfo> WriteInfo::FromValue(const base::Value& value) {
  scoped_ptr<WriteInfo> out(new WriteInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<WriteInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> WriteInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("bytesWritten", new base::FundamentalValue(this->bytes_written));


  return value;
}


RecvFromInfo::RecvFromInfo()
: result_code(0), port(0) {}

RecvFromInfo::~RecvFromInfo() {}

// static
bool RecvFromInfo::Populate(
    const base::Value& value, RecvFromInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* result_code_value = NULL;
  if (!dict->GetWithoutPathExpansion("resultCode", &result_code_value)) {
    return false;
  }
  {
    if (!result_code_value->GetAsInteger(&out->result_code)) {
      return false;
    }
  }

  const base::Value* data_value = NULL;
  if (!dict->GetWithoutPathExpansion("data", &data_value)) {
    return false;
  }
  {
    const base::BinaryValue* binary_value = NULL;
    if (!data_value->IsType(base::Value::TYPE_BINARY)) {
      return false;
    }
    else {
       binary_value =
         static_cast<const base::BinaryValue*>(data_value);
      out->data.assign(
          binary_value->GetBuffer(),
          binary_value->GetBuffer() + binary_value->GetSize());
    }
  }

  const base::Value* address_value = NULL;
  if (!dict->GetWithoutPathExpansion("address", &address_value)) {
    return false;
  }
  {
    if (!address_value->GetAsString(&out->address)) {
      return false;
    }
  }

  const base::Value* port_value = NULL;
  if (!dict->GetWithoutPathExpansion("port", &port_value)) {
    return false;
  }
  {
    if (!port_value->GetAsInteger(&out->port)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<RecvFromInfo> RecvFromInfo::FromValue(const base::Value& value) {
  scoped_ptr<RecvFromInfo> out(new RecvFromInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<RecvFromInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> RecvFromInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("resultCode", new base::FundamentalValue(this->result_code));

  value->SetWithoutPathExpansion("data", base::BinaryValue::CreateWithCopiedBuffer(this->data.data(), this->data.size()));

  value->SetWithoutPathExpansion("address", new base::StringValue(this->address));

  value->SetWithoutPathExpansion("port", new base::FundamentalValue(this->port));


  return value;
}


SocketInfo::SocketInfo()
: socket_type(SOCKET_TYPE_NONE), connected(false) {}

SocketInfo::~SocketInfo() {}

// static
bool SocketInfo::Populate(
    const base::Value& value, SocketInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* socket_type_value = NULL;
  if (!dict->GetWithoutPathExpansion("socketType", &socket_type_value)) {
    return false;
  }
  {
    std::string socket_type_as_string;
    if (!socket_type_value->GetAsString(&socket_type_as_string)) {
      return false;
    }
    out->socket_type = ParseSocketType(socket_type_as_string);
    if (out->socket_type == SOCKET_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* connected_value = NULL;
  if (!dict->GetWithoutPathExpansion("connected", &connected_value)) {
    return false;
  }
  {
    if (!connected_value->GetAsBoolean(&out->connected)) {
      return false;
    }
  }

  const base::Value* peer_address_value = NULL;
  if (dict->GetWithoutPathExpansion("peerAddress", &peer_address_value)) {
    {
      std::string temp;
      if (!peer_address_value->GetAsString(&temp)) {
        out->peer_address.reset();
        return false;
      }
      else
        out->peer_address.reset(new std::string(temp));
    }
  }

  const base::Value* peer_port_value = NULL;
  if (dict->GetWithoutPathExpansion("peerPort", &peer_port_value)) {
    {
      int temp;
      if (!peer_port_value->GetAsInteger(&temp)) {
        out->peer_port.reset();
        return false;
      }
      else
        out->peer_port.reset(new int(temp));
    }
  }

  const base::Value* local_address_value = NULL;
  if (dict->GetWithoutPathExpansion("localAddress", &local_address_value)) {
    {
      std::string temp;
      if (!local_address_value->GetAsString(&temp)) {
        out->local_address.reset();
        return false;
      }
      else
        out->local_address.reset(new std::string(temp));
    }
  }

  const base::Value* local_port_value = NULL;
  if (dict->GetWithoutPathExpansion("localPort", &local_port_value)) {
    {
      int temp;
      if (!local_port_value->GetAsInteger(&temp)) {
        out->local_port.reset();
        return false;
      }
      else
        out->local_port.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<SocketInfo> SocketInfo::FromValue(const base::Value& value) {
  scoped_ptr<SocketInfo> out(new SocketInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<SocketInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> SocketInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("socketType", new base::StringValue(socket::ToString(this->socket_type)));

  value->SetWithoutPathExpansion("connected", new base::FundamentalValue(this->connected));

  if (this->peer_address.get()) {
    value->SetWithoutPathExpansion("peerAddress", new base::StringValue(*this->peer_address));

  }
  if (this->peer_port.get()) {
    value->SetWithoutPathExpansion("peerPort", new base::FundamentalValue(*this->peer_port));

  }
  if (this->local_address.get()) {
    value->SetWithoutPathExpansion("localAddress", new base::StringValue(*this->local_address));

  }
  if (this->local_port.get()) {
    value->SetWithoutPathExpansion("localPort", new base::FundamentalValue(*this->local_port));

  }

  return value;
}


NetworkInterface::NetworkInterface()
: prefix_length(0) {}

NetworkInterface::~NetworkInterface() {}

// static
bool NetworkInterface::Populate(
    const base::Value& value, NetworkInterface* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* name_value = NULL;
  if (!dict->GetWithoutPathExpansion("name", &name_value)) {
    return false;
  }
  {
    if (!name_value->GetAsString(&out->name)) {
      return false;
    }
  }

  const base::Value* address_value = NULL;
  if (!dict->GetWithoutPathExpansion("address", &address_value)) {
    return false;
  }
  {
    if (!address_value->GetAsString(&out->address)) {
      return false;
    }
  }

  const base::Value* prefix_length_value = NULL;
  if (!dict->GetWithoutPathExpansion("prefixLength", &prefix_length_value)) {
    return false;
  }
  {
    if (!prefix_length_value->GetAsInteger(&out->prefix_length)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<NetworkInterface> NetworkInterface::FromValue(const base::Value& value) {
  scoped_ptr<NetworkInterface> out(new NetworkInterface());
  if (!Populate(value, out.get()))
    return scoped_ptr<NetworkInterface>();
  return out;
}

scoped_ptr<base::DictionaryValue> NetworkInterface::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("name", new base::StringValue(this->name));

  value->SetWithoutPathExpansion("address", new base::StringValue(this->address));

  value->SetWithoutPathExpansion("prefixLength", new base::FundamentalValue(this->prefix_length));


  return value;
}


TLSVersionConstraints::TLSVersionConstraints()
 {}

TLSVersionConstraints::~TLSVersionConstraints() {}

// static
bool TLSVersionConstraints::Populate(
    const base::Value& value, TLSVersionConstraints* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* min_value = NULL;
  if (dict->GetWithoutPathExpansion("min", &min_value)) {
    {
      std::string temp;
      if (!min_value->GetAsString(&temp)) {
        out->min.reset();
        return false;
      }
      else
        out->min.reset(new std::string(temp));
    }
  }

  const base::Value* max_value = NULL;
  if (dict->GetWithoutPathExpansion("max", &max_value)) {
    {
      std::string temp;
      if (!max_value->GetAsString(&temp)) {
        out->max.reset();
        return false;
      }
      else
        out->max.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<TLSVersionConstraints> TLSVersionConstraints::FromValue(const base::Value& value) {
  scoped_ptr<TLSVersionConstraints> out(new TLSVersionConstraints());
  if (!Populate(value, out.get()))
    return scoped_ptr<TLSVersionConstraints>();
  return out;
}

scoped_ptr<base::DictionaryValue> TLSVersionConstraints::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->min.get()) {
    value->SetWithoutPathExpansion("min", new base::StringValue(*this->min));

  }
  if (this->max.get()) {
    value->SetWithoutPathExpansion("max", new base::StringValue(*this->max));

  }

  return value;
}


SecureOptions::SecureOptions()
 {}

SecureOptions::~SecureOptions() {}

// static
bool SecureOptions::Populate(
    const base::Value& value, SecureOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* tls_version_value = NULL;
  if (dict->GetWithoutPathExpansion("tlsVersion", &tls_version_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!tls_version_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<TLSVersionConstraints> temp(new TLSVersionConstraints());
        if (!TLSVersionConstraints::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->tls_version = std::move(temp);
      }
    }
  }

  return true;
}

// static
scoped_ptr<SecureOptions> SecureOptions::FromValue(const base::Value& value) {
  scoped_ptr<SecureOptions> out(new SecureOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<SecureOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> SecureOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->tls_version.get()) {
    value->SetWithoutPathExpansion("tlsVersion", (this->tls_version)->ToValue().release());

  }

  return value;
}



//
// Functions
//

namespace Create {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* type_value = NULL;
  if (args.Get(0, &type_value) &&
      !type_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string socket_type_as_string;
      if (!type_value->GetAsString(&socket_type_as_string)) {
        return scoped_ptr<Params>();
      }
      params->type = ParseSocketType(socket_type_as_string);
      if (params->type == SOCKET_TYPE_NONE) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* options_value = NULL;
  if (args.Get(1, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      else {
        scoped_ptr<CreateOptions> temp(new CreateOptions());
        if (!CreateOptions::Populate(*dictionary, temp.get())) {
          return scoped_ptr<Params>();
        }
        else
          params->options = std::move(temp);
      }
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const CreateInfo& create_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((create_info).ToValue().release());

  return create_results;
}
}  // namespace Create

namespace Destroy {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace Destroy

namespace Connect {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 3) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* hostname_value = NULL;
  if (args.Get(1, &hostname_value) &&
      !hostname_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!hostname_value->GetAsString(&params->hostname)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* port_value = NULL;
  if (args.Get(2, &port_value) &&
      !port_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!port_value->GetAsInteger(&params->port)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(int result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace Connect

namespace Bind {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 3) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* address_value = NULL;
  if (args.Get(1, &address_value) &&
      !address_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!address_value->GetAsString(&params->address)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* port_value = NULL;
  if (args.Get(2, &port_value) &&
      !port_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!port_value->GetAsInteger(&params->port)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(int result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace Bind

namespace Disconnect {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace Disconnect

namespace Read {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* buffer_size_value = NULL;
  if (args.Get(1, &buffer_size_value) &&
      !buffer_size_value->IsType(base::Value::TYPE_NULL)) {
    {
      int temp;
      if (!buffer_size_value->GetAsInteger(&temp)) {
        params->buffer_size.reset();
        return scoped_ptr<Params>();
      }
      else
        params->buffer_size.reset(new int(temp));
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const ReadInfo& read_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((read_info).ToValue().release());

  return create_results;
}
}  // namespace Read

namespace Write {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* data_value = NULL;
  if (args.Get(1, &data_value) &&
      !data_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::BinaryValue* binary_value = NULL;
      if (!data_value->IsType(base::Value::TYPE_BINARY)) {
        return scoped_ptr<Params>();
      }
      else {
         binary_value =
           static_cast<const base::BinaryValue*>(data_value);
        params->data.assign(
            binary_value->GetBuffer(),
            binary_value->GetBuffer() + binary_value->GetSize());
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const WriteInfo& write_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((write_info).ToValue().release());

  return create_results;
}
}  // namespace Write

namespace RecvFrom {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* buffer_size_value = NULL;
  if (args.Get(1, &buffer_size_value) &&
      !buffer_size_value->IsType(base::Value::TYPE_NULL)) {
    {
      int temp;
      if (!buffer_size_value->GetAsInteger(&temp)) {
        params->buffer_size.reset();
        return scoped_ptr<Params>();
      }
      else
        params->buffer_size.reset(new int(temp));
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const RecvFromInfo& recv_from_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((recv_from_info).ToValue().release());

  return create_results;
}
}  // namespace RecvFrom

namespace SendTo {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 4) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* data_value = NULL;
  if (args.Get(1, &data_value) &&
      !data_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::BinaryValue* binary_value = NULL;
      if (!data_value->IsType(base::Value::TYPE_BINARY)) {
        return scoped_ptr<Params>();
      }
      else {
         binary_value =
           static_cast<const base::BinaryValue*>(data_value);
        params->data.assign(
            binary_value->GetBuffer(),
            binary_value->GetBuffer() + binary_value->GetSize());
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* address_value = NULL;
  if (args.Get(2, &address_value) &&
      !address_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!address_value->GetAsString(&params->address)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* port_value = NULL;
  if (args.Get(3, &port_value) &&
      !port_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!port_value->GetAsInteger(&params->port)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const WriteInfo& write_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((write_info).ToValue().release());

  return create_results;
}
}  // namespace SendTo

namespace Listen {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 3 || args.GetSize() > 4) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* address_value = NULL;
  if (args.Get(1, &address_value) &&
      !address_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!address_value->GetAsString(&params->address)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* port_value = NULL;
  if (args.Get(2, &port_value) &&
      !port_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!port_value->GetAsInteger(&params->port)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* backlog_value = NULL;
  if (args.Get(3, &backlog_value) &&
      !backlog_value->IsType(base::Value::TYPE_NULL)) {
    {
      int temp;
      if (!backlog_value->GetAsInteger(&temp)) {
        params->backlog.reset();
        return scoped_ptr<Params>();
      }
      else
        params->backlog.reset(new int(temp));
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(int result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace Listen

namespace Accept {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const AcceptInfo& accept_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((accept_info).ToValue().release());

  return create_results;
}
}  // namespace Accept

namespace SetKeepAlive {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 2 || args.GetSize() > 3) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* enable_value = NULL;
  if (args.Get(1, &enable_value) &&
      !enable_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!enable_value->GetAsBoolean(&params->enable)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* delay_value = NULL;
  if (args.Get(2, &delay_value) &&
      !delay_value->IsType(base::Value::TYPE_NULL)) {
    {
      int temp;
      if (!delay_value->GetAsInteger(&temp)) {
        params->delay.reset();
        return scoped_ptr<Params>();
      }
      else
        params->delay.reset(new int(temp));
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(bool result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace SetKeepAlive

namespace SetNoDelay {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* no_delay_value = NULL;
  if (args.Get(1, &no_delay_value) &&
      !no_delay_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!no_delay_value->GetAsBoolean(&params->no_delay)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(bool result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace SetNoDelay

namespace GetInfo {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const SocketInfo& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((result).ToValue().release());

  return create_results;
}
}  // namespace GetInfo

namespace GetNetworkList {

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<NetworkInterface> >& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(result).release());

  return create_results;
}
}  // namespace GetNetworkList

namespace JoinGroup {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* address_value = NULL;
  if (args.Get(1, &address_value) &&
      !address_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!address_value->GetAsString(&params->address)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(int result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace JoinGroup

namespace LeaveGroup {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* address_value = NULL;
  if (args.Get(1, &address_value) &&
      !address_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!address_value->GetAsString(&params->address)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(int result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace LeaveGroup

namespace SetMulticastTimeToLive {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* ttl_value = NULL;
  if (args.Get(1, &ttl_value) &&
      !ttl_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!ttl_value->GetAsInteger(&params->ttl)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(int result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace SetMulticastTimeToLive

namespace SetMulticastLoopbackMode {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* enabled_value = NULL;
  if (args.Get(1, &enabled_value) &&
      !enabled_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!enabled_value->GetAsBoolean(&params->enabled)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(int result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace SetMulticastLoopbackMode

namespace GetJoinedGroups {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<std::string>& groups) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(groups).release());

  return create_results;
}
}  // namespace GetJoinedGroups

namespace Secure {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* socket_id_value = NULL;
  if (args.Get(0, &socket_id_value) &&
      !socket_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!socket_id_value->GetAsInteger(&params->socket_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* options_value = NULL;
  if (args.Get(1, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      else {
        scoped_ptr<SecureOptions> temp(new SecureOptions());
        if (!SecureOptions::Populate(*dictionary, temp.get())) {
          return scoped_ptr<Params>();
        }
        else
          params->options = std::move(temp);
      }
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(int result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace Secure

}  // namespace socket
}  // namespace api
}  // namespace extensions

