// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/system_display.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_SYSTEM_DISPLAY_H__
#define EXTENSIONS_COMMON_API_SYSTEM_DISPLAY_H__

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
namespace system_display {

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

  // The x-coordinate of the upper-left corner.
  int left;

  // The y-coordinate of the upper-left corner.
  int top;

  // The width of the display in pixels.
  int width;

  // The height of the display in pixels.
  int height;


 private:
  DISALLOW_COPY_AND_ASSIGN(Bounds);
};

struct Insets {
  Insets();
  ~Insets();

  // Populates a Insets object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, Insets* out);

  // Creates a Insets object from a base::Value, or NULL on failure.
  static scoped_ptr<Insets> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Insets object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The x-axis distance from the left bound.
  int left;

  // The y-axis distance from the top bound.
  int top;

  // The x-axis distance from the right bound.
  int right;

  // The y-axis distance from the bottom bound.
  int bottom;


 private:
  DISALLOW_COPY_AND_ASSIGN(Insets);
};

struct DisplayUnitInfo {
  DisplayUnitInfo();
  ~DisplayUnitInfo();

  // Populates a DisplayUnitInfo object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, DisplayUnitInfo* out);

  // Creates a DisplayUnitInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<DisplayUnitInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this DisplayUnitInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The unique identifier of the display.
  std::string id;

  // The user-friendly name (e.g. "HP LCD monitor").
  std::string name;

  // Identifier of the display that is being mirrored on the display unit. If
  // mirroring is not in progress, set to an empty string. Currently exposed only
  // on ChromeOS. Will be empty string on other platforms.
  std::string mirroring_source_id;

  // True if this is the primary display.
  bool is_primary;

  // True if this is an internal display.
  bool is_internal;

  // True if this display is enabled.
  bool is_enabled;

  // The number of pixels per inch along the x-axis.
  double dpi_x;

  // The number of pixels per inch along the y-axis.
  double dpi_y;

  // The display's clockwise rotation in degrees relative to the vertical
  // position. Currently exposed only on ChromeOS. Will be set to 0 on other
  // platforms.
  int rotation;

  // The display's logical bounds.
  Bounds bounds;

  // The display's insets within its screen's bounds. Currently exposed only on
  // ChromeOS. Will be set to empty insets on other platforms.
  Insets overscan;

  // The usable work area of the display within the display bounds. The work area
  // excludes areas of the display reserved for OS, for example taskbar and
  // launcher.
  Bounds work_area;


 private:
  DISALLOW_COPY_AND_ASSIGN(DisplayUnitInfo);
};

struct DisplayProperties {
  DisplayProperties();
  ~DisplayProperties();

  // Populates a DisplayProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, DisplayProperties* out);

  // Creates a DisplayProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<DisplayProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this DisplayProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // If set and not empty, starts mirroring between this and the display with the
  // provided id (the system will determine which of the displays is actually
  // mirrored). If set and not empty, stops mirroring between this and the display
  // with the specified id (if mirroring is in progress). If set, no other
  // parameter may be set.
  scoped_ptr<std::string> mirroring_source_id;

  // If set to true, makes the display primary. No-op if set to false.
  scoped_ptr<bool> is_primary;

  // If set, sets the display's overscan insets to the provided values. Note that
  // overscan values may not be negative or larger than a half of the screen's
  // size. Overscan cannot be changed on the internal monitor. It's applied after
  // <code>isPrimary</code> parameter.
  scoped_ptr<Insets> overscan;

  // If set, updates the display's rotation. Legal values are [0, 90, 180, 270].
  // The rotation is set clockwise, relative to the display's vertical position.
  // It's applied after <code>overscan</code> paramter.
  scoped_ptr<int> rotation;

  // If set, updates the display's logical bounds origin along x-axis. Applied
  // together with <code>boundsOriginY</code>, if <code>boundsOriginY</code> is
  // set. Note that, when updating the display origin, some constraints will be
  // applied, so the final bounds origin may be different than the one set. The
  // final bounds can be retrieved using $(ref:getInfo). The bounds origin is
  // applied after <code>rotation</code>. The bounds origin cannot be changed on
  // the primary display. Note that is also invalid to set bounds origin values if
  // <code>isPrimary</code> is also set (as <code>isPrimary</code> parameter is
  // applied first).
  scoped_ptr<int> bounds_origin_x;

  // If set, updates the display's logical bounds origin along y-axis. See
  // documentation for <code>boundsOriginX</code> parameter.
  scoped_ptr<int> bounds_origin_y;


 private:
  DISALLOW_COPY_AND_ASSIGN(DisplayProperties);
};


//
// Functions
//

namespace GetInfo {

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<DisplayUnitInfo> >& display_info);
}  // namespace Results

}  // namespace GetInfo

namespace SetDisplayProperties {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The display's unique identifier.
  std::string id;

  // The information about display properties that should be changed.     A
  // property will be changed only if a new value for it is specified in
  // |info|.
  DisplayProperties info;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetDisplayProperties

namespace EnableUnifiedDesktop {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  bool enabled;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace EnableUnifiedDesktop

//
// Events
//

namespace OnDisplayChanged {

extern const char kEventName[];  // "system.display.onDisplayChanged"

scoped_ptr<base::ListValue> Create();
}  // namespace OnDisplayChanged

}  // namespace system_display
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_SYSTEM_DISPLAY_H__
