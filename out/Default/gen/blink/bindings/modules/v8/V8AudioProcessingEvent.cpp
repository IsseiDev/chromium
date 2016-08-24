// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8AudioProcessingEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8AudioBuffer.h"
#include "core/dom/Document.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8AudioProcessingEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8AudioProcessingEvent::domTemplate, V8AudioProcessingEvent::trace, V8AudioProcessingEvent::traceWrappers, 0, 0, V8AudioProcessingEvent::preparePrototypeAndInterfaceObject, nullptr, "AudioProcessingEvent", &V8Event::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AudioProcessingEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& AudioProcessingEvent::s_wrapperTypeInfo = V8AudioProcessingEvent::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, AudioProcessingEvent>::value,
    "AudioProcessingEvent inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace AudioProcessingEventV8Internal {

static void playbackTimeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioProcessingEvent* impl = V8AudioProcessingEvent::toImpl(holder);
    v8SetReturnValue(info, impl->playbackTime());
}

static void playbackTimeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AudioProcessingEventV8Internal::playbackTimeAttributeGetter(info);
}

static void inputBufferAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioProcessingEvent* impl = V8AudioProcessingEvent::toImpl(holder);
    AudioBuffer* cppValue(WTF::getPtr(impl->inputBuffer()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "inputBuffer"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void inputBufferAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AudioProcessingEventV8Internal::inputBufferAttributeGetter(info);
}

static void outputBufferAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioProcessingEvent* impl = V8AudioProcessingEvent::toImpl(holder);
    AudioBuffer* cppValue(WTF::getPtr(impl->outputBuffer()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "outputBuffer"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void outputBufferAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AudioProcessingEventV8Internal::outputBufferAttributeGetter(info);
}

} // namespace AudioProcessingEventV8Internal

const V8DOMConfiguration::AccessorConfiguration V8AudioProcessingEventAccessors[] = {
    {"playbackTime", AudioProcessingEventV8Internal::playbackTimeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"inputBuffer", AudioProcessingEventV8Internal::inputBufferAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"outputBuffer", AudioProcessingEventV8Internal::outputBufferAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8AudioProcessingEventTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8AudioProcessingEvent::wrapperTypeInfo.interfaceName, V8Event::domTemplate(isolate, world), V8AudioProcessingEvent::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8AudioProcessingEventAccessors, WTF_ARRAY_LENGTH(V8AudioProcessingEventAccessors));
}

v8::Local<v8::FunctionTemplate> V8AudioProcessingEvent::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AudioProcessingEventTemplate);
}

bool V8AudioProcessingEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8AudioProcessingEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AudioProcessingEvent* V8AudioProcessingEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
