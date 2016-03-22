// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/cast_channel.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_CAST_CHANNEL_H__
#define EXTENSIONS_COMMON_API_CAST_CHANNEL_H__

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
namespace cast_channel {

//
// Types
//

// The state of the channel.
enum ReadyState {
  READY_STATE_NONE,
  READY_STATE_CONNECTING,
  READY_STATE_OPEN,
  READY_STATE_CLOSING,
  READY_STATE_CLOSED,
  READY_STATE_LAST = READY_STATE_CLOSED,
};


std::string ToString(ReadyState as_enum);
ReadyState ParseReadyState(const std::string& as_string);

// Error conditions that the channel may encounter.  All error conditions are
// terminal.  When an error condition is encountered the API will: (1)
// Transition the channel to readyState == 'closed'. (2) Set
// ChannelInfo.lastError to the error condition. (3) Fire an onError event with
// the error condition. (4) Fire an onClose event.
enum ChannelError {
  CHANNEL_ERROR_NONE,
  CHANNEL_ERROR_CHANNEL_NOT_OPEN,
  CHANNEL_ERROR_AUTHENTICATION_ERROR,
  CHANNEL_ERROR_CONNECT_ERROR,
  CHANNEL_ERROR_SOCKET_ERROR,
  CHANNEL_ERROR_TRANSPORT_ERROR,
  CHANNEL_ERROR_INVALID_MESSAGE,
  CHANNEL_ERROR_INVALID_CHANNEL_ID,
  CHANNEL_ERROR_CONNECT_TIMEOUT,
  CHANNEL_ERROR_PING_TIMEOUT,
  CHANNEL_ERROR_UNKNOWN,
  CHANNEL_ERROR_LAST = CHANNEL_ERROR_UNKNOWN,
};


std::string ToString(ChannelError as_enum);
ChannelError ParseChannelError(const std::string& as_string);

// Authentication methods that may be required to connect to a Cast receiver.
enum ChannelAuthType {
  CHANNEL_AUTH_TYPE_NONE,
  CHANNEL_AUTH_TYPE_SSL,
  CHANNEL_AUTH_TYPE_SSL_VERIFIED,
  CHANNEL_AUTH_TYPE_LAST = CHANNEL_AUTH_TYPE_SSL_VERIFIED,
};


std::string ToString(ChannelAuthType as_enum);
ChannelAuthType ParseChannelAuthType(const std::string& as_string);

struct ConnectInfo {
  ConnectInfo();
  ~ConnectInfo();

  // Populates a ConnectInfo object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ConnectInfo* out);

  // Creates a ConnectInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<ConnectInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ConnectInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The IPV4 address of the Cast receiver, e.g. '198.1.0.2'. TODO(mfoltz):
  // Investigate whether IPV6 addresses "just work."
  std::string ip_address;

  // The port number to connect to, 0-65535.
  int port;

  // The amount of time to wait in milliseconds before stopping the connection
  // process. Timeouts are disabled if the value is zero. The default timeout is
  // 8000ms.
  scoped_ptr<int> timeout;

  // The authentication method required for the channel.
  ChannelAuthType auth;

  // The amount of time to wait in milliseconds before sending pings to idle
  // channels.
  scoped_ptr<int> ping_interval;

  // The maximum amount of idle time allowed before a channel is closed.
  scoped_ptr<int> liveness_timeout;

  // If set, CastDeviceCapability bitmask values describing capability of the cast
  // device.
  scoped_ptr<int> capabilities;


 private:
  DISALLOW_COPY_AND_ASSIGN(ConnectInfo);
};

struct ChannelInfo {
  ChannelInfo();
  ~ChannelInfo();

  // Populates a ChannelInfo object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ChannelInfo* out);

  // Creates a ChannelInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<ChannelInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ChannelInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Id for the channel.
  int channel_id;

  // Connection information that was used to establish the channel to the
  // receiver.
  ConnectInfo connect_info;

