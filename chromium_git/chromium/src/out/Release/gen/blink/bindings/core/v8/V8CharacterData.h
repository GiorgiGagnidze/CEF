// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8CharacterData_h
#define V8CharacterData_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "core/CoreExport.h"
#include "core/dom/CharacterData.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8CharacterData {
    STATIC_ONLY(V8CharacterData);
public:
    CORE_EXPORT static bool hasInstance(v8::Local<v8::Value>, v8::Isolate*);
    static v8::Local<v8::Object> findInstanceInPrototypeChain(v8::Local<v8::Value>, v8::Isolate*);
    CORE_EXPORT static v8::Local<v8::FunctionTemplate> domTemplate(v8::Isolate*);
    static CharacterData* toImpl(v8::Local<v8::Object> object)
    {
        return toScriptWrappable(object)->toImpl<CharacterData>();
    }
    CORE_EXPORT static CharacterData* toImplWithTypeCheck(v8::Isolate*, v8::Local<v8::Value>);
    CORE_EXPORT static const WrapperTypeInfo wrapperTypeInfo;
    static void refObject(ScriptWrappable*);
    static void derefObject(ScriptWrappable*);
    template<typename VisitorDispatcher>
    static void trace(VisitorDispatcher visitor, ScriptWrappable* scriptWrappable)
    {
#if ENABLE(OILPAN)
        visitor->trace(scriptWrappable->toImpl<CharacterData>());
#endif
    }
    static const int internalFieldCount = v8DefaultWrapperInternalFieldCount + 0;
    static void installConditionallyEnabledProperties(v8::Local<v8::Object>, v8::Isolate*) { }
    static void preparePrototypeAndInterfaceObject(v8::Local<v8::Context>, v8::Local<v8::Object> prototypeObject, v8::Local<v8::Function> interfaceObject, v8::Local<v8::FunctionTemplate> interfaceTemplate) { }
};

template <>
struct V8TypeOf<CharacterData> {
    typedef V8CharacterData Type;
};

} // namespace blink

#endif // V8CharacterData_h
