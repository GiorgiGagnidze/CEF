// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/extensions_manifest_types.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/extensions_manifest_types.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace extensions_manifest_types {
//
// Types
//

ContentCapabilities::ContentCapabilities()
 {}

ContentCapabilities::~ContentCapabilities() {}

// static
bool ContentCapabilities::Populate(
    const base::Value& value, ContentCapabilities* out, base::string16* error) {
  DCHECK(error);
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(value.GetType())));
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  std::set<std::string> keys;
  keys.insert("matches");
  const base::Value* matches_value = NULL;
  if (!dict->GetWithoutPathExpansion("matches", &matches_value)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("'matches' is required"));
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!matches_value->GetAsList(&list)) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("'matches': expected list, got " + json_schema_compiler::util::ValueTypeToString(matches_value->GetType())));
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->matches, error)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("unable to populate array 'ContentCapabilities'"));
        return false;
      }
    }
  }

  keys.insert("permissions");
  const base::Value* permissions_value = NULL;
  if (!dict->GetWithoutPathExpansion("permissions", &permissions_value)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("'permissions' is required"));
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!permissions_value->GetAsList(&list)) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("'permissions': expected list, got " + json_schema_compiler::util::ValueTypeToString(permissions_value->GetType())));
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->permissions, error)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("unable to populate array 'ContentCapabilities'"));
        return false;
      }
    }
  }

  for (base::DictionaryValue::Iterator it(*dict); !it.IsAtEnd(); it.Advance()) {
    if (!keys.count(it.key())) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("found unexpected key '" + it.key() + "'"));
    }
  }
  return true;
}

// static
scoped_ptr<ContentCapabilities> ContentCapabilities::FromValue(const base::Value& value, base::string16* error) {
DCHECK(error);
  scoped_ptr<ContentCapabilities> out(new ContentCapabilities());
  if (!Populate(value, out.get(), error))
    return scoped_ptr<ContentCapabilities>();
  return out;
}

scoped_ptr<base::DictionaryValue> ContentCapabilities::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("matches", json_schema_compiler::util::CreateValueFromArray(this->matches).release());

  value->SetWithoutPathExpansion("permissions", json_schema_compiler::util::CreateValueFromArray(this->permissions).release());


  return value;
}


ExternallyConnectable::ExternallyConnectable()
 {}

ExternallyConnectable::~ExternallyConnectable() {}

// static
bool ExternallyConnectable::Populate(
    const base::Value& value, ExternallyConnectable* out, base::string16* error) {
  DCHECK(error);
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(value.GetType())));
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  std::set<std::string> keys;
  keys.insert("ids");
  const base::Value* ids_value = NULL;
  if (dict->GetWithoutPathExpansion("ids", &ids_value)) {
    {
      const base::ListValue* list = NULL;
      if (!ids_value->GetAsList(&list)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'ids': expected list, got " + json_schema_compiler::util::ValueTypeToString(ids_value->GetType())));
        out->ids.reset();
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->ids, error)) {
          if (error->length())
            error->append(UTF8ToUTF16("; "));
          error->append(UTF8ToUTF16("unable to populate array 'ExternallyConnectable'"));
          out->ids.reset();
        }
      }
    }
  }

  keys.insert("matches");
  const base::Value* matches_value = NULL;
  if (dict->GetWithoutPathExpansion("matches", &matches_value)) {
    {
      const base::ListValue* list = NULL;
      if (!matches_value->GetAsList(&list)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'matches': expected list, got " + json_schema_compiler::util::ValueTypeToString(matches_value->GetType())));
        out->matches.reset();
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->matches, error)) {
          if (error->length())
            error->append(UTF8ToUTF16("; "));
          error->append(UTF8ToUTF16("unable to populate array 'ExternallyConnectable'"));
          out->matches.reset();
        }
      }
    }
  }

  keys.insert("accepts_tls_channel_id");
  const base::Value* accepts_tls_channel_id_value = NULL;
  if (dict->GetWithoutPathExpansion("accepts_tls_channel_id", &accepts_tls_channel_id_value)) {
    {
      bool temp;
      if (!accepts_tls_channel_id_value->GetAsBoolean(&temp)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'accepts_tls_channel_id': expected accepts_tls_channel_id, got " + json_schema_compiler::util::ValueTypeToString(accepts_tls_channel_id_value->GetType())));
        out->accepts_tls_channel_id.reset();
      }
      else
        out->accepts_tls_channel_id.reset(new bool(temp));
    }
  }

  for (base::DictionaryValue::Iterator it(*dict); !it.IsAtEnd(); it.Advance()) {
    if (!keys.count(it.key())) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("found unexpected key '" + it.key() + "'"));
    }
  }
  return true;
}

