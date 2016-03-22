// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/alarms.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/alarms.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace alarms {
//
// Types
//

Alarm::Alarm()
: scheduled_time(0.0) {}

Alarm::~Alarm() {}

// static
bool Alarm::Populate(
    const base::Value& value, Alarm* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* name_value = NULL;
  if (!dict->GetWithoutPathExpansion("name", &name_value)) {
    return false;
  }
  {
    if (!name_value->GetAsString(&out->name)) {
      return false;
    }
  }

  const base::Value* scheduled_time_value = NULL;
  if (!dict->GetWithoutPathExpansion("scheduledTime", &scheduled_time_value)) {
    return false;
  }
  {
    if (!scheduled_time_value->GetAsDouble(&out->scheduled_time)) {
      return false;
    }
  }

  const base::Value* period_in_minutes_value = NULL;
  if (dict->GetWithoutPathExpansion("periodInMinutes", &period_in_minutes_value)) {
    {
      double temp;
      if (!period_in_minutes_value->GetAsDouble(&temp)) {
        out->period_in_minutes.reset();
        return false;
      }
      else
        out->period_in_minutes.reset(new double(temp));
    }
  }

  return true;
}

// static
scoped_ptr<Alarm> Alarm::FromValue(const base::Value& value) {
  scoped_ptr<Alarm> out(new Alarm());
  if (!Populate(value, out.get()))
    return scoped_ptr<Alarm>();
  return out;
}

scoped_ptr<base::DictionaryValue> Alarm::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("name", new base::StringValue(this->name));

  value->SetWithoutPathExpansion("scheduledTime", new base::FundamentalValue(this->scheduled_time));

  if (this->period_in_minutes.get()) {
    value->SetWithoutPathExpansion("periodInMinutes", new base::FundamentalValue(*this->period_in_minutes));

  }

  return value;
}


AlarmCreateInfo::AlarmCreateInfo()
 {}

AlarmCreateInfo::~AlarmCreateInfo() {}

// static
bool AlarmCreateInfo::Populate(
    const base::Value& value, AlarmCreateInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* when_value = NULL;
  if (dict->GetWithoutPathExpansion("when", &when_value)) {
    {
      double temp;
      if (!when_value->GetAsDouble(&temp)) {
        out->when.reset();
        return false;
      }
      else
        out->when.reset(new double(temp));
    }
  }

  const base::Value* delay_in_minutes_value = NULL;
  if (dict->GetWithoutPathExpansion("delayInMinutes", &delay_in_minutes_value)) {
    {
      double temp;
      if (!delay_in_minutes_value->GetAsDouble(&temp)) {
        out->delay_in_minutes.reset();
        return false;
      }
      else
        out->delay_in_minutes.reset(new double(temp));
    }
  }

  const base::Value* period_in_minutes_value = NULL;
  if (dict->GetWithoutPathExpansion("periodInMinutes", &period_in_minutes_value)) {
    {
      double temp;
      if (!period_in_minutes_value->GetAsDouble(&temp)) {
        out->period_in_minutes.reset();
        return false;
      }
      else
        out->period_in_minutes.reset(new double(temp));
    }
  }

  return true;
}

// static
scoped_ptr<AlarmCreateInfo> AlarmCreateInfo::FromValue(const base::Value& value) {
  scoped_ptr<AlarmCreateInfo> out(new AlarmCreateInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<AlarmCreateInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> AlarmCreateInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->when.get()) {
    value->SetWithoutPathExpansion("when", new base::FundamentalValue(*this->when));

  }
  if (this->delay_in_minutes.get()) {
    value->SetWithoutPathExpansion("delayInMinutes", new base::FundamentalValue(*this->delay_in_minutes));

  }
  if (this->period_in_minutes.get()) {
    value->SetWithoutPathExpansion("periodInMinutes", new base::FundamentalValue(*this->period_in_minutes));

  }

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

  const base::Value* name_value = NULL;
  if (args.Get(0, &name_value) &&
      !name_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string temp;
      if (!name_value->GetAsString(&temp)) {
        params->name.reset();
        return scoped_ptr<Params>();
      }
      else
        params->name.reset(new std::string(temp));
    }
  }

  const base::Value* alarm_info_value = NULL;
  if (args.Get(1, &alarm_info_value) &&
      !alarm_info_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!alarm_info_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!AlarmCreateInfo::Populate(*dictionary, &params->alarm_info)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace Create

namespace Get {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() > 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* name_value = NULL;
  if (args.Get(0, &name_value) &&
      !name_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string temp;
      if (!name_value->GetAsString(&temp)) {
        params->name.reset();
        return scoped_ptr<Params>();
      }
      else
        params->name.reset(new std::string(temp));
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const Alarm& alarm) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((alarm).ToValue().release());

  return create_results;
}
}  // namespace Get

namespace GetAll {

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<Alarm> >& alarms) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(alarms).release());

  return create_results;
}
}  // namespace GetAll

namespace Clear {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() > 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* name_value = NULL;
  if (args.Get(0, &name_value) &&
      !name_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string temp;
      if (!name_value->GetAsString(&temp)) {
        params->name.reset();
        return scoped_ptr<Params>();
      }
      else
        params->name.reset(new std::string(temp));
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(bool was_cleared) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(was_cleared));

  return create_results;
}
}  // namespace Clear

namespace ClearAll {

scoped_ptr<base::ListValue> Results::Create(bool was_cleared) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(was_cleared));

  return create_results;
}
}  // namespace ClearAll

//
// Events
//

namespace OnAlarm {

const char kEventName[] = "alarms.onAlarm";

scoped_ptr<base::ListValue> Create(const Alarm& alarm) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((alarm).ToValue().release());

  return create_results;
}

}  // namespace OnAlarm

}  // namespace alarms
}  // namespace api
}  // namespace extensions

