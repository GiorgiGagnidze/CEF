// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/printer_provider_internal.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/printer_provider_internal.h"
#include <set>
#include <utility>
#include "extensions/common/api/printer_provider.h"
#include "extensions/common/api/printer_provider.h"


using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace printer_provider_internal {
//
// Types
//

std::string ToString(PrintError enum_param) {
  switch (enum_param) {
    case PRINT_ERROR_OK:
      return "OK";
    case PRINT_ERROR_FAILED:
      return "FAILED";
    case PRINT_ERROR_INVALID_TICKET:
      return "INVALID_TICKET";
    case PRINT_ERROR_INVALID_DATA:
      return "INVALID_DATA";
    case PRINT_ERROR_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

PrintError ParsePrintError(const std::string& enum_string) {
  if (enum_string == "OK")
    return PRINT_ERROR_OK;
  if (enum_string == "FAILED")
    return PRINT_ERROR_FAILED;
  if (enum_string == "INVALID_TICKET")
    return PRINT_ERROR_INVALID_TICKET;
  if (enum_string == "INVALID_DATA")
    return PRINT_ERROR_INVALID_DATA;
  return PRINT_ERROR_NONE;
}


BlobInfo::BlobInfo()
: size(0) {}

BlobInfo::~BlobInfo() {}

// static
bool BlobInfo::Populate(
    const base::Value& value, BlobInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* blob_uuid_value = NULL;
  if (!dict->GetWithoutPathExpansion("blobUuid", &blob_uuid_value)) {
    return false;
  }
  {
    if (!blob_uuid_value->GetAsString(&out->blob_uuid)) {
      return false;
    }
  }

  const base::Value* type_value = NULL;
  if (!dict->GetWithoutPathExpansion("type", &type_value)) {
    return false;
  }
  {
    if (!type_value->GetAsString(&out->type)) {
      return false;
    }
  }

  const base::Value* size_value = NULL;
  if (!dict->GetWithoutPathExpansion("size", &size_value)) {
    return false;
  }
  {
    if (!size_value->GetAsInteger(&out->size)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<BlobInfo> BlobInfo::FromValue(const base::Value& value) {
  scoped_ptr<BlobInfo> out(new BlobInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<BlobInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> BlobInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("blobUuid", new base::StringValue(this->blob_uuid));

  value->SetWithoutPathExpansion("type", new base::StringValue(this->type));

  value->SetWithoutPathExpansion("size", new base::FundamentalValue(this->size));


  return value;
}



//
// Functions
//

namespace ReportPrinters {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* request_id_value = NULL;
  if (args.Get(0, &request_id_value) &&
      !request_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!request_id_value->GetAsInteger(&params->request_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* printers_value = NULL;
  if (args.Get(1, &printers_value) &&
      !printers_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::ListValue* list = NULL;
      if (!printers_value->GetAsList(&list)) {
        return scoped_ptr<Params>();
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &params->printers)) {
          return scoped_ptr<Params>();
        }
      }
    }
  }

  return params;
}


}  // namespace ReportPrinters

namespace ReportUsbPrinterInfo {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* request_id_value = NULL;
  if (args.Get(0, &request_id_value) &&
      !request_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!request_id_value->GetAsInteger(&params->request_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* printer_info_value = NULL;
  if (args.Get(1, &printer_info_value) &&
      !printer_info_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!printer_info_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      else {
        scoped_ptr<extensions::api::printer_provider::PrinterInfo> temp(new extensions::api::printer_provider::PrinterInfo());
        if (!extensions::api::printer_provider::PrinterInfo::Populate(*dictionary, temp.get())) {
          return scoped_ptr<Params>();
        }
        else
          params->printer_info = std::move(temp);
      }
    }
  }

  return params;
}


}  // namespace ReportUsbPrinterInfo

namespace ReportPrinterCapability {

Params::Capability::Capability()
 {}

Params::Capability::~Capability() {}

// static
bool Params::Capability::Populate(
    const base::Value& value, Capability* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->additional_properties.MergeDictionary(dict);
  return true;
}


Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* request_id_value = NULL;
  if (args.Get(0, &request_id_value) &&
      !request_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!request_id_value->GetAsInteger(&params->request_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* capability_value = NULL;
  if (args.Get(1, &capability_value) &&
      !capability_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!capability_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      else {
        scoped_ptr<Capability> temp(new Capability());
        if (!Capability::Populate(*dictionary, temp.get())) {
          return scoped_ptr<Params>();
        }
        else
          params->capability = std::move(temp);
      }
    }
  }

  return params;
}


}  // namespace ReportPrinterCapability

namespace ReportPrintResult {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());
  params->error = PRINT_ERROR_NONE;

  const base::Value* request_id_value = NULL;
  if (args.Get(0, &request_id_value) &&
      !request_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!request_id_value->GetAsInteger(&params->request_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* error_value = NULL;
  if (args.Get(1, &error_value) &&
      !error_value->IsType(base::Value::TYPE_NULL)) {
    {
      std::string print_error_as_string;
      if (!error_value->GetAsString(&print_error_as_string)) {
        return scoped_ptr<Params>();
      }
      params->error = ParsePrintError(print_error_as_string);
      if (params->error == PRINT_ERROR_NONE) {
        return scoped_ptr<Params>();
      }
    }
  }

  return params;
}


}  // namespace ReportPrintResult

namespace GetPrintData {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* request_id_value = NULL;
  if (args.Get(0, &request_id_value) &&
      !request_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!request_id_value->GetAsInteger(&params->request_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const BlobInfo& blob_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((blob_info).ToValue().release());

  return create_results;
}
}  // namespace GetPrintData

}  // namespace printer_provider_internal
}  // namespace api
}  // namespace extensions

