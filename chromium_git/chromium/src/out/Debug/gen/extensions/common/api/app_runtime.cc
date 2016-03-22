// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/app_runtime.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/app_runtime.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace app_runtime {
//
// Types
//

LaunchItem::Entry::Entry()
 {}

LaunchItem::Entry::~Entry() {}

// static
bool LaunchItem::Entry::Populate(
    const base::Value& value, Entry* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}

scoped_ptr<base::DictionaryValue> LaunchItem::Entry::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}



LaunchItem::LaunchItem()
 {}

LaunchItem::~LaunchItem() {}

// static
bool LaunchItem::Populate(
    const base::Value& value, LaunchItem* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* entry_value = NULL;
  if (!dict->GetWithoutPathExpansion("entry", &entry_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!entry_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!Entry::Populate(*dictionary, &out->entry)) {
      return false;
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    if (!type_value->GetAsString(&out->type)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<LaunchItem> LaunchItem::FromValue(const base::Value& value) {
  scoped_ptr<LaunchItem> out(new LaunchItem());
  if (!Populate(value, out.get()))
    return scoped_ptr<LaunchItem>();
  return out;
}

scoped_ptr<base::DictionaryValue> LaunchItem::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("entry", (this->entry).ToValue().release());

  value->SetWithoutPathExpansion("type", new base::StringValue(this->type));


  return value;
}


std::string ToString(LaunchSource enum_param) {
  switch (enum_param) {
    case LAUNCH_SOURCE_APP_LAUNCHER:
      return "app_launcher";
    case LAUNCH_SOURCE_NEW_TAB_PAGE:
      return "new_tab_page";
    case LAUNCH_SOURCE_RELOAD:
      return "reload";
    case LAUNCH_SOURCE_RESTART:
      return "restart";
    case LAUNCH_SOURCE_LOAD_AND_LAUNCH:
      return "load_and_launch";
    case LAUNCH_SOURCE_COMMAND_LINE:
      return "command_line";
    case LAUNCH_SOURCE_FILE_HANDLER:
      return "file_handler";
    case LAUNCH_SOURCE_URL_HANDLER:
      return "url_handler";
    case LAUNCH_SOURCE_SYSTEM_TRAY:
      return "system_tray";
    case LAUNCH_SOURCE_ABOUT_PAGE:
      return "about_page";
    case LAUNCH_SOURCE_KEYBOARD:
      return "keyboard";
    case LAUNCH_SOURCE_EXTENSIONS_PAGE:
      return "extensions_page";
    case LAUNCH_SOURCE_MANAGEMENT_API:
      return "management_api";
    case LAUNCH_SOURCE_EPHEMERAL_APP:
      return "ephemeral_app";
    case LAUNCH_SOURCE_BACKGROUND:
      return "background";
    case LAUNCH_SOURCE_KIOSK:
      return "kiosk";
    case LAUNCH_SOURCE_CHROME_INTERNAL:
      return "chrome_internal";
    case LAUNCH_SOURCE_TEST:
      return "test";
    case LAUNCH_SOURCE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

LaunchSource ParseLaunchSource(const std::string& enum_string) {
  if (enum_string == "app_launcher")
    return LAUNCH_SOURCE_APP_LAUNCHER;
  if (enum_string == "new_tab_page")
    return LAUNCH_SOURCE_NEW_TAB_PAGE;
  if (enum_string == "reload")
    return LAUNCH_SOURCE_RELOAD;
  if (enum_string == "restart")
    return LAUNCH_SOURCE_RESTART;
  if (enum_string == "load_and_launch")
    return LAUNCH_SOURCE_LOAD_AND_LAUNCH;
  if (enum_string == "command_line")
    return LAUNCH_SOURCE_COMMAND_LINE;
  if (enum_string == "file_handler")
    return LAUNCH_SOURCE_FILE_HANDLER;
  if (enum_string == "url_handler")
    return LAUNCH_SOURCE_URL_HANDLER;
  if (enum_string == "system_tray")
    return LAUNCH_SOURCE_SYSTEM_TRAY;
  if (enum_string == "about_page")
    return LAUNCH_SOURCE_ABOUT_PAGE;
  if (enum_string == "keyboard")
    return LAUNCH_SOURCE_KEYBOARD;
  if (enum_string == "extensions_page")
    return LAUNCH_SOURCE_EXTENSIONS_PAGE;
  if (enum_string == "management_api")
    return LAUNCH_SOURCE_MANAGEMENT_API;
  if (enum_string == "ephemeral_app")
    return LAUNCH_SOURCE_EPHEMERAL_APP;
  if (enum_string == "background")
    return LAUNCH_SOURCE_BACKGROUND;
  if (enum_string == "kiosk")
    return LAUNCH_SOURCE_KIOSK;
  if (enum_string == "chrome_internal")
    return LAUNCH_SOURCE_CHROME_INTERNAL;
  if (enum_string == "test")
    return LAUNCH_SOURCE_TEST;
  return LAUNCH_SOURCE_NONE;
}


LaunchData::LaunchData()
: source(LAUNCH_SOURCE_NONE) {}

LaunchData::~LaunchData() {}

// static
bool LaunchData::Populate(
    const base::Value& value, LaunchData* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->source = LAUNCH_SOURCE_NONE;
  const base::Value* id_value = NULL;
  if (dict->GetWithoutPathExpansion("id", &id_value)) {
    {
      std::string temp;
      if (!id_value->GetAsString(&temp)) {
        out->id.reset();
        return false;
      }
      else
        out->id.reset(new std::string(temp));
    }
  }

  const base::Value* items_value = NULL;
  if (dict->GetWithoutPathExpansion("items", &items_value)) {
    {
      const base::ListValue* list = NULL;
      if (!items_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->items)) {
          return false;
        }
      }
    }
  }

  const base::Value* url_value = NULL;
  if (dict->GetWithoutPathExpansion("url", &url_value)) {
    {
      std::string temp;
      if (!url_value->GetAsString(&temp)) {
        out->url.reset();
        return false;
      }
      else
        out->url.reset(new std::string(temp));
    }
  }

  const base::Value* referrer_url_value = NULL;
  if (dict->GetWithoutPathExpansion("referrerUrl", &referrer_url_value)) {
    {
      std::string temp;
      if (!referrer_url_value->GetAsString(&temp)) {
        out->referrer_url.reset();
        return false;
      }
      else
        out->referrer_url.reset(new std::string(temp));
    }
  }

  const base::Value* is_kiosk_session_value = NULL;
  if (dict->GetWithoutPathExpansion("isKioskSession", &is_kiosk_session_value)) {
    {
      bool temp;
      if (!is_kiosk_session_value->GetAsBoolean(&temp)) {
        out->is_kiosk_session.reset();
        return false;
      }
      else
        out->is_kiosk_session.reset(new bool(temp));
    }
  }

  const base::Value* is_public_session_value = NULL;
  if (dict->GetWithoutPathExpansion("isPublicSession", &is_public_session_value)) {
    {
      bool temp;
      if (!is_public_session_value->GetAsBoolean(&temp)) {
        out->is_public_session.reset();
        return false;
      }
      else
        out->is_public_session.reset(new bool(temp));
    }
  }

  const base::Value* source_value = NULL;
  if (dict->GetWithoutPathExpansion("source", &source_value)) {
    {
      std::string launch_source_as_string;
      if (!source_value->GetAsString(&launch_source_as_string)) {
        return false;
      }
      out->source = ParseLaunchSource(launch_source_as_string);
      if (out->source == LAUNCH_SOURCE_NONE) {
        return false;
      }
    }
    } else {
    out->source = LAUNCH_SOURCE_NONE;
  }

  return true;
}

// static
scoped_ptr<LaunchData> LaunchData::FromValue(const base::Value& value) {
  scoped_ptr<LaunchData> out(new LaunchData());
  if (!Populate(value, out.get()))
    return scoped_ptr<LaunchData>();
  return out;
}

scoped_ptr<base::DictionaryValue> LaunchData::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->id.get()) {
    value->SetWithoutPathExpansion("id", new base::StringValue(*this->id));

  }
  if (this->items.get()) {
    value->SetWithoutPathExpansion("items", json_schema_compiler::util::CreateValueFromOptionalArray(this->items).release());

  }
  if (this->url.get()) {
    value->SetWithoutPathExpansion("url", new base::StringValue(*this->url));

  }
  if (this->referrer_url.get()) {
    value->SetWithoutPathExpansion("referrerUrl", new base::StringValue(*this->referrer_url));

  }
  if (this->is_kiosk_session.get()) {
    value->SetWithoutPathExpansion("isKioskSession", new base::FundamentalValue(*this->is_kiosk_session));

  }
  if (this->is_public_session.get()) {
    value->SetWithoutPathExpansion("isPublicSession", new base::FundamentalValue(*this->is_public_session));

  }
  if (this->source != LAUNCH_SOURCE_NONE) {
    value->SetWithoutPathExpansion("source", new base::StringValue(app_runtime::ToString(this->source)));

  }

  return value;
}


EmbedRequest::EmbedRequest()
 {}

EmbedRequest::~EmbedRequest() {}

// static
bool EmbedRequest::Populate(
    const base::Value& value, EmbedRequest* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* embedder_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("embedderId", &embedder_id_value)) {
    return false;
  }
  {
    if (!embedder_id_value->GetAsString(&out->embedder_id)) {
      return false;
    }
  }

  const base::Value* data_value = NULL;
  if (dict->GetWithoutPathExpansion("data", &data_value)) {
    {
      out->data.reset(data_value->DeepCopy());
    }
  }

  return true;
}

// static
scoped_ptr<EmbedRequest> EmbedRequest::FromValue(const base::Value& value) {
  scoped_ptr<EmbedRequest> out(new EmbedRequest());
  if (!Populate(value, out.get()))
    return scoped_ptr<EmbedRequest>();
  return out;
}

scoped_ptr<base::DictionaryValue> EmbedRequest::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("embedderId", new base::StringValue(this->embedder_id));

  if (this->data.get()) {
    value->SetWithoutPathExpansion("data", (this->data)->DeepCopy());

  }

  return value;
}



//
// Events
//

namespace OnEmbedRequested {

const char kEventName[] = "app.runtime.onEmbedRequested";

scoped_ptr<base::ListValue> Create(const EmbedRequest& request) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((request).ToValue().release());

  return create_results;
}

}  // namespace OnEmbedRequested

namespace OnLaunched {

const char kEventName[] = "app.runtime.onLaunched";

scoped_ptr<base::ListValue> Create(const LaunchData& launch_data) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((launch_data).ToValue().release());

  return create_results;
}

}  // namespace OnLaunched

namespace OnRestarted {

const char kEventName[] = "app.runtime.onRestarted";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnRestarted

}  // namespace app_runtime
}  // namespace api
}  // namespace extensions

