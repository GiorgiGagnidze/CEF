// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/management.json
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_MANAGEMENT_H__
#define EXTENSIONS_COMMON_API_MANAGEMENT_H__

#include <stdint.h>

#include <map>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/memory/linked_ptr.h"
#include "base/memory/scoped_ptr.h"
#include "base/values.h"

namespace extensions {
namespace api {
namespace management {

//
// Types
//

// Information about an icon belonging to an extension, app, or theme.
struct IconInfo {
  IconInfo();
  ~IconInfo();

  // Populates a IconInfo object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, IconInfo* out);

  // Creates a IconInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<IconInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this IconInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // A number representing the width and height of the icon. Likely values include
  // (but are not limited to) 128, 48, 24, and 16.
  int size;

  // The URL for this icon image. To display a grayscale version of the icon (to
  // indicate that an extension is disabled, for example), append
  // <code>?grayscale=true</code> to the URL.
  std::string url;


 private:
  DISALLOW_COPY_AND_ASSIGN(IconInfo);
};

// These are all possible app launch types.
enum LaunchType {
  LAUNCH_TYPE_NONE,
  LAUNCH_TYPE_OPEN_AS_REGULAR_TAB,
  LAUNCH_TYPE_OPEN_AS_PINNED_TAB,
  LAUNCH_TYPE_OPEN_AS_WINDOW,
  LAUNCH_TYPE_OPEN_FULL_SCREEN,
  LAUNCH_TYPE_LAST = LAUNCH_TYPE_OPEN_FULL_SCREEN,
};


std::string ToString(LaunchType as_enum);
LaunchType ParseLaunchType(const std::string& as_string);

// A reason the item is disabled.
enum ExtensionDisabledReason {
  EXTENSION_DISABLED_REASON_NONE,
  EXTENSION_DISABLED_REASON_UNKNOWN,
  EXTENSION_DISABLED_REASON_PERMISSIONS_INCREASE,
  EXTENSION_DISABLED_REASON_LAST = EXTENSION_DISABLED_REASON_PERMISSIONS_INCREASE,
};


std::string ToString(ExtensionDisabledReason as_enum);
ExtensionDisabledReason ParseExtensionDisabledReason(const std::string& as_string);

// The type of this extension, app, or theme.
enum ExtensionType {
  EXTENSION_TYPE_NONE,
  EXTENSION_TYPE_EXTENSION,
  EXTENSION_TYPE_HOSTED_APP,
  EXTENSION_TYPE_PACKAGED_APP,
  EXTENSION_TYPE_LEGACY_PACKAGED_APP,
  EXTENSION_TYPE_THEME,
  EXTENSION_TYPE_LAST = EXTENSION_TYPE_THEME,
};


std::string ToString(ExtensionType as_enum);
ExtensionType ParseExtensionType(const std::string& as_string);

// How the extension was installed. One of<br><var>admin</var>: The extension
// was installed because of an administrative policy,<br><var>development</var>:
// The extension was loaded unpacked in developer mode,<br><var>normal</var>:
// The extension was installed normally via a .crx file,<br><var>sideload</var>:
// The extension was installed by other software on the
// machine,<br><var>other</var>: The extension was installed by other means.
enum ExtensionInstallType {
  EXTENSION_INSTALL_TYPE_NONE,
  EXTENSION_INSTALL_TYPE_ADMIN,
  EXTENSION_INSTALL_TYPE_DEVELOPMENT,
  EXTENSION_INSTALL_TYPE_NORMAL,
  EXTENSION_INSTALL_TYPE_SIDELOAD,
  EXTENSION_INSTALL_TYPE_OTHER,
  EXTENSION_INSTALL_TYPE_LAST = EXTENSION_INSTALL_TYPE_OTHER,
};


std::string ToString(ExtensionInstallType as_enum);
ExtensionInstallType ParseExtensionInstallType(const std::string& as_string);

// Information about an installed extension, app, or theme.
struct ExtensionInfo {
  ExtensionInfo();
  ~ExtensionInfo();

  // Populates a ExtensionInfo object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ExtensionInfo* out);

  // Creates a ExtensionInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<ExtensionInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ExtensionInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The extension's unique identifier.
  std::string id;

  // The name of this extension, app, or theme.
  std::string name;

  // A short version of the name of this extension, app, or theme.
  std::string short_name;

  // The description of this extension, app, or theme.
  std::string description;

  // The <a href='manifest/version'>version</a> of this extension, app, or theme.
  std::string version;

  // The <a href='manifest/version#version_name'>version name</a> of this
  // extension, app, or theme if the manifest specified one.
  scoped_ptr<std::string> version_name;

  // Whether this extension can be disabled or uninstalled by the user.
  bool may_disable;

  // Whether it is currently enabled or disabled.
  bool enabled;

  // A reason the item is disabled.
  ExtensionDisabledReason disabled_reason;

  // True if this is an app.
  bool is_app;

  // The type of this extension, app, or theme.
  ExtensionType type;

  // The launch url (only present for apps).
  scoped_ptr<std::string> app_launch_url;

