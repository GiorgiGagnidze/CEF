// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/bluetooth_socket.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/bluetooth_socket.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace bluetooth_socket {
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

  const base::Value* buffer_size_value = NULL;
  if (dict->GetWithoutPathExpansion("bufferSize", &buffer_size_value)) {
    {
      int temp;
      if (!buffer_size_value->GetAsInteger(&temp)) {
        out->buffer_size.reset();
        return false;
      }
      else
        out->buffer_size.reset(new int(temp));
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
  if (this->buffer_size.get()) {
    value->SetWithoutPathExpansion("bufferSize", new base::FundamentalValue(*this->buffer_size));

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


ListenOptions::ListenOptions()
 {}

ListenOptions::~ListenOptions() {}

// static
bool ListenOptions::Populate(
    const base::Value& value, ListenOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* channel_value = NULL;
  if (dict->GetWithoutPathExpansion("channel", &channel_value)) {
    {
      int temp;
      if (!channel_value->GetAsInteger(&temp)) {
        out->channel.reset();
        return false;
      }
      else
        out->channel.reset(new int(temp));
    }
  }

  const base::Value* psm_value = NULL;
  if (dict->GetWithoutPathExpansion("psm", &psm_value)) {
    {
      int temp;
      if (!psm_value->GetAsInteger(&temp)) {
        out->psm.reset();
        return false;
      }
      else
        out->psm.reset(new int(temp));
    }
  }

  const base::Value* backlog_value = NULL;
  if (dict->GetWithoutPathExpansion("backlog", &backlog_value)) {
    {
      int temp;
      if (!backlog_value->GetAsInteger(&temp)) {
        out->backlog.reset();
        return false;
      }
      else
        out->backlog.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ListenOptions> ListenOptions::FromValue(const base::Value& value) {
  scoped_ptr<ListenOptions> out(new ListenOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<ListenOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> ListenOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->channel.get()) {
    value->SetWithoutPathExpansion("channel", new base::FundamentalValue(*this->channel));

  }
  if (this->psm.get()) {
    value->SetWithoutPathExpansion("psm", new base::FundamentalValue(*this->psm));

  }
  if (this->backlog.get()) {
    value->SetWithoutPathExpansion("backlog", new base::FundamentalValue(*this->backlog));

  }

  return value;
}


SocketInfo::SocketInfo()
: socket_id(0), persistent(false), paused(false), connected(false) {}

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

  const base::Value* buffer_size_value = NULL;
  if (dict->GetWithoutPathExpansion("bufferSize", &buffer_size_value)) {
    {
      int temp;
      if (!buffer_size_value->GetAsInteger(&temp)) {
        out->buffer_size.reset();
        return false;
      }
      else
        out->buffer_size.reset(new int(temp));
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

  const base::Value* connected_value = NULL;
  if (!dict->GetWithoutPathExpansion("connected", &connected_value)) {
    return false;
  }
  {
    if (!connected_value->GetAsBoolean(&out->connected)) {
      return false;
    }
  }

  const base::Value* address_value = NULL;
  if (dict->GetWithoutPathExpansion("address", &address_value)) {
    {
      std::string temp;
      if (!address_value->GetAsString(&temp)) {
        out->address.reset();
        return false;
      }
      else
        out->address.reset(new std::string(temp));
    }
  }

  const base::Value* uuid_value = NULL;
  if (dict->GetWithoutPathExpansion("uuid", &uuid_value)) {
    {
      std::string temp;
      if (!uuid_value->GetAsString(&temp)) {
        out->uuid.reset();
        return false;
      }
      else
        out->uuid.reset(new std::string(temp));
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
  if (this->buffer_size.get()) {
    value->SetWithoutPathExpansion("bufferSize", new base::FundamentalValue(*this->buffer_size));

  }
  value->SetWithoutPathExpansion("paused", new base::FundamentalValue(this->paused));

  value->SetWithoutPathExpansion("connected", new base::FundamentalValue(this->connected));

  if (this->address.get()) {
    value->SetWithoutPathExpansion("address", new base::StringValue(*this->address));

  }
  if (this->uuid.get()) {
    value->SetWithoutPathExpansion("uuid", new base::StringValue(*this->uuid));

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


std::string ToString(AcceptError enum_param) {
  switch (enum_param) {
    case ACCEPT_ERROR_SYSTEM_ERROR:
      return "system_error";
    case ACCEPT_ERROR_NOT_LISTENING:
      return "not_listening";
    case ACCEPT_ERROR_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

AcceptError ParseAcceptError(const std::string& enum_string) {
  if (enum_string == "system_error")
    return ACCEPT_ERROR_SYSTEM_ERROR;
  if (enum_string == "not_listening")
    return ACCEPT_ERROR_NOT_LISTENING;
  return ACCEPT_ERROR_NONE;
}


AcceptErrorInfo::AcceptErrorInfo()
: socket_id(0), error(ACCEPT_ERROR_NONE) {}

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

  const base::Value* error_message_value = NULL;
  if (!dict->GetWithoutPathExpansion("errorMessage", &error_message_value)) {
    return false;
  }
  {
    if (!error_message_value->GetAsString(&out->error_message)) {
      return false;
    }
  }

  const base::Value* error_value = NULL;
  if (!dict->GetWithoutPathExpansion("error", &error_value)) {
    return false;
  }
  {
    std::string accept_error_as_string;
    if (!error_value->GetAsString(&accept_error_as_string)) {
      return false;
    }
    out->error = ParseAcceptError(accept_error_as_string);
    if (out->error == ACCEPT_ERROR_NONE) {
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

  value->SetWithoutPathExpansion("errorMessage", new base::StringValue(this->error_message));

  value->SetWithoutPathExpansion("error", new base::StringValue(bluetooth_socket::ToString(this->error)));


  return value;
}


ReceiveInfo::ReceiveInfo()
: socket_id(0) {}

ReceiveInfo::~ReceiveInfo() {}

// static
bool ReceiveInfo::Populate(
    const base::Value& value, ReceiveInfo* out) {
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
scoped_ptr<ReceiveInfo> ReceiveInfo::FromValue(const base::Value& value) {
  scoped_ptr<ReceiveInfo> out(new ReceiveInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<ReceiveInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> ReceiveInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("socketId", new base::FundamentalValue(this->socket_id));

  value->SetWithoutPathExpansion("data", base::BinaryValue::CreateWithCopiedBuffer(this->data.data(), this->data.size()));


  return value;
}


std::string ToString(ReceiveError enum_param) {
  switch (enum_param) {
    case RECEIVE_ERROR_DISCONNECTED:
      return "disconnected";
    case RECEIVE_ERROR_SYSTEM_ERROR:
      return "system_error";
    case RECEIVE_ERROR_NOT_CONNECTED:
      return "not_connected";
    case RECEIVE_ERROR_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ReceiveError ParseReceiveError(const std::string& enum_string) {
  if (enum_string == "disconnected")
    return RECEIVE_ERROR_DISCONNECTED;
  if (enum_string == "system_error")
    return RECEIVE_ERROR_SYSTEM_ERROR;
  if (enum_string == "not_connected")
    return RECEIVE_ERROR_NOT_CONNECTED;
  return RECEIVE_ERROR_NONE;
}


ReceiveErrorInfo::ReceiveErrorInfo()
: socket_id(0), error(RECEIVE_ERROR_NONE) {}

ReceiveErrorInfo::~ReceiveErrorInfo() {}

// static
bool ReceiveErrorInfo::Populate(
    const base::Value& value, ReceiveErrorInfo* out) {
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

  const base::Value* error_message_value = NULL;
  if (!dict->GetWithoutPathExpansion("errorMessage", &error_message_value)) {
    return false;
  }
  {
    if (!error_message_value->GetAsString(&out->error_message)) {
      return false;
    }
  }

  const base::Value* error_value = NULL;
  if (!dict->GetWithoutPathExpansion("error", &error_value)) {
    return false;
  }
  {
    std::string receive_error_as_string;
    if (!error_value->GetAsString(&receive_error_as_string)) {
      return false;
    }
    out->error = ParseReceiveError(receive_error_as_string);
    if (out->error == RECEIVE_ERROR_NONE) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<ReceiveErrorInfo> ReceiveErrorInfo::FromValue(const base::Value& value) {
  scoped_ptr<ReceiveErrorInfo> out(new ReceiveErrorInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<ReceiveErrorInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> ReceiveErrorInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("socketId", new base::FundamentalValue(this->socket_id));

  value->SetWithoutPathExpansion("errorMessage", new base::StringValue(this->error_message));

  value->SetWithoutPathExpansion("error", new base::StringValue(bluetooth_socket::ToString(this->error)));


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

namespace ListenUsingRfcomm {

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

  const base::Value* uuid_value = NULL;
  if (args.Get(1, &uuid_value) &&
      !uuid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!uuid_value->GetAsString(&params->uuid)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* options_value = NULL;
  if (args.Get(2, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      else {
        scoped_ptr<ListenOptions> temp(new ListenOptions());
        if (!ListenOptions::Populate(*dictionary, temp.get())) {
          return scoped_ptr<Params>();
        }
        else
          params->options = std::move(temp);
      }
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace ListenUsingRfcomm

namespace ListenUsingL2cap {

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

  const base::Value* uuid_value = NULL;
  if (args.Get(1, &uuid_value) &&
      !uuid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!uuid_value->GetAsString(&params->uuid)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* options_value = NULL;
  if (args.Get(2, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      else {
        scoped_ptr<ListenOptions> temp(new ListenOptions());
        if (!ListenOptions::Populate(*dictionary, temp.get())) {
          return scoped_ptr<Params>();
        }
        else
          params->options = std::move(temp);
      }
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace ListenUsingL2cap

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

  const base::Value* uuid_value = NULL;
  if (args.Get(2, &uuid_value) &&
      !uuid_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!uuid_value->GetAsString(&params->uuid)) {
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
}  // namespace Connect

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

namespace Send {

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


scoped_ptr<base::ListValue> Results::Create(int bytes_sent) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(bytes_sent));

  return create_results;
}
}  // namespace Send

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

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<SocketInfo> >& sockets) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(sockets).release());

  return create_results;
}
}  // namespace GetSockets

//
// Events
//

namespace OnAccept {

const char kEventName[] = "bluetoothSocket.onAccept";

scoped_ptr<base::ListValue> Create(const AcceptInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnAccept

namespace OnAcceptError {

const char kEventName[] = "bluetoothSocket.onAcceptError";

scoped_ptr<base::ListValue> Create(const AcceptErrorInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnAcceptError

namespace OnReceive {

const char kEventName[] = "bluetoothSocket.onReceive";

scoped_ptr<base::ListValue> Create(const ReceiveInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnReceive

namespace OnReceiveError {

const char kEventName[] = "bluetoothSocket.onReceiveError";

scoped_ptr<base::ListValue> Create(const ReceiveErrorInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnReceiveError

}  // namespace bluetooth_socket
}  // namespace api
}  // namespace extensions

