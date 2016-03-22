// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/test.json
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_TEST_H__
#define EXTENSIONS_COMMON_API_TEST_H__

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
namespace test {

//
// Functions
//

namespace GetConfig {

namespace Results {

struct TestConfig {
  TestConfig();
  ~TestConfig();

  // Returns a new base::DictionaryValue representing the serialized form of
  // this TestConfig object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Details on the FTP server used to mock network responses.  Will be set only
  // if test calls ExtensionApiTest::StartFTPServer().
  struct FtpServer {
    FtpServer();
    ~FtpServer();

    // Returns a new base::DictionaryValue representing the serialized form of
    // this FtpServer object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    // The port on which the FTP server is listening.
    int port;


   private:
    DISALLOW_COPY_AND_ASSIGN(FtpServer);
  };

  // Details on the test server used to mock network responses.  Will be set only
  // if test calls ExtensionApiTest::StartEmbeddedTestServer().
  struct TestServer {
    TestServer();
    ~TestServer();

    // Returns a new base::DictionaryValue representing the serialized form of
    // this TestServer object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    // The port on which the test server is listening.
    int port;


   private:
    DISALLOW_COPY_AND_ASSIGN(TestServer);
  };


  // Additional string argument to pass to test.
  scoped_ptr<std::string> custom_arg;

  // Details on the FTP server used to mock network responses.  Will be set only
  // if test calls ExtensionApiTest::StartFTPServer().
  scoped_ptr<FtpServer> ftp_server;

  // Details on the test server used to mock network responses.  Will be set only
  // if test calls ExtensionApiTest::StartEmbeddedTestServer().
  scoped_ptr<TestServer> test_server;

  // file:/// URL for the API test data directory.
  std::string test_data_directory;

  // The port on which the test WebSocket server is listening.
  int test_web_socket_port;

  // Whether or not extensions are running in site isolation mode.
  bool isolate_extensions;


 private:
  DISALLOW_COPY_AND_ASSIGN(TestConfig);
};


scoped_ptr<base::ListValue> Create(const TestConfig& test_config);
}  // namespace Results

}  // namespace GetConfig

namespace NotifyFail {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string message;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace NotifyFail

namespace NotifyPass {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  scoped_ptr<std::string> message;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace NotifyPass

namespace Log {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string message;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace Log

namespace PassMessage {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string message;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::string& response);
}  // namespace Results

}  // namespace PassMessage

namespace WaitForRoundTrip {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string message;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const std::string& message);
}  // namespace Results

}  // namespace WaitForRoundTrip

//
// Events
//

namespace OnMessage {

extern const char kEventName[];  // "test.onMessage"

struct Info {
  Info();
  ~Info();

  // Returns a new base::DictionaryValue representing the serialized form of
  // this Info object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Additional information.
  std::string data;

  // True if this was the last message for this test
  bool last_message;


 private:
  DISALLOW_COPY_AND_ASSIGN(Info);
};


scoped_ptr<base::ListValue> Create(const Info& info);
}  // namespace OnMessage

}  // namespace test
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_TEST_H__
