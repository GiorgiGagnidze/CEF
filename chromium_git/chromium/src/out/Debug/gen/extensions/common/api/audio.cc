// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/audio.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/audio.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace audio {
//
// Types
//

OutputDeviceInfo::OutputDeviceInfo()
: is_active(false), is_muted(false), volume(0.0) {}

OutputDeviceInfo::~OutputDeviceInfo() {}

// static
bool OutputDeviceInfo::Populate(
    const base::Value& value, OutputDeviceInfo* out) {
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

  const base::Value* is_active_value = NULL;
  if (!dict->GetWithoutPathExpansion("isActive", &is_active_value)) {
    return false;
  }
  {
    if (!is_active_value->GetAsBoolean(&out->is_active)) {
      return false;
    }
  }

  const base::Value* is_muted_value = NULL;
  if (!dict->GetWithoutPathExpansion("isMuted", &is_muted_value)) {
    return false;
  }
  {
    if (!is_muted_value->GetAsBoolean(&out->is_muted)) {
      return false;
    }
  }

  const base::Value* volume_value = NULL;
  if (!dict->GetWithoutPathExpansion("volume", &volume_value)) {
    return false;
  }
  {
    if (!volume_value->GetAsDouble(&out->volume)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<OutputDeviceInfo> OutputDeviceInfo::FromValue(const base::Value& value) {
  scoped_ptr<OutputDeviceInfo> out(new OutputDeviceInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<OutputDeviceInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> OutputDeviceInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", new base::StringValue(this->id));

  value->SetWithoutPathExpansion("name", new base::StringValue(this->name));

  value->SetWithoutPathExpansion("isActive", new base::FundamentalValue(this->is_active));

  value->SetWithoutPathExpansion("isMuted", new base::FundamentalValue(this->is_muted));

  value->SetWithoutPathExpansion("volume", new base::FundamentalValue(this->volume));


  return value;
}


InputDeviceInfo::InputDeviceInfo()
: is_active(false), is_muted(false), gain(0.0) {}

InputDeviceInfo::~InputDeviceInfo() {}

// static
bool InputDeviceInfo::Populate(
    const base::Value& value, InputDeviceInfo* out) {
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

  const base::Value* is_active_value = NULL;
  if (!dict->GetWithoutPathExpansion("isActive", &is_active_value)) {
    return false;
  }
  {
    if (!is_active_value->GetAsBoolean(&out->is_active)) {
      return false;
    }
  }

  const base::Value* is_muted_value = NULL;
  if (!dict->GetWithoutPathExpansion("isMuted", &is_muted_value)) {
    return false;
  }
  {
    if (!is_muted_value->GetAsBoolean(&out->is_muted)) {
      return false;
    }
  }

  const base::Value* gain_value = NULL;
  if (!dict->GetWithoutPathExpansion("gain", &gain_value)) {
    return false;
  }
  {
    if (!gain_value->GetAsDouble(&out->gain)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<InputDeviceInfo> InputDeviceInfo::FromValue(const base::Value& value) {
  scoped_ptr<InputDeviceInfo> out(new InputDeviceInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<InputDeviceInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> InputDeviceInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", new base::StringValue(this->id));

  value->SetWithoutPathExpansion("name", new base::StringValue(this->name));

  value->SetWithoutPathExpansion("isActive", new base::FundamentalValue(this->is_active));

  value->SetWithoutPathExpansion("isMuted", new base::FundamentalValue(this->is_muted));

  value->SetWithoutPathExpansion("gain", new base::FundamentalValue(this->gain));


  return value;
}


AudioDeviceInfo::AudioDeviceInfo()
: is_input(false), is_active(false), is_muted(false), level(0) {}

AudioDeviceInfo::~AudioDeviceInfo() {}

// static
bool AudioDeviceInfo::Populate(
    const base::Value& value, AudioDeviceInfo* out) {
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

  const base::Value* is_input_value = NULL;
  if (!dict->GetWithoutPathExpansion("isInput", &is_input_value)) {
    return false;
  }
  {
    if (!is_input_value->GetAsBoolean(&out->is_input)) {
      return false;
    }
  }

  const base::Value* device_type_value = NULL;
  if (!dict->GetWithoutPathExpansion("deviceType", &device_type_value)) {
    return false;
  }
  {
    if (!device_type_value->GetAsString(&out->device_type)) {
      return false;
    }
  }

  const base::Value* display_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("displayName", &display_name_value)) {
    return false;
  }
  {
    if (!display_name_value->GetAsString(&out->display_name)) {
      return false;
    }
  }

  const base::Value* device_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("deviceName", &device_name_value)) {
    return false;
  }
  {
    if (!device_name_value->GetAsString(&out->device_name)) {
      return false;
    }
  }

  const base::Value* is_active_value = NULL;
  if (!dict->GetWithoutPathExpansion("isActive", &is_active_value)) {
    return false;
  }
  {
    if (!is_active_value->GetAsBoolean(&out->is_active)) {
      return false;
    }
  }

  const base::Value* is_muted_value = NULL;
  if (!dict->GetWithoutPathExpansion("isMuted", &is_muted_value)) {
    return false;
  }
  {
    if (!is_muted_value->GetAsBoolean(&out->is_muted)) {
      return false;
    }
  }

  const base::Value* level_value = NULL;
  if (!dict->GetWithoutPathExpansion("level", &level_value)) {
    return false;
  }
  {
    if (!level_value->GetAsInteger(&out->level)) {
      return false;
    }
  }

  const base::Value* stable_device_id_value = NULL;
  if (dict->GetWithoutPathExpansion("stableDeviceId", &stable_device_id_value)) {
    {
      std::string temp;
      if (!stable_device_id_value->GetAsString(&temp)) {
        out->stable_device_id.reset();
        return false;
      }
      else
        out->stable_device_id.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<AudioDeviceInfo> AudioDeviceInfo::FromValue(const base::Value& value) {
  scoped_ptr<AudioDeviceInfo> out(new AudioDeviceInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<AudioDeviceInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> AudioDeviceInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("id", new base::StringValue(this->id));

  value->SetWithoutPathExpansion("isInput", new base::FundamentalValue(this->is_input));

  value->SetWithoutPathExpansion("deviceType", new base::StringValue(this->device_type));

  value->SetWithoutPathExpansion("displayName", new base::StringValue(this->display_name));

  value->SetWithoutPathExpansion("deviceName", new base::StringValue(this->device_name));

  value->SetWithoutPathExpansion("isActive", new base::FundamentalValue(this->is_active));

  value->SetWithoutPathExpansion("isMuted", new base::FundamentalValue(this->is_muted));

  value->SetWithoutPathExpansion("level", new base::FundamentalValue(this->level));

  if (this->stable_device_id.get()) {
    value->SetWithoutPathExpansion("stableDeviceId", new base::StringValue(*this->stable_device_id));

  }

  return value;
}


DeviceProperties::DeviceProperties()
: is_muted(false) {}

DeviceProperties::~DeviceProperties() {}

// static
bool DeviceProperties::Populate(
    const base::Value& value, DeviceProperties* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* is_muted_value = NULL;
  if (!dict->GetWithoutPathExpansion("isMuted", &is_muted_value)) {
    return false;
  }
  {
    if (!is_muted_value->GetAsBoolean(&out->is_muted)) {
      return false;
    }
  }

  const base::Value* volume_value = NULL;
  if (dict->GetWithoutPathExpansion("volume", &volume_value)) {
    {
      double temp;
      if (!volume_value->GetAsDouble(&temp)) {
        out->volume.reset();
        return false;
      }
      else
        out->volume.reset(new double(temp));
    }
  }

  const base::Value* gain_value = NULL;
  if (dict->GetWithoutPathExpansion("gain", &gain_value)) {
    {
      double temp;
      if (!gain_value->GetAsDouble(&temp)) {
        out->gain.reset();
        return false;
      }
      else
        out->gain.reset(new double(temp));
    }
  }

  return true;
}

// static
scoped_ptr<DeviceProperties> DeviceProperties::FromValue(const base::Value& value) {
  scoped_ptr<DeviceProperties> out(new DeviceProperties());
  if (!Populate(value, out.get()))
    return scoped_ptr<DeviceProperties>();
  return out;
}

scoped_ptr<base::DictionaryValue> DeviceProperties::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("isMuted", new base::FundamentalValue(this->is_muted));

  if (this->volume.get()) {
    value->SetWithoutPathExpansion("volume", new base::FundamentalValue(*this->volume));

  }
  if (this->gain.get()) {
    value->SetWithoutPathExpansion("gain", new base::FundamentalValue(*this->gain));

  }

  return value;
}



//
// Functions
//

namespace GetInfo {

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<OutputDeviceInfo> >& output_info, const std::vector<linked_ptr<InputDeviceInfo> >& input_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(output_info).release());

  create_results->Append(json_schema_compiler::util::CreateValueFromArray(input_info).release());

  return create_results;
}
}  // namespace GetInfo

namespace SetActiveDevices {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* ids_value = NULL;
  if (args.Get(0, &ids_value) &&
      !ids_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::ListValue* list = NULL;
      if (!ids_value->GetAsList(&list)) {
        return scoped_ptr<Params>();
      }
      else {
        if (!json_schema_compiler::util::PopulateArrayFromList(*list, &params->ids)) {
          return scoped_ptr<Params>();
        }
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
}  // namespace SetActiveDevices

namespace SetProperties {

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

  const base::Value* properties_value = NULL;
  if (args.Get(1, &properties_value) &&
      !properties_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!properties_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!DeviceProperties::Populate(*dictionary, &params->properties)) {
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
}  // namespace SetProperties

//
// Events
//

namespace OnDeviceChanged {

const char kEventName[] = "audio.onDeviceChanged";

scoped_ptr<base::ListValue> Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}

}  // namespace OnDeviceChanged

namespace OnLevelChanged {

const char kEventName[] = "audio.OnLevelChanged";

scoped_ptr<base::ListValue> Create(const std::string& id, int level) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(id));

  create_results->Append(new base::FundamentalValue(level));

  return create_results;
}

}  // namespace OnLevelChanged

namespace OnMuteChanged {

const char kEventName[] = "audio.OnMuteChanged";

scoped_ptr<base::ListValue> Create(bool is_input, bool is_muted) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(is_input));

  create_results->Append(new base::FundamentalValue(is_muted));

  return create_results;
}

}  // namespace OnMuteChanged

namespace OnDevicesChanged {

const char kEventName[] = "audio.OnDevicesChanged";

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<AudioDeviceInfo> >& devices) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(devices).release());

  return create_results;
}

}  // namespace OnDevicesChanged

}  // namespace audio
}  // namespace api
}  // namespace extensions

