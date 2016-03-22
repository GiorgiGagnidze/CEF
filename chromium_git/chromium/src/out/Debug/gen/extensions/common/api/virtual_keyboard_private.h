// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/virtual_keyboard_private.json
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_VIRTUAL_KEYBOARD_PRIVATE_H__
#define EXTENSIONS_COMMON_API_VIRTUAL_KEYBOARD_PRIVATE_H__

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
namespace virtual_keyboard_private {

//
// Types
//

// One of keyup or keydown.
enum VirtualKeyboardEventType {
  VIRTUAL_KEYBOARD_EVENT_TYPE_NONE,
  VIRTUAL_KEYBOARD_EVENT_TYPE_KEYUP,
  VIRTUAL_KEYBOARD_EVENT_TYPE_KEYDOWN,
  VIRTUAL_KEYBOARD_EVENT_TYPE_LAST = VIRTUAL_KEYBOARD_EVENT_TYPE_KEYDOWN,
};


std::string ToString(VirtualKeyboardEventType as_enum);
VirtualKeyboardEventType ParseVirtualKeyboardEventType(const std::string& as_string);

struct VirtualKeyboardEvent {
  VirtualKeyboardEvent();
  ~VirtualKeyboardEvent();

  // Populates a VirtualKeyboardEvent object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, VirtualKeyboardEvent* out);

  // Creates a VirtualKeyboardEvent object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<VirtualKeyboardEvent> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this VirtualKeyboardEvent object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  VirtualKeyboardEventType type;

  // Unicode value of the key.
  int char_value;

  // Virtual key code, which is independent of the keyboard layout or modifier
  // state.
  int key_code;

  // Name of the key, which is independent of modifier state.
  std::string key_name;

  // Flag for modifiers that are active. None = 0, Shift = 2, Control = 4, Alt =
  // 8.
  scoped_ptr<int> modifiers;


 private:
  DISALLOW_COPY_AND_ASSIGN(VirtualKeyboardEvent);
};

// The value of the virtual keyboard mode to set to.
enum KeyboardMode {
  KEYBOARD_MODE_NONE,
  KEYBOARD_MODE_FULL_WIDTH,
  KEYBOARD_MODE_FLOATING,
  KEYBOARD_MODE_LAST = KEYBOARD_MODE_FLOATING,
};


std::string ToString(KeyboardMode as_enum);
KeyboardMode ParseKeyboardMode(const std::string& as_string);

// The value of the virtual keyboard state to change to.
enum KeyboardState {
  KEYBOARD_STATE_NONE,
  KEYBOARD_STATE_ENABLED,
  KEYBOARD_STATE_DISABLED,
  KEYBOARD_STATE_AUTO,
  KEYBOARD_STATE_LAST = KEYBOARD_STATE_AUTO,
};


std::string ToString(KeyboardState as_enum);
KeyboardState ParseKeyboardState(const std::string& as_string);

// The value of type attribute of the focused text input box.
enum OnTextInputBoxFocusedType {
  ON_TEXT_INPUT_BOX_FOCUSED_TYPE_NONE,
  ON_TEXT_INPUT_BOX_FOCUSED_TYPE_TEXT,
  ON_TEXT_INPUT_BOX_FOCUSED_TYPE_NUMBER,
  ON_TEXT_INPUT_BOX_FOCUSED_TYPE_PASSWORD,
  ON_TEXT_INPUT_BOX_FOCUSED_TYPE_DATE,
  ON_TEXT_INPUT_BOX_FOCUSED_TYPE_URL,
  ON_TEXT_INPUT_BOX_FOCUSED_TYPE_TEL,
  ON_TEXT_INPUT_BOX_FOCUSED_TYPE_EMAIL,
  ON_TEXT_INPUT_BOX_FOCUSED_TYPE_LAST = ON_TEXT_INPUT_BOX_FOCUSED_TYPE_EMAIL,
};


std::string ToString(OnTextInputBoxFocusedType as_enum);
OnTextInputBoxFocusedType ParseOnTextInputBoxFocusedType(const std::string& as_string);

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

  // The position of the virtual keyboard window's left edge.
  int left;

  // The position of the virtual keyboard window's top edge.
  int top;

  // The width of the virtual keyboard window.
  int width;

  // The height of the virtual keyboard window.
  int height;


 private:
  DISALLOW_COPY_AND_ASSIGN(Bounds);
};


//
// Functions
//

namespace InsertText {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The text that will be inserted.
  std::string text;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace InsertText

namespace SendKeyEvent {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  VirtualKeyboardEvent key_event;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SendKeyEvent

namespace HideKeyboard {

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace HideKeyboard

namespace SetHotrodKeyboard {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  bool enable;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetHotrodKeyboard

namespace LockKeyboard {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  bool lock;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace LockKeyboard

namespace KeyboardLoaded {

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace KeyboardLoaded

namespace GetKeyboardConfig {

namespace Results {

struct Config {
  Config();
  ~Config();

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Config object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Virtual keyboard layout string.
  std::string layout;

  // True if accessibility virtual keyboard is enabled.
  bool a11ymode;

  // List of experimental feature flags.
  std::vector<std::string> features;


 private:
  DISALLOW_COPY_AND_ASSIGN(Config);
};


scoped_ptr<base::ListValue> Create(const Config& config);
}  // namespace Results

}  // namespace GetKeyboardConfig

namespace OpenSettings {

}  // namespace OpenSettings

namespace SetMode {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The value of the virtual keyboard mode to set to.
  KeyboardMode mode;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetMode

namespace SetKeyboardState {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The value of the virtual keyboard state to change to.
  KeyboardState state;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace SetKeyboardState

//
// Events
//

namespace OnTextInputBoxFocused {

extern const char kEventName[];  // "virtualKeyboardPrivate.onTextInputBoxFocused"

// Describes the text input box that has acquired focus. Note only the type of
// text input box is passed. This API is intended to be used by non-ime virtual
// keyboard only. Normal ime virtual keyboard should use
// chrome.input.ime.onFocus to get the more detailed InputContext.
struct Context {
  Context();
  ~Context();

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Context object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The value of type attribute of the focused text input box.
  OnTextInputBoxFocusedType type;


 private:
  DISALLOW_COPY_AND_ASSIGN(Context);
};


// Describes the text input box that has acquired focus. Note only the type of
// text input box is passed. This API is intended to be used by non-ime virtual
// keyboard only. Normal ime virtual keyboard should use
// chrome.input.ime.onFocus to get the more detailed InputContext.
scoped_ptr<base::ListValue> Create(const Context& context);
}  // namespace OnTextInputBoxFocused

namespace OnBoundsChanged {

extern const char kEventName[];  // "virtualKeyboardPrivate.onBoundsChanged"

// The virtual keyboard bounds
scoped_ptr<base::ListValue> Create(const Bounds& bounds);
}  // namespace OnBoundsChanged

}  // namespace virtual_keyboard_private
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_VIRTUAL_KEYBOARD_PRIVATE_H__
