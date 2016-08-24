// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8PositionError.h"

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
const WrapperTypeInfo V8PositionError::wrapperTypeInfo = { gin::kEmbedderBlink, V8PositionError::domTemplate, V8PositionError::trace, V8PositionError::traceWrappers, 0, 0, V8PositionError::preparePrototypeAndInterfaceObject, nullptr, "PositionError", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PositionError.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PositionError::s_wrapperTypeInfo = V8PositionError::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, PositionError>::value,
    "PositionError inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace PositionErrorV8Internal {

static void codeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PositionError* impl = V8PositionError::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->code());
}

static void codeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PositionErrorV8Internal::codeAttributeGetter(info);
}

static void messageAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PositionError* impl = V8PositionError::toImpl(holder);
    v8SetReturnValueString(info, impl->message(), info.GetIsolate());
}

static void messageAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PositionErrorV8Internal::messageAttributeGetter(info);
}

} // namespace PositionErrorV8Internal

const V8DOMConfiguration::AccessorConfiguration V8PositionErrorAccessors[] = {
    {"code", PositionErrorV8Internal::codeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"message", PositionErrorV8Internal::messageAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8PositionErrorTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8PositionError::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8PositionError::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    const V8DOMConfiguration::ConstantConfiguration V8PositionErrorConstants[] = {
        {"PERMISSION_DENIED", 1, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"POSITION_UNAVAILABLE", 2, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
        {"TIMEOUT", 3, 0, V8DOMConfiguration::ConstantTypeUnsignedShort},
    };
    V8DOMConfiguration::installConstants(isolate, interfaceTemplate, prototypeTemplate, V8PositionErrorConstants, WTF_ARRAY_LENGTH(V8PositionErrorConstants));
    static_assert(1 == PositionError::kPermissionDenied, "the value of PositionError_kPermissionDenied does not match with implementation");
    static_assert(2 == PositionError::kPositionUnavailable, "the value of PositionError_kPositionUnavailable does not match with implementation");
    static_assert(3 == PositionError::kTimeout, "the value of PositionError_kTimeout does not match with implementation");
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PositionErrorAccessors, WTF_ARRAY_LENGTH(V8PositionErrorAccessors));
}

v8::Local<v8::FunctionTemplate> V8PositionError::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PositionErrorTemplate);
}

bool V8PositionError::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PositionError::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PositionError* V8PositionError::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
