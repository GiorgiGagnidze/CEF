// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8WorkerNavigator_h
#define V8WorkerNavigator_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "core/CoreExport.h"
#include "core/workers/WorkerNavigator.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8WorkerNavigator {
    STATIC_ONLY(V8WorkerNavigator);
public:
    CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*);
    static WorkerNavigator* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<WorkerNavigator>();
    }
    CORE_EXPORT static WorkerNavigator* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    CORE_EXPORT static WrapperTypeInfo wrapperTypeInfo;
    static void refObject(ScriptWrappable*);
    static void derefObject(ScriptWrappable*);
    template<typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
        visitor->trace(scriptWrappable->toImpl<WorkerNavigator>());
    }
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    static void installConditionallyEnabledProperties(v8::Local<v8::Object>, v8::Isolate*) { }
    static void preparePrototypeAndInterfaceObject(v8::Local<v8::Context>, v8::Local<v8::Object> prototypeObject, v8::Local<v8::Function> interfaceObject, v8::Local<v8::FunctionTemplate> interfaceTemplate) { }
    CORE_EXPORT static void updateWrapperTypeInfo(InstallTemplateFunction, PreparePrototypeAndInterfaceObjectFunction);
    CORE_EXPORT static void installV8WorkerNavigatorTemplate(v8::Local<v8::FunctionTemplate>, v8::Isolate*);

private:
    static InstallTemplateFunction installV8WorkerNavigatorTemplateFunction;
};

template <>
struct V8TypeOf<WorkerNavigator> {
    typedef V8WorkerNavigator Type;
};

} // namespace blink

#endif // V8WorkerNavigator_h
