// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/app_runtime.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_APP_RUNTIME_H__
#define EXTENSIONS_COMMON_API_APP_RUNTIME_H__

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
namespace app_runtime {

//
// Types
//

struct LaunchItem {
  LaunchItem();
  ~LaunchItem();

  // Populates a LaunchItem object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, LaunchItem* out);

  // Creates a LaunchItem object from a base::Value, or NULL on failure.
  static scoped_ptr<LaunchItem> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this LaunchItem object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // FileEntry for the file.
  struct Entry {
    Entry();
    ~Entry();

    // Populates a Entry object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, Entry* out);

    // Returns a new base::DictionaryValue representing the serialized form of
    // this Entry object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    base::DictionaryValue additional_properties;

   private:
    DISALLOW_COPY_AND_ASSIGN(Entry);
  };


  // FileEntry for the file.
  Entry entry;

  // The MIME type of the file.
  std::string type;


 private:
  DISALLOW_COPY_AND_ASSIGN(LaunchItem);
};

// Enumeration of app launch sources.
enum LaunchSource {
  LAUNCH_SOURCE_NONE,
  LAUNCH_SOURCE_APP_LAUNCHER,
  LAUNCH_SOURCE_NEW_TAB_PAGE,
  LAUNCH_SOURCE_RELOAD,
  LAUNCH_SOURCE_RESTART,
  LAUNCH_SOURCE_LOAD_AND_LAUNCH,
  LAUNCH_SOURCE_COMMAND_LINE,
  LAUNCH_SOURCE_FILE_HANDLER,
  LAUNCH_SOURCE_URL_HANDLER,
  LAUNCH_SOURCE_SYSTEM_TRAY,
  LAUNCH_SOURCE_ABOUT_PAGE,
  LAUNCH_SOURCE_KEYBOARD,
  LAUNCH_SOURCE_EXTENSIONS_PAGE,
  LAUNCH_SOURCE_MANAGEMENT_API,
  LAUNCH_SOURCE_EPHEMERAL_APP,
  LAUNCH_SOURCE_BACKGROUND,
  LAUNCH_SOURCE_KIOSK,
  LAUNCH_SOURCE_CHROME_INTERNAL,
  LAUNCH_SOURCE_TEST,
  LAUNCH_SOURCE_LAST = LAUNCH_SOURCE_TEST,
};


std::string ToString(LaunchSource as_enum);
LaunchSource ParseLaunchSource(const std::string& as_string);

struct LaunchData {
  LaunchData();
  ~LaunchData();

  // Populates a LaunchData object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, LaunchData* out);

  // Creates a LaunchData object from a base::Value, or NULL on failure.
  static scoped_ptr<LaunchData> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this LaunchData object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The ID of the file or URL handler that the app is being invoked with. Handler
  // IDs are the top-level keys in the <code>file_handlers</code> and/or
  // <code>url_handlers</code> dictionaries in the manifest.
  scoped_ptr<std::string> id;

  // The file entries for the <code>onLaunched</code> event triggered by a
  // matching file handler in the <code>file_handlers</code> manifest key.
  scoped_ptr<std::vector<linked_ptr<LaunchItem> > > items;

  // The URL for the <code>onLaunched</code> event triggered by a matching URL
  // handler in the <code>url_handlers</code> manifest key.
  scoped_ptr<std::string> url;

  // The referrer URL for the <code>onLaunched</code> event triggered by a
  // matching URL handler in the <code>url_handlers</code> manifest key.
  scoped_ptr<std::string> referrer_url;

  // Whether the app is being launched in a <a
  // href="https://support.google.com/chromebook/answer/3134673">Chrome OS kiosk
  // session</a>.
  scoped_ptr<bool> is_kiosk_session;

  // Whether the app is being launched in a <a
  // href="https://support.google.com/chrome/a/answer/3017014">Chrome OS public
  // session</a>.
  scoped_ptr<bool> is_public_session;

  // Where the app is launched from.
  LaunchSource source;


 private:
  DISALLOW_COPY_AND_ASSIGN(LaunchData);
};

struct EmbedRequest {
  EmbedRequest();
  ~EmbedRequest();

  // Populates a EmbedRequest object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, EmbedRequest* out);

  // Creates a EmbedRequest object from a base::Value, or NULL on failure.
  static scoped_ptr<EmbedRequest> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this EmbedRequest object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  std::string embedder_id;

  // Optional developer specified data that the app to be embedded can use when
  // making an embedding decision.
  scoped_ptr<base::Value> data;


 private:
  DISALLOW_COPY_AND_ASSIGN(EmbedRequest);
};


//
// Events
//

namespace OnEmbedRequested {

extern const char kEventName[];  // "app.runtime.onEmbedRequested"

scoped_ptr<base::ListValue> Create(const EmbedRequest& request);
}  // namespace OnEmbedRequested

namespace OnLaunched {

extern const char kEventName[];  // "app.runtime.onLaunched"

scoped_ptr<base::ListValue> Create(const LaunchData& launch_data);
}  // namespace OnLaunched

namespace OnRestarted {

extern const char kEventName[];  // "app.runtime.onRestarted"

scoped_ptr<base::ListValue> Create();
}  // namespace OnRestarted

}  // namespace app_runtime
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_APP_RUNTIME_H__
