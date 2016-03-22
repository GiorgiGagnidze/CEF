// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef AnimationPlayerEventInit_h
#define AnimationPlayerEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/events/EventInit.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT AnimationPlayerEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    AnimationPlayerEventInit();
    virtual ~AnimationPlayerEventInit();

    bool hasCurrentTime() const { return !m_currentTime.isNull(); }
    double currentTime() const { return m_currentTime.get(); }
    void setCurrentTime(double value) { m_currentTime = value; }
    void setCurrentTimeToNull() { m_currentTime = Nullable<double>(); }

    bool hasTimelineTime() const { return !m_timelineTime.isNull(); }
    double timelineTime() const { return m_timelineTime.get(); }
    void setTimelineTime(double value) { m_timelineTime = value; }
    void setTimelineTimeToNull() { m_timelineTime = Nullable<double>(); }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<double> m_currentTime;
    Nullable<double> m_timelineTime;

    friend class V8AnimationPlayerEventInit;
};

} // namespace blink

#endif // AnimationPlayerEventInit_h
