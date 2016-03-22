// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/app_window.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/app_window.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace app_window {
//
// Types
//

ContentBounds::ContentBounds()
 {}

ContentBounds::~ContentBounds() {}

// static
bool ContentBounds::Populate(
    const base::Value& value, ContentBounds* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* left_value = NULL;
  if (dict->GetWithoutPathExpansion("left", &left_value)) {
    {
      int temp;
      if (!left_value->GetAsInteger(&temp)) {
        out->left.reset();
        return false;
      }
      else
        out->left.reset(new int(temp));
    }
  }

  const base::Value* top_value = NULL;
  if (dict->GetWithoutPathExpansion("top", &top_value)) {
    {
      int temp;
      if (!top_value->GetAsInteger(&temp)) {
        out->top.reset();
        return false;
      }
      else
        out->top.reset(new int(temp));
    }
  }

  const base::Value* width_value = NULL;
  if (dict->GetWithoutPathExpansion("width", &width_value)) {
    {
      int temp;
      if (!width_value->GetAsInteger(&temp)) {
        out->width.reset();
        return false;
      }
      else
        out->width.reset(new int(temp));
    }
  }

  const base::Value* height_value = NULL;
  if (dict->GetWithoutPathExpansion("height", &height_value)) {
    {
      int temp;
      if (!height_value->GetAsInteger(&temp)) {
        out->height.reset();
        return false;
      }
      else
        out->height.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ContentBounds> ContentBounds::FromValue(const base::Value& value) {
  scoped_ptr<ContentBounds> out(new ContentBounds());
  if (!Populate(value, out.get()))
    return scoped_ptr<ContentBounds>();
  return out;
}

scoped_ptr<base::DictionaryValue> ContentBounds::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->left.get()) {
    value->SetWithoutPathExpansion("left", new base::FundamentalValue(*this->left));

  }
  if (this->top.get()) {
    value->SetWithoutPathExpansion("top", new base::FundamentalValue(*this->top));

  }
  if (this->width.get()) {
    value->SetWithoutPathExpansion("width", new base::FundamentalValue(*this->width));

  }
  if (this->height.get()) {
    value->SetWithoutPathExpansion("height", new base::FundamentalValue(*this->height));

  }

  return value;
}


BoundsSpecification::BoundsSpecification()
 {}

BoundsSpecification::~BoundsSpecification() {}

// static
bool BoundsSpecification::Populate(
    const base::Value& value, BoundsSpecification* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* left_value = NULL;
  if (dict->GetWithoutPathExpansion("left", &left_value)) {
    {
      int temp;
      if (!left_value->GetAsInteger(&temp)) {
        out->left.reset();
        return false;
      }
      else
        out->left.reset(new int(temp));
    }
  }

  const base::Value* top_value = NULL;
  if (dict->GetWithoutPathExpansion("top", &top_value)) {
    {
      int temp;
      if (!top_value->GetAsInteger(&temp)) {
        out->top.reset();
        return false;
      }
      else
        out->top.reset(new int(temp));
    }
  }

  const base::Value* width_value = NULL;
  if (dict->GetWithoutPathExpansion("width", &width_value)) {
    {
      int temp;
      if (!width_value->GetAsInteger(&temp)) {
        out->width.reset();
        return false;
      }
      else
        out->width.reset(new int(temp));
    }
  }

  const base::Value* height_value = NULL;
  if (dict->GetWithoutPathExpansion("height", &height_value)) {
    {
      int temp;
      if (!height_value->GetAsInteger(&temp)) {
        out->height.reset();
        return false;
      }
      else
        out->height.reset(new int(temp));
    }
  }

  const base::Value* min_width_value = NULL;
  if (dict->GetWithoutPathExpansion("minWidth", &min_width_value)) {
    {
      int temp;
      if (!min_width_value->GetAsInteger(&temp)) {
        out->min_width.reset();
        return false;
      }
      else
        out->min_width.reset(new int(temp));
    }
  }

  const base::Value* min_height_value = NULL;
  if (dict->GetWithoutPathExpansion("minHeight", &min_height_value)) {
    {
      int temp;
      if (!min_height_value->GetAsInteger(&temp)) {
        out->min_height.reset();
        return false;
      }
      else
        out->min_height.reset(new int(temp));
    }
  }

  const base::Value* max_width_value = NULL;
  if (dict->GetWithoutPathExpansion("maxWidth", &max_width_value)) {
    {
      int temp;
      if (!max_width_value->GetAsInteger(&temp)) {
        out->max_width.reset();
        return false;
      }
      else
        out->max_width.reset(new int(temp));
    }
  }

  const base::Value* max_height_value = NULL;
  if (dict->GetWithoutPathExpansion("maxHeight", &max_height_value)) {
    {
      int temp;
      if (!max_height_value->GetAsInteger(&temp)) {
        out->max_height.reset();
        return false;
      }
      else
        out->max_height.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<BoundsSpecification> BoundsSpecification::FromValue(const base::Value& value) {
  scoped_ptr<BoundsSpecification> out(new BoundsSpecification());
  if (!Populate(value, out.get()))
    return scoped_ptr<BoundsSpecification>();
  return out;
}

scoped_ptr<base::DictionaryValue> BoundsSpecification::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->left.get()) {
    value->SetWithoutPathExpansion("left", new base::FundamentalValue(*this->left));

  }
  if (this->top.get()) {
    value->SetWithoutPathExpansion("top", new base::FundamentalValue(*this->top));

  }
  if (this->width.get()) {
    value->SetWithoutPathExpansion("width", new base::FundamentalValue(*this->width));

  }
  if (this->height.get()) {
    value->SetWithoutPathExpansion("height", new base::FundamentalValue(*this->height));

  }
  if (this->min_width.get()) {
    value->SetWithoutPathExpansion("minWidth", new base::FundamentalValue(*this->min_width));

  }
  if (this->min_height.get()) {
    value->SetWithoutPathExpansion("minHeight", new base::FundamentalValue(*this->min_height));

  }
  if (this->max_width.get()) {
    value->SetWithoutPathExpansion("maxWidth", new base::FundamentalValue(*this->max_width));

  }
  if (this->max_height.get()) {
    value->SetWithoutPathExpansion("maxHeight", new base::FundamentalValue(*this->max_height));

  }

  return value;
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

  const base::Value* min_width_value = NULL;
  if (dict->GetWithoutPathExpansion("minWidth", &min_width_value)) {
    {
      int temp;
      if (!min_width_value->GetAsInteger(&temp)) {
        out->min_width.reset();
        return false;
      }
      else
        out->min_width.reset(new int(temp));
    }
  }

  const base::Value* min_height_value = NULL;
  if (dict->GetWithoutPathExpansion("minHeight", &min_height_value)) {
    {
      int temp;
      if (!min_height_value->GetAsInteger(&temp)) {
        out->min_height.reset();
        return false;
      }
      else
        out->min_height.reset(new int(temp));
    }
  }

  const base::Value* max_width_value = NULL;
  if (dict->GetWithoutPathExpansion("maxWidth", &max_width_value)) {
    {
      int temp;
      if (!max_width_value->GetAsInteger(&temp)) {
        out->max_width.reset();
        return false;
      }
      else
        out->max_width.reset(new int(temp));
    }
  }

  const base::Value* max_height_value = NULL;
  if (dict->GetWithoutPathExpansion("maxHeight", &max_height_value)) {
    {
      int temp;
      if (!max_height_value->GetAsInteger(&temp)) {
        out->max_height.reset();
        return false;
      }
      else
        out->max_height.reset(new int(temp));
    }
  }

  const base::Value* set_position_value = NULL;
  if (!dict->GetWithoutPathExpansion("setPosition", &set_position_value)) {
    return false;
  }

  const base::Value* set_size_value = NULL;
  if (!dict->GetWithoutPathExpansion("setSize", &set_size_value)) {
    return false;
  }

  const base::Value* set_minimum_size_value = NULL;
  if (!dict->GetWithoutPathExpansion("setMinimumSize", &set_minimum_size_value)) {
    return false;
  }

  const base::Value* set_maximum_size_value = NULL;
  if (!dict->GetWithoutPathExpansion("setMaximumSize", &set_maximum_size_value)) {
    return false;
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

  if (this->min_width.get()) {
    value->SetWithoutPathExpansion("minWidth", new base::FundamentalValue(*this->min_width));

  }
  if (this->min_height.get()) {
    value->SetWithoutPathExpansion("minHeight", new base::FundamentalValue(*this->min_height));

  }
  if (this->max_width.get()) {
    value->SetWithoutPathExpansion("maxWidth", new base::FundamentalValue(*this->max_width));

  }
  if (this->max_height.get()) {
    value->SetWithoutPathExpansion("maxHeight", new base::FundamentalValue(*this->max_height));

  }
  value->SetWithoutPathExpansion("setPosition", (this->set_position).DeepCopy());

  value->SetWithoutPathExpansion("setSize", (this->set_size).DeepCopy());

  value->SetWithoutPathExpansion("setMinimumSize", (this->set_minimum_size).DeepCopy());

  value->SetWithoutPathExpansion("setMaximumSize", (this->set_maximum_size).DeepCopy());


  return value;
}


FrameOptions::FrameOptions()
 {}

FrameOptions::~FrameOptions() {}

// static
bool FrameOptions::Populate(
    const base::Value& value, FrameOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* type_value = NULL;
  if (dict->GetWithoutPathExpansion("type", &type_value)) {
    {
      std::string temp;
      if (!type_value->GetAsString(&temp)) {
        out->type.reset();
        return false;
      }
      else
        out->type.reset(new std::string(temp));
    }
  }

  const base::Value* color_value = NULL;
  if (dict->GetWithoutPathExpansion("color", &color_value)) {
    {
      std::string temp;
      if (!color_value->GetAsString(&temp)) {
        out->color.reset();
        return false;
      }
      else
        out->color.reset(new std::string(temp));
    }
  }

  const base::Value* active_color_value = NULL;
  if (dict->GetWithoutPathExpansion("activeColor", &active_color_value)) {
    {
      std::string temp;
      if (!active_color_value->GetAsString(&temp)) {
        out->active_color.reset();
        return false;
      }
      else
        out->active_color.reset(new std::string(temp));
    }
  }

  const base::Value* inactive_color_value = NULL;
  if (dict->GetWithoutPathExpansion("inactiveColor", &inactive_color_value)) {
    {
      std::string temp;
      if (!inactive_color_value->GetAsString(&temp)) {
        out->inactive_color.reset();
        return false;
      }
      else
        out->inactive_color.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<FrameOptions> FrameOptions::FromValue(const base::Value& value) {
  scoped_ptr<FrameOptions> out(new FrameOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<FrameOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> FrameOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->type.get()) {
    value->SetWithoutPathExpansion("type", new base::StringValue(*this->type));

  }
  if (this->color.get()) {
    value->SetWithoutPathExpansion("color", new base::StringValue(*this->color));

  }
  if (this->active_color.get()) {
    value->SetWithoutPathExpansion("activeColor", new base::StringValue(*this->active_color));

  }
  if (this->inactive_color.get()) {
    value->SetWithoutPathExpansion("inactiveColor", new base::StringValue(*this->inactive_color));

  }

  return value;
}


std::string ToString(State enum_param) {
  switch (enum_param) {
    case STATE_NORMAL:
      return "normal";
    case STATE_FULLSCREEN:
      return "fullscreen";
    case STATE_MAXIMIZED:
      return "maximized";
    case STATE_MINIMIZED:
      return "minimized";
    case STATE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

State ParseState(const std::string& enum_string) {
  if (enum_string == "normal")
    return STATE_NORMAL;
  if (enum_string == "fullscreen")
    return STATE_FULLSCREEN;
  if (enum_string == "maximized")
    return STATE_MAXIMIZED;
  if (enum_string == "minimized")
    return STATE_MINIMIZED;
  return STATE_NONE;
}


std::string ToString(WindowType enum_param) {
  switch (enum_param) {
    case WINDOW_TYPE_SHELL:
      return "shell";
    case WINDOW_TYPE_PANEL:
      return "panel";
    case WINDOW_TYPE_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

WindowType ParseWindowType(const std::string& enum_string) {
  if (enum_string == "shell")
    return WINDOW_TYPE_SHELL;
  if (enum_string == "panel")
    return WINDOW_TYPE_PANEL;
  return WINDOW_TYPE_NONE;
}


CreateWindowOptions::Frame::Frame()
 {}

CreateWindowOptions::Frame::~Frame() {}

// static
bool CreateWindowOptions::Frame::Populate(
    const base::Value& value, Frame* out) {
  if (value.IsType(base::Value::TYPE_STRING)) {
    {
      std::string temp;
      if (!(&value)->GetAsString(&temp)) {
        out->as_string.reset();
        return false;
      }
      else
        out->as_string.reset(new std::string(temp));
    }
    return true;
  }
  if (value.IsType(base::Value::TYPE_DICTIONARY)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!(&value)->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<FrameOptions> temp(new FrameOptions());
        if (!FrameOptions::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->as_frame_options = std::move(temp);
      }
    }
    return true;
  }
  return false;
}

scoped_ptr<base::Value> CreateWindowOptions::Frame::ToValue() const {
  scoped_ptr<base::Value> result;
  if (as_string) {
    DCHECK(!result) << "Cannot set multiple choices for frame";
    result.reset(new base::StringValue(*as_string));

  }
  if (as_frame_options) {
    DCHECK(!result) << "Cannot set multiple choices for frame";
    result.reset((as_frame_options)->ToValue().release());

  }
  DCHECK(result) << "Must set at least one choice for frame";
  return result;
}



CreateWindowOptions::CreateWindowOptions()
: type(WINDOW_TYPE_NONE), state(STATE_NONE) {}

CreateWindowOptions::~CreateWindowOptions() {}

// static
bool CreateWindowOptions::Populate(
    const base::Value& value, CreateWindowOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->type = WINDOW_TYPE_NONE;
  out->state = STATE_NONE;
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

  const base::Value* inner_bounds_value = NULL;
  if (dict->GetWithoutPathExpansion("innerBounds", &inner_bounds_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!inner_bounds_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<BoundsSpecification> temp(new BoundsSpecification());
        if (!BoundsSpecification::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->inner_bounds = std::move(temp);
      }
    }
  }

  const base::Value* outer_bounds_value = NULL;
  if (dict->GetWithoutPathExpansion("outerBounds", &outer_bounds_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!outer_bounds_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<BoundsSpecification> temp(new BoundsSpecification());
        if (!BoundsSpecification::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->outer_bounds = std::move(temp);
      }
    }
  }

  const base::Value* default_width_value = NULL;
  if (dict->GetWithoutPathExpansion("defaultWidth", &default_width_value)) {
    {
      int temp;
      if (!default_width_value->GetAsInteger(&temp)) {
        out->default_width.reset();
        return false;
      }
      else
        out->default_width.reset(new int(temp));
    }
  }

  const base::Value* default_height_value = NULL;
  if (dict->GetWithoutPathExpansion("defaultHeight", &default_height_value)) {
    {
      int temp;
      if (!default_height_value->GetAsInteger(&temp)) {
        out->default_height.reset();
        return false;
      }
      else
        out->default_height.reset(new int(temp));
    }
  }

  const base::Value* default_left_value = NULL;
  if (dict->GetWithoutPathExpansion("defaultLeft", &default_left_value)) {
    {
      int temp;
      if (!default_left_value->GetAsInteger(&temp)) {
        out->default_left.reset();
        return false;
      }
      else
        out->default_left.reset(new int(temp));
    }
  }

  const base::Value* default_top_value = NULL;
  if (dict->GetWithoutPathExpansion("defaultTop", &default_top_value)) {
    {
      int temp;
      if (!default_top_value->GetAsInteger(&temp)) {
        out->default_top.reset();
        return false;
      }
      else
        out->default_top.reset(new int(temp));
    }
  }

  const base::Value* width_value = NULL;
  if (dict->GetWithoutPathExpansion("width", &width_value)) {
    {
      int temp;
      if (!width_value->GetAsInteger(&temp)) {
        out->width.reset();
        return false;
      }
      else
        out->width.reset(new int(temp));
    }
  }

  const base::Value* height_value = NULL;
  if (dict->GetWithoutPathExpansion("height", &height_value)) {
    {
      int temp;
      if (!height_value->GetAsInteger(&temp)) {
        out->height.reset();
        return false;
      }
      else
        out->height.reset(new int(temp));
    }
  }

  const base::Value* left_value = NULL;
  if (dict->GetWithoutPathExpansion("left", &left_value)) {
    {
      int temp;
      if (!left_value->GetAsInteger(&temp)) {
        out->left.reset();
        return false;
      }
      else
        out->left.reset(new int(temp));
    }
  }

  const base::Value* top_value = NULL;
  if (dict->GetWithoutPathExpansion("top", &top_value)) {
    {
      int temp;
      if (!top_value->GetAsInteger(&temp)) {
        out->top.reset();
        return false;
      }
      else
        out->top.reset(new int(temp));
    }
  }

  const base::Value* min_width_value = NULL;
  if (dict->GetWithoutPathExpansion("minWidth", &min_width_value)) {
    {
      int temp;
      if (!min_width_value->GetAsInteger(&temp)) {
        out->min_width.reset();
        return false;
      }
      else
        out->min_width.reset(new int(temp));
    }
  }

  const base::Value* min_height_value = NULL;
  if (dict->GetWithoutPathExpansion("minHeight", &min_height_value)) {
    {
      int temp;
      if (!min_height_value->GetAsInteger(&temp)) {
        out->min_height.reset();
        return false;
      }
      else
        out->min_height.reset(new int(temp));
    }
  }

  const base::Value* max_width_value = NULL;
  if (dict->GetWithoutPathExpansion("maxWidth", &max_width_value)) {
    {
      int temp;
      if (!max_width_value->GetAsInteger(&temp)) {
        out->max_width.reset();
        return false;
      }
      else
        out->max_width.reset(new int(temp));
    }
  }

  const base::Value* max_height_value = NULL;
  if (dict->GetWithoutPathExpansion("maxHeight", &max_height_value)) {
    {
      int temp;
      if (!max_height_value->GetAsInteger(&temp)) {
        out->max_height.reset();
        return false;
      }
      else
        out->max_height.reset(new int(temp));
    }
  }

  const base::Value* type_value = NULL;
  if (dict->GetWithoutPathExpansion("type", &type_value)) {
    {
      std::string window_type_as_string;
      if (!type_value->GetAsString(&window_type_as_string)) {
        return false;
      }
      out->type = ParseWindowType(window_type_as_string);
      if (out->type == WINDOW_TYPE_NONE) {
        return false;
      }
    }
    } else {
    out->type = WINDOW_TYPE_NONE;
  }

  const base::Value* ime_value = NULL;
  if (dict->GetWithoutPathExpansion("ime", &ime_value)) {
    {
      bool temp;
      if (!ime_value->GetAsBoolean(&temp)) {
        out->ime.reset();
        return false;
      }
      else
        out->ime.reset(new bool(temp));
    }
  }

  const base::Value* frame_value = NULL;
  if (dict->GetWithoutPathExpansion("frame", &frame_value)) {
    {
      scoped_ptr<Frame> temp(new Frame());
      if (!Frame::Populate(*frame_value, temp.get()))
        return false;
      out->frame = std::move(temp);
    }
  }

  const base::Value* bounds_value = NULL;
  if (dict->GetWithoutPathExpansion("bounds", &bounds_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!bounds_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<ContentBounds> temp(new ContentBounds());
        if (!ContentBounds::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->bounds = std::move(temp);
      }
    }
  }

  const base::Value* alpha_enabled_value = NULL;
  if (dict->GetWithoutPathExpansion("alphaEnabled", &alpha_enabled_value)) {
    {
      bool temp;
      if (!alpha_enabled_value->GetAsBoolean(&temp)) {
        out->alpha_enabled.reset();
        return false;
      }
      else
        out->alpha_enabled.reset(new bool(temp));
    }
  }

  const base::Value* state_value = NULL;
  if (dict->GetWithoutPathExpansion("state", &state_value)) {
    {
      std::string state_as_string;
      if (!state_value->GetAsString(&state_as_string)) {
        return false;
      }
      out->state = ParseState(state_as_string);
      if (out->state == STATE_NONE) {
        return false;
      }
    }
    } else {
    out->state = STATE_NONE;
  }

  const base::Value* hidden_value = NULL;
  if (dict->GetWithoutPathExpansion("hidden", &hidden_value)) {
    {
      bool temp;
      if (!hidden_value->GetAsBoolean(&temp)) {
        out->hidden.reset();
        return false;
      }
      else
        out->hidden.reset(new bool(temp));
    }
  }

  const base::Value* resizable_value = NULL;
  if (dict->GetWithoutPathExpansion("resizable", &resizable_value)) {
    {
      bool temp;
      if (!resizable_value->GetAsBoolean(&temp)) {
        out->resizable.reset();
        return false;
      }
      else
        out->resizable.reset(new bool(temp));
    }
  }

  const base::Value* singleton_value = NULL;
  if (dict->GetWithoutPathExpansion("singleton", &singleton_value)) {
    {
      bool temp;
      if (!singleton_value->GetAsBoolean(&temp)) {
        out->singleton.reset();
        return false;
      }
      else
        out->singleton.reset(new bool(temp));
    }
  }

  const base::Value* always_on_top_value = NULL;
  if (dict->GetWithoutPathExpansion("alwaysOnTop", &always_on_top_value)) {
    {
      bool temp;
      if (!always_on_top_value->GetAsBoolean(&temp)) {
        out->always_on_top.reset();
        return false;
      }
      else
        out->always_on_top.reset(new bool(temp));
    }
  }

  const base::Value* focused_value = NULL;
  if (dict->GetWithoutPathExpansion("focused", &focused_value)) {
    {
      bool temp;
      if (!focused_value->GetAsBoolean(&temp)) {
        out->focused.reset();
        return false;
      }
      else
        out->focused.reset(new bool(temp));
    }
  }

  const base::Value* visible_on_all_workspaces_value = NULL;
  if (dict->GetWithoutPathExpansion("visibleOnAllWorkspaces", &visible_on_all_workspaces_value)) {
    {
      bool temp;
      if (!visible_on_all_workspaces_value->GetAsBoolean(&temp)) {
        out->visible_on_all_workspaces.reset();
        return false;
      }
      else
        out->visible_on_all_workspaces.reset(new bool(temp));
    }
  }

  return true;
}

// static
scoped_ptr<CreateWindowOptions> CreateWindowOptions::FromValue(const base::Value& value) {
  scoped_ptr<CreateWindowOptions> out(new CreateWindowOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<CreateWindowOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> CreateWindowOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->id.get()) {
    value->SetWithoutPathExpansion("id", new base::StringValue(*this->id));

  }
  if (this->inner_bounds.get()) {
    value->SetWithoutPathExpansion("innerBounds", (this->inner_bounds)->ToValue().release());

  }
  if (this->outer_bounds.get()) {
    value->SetWithoutPathExpansion("outerBounds", (this->outer_bounds)->ToValue().release());

  }
  if (this->default_width.get()) {
    value->SetWithoutPathExpansion("defaultWidth", new base::FundamentalValue(*this->default_width));

  }
  if (this->default_height.get()) {
    value->SetWithoutPathExpansion("defaultHeight", new base::FundamentalValue(*this->default_height));

  }
  if (this->default_left.get()) {
    value->SetWithoutPathExpansion("defaultLeft", new base::FundamentalValue(*this->default_left));

  }
  if (this->default_top.get()) {
    value->SetWithoutPathExpansion("defaultTop", new base::FundamentalValue(*this->default_top));

  }
  if (this->width.get()) {
    value->SetWithoutPathExpansion("width", new base::FundamentalValue(*this->width));

  }
  if (this->height.get()) {
    value->SetWithoutPathExpansion("height", new base::FundamentalValue(*this->height));

  }
  if (this->left.get()) {
    value->SetWithoutPathExpansion("left", new base::FundamentalValue(*this->left));

  }
  if (this->top.get()) {
    value->SetWithoutPathExpansion("top", new base::FundamentalValue(*this->top));

  }
  if (this->min_width.get()) {
    value->SetWithoutPathExpansion("minWidth", new base::FundamentalValue(*this->min_width));

  }
  if (this->min_height.get()) {
    value->SetWithoutPathExpansion("minHeight", new base::FundamentalValue(*this->min_height));

  }
  if (this->max_width.get()) {
    value->SetWithoutPathExpansion("maxWidth", new base::FundamentalValue(*this->max_width));

  }
  if (this->max_height.get()) {
    value->SetWithoutPathExpansion("maxHeight", new base::FundamentalValue(*this->max_height));

  }
  if (this->type != WINDOW_TYPE_NONE) {
    value->SetWithoutPathExpansion("type", new base::StringValue(app_window::ToString(this->type)));

  }
  if (this->ime.get()) {
    value->SetWithoutPathExpansion("ime", new base::FundamentalValue(*this->ime));

  }
  if (this->frame.get()) {
    value->SetWithoutPathExpansion("frame", (this->frame)->ToValue().release());

  }
  if (this->bounds.get()) {
    value->SetWithoutPathExpansion("bounds", (this->bounds)->ToValue().release());

  }
  if (this->alpha_enabled.get()) {
    value->SetWithoutPathExpansion("alphaEnabled", new base::FundamentalValue(*this->alpha_enabled));

  }
  if (this->state != STATE_NONE) {
    value->SetWithoutPathExpansion("state", new base::StringValue(app_window::ToString(this->state)));

  }
  if (this->hidden.get()) {
    value->SetWithoutPathExpansion("hidden", new base::FundamentalValue(*this->hidden));

  }
  if (this->resizable.get()) {
    value->SetWithoutPathExpansion("resizable", new base::FundamentalValue(*this->resizable));

  }
  if (this->singleton.get()) {
    value->SetWithoutPathExpansion("singleton", new base::FundamentalValue(*this->singleton));

  }
  if (this->always_on_top.get()) {
    value->SetWithoutPathExpansion("alwaysOnTop", new base::FundamentalValue(*this->always_on_top));

  }
  if (this->focused.get()) {
    value->SetWithoutPathExpansion("focused", new base::FundamentalValue(*this->focused));

  }
  if (this->visible_on_all_workspaces.get()) {
    value->SetWithoutPathExpansion("visibleOnAllWorkspaces", new base::FundamentalValue(*this->visible_on_all_workspaces));

  }

  return value;
}


AppWindow::ContentWindow::ContentWindow()
 {}

AppWindow::ContentWindow::~ContentWindow() {}

// static
bool AppWindow::ContentWindow::Populate(
    const base::Value& value, ContentWindow* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}

scoped_ptr<base::DictionaryValue> AppWindow::ContentWindow::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}



AppWindow::AppWindow()
: has_frame_color(false), active_frame_color(0), inactive_frame_color(0) {}

AppWindow::~AppWindow() {}

// static
bool AppWindow::Populate(
    const base::Value& value, AppWindow* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* focus_value = NULL;
  if (!dict->GetWithoutPathExpansion("focus", &focus_value)) {
    return false;
  }

  const base::Value* fullscreen_value = NULL;
  if (!dict->GetWithoutPathExpansion("fullscreen", &fullscreen_value)) {
    return false;
  }

  const base::Value* is_fullscreen_value = NULL;
  if (!dict->GetWithoutPathExpansion("isFullscreen", &is_fullscreen_value)) {
    return false;
  }

  const base::Value* minimize_value = NULL;
  if (!dict->GetWithoutPathExpansion("minimize", &minimize_value)) {
    return false;
  }

  const base::Value* is_minimized_value = NULL;
  if (!dict->GetWithoutPathExpansion("isMinimized", &is_minimized_value)) {
    return false;
  }

  const base::Value* maximize_value = NULL;
  if (!dict->GetWithoutPathExpansion("maximize", &maximize_value)) {
    return false;
  }

  const base::Value* is_maximized_value = NULL;
  if (!dict->GetWithoutPathExpansion("isMaximized", &is_maximized_value)) {
    return false;
  }

  const base::Value* restore_value = NULL;
  if (!dict->GetWithoutPathExpansion("restore", &restore_value)) {
    return false;
  }

  const base::Value* move_to_value = NULL;
  if (!dict->GetWithoutPathExpansion("moveTo", &move_to_value)) {
    return false;
  }

  const base::Value* resize_to_value = NULL;
  if (!dict->GetWithoutPathExpansion("resizeTo", &resize_to_value)) {
    return false;
  }

  const base::Value* draw_attention_value = NULL;
  if (!dict->GetWithoutPathExpansion("drawAttention", &draw_attention_value)) {
    return false;
  }

  const base::Value* clear_attention_value = NULL;
  if (!dict->GetWithoutPathExpansion("clearAttention", &clear_attention_value)) {
    return false;
  }

  const base::Value* close_value = NULL;
  if (!dict->GetWithoutPathExpansion("close", &close_value)) {
    return false;
  }

  const base::Value* show_value = NULL;
  if (!dict->GetWithoutPathExpansion("show", &show_value)) {
    return false;
  }

  const base::Value* hide_value = NULL;
  if (!dict->GetWithoutPathExpansion("hide", &hide_value)) {
    return false;
  }

  const base::Value* set_icon_value = NULL;
  if (!dict->GetWithoutPathExpansion("setIcon", &set_icon_value)) {
    return false;
  }

  const base::Value* is_always_on_top_value = NULL;
  if (!dict->GetWithoutPathExpansion("isAlwaysOnTop", &is_always_on_top_value)) {
    return false;
  }

  const base::Value* has_frame_color_value = NULL;
  if (!dict->GetWithoutPathExpansion("hasFrameColor", &has_frame_color_value)) {
    return false;
  }
  {
    if (!has_frame_color_value->GetAsBoolean(&out->has_frame_color)) {
      return false;
    }
  }

  const base::Value* active_frame_color_value = NULL;
  if (!dict->GetWithoutPathExpansion("activeFrameColor", &active_frame_color_value)) {
    return false;
  }
  {
    if (!active_frame_color_value->GetAsInteger(&out->active_frame_color)) {
      return false;
    }
  }

  const base::Value* inactive_frame_color_value = NULL;
  if (!dict->GetWithoutPathExpansion("inactiveFrameColor", &inactive_frame_color_value)) {
    return false;
  }
  {
    if (!inactive_frame_color_value->GetAsInteger(&out->inactive_frame_color)) {
      return false;
    }
  }

  const base::Value* first_show_has_happened_value = NULL;
  if (dict->GetWithoutPathExpansion("firstShowHasHappened", &first_show_has_happened_value)) {
    {
      bool temp;
      if (!first_show_has_happened_value->GetAsBoolean(&temp)) {
        out->first_show_has_happened.reset();
        return false;
      }
      else
        out->first_show_has_happened.reset(new bool(temp));
    }
  }

  const base::Value* set_always_on_top_value = NULL;
  if (!dict->GetWithoutPathExpansion("setAlwaysOnTop", &set_always_on_top_value)) {
    return false;
  }

  const base::Value* alpha_enabled_value = NULL;
  if (!dict->GetWithoutPathExpansion("alphaEnabled", &alpha_enabled_value)) {
    return false;
  }

  const base::Value* set_visible_on_all_workspaces_value = NULL;
  if (!dict->GetWithoutPathExpansion("setVisibleOnAllWorkspaces", &set_visible_on_all_workspaces_value)) {
    return false;
  }

  const base::Value* content_window_value = NULL;
  if (!dict->GetWithoutPathExpansion("contentWindow", &content_window_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!content_window_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!ContentWindow::Populate(*dictionary, &out->content_window)) {
      return false;
    }
  }

  const base::Value* id_value = NULL;
  if (!dict->GetWithoutPathExpansion("id", &id_value)) {
    return false;
  }
  {
    if (!id_value->GetAsString(&out->id)) {
      return false;
    }
  }

  const base::Value* inner_bounds_value = NULL;
  if (!dict->GetWithoutPathExpansion("innerBounds", &inner_bounds_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!inner_bounds_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!Bounds::Populate(*dictionary, &out->inner_bounds)) {
      return false;
    }
  }

  const base::Value* outer_bounds_value = NULL;
  if (!dict->GetWithoutPathExpansion("outerBounds", &outer_bounds_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!outer_bounds_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!Bounds::Populate(*dictionary, &out->outer_bounds)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<AppWindow> AppWindow::FromValue(const base::Value& value) {
  scoped_ptr<AppWindow> out(new AppWindow());
  if (!Populate(value, out.get()))
    return scoped_ptr<AppWindow>();
  return out;
}

scoped_ptr<base::DictionaryValue> AppWindow::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("focus", (this->focus).DeepCopy());

  value->SetWithoutPathExpansion("fullscreen", (this->fullscreen).DeepCopy());

  value->SetWithoutPathExpansion("isFullscreen", (this->is_fullscreen).DeepCopy());

  value->SetWithoutPathExpansion("minimize", (this->minimize).DeepCopy());

  value->SetWithoutPathExpansion("isMinimized", (this->is_minimized).DeepCopy());

  value->SetWithoutPathExpansion("maximize", (this->maximize).DeepCopy());

  value->SetWithoutPathExpansion("isMaximized", (this->is_maximized).DeepCopy());

  value->SetWithoutPathExpansion("restore", (this->restore).DeepCopy());

  value->SetWithoutPathExpansion("moveTo", (this->move_to).DeepCopy());

  value->SetWithoutPathExpansion("resizeTo", (this->resize_to).DeepCopy());

  value->SetWithoutPathExpansion("drawAttention", (this->draw_attention).DeepCopy());

  value->SetWithoutPathExpansion("clearAttention", (this->clear_attention).DeepCopy());

  value->SetWithoutPathExpansion("close", (this->close).DeepCopy());

  value->SetWithoutPathExpansion("show", (this->show).DeepCopy());

  value->SetWithoutPathExpansion("hide", (this->hide).DeepCopy());

  value->SetWithoutPathExpansion("setIcon", (this->set_icon).DeepCopy());

  value->SetWithoutPathExpansion("isAlwaysOnTop", (this->is_always_on_top).DeepCopy());

  value->SetWithoutPathExpansion("hasFrameColor", new base::FundamentalValue(this->has_frame_color));

  value->SetWithoutPathExpansion("activeFrameColor", new base::FundamentalValue(this->active_frame_color));

  value->SetWithoutPathExpansion("inactiveFrameColor", new base::FundamentalValue(this->inactive_frame_color));

  if (this->first_show_has_happened.get()) {
    value->SetWithoutPathExpansion("firstShowHasHappened", new base::FundamentalValue(*this->first_show_has_happened));

  }
  value->SetWithoutPathExpansion("setAlwaysOnTop", (this->set_always_on_top).DeepCopy());

  value->SetWithoutPathExpansion("alphaEnabled", (this->alpha_enabled).DeepCopy());

  value->SetWithoutPathExpansion("setVisibleOnAllWorkspaces", (this->set_visible_on_all_workspaces).DeepCopy());

  value->SetWithoutPathExpansion("contentWindow", (this->content_window).ToValue().release());

  value->SetWithoutPathExpansion("id", new base::StringValue(this->id));

  value->SetWithoutPathExpansion("innerBounds", (this->inner_bounds).ToValue().release());

  value->SetWithoutPathExpansion("outerBounds", (this->outer_bounds).ToValue().release());


  return value;
}



//
// Functions
//

namespace Create {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
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

  const base::Value* options_value = NULL;
  if (args.Get(1, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      else {
        scoped_ptr<CreateWindowOptions> temp(new CreateWindowOptions());
        if (!CreateWindowOptions::Populate(*dictionary, temp.get())) {
          return scoped_ptr<Params>();
        }
        else
          params->options = std::move(temp);
      }
    }
  }

  return params;
}


Results::CreatedWindow::CreatedWindow()
 {}

Results::CreatedWindow::~CreatedWindow() {}

scoped_ptr<base::DictionaryValue> Results::CreatedWindow::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->MergeDictionary(&additional_properties);

  return value;
}


scoped_ptr<base::ListValue> Results::Create(const CreatedWindow& created_window) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((created_window).ToValue().release());

  return create_results;
}
}  // namespace Create

}  // namespace app_window
}  // namespace api
}  // namespace extensions

