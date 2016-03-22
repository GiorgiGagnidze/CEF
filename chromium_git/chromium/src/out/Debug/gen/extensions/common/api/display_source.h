// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/display_source.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_DISPLAY_SOURCE_H__
#define EXTENSIONS_COMMON_API_DISPLAY_SOURCE_H__

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
namespace display_source {

//
// Types
//

enum ErrorType {
  ERROR_TYPE_NONE,
  ERROR_TYPE_CREATE_MEDIA_PIPELINE_ERROR,
  ERROR_TYPE_EXCEEDED_SESSION_LIMIT_ERROR,
  ERROR_TYPE_ESTABLISH_CONNECTION_ERROR,
  ERROR_TYPE_CAPABILITIES_NEGOTIATION_ERROR,
  ERROR_TYPE_MEDIA_SEND_ERROR,
  ERROR_TYPE_CONNECTION_ERROR,
  ERROR_TYPE_UNEXPECTED_MESSAGE_ERROR,
  ERROR_TYPE_TIMEOUT_ERROR,
  ERROR_TYPE_UNKNOWN_ERROR,
  ERROR_TYPE_LAST = ERROR_TYPE_UNKNOWN_ERROR,
};


std::string ToString(ErrorType as_enum);
ErrorType ParseErrorType(const std::string& as_string);

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

  ErrorType type;

  scoped_ptr<std::string> description;


 private:
  DISALLOW_COPY_AND_ASSIGN(ErrorInfo);
};

enum SinkState {
  SINK_STATE_NONE,
  SINK_STATE_CONNECTED,
  SINK_STATE_CONNECTING,
  SINK_STATE_DISCONNECTED,
  SINK_STATE_LAST = SINK_STATE_DISCONNECTED,
};


std::string ToString(SinkState as_enum);
SinkState ParseSinkState(const std::string& as_string);

struct SinkInfo {
  SinkInfo();
  ~SinkInfo();

  // Populates a SinkInfo object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, SinkInfo* out);

  // Creates a SinkInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<SinkInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this SinkInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Id of the sink. It is guaranteed to be unique during the browser session.
  int id;

  // Human readable name of the sink.
  std::string name;

  // State of the sink.
  SinkState state;


 private:
  DISALLOW_COPY_AND_ASSIGN(SinkInfo);
};

enum AuthenticationMethod {
  AUTHENTICATION_METHOD_NONE,
  AUTHENTICATION_METHOD_PBC,
  AUTHENTICATION_METHOD_PIN,
  AUTHENTICATION_METHOD_LAST = AUTHENTICATION_METHOD_PIN,
};


std::string ToString(AuthenticationMethod as_enum);
AuthenticationMethod ParseAuthenticationMethod(const std::string& as_string);

struct AuthenticationInfo {
  AuthenticationInfo();
  ~AuthenticationInfo();

  // Populates a AuthenticationInfo object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, AuthenticationInfo* out);

  // Creates a AuthenticationInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<AuthenticationInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this AuthenticationInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Authentication method.
  AuthenticationMethod method;

  // Authentication data (e.g. PIN value).
  scoped_ptr<std::string> data;


 private:
  DISALLOW_COPY_AND_ASSIGN(AuthenticationInfo);
};

struct StartSessionInfo {
  StartSessionInfo();
  ~StartSessionInfo();

  // Populates a StartSessionInfo object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, StartSessionInfo* out);

  // Creates a StartSessionInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<StartSessionInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this StartSessionInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The source audio track.
  struct AudioTrack {
    AudioTrack();
    ~AudioTrack();

    // Populates a AudioTrack object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, AudioTrack* out);

    // Returns a new base::DictionaryValue representing the serialized form of
    // this AudioTrack object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    base::DictionaryValue additional_properties;

   private:
    DISALLOW_COPY_AND_ASSIGN(AudioTrack);
  };

  // The source audio track.
  struct VideoTrack {
    VideoTrack();
    ~VideoTrack();

    // Populates a VideoTrack object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, VideoTrack* out);

    // Returns a new base::DictionaryValue representing the serialized form of
    // this VideoTrack object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    base::DictionaryValue additional_properties;

   private:
    DISALLOW_COPY_AND_ASSIGN(VideoTrack);
  };


  // Id of the sink to connect.
  int sink_id;

  // Authentication information.
  scoped_ptr<AuthenticationInfo> authentication_info;

  // The source audio track.
  scoped_ptr<AudioTrack> audio_track;

  // The source audio track.
  scoped_ptr<VideoTrack> video_track;


 private:
  DISALLOW_COPY_AND_ASSIGN(StartSessionInfo);
};


//
// Functions
//

namespace GetAvailableSinks {

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<SinkInfo> >& result);
}  // namespace Results

}  // namespace GetAvailableSinks

namespace RequestAuthentication {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Id of the sink
  int sink_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const AuthenticationInfo& result);
}  // namespace Results

}  // namespace RequestAuthentication

//
// Events
//

namespace OnSinksUpdated {

extern const char kEventName[];  // "displaySource.onSinksUpdated"

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<SinkInfo> >& sinks);
}  // namespace OnSinksUpdated

}  // namespace display_source
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_DISPLAY_SOURCE_H__
