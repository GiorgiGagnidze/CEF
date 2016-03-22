// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/audio.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_AUDIO_H__
#define EXTENSIONS_COMMON_API_AUDIO_H__

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
namespace audio {

//
// Types
//

struct OutputDeviceInfo {
  OutputDeviceInfo();
  ~OutputDeviceInfo();

  // Populates a OutputDeviceInfo object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, OutputDeviceInfo* out);

  // Creates a OutputDeviceInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<OutputDeviceInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this OutputDeviceInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The unique identifier of the audio output device.
  std::string id;

  // The user-friendly name (e.g. "Bose Amplifier").
  std::string name;

  // True if this is the current active device.
  bool is_active;

  // True if this is muted.
  bool is_muted;

  // The output volume ranging from 0.0 to 100.0.
  double volume;


 private:
  DISALLOW_COPY_AND_ASSIGN(OutputDeviceInfo);
};

struct InputDeviceInfo {
  InputDeviceInfo();
  ~InputDeviceInfo();

  // Populates a InputDeviceInfo object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, InputDeviceInfo* out);

  // Creates a InputDeviceInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<InputDeviceInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this InputDeviceInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The unique identifier of the audio input device.
  std::string id;

  // The user-friendly name (e.g. "USB Microphone").
  std::string name;

  // True if this is the current active device.
  bool is_active;

  // True if this is muted.
  bool is_muted;

  // The input gain ranging from 0.0 to 100.0.
  double gain;


 private:
  DISALLOW_COPY_AND_ASSIGN(InputDeviceInfo);
};

struct AudioDeviceInfo {
  AudioDeviceInfo();
  ~AudioDeviceInfo();

  // Populates a AudioDeviceInfo object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, AudioDeviceInfo* out);

  // Creates a AudioDeviceInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<AudioDeviceInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this AudioDeviceInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The unique identifier of the audio device.
  std::string id;

  // True for input device; false for output device.
  bool is_input;

  // Type of the device, including "INTERNAL_SPEAKER", "INTERNAL_MIC",
  // "HEADPHONE", "USB", "BLUETOOTH", "HDMI", "MIC", "KEYBOARD_MIC", "AOKR", and
  // "OTHER".
  std::string device_type;

  // The user-friendly name (e.g. "USB Microphone").
  std::string display_name;

  // Device name.
  std::string device_name;

  // True if this is the current active device.
  bool is_active;

  // True if this is muted.
  bool is_muted;

  // The sound level of the device, volume for output, gain for input.
  int level;

  // The stable/persisted device id string when available.
  scoped_ptr<std::string> stable_device_id;


 private:
  DISALLOW_COPY_AND_ASSIGN(AudioDeviceInfo);
};

struct DeviceProperties {
  DeviceProperties();
  ~DeviceProperties();

  // Populates a DeviceProperties object from a base::Value. Returns whether
  // |out| was successfully populated.
  static bool Populate(const base::Value& value, DeviceProperties* out);

  // Creates a DeviceProperties object from a base::Value, or NULL on failure.
  static scoped_ptr<DeviceProperties> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this DeviceProperties object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // True if this is muted.
  bool is_muted;

  // If this is an output device then this field indicates the output volume. If
  // this is an input device then this field is ignored.
  scoped_ptr<double> volume;

  // If this is an input device then this field indicates the input gain. If this
  // is an output device then this field is ignored.
  scoped_ptr<double> gain;


 private:
  DISALLOW_COPY_AND_ASSIGN(DeviceProperties);
};


//
// Functions
//

namespace GetInfo {

namespace Results {

scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<OutputDeviceInfo> >& output_info, const std::vector<linked_ptr<InputDeviceInfo> >& input_info);
}  // namespace Results

}  // namespace GetInfo

namespace SetActiveDevices {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::vector<std::string> ids;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetActiveDevices

namespace SetProperties {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  std::string id;

  DeviceProperties properties;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create();
}  // namespace Results

}  // namespace SetProperties

//
// Events
//

namespace OnDeviceChanged {

extern const char kEventName[];  // "audio.onDeviceChanged"

scoped_ptr<base::ListValue> Create();
}  // namespace OnDeviceChanged

namespace OnLevelChanged {

extern const char kEventName[];  // "audio.OnLevelChanged"

// id of the audio device.
// new sound level of device(volume for output, gain for input).
scoped_ptr<base::ListValue> Create(const std::string& id, int level);
}  // namespace OnLevelChanged

namespace OnMuteChanged {

extern const char kEventName[];  // "audio.OnMuteChanged"

// true indicating audio input; false indicating audio output.
// new value of mute state.
scoped_ptr<base::ListValue> Create(bool is_input, bool is_muted);
}  // namespace OnMuteChanged

namespace OnDevicesChanged {

extern const char kEventName[];  // "audio.OnDevicesChanged"

// List of all present audio devices after the change.
scoped_ptr<base::ListValue> Create(const std::vector<linked_ptr<AudioDeviceInfo> >& devices);
}  // namespace OnDevicesChanged

}  // namespace audio
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_AUDIO_H__
