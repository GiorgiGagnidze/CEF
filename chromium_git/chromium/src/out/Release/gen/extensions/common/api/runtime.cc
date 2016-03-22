// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/runtime.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/runtime.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace runtime {
//
// Properties
//

//
// Types
//

std::string ToString(PlatformOs enum_param) {
  switch (enum_param) {
    case PLATFORM_OS_MAC:
      return "mac";
    case PLATFORM_OS_WIN:
      return "win";
    case PLATFORM_OS_ANDROID:
      return "android";
    case PLATFORM_OS_CROS:
      return "cros";
    case PLATFORM_OS_LINUX:
      return "linux";
    case PLATFORM_OS_OPENBSD:
      return "openbsd";
    case PLATFORM_OS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

PlatformOs ParsePlatformOs(const std::string& enum_string) {
  if (enum_string == "mac")
    return PLATFORM_OS_MAC;
  if (enum_string == "win")
    return PLATFORM_OS_WIN;
  if (enum_string == "android")
    return PLATFORM_OS_ANDROID;
  if (enum_string == "cros")
    return PLATFORM_OS_CROS;
  if (enum_string == "linux")
    return PLATFORM_OS_LINUX;
  if (enum_string == "openbsd")
    return PLATFORM_OS_OPENBSD;
  return PLATFORM_OS_NONE;
}


std::string ToString(PlatformArch enum_param) {
  switch (enum_param) {
    case PLATFORM_ARCH_ARM:
      return "arm";
    case PLATFORM_ARCH_X86_32:
      return "x86-32";
    case PLATFORM_ARCH_X86_64:
      return "x86-64";
    case PLATFORM_ARCH_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

PlatformArch ParsePlatformArch(const std::string& enum_string) {
  if (enum_string == "arm")
    return PLATFORM_ARCH_ARM;
  if (enum_string == "x86-32")
    return PLATFORM_ARCH_X86_32;
  if (enum_string == "x86-64")
    return PLATFORM_ARCH_X86_64;
  return PLATFORM_ARCH_NONE;
}


std::string ToString(PlatformNaclArch enum_param) {
  switch (enum_param) {
    case PLATFORM_NACL_ARCH_ARM:
      return "arm";
    case PLATFORM_NACL_ARCH_X86_32:
      return "x86-32";
    case PLATFORM_NACL_ARCH_X86_64:
      return "x86-64";
    case PLATFORM_NACL_ARCH_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

PlatformNaclArch ParsePlatformNaclArch(const std::string& enum_string) {
  if (enum_string == "arm")
    return PLATFORM_NACL_ARCH_ARM;
  if (enum_string == "x86-32")
    return PLATFORM_NACL_ARCH_X86_32;
  if (enum_string == "x86-64")
    return PLATFORM_NACL_ARCH_X86_64;
  return PLATFORM_NACL_ARCH_NONE;
}


PlatformInfo::PlatformInfo()
: os(PLATFORM_OS_NONE), arch(PLATFORM_ARCH_NONE), nacl_arch(PLATFORM_NACL_ARCH_NONE) {}

PlatformInfo::~PlatformInfo() {}

// static
bool PlatformInfo::Populate(
    const base::Value& value, PlatformInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* os_value = NULL;
  if (!dict->GetWithoutPathExpansion("os", &os_value)) {
    return false;
  }
  {
    std::string platform_os_as_string;
    if (!os_value->GetAsString(&platform_os_as_string)) {
      return false;
    }
    out->os = ParsePlatformOs(platform_os_as_string);
    if (out->os == PLATFORM_OS_NONE) {
      return false;
    }
  }

  const base::Value* arch_value = NULL;
  if (!dict->GetWithoutPathExpansion("arch", &arch_value)) {
    return false;
  }
  {
    std::string platform_arch_as_string;
    if (!arch_value->GetAsString(&platform_arch_as_string)) {
      return false;
    }
    out->arch = ParsePlatformArch(platform_arch_as_string);
    if (out->arch == PLATFORM_ARCH_NONE) {
      return false;
    }
  }

  const base::Value* nacl_arch_value = NULL;
  if (!dict->GetWithoutPathExpansion("nacl_arch", &nacl_arch_value)) {
    return false;
  }
  {
    std::string platform_nacl_arch_as_string;
    if (!nacl_arch_value->GetAsString(&platform_nacl_arch_as_string)) {
      return false;
    }
    out->nacl_arch = ParsePlatformNaclArch(platform_nacl_arch_as_string);
    if (out->nacl_arch == PLATFORM_NACL_ARCH_NONE) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<PlatformInfo> PlatformInfo::FromValue(const base::Value& value) {
  scoped_ptr<PlatformInfo> out(new PlatformInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<PlatformInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> PlatformInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("os", new base::StringValue(runtime::ToString(this->os)));

  value->SetWithoutPathExpansion("arch", new base::StringValue(runtime::ToString(this->arch)));

  value->SetWithoutPathExpansion("nacl_arch", new base::StringValue(runtime::ToString(this->nacl_arch)));


  return value;
}


std::string ToString(RequestUpdateCheckStatus enum_param) {
  switch (enum_param) {
    case REQUEST_UPDATE_CHECK_STATUS_THROTTLED:
      return "throttled";
    case REQUEST_UPDATE_CHECK_STATUS_NO_UPDATE:
      return "no_update";
    case REQUEST_UPDATE_CHECK_STATUS_UPDATE_AVAILABLE:
      return "update_available";
    case REQUEST_UPDATE_CHECK_STATUS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

RequestUpdateCheckStatus ParseRequestUpdateCheckStatus(const std::string& enum_string) {
  if (enum_string == "throttled")
    return REQUEST_UPDATE_CHECK_STATUS_THROTTLED;
  if (enum_string == "no_update")
    return REQUEST_UPDATE_CHECK_STATUS_NO_UPDATE;
  if (enum_string == "update_available")
    return REQUEST_UPDATE_CHECK_STATUS_UPDATE_AVAILABLE;
  return REQUEST_UPDATE_CHECK_STATUS_NONE;
}


std::string ToString(OnInstalledReason enum_param) {
  switch (enum_param) {
    case ON_INSTALLED_REASON_INSTALL:
      return "install";
    case ON_INSTALLED_REASON_UPDATE:
      return "update";
    case ON_INSTALLED_REASON_CHROME_UPDATE:
      return "chrome_update";
    case ON_INSTALLED_REASON_SHARED_MODULE_UPDATE:
      return "shared_module_update";
    case ON_INSTALLED_REASON_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

OnInstalledReason ParseOnInstalledReason(const std::string& enum_string) {
  if (enum_string == "install")
    return ON_INSTALLED_REASON_INSTALL;
  if (enum_string == "update")
    return ON_INSTALLED_REASON_UPDATE;
  if (enum_string == "chrome_update")
    return ON_INSTALLED_REASON_CHROME_UPDATE;
  if (enum_string == "shared_module_update")
    return ON_INSTALLED_REASON_SHARED_MODULE_UPDATE;
  return ON_INSTALLED_REASON_NONE;
}


std::string ToString(OnRestartRequiredReason enum_param) {
  switch (enum_param) {
    case ON_RESTART_REQUIRED_REASON_APP_UPDATE:
      return "app_update";
    case ON_RESTART_REQUIRED_REASON_OS_UPDATE:
      return "os_update";
    case ON_RESTART_REQUIRED_REASON_PERIODIC:
      return "periodic";
    case ON_RESTART_REQUIRED_REASON_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

OnRestartRequiredReason ParseOnRestartRequiredReason(const std::string& enum_string) {
  if (enum_string == "app_update")
    return ON_RESTART_REQUIRED_REASON_APP_UPDATE;
  if (enum_string == "os_update")
    return ON_RESTART_REQUIRED_REASON_OS_UPDATE;
  if (enum_string == "periodic")
    return ON_RESTART_REQUIRED_REASON_PERIODIC;
  return ON_RESTART_REQUIRED_REASON_NONE;
}



//
// Functions
//

namespace GetBackgroundPage {

Results::BackgroundPage::BackgroundPage()
 {}

Results::BackgroundPage::~BackgroundPage() {}

scoped_ptr<base::DictionaryValue> Results::BackgroundPage::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}


scoped_ptr<base::ListValue> Results::Create(const BackgroundPage& background_page) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((background_page).ToValue().release());

  return create_results;
}
}  // namespace GetBackgroundPage

namespace OpenOptionsPage {

scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace OpenOptionsPage

namespace SetUninstallURL {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
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

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace SetUninstallURL

namespace Reload {

}  // namespace Reload

namespace RequestUpdateCheck {

Results::Details::Details()
 {}

Results::Details::~Details() {}

scoped_ptr<base::DictionaryValue> Results::Details::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("version", new base::StringValue(this->version));


  return value;
}


scoped_ptr<base::ListValue> Results::Create(const RequestUpdateCheckStatus& status, const Details& details) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(runtime::ToString(status)));

  create_results->Append((details).ToValue().release());

  return create_results;
}
}  // namespace RequestUpdateCheck

namespace Restart {

}  // namespace Restart

namespace GetPlatformInfo {

scoped_ptr<base::ListValue> Results::Create(const PlatformInfo& platform_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((platform_info).ToValue().release());

  return create_results;
}
}  // namespace GetPlatformInfo

namespace GetPackageDirectoryEntry {

Results::DirectoryEntry::DirectoryEntry()
 {}

Results::DirectoryEntry::~DirectoryEntry() {}

scoped_ptr<base::DictionaryValue> Results::DirectoryEntry::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}


scoped_ptr<base::ListValue> Results::Create(const DirectoryEntry& directory_entry) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((directory_entry).ToValue().release());

  return create_results;
}
}  // namespace GetPackageDirectoryEntry

//
// Events
//

namespace OnStartup {

const char kEventName[] = "runtime.onStartup";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnStartup

namespace OnInstalled {

const char kEventName[] = "runtime.onInstalled";

Details::Details()
: reason(ON_INSTALLED_REASON_NONE) {}

Details::~Details() {}

scoped_ptr<base::DictionaryValue> Details::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("reason", new base::StringValue(runtime::ToString(this->reason)));

  if (this->previous_version.get()) {
    value->SetWithoutPathExpansion("previousVersion", new base::StringValue(*this->previous_version));

  }
  if (this->id.get()) {
    value->SetWithoutPathExpansion("id", new base::StringValue(*this->id));

  }

  return value;
}


scoped_ptr<base::ListValue> Create(const Details& details) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((details).ToValue().release());

  return create_results;
}

}  // namespace OnInstalled

namespace OnSuspend {

const char kEventName[] = "runtime.onSuspend";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnSuspend

namespace OnSuspendCanceled {

const char kEventName[] = "runtime.onSuspendCanceled";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnSuspendCanceled

namespace OnUpdateAvailable {

const char kEventName[] = "runtime.onUpdateAvailable";

Details::Details()
 {}

Details::~Details() {}

scoped_ptr<base::DictionaryValue> Details::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("version", new base::StringValue(this->version));

  value->MergeDictionary(&additional_properties);

  return value;
}


scoped_ptr<base::ListValue> Create(const Details& details) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((details).ToValue().release());

  return create_results;
}

}  // namespace OnUpdateAvailable

namespace OnBrowserUpdateAvailable {

const char kEventName[] = "runtime.onBrowserUpdateAvailable";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnBrowserUpdateAvailable

namespace OnRestartRequired {

const char kEventName[] = "runtime.onRestartRequired";

scoped_ptr<base::ListValue> Create(const OnRestartRequiredReason& reason) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(runtime::ToString(reason)));

  return create_results;
}

}  // namespace OnRestartRequired

}  // namespace runtime
}  // namespace api
}  // namespace extensions

