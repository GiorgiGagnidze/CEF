// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef BluetoothScanFilter_h
#define BluetoothScanFilter_h

#include "bindings/core/v8/Nullable.h"
#include "bindings/modules/v8/UnionTypesModules.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT BluetoothScanFilter {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    BluetoothScanFilter();
    virtual ~BluetoothScanFilter();

    bool hasName() const { return !m_name.isNull(); }
    String name() const { return m_name; }
    void setName(String value) { m_name = value; }

    bool hasNamePrefix() const { return !m_namePrefix.isNull(); }
    String namePrefix() const { return m_namePrefix; }
    void setNamePrefix(String value) { m_namePrefix = value; }

    bool hasServices() const { return !m_services.isNull(); }
    const HeapVector<StringOrUnsignedLong>& services() const { return m_services.get(); }
    void setServices(const HeapVector<StringOrUnsignedLong>& value) { m_services = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_name;
    String m_namePrefix;
    Nullable<HeapVector<StringOrUnsignedLong>> m_services;

    friend class V8BluetoothScanFilter;
};

} // namespace blink

#endif // BluetoothScanFilter_h
