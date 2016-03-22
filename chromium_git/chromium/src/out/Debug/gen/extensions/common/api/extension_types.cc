// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/extension_types.json
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/extension_types.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace extension_types {
//
// Types
//

std::string ToString(ImageFormat enum_param) {
  switch (enum_param) {
    case IMAGE_FORMAT_JPEG:
      return "jpeg";
    case IMAGE_FORMAT_PNG:
      return "png";
    case IMAGE_FORMAT_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ImageFormat ParseImageFormat(const std::string& enum_string) {
  if (enum_string == "jpeg")
    return IMAGE_FORMAT_JPEG;
  if (enum_string == "png")
    return IMAGE_FORMAT_PNG;
  return IMAGE_FORMAT_NONE;
}


ImageDetails::ImageDetails()
: format(IMAGE_FORMAT_NONE) {}

ImageDetails::~ImageDetails() {}

// static
bool ImageDetails::Populate(
    const base::Value& value, ImageDetails* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->format = IMAGE_FORMAT_NONE;
  const base::Value* format_value = NULL;
  if (dict->GetWithoutPathExpansion("format", &format_value)) {
    {
      std::string image_format_as_string;
      if (!format_value->GetAsString(&image_format_as_string)) {
        return false;
      }
      out->format = ParseImageFormat(image_format_as_string);
      if (out->format == IMAGE_FORMAT_NONE) {
        return false;
      }
    }
    } else {
    out->format = IMAGE_FORMAT_NONE;
  }

  const base::Value* quality_value = NULL;
  if (dict->GetWithoutPathExpansion("quality", &quality_value)) {
    {
      int temp;
      if (!quality_value->GetAsInteger(&temp)) {
        out->quality.reset();
        return false;
      }
      else
        out->quality.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ImageDetails> ImageDetails::FromValue(const base::Value& value) {
  scoped_ptr<ImageDetails> out(new ImageDetails());
  if (!Populate(value, out.get()))
    return scoped_ptr<ImageDetails>();
  return out;
}

scoped_ptr<base::DictionaryValue> ImageDetails::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->format != IMAGE_FORMAT_NONE) {
    value->SetWithoutPathExpansion("format", new base::StringValue(extension_types::ToString(this->format)));

  }
  if (this->quality.get()) {
    value->SetWithoutPathExpansion("quality", new base::FundamentalValue(*this->quality));

  }

  return value;
}


std::string ToString(RunAt enum_param) {
  switch (enum_param) {
    case RUN_AT_DOCUMENT_START:
      return "document_start";
    case RUN_AT_DOCUMENT_END:
      return "document_end";
    case RUN_AT_DOCUMENT_IDLE:
      return "document_idle";
    case RUN_AT_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

RunAt ParseRunAt(const std::string& enum_string) {
  if (enum_string == "document_start")
    return RUN_AT_DOCUMENT_START;
  if (enum_string == "document_end")
    return RUN_AT_DOCUMENT_END;
  if (enum_string == "document_idle")
    return RUN_AT_DOCUMENT_IDLE;
  return RUN_AT_NONE;
}


InjectDetails::InjectDetails()
: run_at(RUN_AT_NONE) {}

InjectDetails::~InjectDetails() {}

// static
bool InjectDetails::Populate(
    const base::Value& value, InjectDetails* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->run_at = RUN_AT_NONE;
  const base::Value* code_value = NULL;
  if (dict->GetWithoutPathExpansion("code", &code_value)) {
    {
      std::string temp;
      if (!code_value->GetAsString(&temp)) {
        out->code.reset();
        return false;
      }
      else
        out->code.reset(new std::string(temp));
    }
  }

  const base::Value* file_value = NULL;
  if (dict->GetWithoutPathExpansion("file", &file_value)) {
    {
      std::string temp;
      if (!file_value->GetAsString(&temp)) {
        out->file.reset();
        return false;
      }
      else
        out->file.reset(new std::string(temp));
    }
  }

  const base::Value* all_frames_value = NULL;
  if (dict->GetWithoutPathExpansion("allFrames", &all_frames_value)) {
    {
      bool temp;
      if (!all_frames_value->GetAsBoolean(&temp)) {
        out->all_frames.reset();
        return false;
      }
      else
        out->all_frames.reset(new bool(temp));
    }
  }

  const base::Value* match_about_blank_value = NULL;
  if (dict->GetWithoutPathExpansion("matchAboutBlank", &match_about_blank_value)) {
    {
      bool temp;
      if (!match_about_blank_value->GetAsBoolean(&temp)) {
        out->match_about_blank.reset();
        return false;
      }
      else
        out->match_about_blank.reset(new bool(temp));
    }
  }

  const base::Value* run_at_value = NULL;
  if (dict->GetWithoutPathExpansion("runAt", &run_at_value)) {
    {
      std::string run_at_as_string;
      if (!run_at_value->GetAsString(&run_at_as_string)) {
        return false;
      }
      out->run_at = ParseRunAt(run_at_as_string);
      if (out->run_at == RUN_AT_NONE) {
        return false;
      }
    }
    } else {
    out->run_at = RUN_AT_NONE;
  }

  return true;
}

// static
scoped_ptr<InjectDetails> InjectDetails::FromValue(const base::Value& value) {
  scoped_ptr<InjectDetails> out(new InjectDetails());
  if (!Populate(value, out.get()))
    return scoped_ptr<InjectDetails>();
  return out;
}

scoped_ptr<base::DictionaryValue> InjectDetails::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->code.get()) {
    value->SetWithoutPathExpansion("code", new base::StringValue(*this->code));

  }
  if (this->file.get()) {
    value->SetWithoutPathExpansion("file", new base::StringValue(*this->file));

  }
  if (this->all_frames.get()) {
    value->SetWithoutPathExpansion("allFrames", new base::FundamentalValue(*this->all_frames));

  }
  if (this->match_about_blank.get()) {
    value->SetWithoutPathExpansion("matchAboutBlank", new base::FundamentalValue(*this->match_about_blank));

  }
  if (this->run_at != RUN_AT_NONE) {
    value->SetWithoutPathExpansion("runAt", new base::StringValue(extension_types::ToString(this->run_at)));

  }

  return value;
}



}  // namespace extension_types
}  // namespace api
}  // namespace extensions

