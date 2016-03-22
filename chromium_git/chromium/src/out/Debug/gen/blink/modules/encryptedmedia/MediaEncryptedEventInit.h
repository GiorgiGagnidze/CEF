// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef MediaEncryptedEventInit_h
#define MediaEncryptedEventInit_h

#include "core/dom/DOMArrayBuffer.h"
#include "core/events/EventInit.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT MediaEncryptedEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    MediaEncryptedEventInit();
    virtual ~MediaEncryptedEventInit();

    bool hasInitData() const { return m_initData; }
    PassRefPtr<DOMArrayBuffer> initData() const { return m_initData; }
    void setInitData(PassRefPtr<DOMArrayBuffer> value) { m_initData = value; }
    void setInitDataToNull() { m_initData = RefPtr<DOMArrayBuffer>(); }

    bool hasInitDataType() const { return !m_initDataType.isNull(); }
    String initDataType() const { return m_initDataType; }
    void setInitDataType(String value) { m_initDataType = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    RefPtr<DOMArrayBuffer> m_initData;
    String m_initDataType;

    friend class V8MediaEncryptedEventInit;
};

} // namespace blink

#endif // MediaEncryptedEventInit_h
