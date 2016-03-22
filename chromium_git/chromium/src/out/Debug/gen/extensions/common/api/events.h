// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/events.json
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_EVENTS_H__
#define EXTENSIONS_COMMON_API_EVENTS_H__

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
namespace events {

//
// Types
//

// Description of a declarative rule for handling events.
struct Rule {
  Rule();
  ~Rule();

  // Populates a Rule object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, Rule* out);

  // Creates a Rule object from a base::Value, or NULL on failure.
  static scoped_ptr<Rule> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Rule object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Optional identifier that allows referencing this rule.
  scoped_ptr<std::string> id;

  // Tags can be used to annotate rules and perform operations on sets of rules.
  scoped_ptr<std::vector<std::string> > tags;

  // List of conditions that can trigger the actions.
  std::vector<linked_ptr<base::Value> > conditions;

  // List of actions that are triggered if one of the condtions is fulfilled.
  std::vector<linked_ptr<base::Value> > actions;

  // Optional priority of this rule. Defaults to 100.
  scoped_ptr<int> priority;


 private:
  DISALLOW_COPY_AND_ASSIGN(Rule);
};

namespace Event {

namespace AddRules {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Name of the event this function affects.
  std::string event_name;

  // If provided, this is an integer that uniquely identfies the <webview>
  // associated with this function call.
  int web_view_instance_id;

  // Rules to be registered. These do not replace previously registered rules.
  std::vector<linked_ptr<Rule> > rules;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// Rules that were registered, the optional parameters are filled with values.
scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<Rule> >& rules);
}  // namespace Results

}  // namespace AddRules

namespace GetRules {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Name of the event this function affects.
  std::string event_name;

  // If provided, this is an integer that uniquely identfies the <webview>
  // associated with this function call.
  int web_view_instance_id;

  // If an array is passed, only rules with identifiers contained in this array
  // are returned.
  scoped_ptr<std::vector<std::string> > rule_identifiers;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// Rules that were registered, the optional parameters are filled with values.
scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<Rule> >& rules);
}  // namespace Results

}  // namespace GetRules

namespace RemoveRules {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Name of the event this function affects.
  std::string event_name;

  // If provided, this is an integer that uniquely identfies the <webview>
  // associated with this function call.
  int web_view_instance_id;

  // If an array is passed, only rules with identifiers contained in this array
  // are unregistered.
  scoped_ptr<std::vector<std::string> > rule_identifiers;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace RemoveRules

}  // namespace Event


}  // namespace events
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_EVENTS_H__
