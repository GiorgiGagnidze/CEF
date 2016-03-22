// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/virtual_keyboard_private.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/virtual_keyboard_private.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace virtual_keyboard_private {
//
// Types
//

std::string ToString(VirtualKeyboardEventType enum_param) {
  switch (enum_param) {
    case VIRTUAL_KEYBOARD_EVENT_TYPE_KEYUP:
      return "keyup";
    case VIRTUAL_KEYBOARD_EVENT_TYPE_KEYDOWN:
      return "keydown";
    case VIRTUAL_KEYBOARD_EVENT_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

VirtualKeyboardEventType ParseVirtualKeyboardEventType(const std::string& enum_string) {
  if (enum_string == "keyup")
    return VIRTUAL_KEYBOARD_EVENT_TYPE_KEYUP;
  if (enum_string == "keydown")
    return VIRTUAL_KEYBOARD_EVENT_TYPE_KEYDOWN;
  return VIRTUAL_KEYBOARD_EVENT_TYPE_NONE;
}


VirtualKeyboardEvent::VirtualKeyboardEvent()
: type(VIRTUAL_KEYBOARD_EVENT_TYPE_NONE), char_value(0), key_code(0) {}

VirtualKeyboardEvent::~VirtualKeyboardEvent() {}

// static
bool VirtualKeyboardEvent::Populate(
    const base::Value& value, VirtualKeyboardEvent* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    std::string virtual_keyboard_event_type_as_string;
    if (!type_value->GetAsString(&virtual_keyboard_event_type_as_string)) {
      return false;
    }
    out->type = ParseVirtualKeyboardEventType(virtual_keyboard_event_type_as_string);
    if (out->type == VIRTUAL_KEYBOARD_EVENT_TYPE_NONE) {
      return false;
    }
  }

  const base::Value* char_value_value = NULL;
  if (!dict->GetWithoutPathExpansion("charValue", &char_value_value)) {
    return false;
  }
  {
    if (!char_value_value->GetAsInteger(&out->char_value)) {
      return false;
    }
  }

  const base::Value* key_code_value = NULL;
  if (!dict->GetWithoutPathExpansion("keyCode", &key_code_value)) {
    return false;
  }
  {
    if (!key_code_value->GetAsInteger(&out->key_code)) {
      return false;
    }
  }

  const base::Value* key_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("keyName", &key_name_value)) {
    return false;
  }
  {
    if (!key_name_value->GetAsString(&out->key_name)) {
      return false;
    }
  }

  const base::Value* modifiers_value = NULL;
  if (dict->GetWithoutPathExpansion("modifiers", &modifiers_value)) {
    {
      int temp;
      if (!modifiers_value->GetAsInteger(&temp)) {
        out->modifiers.reset();
        return false;
      }
      else
        out->modifiers.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<VirtualKeyboardEvent> VirtualKeyboardEvent::FromValue(const base::Value& value) {
  scoped_ptr<VirtualKeyboardEvent> out(new VirtualKeyboardEvent());
  if (!Populate(value, out.get()))
    return scoped_ptr<VirtualKeyboardEvent>();
  return out;
}

scoped_ptr<base::DictionaryValue> VirtualKeyboardEvent::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("type", new base::StringValue(virtual_keyboard_private::ToString(this->type)));

  value->SetWithoutPathExpansion("charValue", new base::FundamentalValue(this->char_value));

  value->SetWithoutPathExpansion("keyCode", new base::FundamentalValue(this->key_code));

  value->SetWithoutPathExpansion("keyName", new base::StringValue(this->key_name));

  if (this->modifiers.get()) {
    value->SetWithoutPathExpansion("modifiers", new base::FundamentalValue(*this->modifiers));

  }

  return value;
}


std::string ToString(KeyboardMode enum_param) {
  switch (enum_param) {
    case KEYBOARD_MODE_FULL_WIDTH:
      return "FULL_WIDTH";
    case KEYBOARD_MODE_FLOATING:
      return "FLOATING";
    case KEYBOARD_MODE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

KeyboardMode ParseKeyboardMode(const std::string& enum_string) {
  if (enum_string == "FULL_WIDTH")
    return KEYBOARD_MODE_FULL_WIDTH;
  if (enum_string == "FLOATING")
    return KEYBOARD_MODE_FLOATING;
  return KEYBOARD_MODE_NONE;
}


std::string ToString(KeyboardState enum_param) {
  switch (enum_param) {
    case KEYBOARD_STATE_ENABLED:
      return "ENABLED";
    case KEYBOARD_STATE_DISABLED:
      return "DISABLED";
    case KEYBOARD_STATE_AUTO:
      return "AUTO";
    case KEYBOARD_STATE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

KeyboardState ParseKeyboardState(const std::string& enum_string) {
  if (enum_string == "ENABLED")
    return KEYBOARD_STATE_ENABLED;
  if (enum_string == "DISABLED")
    return KEYBOARD_STATE_DISABLED;
  if (enum_string == "AUTO")
    return KEYBOARD_STATE_AUTO;
  return KEYBOARD_STATE_NONE;
}


std::string ToString(OnTextInputBoxFocusedType enum_param) {
  switch (enum_param) {
    case ON_TEXT_INPUT_BOX_FOCUSED_TYPE_TEXT:
      return "text";
    case ON_TEXT_INPUT_BOX_FOCUSED_TYPE_NUMBER:
      return "number";
    case ON_TEXT_INPUT_BOX_FOCUSED_TYPE_PASSWORD:
      return "password";
    case ON_TEXT_INPUT_BOX_FOCUSED_TYPE_DATE:
      return "date";
    case ON_TEXT_INPUT_BOX_FOCUSED_TYPE_URL:
      return "url";
    case ON_TEXT_INPUT_BOX_FOCUSED_TYPE_TEL:
      return "tel";
    case ON_TEXT_INPUT_BOX_FOCUSED_TYPE_EMAIL:
      return "email";
    case ON_TEXT_INPUT_BOX_FOCUSED_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

OnTextInputBoxFocusedType ParseOnTextInputBoxFocusedType(const std::string& enum_string) {
  if (enum_string == "text")
    return ON_TEXT_INPUT_BOX_FOCUSED_TYPE_TEXT;
  if (enum_string == "number")
    return ON_TEXT_INPUT_BOX_FOCUSED_TYPE_NUMBER;
  if (enum_string == "password")
    return ON_TEXT_INPUT_BOX_FOCUSED_TYPE_PASSWORD;
  if (enum_string == "date")
    return ON_TEXT_INPUT_BOX_FOCUSED_TYPE_DATE;
  if (enum_string == "url")
    return ON_TEXT_INPUT_BOX_FOCUSED_TYPE_URL;
  if (enum_string == "tel")
    return ON_TEXT_INPUT_BOX_FOCUSED_TYPE_TEL;
  if (enum_string == "email")
    return ON_TEXT_INPUT_BOX_FOCUSED_TYPE_EMAIL;
  return ON_TEXT_INPUT_BOX_FOCUSED_TYPE_NONE;
}


Bounds::Bounds()
: left(0), top(0), width(0), height(0) {}

Bounds::~Bounds() {}

// static
bool Bounds::Populate(
    const base::Value& value, Bounds* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* left_value = NULL;
  if (!dict->GetWithoutPathExpansion("left", &left_value)) {
    return false;
  }
  {
    if (!left_value->GetAsInteger(&out->left)) {
      return false;
    }
  }

  const base::Value* top_value = NULL;
  if (!dict->GetWithoutPathExpansion("top", &top_value)) {
    return false;
  }
  {
    if (!top_value->GetAsInteger(&out->top)) {
      return false;
    }
  }

  const base::Value* width_value = NULL;
  if (!dict->GetWithoutPathExpansion("width", &width_value)) {
    return false;
  }
  {
    if (!width_value->GetAsInteger(&out->width)) {
      return false;
    }
  }

  const base::Value* height_value = NULL;
  if (!dict->GetWithoutPathExpansion("height", &height_value)) {
    return false;
  }
  {
    if (!height_value->GetAsInteger(&out->height)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<Bounds> Bounds::FromValue(const base::Value& value) {
  scoped_ptr<Bounds> out(new Bounds());
  if (!Populate(value, out.get()))
    return scoped_ptr<Bounds>();
  return out;
}

scoped_ptr<base::DictionaryValue> Bounds::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("left", new base::FundamentalValue(this->left));

  value->SetWithoutPathExpansion("top", new base::FundamentalValue(this->top));

  value->SetWithoutPathExpansion("width", new base::FundamentalValue(this->width));

  value->SetWithoutPathExpansion("height", new base::FundamentalValue(this->height));


  return value;
}



//
// Functions
//

namespace InsertText {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* text_value = NULL;
  if (args.Get(0, &text_value) &&
      !text_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!text_value->GetAsString(&params->text)) {
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
}  // namespace InsertText

namespace SendKeyEvent {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* key_event_value = NULL;
  if (args.Get(0, &key_event_value) &&
      !key_event_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!key_event_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!VirtualKeyboardEvent::Populate(*dictionary, &params->key_event)) {
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
}  // namespace SendKeyEvent

namespace HideKeyboard {

scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace HideKeyboard

namespace SetHotrodKeyboard {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* enable_value = NULL;
  if (args.Get(0, &enable_value) &&
      !enable_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!enable_value->GetAsBoolean(&params->enable)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace SetHotrodKeyboard

namespace LockKeyboard {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* lock_value = NULL;
  if (args.Get(0, &lock_value) &&
      !lock_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!lock_value->GetAsBoolean(&params->lock)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace LockKeyboard

namespace KeyboardLoaded {

scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace KeyboardLoaded

namespace GetKeyboardConfig {

Results::Config::Config()
: a11ymode(false) {}

Results::Config::~Config() {}

scoped_ptr<base::DictionaryValue> Results::Config::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("layout", new base::StringValue(this->layout));

  value->SetWithoutPathExpansion("a11ymode", new base::FundamentalValue(this->a11ymode));

  value->SetWithoutPathExpansion("features", json_schema_compiler::util::CreateValueFromArray(this->features).release());


  return value;
}


scoped_ptr<base::ListValue> Results::Create(const Config& config) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((config).ToValue().release());

  return create_results;
}
}  // namespace GetKeyboardConfig

namespace OpenSettings {

}  // namespace OpenSettings

namespace SetMode {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* mode_value = NULL;
  if (args.Get(0, &mode_value) &&
      !mode_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string keyboard_mode_as_string;
      if (!mode_value->GetAsString(&keyboard_mode_as_string)) {
        return scoped_ptr<Params>();
      }
      params->mode = ParseKeyboardMode(keyboard_mode_as_string);
      if (params->mode == KEYBOARD_MODE_NONE) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace SetMode

namespace SetKeyboardState {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* state_value = NULL;
  if (args.Get(0, &state_value) &&
      !state_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string keyboard_state_as_string;
      if (!state_value->GetAsString(&keyboard_state_as_string)) {
        return scoped_ptr<Params>();
      }
      params->state = ParseKeyboardState(keyboard_state_as_string);
      if (params->state == KEYBOARD_STATE_NONE) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace SetKeyboardState

//
// Events
//

namespace OnTextInputBoxFocused {

const char kEventName[] = "virtualKeyboardPrivate.onTextInputBoxFocused";

Context::Context()
: type(ON_TEXT_INPUT_BOX_FOCUSED_TYPE_NONE) {}

Context::~Context() {}

scoped_ptr<base::DictionaryValue> Context::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("type", new base::StringValue(virtual_keyboard_private::ToString(this->type)));


  return value;
}


scoped_ptr<base::ListValue> Create(const Context& context) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((context).ToValue().release());

  return create_results;
}

}  // namespace OnTextInputBoxFocused

namespace OnBoundsChanged {

const char kEventName[] = "virtualKeyboardPrivate.onBoundsChanged";

scoped_ptr<base::ListValue> Create(const Bounds& bounds) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((bounds).ToValue().release());

  return create_results;
}

}  // namespace OnBoundsChanged

}  // namespace virtual_keyboard_private
}  // namespace api
}  // namespace extensions

