// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/sockets_tcp.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_SOCKETS_TCP_H__
#define EXTENSIONS_COMMON_API_SOCKETS_TCP_H__

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
namespace sockets_tcp {

//
// Types
//

struct SocketProperties {
  SocketProperties();
  ~SocketProperties();

  // Populates a SocketProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, SocketProperties* out);

  // Creates a SocketProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<SocketProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this SocketProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Flag indicating if the socket is left open when the event page of the
  // application is unloaded (see <a
  // href="http://developer.chrome.com/apps/app_lifecycle.html">Manage App
  // Lifecycle</a>). The default value is "false." When the application is loaded,
  // any sockets previously opened with persistent=true can be fetched with
  // <code>getSockets</code>.
  scoped_ptr<bool> persistent;

  // An application-defined string associated with the socket.
  scoped_ptr<std::string> name;

  // The size of the buffer used to receive data. The default value is 4096.
  scoped_ptr<int> buffer_size;


 private:
  DISALLOW_COPY_AND_ASSIGN(SocketProperties);
};

struct CreateInfo {
  CreateInfo();
  ~CreateInfo();

  // Populates a CreateInfo object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, CreateInfo* out);

  // Creates a CreateInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<CreateInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this CreateInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The ID of the newly created socket. Note that socket IDs created from this
  // API are not compatible with socket IDs created from other APIs, such as the
  // deprecated <code>$(ref:socket)</code> API.
  int socket_id;


 private:
  DISALLOW_COPY_AND_ASSIGN(CreateInfo);
};

struct SendInfo {
  SendInfo();
  ~SendInfo();

  // Populates a SendInfo object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, SendInfo* out);

  // Creates a SendInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<SendInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this SendInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The result code returned from the underlying network call. A negative value
  // indicates an error.
  int result_code;

  // The number of bytes sent (if result == 0)
  scoped_ptr<int> bytes_sent;


 private:
  DISALLOW_COPY_AND_ASSIGN(SendInfo);
};

struct TLSVersionConstraints {
  TLSVersionConstraints();
  ~TLSVersionConstraints();

  // Populates a TLSVersionConstraints object from a base::Value. Returns
  // whether |out| was successfully populated.
  static bool Populate(const base::Value& value, TLSVersionConstraints* out);

  // Creates a TLSVersionConstraints object from a base::Value, or NULL on
  // failure.
  static scoped_ptr<TLSVersionConstraints> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this TLSVersionConstraints object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The minimum and maximum acceptable versions of TLS. These will be
  // <code>tls1</code>, <code>tls1.1</code>, or <code>tls1.2</code>.
  scoped_ptr<std::string> min;

  scoped_ptr<std::string> max;


 private:
  DISALLOW_COPY_AND_ASSIGN(TLSVersionConstraints);
};

struct SecureOptions {
  SecureOptions();
  ~SecureOptions();

  // Populates a SecureOptions object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, SecureOptions* out);

  // Creates a SecureOptions object from a base::Value, or NULL on failure.
  static scoped_ptr<SecureOptions> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this SecureOptions object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  scoped_ptr<TLSVersionConstraints> tls_version;


 private:
  DISALLOW_COPY_AND_ASSIGN(SecureOptions);
};

struct SocketInfo {
  SocketInfo();
  ~SocketInfo();

  // Populates a SocketInfo object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, SocketInfo* out);

  // Creates a SocketInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<SocketInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this SocketInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The socket identifier.
  int socket_id;

  // Flag indicating whether the socket is left open when the application is
  // suspended (see <code>SocketProperties.persistent</code>).
  bool persistent;

  // Application-defined string associated with the socket.
  scoped_ptr<std::string> name;

  // The size of the buffer used to receive data. If no buffer size has been
  // specified explictly, the value is not provided.
  scoped_ptr<int> buffer_size;

  // Flag indicating whether a connected socket blocks its peer from sending more
  // data (see <code>setPaused</code>).
  bool paused;

  // Flag indicating whether the socket is connected to a remote peer.
  bool connected;

  // If the underlying socket is connected, contains its local IPv4/6 address.
  scoped_ptr<std::string> local_address;

  // If the underlying socket is connected, contains its local port.
  scoped_ptr<int> local_port;

  // If the underlying socket is connected, contains the peer/ IPv4/6 address.
  scoped_ptr<std::string> peer_address;

