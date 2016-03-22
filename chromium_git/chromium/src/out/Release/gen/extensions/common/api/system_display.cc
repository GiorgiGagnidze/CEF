// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/system_display.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/system_display.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace system_display {
//
// Types
//

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


Insets::Insets()
: left(0), top(0), right(0), bottom(0) {}

Insets::~Insets() {}

// static
bool Insets::Populate(
    const base::Value& value, Insets* out) {
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

  const base::Value* right_value = NULL;
  if (!dict->GetWithoutPathExpansion("right", &right_value)) {
    return false;
  }
  {
    if (!right_value->GetAsInteger(&out->right)) {
      return false;
    }
  }

  const base::Value* bottom_value = NULL;
  if (!dict->GetWithoutPathExpansion("bottom", &bottom_value)) {
    return false;
  }
  {
    if (!bottom_value->GetAsInteger(&out->bottom)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<Insets> Insets::FromValue(const base::Value& value) {
  scoped_ptr<Insets> out(new Insets());
  if (!Populate(value, out.get()))
    return scoped_ptr<Insets>();
  return out;
}

scoped_ptr<base::DictionaryValue> Insets::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("left", new base::FundamentalValue(this->left));

  value->SetWithoutPathExpansion("top", new base::FundamentalValue(this->top));

  value->SetWithoutPathExpansion("right", new base::FundamentalValue(this->right));

  value->SetWithoutPathExpansion("bottom", new base::FundamentalValue(this->bottom));


  return value;
}


DisplayUnitInfo::DisplayUnitInfo()
: is_primary(false), is_internal(false), is_enabled(false), dpi_x(0.0), dpi_y(0.0), rotation(0) {}

DisplayUnitInfo::~DisplayUnitInfo() {}

// static
bool DisplayUnitInfo::Populate(
    const base::Value& value, DisplayUnitInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
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

  const base::Value* mirroring_source_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("mirroringSourceId", &mirroring_source_id_value)) {
    return false;
  }
  {
    if (!mirroring_source_id_value->GetAsString(&out->mirroring_source_id)) {
      return false;
    }
  }

  const base::Value* is_primary_value = NULL;
  if (!dict->GetWithoutPathExpansion("isPrimary", &is_primary_value)) {
    return false;
  }
  {
    if (!is_primary_value->GetAsBoolean(&out->is_primary)) {
      return false;
    }
  }

  const base::Value* is_internal_value = NULL;
  if (!dict->GetWithoutPathExpansion("isInternal", &is_internal_value)) {
    return false;
  }
  {
    if (!is_internal_value->GetAsBoolean(&out->is_internal)) {
      return false;
    }
  }

  const base::Value* is_enabled_value = NULL;
  if (!dict->GetWithoutPathExpansion("isEnabled", &is_enabled_value)) {
    return false;
  }
  {
    if (!is_enabled_value->GetAsBoolean(&out->is_enabled)) {
      return false;
    }
  }

  const base::Value* dpi_x_value = NULL;
  if (!dict->GetWithoutPathExpansion("dpiX", &dpi_x_value)) {
    return false;
  }
  {
    if (!dpi_x_value->GetAsDouble(&out->dpi_x)) {
      return false;
    }
  }

  const base::Value* dpi_y_value = NULL;
  if (!dict->GetWithoutPathExpansion("dpiY", &dpi_y_value)) {
    return false;
  }
  {
    if (!dpi_y_value->GetAsDouble(&out->dpi_y)) {
      return false;
    }
  }

  const base::Value* rotation_value = NULL;
  if (!dict->GetWithoutPathExpansion("rotation", &rotation_value)) {
    return false;
  }
  {
    if (!rotation_value->GetAsInteger(&out->rotation)) {
      return false;
    }
  }

  const base::Value* bounds_value = NULL;
  if (!dict->GetWithoutPathExpansion("bounds", &bounds_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!bounds_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!Bounds::Populate(*dictionary, &out->bounds)) {
      return false;
    }
  }

  const base::Value* overscan_value = NULL;
  if (!dict->GetWithoutPathExpansion("overscan", &overscan_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!overscan_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!Insets::Populate(*dictionary, &out->overscan)) {
      return false;
    }
  }

  const base::Value* work_area_value = NULL;
  if (!dict->GetWithoutPathExpansion("workArea", &work_area_value)) {
    return false;
  }
  {
    const base::DictionaryValue* dictionary = NULL;
    if (!work_area_value->GetAsDictionary(&dictionary)) {
      return false;
    }
    if (!Bounds::Populate(*dictionary, &out->work_area)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<DisplayUnitInfo> DisplayUnitInfo::FromValue(const base::Value& value) {
  scoped_ptr<DisplayUnitInfo> out(new DisplayUnitInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<DisplayUnitInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> DisplayUnitInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", new base::StringValue(this->id));

  value->SetWithoutPathExpansion("name", new base::StringValue(this->name));

  value->SetWithoutPathExpansion("mirroringSourceId", new base::StringValue(this->mirroring_source_id));

  value->SetWithoutPathExpansion("isPrimary", new base::FundamentalValue(this->is_primary));

  value->SetWithoutPathExpansion("isInternal", new base::FundamentalValue(this->is_internal));

  value->SetWithoutPathExpansion("isEnabled", new base::FundamentalValue(this->is_enabled));

  value->SetWithoutPathExpansion("dpiX", new base::FundamentalValue(this->dpi_x));

  value->SetWithoutPathExpansion("dpiY", new base::FundamentalValue(this->dpi_y));

  value->SetWithoutPathExpansion("rotation", new base::FundamentalValue(this->rotation));

  value->SetWithoutPathExpansion("bounds", (this->bounds).ToValue().release());

  value->SetWithoutPathExpansion("overscan", (this->overscan).ToValue().release());

  value->SetWithoutPathExpansion("workArea", (this->work_area).ToValue().release());


  return value;
}


DisplayProperties::DisplayProperties()
 {}

DisplayProperties::~DisplayProperties() {}

// static
bool DisplayProperties::Populate(
    const base::Value& value, DisplayProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* mirroring_source_id_value = NULL;
  if (dict->GetWithoutPathExpansion("mirroringSourceId", &mirroring_source_id_value)) {
    {
      std::string temp;
      if (!mirroring_source_id_value->GetAsString(&temp)) {
        out->mirroring_source_id.reset();
        return false;
      }
      else
        out->mirroring_source_id.reset(new std::string(temp));
    }
  }

  const base::Value* is_primary_value = NULL;
  if (dict->GetWithoutPathExpansion("isPrimary", &is_primary_value)) {
    {
      bool temp;
      if (!is_primary_value->GetAsBoolean(&temp)) {
        out->is_primary.reset();
        return false;
      }
      else
        out->is_primary.reset(new bool(temp));
    }
  }

  const base::Value* overscan_value = NULL;
  if (dict->GetWithoutPathExpansion("overscan", &overscan_value)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!overscan_value->GetAsDictionary(&dictionary)) {
        return false;
      }
      else {
        scoped_ptr<Insets> temp(new Insets());
        if (!Insets::Populate(*dictionary, temp.get())) {
          return false;
        }
        else
          out->overscan = std::move(temp);
      }
    }
  }

  const base::Value* rotation_value = NULL;
  if (dict->GetWithoutPathExpansion("rotation", &rotation_value)) {
    {
      int temp;
      if (!rotation_value->GetAsInteger(&temp)) {
        out->rotation.reset();
        return false;
      }
      else
        out->rotation.reset(new int(temp));
    }
  }

  const base::Value* bounds_origin_x_value = NULL;
  if (dict->GetWithoutPathExpansion("boundsOriginX", &bounds_origin_x_value)) {
    {
      int temp;
      if (!bounds_origin_x_value->GetAsInteger(&temp)) {
        out->bounds_origin_x.reset();
        return false;
      }
      else
        out->bounds_origin_x.reset(new int(temp));
    }
  }

  const base::Value* bounds_origin_y_value = NULL;
  if (dict->GetWithoutPathExpansion("boundsOriginY", &bounds_origin_y_value)) {
    {
      int temp;
      if (!bounds_origin_y_value->GetAsInteger(&temp)) {
        out->bounds_origin_y.reset();
        return false;
      }
      else
        out->bounds_origin_y.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<DisplayProperties> DisplayProperties::FromValue(const base::Value& value) {
  scoped_ptr<DisplayProperties> out(new DisplayProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<DisplayProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> DisplayProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->mirroring_source_id.get()) {
    value->SetWithoutPathExpansion("mirroringSourceId", new base::StringValue(*this->mirroring_source_id));

  }
  if (this->is_primary.get()) {
    value->SetWithoutPathExpansion("isPrimary", new base::FundamentalValue(*this->is_primary));

  }
  if (this->overscan.get()) {
    value->SetWithoutPathExpansion("overscan", (this->overscan)->ToValue().release());

  }
  if (this->rotation.get()) {
    value->SetWithoutPathExpansion("rotation", new base::FundamentalValue(*this->rotation));

  }
  if (this->bounds_origin_x.get()) {
    value->SetWithoutPathExpansion("boundsOriginX", new base::FundamentalValue(*this->bounds_origin_x));

  }
  if (this->bounds_origin_y.get()) {
    value->SetWithoutPathExpansion("boundsOriginY", new base::FundamentalValue(*this->bounds_origin_y));

  }

  return value;
}



//
// Functions
//

namespace GetInfo {

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<DisplayUnitInfo> >& display_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(display_info).release());

  return create_results;
}
}  // namespace GetInfo

namespace SetDisplayProperties {

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

  const base::Value* info_value = NULL;
  if (args.Get(1, &info_value) &&
      !info_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!info_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!DisplayProperties::Populate(*dictionary, &params->info)) {
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
}  // namespace SetDisplayProperties

namespace EnableUnifiedDesktop {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* enabled_value = NULL;
  if (args.Get(0, &enabled_value) &&
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


}  // namespace EnableUnifiedDesktop

//
// Events
//

namespace OnDisplayChanged {

const char kEventName[] = "system.display.onDisplayChanged";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnDisplayChanged

}  // namespace system_display
}  // namespace api
}  // namespace extensions