// static
scoped_ptr<ExternallyConnectable> ExternallyConnectable::FromValue(const base::Value& value, base::string16* error) {
DCHECK(error);
  scoped_ptr<ExternallyConnectable> out(new ExternallyConnectable());
  if (!Populate(value, out.get(), error))
    return scoped_ptr<ExternallyConnectable>();
  return out;
}

scoped_ptr<base::DictionaryValue> ExternallyConnectable::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->ids.get()) {
    value->SetWithoutPathExpansion("ids", json_schema_compiler::util::CreateValueFromOptionalArray(this->ids).release());

  }
  if (this->matches.get()) {
    value->SetWithoutPathExpansion("matches", json_schema_compiler::util::CreateValueFromOptionalArray(this->matches).release());

  }
  if (this->accepts_tls_channel_id.get()) {
    value->SetWithoutPathExpansion("accepts_tls_channel_id", new base::FundamentalValue(*this->accepts_tls_channel_id));

  }

  return value;
}


OptionsUI::OptionsUI()
 {}

OptionsUI::~OptionsUI() {}

// static
bool OptionsUI::Populate(
    const base::Value& value, OptionsUI* out, base::string16* error) {
  DCHECK(error);
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(value.GetType())));
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  std::set<std::string> keys;
  keys.insert("page");
  const base::Value* page_value = NULL;
  if (!dict->GetWithoutPathExpansion("page", &page_value)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("'page' is required"));
    return false;
  }
  {
    if (!page_value->GetAsString(&out->page)) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("'page': expected page, got " + json_schema_compiler::util::ValueTypeToString(page_value->GetType())));
      return false;
    }
  }

  keys.insert("chrome_style");
  const base::Value* chrome_style_value = NULL;
  if (dict->GetWithoutPathExpansion("chrome_style", &chrome_style_value)) {
    {
      bool temp;
      if (!chrome_style_value->GetAsBoolean(&temp)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'chrome_style': expected chrome_style, got " + json_schema_compiler::util::ValueTypeToString(chrome_style_value->GetType())));
        out->chrome_style.reset();
      }
      else
        out->chrome_style.reset(new bool(temp));
    }
  }

  keys.insert("open_in_tab");
  const base::Value* open_in_tab_value = NULL;
  if (dict->GetWithoutPathExpansion("open_in_tab", &open_in_tab_value)) {
    {
      bool temp;
      if (!open_in_tab_value->GetAsBoolean(&temp)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'open_in_tab': expected open_in_tab, got " + json_schema_compiler::util::ValueTypeToString(open_in_tab_value->GetType())));
        out->open_in_tab.reset();
      }
      else
        out->open_in_tab.reset(new bool(temp));
    }
  }

  for (base::DictionaryValue::Iterator it(*dict); !it.IsAtEnd(); it.Advance()) {
    if (!keys.count(it.key())) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("found unexpected key '" + it.key() + "'"));
    }
  }
  return true;
}

// static
scoped_ptr<OptionsUI> OptionsUI::FromValue(const base::Value& value, base::string16* error) {
DCHECK(error);
  scoped_ptr<OptionsUI> out(new OptionsUI());
  if (!Populate(value, out.get(), error))
    return scoped_ptr<OptionsUI>();
  return out;
}

scoped_ptr<base::DictionaryValue> OptionsUI::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("page", new base::StringValue(this->page));

  if (this->chrome_style.get()) {
    value->SetWithoutPathExpansion("chrome_style", new base::FundamentalValue(*this->chrome_style));

  }
  if (this->open_in_tab.get()) {
    value->SetWithoutPathExpansion("open_in_tab", new base::FundamentalValue(*this->open_in_tab));

  }

  return value;
}


SocketHostPatterns::SocketHostPatterns()
 {}

SocketHostPatterns::~SocketHostPatterns() {}

// static
bool SocketHostPatterns::Populate(
    const base::Value& value, SocketHostPatterns* out, base::string16* error) {
  DCHECK(error);
  if (value.IsType(base::Value::TYPE_STRING)) {
    {
      std::string temp;
      if (!(&value)->GetAsString(&temp)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'string': expected string, got " + json_schema_compiler::util::ValueTypeToString((&value)->GetType())));
        out->as_string.reset();
      }
      else
        out->as_string.reset(new std::string(temp));
    }
    return true;
  }
  if (value.IsType(base::Value::TYPE_LIST)) {
    {
      const base::ListValue* list = NULL;
      if (!(&value)->GetAsList(&list)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'strings': expected list, got " + json_schema_compiler::util::ValueTypeToString((&value)->GetType())));
        out->as_strings.reset();
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->as_strings, error)) {
          if (error->length())
            error->append(UTF8ToUTF16("; "));
          error->append(UTF8ToUTF16("unable to populate array 'SocketHostPatterns'"));
          out->as_strings.reset();
        }
      }
    }
    return true;
  }
  if (error->length())
    error->append(UTF8ToUTF16("; "));
  error->append(UTF8ToUTF16("expected string or strings, got " +  json_schema_compiler::util::ValueTypeToString(value.GetType())));
  return false;
}

// static
scoped_ptr<SocketHostPatterns> SocketHostPatterns::FromValue(const base::Value& value, base::string16* error) {
DCHECK(error);
  scoped_ptr<SocketHostPatterns> out(new SocketHostPatterns());
  if (!Populate(value, out.get(), error))
    return scoped_ptr<SocketHostPatterns>();
  return out;
}

scoped_ptr<base::Value> SocketHostPatterns::ToValue() const {
  scoped_ptr<base::Value> result;
  if (as_string) {
    DCHECK(!result) << "Cannot set multiple choices for socket_host_patterns";
    result.reset(new base::StringValue(*as_string));

  }
  if (as_strings) {
    DCHECK(!result) << "Cannot set multiple choices for socket_host_patterns";
    result.reset(json_schema_compiler::util::CreateValueFromOptionalArray(as_strings).release());

  }
  DCHECK(result) << "Must set at least one choice for socket_host_patterns";
  return result;
}


Sockets::Udp::Udp()
 {}

Sockets::Udp::~Udp() {}

// static
bool Sockets::Udp::Populate(
    const base::Value& value, Udp* out, base::string16* error) {
  DCHECK(error);
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(value.GetType())));
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  std::set<std::string> keys;
  keys.insert("bind");
  const base::Value* bind_value = NULL;
  if (dict->GetWithoutPathExpansion("bind", &bind_value)) {
    {
      scoped_ptr<SocketHostPatterns> temp(new SocketHostPatterns());
      if (!SocketHostPatterns::Populate(*bind_value, temp.get(), error))
        return false;
      out->bind = std::move(temp);
    }
  }

  keys.insert("send");
  const base::Value* send_value = NULL;
  if (dict->GetWithoutPathExpansion("send", &send_value)) {
    {
      scoped_ptr<SocketHostPatterns> temp(new SocketHostPatterns());
      if (!SocketHostPatterns::Populate(*send_value, temp.get(), error))
        return false;
      out->send = std::move(temp);
    }
  }

  keys.insert("multicastMembership");
  const base::Value* multicast_membership_value = NULL;
  if (dict->GetWithoutPathExpansion("multicastMembership", &multicast_membership_value)) {
    {
      scoped_ptr<SocketHostPatterns> temp(new SocketHostPatterns());
      if (!SocketHostPatterns::Populate(*multicast_membership_value, temp.get(), error))
        return false;
      out->multicast_membership = std::move(temp);
    }
  }

  for (base::DictionaryValue::Iterator it(*dict); !it.IsAtEnd(); it.Advance()) {
    if (!keys.count(it.key())) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("found unexpected key '" + it.key() + "'"));
    }
  }
  return true;
}