  // The URL of the homepage of this extension, app, or theme.
  scoped_ptr<std::string> homepage_url;

  // The update URL of this extension, app, or theme.
  scoped_ptr<std::string> update_url;

  // Whether the extension, app, or theme declares that it supports offline.
  bool offline_enabled;

  // The url for the item's options page, if it has one.
  std::string options_url;

  // A list of icon information. Note that this just reflects what was declared in
  // the manifest, and the actual image at that url may be larger or smaller than
  // what was declared, so you might consider using explicit width and height
  // attributes on img tags referencing these images. See the <a
  // href='manifest/icons'>manifest documentation on icons</a> for more details.
  scoped_ptr<std::vector<linked_ptr<IconInfo> > > icons;

  // Returns a list of API based permissions.
  std::vector<std::string> permissions;

  // Returns a list of host based permissions.
  std::vector<std::string> host_permissions;

  // How the extension was installed.
  ExtensionInstallType install_type;

  // The app launch type (only present for apps).
  LaunchType launch_type;

  // The currently available launch types (only present for apps).
  scoped_ptr<std::vector<LaunchType> > available_launch_types;


 private:
  DISALLOW_COPY_AND_ASSIGN(ExtensionInfo);
};


//
// Functions
//

namespace GetAll {

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<ExtensionInfo> >& result);
}  // namespace Results

}  // namespace GetAll

namespace Get {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The ID from an item of $(ref:management.ExtensionInfo).
  std::string id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const ExtensionInfo& result);
}  // namespace Results

}  // namespace Get

namespace GetSelf {

namespace Results {

scoped_ptr<base::ListValue> Create(const ExtensionInfo& result);
}  // namespace Results

}  // namespace GetSelf

namespace GetPermissionWarningsById {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The ID of an already installed extension.
  std::string id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<std::string>& permission_warnings);
}  // namespace Results

}  // namespace GetPermissionWarningsById

namespace GetPermissionWarningsByManifest {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Extension manifest JSON string.
  std::string manifest_str;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<std::string>& permission_warnings);
}  // namespace Results

}  // namespace GetPermissionWarningsByManifest

namespace SetEnabled {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // This should be the id from an item of $(ref:management.ExtensionInfo).
  std::string id;

  // Whether this item should be enabled or disabled.
  bool enabled;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetEnabled

namespace Uninstall {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  struct Options {
    Options();
    ~Options();

    // Populates a Options object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, Options* out);

    // Whether or not a confirm-uninstall dialog should prompt the user. Defaults to
    // false for self uninstalls. If an extension uninstalls another extension, this
    // parameter is ignored and the dialog is always shown.
    scoped_ptr<bool> show_confirm_dialog;


   private:
    DISALLOW_COPY_AND_ASSIGN(Options);
  };


  // This should be the id from an item of $(ref:management.ExtensionInfo).
  std::string id;

  scoped_ptr<Options> options;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace Uninstall

namespace UninstallSelf {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  struct Options {
    Options();
    ~Options();

    // Populates a Options object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, Options* out);

    // Whether or not a confirm-uninstall dialog should prompt the user. Defaults to
    // false.
    scoped_ptr<bool> show_confirm_dialog;


   private:
    DISALLOW_COPY_AND_ASSIGN(Options);
  };


  scoped_ptr<Options> options;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace UninstallSelf

namespace LaunchApp {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The extension id of the application.
  std::string id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace LaunchApp

namespace CreateAppShortcut {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // This should be the id from an app item of $(ref:management.ExtensionInfo).
  std::string id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace CreateAppShortcut

namespace SetLaunchType {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // This should be the id from an app item of $(ref:management.ExtensionInfo).
  std::string id;

  // The target launch type. Always check and make sure this launch type is in
  // $(ref:ExtensionInfo.availableLaunchTypes), because the available launch types
  // vary on different platforms and configurations.
  LaunchType launch_type;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetLaunchType

namespace GenerateAppForLink {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The URL of a web page. The scheme of the URL can only be "http" or "https".
  std::string url;

  // The title of the generated app.
  std::string title;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const ExtensionInfo& result);
}  // namespace Results

}  // namespace GenerateAppForLink

//
// Events
//

namespace OnInstalled {

extern const char kEventName[];  // "management.onInstalled"

scoped_ptr<base::ListValue> Create(const ExtensionInfo& info);
}  // namespace OnInstalled

namespace OnUninstalled {

extern const char kEventName[];  // "management.onUninstalled"

// The id of the extension, app, or theme that was uninstalled.
scoped_ptr<base::ListValue> Create(const std::string& id);
}  // namespace OnUninstalled

namespace OnEnabled {

extern const char kEventName[];  // "management.onEnabled"

scoped_ptr<base::ListValue> Create(const ExtensionInfo& info);
}  // namespace OnEnabled

namespace OnDisabled {

extern const char kEventName[];  // "management.onDisabled"

scoped_ptr<base::ListValue> Create(const ExtensionInfo& info);
}  // namespace OnDisabled

}  // namespace management
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_MANAGEMENT_H__
