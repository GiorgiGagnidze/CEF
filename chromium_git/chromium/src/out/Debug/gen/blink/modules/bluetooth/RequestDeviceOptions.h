// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef RequestDeviceOptions_h
#define RequestDeviceOptions_h

#include "bindings/core/v8/Nullable.h"
#include "bindings/modules/v8/UnionTypesModules.h"
#include "modules/ModulesExport.h"
#include "modules/bluetooth/BluetoothScanFilter.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"

namespace blink {

class MODULES_EXPORT RequestDeviceOptions {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    RequestDeviceOptions();
    virtual ~RequestDeviceOptions();

    bool hasFilters() const { return !m_filters.isNull(); }
    const HeapVector<BluetoothScanFilter>& filters() const { return m_filters.get(); }
    void setFilters(const HeapVector<BluetoothScanFilter>& value) { m_filters = value; }

    bool hasOptionalServices() const { return !m_optionalServices.isNull(); }
    const HeapVector<StringOrUnsignedLong>& optionalServices() const { return m_optionalServices.get(); }
    void setOptionalServices(const HeapVector<StringOrUnsignedLong>& value) { m_optionalServices = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<HeapVector<BluetoothScanFilter>> m_filters;
    Nullable<HeapVector<StringOrUnsignedLong>> m_optionalServices;

    friend class V8RequestDeviceOptions;
};

} // namespace blink

#endif // RequestDeviceOptions_h
