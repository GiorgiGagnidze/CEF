// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef WebGLContextEventInit_h
#define WebGLContextEventInit_h

#include "core/events/EventInit.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT WebGLContextEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    WebGLContextEventInit();
    virtual ~WebGLContextEventInit();

    bool hasStatusMessage() const { return !m_statusMessage.isNull(); }
    String statusMessage() const { return m_statusMessage; }
    void setStatusMessage(String value) { m_statusMessage = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_statusMessage;

    friend class V8WebGLContextEventInit;
};

} // namespace blink

#endif // WebGLContextEventInit_h
