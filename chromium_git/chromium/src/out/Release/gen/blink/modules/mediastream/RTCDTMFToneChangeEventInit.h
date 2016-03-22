// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef RTCDTMFToneChangeEventInit_h
#define RTCDTMFToneChangeEventInit_h

#include "core/events/EventInit.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT RTCDTMFToneChangeEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    RTCDTMFToneChangeEventInit();
    virtual ~RTCDTMFToneChangeEventInit();

    bool hasTone() const { return !m_tone.isNull(); }
    String tone() const { return m_tone; }
    void setTone(String value) { m_tone = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_tone;

    friend class V8RTCDTMFToneChangeEventInit;
};

} // namespace blink

#endif // RTCDTMFToneChangeEventInit_h
