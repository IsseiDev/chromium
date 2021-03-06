// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SVGAngle.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SVGElement.h"
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
const WrapperTypeInfo V8SVGAngle::wrapperTypeInfo = { gin::kEmbedderBlink, V8SVGAngle::domTemplate, V8SVGAngle::trace, V8SVGAngle::traceWrappers, 0, V8SVGAngle::visitDOMWrapper, V8SVGAngle::preparePrototypeAndInterfaceObject, nullptr, "SVGAngle", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SVGAngleTearOff.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SVGAngleTearOff::s_wrapperTypeInfo = V8SVGAngle::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, SVGAngleTearOff>::value,
    "SVGAngleTearOff inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SVGAngleTearOffV8Internal {

static void unitTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAngleTearOff* impl = V8SVGAngle::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->unitType());
}

static void unitTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAngleTearOffV8Internal::unitTypeAttributeGetter(info);
}

static void valueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAngleTearOff* impl = V8SVGAngle::toImpl(holder);
    v8SetReturnValue(info, impl->value());
}

static void valueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAngleTearOffV8Internal::valueAttributeGetter(info);
}

static void valueAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "value", "SVGAngle", holder, info.GetIsolate());
    SVGAngleTearOff* impl = V8SVGAngle::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setValue(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void valueAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SVGAngleTearOffV8Internal::valueAttributeSetter(v8Value, info);
}

static void valueInSpecifiedUnitsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAngleTearOff* impl = V8SVGAngle::toImpl(holder);
    v8SetReturnValue(info, impl->valueInSpecifiedUnits());
}

static void valueInSpecifiedUnitsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAngleTearOffV8Internal::valueInSpecifiedUnitsAttributeGetter(info);
}

static void valueInSpecifiedUnitsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "valueInSpecifiedUnits", "SVGAngle", holder, info.GetIsolate());
    SVGAngleTearOff* impl = V8SVGAngle::toImpl(holder);
    float cppValue = toRestrictedFloat(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setValueInSpecifiedUnits(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void valueInSpecifiedUnitsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SVGAngleTearOffV8Internal::valueInSpecifiedUnitsAttributeSetter(v8Value, info);
}

static void valueAsStringAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SVGAngleTearOff* impl = V8SVGAngle::toImpl(holder);
    v8SetReturnValueString(info, impl->valueAsString(), info.GetIsolate());
}

static void valueAsStringAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAngleTearOffV8Internal::valueAsStringAttributeGetter(info);
}

static void valueAsStringAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "valueAsString", "SVGAngle", holder, info.GetIsolate());
    SVGAngleTearOff* impl = V8SVGAngle::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setValueAsString(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void valueAsStringAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SVGAngleTearOffV8Internal::valueAsStringAttributeSetter(v8Value, info);
}

static void newValueSpecifiedUnitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "newValueSpecifiedUnits", "SVGAngle", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGAngleTearOff* impl = V8SVGAngle::toImpl(info.Holder());
    unsigned unitType;
    float valueInSpecifiedUnits;
    {
        unitType = toUInt16(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        valueInSpecifiedUnits = toRestrictedFloat(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->newValueSpecifiedUnits(unitType, valueInSpecifiedUnits, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void newValueSpecifiedUnitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAngleTearOffV8Internal::newValueSpecifiedUnitsMethod(info);
}

static void convertToSpecifiedUnitsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "convertToSpecifiedUnits", "SVGAngle", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SVGAngleTearOff* impl = V8SVGAngle::toImpl(info.Holder());
    unsigned unitType;
    {
        unitType = toUInt16(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->convertToSpecifiedUnits(unitType, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void convertToSpecifiedUnitsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SVGAngleTearOffV8Internal::convertToSpecifiedUnitsMethod(info);
}

} // namespace SVGAngleTearOffV8Internal

void V8SVGAngle::visitDOMWrapper(v8::Isolate* isolate, ScriptWrappable* scriptWrappable, const v8::Persistent<v8::Object>& wrapper)
{
    SVGAngleTearOff* impl = scriptWrappable->toImpl<SVGAngleTearOff>();
    SVGElement* contextElement = impl->contextElement();
    if (contextElement) {
        DOMWrapperWorld::setWrapperReferencesInAllWorlds(wrapper, contextElement, isolate);
    }
}

const V8DOMConfiguration::AccessorConfiguration V8SVGAngleAccessors[] = {
    {"unitType", SVGAngleTearOffV8Internal::unitTypeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"value", SVGAngleTearOffV8Internal::valueAttributeGetterCallback, SVGAngleTearOffV8Internal::valueAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"valueInSpecifiedUnits", SVGAngleTearOffV8Internal::valueInSpecifiedUnitsAttributeGetterCallback, SVGAngleTearOffV8Internal::valueInSpecifiedUnitsAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"valueAsString", SVGAngleTearOffV8Internal::valueAsStringAttributeGetterCallback, SVGAngleTearOffV8Internal::valueAsStringAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8SVGAngleMethods[] = {
    {"newValueSpecifiedUnits", SVGAngleTearOffV8Internal::newValueSpecifiedUnitsMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"convertToSpecifiedUnits", SVGAngleTearOffV8Internal::convertToSpecifiedUnitsMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8SVGAngleTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SVGAngle::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8SVGAngle::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    const V8DOMConfiguration::ConstantConfiguration V8SVGAngleConstants[] = {
        {"SVG_ANGLETYPE_UNKNOWN", 0, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_ANGLETYPE_UNSPECIFIED", 1, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_ANGLETYPE_DEG", 2, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_ANGLETYPE_RAD", 3, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"SVG_ANGLETYPE_GRAD", 4, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, interfaceTemplate, prototypeTemplate, V8SVGAngleConstants, WTF_ARRAY_LENGTH(V8SVGAngleConstants));
    static_assert(0 == SVGAngleTearOff::kSvgAngletypeUnknown, "the value of SVGAngleTearOff_kSvgAngletypeUnknown does not match with implementation");
    static_assert(1 == SVGAngleTearOff::kSvgAngletypeUnspecified, "the value of SVGAngleTearOff_kSvgAngletypeUnspecified does not match with implementation");
    static_assert(2 == SVGAngleTearOff::kSvgAngletypeDeg, "the value of SVGAngleTearOff_kSvgAngletypeDeg does not match with implementation");
    static_assert(3 == SVGAngleTearOff::kSvgAngletypeRad, "the value of SVGAngleTearOff_kSvgAngletypeRad does not match with implementation");
    static_assert(4 == SVGAngleTearOff::kSvgAngletypeGrad, "the value of SVGAngleTearOff_kSvgAngletypeGrad does not match with implementation");
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGAngleAccessors, WTF_ARRAY_LENGTH(V8SVGAngleAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SVGAngleMethods, WTF_ARRAY_LENGTH(V8SVGAngleMethods));
}

v8::Local<v8::FunctionTemplate> V8SVGAngle::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SVGAngleTemplate);
}

bool V8SVGAngle::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SVGAngle::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SVGAngleTearOff* V8SVGAngle::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
