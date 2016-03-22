// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE API DEFINITION IN
//   extensions/common/api/printer_provider.idl
// DO NOT EDIT.

#ifndef EXTENSIONS_COMMON_API_PRINTER_PROVIDER_H__
#define EXTENSIONS_COMMON_API_PRINTER_PROVIDER_H__

#include <stdint.h>

#include <map>
#include <string>
#include <vector>

#include "base/logging.h"
#include "base/memory/linked_ptr.h"
#include "base/memory/scoped_ptr.h"
#include "base/values.h"
#include "extensions/common/api/usb.h"


namespace extensions {
namespace api {
namespace printer_provider {

//
// Types
//

// Error codes returned in response to $(ref:onPrintRequested) event.
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

struct PrinterInfo {
  PrinterInfo();
  ~PrinterInfo();

  // Populates a PrinterInfo object from a base::Value. Returns whether |out|
  // was successfully populated.
  static bool Populate(const base::Value& value, PrinterInfo* out);

  // Creates a PrinterInfo object from a base::Value, or NULL on failure.
  static scoped_ptr<PrinterInfo> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this PrinterInfo object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Unique printer ID.
  std::string id;

  // Printer's human readable name.
  std::string name;

  // Printer's human readable description.
  scoped_ptr<std::string> description;


 private:
  DISALLOW_COPY_AND_ASSIGN(PrinterInfo);
};

struct PrintJob {
  PrintJob();
  ~PrintJob();

  // Populates a PrintJob object from a base::Value. Returns whether |out| was
  // successfully populated.
  static bool Populate(const base::Value& value, PrintJob* out);

  // Creates a PrintJob object from a base::Value, or NULL on failure.
  static scoped_ptr<PrintJob> FromValue(const base::Value& value);

  // Returns a new base::DictionaryValue representing the serialized form of
  // this PrintJob object.
  scoped_ptr<base::DictionaryValue> ToValue() const;

  // Print ticket in <a
  // href="https://developers.google.com/cloud-print/docs/cdd#cjt"> CJT
  // format</a>.
  struct Ticket {
    Ticket();
    ~Ticket();

    // Populates a Ticket object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, Ticket* out);

    // Returns a new base::DictionaryValue representing the serialized form of
    // this Ticket object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    base::DictionaryValue additional_properties;

   private:
    DISALLOW_COPY_AND_ASSIGN(Ticket);
  };

  // Blob containing the document data to print. Format must match |contentType|.
  struct Document {
    Document();
    ~Document();

    // Populates a Document object from a base::Value. Returns whether |out| was
    // successfully populated.
    static bool Populate(const base::Value& value, Document* out);

    // Returns a new base::DictionaryValue representing the serialized form of
    // this Document object.
    scoped_ptr<base::DictionaryValue> ToValue() const;

    base::DictionaryValue additional_properties;

   private:
    DISALLOW_COPY_AND_ASSIGN(Document);
  };


  // ID of the printer which should handle the job.
  std::string printer_id;

  // The print job title.
  std::string title;

  // Print ticket in <a
  // href="https://developers.google.com/cloud-print/docs/cdd#cjt"> CJT
  // format</a>.
  Ticket ticket;

  // The document content type. Supported formats are
  // <code>"application/pdf"</code> and <code>"image/pwg-raster"</code>.
  std::string content_type;

  // Blob containing the document data to print. Format must match |contentType|.
  Document document;


 private:
  DISALLOW_COPY_AND_ASSIGN(PrintJob);
};


//
// Events
//

namespace OnGetPrintersRequested {

extern const char kEventName[];  // "printerProvider.onGetPrintersRequested"

scoped_ptr<base::ListValue> Create();
}  // namespace OnGetPrintersRequested

namespace OnGetUsbPrinterInfoRequested {

extern const char kEventName[];  // "printerProvider.onGetUsbPrinterInfoRequested"

// The USB device.
scoped_ptr<base::ListValue> Create(const extensions::api::usb::Device& device);
}  // namespace OnGetUsbPrinterInfoRequested

namespace OnGetCapabilityRequested {

extern const char kEventName[];  // "printerProvider.onGetCapabilityRequested"

// Unique ID of the printer whose capabilities are requested.
scoped_ptr<base::ListValue> Create(const std::string& printer_id);
}  // namespace OnGetCapabilityRequested

namespace OnPrintRequested {

extern const char kEventName[];  // "printerProvider.onPrintRequested"

// The printing request parameters.
scoped_ptr<base::ListValue> Create(const PrintJob& print_job);
}  // namespace OnPrintRequested

}  // namespace printer_provider
}  // namespace api
}  // namespace extensions
#endif  // EXTENSIONS_COMMON_API_PRINTER_PROVIDER_H__
