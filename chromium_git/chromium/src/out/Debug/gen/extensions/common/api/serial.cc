// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/serial.idl
// DO NOT EDIT.

#include "tools/json_schema_compiler/util.h"
#include "base/logging.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/utf_string_conversions.h"
#include "extensions/common/api/serial.h"
#include <set>
#include <utility>

using base::UTF8ToUTF16;

namespace extensions {
namespace api {
namespace serial {
//
// Types
//

DeviceInfo::DeviceInfo()
 {}

DeviceInfo::~DeviceInfo() {}

// static
bool DeviceInfo::Populate(
    const base::Value& value, DeviceInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* path_value = NULL;
  if (!dict->GetWithoutPathExpansion("path", &path_value)) {
    return false;
  }
  {
    if (!path_value->GetAsString(&out->path)) {
      return false;
    }
  }

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

  const base::Value* display_name_value = NULL;
  if (dict->GetWithoutPathExpansion("displayName", &display_name_value)) {
    {
      std::string temp;
      if (!display_name_value->GetAsString(&temp)) {
        out->display_name.reset();
        return false;
      }
      else
        out->display_name.reset(new std::string(temp));
    }
  }

  return true;
}

// static
scoped_ptr<DeviceInfo> DeviceInfo::FromValue(const base::Value& value) {
  scoped_ptr<DeviceInfo> out(new DeviceInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<DeviceInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> DeviceInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("path", new base::StringValue(this->path));

  if (this->vendor_id.get()) {
    value->SetWithoutPathExpansion("vendorId", new base::FundamentalValue(*this->vendor_id));

  }
  if (this->product_id.get()) {
    value->SetWithoutPathExpansion("productId", new base::FundamentalValue(*this->product_id));

  }
  if (this->display_name.get()) {
    value->SetWithoutPathExpansion("displayName", new base::StringValue(*this->display_name));

  }

  return value;
}


std::string ToString(DataBits enum_param) {
  switch (enum_param) {
    case DATA_BITS_SEVEN:
      return "seven";
    case DATA_BITS_EIGHT:
      return "eight";
    case DATA_BITS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

DataBits ParseDataBits(const std::string& enum_string) {
  if (enum_string == "seven")
    return DATA_BITS_SEVEN;
  if (enum_string == "eight")
    return DATA_BITS_EIGHT;
  return DATA_BITS_NONE;
}


std::string ToString(ParityBit enum_param) {
  switch (enum_param) {
    case PARITY_BIT_NO:
      return "no";
    case PARITY_BIT_ODD:
      return "odd";
    case PARITY_BIT_EVEN:
      return "even";
    case PARITY_BIT_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ParityBit ParseParityBit(const std::string& enum_string) {
  if (enum_string == "no")
    return PARITY_BIT_NO;
  if (enum_string == "odd")
    return PARITY_BIT_ODD;
  if (enum_string == "even")
    return PARITY_BIT_EVEN;
  return PARITY_BIT_NONE;
}


std::string ToString(StopBits enum_param) {
  switch (enum_param) {
    case STOP_BITS_ONE:
      return "one";
    case STOP_BITS_TWO:
      return "two";
    case STOP_BITS_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

StopBits ParseStopBits(const std::string& enum_string) {
  if (enum_string == "one")
    return STOP_BITS_ONE;
  if (enum_string == "two")
    return STOP_BITS_TWO;
  return STOP_BITS_NONE;
}


ConnectionOptions::ConnectionOptions()
: data_bits(DATA_BITS_NONE), parity_bit(PARITY_BIT_NONE), stop_bits(STOP_BITS_NONE) {}

ConnectionOptions::~ConnectionOptions() {}

// static
bool ConnectionOptions::Populate(
    const base::Value& value, ConnectionOptions* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->data_bits = DATA_BITS_NONE;
  out->parity_bit = PARITY_BIT_NONE;
  out->stop_bits = STOP_BITS_NONE;
  const base::Value* persistent_value = NULL;
  if (dict->GetWithoutPathExpansion("persistent", &persistent_value)) {
    {
      bool temp;
      if (!persistent_value->GetAsBoolean(&temp)) {
        out->persistent.reset();
        return false;
      }
      else
        out->persistent.reset(new bool(temp));
    }
  }

  const base::Value* name_value = NULL;
  if (dict->GetWithoutPathExpansion("name", &name_value)) {
    {
      std::string temp;
      if (!name_value->GetAsString(&temp)) {
        out->name.reset();
        return false;
      }
      else
        out->name.reset(new std::string(temp));
    }
  }

  const base::Value* buffer_size_value = NULL;
  if (dict->GetWithoutPathExpansion("bufferSize", &buffer_size_value)) {
    {
      int temp;
      if (!buffer_size_value->GetAsInteger(&temp)) {
        out->buffer_size.reset();
        return false;
      }
      else
        out->buffer_size.reset(new int(temp));
    }
  }

  const base::Value* bitrate_value = NULL;
  if (dict->GetWithoutPathExpansion("bitrate", &bitrate_value)) {
    {
      int temp;
      if (!bitrate_value->GetAsInteger(&temp)) {
        out->bitrate.reset();
        return false;
      }
      else
        out->bitrate.reset(new int(temp));
    }
  }

  const base::Value* data_bits_value = NULL;
  if (dict->GetWithoutPathExpansion("dataBits", &data_bits_value)) {
    {
      std::string data_bits_as_string;
      if (!data_bits_value->GetAsString(&data_bits_as_string)) {
        return false;
      }
      out->data_bits = ParseDataBits(data_bits_as_string);
      if (out->data_bits == DATA_BITS_NONE) {
        return false;
      }
    }
    } else {
    out->data_bits = DATA_BITS_NONE;
  }

  const base::Value* parity_bit_value = NULL;
  if (dict->GetWithoutPathExpansion("parityBit", &parity_bit_value)) {
    {
      std::string parity_bit_as_string;
      if (!parity_bit_value->GetAsString(&parity_bit_as_string)) {
        return false;
      }
      out->parity_bit = ParseParityBit(parity_bit_as_string);
      if (out->parity_bit == PARITY_BIT_NONE) {
        return false;
      }
    }
    } else {
    out->parity_bit = PARITY_BIT_NONE;
  }

  const base::Value* stop_bits_value = NULL;
  if (dict->GetWithoutPathExpansion("stopBits", &stop_bits_value)) {
    {
      std::string stop_bits_as_string;
      if (!stop_bits_value->GetAsString(&stop_bits_as_string)) {
        return false;
      }
      out->stop_bits = ParseStopBits(stop_bits_as_string);
      if (out->stop_bits == STOP_BITS_NONE) {
        return false;
      }
    }
    } else {
    out->stop_bits = STOP_BITS_NONE;
  }

  const base::Value* cts_flow_control_value = NULL;
  if (dict->GetWithoutPathExpansion("ctsFlowControl", &cts_flow_control_value)) {
    {
      bool temp;
      if (!cts_flow_control_value->GetAsBoolean(&temp)) {
        out->cts_flow_control.reset();
        return false;
      }
      else
        out->cts_flow_control.reset(new bool(temp));
    }
  }

  const base::Value* receive_timeout_value = NULL;
  if (dict->GetWithoutPathExpansion("receiveTimeout", &receive_timeout_value)) {
    {
      int temp;
      if (!receive_timeout_value->GetAsInteger(&temp)) {
        out->receive_timeout.reset();
        return false;
      }
      else
        out->receive_timeout.reset(new int(temp));
    }
  }

  const base::Value* send_timeout_value = NULL;
  if (dict->GetWithoutPathExpansion("sendTimeout", &send_timeout_value)) {
    {
      int temp;
      if (!send_timeout_value->GetAsInteger(&temp)) {
        out->send_timeout.reset();
        return false;
      }
      else
        out->send_timeout.reset(new int(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ConnectionOptions> ConnectionOptions::FromValue(const base::Value& value) {
  scoped_ptr<ConnectionOptions> out(new ConnectionOptions());
  if (!Populate(value, out.get()))
    return scoped_ptr<ConnectionOptions>();
  return out;
}

scoped_ptr<base::DictionaryValue> ConnectionOptions::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->persistent.get()) {
    value->SetWithoutPathExpansion("persistent", new base::FundamentalValue(*this->persistent));

  }
  if (this->name.get()) {
    value->SetWithoutPathExpansion("name", new base::StringValue(*this->name));

  }
  if (this->buffer_size.get()) {
    value->SetWithoutPathExpansion("bufferSize", new base::FundamentalValue(*this->buffer_size));

  }
  if (this->bitrate.get()) {
    value->SetWithoutPathExpansion("bitrate", new base::FundamentalValue(*this->bitrate));

  }
  if (this->data_bits != DATA_BITS_NONE) {
    value->SetWithoutPathExpansion("dataBits", new base::StringValue(serial::ToString(this->data_bits)));

  }
  if (this->parity_bit != PARITY_BIT_NONE) {
    value->SetWithoutPathExpansion("parityBit", new base::StringValue(serial::ToString(this->parity_bit)));

  }
  if (this->stop_bits != STOP_BITS_NONE) {
    value->SetWithoutPathExpansion("stopBits", new base::StringValue(serial::ToString(this->stop_bits)));

  }
  if (this->cts_flow_control.get()) {
    value->SetWithoutPathExpansion("ctsFlowControl", new base::FundamentalValue(*this->cts_flow_control));

  }
  if (this->receive_timeout.get()) {
    value->SetWithoutPathExpansion("receiveTimeout", new base::FundamentalValue(*this->receive_timeout));

  }
  if (this->send_timeout.get()) {
    value->SetWithoutPathExpansion("sendTimeout", new base::FundamentalValue(*this->send_timeout));

  }

  return value;
}


ConnectionInfo::ConnectionInfo()
: connection_id(0), paused(false), persistent(false), buffer_size(0), receive_timeout(0), send_timeout(0), data_bits(DATA_BITS_NONE), parity_bit(PARITY_BIT_NONE), stop_bits(STOP_BITS_NONE) {}

ConnectionInfo::~ConnectionInfo() {}

// static
bool ConnectionInfo::Populate(
    const base::Value& value, ConnectionInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->data_bits = DATA_BITS_NONE;
  out->parity_bit = PARITY_BIT_NONE;
  out->stop_bits = STOP_BITS_NONE;
  const base::Value* connection_id_value = NULL;
  if (!dict->GetWithoutPathExpansion("connectionId", &connection_id_value)) {
    return false;
  }
  {
    if (!connection_id_value->GetAsInteger(&out->connection_id)) {
      return false;
    }
  }

  const base::Value* paused_value = NULL;
  if (!dict->GetWithoutPathExpansion("paused", &paused_value)) {
    return false;
  }
  {
    if (!paused_value->GetAsBoolean(&out->paused)) {
      return false;
    }
  }

  const base::Value* persistent_value = NULL;
  if (!dict->GetWithoutPathExpansion("persistent", &persistent_value)) {
    return false;
  }
  {
    if (!persistent_value->GetAsBoolean(&out->persistent)) {
      return false;
    }
  }

  const base::Value* name_value = NULL;
  if (!dict->GetWithoutPathExpansion("name", &name_value)) {
    return false;
  }
  {
    if (!name_value->GetAsString(&out->name)) {
      return false;
    }
  }

  const base::Value* buffer_size_value = NULL;
  if (!dict->GetWithoutPathExpansion("bufferSize", &buffer_size_value)) {
    return false;
  }
  {
    if (!buffer_size_value->GetAsInteger(&out->buffer_size)) {
      return false;
    }
  }

  const base::Value* receive_timeout_value = NULL;
  if (!dict->GetWithoutPathExpansion("receiveTimeout", &receive_timeout_value)) {
    return false;
  }
  {
    if (!receive_timeout_value->GetAsInteger(&out->receive_timeout)) {
      return false;
    }
  }

  const base::Value* send_timeout_value = NULL;
  if (!dict->GetWithoutPathExpansion("sendTimeout", &send_timeout_value)) {
    return false;
  }
  {
    if (!send_timeout_value->GetAsInteger(&out->send_timeout)) {
      return false;
    }
  }

  const base::Value* bitrate_value = NULL;
  if (dict->GetWithoutPathExpansion("bitrate", &bitrate_value)) {
    {
      int temp;
      if (!bitrate_value->GetAsInteger(&temp)) {
        out->bitrate.reset();
        return false;
      }
      else
        out->bitrate.reset(new int(temp));
    }
  }

  const base::Value* data_bits_value = NULL;
  if (dict->GetWithoutPathExpansion("dataBits", &data_bits_value)) {
    {
      std::string data_bits_as_string;
      if (!data_bits_value->GetAsString(&data_bits_as_string)) {
        return false;
      }
      out->data_bits = ParseDataBits(data_bits_as_string);
      if (out->data_bits == DATA_BITS_NONE) {
        return false;
      }
    }
    } else {
    out->data_bits = DATA_BITS_NONE;
  }

  const base::Value* parity_bit_value = NULL;
  if (dict->GetWithoutPathExpansion("parityBit", &parity_bit_value)) {
    {
      std::string parity_bit_as_string;
      if (!parity_bit_value->GetAsString(&parity_bit_as_string)) {
        return false;
      }
      out->parity_bit = ParseParityBit(parity_bit_as_string);
      if (out->parity_bit == PARITY_BIT_NONE) {
        return false;
      }
    }
    } else {
    out->parity_bit = PARITY_BIT_NONE;
  }

  const base::Value* stop_bits_value = NULL;
  if (dict->GetWithoutPathExpansion("stopBits", &stop_bits_value)) {
    {
      std::string stop_bits_as_string;
      if (!stop_bits_value->GetAsString(&stop_bits_as_string)) {
        return false;
      }
      out->stop_bits = ParseStopBits(stop_bits_as_string);
      if (out->stop_bits == STOP_BITS_NONE) {
        return false;
      }
    }
    } else {
    out->stop_bits = STOP_BITS_NONE;
  }

  const base::Value* cts_flow_control_value = NULL;
  if (dict->GetWithoutPathExpansion("ctsFlowControl", &cts_flow_control_value)) {
    {
      bool temp;
      if (!cts_flow_control_value->GetAsBoolean(&temp)) {
        out->cts_flow_control.reset();
        return false;
      }
      else
        out->cts_flow_control.reset(new bool(temp));
    }
  }

  return true;
}

// static
scoped_ptr<ConnectionInfo> ConnectionInfo::FromValue(const base::Value& value) {
  scoped_ptr<ConnectionInfo> out(new ConnectionInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<ConnectionInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> ConnectionInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("connectionId", new base::FundamentalValue(this->connection_id));

  value->SetWithoutPathExpansion("paused", new base::FundamentalValue(this->paused));

  value->SetWithoutPathExpansion("persistent", new base::FundamentalValue(this->persistent));

  value->SetWithoutPathExpansion("name", new base::StringValue(this->name));

  value->SetWithoutPathExpansion("bufferSize", new base::FundamentalValue(this->buffer_size));

  value->SetWithoutPathExpansion("receiveTimeout", new base::FundamentalValue(this->receive_timeout));

  value->SetWithoutPathExpansion("sendTimeout", new base::FundamentalValue(this->send_timeout));

  if (this->bitrate.get()) {
    value->SetWithoutPathExpansion("bitrate", new base::FundamentalValue(*this->bitrate));

  }
  if (this->data_bits != DATA_BITS_NONE) {
    value->SetWithoutPathExpansion("dataBits", new base::StringValue(serial::ToString(this->data_bits)));

  }
  if (this->parity_bit != PARITY_BIT_NONE) {
    value->SetWithoutPathExpansion("parityBit", new base::StringValue(serial::ToString(this->parity_bit)));

  }
  if (this->stop_bits != STOP_BITS_NONE) {
    value->SetWithoutPathExpansion("stopBits", new base::StringValue(serial::ToString(this->stop_bits)));

  }
  if (this->cts_flow_control.get()) {
    value->SetWithoutPathExpansion("ctsFlowControl", new base::FundamentalValue(*this->cts_flow_control));

  }

  return value;
}


std::string ToString(SendError enum_param) {
  switch (enum_param) {
    case SEND_ERROR_DISCONNECTED:
      return "disconnected";
    case SEND_ERROR_PENDING:
      return "pending";
    case SEND_ERROR_TIMEOUT:
      return "timeout";
    case SEND_ERROR_SYSTEM_ERROR:
      return "system_error";
    case SEND_ERROR_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

SendError ParseSendError(const std::string& enum_string) {
  if (enum_string == "disconnected")
    return SEND_ERROR_DISCONNECTED;
  if (enum_string == "pending")
    return SEND_ERROR_PENDING;
  if (enum_string == "timeout")
    return SEND_ERROR_TIMEOUT;
  if (enum_string == "system_error")
    return SEND_ERROR_SYSTEM_ERROR;
  return SEND_ERROR_NONE;
}


SendInfo::SendInfo()
: bytes_sent(0), error(SEND_ERROR_NONE) {}

SendInfo::~SendInfo() {}

// static
bool SendInfo::Populate(
    const base::Value& value, SendInfo* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  out->error = SEND_ERROR_NONE;
  const base::Value* bytes_sent_value = NULL;
  if (!dict->GetWithoutPathExpansion("bytesSent", &bytes_sent_value)) {
    return false;
  }
  {
    if (!bytes_sent_value->GetAsInteger(&out->bytes_sent)) {
      return false;
    }
  }

  const base::Value* error_value = NULL;
  if (dict->GetWithoutPathExpansion("error", &error_value)) {
    {
      std::string send_error_as_string;
      if (!error_value->GetAsString(&send_error_as_string)) {
        return false;
      }
      out->error = ParseSendError(send_error_as_string);
      if (out->error == SEND_ERROR_NONE) {
        return false;
      }
    }
    } else {
    out->error = SEND_ERROR_NONE;
  }

  return true;
}

// static
scoped_ptr<SendInfo> SendInfo::FromValue(const base::Value& value) {
  scoped_ptr<SendInfo> out(new SendInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<SendInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> SendInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("bytesSent", new base::FundamentalValue(this->bytes_sent));

  if (this->error != SEND_ERROR_NONE) {
    value->SetWithoutPathExpansion("error", new base::StringValue(serial::ToString(this->error)));

  }

  return value;
}


HostControlSignals::HostControlSignals()
 {}

HostControlSignals::~HostControlSignals() {}

// static
bool HostControlSignals::Populate(
    const base::Value& value, HostControlSignals* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* dtr_value = NULL;
  if (dict->GetWithoutPathExpansion("dtr", &dtr_value)) {
    {
      bool temp;
      if (!dtr_value->GetAsBoolean(&temp)) {
        out->dtr.reset();
        return false;
      }
      else
        out->dtr.reset(new bool(temp));
    }
  }

  const base::Value* rts_value = NULL;
  if (dict->GetWithoutPathExpansion("rts", &rts_value)) {
    {
      bool temp;
      if (!rts_value->GetAsBoolean(&temp)) {
        out->rts.reset();
        return false;
      }
      else
        out->rts.reset(new bool(temp));
    }
  }

  return true;
}

// static
scoped_ptr<HostControlSignals> HostControlSignals::FromValue(const base::Value& value) {
  scoped_ptr<HostControlSignals> out(new HostControlSignals());
  if (!Populate(value, out.get()))
    return scoped_ptr<HostControlSignals>();
  return out;
}

scoped_ptr<base::DictionaryValue> HostControlSignals::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  if (this->dtr.get()) {
    value->SetWithoutPathExpansion("dtr", new base::FundamentalValue(*this->dtr));

  }
  if (this->rts.get()) {
    value->SetWithoutPathExpansion("rts", new base::FundamentalValue(*this->rts));

  }

  return value;
}


DeviceControlSignals::DeviceControlSignals()
: dcd(false), cts(false), ri(false), dsr(false) {}

DeviceControlSignals::~DeviceControlSignals() {}

// static
bool DeviceControlSignals::Populate(
    const base::Value& value, DeviceControlSignals* out) {
  if (!value.IsType(base::Value::TYPE_DICTIONARY)) {
    return false;
  }
  const base::DictionaryValue* dict = static_cast<const base::DictionaryValue*>(&value);
  const base::Value* dcd_value = NULL;
  if (!dict->GetWithoutPathExpansion("dcd", &dcd_value)) {
    return false;
  }
  {
    if (!dcd_value->GetAsBoolean(&out->dcd)) {
      return false;
    }
  }

  const base::Value* cts_value = NULL;
  if (!dict->GetWithoutPathExpansion("cts", &cts_value)) {
    return false;
  }
  {
    if (!cts_value->GetAsBoolean(&out->cts)) {
      return false;
    }
  }

  const base::Value* ri_value = NULL;
  if (!dict->GetWithoutPathExpansion("ri", &ri_value)) {
    return false;
  }
  {
    if (!ri_value->GetAsBoolean(&out->ri)) {
      return false;
    }
  }

  const base::Value* dsr_value = NULL;
  if (!dict->GetWithoutPathExpansion("dsr", &dsr_value)) {
    return false;
  }
  {
    if (!dsr_value->GetAsBoolean(&out->dsr)) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<DeviceControlSignals> DeviceControlSignals::FromValue(const base::Value& value) {
  scoped_ptr<DeviceControlSignals> out(new DeviceControlSignals());
  if (!Populate(value, out.get()))
    return scoped_ptr<DeviceControlSignals>();
  return out;
}

scoped_ptr<base::DictionaryValue> DeviceControlSignals::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("dcd", new base::FundamentalValue(this->dcd));

  value->SetWithoutPathExpansion("cts", new base::FundamentalValue(this->cts));

  value->SetWithoutPathExpansion("ri", new base::FundamentalValue(this->ri));

  value->SetWithoutPathExpansion("dsr", new base::FundamentalValue(this->dsr));


  return value;
}


ReceiveInfo::ReceiveInfo()
: connection_id(0) {}

ReceiveInfo::~ReceiveInfo() {}

// static
bool ReceiveInfo::Populate(
    const base::Value& value, ReceiveInfo* out) {
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

  const base::Value* data_value = NULL;
  if (!dict->GetWithoutPathExpansion("data", &data_value)) {
    return false;
  }
  {
    const base::BinaryValue* binary_value = NULL;
    if (!data_value->IsType(base::Value::TYPE_BINARY)) {
      return false;
    }
    else {
       binary_value =
         static_cast<const base::BinaryValue*>(data_value);
      out->data.assign(
          binary_value->GetBuffer(),
          binary_value->GetBuffer() + binary_value->GetSize());
    }
  }

  return true;
}

// static
scoped_ptr<ReceiveInfo> ReceiveInfo::FromValue(const base::Value& value) {
  scoped_ptr<ReceiveInfo> out(new ReceiveInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<ReceiveInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> ReceiveInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("connectionId", new base::FundamentalValue(this->connection_id));

  value->SetWithoutPathExpansion("data", base::BinaryValue::CreateWithCopiedBuffer(this->data.data(), this->data.size()));


  return value;
}


std::string ToString(ReceiveError enum_param) {
  switch (enum_param) {
    case RECEIVE_ERROR_DISCONNECTED:
      return "disconnected";
    case RECEIVE_ERROR_TIMEOUT:
      return "timeout";
    case RECEIVE_ERROR_DEVICE_LOST:
      return "device_lost";
    case RECEIVE_ERROR_BREAK:
      return "break";
    case RECEIVE_ERROR_FRAME_ERROR:
      return "frame_error";
    case RECEIVE_ERROR_OVERRUN:
      return "overrun";
    case RECEIVE_ERROR_BUFFER_OVERFLOW:
      return "buffer_overflow";
    case RECEIVE_ERROR_PARITY_ERROR:
      return "parity_error";
    case RECEIVE_ERROR_SYSTEM_ERROR:
      return "system_error";
    case RECEIVE_ERROR_NONE:
      return "";
  }
  NOTREACHED();
  return "";
}

ReceiveError ParseReceiveError(const std::string& enum_string) {
  if (enum_string == "disconnected")
    return RECEIVE_ERROR_DISCONNECTED;
  if (enum_string == "timeout")
    return RECEIVE_ERROR_TIMEOUT;
  if (enum_string == "device_lost")
    return RECEIVE_ERROR_DEVICE_LOST;
  if (enum_string == "break")
    return RECEIVE_ERROR_BREAK;
  if (enum_string == "frame_error")
    return RECEIVE_ERROR_FRAME_ERROR;
  if (enum_string == "overrun")
    return RECEIVE_ERROR_OVERRUN;
  if (enum_string == "buffer_overflow")
    return RECEIVE_ERROR_BUFFER_OVERFLOW;
  if (enum_string == "parity_error")
    return RECEIVE_ERROR_PARITY_ERROR;
  if (enum_string == "system_error")
    return RECEIVE_ERROR_SYSTEM_ERROR;
  return RECEIVE_ERROR_NONE;
}


ReceiveErrorInfo::ReceiveErrorInfo()
: connection_id(0), error(RECEIVE_ERROR_NONE) {}

ReceiveErrorInfo::~ReceiveErrorInfo() {}

// static
bool ReceiveErrorInfo::Populate(
    const base::Value& value, ReceiveErrorInfo* out) {
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

  const base::Value* error_value = NULL;
  if (!dict->GetWithoutPathExpansion("error", &error_value)) {
    return false;
  }
  {
    std::string receive_error_as_string;
    if (!error_value->GetAsString(&receive_error_as_string)) {
      return false;
    }
    out->error = ParseReceiveError(receive_error_as_string);
    if (out->error == RECEIVE_ERROR_NONE) {
      return false;
    }
  }

  return true;
}

// static
scoped_ptr<ReceiveErrorInfo> ReceiveErrorInfo::FromValue(const base::Value& value) {
  scoped_ptr<ReceiveErrorInfo> out(new ReceiveErrorInfo());
  if (!Populate(value, out.get()))
    return scoped_ptr<ReceiveErrorInfo>();
  return out;
}

scoped_ptr<base::DictionaryValue> ReceiveErrorInfo::ToValue() const {
  scoped_ptr<base::DictionaryValue> value(new base::DictionaryValue());

  value->SetWithoutPathExpansion("connectionId", new base::FundamentalValue(this->connection_id));

  value->SetWithoutPathExpansion("error", new base::StringValue(serial::ToString(this->error)));


  return value;
}



//
// Functions
//

namespace GetDevices {

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<DeviceInfo> >& ports) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(ports).release());

  return create_results;
}
}  // namespace GetDevices

namespace Connect {

Params::Params() {}
Params::~Params() {}

// static
scoped_ptr<Params> Params::Create(const base::ListValue& args) {
  if (args.GetSize() < 1 || args.GetSize() > 2) {
    return scoped_ptr<Params>();
  }
  scoped_ptr<Params> params(new Params());

  const base::Value* path_value = NULL;
  if (args.Get(0, &path_value) &&
      !path_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!path_value->GetAsString(&params->path)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  const base::Value* options_value = NULL;
  if (args.Get(1, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      else {
        scoped_ptr<ConnectionOptions> temp(new ConnectionOptions());
        if (!ConnectionOptions::Populate(*dictionary, temp.get())) {
          return scoped_ptr<Params>();
        }
        else
          params->options = std::move(temp);
      }
    }
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(const ConnectionInfo& connection_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((connection_info).ToValue().release());

  return create_results;
}
}  // namespace Connect

namespace Update {

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

  const base::Value* options_value = NULL;
  if (args.Get(1, &options_value) &&
      !options_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!options_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!ConnectionOptions::Populate(*dictionary, &params->options)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(bool result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace Update

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


scoped_ptr<base::ListValue> Results::Create(bool result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace Disconnect

namespace SetPaused {

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

  const base::Value* paused_value = NULL;
  if (args.Get(1, &paused_value) &&
      !paused_value->IsType(base::Value::TYPE_NULL)) {
    {
      if (!paused_value->GetAsBoolean(&params->paused)) {
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
}  // namespace SetPaused

namespace GetInfo {

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


scoped_ptr<base::ListValue> Results::Create(const ConnectionInfo& connection_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((connection_info).ToValue().release());

  return create_results;
}
}  // namespace GetInfo

namespace GetConnections {

scoped_ptr<base::ListValue> Results::Create(const std::vector<linked_ptr<ConnectionInfo> >& connection_infos) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(json_schema_compiler::util::CreateValueFromArray(connection_infos).release());

  return create_results;
}
}  // namespace GetConnections

namespace Send {

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

  const base::Value* data_value = NULL;
  if (args.Get(1, &data_value) &&
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


scoped_ptr<base::ListValue> Results::Create(const SendInfo& send_info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((send_info).ToValue().release());

  return create_results;
}
}  // namespace Send

namespace Flush {

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


scoped_ptr<base::ListValue> Results::Create(bool result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace Flush

namespace GetControlSignals {

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


scoped_ptr<base::ListValue> Results::Create(const DeviceControlSignals& signals) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((signals).ToValue().release());

  return create_results;
}
}  // namespace GetControlSignals

namespace SetControlSignals {

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

  const base::Value* signals_value = NULL;
  if (args.Get(1, &signals_value) &&
      !signals_value->IsType(base::Value::TYPE_NULL)) {
    {
      const base::DictionaryValue* dictionary = NULL;
      if (!signals_value->GetAsDictionary(&dictionary)) {
        return scoped_ptr<Params>();
      }
      if (!HostControlSignals::Populate(*dictionary, &params->signals)) {
        return scoped_ptr<Params>();
      }
    }
  }
  else {
    return scoped_ptr<Params>();
  }

  return params;
}


scoped_ptr<base::ListValue> Results::Create(bool result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace SetControlSignals

namespace SetBreak {

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


scoped_ptr<base::ListValue> Results::Create(bool result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace SetBreak

namespace ClearBreak {

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


scoped_ptr<base::ListValue> Results::Create(bool result) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append(new base::FundamentalValue(result));

  return create_results;
}
}  // namespace ClearBreak

//
// Events
//

namespace OnReceive {

const char kEventName[] = "serial.onReceive";

scoped_ptr<base::ListValue> Create(const ReceiveInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnReceive

namespace OnReceiveError {

const char kEventName[] = "serial.onReceiveError";

scoped_ptr<base::ListValue> Create(const ReceiveErrorInfo& info) {
  scoped_ptr<base::ListValue> create_results(new base::ListValue());
  create_results->Append((info).ToValue().release());

  return create_results;
}

}  // namespace OnReceiveError

}  // namespace serial
}  // namespace api
}  // namespace extensions

