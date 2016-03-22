// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8WindowPartial_h
#define V8WindowPartial_h

#include "bindings/core/v8/ScriptWrappable.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "bindings/core/v8/V8DOMWrapper.h"
#include "bindings/core/v8/WrapperTypeInfo.h"
#include "core/frame/DOMWindow.h"
#include "platform/heap/Handle.h"

namespace blink {

class V8WindowPartial {
    STATIC_ONLY(V8WindowPartial);
public:
    static void initialize();
    static void openMethodCustom(const v8::FunctionCallbackInfo<v8::Value>&);
    static void postMessageMethodCustom(const v8::FunctionCallbackInfo<v8::Value>&);
    static void preparePrototypeAndInterfaceObject(v8::Local<v8::Context>, v8::Local<v8::Object>, v8::Local<v8::Function>, v8::Local<v8::FunctionTemplate>);
private:
    static void installV8WindowTemplate(v8::Local<v8::FunctionTemplate>, v8::Isolate*);
};
}
#endif // V8WindowPartial_h
