// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/printer_provider_internal.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_PRINTER_PROVIDER_INTERNAL_H__
#define EXTENSIONS_COMMON_API_PRINTER_PROVIDER_INTERNAL_H__

#include <stdint.h>

#include <map>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/memory/linked_ptr.h"
#include "base/memory/scoped_ptr.h"
#include "base/values.h"
#include "extensions/common/api/printer_provider.h"
#include "extensions/common/api/printer_provider.h"


namespace extensions {
namespace api {
namespace printer_provider_internal {

//
// Types
//

// Same as in printerProvider.PrintError enum API.
enum PrintError {
  PRINT_ERROR_NONE,
  PRINT_ERROR_OK,
  PRINT_ERROR_FAILED,
  PRINT_ERROR_INVALID_TICKET,
  PRINT_ERROR_INVALID_DATA,
  PRINT_ERROR_LAST = PRINT_ERROR_INVALID_DATA,
};


std::string ToString(PrintError as_enum);
PrintError ParsePrintError(const std::string& as_string);

struct BlobInfo {
  BlobInfo();
  ~BlobInfo();

  // Populates a BlobInfo object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, BlobInfo* out);

  // Creates a BlobInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<BlobInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this BlobInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // The blob UUID.
  std::string blob_uuid;

  // The blob content type.
  std::string type;

  // The blob size.
  int size;


 private:
  DISALLOW_COPY_AND_ASSIGN(BlobInfo);
};


//
// Functions
//

namespace ReportPrinters {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Parameter identifying the event instance for which the     callback is run.
  int request_id;

  // List of printers reported by the extension.
  scoped_ptr<std::vector<linked_ptr<extensions::api::printer_provider::PrinterInfo> > > printers;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace ReportPrinters

namespace ReportUsbPrinterInfo {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // Parameter identifying the event instance for which the     callback is run.
  int request_id;

  // Printer information reported by the extension.
  scoped_ptr<extensions::api::printer_provider::PrinterInfo> printer_info;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace ReportUsbPrinterInfo

namespace ReportPrinterCapability {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  struct Capability {
    Capability();
    ~Capability();

    // Populates a Capability object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, Capability* out);

    base::DictionaryValue additional_properties;

   private:
    DISALLOW_COPY_AND_ASSIGN(Capability);
  };


  int request_id;

  scoped_ptr<Capability> capability;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace ReportPrinterCapability

namespace ReportPrintResult {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  int request_id;

  // The requested print job result.
  PrintError error;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

}  // namespace ReportPrintResult

namespace GetPrintData {

struct Params {
  static scoped_ptr<Params> Create(const base::ListValue& args);
  ~Params();

  // The request id for the print request for which data is     needed.
  int request_id;


 private:
  Params();

  DISALLOW_COPY_AND_ASSIGN(Params);
};

namespace Results {

scoped_ptr<base::ListValue> Create(const BlobInfo& blob_info);
}  // namespace Results

}  // namespace GetPrintData

}  // namespace printer_provider_internal
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_PRINTER_PROVIDER_INTERNAL_H__
