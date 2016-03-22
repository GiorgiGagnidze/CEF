// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/events.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/events.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace events {
//
// Types
//

Rule::Rule()
 {}

Rule::~Rule() {}

// static
bool Rule::Populate(
    const base::Value& value, Rule* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
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

  const base::Value* tags_value = NULL;
  if (dict->GetWithoutPathExpansion("tags", &tags_value)) {
    {
      const base::ListValue* list = NULL;
      if (!tags_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->tags)) {
          return false;
        }
      }
    }
  }

  const base::Value* conditions_value = NULL;
  if (!dict->GetWithoutPathExpansion("conditions", &conditions_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!conditions_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->conditions)) {
        return false;
      }
    }
  }

  const base::Value* actions_value = NULL;
  if (!dict->GetWithoutPathExpansion("actions", &actions_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!actions_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->actions)) {
        return false;
      }
    }
  }

  const base::Value* priority_value = NULL;
  if (dict->GetWithoutPathExpansion("priority", &priority_value)) {
    {
      int temp;
      if (!priority_value->GetAsInteger(&temp)) {
        out->priority.reset();
        return false;
      }
      else
        out->priority.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<Rule> Rule::FromValue(const base::Value& value) {
  scoped_ptr<Rule> out(new Rule());
  if (!Populate(value, out.get()))
    return scoped_ptr<Rule>();
  return out;
}

scoped_ptr<base::DictionaryValue> Rule::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->id.get()) {
    value->SetWithoutPathExpansion("id", new base::StringValue(*this->id));

  }
  if (this->tags.get()) {
    value->SetWithoutPathExpansion("tags", json_schema_compiler::util::CreateValueFromOptionalArray(this->tags).release());

  }
  value->SetWithoutPathExpansion("conditions", json_schema_compiler::util::CreateValueFromArray(this->conditions).release());

  value->SetWithoutPathExpansion("actions", json_schema_compiler::util::CreateValueFromArray(this->actions).release());

  if (this->priority.get()) {
    value->SetWithoutPathExpansion("priority", new base::FundamentalValue(*this->priority));

  }

  return value;
}


namespace Event {

namespace AddRules {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 3) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* event_name_value = NULL;
  if (args.Get(0, &event_name_value) &&
      !event_name_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!event_name_value->GetAsString(&params->event_name)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* web_view_instance_id_value = NULL;
  if (args.Get(1, &web_view_instance_id_value) &&
      !web_view_instance_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!web_view_instance_id_value->GetAsInteger(&params->web_view_instance_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* rules_value = NULL;
  if (args.Get(2, &rules_value) &&
      !rules_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::ListValue* list = NULL;
      if (!rules_value->GetAsList(&list)) {
        return scoped_ptr<Params>();
      }
      else {
        if (!json_schema_compiler::util::PopulateArrayFromList(*list, &params->rules)) {
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


scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<Rule> >& rules) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(rules).release());

  return create_results;
}
}  // namespace AddRules

namespace GetRules {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 2 || args.GetSize() > 3) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* event_name_value = NULL;
  if (args.Get(0, &event_name_value) &&
      !event_name_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!event_name_value->GetAsString(&params->event_name)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* web_view_instance_id_value = NULL;
  if (args.Get(1, &web_view_instance_id_value) &&
      !web_view_instance_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!web_view_instance_id_value->GetAsInteger(&params->web_view_instance_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* rule_identifiers_value = NULL;
  if (args.Get(2, &rule_identifiers_value) &&
      !rule_identifiers_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::ListValue* list = NULL;
      if (!rule_identifiers_value->GetAsList(&list)) {
        return scoped_ptr<Params>();
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &params->rule_identifiers)) {
          return scoped_ptr<Params>();
        }
      }
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<Rule> >& rules) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(rules).release());

  return create_results;
}
}  // namespace GetRules

namespace RemoveRules {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 2 || args.GetSize() > 3) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* event_name_value = NULL;
  if (args.Get(0, &event_name_value) &&
      !event_name_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!event_name_value->GetAsString(&params->event_name)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* web_view_instance_id_value = NULL;
  if (args.Get(1, &web_view_instance_id_value) &&
      !web_view_instance_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!web_view_instance_id_value->GetAsInteger(&params->web_view_instance_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* rule_identifiers_value = NULL;
  if (args.Get(2, &rule_identifiers_value) &&
      !rule_identifiers_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::ListValue* list = NULL;
      if (!rule_identifiers_value->GetAsList(&list)) {
        return scoped_ptr<Params>();
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &params->rule_identifiers)) {
          return scoped_ptr<Params>();
        }
      }
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace RemoveRules

}  // namespace Event


}  // namespace events
}  // namespace api
}  // namespace extensions