  // The current state of the channel.
  ReadyState ready_state;

  // If set, the last error condition encountered by the channel.
  ChannelError error_state;

  // If true, keep-alive messages are handled automatically by the channel.
  bool keep_alive;

  // Whether the channel is audio only as identified by the device certificate
  // during channel authentication.
  bool audio_only;


 private:
  DISALLOW_COPY_AND_ASSIGN(ChannelInfo);
};

struct MessageInfo {
  MessageInfo();
  ~MessageInfo();

  // Populates a MessageInfo object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, MessageInfo* out);

  // Creates a MessageInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<MessageInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this MessageInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The message namespace.  A namespace is a URN of the form
  // urn:cast-x:<namespace> that is used to interpret and route Cast messages.
  std::string namespace_;

  // <p>source and destination ids identify the origin and destination of the
  // message.  They are used to route messages between endpoints that share a
  // device-to-device channel.</p><p>For messages between applications:   - The
  // sender application id is a unique identifier generated on behalf     of the
  // sender application.   - The receiver id is always the the session id for the
  // application.</p><p>For messages to or from the sender or receiver platform,
  // the special ids 'sender-0' and 'receiver-0' can be used.</p><p>For messages
  // intended for all endpoints using a given channel, the wildcard destination_id
  // '*' can be used.</p>
  std::string source_id;

  std::string destination_id;

  // The content of the message.  Must be either a string or an ArrayBuffer.
  scoped_ptr<base::Value> data;


 private:
  DISALLOW_COPY_AND_ASSIGN(MessageInfo);
};

struct ErrorInfo {
  ErrorInfo();
  ~ErrorInfo();

  // Populates a ErrorInfo object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, ErrorInfo* out);

  // Creates a ErrorInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<ErrorInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ErrorInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The type of error encountered by the channel.
  ChannelError error_state;

  // The event that was occurring when the error happened.  Values are defined in
  // the enum EventType in logging.proto.
  scoped_ptr<int> event_type;

  // An error encountered when processing the authentication handshake. Values are
  // defined in the enum ChallengeReplyErrorType in logging.proto.
  scoped_ptr<int> challenge_reply_error_type;

  // A return value from the underlying net:: socket libraries. Values are defined
  // in net/base/net_error_list.h.
  scoped_ptr<int> net_return_value;

  // An error code returned by NSS. Values are defined in secerr.h.
  scoped_ptr<int> nss_error_code;


 private:
  DISALLOW_COPY_AND_ASSIGN(ErrorInfo);
};


//
// Functions
//

namespace Open {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  ConnectInfo connect_info;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const ChannelInfo& result);
}  // namespace Results

}  // namespace Open

namespace Send {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  ChannelInfo channel;

  MessageInfo message;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const ChannelInfo& result);
}  // namespace Results

}  // namespace Send

namespace Close {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  ChannelInfo channel;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const ChannelInfo& result);
}  // namespace Results

}  // namespace Close

namespace GetLogs {

namespace Results {

// compressed serialized raw bytes containing the logs. The log is formatted
// using protocol buffer. See extensions/browser/api/cast_channel/logging.proto
// for definition. Compression is in gzip format.
scoped_ptr<base::ListValue> Create(const std::vector<char>& log);
}  // namespace Results

}  // namespace GetLogs

namespace SetAuthorityKeys {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string keys;

  std::string signature;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetAuthorityKeys

//
// Events
//

namespace OnMessage {

extern const char kEventName[];  // "cast.channel.onMessage"

scoped_ptr<base::ListValue> Create(const ChannelInfo& channel, const MessageInfo& message);
}  // namespace OnMessage

namespace OnError {

extern const char kEventName[];  // "cast.channel.onError"

scoped_ptr<base::ListValue> Create(const ChannelInfo& channel, const ErrorInfo& error);
}  // namespace OnError

}  // namespace cast_channel
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_CAST_CHANNEL_H__
