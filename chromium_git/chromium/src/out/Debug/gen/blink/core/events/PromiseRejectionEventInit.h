// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef PromiseRejectionEventInit_h
#define PromiseRejectionEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptValue.h"
#include "core/CoreExport.h"
#include "core/events/EventInit.h"
#include "platform/heap/Handle.h"

namespace blink {

class CORE_EXPORT PromiseRejectionEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    PromiseRejectionEventInit();
    virtual ~PromiseRejectionEventInit();

    bool hasPromise() const { return !m_promise.isNull(); }
    ScriptPromise promise() const { return m_promise.get(); }
    void setPromise(ScriptPromise value) { m_promise = value; }

    bool hasReason() const { return !(m_reason.isEmpty() || m_reason.isNull() || m_reason.isUndefined()); }
    ScriptValue reason() const { return m_reason; }
    void setReason(ScriptValue value) { m_reason = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<ScriptPromise> m_promise;
    ScriptValue m_reason;

    friend class V8PromiseRejectionEventInit;
};

} // namespace blink

#endif // PromiseRejectionEventInit_h
