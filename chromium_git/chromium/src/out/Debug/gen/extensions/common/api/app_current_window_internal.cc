// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/app_current_window_internal.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/app_current_window_internal.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace app_current_window_internal {
//
// Types
//

Bounds::Bounds()
 {}

Bounds::~Bounds() {}

// static
bool Bounds::Populate(
    const base::Value& value, Bounds* out) {
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
scoped_ptr<Bounds> Bounds::FromValue(const base::Value& value) {
  scoped_ptr<Bounds> out(new Bounds());
  if (!Populate(value, out.get()))
    return scoped_ptr<Bounds>();
  return out;
}

scoped_ptr<base::DictionaryValue> Bounds::ToValue() const {
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


SizeConstraints::SizeConstraints()
 {}

SizeConstraints::~SizeConstraints() {}

// static
bool SizeConstraints::Populate(
    const base::Value& value, SizeConstraints* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
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
scoped_ptr<SizeConstraints> SizeConstraints::FromValue(const base::Value& value) {
  scoped_ptr<SizeConstraints> out(new SizeConstraints());
  if (!Populate(value, out.get()))
    return scoped_ptr<SizeConstraints>();
  return out;
}

scoped_ptr<base::DictionaryValue> SizeConstraints::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

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


RegionRect::RegionRect()
: left(0), top(0), width(0), height(0) {}

RegionRect::~RegionRect() {}

// static
bool RegionRect::Populate(
    const base::Value& value, RegionRect* out) {
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
scoped_ptr<RegionRect> RegionRect::FromValue(const base::Value& value) {
  scoped_ptr<RegionRect> out(new RegionRect());
  if (!Populate(value, out.get()))
    return scoped_ptr<RegionRect>();
  return out;
}

scoped_ptr<base::DictionaryValue> RegionRect::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("left", new base::FundamentalValue(this->left));

  value->SetWithoutPathExpansion("top", new base::FundamentalValue(this->top));

  value->SetWithoutPathExpansion("width", new base::FundamentalValue(this->width));

  value->SetWithoutPathExpansion("height", new base::FundamentalValue(this->height));


  return value;
}


Region::Region()
 {}

Region::~Region() {}

// static
bool Region::Populate(
    const base::Value& value, Region* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* rects_value = NULL;
  if (dict->GetWithoutPathExpansion("rects", &rects_value)) {
    {
      const base::ListValue* list = NULL;
      if (!rects_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->rects)) {
          return false;
        }
      }
    }
  }

  return true;
}

// static
scoped_ptr<Region> Region::FromValue(const base::Value& value) {
  scoped_ptr<Region> out(new Region());
  if (!Populate(value, out.get()))
    return scoped_ptr<Region>();
  return out;
}

scoped_ptr<base::DictionaryValue> Region::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->rects.get()) {
    value->SetWithoutPathExpansion("rects", json_schema_compiler::util::CreateValueFromOptionalArray(this->rects).release());

  }

  return value;
}



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

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() > 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* focused_value = NULL;
  if (args.Get(0, &focused_value) &&
      !focused_value->IsType(base::Value::TYPE_NULL)) {
    {
      bool temp;
      if (!focused_value->GetAsBoolean(&temp)) {
        params->focused.reset();
        return scoped_ptr<Params>();
      }
      else
        params->focused.reset(new bool(temp));
    }
  }

  return params;
}


}  // namespace Show

namespace Hide {

}  // namespace Hide

namespace SetBounds {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* bounds_type_value = NULL;
  if (args.Get(0, &bounds_type_value) &&
      !bounds_type_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!bounds_type_value->GetAsString(&params->bounds_type)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* bounds_value = NULL;
  if (args.Get(1, &bounds_value) &&
      !bounds_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!bounds_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!Bounds::Populate(*dictionary, &params->bounds)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace SetBounds

namespace SetSizeConstraints {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* bounds_type_value = NULL;
  if (args.Get(0, &bounds_type_value) &&
      !bounds_type_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!bounds_type_value->GetAsString(&params->bounds_type)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* constraints_value = NULL;
  if (args.Get(1, &constraints_value) &&
      !constraints_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!constraints_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!SizeConstraints::Populate(*dictionary, &params->constraints)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace SetSizeConstraints

namespace SetIcon {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* icon_url_value = NULL;
  if (args.Get(0, &icon_url_value) &&
      !icon_url_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!icon_url_value->GetAsString(&params->icon_url)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace SetIcon

namespace SetShape {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* region_value = NULL;
  if (args.Get(0, &region_value) &&
      !region_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!region_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!Region::Populate(*dictionary, &params->region)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace SetShape

namespace SetAlwaysOnTop {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* always_on_top_value = NULL;
  if (args.Get(0, &always_on_top_value) &&
      !always_on_top_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!always_on_top_value->GetAsBoolean(&params->always_on_top)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace SetAlwaysOnTop

namespace SetVisibleOnAllWorkspaces {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* always_visible_value = NULL;
  if (args.Get(0, &always_visible_value) &&
      !always_visible_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!always_visible_value->GetAsBoolean(&params->always_visible)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace SetVisibleOnAllWorkspaces

//
// Events
//

namespace OnClosed {

const char kEventName[] = "app.currentWindowInternal.onClosed";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnClosed

namespace OnBoundsChanged {

const char kEventName[] = "app.currentWindowInternal.onBoundsChanged";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnBoundsChanged

namespace OnFullscreened {

const char kEventName[] = "app.currentWindowInternal.onFullscreened";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnFullscreened

namespace OnMinimized {

const char kEventName[] = "app.currentWindowInternal.onMinimized";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnMinimized

namespace OnMaximized {

const char kEventName[] = "app.currentWindowInternal.onMaximized";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnMaximized

namespace OnRestored {

const char kEventName[] = "app.currentWindowInternal.onRestored";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnRestored

namespace OnAlphaEnabledChanged {

const char kEventName[] = "app.currentWindowInternal.onAlphaEnabledChanged";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnAlphaEnabledChanged

namespace OnWindowShownForTests {

const char kEventName[] = "app.currentWindowInternal.onWindowShownForTests";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnWindowShownForTests

}  // namespace app_current_window_internal
}  // namespace api
}  // namespace extensions