scoped_ptr<base::DictionaryValue> Sockets::Udp::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->bind.get()) {
    value->SetWithoutPathExpansion("bind", (this->bind)->ToValue().release());

  }
  if (this->send.get()) {
    value->SetWithoutPathExpansion("send", (this->send)->ToValue().release());

  }
  if (this->multicast_membership.get()) {
    value->SetWithoutPathExpansion("multicastMembership", (this->multicast_membership)->ToValue().release());

  }

  return value;
}


Sockets::Tcp::Tcp()
 {}

Sockets::Tcp::~Tcp() {}

// static
bool Sockets::Tcp::Populate(
    const base::Value& value, Tcp* out, base::string16* error) {
  DCHECK(error);
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(value.GetType())));
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  std::set<std::string> keys;
  keys.insert("connect");
  const base::Value* connect_value = NULL;
  if (dict->GetWithoutPathExpansion("connect", &connect_value)) {
    {
      scoped_ptr<SocketHostPatterns> temp(new SocketHostPatterns());
      if (!SocketHostPatterns::Populate(*connect_value, temp.get(), error))
        return false;
      out->connect = std::move(temp);
    }
  }

  for (base::DictionaryValue::Iterator it(*dict); !it.IsAtEnd(); it.Advance()) {
    if (!keys.count(it.key())) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("found unexpected key '" + it.key() + "'"));
    }
  }
  return true;
}

scoped_ptr<base::DictionaryValue> Sockets::Tcp::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->connect.get()) {
    value->SetWithoutPathExpansion("connect", (this->connect)->ToValue().release());

  }

  return value;
}


Sockets::TcpServer::TcpServer()
 {}

Sockets::TcpServer::~TcpServer() {}

// static
bool Sockets::TcpServer::Populate(
    const base::Value& value, TcpServer* out, base::string16* error) {
  DCHECK(error);
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(value.GetType())));
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  std::set<std::string> keys;
  keys.insert("listen");
  const base::Value* listen_value = NULL;
  if (dict->GetWithoutPathExpansion("listen", &listen_value)) {
    {
      scoped_ptr<SocketHostPatterns> temp(new SocketHostPatterns());
      if (!SocketHostPatterns::Populate(*listen_value, temp.get(), error))
        return false;
      out->listen = std::move(temp);
    }
  }

  for (base::DictionaryValue::Iterator it(*dict); !it.IsAtEnd(); it.Advance()) {
    if (!keys.count(it.key())) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("found unexpected key '" + it.key() + "'"));
    }
  }
  return true;
}

scoped_ptr<base::DictionaryValue> Sockets::TcpServer::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->listen.get()) {
    value->SetWithoutPathExpansion("listen", (this->listen)->ToValue().release());

  }

  return value;
}



Sockets::Sockets()
 {}

Sockets::~Sockets() {}

// static
bool Sockets::Populate(
    const base::Value& value, Sockets* out, base::string16* error) {
  DCHECK(error);
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(value.GetType())));
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  std::set<std::string> keys;
  keys.insert("udp");
  const base::Value* udp_value = NULL;
  if (dict->GetWithoutPathExpansion("udp", &udp_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!udp_value->GetAsDictionary(&dictionary)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'udp': expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(udp_value->GetType())));
      }
      else {
        scoped_ptr<Udp> temp(new Udp());
        if (!Udp::Populate(*dictionary, temp.get(), error)) {
          return false;
        }
        else
          out->udp = std::move(temp);
      }
    }
  }

  keys.insert("tcp");
  const base::Value* tcp_value = NULL;
  if (dict->GetWithoutPathExpansion("tcp", &tcp_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!tcp_value->GetAsDictionary(&dictionary)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'tcp': expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(tcp_value->GetType())));
      }
      else {
        scoped_ptr<Tcp> temp(new Tcp());
        if (!Tcp::Populate(*dictionary, temp.get(), error)) {
          return false;
        }
        else
          out->tcp = std::move(temp);
      }
    }
  }

  keys.insert("tcpServer");
  const base::Value* tcp_server_value = NULL;
  if (dict->GetWithoutPathExpansion("tcpServer", &tcp_server_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!tcp_server_value->GetAsDictionary(&dictionary)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'tcpServer': expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(tcp_server_value->GetType())));
      }
      else {
        scoped_ptr<TcpServer> temp(new TcpServer());
        if (!TcpServer::Populate(*dictionary, temp.get(), error)) {
          return false;
        }
        else
          out->tcp_server = std::move(temp);
      }
    }
  }

  for (base::DictionaryValue::Iterator it(*dict); !it.IsAtEnd(); it.Advance()) {
    if (!keys.count(it.key())) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("found unexpected key '" + it.key() + "'"));
    }
  }
  return true;
}

