// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef USBDeviceFilter_h
#define USBDeviceFilter_h

#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT USBDeviceFilter {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    USBDeviceFilter();
    virtual ~USBDeviceFilter();

    bool hasClassCode() const { return !m_classCode.isNull(); }
    unsigned classCode() const { return m_classCode.get(); }
    void setClassCode(unsigned value) { m_classCode = value; }

    bool hasProductId() const { return !m_productId.isNull(); }
    unsigned productId() const { return m_productId.get(); }
    void setProductId(unsigned value) { m_productId = value; }

    bool hasProtocolCode() const { return !m_protocolCode.isNull(); }
    unsigned protocolCode() const { return m_protocolCode.get(); }
    void setProtocolCode(unsigned value) { m_protocolCode = value; }

    bool hasSubclassCode() const { return !m_subclassCode.isNull(); }
    unsigned subclassCode() const { return m_subclassCode.get(); }
    void setSubclassCode(unsigned value) { m_subclassCode = value; }

    bool hasVendorId() const { return !m_vendorId.isNull(); }
    unsigned vendorId() const { return m_vendorId.get(); }
    void setVendorId(unsigned value) { m_vendorId = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<unsigned> m_classCode;
    Nullable<unsigned> m_productId;
    Nullable<unsigned> m_protocolCode;
    Nullable<unsigned> m_subclassCode;
    Nullable<unsigned> m_vendorId;

    friend class V8USBDeviceFilter;
};

} // namespace blink

#endif // USBDeviceFilter_h
