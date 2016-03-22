// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/management.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/management.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace management {
//
// Types
//

IconInfo::IconInfo()
: size(0) {}

IconInfo::~IconInfo() {}

// static
bool IconInfo::Populate(
    const base::Value& value, IconInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* size_value = NULL;
  if (!dict->GetWithoutPathExpansion("size", &size_value)) {
    return false;
  }
  {
    if (!size_value->GetAsInteger(&out->size)) {
      return false;
    }
  }

  const base::Value* url_value = NULL;
  if (!dict->GetWithoutPathExpansion("url", &url_value)) {
    return false;
  }
  {
    if (!url_value->GetAsString(&out->url)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<IconInfo> IconInfo::FromValue(const base::Value& value) {
  scoped_ptr<IconInfo> out(new IconInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<IconInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> IconInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("size", new base::FundamentalValue(this->size));

  value->SetWithoutPathExpansion("url", new base::StringValue(this->url));


  return value;
}


std::string ToString(LaunchType enum_param) {
  switch (enum_param) {
    case LAUNCH_TYPE_OPEN_AS_REGULAR_TAB:
      return "OPEN_AS_REGULAR_TAB";
    case LAUNCH_TYPE_OPEN_AS_PINNED_TAB:
      return "OPEN_AS_PINNED_TAB";
    case LAUNCH_TYPE_OPEN_AS_WINDOW:
      return "OPEN_AS_WINDOW";
    case LAUNCH_TYPE_OPEN_FULL_SCREEN:
      return "OPEN_FULL_SCREEN";
    case LAUNCH_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

LaunchType ParseLaunchType(const std::string& enum_string) {
  if (enum_string == "OPEN_AS_REGULAR_TAB")
    return LAUNCH_TYPE_OPEN_AS_REGULAR_TAB;
  if (enum_string == "OPEN_AS_PINNED_TAB")
    return LAUNCH_TYPE_OPEN_AS_PINNED_TAB;
  if (enum_string == "OPEN_AS_WINDOW")
    return LAUNCH_TYPE_OPEN_AS_WINDOW;
  if (enum_string == "OPEN_FULL_SCREEN")
    return LAUNCH_TYPE_OPEN_FULL_SCREEN;
  return LAUNCH_TYPE_NONE;
}


std::string ToString(ExtensionDisabledReason enum_param) {
  switch (enum_param) {
    case EXTENSION_DISABLED_REASON_UNKNOWN:
      return "unknown";
    case EXTENSION_DISABLED_REASON_PERMISSIONS_INCREASE:
      return "permissions_increase";
    case EXTENSION_DISABLED_REASON_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ExtensionDisabledReason ParseExtensionDisabledReason(const std::string& enum_string) {
  if (enum_string == "unknown")
    return EXTENSION_DISABLED_REASON_UNKNOWN;
  if (enum_string == "permissions_increase")
    return EXTENSION_DISABLED_REASON_PERMISSIONS_INCREASE;
  return EXTENSION_DISABLED_REASON_NONE;
}


std::string ToString(ExtensionType enum_param) {
  switch (enum_param) {
    case EXTENSION_TYPE_EXTENSION:
      return "extension";
    case EXTENSION_TYPE_HOSTED_APP:
      return "hosted_app";
    case EXTENSION_TYPE_PACKAGED_APP:
      return "packaged_app";
    case EXTENSION_TYPE_LEGACY_PACKAGED_APP:
      return "legacy_packaged_app";
    case EXTENSION_TYPE_THEME:
      return "theme";
    case EXTENSION_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ExtensionType ParseExtensionType(const std::string& enum_string) {
  if (enum_string == "extension")
    return EXTENSION_TYPE_EXTENSION;
  if (enum_string == "hosted_app")
    return EXTENSION_TYPE_HOSTED_APP;
  if (enum_string == "packaged_app")
    return EXTENSION_TYPE_PACKAGED_APP;
  if (enum_string == "legacy_packaged_app")
    return EXTENSION_TYPE_LEGACY_PACKAGED_APP;
  if (enum_string == "theme")
    return EXTENSION_TYPE_THEME;
  return EXTENSION_TYPE_NONE;
}


std::string ToString(ExtensionInstallType enum_param) {
  switch (enum_param) {
    case EXTENSION_INSTALL_TYPE_ADMIN:
      return "admin";
    case EXTENSION_INSTALL_TYPE_DEVELOPMENT:
      return "development";
    case EXTENSION_INSTALL_TYPE_NORMAL:
      return "normal";
    case EXTENSION_INSTALL_TYPE_SIDELOAD:
      return "sideload";
    case EXTENSION_INSTALL_TYPE_OTHER:
      return "other";
    case EXTENSION_INSTALL_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ExtensionInstallType ParseExtensionInstallType(const std::string& enum_string) {
  if (enum_string == "admin")
    return EXTENSION_INSTALL_TYPE_ADMIN;
  if (enum_string == "development")
    return EXTENSION_INSTALL_TYPE_DEVELOPMENT;
  if (enum_string == "normal")
    return EXTENSION_INSTALL_TYPE_NORMAL;
  if (enum_string == "sideload")
    return EXTENSION_INSTALL_TYPE_SIDELOAD;
  if (enum_string == "other")
    return EXTENSION_INSTALL_TYPE_OTHER;
  return EXTENSION_INSTALL_TYPE_NONE;
}


ExtensionInfo::ExtensionInfo()
: may_disable(false), enabled(false), disabled_reason(EXTENSION_DISABLED_REASON_NONE), is_app(false), type(EXTENSION_TYPE_NONE), offline_enabled(false), install_type(EXTENSION_INSTALL_TYPE_NONE), launch_type(LAUNCH_TYPE_NONE) {}

ExtensionInfo::~ExtensionInfo() {}

// static
bool ExtensionInfo::Populate(
    const base::Value& value, ExtensionInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->disabled_reason = EXTENSION_DISABLED_REASON_NONE;
  out->launch_type = LAUNCH_TYPE_NONE;
  const base::Value* id_value = NULL;
  if (!dict->GetWithoutPathExpansion("id", &id_value)) {
    return false;
  }
  {
    if (!id_value->GetAsString(&out->id)) {
      return false;
    }
  }

  const base::Value* name_value = NULL;
  if (!dict->GetWithoutPathExpansion("name", &name_value)) {
    return false;
  }
  {
    if (!name_value->GetAsString(&out->name)) {
      return false;
    }
  }

  const base::Value* short_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("shortName", &short_name_value)) {
    return false;
  }
  {
    if (!short_name_value->GetAsString(&out->short_name)) {
      return false;
    }
  }

  const base::Value* description_value = NULL;
  if (!dict->GetWithoutPathExpansion("description", &description_value)) {
    return false;
  }
  {
    if (!description_value->GetAsString(&out->description)) {
      return false;
    }
  }

  const base::Value* version_value = NULL;
  if (!dict->GetWithoutPathExpansion("version", &version_value)) {
    return false;
  }
  {
    if (!version_value->GetAsString(&out->version)) {
      return false;
    }
  }

  const base::Value* version_name_value = NULL;
  if (dict->GetWithoutPathExpansion("versionName", &version_name_value)) {
    {
      std::string temp;
      if (!version_name_value->GetAsString(&temp)) {
        out->version_name.reset();
        return false;
      }
      else
        out->version_name.reset(new std::string(temp));
    }
  }

  const base::Value* may_disable_value = NULL;
  if (!dict->GetWithoutPathExpansion("mayDisable", &may_disable_value)) {
    return false;
  }
  {
    if (!may_disable_value->GetAsBoolean(&out->may_disable)) {
      return false;
    }
  }

  const base::Value* enabled_value = NULL;
  if (!dict->GetWithoutPathExpansion("enabled", &enabled_value)) {
    return false;
  }
  {
    if (!enabled_value->GetAsBoolean(&out->enabled)) {
      return false;
    }
  }

  const base::Value* disabled_reason_value = NULL;
  if (dict->GetWithoutPathExpansion("disabledReason", &disabled_reason_value)) {
    {
      std::string extension_disabled_reason_as_string;
      if (!disabled_reason_value->GetAsString(&extension_disabled_reason_as_string)) {
        return false;
      }
      out->disabled_reason = ParseExtensionDisabledReason(extension_disabled_reason_as_string);
      if (out->disabled_reason == EXTENSION_DISABLED_REASON_NONE) {
        return false;
      }
    }
    } else {
    out->disabled_reason = EXTENSION_DISABLED_REASON_NONE;
  }

  const base::Value* is_app_value = NULL;
  if (!dict->GetWithoutPathExpansion("isApp", &is_app_value)) {
    return false;
  }
  {
    if (!is_app_value->GetAsBoolean(&out->is_app)) {
      return false;
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    std::string extension_type_as_string;
    if (!type_value->GetAsString(&extension_type_as_string)) {
      return false;
    }
    out->type = ParseExtensionType(extension_type_as_string);
    if (out->type == EXTENSION_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* app_launch_url_value = NULL;
  if (dict->GetWithoutPathExpansion("appLaunchUrl", &app_launch_url_value)) {
    {
      std::string temp;
      if (!app_launch_url_value->GetAsString(&temp)) {
        out->app_launch_url.reset();
        return false;
      }
      else
        out->app_launch_url.reset(new std::string(temp));
    }
  }

  const base::Value* homepage_url_value = NULL;
  if (dict->GetWithoutPathExpansion("homepageUrl", &homepage_url_value)) {
    {
      std::string temp;
      if (!homepage_url_value->GetAsString(&temp)) {
        out->homepage_url.reset();
        return false;
      }
      else
        out->homepage_url.reset(new std::string(temp));
    }
  }

  const base::Value* update_url_value = NULL;
  if (dict->GetWithoutPathExpansion("updateUrl", &update_url_value)) {
    {
      std::string temp;
      if (!update_url_value->GetAsString(&temp)) {
        out->update_url.reset();
        return false;
      }
      else
        out->update_url.reset(new std::string(temp));
    }
  }

  const base::Value* offline_enabled_value = NULL;
  if (!dict->GetWithoutPathExpansion("offlineEnabled", &offline_enabled_value)) {
    return false;
  }
  {
    if (!offline_enabled_value->GetAsBoolean(&out->offline_enabled)) {
      return false;
    }
  }

  const base::Value* options_url_value = NULL;
  if (!dict->GetWithoutPathExpansion("optionsUrl", &options_url_value)) {
    return false;
  }
  {
    if (!options_url_value->GetAsString(&out->options_url)) {
      return false;
    }
  }

  const base::Value* icons_value = NULL;
  if (dict->GetWithoutPathExpansion("icons", &icons_value)) {
    {
      const base::ListValue* list = NULL;
      if (!icons_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->icons)) {
          return false;
        }
      }
    }
  }

  const base::Value* permissions_value = NULL;
  if (!dict->GetWithoutPathExpansion("permissions", &permissions_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!permissions_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->permissions)) {
        return false;
      }
    }
  }

  const base::Value* host_permissions_value = NULL;
  if (!dict->GetWithoutPathExpansion("hostPermissions", &host_permissions_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!host_permissions_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->host_permissions)) {
        return false;
      }
    }
  }

  const base::Value* install_type_value = NULL;
  if (!dict->GetWithoutPathExpansion("installType", &install_type_value)) {
    return false;
  }
  {
    std::string extension_install_type_as_string;
    if (!install_type_value->GetAsString(&extension_install_type_as_string)) {
      return false;
    }
    out->install_type = ParseExtensionInstallType(extension_install_type_as_string);
    if (out->install_type == EXTENSION_INSTALL_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* launch_type_value = NULL;
  if (dict->GetWithoutPathExpansion("launchType", &launch_type_value)) {
    {
      std::string launch_type_as_string;
      if (!launch_type_value->GetAsString(&launch_type_as_string)) {
        return false;
      }
      out->launch_type = ParseLaunchType(launch_type_as_string);
      if (out->launch_type == LAUNCH_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->launch_type = LAUNCH_TYPE_NONE;
  }

  const base::Value* available_launch_types_value = NULL;
  if (dict->GetWithoutPathExpansion("availableLaunchTypes", &available_launch_types_value)) {
    {
      const base::ListValue* list = NULL;
      if (!available_launch_types_value->GetAsList(&list)) {
        return false;
      }
      else {
        out->available_launch_types.reset(new std::vector<LaunchType>);
        for (const auto& it : *(list)) {
          LaunchType tmp;
          std::string launch_type_as_string;
          if (!(it)->GetAsString(&launch_type_as_string)) {
            return false;
          }
          tmp = ParseLaunchType(launch_type_as_string);
          if (tmp == LAUNCH_TYPE_NONE) {
            return false;
          }
          out->available_launch_types->push_back(tmp);
        }
      }
    }
  }

  return true;
}

// static
scoped_ptr<ExtensionInfo> ExtensionInfo::FromValue(const base::Value& value) {
  scoped_ptr<ExtensionInfo> out(new ExtensionInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<ExtensionInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> ExtensionInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", new base::StringValue(this->id));

  value->SetWithoutPathExpansion("name", new base::StringValue(this->name));

  value->SetWithoutPathExpansion("shortName", new base::StringValue(this->short_name));

  value->SetWithoutPathExpansion("description", new base::StringValue(this->description));

  value->SetWithoutPathExpansion("version", new base::StringValue(this->version));

  if (this->version_name.get()) {
    value->SetWithoutPathExpansion("versionName", new base::StringValue(*this->version_name));

  }
  value->SetWithoutPathExpansion("mayDisable", new base::FundamentalValue(this->may_disable));

  value->SetWithoutPathExpansion("enabled", new base::FundamentalValue(this->enabled));

  if (this->disabled_reason != EXTENSION_DISABLED_REASON_NONE) {
    value->SetWithoutPathExpansion("disabledReason", new base::StringValue(management::ToString(this->disabled_reason)));

  }
  value->SetWithoutPathExpansion("isApp", new base::FundamentalValue(this->is_app));

  value->SetWithoutPathExpansion("type", new base::StringValue(management::ToString(this->type)));

  if (this->app_launch_url.get()) {
    value->SetWithoutPathExpansion("appLaunchUrl", new base::StringValue(*this->app_launch_url));

  }
  if (this->homepage_url.get()) {
    value->SetWithoutPathExpansion("homepageUrl", new base::StringValue(*this->homepage_url));

  }
  if (this->update_url.get()) {
    value->SetWithoutPathExpansion("updateUrl", new base::StringValue(*this->update_url));

  }
  value->SetWithoutPathExpansion("offlineEnabled", new base::FundamentalValue(this->offline_enabled));

  value->SetWithoutPathExpansion("optionsUrl", new base::StringValue(this->options_url));

  if (this->icons.get()) {
    value->SetWithoutPathExpansion("icons", json_schema_compiler::util::CreateValueFromOptionalArray(this->icons).release());

  }
  value->SetWithoutPathExpansion("permissions", json_schema_compiler::util::CreateValueFromArray(this->permissions).release());

  value->SetWithoutPathExpansion("hostPermissions", json_schema_compiler::util::CreateValueFromArray(this->host_permissions).release());

  value->SetWithoutPathExpansion("installType", new base::StringValue(management::ToString(this->install_type)));

  if (this->launch_type != LAUNCH_TYPE_NONE) {
    value->SetWithoutPathExpansion("launchType", new base::StringValue(management::ToString(this->launch_type)));

  }
  if (this->available_launch_types.get()) {
    {
      std::vector<std::string> availableLaunchTypes_list;
      for (const auto& it : *(this->available_launch_types)) {
      availableLaunchTypes_list.push_back(management::ToString(it));
    }
    value->SetWithoutPathExpansion("availableLaunchTypes", json_schema_compiler::util::CreateValueFromArray(availableLaunchTypes_list).release());
    }

  }

  return value;
}



//
// Functions
//

namespace GetAll {

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<ExtensionInfo> >& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(result).release());

  return create_results;
}
}  // namespace GetAll

namespace Get {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* id_value = NULL;
  if (args.Get(0, &id_value) &&
      !id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!id_value->GetAsString(&params->id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const ExtensionInfo& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((result).ToValue().release());

  return create_results;
}
}  // namespace Get

namespace GetSelf {

scoped_ptr<base::ListValue> Results::Create(const ExtensionInfo& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((result).ToValue().release());

  return create_results;
}
}  // namespace GetSelf

namespace GetPermissionWarningsById {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* id_value = NULL;
  if (args.Get(0, &id_value) &&
      !id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!id_value->GetAsString(&params->id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<std::string>& permission_warnings) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(permission_warnings).release());

  return create_results;
}
}  // namespace GetPermissionWarningsById

namespace GetPermissionWarningsByManifest {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* manifest_str_value = NULL;
  if (args.Get(0, &manifest_str_value) &&
      !manifest_str_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!manifest_str_value->GetAsString(&params->manifest_str)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<std::string>& permission_warnings) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(permission_warnings).release());

  return create_results;
}
}  // namespace GetPermissionWarningsByManifest

namespace SetEnabled {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* id_value = NULL;
  if (args.Get(0, &id_value) &&
      !id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!id_value->GetAsString(&params->id)) {
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


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace SetEnabled

namespace Uninstall {

Params::Options::Options()
 {}

Params::Options::~Options() {}

// static
bool Params::Options::Populate(
    const base::Value& value, Options* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* show_confirm_dialog_value = NULL;
  if (dict->GetWithoutPathExpansion("showConfirmDialog", &show_confirm_dialog_value)) {
    {
      bool temp;
      if (!show_confirm_dialog_value->GetAsBoolean(&temp)) {
        out->show_confirm_dialog.reset();
        return false;
      }
      else
        out->show_confirm_dialog.reset(new bool(temp));
    }
  }

  return true;
}


Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* id_value = NULL;
  if (args.Get(0, &id_value) &&
      !id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!id_value->GetAsString(&params->id)) {
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
        scoped_ptr<Options> temp(new Options());
        if (!Options::Populate(*dictionary, temp.get())) {
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
}  // namespace Uninstall

namespace UninstallSelf {

Params::Options::Options()
 {}

Params::Options::~Options() {}

// static
bool Params::Options::Populate(
    const base::Value& value, Options* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* show_confirm_dialog_value = NULL;
  if (dict->GetWithoutPathExpansion("showConfirmDialog", &show_confirm_dialog_value)) {
    {
      bool temp;
      if (!show_confirm_dialog_value->GetAsBoolean(&temp)) {
        out->show_confirm_dialog.reset();
        return false;
      }
      else
        out->show_confirm_dialog.reset(new bool(temp));
    }
  }

  return true;
}


Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() > 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* options_value = NULL;
  if (args.Get(0, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      else {
        scoped_ptr<Options> temp(new Options());
        if (!Options::Populate(*dictionary, temp.get())) {
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
}  // namespace UninstallSelf

namespace LaunchApp {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* id_value = NULL;
  if (args.Get(0, &id_value) &&
      !id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!id_value->GetAsString(&params->id)) {
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
}  // namespace LaunchApp

namespace CreateAppShortcut {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* id_value = NULL;
  if (args.Get(0, &id_value) &&
      !id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!id_value->GetAsString(&params->id)) {
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
}  // namespace CreateAppShortcut

namespace SetLaunchType {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* id_value = NULL;
  if (args.Get(0, &id_value) &&
      !id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!id_value->GetAsString(&params->id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* launch_type_value = NULL;
  if (args.Get(1, &launch_type_value) &&
      !launch_type_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string launch_type_as_string;
      if (!launch_type_value->GetAsString(&launch_type_as_string)) {
        return scoped_ptr<Params>();
      }
      params->launch_type = ParseLaunchType(launch_type_as_string);
      if (params->launch_type == LAUNCH_TYPE_NONE) {
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
}  // namespace SetLaunchType

namespace GenerateAppForLink {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* url_value = NULL;
  if (args.Get(0, &url_value) &&
      !url_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!url_value->GetAsString(&params->url)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* title_value = NULL;
  if (args.Get(1, &title_value) &&
      !title_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!title_value->GetAsString(&params->title)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const ExtensionInfo& result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((result).ToValue().release());

  return create_results;
}
}  // namespace GenerateAppForLink

//
// Events
//

namespace OnInstalled {

const char kEventName[] = "management.onInstalled";

scoped_ptr<base::ListValue> Create(const ExtensionInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnInstalled

namespace OnUninstalled {

const char kEventName[] = "management.onUninstalled";

scoped_ptr<base::ListValue> Create(const std::string& id) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(id));

  return create_results;
}

}  // namespace OnUninstalled

namespace OnEnabled {

const char kEventName[] = "management.onEnabled";

scoped_ptr<base::ListValue> Create(const ExtensionInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnEnabled

namespace OnDisabled {

const char kEventName[] = "management.onDisabled";

scoped_ptr<base::ListValue> Create(const ExtensionInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnDisabled

}  // namespace management
}  // namespace api
}  // namespace extensions

