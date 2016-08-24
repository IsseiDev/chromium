// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8USBEndpoint.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8USBAlternateInterface.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "core/inspector/ConsoleMessage.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8USBEndpoint::wrapperTypeInfo = { gin::kEmbedderBlink, V8USBEndpoint::domTemplate, V8USBEndpoint::trace, V8USBEndpoint::traceWrappers, 0, 0, V8USBEndpoint::preparePrototypeAndInterfaceObject, nullptr, "USBEndpoint", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in USBEndpoint.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& USBEndpoint::s_wrapperTypeInfo = V8USBEndpoint::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, USBEndpoint>::value,
    "USBEndpoint inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace USBEndpointV8Internal {

static void endpointNumberAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBEndpoint* impl = V8USBEndpoint::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->endpointNumber());
}

static void endpointNumberAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBEndpointV8Internal::endpointNumberAttributeGetter(info);
}

static void directionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBEndpoint* impl = V8USBEndpoint::toImpl(holder);
    v8SetReturnValueString(info, impl->direction(), info.GetIsolate());
}

static void directionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBEndpointV8Internal::directionAttributeGetter(info);
}

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBEndpoint* impl = V8USBEndpoint::toImpl(holder);
    v8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBEndpointV8Internal::typeAttributeGetter(info);
}

static void packetSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    USBEndpoint* impl = V8USBEndpoint::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->packetSize());
}

static void packetSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    USBEndpointV8Internal::packetSizeAttributeGetter(info);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "USBEndpoint", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 3)) {
        setMinimumArityTypeError(exceptionState, 3, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    USBAlternateInterface* alternate;
    unsigned endpointNumber;
    V8StringResource<> direction;
    {
        alternate = V8USBAlternateInterface::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!alternate) {
            exceptionState.throwTypeError("parameter 1 is not of type 'USBAlternateInterface'.");
            exceptionState.throwIfNeeded();
            return;
        }
        endpointNumber = toUInt8(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        direction = info[2];
        if (!direction.prepare())
            return;
        const char* validValues[] = {
            "in",
            "out",
        };
        if (!isValidEnum(direction, validValues, WTF_ARRAY_LENGTH(validValues), "USBDirection", exceptionState)) {
            exceptionState.throwIfNeeded();
            return;
        }
    }
    USBEndpoint* impl = USBEndpoint::create(alternate, endpointNumber, direction, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8USBEndpoint::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace USBEndpointV8Internal

const V8DOMConfiguration::AccessorConfiguration V8USBEndpointAccessors[] = {
    {"endpointNumber", USBEndpointV8Internal::endpointNumberAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"direction", USBEndpointV8Internal::directionAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"type", USBEndpointV8Internal::typeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"packetSize", USBEndpointV8Internal::packetSizeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

void V8USBEndpoint::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("USBEndpoint"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    USBEndpointV8Internal::constructor(info);
}

static void installV8USBEndpointTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8USBEndpoint::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8USBEndpoint::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8USBEndpoint::constructorCallback);
    interfaceTemplate->SetLength(3);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::webUSBEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8USBEndpointAccessors, WTF_ARRAY_LENGTH(V8USBEndpointAccessors));
    }
}

v8::Local<v8::FunctionTemplate> V8USBEndpoint::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8USBEndpointTemplate);
}

bool V8USBEndpoint::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8USBEndpoint::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

USBEndpoint* V8USBEndpoint::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
