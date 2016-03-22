// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef GetNotificationOptions_h
#define GetNotificationOptions_h

#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT GetNotificationOptions {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    GetNotificationOptions();
    virtual ~GetNotificationOptions();

    bool hasTag() const { return !m_tag.isNull(); }
    String tag() const { return m_tag; }
    void setTag(String value) { m_tag = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_tag;

    friend class V8GetNotificationOptions;
};

} // namespace blink

#endif // GetNotificationOptions_h