  // If the underlying socket is connected, contains the peer port.
  scoped_ptr<int> peer_port;


 private:
  DISALLOW_COPY_AND_ASSIGN(SocketInfo);
};

struct ReceiveInfo {
  ReceiveInfo();
  ~ReceiveInfo();

  // Populates a ReceiveInfo object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, ReceiveInfo* out);

  // Creates a ReceiveInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<ReceiveInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ReceiveInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The socket identifier.
  int socket_id;

  // The data received, with a maxium size of <code>bufferSize</code>.
  std::vector<char> data;


 private:
  DISALLOW_COPY_AND_ASSIGN(ReceiveInfo);
};

struct ReceiveErrorInfo {
  ReceiveErrorInfo();
  ~ReceiveErrorInfo();

  // Populates a ReceiveErrorInfo object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, ReceiveErrorInfo* out);

  // Creates a ReceiveErrorInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<ReceiveErrorInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this ReceiveErrorInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The socket identifier.
  int socket_id;

  // The result code returned from the underlying network call.
  int result_code;


 private:
  DISALLOW_COPY_AND_ASSIGN(ReceiveErrorInfo);
};


//
// Functions
//

namespace Create {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The socket properties (optional).
  scoped_ptr<SocketProperties> properties;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// The result of the socket creation.
scoped_ptr<base::ListValue> Create(const CreateInfo& create_info);
}  // namespace Results

}  // namespace Create

namespace Update {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The socket identifier.
  int socket_id;

  // The properties to update.
  SocketProperties properties;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace Update

namespace SetPaused {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  int socket_id;

  bool paused;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetPaused

namespace SetKeepAlive {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The socket identifier.
  int socket_id;

  // If true, enable keep-alive functionality.
  bool enable;

  // Set the delay seconds between the last data packet received and the first
  // keepalive probe. Default is 0.
  scoped_ptr<int> delay;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// The result code returned from the underlying network call. A negative value
// indicates an error.
scoped_ptr<base::ListValue> Create(int result);
}  // namespace Results

}  // namespace SetKeepAlive

namespace SetNoDelay {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The socket identifier.
  int socket_id;

  // If true, disables Nagle's algorithm.
  bool no_delay;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// The result code returned from the underlying network call. A negative value
// indicates an error.
scoped_ptr<base::ListValue> Create(int result);
}  // namespace Results

}  // namespace SetNoDelay

namespace Connect {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The socket identifier.
  int socket_id;

  // The address of the remote machine. DNS name, IPv4 and  IPv6 formats are
  // supported.
  std::string peer_address;

  // The port of the remote machine.
  int peer_port;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// The result code returned from the underlying network call. A negative value
// indicates an error.
scoped_ptr<base::ListValue> Create(int result);
}  // namespace Results

}  // namespace Connect

namespace Disconnect {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The socket identifier.
  int socket_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace Disconnect

namespace Secure {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The existing, connected socket to use.
  int socket_id;

  // Constraints and parameters for the TLS connection.
  scoped_ptr<SecureOptions> options;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(int result);
}  // namespace Results

}  // namespace Secure

namespace Send {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The socket identifier.
  int socket_id;

  // The data to send.
  std::vector<char> data;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// Result of the <code>send</code> method.
scoped_ptr<base::ListValue> Create(const SendInfo& send_info);
}  // namespace Results

}  // namespace Send

namespace Close {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The socket identifier.
  int socket_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace Close

namespace GetInfo {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The socket identifier.
  int socket_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

// Object containing the socket information.
scoped_ptr<base::ListValue> Create(const SocketInfo& socket_info);
}  // namespace Results

}  // namespace GetInfo

namespace GetSockets {

namespace Results {

// Array of object containing socket information.
scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<SocketInfo> >& socket_infos);
}  // namespace Results

}  // namespace GetSockets

//
// Events
//

namespace OnReceive {

extern const char kEventName[];  // "sockets.tcp.onReceive"

// The event data.
scoped_ptr<base::ListValue> Create(const ReceiveInfo& info);
}  // namespace OnReceive

namespace OnReceiveError {

extern const char kEventName[];  // "sockets.tcp.onReceiveError"

// The event data.
scoped_ptr<base::ListValue> Create(const ReceiveErrorInfo& info);
}  // namespace OnReceiveError

}  // namespace sockets_tcp
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_SOCKETS_TCP_H__