// static
scoped_ptr<Sockets> Sockets::FromValue(const base::Value& value, base::string16* error) {
DCHECK(error);
  scoped_ptr<Sockets> out(new Sockets());
  if (!Populate(value, out.get(), error))
    return scoped_ptr<Sockets>();
  return out;
}

scoped_ptr<base::DictionaryValue> Sockets::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->udp.get()) {
    value->SetWithoutPathExpansion("udp", (this->udp)->ToValue().release());

  }
  if (this->tcp.get()) {
    value->SetWithoutPathExpansion("tcp", (this->tcp)->ToValue().release());

  }
  if (this->tcp_server.get()) {
    value->SetWithoutPathExpansion("tcpServer", (this->tcp_server)->ToValue().release());

  }

  return value;
}


Bluetooth::Bluetooth()
 {}

Bluetooth::~Bluetooth() {}

// static
bool Bluetooth::Populate(
    const base::Value& value, Bluetooth* out, base::string16* error) {
  DCHECK(error);
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(value.GetType())));
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  std::set<std::string> keys;
  keys.insert("uuids");
  const base::Value* uuids_value = NULL;
  if (dict->GetWithoutPathExpansion("uuids", &uuids_value)) {
    {
      const base::ListValue* list = NULL;
      if (!uuids_value->GetAsList(&list)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'uuids': expected list, got " + json_schema_compiler::util::ValueTypeToString(uuids_value->GetType())));
        out->uuids.reset();
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->uuids, error)) {
          if (error->length())
            error->append(UTF8ToUTF16("; "));
          error->append(UTF8ToUTF16("unable to populate array 'bluetooth'"));
          out->uuids.reset();
        }
      }
    }
  }

  keys.insert("socket");
  const base::Value* socket_value = NULL;
  if (dict->GetWithoutPathExpansion("socket", &socket_value)) {
    {
      bool temp;
      if (!socket_value->GetAsBoolean(&temp)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'socket': expected socket, got " + json_schema_compiler::util::ValueTypeToString(socket_value->GetType())));
        out->socket.reset();
      }
      else
        out->socket.reset(new bool(temp));
    }
  }

  keys.insert("low_energy");
  const base::Value* low_energy_value = NULL;
  if (dict->GetWithoutPathExpansion("low_energy", &low_energy_value)) {
    {
      bool temp;
      if (!low_energy_value->GetAsBoolean(&temp)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'low_energy': expected low_energy, got " + json_schema_compiler::util::ValueTypeToString(low_energy_value->GetType())));
        out->low_energy.reset();
      }
      else
        out->low_energy.reset(new bool(temp));
    }
  }

  keys.insert("peripheral");
  const base::Value* peripheral_value = NULL;
  if (dict->GetWithoutPathExpansion("peripheral", &peripheral_value)) {
    {
      bool temp;
      if (!peripheral_value->GetAsBoolean(&temp)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'peripheral': expected peripheral, got " + json_schema_compiler::util::ValueTypeToString(peripheral_value->GetType())));
        out->peripheral.reset();
      }
      else
        out->peripheral.reset(new bool(temp));
    }
  }

  for (base::DictionaryValue::Iterator it(*dict); !it.IsAtEnd(); it.Advance()) {
    if (!keys.count(it.key())) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("found unexpected key '" + it.key() + "'"));
    }
  }
  return true;
}

