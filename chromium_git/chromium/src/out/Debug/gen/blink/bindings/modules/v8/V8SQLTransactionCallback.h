// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8SQLTransactionCallback_h
#define V8SQLTransactionCallback_h

#include "bindings/core/v8/ActiveDOMCallback.h"
#include "bindings/core/v8/DOMWrapperWorld.h"
#include "bindings/core/v8/ScopedPersistent.h"
#include "modules/ModulesExport.h"
#include "modules/webdatabase/SQLTransactionCallback.h"

namespace blink {

class V8SQLTransactionCallback final : public SQLTransactionCallback, public ActiveDOMCallback {
    WILL_BE_USING_GARBAGE_COLLECTED_MIXIN(V8SQLTransactionCallback);
public:
    static V8SQLTransactionCallback* create(v8::Local<v8::Function> callback, ScriptState* scriptState)
    {
        return new V8SQLTransactionCallback(callback, scriptState);
    }

    ~V8SQLTransactionCallback() override;

    DECLARE_VIRTUAL_TRACE();

    bool handleEvent(SQLTransaction* transaction) override;
private:
    MODULES_EXPORT V8SQLTransactionCallback(v8::Local<v8::Function>, ScriptState*);

    ScopedPersistent<v8::Function> m_callback;
    RefPtr<ScriptState> m_scriptState;
};

}
#endif // V8SQLTransactionCallback_h
