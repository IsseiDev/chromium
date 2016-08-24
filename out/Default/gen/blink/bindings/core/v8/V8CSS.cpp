// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8CSS.h"

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
const WrapperTypeInfo V8CSS::wrapperTypeInfo = { gin::kEmbedderBlink, V8CSS::domTemplate, V8CSS::trace, V8CSS::traceWrappers, 0, 0, V8CSS::preparePrototypeAndInterfaceObject, nullptr, "CSS", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMWindowCSS.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DOMWindowCSS::s_wrapperTypeInfo = V8CSS::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, DOMWindowCSS>::value,
    "DOMWindowCSS inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DOMWindowCSSV8Internal {

static void supports1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    V8StringResource<> property;
    V8StringResource<> value;
    {
        property = info[0];
        if (!property.prepare())
            return;
        value = info[1];
        if (!value.prepare())
            return;
    }
    v8SetReturnValueBool(info, DOMWindowCSS::supports(property, value));
}

static void supports2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    V8StringResource<> conditionText;
    {
        conditionText = info[0];
        if (!conditionText.prepare())
            return;
    }
    v8SetReturnValueBool(info, DOMWindowCSS::supports(conditionText));
}

static void supportsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "supports", "CSS", info.Holder(), info.GetIsolate());
    switch (std::min(2, info.Length())) {
    case 1:
        if (true) {
            supports2Method(info);
            return;
        }
        break;
    case 2:
        if (true) {
            supports1Method(info);
            return;
        }
        break;
    default:
        break;
    }
    if (info.Length() < 1) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    exceptionState.throwTypeError("No function was found that matched the signature provided.");
    exceptionState.throwIfNeeded();
    return;
}

static void supportsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMWindowCSSV8Internal::supportsMethod(info);
}

static void escapeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "escape", "CSS", 1, info.Length()));
        return;
    }
    V8StringResource<> ident;
    {
        ident = info[0];
        if (!ident.prepare())
            return;
    }
    v8SetReturnValueString(info, DOMWindowCSS::escape(ident), info.GetIsolate());
}

static void escapeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMWindowCSSV8Internal::escapeMethod(info);
}

} // namespace DOMWindowCSSV8Internal

const V8DOMConfiguration::MethodConfiguration V8CSSMethods[] = {
    {"supports", DOMWindowCSSV8Internal::supportsMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInterface},
    {"escape", DOMWindowCSSV8Internal::escapeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInterface},
};

static void installV8CSSTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8CSS::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8CSS::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8CSSMethods, WTF_ARRAY_LENGTH(V8CSSMethods));
}

v8::Local<v8::FunctionTemplate> V8CSS::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8CSSTemplate);
}

bool V8CSS::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8CSS::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMWindowCSS* V8CSS::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
