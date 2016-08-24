// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8TextEvent.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8Window.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8TextEvent::wrapperTypeInfo = { gin::kEmbedderBlink, V8TextEvent::domTemplate, V8TextEvent::trace, V8TextEvent::traceWrappers, 0, 0, V8TextEvent::preparePrototypeAndInterfaceObject, nullptr, "TextEvent", &V8UIEvent::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in TextEvent.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& TextEvent::s_wrapperTypeInfo = V8TextEvent::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, TextEvent>::value,
    "TextEvent inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace TextEventV8Internal {

static void dataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextEvent* impl = V8TextEvent::toImpl(holder);
    v8SetReturnValueString(info, impl->data(), info.GetIsolate());
}

static void dataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8TextEvent_Data_AttributeGetter);
    TextEventV8Internal::dataAttributeGetter(info);
}

static void isTrustedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    TextEvent* impl = V8TextEvent::toImpl(holder);
    v8SetReturnValueBool(info, impl->isTrusted());
}

static void isTrustedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    TextEventV8Internal::isTrustedAttributeGetter(info);
}

static void initTextEventMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "initTextEvent", "TextEvent", info.Holder(), info.GetIsolate());
    TextEvent* impl = V8TextEvent::toImpl(info.Holder());
    V8StringResource<> type;
    bool bubbles;
    bool cancelable;
    DOMWindow* view;
    V8StringResource<> data;
    {
        type = info[0];
        if (!type.prepare())
            return;
        bubbles = toBoolean(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        cancelable = toBoolean(info.GetIsolate(), info[2], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        view = toDOMWindow(info.GetIsolate(), info[3]);
        if (!view && !isUndefinedOrNull(info[3])) {
            exceptionState.throwTypeError("parameter 4 is not of type 'Window'.");
            exceptionState.throwIfNeeded();
            return;
        }
        data = info[4];
        if (!data.prepare())
            return;
    }
    impl->initTextEvent(type, bubbles, cancelable, view, data);
}

static void initTextEventMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8TextEvent_InitTextEvent_Method);
    TextEventV8Internal::initTextEventMethod(info);
}

} // namespace TextEventV8Internal

const V8DOMConfiguration::AccessorConfiguration V8TextEventAccessors[] = {
    {"data", TextEventV8Internal::dataAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"isTrusted", TextEventV8Internal::isTrustedAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::DontDelete | v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8TextEventMethods[] = {
    {"initTextEvent", TextEventV8Internal::initTextEventMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8TextEventTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8TextEvent::wrapperTypeInfo.interfaceName, V8UIEvent::domTemplate(isolate, world), V8TextEvent::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8TextEventAccessors, WTF_ARRAY_LENGTH(V8TextEventAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8TextEventMethods, WTF_ARRAY_LENGTH(V8TextEventMethods));
}

v8::Local<v8::FunctionTemplate> V8TextEvent::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8TextEventTemplate);
}

bool V8TextEvent::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8TextEvent::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

TextEvent* V8TextEvent::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