// static
scoped_ptr<Bluetooth> Bluetooth::FromValue(const base::Value& value, base::string16* error) {
DCHECK(error);
  scoped_ptr<Bluetooth> out(new Bluetooth());
  if (!Populate(value, out.get(), error))
    return scoped_ptr<Bluetooth>();
  return out;
}

scoped_ptr<base::DictionaryValue> Bluetooth::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->uuids.get()) {
    value->SetWithoutPathExpansion("uuids", json_schema_compiler::util::CreateValueFromOptionalArray(this->uuids).release());

  }
  if (this->socket.get()) {
    value->SetWithoutPathExpansion("socket", new base::FundamentalValue(*this->socket));

  }
  if (this->low_energy.get()) {
    value->SetWithoutPathExpansion("low_energy", new base::FundamentalValue(*this->low_energy));

  }
  if (this->peripheral.get()) {
    value->SetWithoutPathExpansion("peripheral", new base::FundamentalValue(*this->peripheral));

  }

  return value;
}


UsbPrinters::FiltersType::FiltersType()
: vendor_id(0) {}

UsbPrinters::FiltersType::~FiltersType() {}

// static
bool UsbPrinters::FiltersType::Populate(
    const base::Value& value, FiltersType* out, base::string16* error) {
  DCHECK(error);
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(value.GetType())));
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  std::set<std::string> keys;
  keys.insert("vendorId");
  const base::Value* vendor_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("vendorId", &vendor_id_value)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("'vendorId' is required"));
    return false;
  }
  {
    if (!vendor_id_value->GetAsInteger(&out->vendor_id)) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("'vendorId': expected vendorId, got " + json_schema_compiler::util::ValueTypeToString(vendor_id_value->GetType())));
      return false;
    }
  }

  keys.insert("productId");
  const base::Value* product_id_value = NULL;
  if (dict->GetWithoutPathExpansion("productId", &product_id_value)) {
    {
      int temp;
      if (!product_id_value->GetAsInteger(&temp)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'productId': expected productId, got " + json_schema_compiler::util::ValueTypeToString(product_id_value->GetType())));
        out->product_id.reset();
      }
      else
        out->product_id.reset(new int(temp));
    }
  }

  keys.insert("interfaceClass");
  const base::Value* interface_class_value = NULL;
  if (dict->GetWithoutPathExpansion("interfaceClass", &interface_class_value)) {
    {
      int temp;
      if (!interface_class_value->GetAsInteger(&temp)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'interfaceClass': expected interfaceClass, got " + json_schema_compiler::util::ValueTypeToString(interface_class_value->GetType())));
        out->interface_class.reset();
      }
      else
        out->interface_class.reset(new int(temp));
    }
  }

  keys.insert("interfaceSubclass");
  const base::Value* interface_subclass_value = NULL;
  if (dict->GetWithoutPathExpansion("interfaceSubclass", &interface_subclass_value)) {
    {
      int temp;
      if (!interface_subclass_value->GetAsInteger(&temp)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'interfaceSubclass': expected interfaceSubclass, got " + json_schema_compiler::util::ValueTypeToString(interface_subclass_value->GetType())));
        out->interface_subclass.reset();
      }
      else
        out->interface_subclass.reset(new int(temp));
    }
  }

  keys.insert("interfaceProtocol");
  const base::Value* interface_protocol_value = NULL;
  if (dict->GetWithoutPathExpansion("interfaceProtocol", &interface_protocol_value)) {
    {
      int temp;
      if (!interface_protocol_value->GetAsInteger(&temp)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("'interfaceProtocol': expected interfaceProtocol, got " + json_schema_compiler::util::ValueTypeToString(interface_protocol_value->GetType())));
        out->interface_protocol.reset();
      }
      else
        out->interface_protocol.reset(new int(temp));
    }
  }

  for (base::DictionaryValue::Iterator it(*dict); !it.IsAtEnd(); it.Advance()) {
    if (!keys.count(it.key())) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("found unexpected key '" + it.key() + "'"));
    }
  }
  return true;
}

