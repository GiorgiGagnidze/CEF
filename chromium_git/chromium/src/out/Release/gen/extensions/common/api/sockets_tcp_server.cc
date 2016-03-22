// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/sockets_tcp_server.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/sockets_tcp_server.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace sockets_tcp_server {
//
// Types
//

SocketProperties::SocketProperties()
 {}

SocketProperties::~SocketProperties() {}

// static
bool SocketProperties::Populate(
    const base::Value& value, SocketProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* persistent_value = NULL;
  if (dict->GetWithoutPathExpansion("persistent", &persistent_value)) {
    {
      bool temp;
      if (!persistent_value->GetAsBoolean(&temp)) {
        out->persistent.reset();
        return false;
      }
      else
        out->persistent.reset(new bool(temp));
    }
  }

  const base::Value* name_value = NULL;
  if (dict->GetWithoutPathExpansion("name", &name_value)) {
    {
      std::string temp;
      if (!name_value->GetAsString(&temp)) {
        out->name.reset();
        return false;
      }
      else
        out->name.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<SocketProperties> SocketProperties::FromValue(const base::Value& value) {
  scoped_ptr<SocketProperties> out(new SocketProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<SocketProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> SocketProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->persistent.get()) {
    value->SetWithoutPathExpansion("persistent", new base::FundamentalValue(*this->persistent));

  }
  if (this->name.get()) {
    value->SetWithoutPathExpansion("name", new base::StringValue(*this->name));

  }

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


SocketInfo::SocketInfo()
: socket_id(0), persistent(false), paused(false) {}

SocketInfo::~SocketInfo() {}

// static
bool SocketInfo::Populate(
    const base::Value& value, SocketInfo* out) {
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

  const base::Value* persistent_value = NULL;
  if (!dict->GetWithoutPathExpansion("persistent", &persistent_value)) {
    return false;
  }
  {
    if (!persistent_value->GetAsBoolean(&out->persistent)) {
      return false;
    }
  }

  const base::Value* name_value = NULL;
  if (dict->GetWithoutPathExpansion("name", &name_value)) {
    {
      std::string temp;
      if (!name_value->GetAsString(&temp)) {
        out->name.reset();
        return false;
      }
      else
        out->name.reset(new std::string(temp));
    }
  }

  const base::Value* paused_value = NULL;
  if (!dict->GetWithoutPathExpansion("paused", &paused_value)) {
    return false;
  }
  {
    if (!paused_value->GetAsBoolean(&out->paused)) {
      return false;
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

  value->SetWithoutPathExpansion("socketId", new base::FundamentalValue(this->socket_id));

  value->SetWithoutPathExpansion("persistent", new base::FundamentalValue(this->persistent));

  if (this->name.get()) {
    value->SetWithoutPathExpansion("name", new base::StringValue(*this->name));

  }
  value->SetWithoutPathExpansion("paused", new base::FundamentalValue(this->paused));

  if (this->local_address.get()) {
    value->SetWithoutPathExpansion("localAddress", new base::StringValue(*this->local_address));

  }
  if (this->local_port.get()) {
    value->SetWithoutPathExpansion("localPort", new base::FundamentalValue(*this->local_port));

  }

  return value;
}


AcceptInfo::AcceptInfo()
: socket_id(0), client_socket_id(0) {}

AcceptInfo::~AcceptInfo() {}

// static
bool AcceptInfo::Populate(
    const base::Value& value, AcceptInfo* out) {
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

  const base::Value* client_socket_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("clientSocketId", &client_socket_id_value)) {
    return false;
  }
  {
    if (!client_socket_id_value->GetAsInteger(&out->client_socket_id)) {
      return false;
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

  value->SetWithoutPathExpansion("socketId", new base::FundamentalValue(this->socket_id));

  value->SetWithoutPathExpansion("clientSocketId", new base::FundamentalValue(this->client_socket_id));


  return value;
}


AcceptErrorInfo::AcceptErrorInfo()
: socket_id(0), result_code(0) {}

AcceptErrorInfo::~AcceptErrorInfo() {}

// static
bool AcceptErrorInfo::Populate(
    const base::Value& value, AcceptErrorInfo* out) {
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

  const base::Value* result_code_value = NULL;
  if (!dict->GetWithoutPathExpansion("resultCode", &result_code_value)) {
    return false;
  }
  {
    if (!result_code_value->GetAsInteger(&out->result_code)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<AcceptErrorInfo> AcceptErrorInfo::FromValue(const base::Value& value) {
  scoped_ptr<AcceptErrorInfo> out(new AcceptErrorInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<AcceptErrorInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> AcceptErrorInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("socketId", new base::FundamentalValue(this->socket_id));

  value->SetWithoutPathExpansion("resultCode", new base::FundamentalValue(this->result_code));


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
  if (args.GetSize() > 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* properties_value = NULL;
  if (args.Get(0, &properties_value) &&
      !properties_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!properties_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      else {
        scoped_ptr<SocketProperties> temp(new SocketProperties());
        if (!SocketProperties::Populate(*dictionary, temp.get())) {
          return scoped_ptr<Params>();
        }
        else
          params->properties = std::move(temp);
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

namespace Update {

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

  const base::Value* properties_value = NULL;
  if (args.Get(1, &properties_value) &&
      !properties_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!properties_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!SocketProperties::Populate(*dictionary, &params->properties)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace Update

namespace SetPaused {

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

  const base::Value* paused_value = NULL;
  if (args.Get(1, &paused_value) &&
      !paused_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!paused_value->GetAsBoolean(&params->paused)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace SetPaused

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


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace Disconnect

namespace Close {

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


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace Close

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


scoped_ptr<base::ListValue> Results::Create(const SocketInfo& socket_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((socket_info).ToValue().release());

  return create_results;
}
}  // namespace GetInfo

namespace GetSockets {

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<SocketInfo> >& socket_infos) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(socket_infos).release());

  return create_results;
}
}  // namespace GetSockets

//
// Events
//

namespace OnAccept {

const char kEventName[] = "sockets.tcpServer.onAccept";

scoped_ptr<base::ListValue> Create(const AcceptInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnAccept

namespace OnAcceptError {

const char kEventName[] = "sockets.tcpServer.onAcceptError";

scoped_ptr<base::ListValue> Create(const AcceptErrorInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnAcceptError

}  // namespace sockets_tcp_server
}  // namespace api
}  // namespace extensions

