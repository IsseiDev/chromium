// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8PerformanceResourceTiming.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
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
const WrapperTypeInfo V8PerformanceResourceTiming::wrapperTypeInfo = { gin::kEmbedderBlink, V8PerformanceResourceTiming::domTemplate, V8PerformanceResourceTiming::trace, V8PerformanceResourceTiming::traceWrappers, 0, 0, V8PerformanceResourceTiming::preparePrototypeAndInterfaceObject, nullptr, "PerformanceResourceTiming", &V8PerformanceEntry::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PerformanceResourceTiming.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PerformanceResourceTiming::s_wrapperTypeInfo = V8PerformanceResourceTiming::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, PerformanceResourceTiming>::value,
    "PerformanceResourceTiming inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace PerformanceResourceTimingV8Internal {

static void initiatorTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValueString(info, impl->initiatorType(), info.GetIsolate());
}

static void initiatorTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::initiatorTypeAttributeGetter(info);
}

static void workerStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, impl->workerStart());
}

static void workerStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::workerStartAttributeGetter(info);
}

static void redirectStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, impl->redirectStart());
}

static void redirectStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::redirectStartAttributeGetter(info);
}

static void redirectEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, impl->redirectEnd());
}

static void redirectEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::redirectEndAttributeGetter(info);
}

static void fetchStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, impl->fetchStart());
}

static void fetchStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::fetchStartAttributeGetter(info);
}

static void domainLookupStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, impl->domainLookupStart());
}

static void domainLookupStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::domainLookupStartAttributeGetter(info);
}

static void domainLookupEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, impl->domainLookupEnd());
}

static void domainLookupEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::domainLookupEndAttributeGetter(info);
}

static void connectStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, impl->connectStart());
}

static void connectStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::connectStartAttributeGetter(info);
}

static void connectEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, impl->connectEnd());
}

static void connectEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::connectEndAttributeGetter(info);
}

static void secureConnectionStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, impl->secureConnectionStart());
}

static void secureConnectionStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::secureConnectionStartAttributeGetter(info);
}

static void requestStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, impl->requestStart());
}

static void requestStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::requestStartAttributeGetter(info);
}

static void responseStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, impl->responseStart());
}

static void responseStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::responseStartAttributeGetter(info);
}

static void responseEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, impl->responseEnd());
}

static void responseEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceResourceTimingV8Internal::responseEndAttributeGetter(info);
}

static void transferSizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->transferSize()));
}

static void transferSizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PerformanceResourceTimingSizes);
    PerformanceResourceTimingV8Internal::transferSizeAttributeGetter(info);
}

static void encodedBodySizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->encodedBodySize()));
}

static void encodedBodySizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PerformanceResourceTimingSizes);
    PerformanceResourceTimingV8Internal::encodedBodySizeAttributeGetter(info);
}

static void decodedBodySizeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PerformanceResourceTiming* impl = V8PerformanceResourceTiming::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->decodedBodySize()));
}

static void decodedBodySizeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PerformanceResourceTimingSizes);
    PerformanceResourceTimingV8Internal::decodedBodySizeAttributeGetter(info);
}

} // namespace PerformanceResourceTimingV8Internal

const V8DOMConfiguration::AccessorConfiguration V8PerformanceResourceTimingAccessors[] = {
    {"initiatorType", PerformanceResourceTimingV8Internal::initiatorTypeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"workerStart", PerformanceResourceTimingV8Internal::workerStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"redirectStart", PerformanceResourceTimingV8Internal::redirectStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"redirectEnd", PerformanceResourceTimingV8Internal::redirectEndAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"fetchStart", PerformanceResourceTimingV8Internal::fetchStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"domainLookupStart", PerformanceResourceTimingV8Internal::domainLookupStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"domainLookupEnd", PerformanceResourceTimingV8Internal::domainLookupEndAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"connectStart", PerformanceResourceTimingV8Internal::connectStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"connectEnd", PerformanceResourceTimingV8Internal::connectEndAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"secureConnectionStart", PerformanceResourceTimingV8Internal::secureConnectionStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"requestStart", PerformanceResourceTimingV8Internal::requestStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"responseStart", PerformanceResourceTimingV8Internal::responseStartAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"responseEnd", PerformanceResourceTimingV8Internal::responseEndAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"transferSize", PerformanceResourceTimingV8Internal::transferSizeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"encodedBodySize", PerformanceResourceTimingV8Internal::encodedBodySizeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"decodedBodySize", PerformanceResourceTimingV8Internal::decodedBodySizeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8PerformanceResourceTimingTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8PerformanceResourceTiming::wrapperTypeInfo.interfaceName, V8PerformanceEntry::domTemplate(isolate, world), V8PerformanceResourceTiming::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PerformanceResourceTimingAccessors, WTF_ARRAY_LENGTH(V8PerformanceResourceTimingAccessors));
}

v8::Local<v8::FunctionTemplate> V8PerformanceResourceTiming::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PerformanceResourceTimingTemplate);
}

bool V8PerformanceResourceTiming::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PerformanceResourceTiming::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PerformanceResourceTiming* V8PerformanceResourceTiming::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink