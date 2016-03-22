// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/hid.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/hid.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace hid {
//
// Types
//

HidCollectionInfo::HidCollectionInfo()
: usage_page(0), usage(0) {}

HidCollectionInfo::~HidCollectionInfo() {}

// static
bool HidCollectionInfo::Populate(
    const base::Value& value, HidCollectionInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* usage_page_value = NULL;
  if (!dict->GetWithoutPathExpansion("usagePage", &usage_page_value)) {
    return false;
  }
  {
    if (!usage_page_value->GetAsInteger(&out->usage_page)) {
      return false;
    }
  }

  const base::Value* usage_value = NULL;
  if (!dict->GetWithoutPathExpansion("usage", &usage_value)) {
    return false;
  }
  {
    if (!usage_value->GetAsInteger(&out->usage)) {
      return false;
    }
  }

  const base::Value* report_ids_value = NULL;
  if (!dict->GetWithoutPathExpansion("reportIds", &report_ids_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!report_ids_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->report_ids)) {
        return false;
      }
    }
  }

  return true;
}

// static
scoped_ptr<HidCollectionInfo> HidCollectionInfo::FromValue(const base::Value& value) {
  scoped_ptr<HidCollectionInfo> out(new HidCollectionInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<HidCollectionInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> HidCollectionInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("usagePage", new base::FundamentalValue(this->usage_page));

  value->SetWithoutPathExpansion("usage", new base::FundamentalValue(this->usage));

  value->SetWithoutPathExpansion("reportIds", json_schema_compiler::util::CreateValueFromArray(this->report_ids).release());


  return value;
}


HidDeviceInfo::HidDeviceInfo()
: device_id(0), vendor_id(0), product_id(0), max_input_report_size(0), max_output_report_size(0), max_feature_report_size(0) {}

HidDeviceInfo::~HidDeviceInfo() {}

// static
bool HidDeviceInfo::Populate(
    const base::Value& value, HidDeviceInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* device_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("deviceId", &device_id_value)) {
    return false;
  }
  {
    if (!device_id_value->GetAsInteger(&out->device_id)) {
      return false;
    }
  }

  const base::Value* vendor_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("vendorId", &vendor_id_value)) {
    return false;
  }
  {
    if (!vendor_id_value->GetAsInteger(&out->vendor_id)) {
      return false;
    }
  }

  const base::Value* product_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("productId", &product_id_value)) {
    return false;
  }
  {
    if (!product_id_value->GetAsInteger(&out->product_id)) {
      return false;
    }
  }

  const base::Value* product_name_value = NULL;
  if (!dict->GetWithoutPathExpansion("productName", &product_name_value)) {
    return false;
  }
  {
    if (!product_name_value->GetAsString(&out->product_name)) {
      return false;
    }
  }

  const base::Value* serial_number_value = NULL;
  if (!dict->GetWithoutPathExpansion("serialNumber", &serial_number_value)) {
    return false;
  }
  {
    if (!serial_number_value->GetAsString(&out->serial_number)) {
      return false;
    }
  }

  const base::Value* collections_value = NULL;
  if (!dict->GetWithoutPathExpansion("collections", &collections_value)) {
    return false;
  }
  {
    const base::ListValue* list = NULL;
    if (!collections_value->GetAsList(&list)) {
      return false;
    }
    else {
      if (!json_schema_compiler::util::PopulateArrayFromList(*list, &out->collections)) {
        return false;
      }
    }
  }

  const base::Value* max_input_report_size_value = NULL;
  if (!dict->GetWithoutPathExpansion("maxInputReportSize", &max_input_report_size_value)) {
    return false;
  }
  {
    if (!max_input_report_size_value->GetAsInteger(&out->max_input_report_size)) {
      return false;
    }
  }

  const base::Value* max_output_report_size_value = NULL;
  if (!dict->GetWithoutPathExpansion("maxOutputReportSize", &max_output_report_size_value)) {
    return false;
  }
  {
    if (!max_output_report_size_value->GetAsInteger(&out->max_output_report_size)) {
      return false;
    }
  }

  const base::Value* max_feature_report_size_value = NULL;
  if (!dict->GetWithoutPathExpansion("maxFeatureReportSize", &max_feature_report_size_value)) {
    return false;
  }
  {
    if (!max_feature_report_size_value->GetAsInteger(&out->max_feature_report_size)) {
      return false;
    }
  }

  const base::Value* report_descriptor_value = NULL;
  if (!dict->GetWithoutPathExpansion("reportDescriptor", &report_descriptor_value)) {
    return false;
  }
  {
    const base::BinaryValue* binary_value = NULL;
    if (!report_descriptor_value->IsType(base::Value::TYPE_BINARY)) {
      return false;
    }
    else {
       binary_value =
         static_cast<const base::BinaryValue*>(report_descriptor_value);
      out->report_descriptor.assign(
          binary_value->GetBuffer(),
          binary_value->GetBuffer() + binary_value->GetSize());
    }
  }

  return true;
}

