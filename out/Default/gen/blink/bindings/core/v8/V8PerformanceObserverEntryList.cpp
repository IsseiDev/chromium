// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8PerformanceObserverEntryList.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8PerformanceEntry.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8PerformanceObserverEntryList::wrapperTypeInfo = { gin::kEmbedderBlink, V8PerformanceObserverEntryList::domTemplate, V8PerformanceObserverEntryList::trace, V8PerformanceObserverEntryList::traceWrappers, 0, 0, V8PerformanceObserverEntryList::preparePrototypeAndInterfaceObject, nullptr, "PerformanceObserverEntryList", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PerformanceObserverEntryList.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PerformanceObserverEntryList::s_wrapperTypeInfo = V8PerformanceObserverEntryList::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, PerformanceObserverEntryList>::value,
    "PerformanceObserverEntryList inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace PerformanceObserverEntryListV8Internal {

static void getEntriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceObserverEntryList* impl = V8PerformanceObserverEntryList::toImpl(info.Holder());
    v8SetReturnValue(info, toV8(impl->getEntries(), info.Holder(), info.GetIsolate()));
}

static void getEntriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceObserverEntryListV8Internal::getEntriesMethod(info);
}

static void getEntriesByTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getEntriesByType", "PerformanceObserverEntryList", 1, info.Length()));
        return;
    }
    PerformanceObserverEntryList* impl = V8PerformanceObserverEntryList::toImpl(info.Holder());
    V8StringResource<> entryType;
    {
        entryType = info[0];
        if (!entryType.prepare())
            return;
    }
    v8SetReturnValue(info, toV8(impl->getEntriesByType(entryType), info.Holder(), info.GetIsolate()));
}

static void getEntriesByTypeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceObserverEntryListV8Internal::getEntriesByTypeMethod(info);
}

static void getEntriesByNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getEntriesByName", "PerformanceObserverEntryList", 1, info.Length()));
        return;
    }
    PerformanceObserverEntryList* impl = V8PerformanceObserverEntryList::toImpl(info.Holder());
    V8StringResource<> name;
    V8StringResource<> entryType;
    {
        name = info[0];
        if (!name.prepare())
            return;
        if (!info[1]->IsUndefined()) {
            entryType = info[1];
            if (!entryType.prepare())
                return;
        } else {
            entryType = nullptr;
        }
    }
    v8SetReturnValue(info, toV8(impl->getEntriesByName(name, entryType), info.Holder(), info.GetIsolate()));
}

static void getEntriesByNameMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceObserverEntryListV8Internal::getEntriesByNameMethod(info);
}

} // namespace PerformanceObserverEntryListV8Internal

const V8DOMConfiguration::MethodConfiguration V8PerformanceObserverEntryListMethods[] = {
    {"getEntries", PerformanceObserverEntryListV8Internal::getEntriesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"getEntriesByType", PerformanceObserverEntryListV8Internal::getEntriesByTypeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"getEntriesByName", PerformanceObserverEntryListV8Internal::getEntriesByNameMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8PerformanceObserverEntryListTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8PerformanceObserverEntryList::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8PerformanceObserverEntryList::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::performanceObserverEnabled()) {
        V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PerformanceObserverEntryListMethods, WTF_ARRAY_LENGTH(V8PerformanceObserverEntryListMethods));
    }
}

v8::Local<v8::FunctionTemplate> V8PerformanceObserverEntryList::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PerformanceObserverEntryListTemplate);
}

bool V8PerformanceObserverEntryList::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PerformanceObserverEntryList::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PerformanceObserverEntryList* V8PerformanceObserverEntryList::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink