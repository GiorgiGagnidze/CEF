// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/test.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/test.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace test {
//
// Functions
//

namespace GetConfig {

Results::TestConfig::FtpServer::FtpServer()
: port(0) {}

Results::TestConfig::FtpServer::~FtpServer() {}

scoped_ptr<base::DictionaryValue> Results::TestConfig::FtpServer::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("port", new base::FundamentalValue(this->port));


  return value;
}


Results::TestConfig::TestServer::TestServer()
: port(0) {}

Results::TestConfig::TestServer::~TestServer() {}

scoped_ptr<base::DictionaryValue> Results::TestConfig::TestServer::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("port", new base::FundamentalValue(this->port));


  return value;
}



Results::TestConfig::TestConfig()
: test_web_socket_port(0), isolate_extensions(false) {}

Results::TestConfig::~TestConfig() {}

scoped_ptr<base::DictionaryValue> Results::TestConfig::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->custom_arg.get()) {
    value->SetWithoutPathExpansion("customArg", new base::StringValue(*this->custom_arg));

  }
  if (this->ftp_server.get()) {
    value->SetWithoutPathExpansion("ftpServer", (this->ftp_server)->ToValue().release());

  }
  if (this->test_server.get()) {
    value->SetWithoutPathExpansion("testServer", (this->test_server)->ToValue().release());

  }
  value->SetWithoutPathExpansion("testDataDirectory", new base::StringValue(this->test_data_directory));

  value->SetWithoutPathExpansion("testWebSocketPort", new base::FundamentalValue(this->test_web_socket_port));

  value->SetWithoutPathExpansion("isolateExtensions", new base::FundamentalValue(this->isolate_extensions));


  return value;
}


scoped_ptr<base::ListValue> Results::Create(const TestConfig& test_config) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((test_config).ToValue().release());

  return create_results;
}
}  // namespace GetConfig

namespace NotifyFail {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* message_value = NULL;
  if (args.Get(0, &message_value) &&
      !message_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!message_value->GetAsString(&params->message)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace NotifyFail

namespace NotifyPass {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() > 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* message_value = NULL;
  if (args.Get(0, &message_value) &&
      !message_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string temp;
      if (!message_value->GetAsString(&temp)) {
        params->message.reset();
        return scoped_ptr<Params>();
      }
      else
        params->message.reset(new std::string(temp));
    }
  }

  return params;
}


}  // namespace NotifyPass

namespace Log {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* message_value = NULL;
  if (args.Get(0, &message_value) &&
      !message_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!message_value->GetAsString(&params->message)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


}  // namespace Log

namespace PassMessage {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* message_value = NULL;
  if (args.Get(0, &message_value) &&
      !message_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!message_value->GetAsString(&params->message)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::string& response) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(response));

  return create_results;
}
}  // namespace PassMessage

namespace WaitForRoundTrip {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* message_value = NULL;
  if (args.Get(0, &message_value) &&
      !message_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!message_value->GetAsString(&params->message)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::string& message) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::StringValue(message));

  return create_results;
}
}  // namespace WaitForRoundTrip

//
// Events
//

namespace OnMessage {

const char kEventName[] = "test.onMessage";

Info::Info()
: last_message(false) {}

Info::~Info() {}

scoped_ptr<base::DictionaryValue> Info::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("data", new base::StringValue(this->data));

  value->SetWithoutPathExpansion("lastMessage", new base::FundamentalValue(this->last_message));


  return value;
}


scoped_ptr<base::ListValue> Create(const Info& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnMessage

}  // namespace test
}  // namespace api
}  // namespace extensions

