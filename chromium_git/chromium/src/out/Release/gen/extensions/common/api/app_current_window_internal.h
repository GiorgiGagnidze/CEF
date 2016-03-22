// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/app_current_window_internal.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_APP_CURRENT_WINDOW_INTERNAL_H__
#define EXTENSIONS_COMMON_API_APP_CURRENT_WINDOW_INTERNAL_H__

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
namespace app_current_window_internal {

//
// Types
//

struct Bounds {
  Bounds();
  ~Bounds();

  // Populates a Bounds object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, Bounds* out);

  // Creates a Bounds object from a base::Value, or NULL on failure.
  static scoped_ptr<Bounds> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Bounds object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<int> left;

  scoped_ptr<int> top;

  scoped_ptr<int> width;

  scoped_ptr<int> height;


 private:
  DISALLOW_COPY_AND_ASSIGN(Bounds);
};

struct SizeConstraints {
  SizeConstraints();
  ~SizeConstraints();

  // Populates a SizeConstraints object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, SizeConstraints* out);

  // Creates a SizeConstraints object from a base::Value, or NULL on failure.
  static scoped_ptr<SizeConstraints> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this SizeConstraints object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<int> min_width;

  scoped_ptr<int> min_height;

  scoped_ptr<int> max_width;

  scoped_ptr<int> max_height;


 private:
  DISALLOW_COPY_AND_ASSIGN(SizeConstraints);
};

struct RegionRect {
  RegionRect();
  ~RegionRect();

  // Populates a RegionRect object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, RegionRect* out);

  // Creates a RegionRect object from a base::Value, or NULL on failure.
  static scoped_ptr<RegionRect> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this RegionRect object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  int left;

  int top;

  int width;

  int height;


 private:
  DISALLOW_COPY_AND_ASSIGN(RegionRect);
};

struct Region {
  Region();
  ~Region();

  // Populates a Region object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, Region* out);

  // Creates a Region object from a base::Value, or NULL on failure.
  static scoped_ptr<Region> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Region object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<std::vector<linked_ptr<RegionRect> > > rects;


 private:
  DISALLOW_COPY_AND_ASSIGN(Region);
};


//
// Functions
//

namespace Focus {

}  // namespace Focus

namespace Fullscreen {

}  // namespace Fullscreen

namespace Minimize {

}  // namespace Minimize

namespace Maximize {

}  // namespace Maximize

namespace Restore {

}  // namespace Restore

namespace DrawAttention {

}  // namespace DrawAttention

namespace ClearAttention {

}  // namespace ClearAttention

namespace Show {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  scoped_ptr<bool> focused;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace Show

namespace Hide {

}  // namespace Hide

namespace SetBounds {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string bounds_type;

  Bounds bounds;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetBounds

namespace SetSizeConstraints {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string bounds_type;

  SizeConstraints constraints;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetSizeConstraints

namespace SetIcon {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string icon_url;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetIcon

namespace SetShape {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  Region region;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetShape

namespace SetAlwaysOnTop {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  bool always_on_top;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetAlwaysOnTop

namespace SetVisibleOnAllWorkspaces {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  bool always_visible;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetVisibleOnAllWorkspaces

//
// Events
//

namespace OnClosed {

extern const char kEventName[];  // "app.currentWindowInternal.onClosed"

scoped_ptr<base::ListValue> Create();
}  // namespace OnClosed

namespace OnBoundsChanged {

extern const char kEventName[];  // "app.currentWindowInternal.onBoundsChanged"

scoped_ptr<base::ListValue> Create();
}  // namespace OnBoundsChanged

namespace OnFullscreened {

extern const char kEventName[];  // "app.currentWindowInternal.onFullscreened"

scoped_ptr<base::ListValue> Create();
}  // namespace OnFullscreened

namespace OnMinimized {

extern const char kEventName[];  // "app.currentWindowInternal.onMinimized"

scoped_ptr<base::ListValue> Create();
}  // namespace OnMinimized

namespace OnMaximized {

extern const char kEventName[];  // "app.currentWindowInternal.onMaximized"

scoped_ptr<base::ListValue> Create();
}  // namespace OnMaximized

namespace OnRestored {

extern const char kEventName[];  // "app.currentWindowInternal.onRestored"

scoped_ptr<base::ListValue> Create();
}  // namespace OnRestored

namespace OnAlphaEnabledChanged {

extern const char kEventName[];  // "app.currentWindowInternal.onAlphaEnabledChanged"

scoped_ptr<base::ListValue> Create();
}  // namespace OnAlphaEnabledChanged

namespace OnWindowShownForTests {

extern const char kEventName[];  // "app.currentWindowInternal.onWindowShownForTests"

scoped_ptr<base::ListValue> Create();
}  // namespace OnWindowShownForTests

}  // namespace app_current_window_internal
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_APP_CURRENT_WINDOW_INTERNAL_H__
