// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8USBIsochronousInTransferPacket.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8DataView.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/ContextFeatures.h"
#include "core/dom/Document.h"
#include "core/inspector/ConsoleMessage.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "platform/TraceEvent.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8USBIsochronousInTransferPacket::wrapperTypeInfo = { gin::kEmbedderBlink, V8USBIsochronousInTransferPacket::domTemplate, V8USBIsochronousInTransferPacket::refObject, V8USBIsochronousInTransferPacket::derefObject, V8USBIsochronousInTransferPacket::trace, 0, 0, V8USBIsochronousInTransferPacket::preparePrototypeAndInterfaceObject, V8USBIsochronousInTransferPacket::installConditionallyEnabledProperties, "USBIsochronousInTransferPacket", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent, WrapperTypeInfo::GarbageCollectedObject };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in USBIsochronousInTransferPacket.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& USBIsochronousInTransferPacket::s_wrapperTypeInfo = V8USBIsochronousInTransferPacket::wrapperTypeInfo;

namespace USBIsochronousInTransferPacketV8Internal {

static void statusAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBIsochronousInTransferPacket* impl = V8USBIsochronousInTransferPacket::toImpl(holder);
    v8SetReturnValueString(info, impl->status(), info.GetIsolate());
}

static void statusAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    USBIsochronousInTransferPacketV8Internal::statusAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

static void dataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBIsochronousInTransferPacket* impl = V8USBIsochronousInTransferPacket::toImpl(holder);
    RefPtr<DOMDataView> cppValue(impl->data());
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue.get()))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue.get(), holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "data"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void dataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TRACE_EVENT_SET_SAMPLING_STATE("blink", "DOMGetter");
    USBIsochronousInTransferPacketV8Internal::dataAttributeGetter(info);
    TRACE_EVENT_SET_SAMPLING_STATE("v8", "V8Execution");
}

} // namespace USBIsochronousInTransferPacketV8Internal

const V8DOMConfiguration::AccessorConfiguration V8USBIsochronousInTransferPacketAccessors[] = {
    {"status", USBIsochronousInTransferPacketV8Internal::statusAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"data", USBIsochronousInTransferPacketV8Internal::dataAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8USBIsochronousInTransferPacketTemplate(v8::Local<v8::FunctionTemplate> functionTemplate, v8::Isolate* isolate)
{
    functionTemplate->ReadOnlyPrototype();

    v8::Local<v8::Signature> defaultSignature;
    if (!RuntimeEnabledFeatures::webUSBEnabled())
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "USBIsochronousInTransferPacket", v8::Local<v8::FunctionTemplate>(), V8USBIsochronousInTransferPacket::internalFieldCount, 0, 0, 0, 0, 0, 0);
    else
        defaultSignature = V8DOMConfiguration::installDOMClassTemplate(isolate, functionTemplate, "USBIsochronousInTransferPacket", v8::Local<v8::FunctionTemplate>(), V8USBIsochronousInTransferPacket::internalFieldCount,
            0, 0,
            V8USBIsochronousInTransferPacketAccessors, WTF_ARRAY_LENGTH(V8USBIsochronousInTransferPacketAccessors),
            0, 0);
    v8::Local<v8::ObjectTemplate> instanceTemplate = functionTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = functionTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
}

v8::Local<v8::FunctionTemplate> V8USBIsochronousInTransferPacket::domTemplate(v8::Isolate* isolate)
{
    return V8DOMConfiguration::domClassTemplate(isolate, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8USBIsochronousInTransferPacketTemplate);
}

bool V8USBIsochronousInTransferPacket::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8USBIsochronousInTransferPacket::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

USBIsochronousInTransferPacket* V8USBIsochronousInTransferPacket::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : 0;
}

void V8USBIsochronousInTransferPacket::refObject(ScriptWrappable* scriptWrappable)
{
}

void V8USBIsochronousInTransferPacket::derefObject(ScriptWrappable* scriptWrappable)
{
}

} // namespace blink