scoped_ptr<base::DictionaryValue> UsbPrinters::FiltersType::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("vendorId", new base::FundamentalValue(this->vendor_id));

  if (this->product_id.get()) {
    value->SetWithoutPathExpansion("productId", new base::FundamentalValue(*this->product_id));

  }
  if (this->interface_class.get()) {
    value->SetWithoutPathExpansion("interfaceClass", new base::FundamentalValue(*this->interface_class));

  }
  if (this->interface_subclass.get()) {
    value->SetWithoutPathExpansion("interfaceSubclass", new base::FundamentalValue(*this->interface_subclass));

  }
  if (this->interface_protocol.get()) {
    value->SetWithoutPathExpansion("interfaceProtocol", new base::FundamentalValue(*this->interface_protocol));

  }

  return value;
}




UsbPrinters::UsbPrinters()
 {}

UsbPrinters::~UsbPrinters() {}

// static
bool UsbPrinters::Populate(
    const base::Value& value, UsbPrinters* out, base::string16* error) {
  DCHECK(error);
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(value.GetType())));
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  std::set<std::string> keys;
  keys.insert("filters");
  const base::Value* filters_value = NULL;
  if (!dict->GetWithoutPathExpansion("filters", &filters_value)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("'filters' is required"));
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!filters_value->GetAsList(&list)) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("'filters': expected list, got " + json_schema_compiler::util::ValueTypeToString(filters_value->GetType())));
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->filters, error)) {
        if (error->length())
          error->append(UTF8ToUTF16("; "));
        error->append(UTF8ToUTF16("unable to populate array 'UsbPrinters'"));
        return false;
      }
    }
  }

  for (base::DictionaryValue::Iterator it(*dict); !it.IsAtEnd(); it.Advance()) {
    if (!keys.count(it.key())) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("found unexpected key '" + it.key() + "'"));
    }
  }
  return true;
}

// static
scoped_ptr<UsbPrinters> UsbPrinters::FromValue(const base::Value& value, base::string16* error) {
DCHECK(error);
  scoped_ptr<UsbPrinters> out(new UsbPrinters());
  if (!Populate(value, out.get(), error))
    return scoped_ptr<UsbPrinters>();
  return out;
}

scoped_ptr<base::DictionaryValue> UsbPrinters::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("filters", json_schema_compiler::util::CreateValueFromArray(this->filters).release());


  return value;
}


KioskSecondaryAppsType::KioskSecondaryAppsType()
 {}

KioskSecondaryAppsType::~KioskSecondaryAppsType() {}

// static
bool KioskSecondaryAppsType::Populate(
    const base::Value& value, KioskSecondaryAppsType* out, base::string16* error) {
  DCHECK(error);
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("expected dictionary, got " + json_schema_compiler::util::ValueTypeToString(value.GetType())));
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  std::set<std::string> keys;
  keys.insert("id");
  const base::Value* id_value = NULL;
  if (!dict->GetWithoutPathExpansion("id", &id_value)) {
    if (error->length())
      error->append(UTF8ToUTF16("; "));
    error->append(UTF8ToUTF16("'id' is required"));
    return false;
  }
  {
    if (!id_value->GetAsString(&out->id)) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("'id': expected id, got " + json_schema_compiler::util::ValueTypeToString(id_value->GetType())));
      return false;
    }
  }

  for (base::DictionaryValue::Iterator it(*dict); !it.IsAtEnd(); it.Advance()) {
    if (!keys.count(it.key())) {
      if (error->length())
        error->append(UTF8ToUTF16("; "));
      error->append(UTF8ToUTF16("found unexpected key '" + it.key() + "'"));
    }
  }
  return true;
}

// static
scoped_ptr<KioskSecondaryAppsType> KioskSecondaryAppsType::FromValue(const base::Value& value, base::string16* error) {
DCHECK(error);
  scoped_ptr<KioskSecondaryAppsType> out(new KioskSecondaryAppsType());
  if (!Populate(value, out.get(), error))
    return scoped_ptr<KioskSecondaryAppsType>();
  return out;
}

scoped_ptr<base::DictionaryValue> KioskSecondaryAppsType::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", new base::StringValue(this->id));


  return value;
}




}  // namespace extensions_manifest_types
}  // namespace api
}  // namespace extensions