// static
scoped_ptr<HidDeviceInfo> HidDeviceInfo::FromValue(const base::Value& value) {
  scoped_ptr<HidDeviceInfo> out(new HidDeviceInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<HidDeviceInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> HidDeviceInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("deviceId", new base::FundamentalValue(this->device_id));

  value->SetWithoutPathExpansion("vendorId", new base::FundamentalValue(this->vendor_id));

  value->SetWithoutPathExpansion("productId", new base::FundamentalValue(this->product_id));

  value->SetWithoutPathExpansion("productName", new base::StringValue(this->product_name));

  value->SetWithoutPathExpansion("serialNumber", new base::StringValue(this->serial_number));

  value->SetWithoutPathExpansion("collections", json_schema_compiler::util::CreateValueFromArray(this->collections).release());

  value->SetWithoutPathExpansion("maxInputReportSize", new base::FundamentalValue(this->max_input_report_size));

  value->SetWithoutPathExpansion("maxOutputReportSize", new base::FundamentalValue(this->max_output_report_size));

  value->SetWithoutPathExpansion("maxFeatureReportSize", new base::FundamentalValue(this->max_feature_report_size));

  value->SetWithoutPathExpansion("reportDescriptor", base::BinaryValue::CreateWithCopiedBuffer(this->report_descriptor.data(), this->report_descriptor.size()));


  return value;
}


HidConnectInfo::HidConnectInfo()
: connection_id(0) {}

HidConnectInfo::~HidConnectInfo() {}

// static
bool HidConnectInfo::Populate(
    const base::Value& value, HidConnectInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* connection_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("connectionId", &connection_id_value)) {
    return false;
  }
  {
    if (!connection_id_value->GetAsInteger(&out->connection_id)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<HidConnectInfo> HidConnectInfo::FromValue(const base::Value& value) {
  scoped_ptr<HidConnectInfo> out(new HidConnectInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<HidConnectInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> HidConnectInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("connectionId", new base::FundamentalValue(this->connection_id));


  return value;
}


DeviceFilter::DeviceFilter()
 {}

DeviceFilter::~DeviceFilter() {}

// static
bool DeviceFilter::Populate(
    const base::Value& value, DeviceFilter* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* vendor_id_value = NULL;
  if (dict->GetWithoutPathExpansion("vendorId", &vendor_id_value)) {
    {
      int temp;
      if (!vendor_id_value->GetAsInteger(&temp)) {
        out->vendor_id.reset();
        return false;
      }
      else
        out->vendor_id.reset(new int(temp));
    }
  }

  const base::Value* product_id_value = NULL;
  if (dict->GetWithoutPathExpansion("productId", &product_id_value)) {
    {
      int temp;
      if (!product_id_value->GetAsInteger(&temp)) {
        out->product_id.reset();
        return false;
      }
      else
        out->product_id.reset(new int(temp));
    }
  }

  const base::Value* usage_page_value = NULL;
  if (dict->GetWithoutPathExpansion("usagePage", &usage_page_value)) {
    {
      int temp;
      if (!usage_page_value->GetAsInteger(&temp)) {
        out->usage_page.reset();
        return false;
      }
      else
        out->usage_page.reset(new int(temp));
    }
  }

  const base::Value* usage_value = NULL;
  if (dict->GetWithoutPathExpansion("usage", &usage_value)) {
    {
      int temp;
      if (!usage_value->GetAsInteger(&temp)) {
        out->usage.reset();
        return false;
      }
      else
        out->usage.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<DeviceFilter> DeviceFilter::FromValue(const base::Value& value) {
  scoped_ptr<DeviceFilter> out(new DeviceFilter());
  if (!Populate(value, out.get()))
    return scoped_ptr<DeviceFilter>();
  return out;
}

scoped_ptr<base::DictionaryValue> DeviceFilter::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->vendor_id.get()) {
    value->SetWithoutPathExpansion("vendorId", new base::FundamentalValue(*this->vendor_id));

  }
  if (this->product_id.get()) {
    value->SetWithoutPathExpansion("productId", new base::FundamentalValue(*this->product_id));

  }
  if (this->usage_page.get()) {
    value->SetWithoutPathExpansion("usagePage", new base::FundamentalValue(*this->usage_page));

  }
  if (this->usage.get()) {
    value->SetWithoutPathExpansion("usage", new base::FundamentalValue(*this->usage));

  }

  return value;
}


GetDevicesOptions::GetDevicesOptions()
 {}

GetDevicesOptions::~GetDevicesOptions() {}

// static
bool GetDevicesOptions::Populate(
    const base::Value& value, GetDevicesOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* vendor_id_value = NULL;
  if (dict->GetWithoutPathExpansion("vendorId", &vendor_id_value)) {
    {
      int temp;
      if (!vendor_id_value->GetAsInteger(&temp)) {
        out->vendor_id.reset();
        return false;
      }
      else
        out->vendor_id.reset(new int(temp));
    }
  }

  const base::Value* product_id_value = NULL;
  if (dict->GetWithoutPathExpansion("productId", &product_id_value)) {
    {
      int temp;
      if (!product_id_value->GetAsInteger(&temp)) {
        out->product_id.reset();
        return false;
      }
      else
        out->product_id.reset(new int(temp));
    }
  }

  const base::Value* filters_value = NULL;
  if (dict->GetWithoutPathExpansion("filters", &filters_value)) {
    {
      const base::ListValue* list = NULL;
      if (!filters_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->filters)) {
          return false;
        }
      }
    }
  }

  return true;
}

// static
scoped_ptr<GetDevicesOptions> GetDevicesOptions::FromValue(const base::Value& value) {
  scoped_ptr<GetDevicesOptions> out(new GetDevicesOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<GetDevicesOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> GetDevicesOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->vendor_id.get()) {
    value->SetWithoutPathExpansion("vendorId", new base::FundamentalValue(*this->vendor_id));

  }
  if (this->product_id.get()) {
    value->SetWithoutPathExpansion("productId", new base::FundamentalValue(*this->product_id));

  }
  if (this->filters.get()) {
    value->SetWithoutPathExpansion("filters", json_schema_compiler::util::CreateValueFromOptionalArray(this->filters).release());

  }

  return value;
}


DevicePromptOptions::DevicePromptOptions()
 {}

DevicePromptOptions::~DevicePromptOptions() {}

// static
bool DevicePromptOptions::Populate(
    const base::Value& value, DevicePromptOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* multiple_value = NULL;
  if (dict->GetWithoutPathExpansion("multiple", &multiple_value)) {
    {
      bool temp;
      if (!multiple_value->GetAsBoolean(&temp)) {
        out->multiple.reset();
        return false;
      }
      else
        out->multiple.reset(new bool(temp));
    }
  }

  const base::Value* filters_value = NULL;
  if (dict->GetWithoutPathExpansion("filters", &filters_value)) {
    {
      const base::ListValue* list = NULL;
      if (!filters_value->GetAsList(&list)) {
        return false;
      }
      else {
        if (!json_schema_compiler::util::PopulateOptionalArrayFromList(*list, &out->filters)) {
          return false;
        }
      }
    }
  }

  return true;
}

// static
scoped_ptr<DevicePromptOptions> DevicePromptOptions::FromValue(const base::Value& value) {
  scoped_ptr<DevicePromptOptions> out(new DevicePromptOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<DevicePromptOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> DevicePromptOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->multiple.get()) {
    value->SetWithoutPathExpansion("multiple", new base::FundamentalValue(*this->multiple));

  }
  if (this->filters.get()) {
    value->SetWithoutPathExpansion("filters", json_schema_compiler::util::CreateValueFromOptionalArray(this->filters).release());

  }

  return value;
}



//
// Functions
//

namespace GetDevices {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* options_value = NULL;
  if (args.Get(0, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!GetDevicesOptions::Populate(*dictionary, &params->options)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<HidDeviceInfo> >& devices) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(devices).release());

  return create_results;
}
}  // namespace GetDevices

namespace GetUserSelectedDevices {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() > 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* options_value = NULL;
  if (args.Get(0, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      else {
        scoped_ptr<DevicePromptOptions> temp(new DevicePromptOptions());
        if (!DevicePromptOptions::Populate(*dictionary, temp.get())) {
          return scoped_ptr<Params>();
        }
        else
          params->options = std::move(temp);
      }
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<HidDeviceInfo> >& devices) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(devices).release());

  return create_results;
}
}  // namespace GetUserSelectedDevices

namespace Connect {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* device_id_value = NULL;
  if (args.Get(0, &device_id_value) &&
      !device_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!device_id_value->GetAsInteger(&params->device_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const HidConnectInfo& connection) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((connection).ToValue().release());

  return create_results;
}
}  // namespace Connect

namespace Disconnect {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* connection_id_value = NULL;
  if (args.Get(0, &connection_id_value) &&
      !connection_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!connection_id_value->GetAsInteger(&params->connection_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace Disconnect

namespace Receive {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 1) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* connection_id_value = NULL;
  if (args.Get(0, &connection_id_value) &&
      !connection_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!connection_id_value->GetAsInteger(&params->connection_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(int report_id, const std::vector<char>& data) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(report_id));

  create_results->Append(base::BinaryValue::CreateWithCopiedBuffer(data.data(), data.size()));

  return create_results;
}
}  // namespace Receive

namespace Send {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 3) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* connection_id_value = NULL;
  if (args.Get(0, &connection_id_value) &&
      !connection_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!connection_id_value->GetAsInteger(&params->connection_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* report_id_value = NULL;
  if (args.Get(1, &report_id_value) &&
      !report_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!report_id_value->GetAsInteger(&params->report_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* data_value = NULL;
  if (args.Get(2, &data_value) &&
      !data_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::BinaryValue* binary_value = NULL;
      if (!data_value->IsType(base::Value::TYPE_BINARY)) {
        return scoped_ptr<Params>();
      }
      else {
         binary_value =
           static_cast<const base::BinaryValue*>(data_value);
        params->data.assign(
            binary_value->GetBuffer(),
            binary_value->GetBuffer() + binary_value->GetSize());
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace Send

namespace ReceiveFeatureReport {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* connection_id_value = NULL;
  if (args.Get(0, &connection_id_value) &&
      !connection_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!connection_id_value->GetAsInteger(&params->connection_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* report_id_value = NULL;
  if (args.Get(1, &report_id_value) &&
      !report_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!report_id_value->GetAsInteger(&params->report_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const std::vector<char>& data) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(base::BinaryValue::CreateWithCopiedBuffer(data.data(), data.size()));

  return create_results;
}
}  // namespace ReceiveFeatureReport

namespace SendFeatureReport {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() != 3) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* connection_id_value = NULL;
  if (args.Get(0, &connection_id_value) &&
      !connection_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!connection_id_value->GetAsInteger(&params->connection_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* report_id_value = NULL;
  if (args.Get(1, &report_id_value) &&
      !report_id_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!report_id_value->GetAsInteger(&params->report_id)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* data_value = NULL;
  if (args.Get(2, &data_value) &&
      !data_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::BinaryValue* binary_value = NULL;
      if (!data_value->IsType(base::Value::TYPE_BINARY)) {
        return scoped_ptr<Params>();
      }
      else {
         binary_value =
           static_cast<const base::BinaryValue*>(data_value);
        params->data.assign(
            binary_value->GetBuffer(),
            binary_value->GetBuffer() + binary_value->GetSize());
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create() {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  return create_results;
}
}  // namespace SendFeatureReport

//
// Events
//

namespace OnDeviceAdded {

const char kEventName[] = "hid.onDeviceAdded";

scoped_ptr<base::ListValue> Create(const HidDeviceInfo& device) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((device).ToValue().release());

  return create_results;
}

}  // namespace OnDeviceAdded

namespace OnDeviceRemoved {

const char kEventName[] = "hid.onDeviceRemoved";

scoped_ptr<base::ListValue> Create(int device_id) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(device_id));

  return create_results;
}

}  // namespace OnDeviceRemoved

}  // namespace hid
}  // namespace api
}  // namespace extensions

