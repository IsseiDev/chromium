// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8Coordinates.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
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
const WrapperTypeInfo V8Coordinates::wrapperTypeInfo = { gin::kEmbedderBlink, V8Coordinates::domTemplate, V8Coordinates::trace, V8Coordinates::traceWrappers, 0, 0, V8Coordinates::preparePrototypeAndInterfaceObject, nullptr, "Coordinates", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Coordinates.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Coordinates::s_wrapperTypeInfo = V8Coordinates::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, Coordinates>::value,
    "Coordinates inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace CoordinatesV8Internal {

static void latitudeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Coordinates* impl = V8Coordinates::toImpl(holder);
    v8SetReturnValue(info, impl->latitude());
}

static void latitudeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CoordinatesV8Internal::latitudeAttributeGetter(info);
}

static void longitudeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Coordinates* impl = V8Coordinates::toImpl(holder);
    v8SetReturnValue(info, impl->longitude());
}

static void longitudeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CoordinatesV8Internal::longitudeAttributeGetter(info);
}

static void altitudeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Coordinates* impl = V8Coordinates::toImpl(holder);
    bool isNull = false;
    double cppValue(impl->altitude(isNull));
    if (isNull) {
        v8SetReturnValueNull(info);
        return;
    }
    v8SetReturnValue(info, cppValue);
}

static void altitudeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CoordinatesV8Internal::altitudeAttributeGetter(info);
}

static void accuracyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Coordinates* impl = V8Coordinates::toImpl(holder);
    v8SetReturnValue(info, impl->accuracy());
}

static void accuracyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CoordinatesV8Internal::accuracyAttributeGetter(info);
}

static void altitudeAccuracyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Coordinates* impl = V8Coordinates::toImpl(holder);
    bool isNull = false;
    double cppValue(impl->altitudeAccuracy(isNull));
    if (isNull) {
        v8SetReturnValueNull(info);
        return;
    }
    v8SetReturnValue(info, cppValue);
}

static void altitudeAccuracyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CoordinatesV8Internal::altitudeAccuracyAttributeGetter(info);
}

static void headingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Coordinates* impl = V8Coordinates::toImpl(holder);
    bool isNull = false;
    double cppValue(impl->heading(isNull));
    if (isNull) {
        v8SetReturnValueNull(info);
        return;
    }
    v8SetReturnValue(info, cppValue);
}

static void headingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CoordinatesV8Internal::headingAttributeGetter(info);
}

static void speedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Coordinates* impl = V8Coordinates::toImpl(holder);
    bool isNull = false;
    double cppValue(impl->speed(isNull));
    if (isNull) {
        v8SetReturnValueNull(info);
        return;
    }
    v8SetReturnValue(info, cppValue);
}

static void speedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CoordinatesV8Internal::speedAttributeGetter(info);
}

} // namespace CoordinatesV8Internal

const V8DOMConfiguration::AccessorConfiguration V8CoordinatesAccessors[] = {
    {"latitude", CoordinatesV8Internal::latitudeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"longitude", CoordinatesV8Internal::longitudeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"altitude", CoordinatesV8Internal::altitudeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"accuracy", CoordinatesV8Internal::accuracyAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"altitudeAccuracy", CoordinatesV8Internal::altitudeAccuracyAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"heading", CoordinatesV8Internal::headingAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"speed", CoordinatesV8Internal::speedAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8CoordinatesTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Coordinates::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8Coordinates::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8CoordinatesAccessors, WTF_ARRAY_LENGTH(V8CoordinatesAccessors));
}

v8::Local<v8::FunctionTemplate> V8Coordinates::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CoordinatesTemplate);
}

bool V8Coordinates::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Coordinates::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Coordinates* V8Coordinates::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink