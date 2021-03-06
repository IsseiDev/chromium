// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8Performance.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8MemoryInfo.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8PerformanceEntry.h"
#include "bindings/core/v8/V8PerformanceNavigation.h"
#include "bindings/core/v8/V8PerformanceTiming.h"
#include "core/dom/Document.h"
#include "core/frame/Deprecation.h"
#include "core/frame/UseCounter.h"
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
const WrapperTypeInfo V8Performance::wrapperTypeInfo = { gin::kEmbedderBlink, V8Performance::domTemplate, V8Performance::trace, V8Performance::traceWrappers, 0, 0, V8Performance::preparePrototypeAndInterfaceObject, nullptr, "Performance", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Performance.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Performance::s_wrapperTypeInfo = V8Performance::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, Performance>::value,
    "Performance inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace PerformanceV8Internal {

static void onresourcetimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onresourcetimingbufferfull()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onresourcetimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceV8Internal::onresourcetimingbufferfullAttributeGetter(info);
}

static void onresourcetimingbufferfullAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onresourcetimingbufferfull(), v8Value, V8Performance::eventListenerCacheIndex);
    impl->setOnresourcetimingbufferfull(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onresourcetimingbufferfullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    PerformanceV8Internal::onresourcetimingbufferfullAttributeSetter(v8Value, info);
}

static void onwebkitresourcetimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onwebkitresourcetimingbufferfull()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onwebkitresourcetimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedPerformanceResourceTimingBufferFull);
    PerformanceV8Internal::onwebkitresourcetimingbufferfullAttributeGetter(info);
}

static void onwebkitresourcetimingbufferfullAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onwebkitresourcetimingbufferfull(), v8Value, V8Performance::eventListenerCacheIndex);
    impl->setOnwebkitresourcetimingbufferfull(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onwebkitresourcetimingbufferfullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedPerformanceResourceTimingBufferFull);
    PerformanceV8Internal::onwebkitresourcetimingbufferfullAttributeSetter(v8Value, info);
}

static void timingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    PerformanceTiming* cppValue(WTF::getPtr(impl->timing()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "timing"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void timingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Performance_Timing_AttributeGetter);
    PerformanceV8Internal::timingAttributeGetter(info);
}

static void navigationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    PerformanceNavigation* cppValue(WTF::getPtr(impl->navigation()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "navigation"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void navigationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Performance_Navigation_AttributeGetter);
    PerformanceV8Internal::navigationAttributeGetter(info);
}

static void onframetimingbufferfullAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onframetimingbufferfull()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onframetimingbufferfullAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceV8Internal::onframetimingbufferfullAttributeGetter(info);
}

static void onframetimingbufferfullAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onframetimingbufferfull(), v8Value, V8Performance::eventListenerCacheIndex);
    impl->setOnframetimingbufferfull(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onframetimingbufferfullAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    PerformanceV8Internal::onframetimingbufferfullAttributeSetter(v8Value, info);
}

static void memoryAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Performance* impl = V8Performance::toImpl(holder);
    MemoryInfo* cppValue(WTF::getPtr(impl->memory()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "memory"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void memoryAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8Performance_Memory_AttributeGetter);
    PerformanceV8Internal::memoryAttributeGetter(info);
}

static void nowMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    v8SetReturnValue(info, impl->now());
}

static void nowMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceV8Internal::nowMethod(info);
}

static void getEntriesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    v8SetReturnValue(info, toV8(impl->getEntries(), info.Holder(), info.GetIsolate()));
}

static void getEntriesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedPerformanceTimeline);
    PerformanceV8Internal::getEntriesMethod(info);
}

static void getEntriesByTypeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getEntriesByType", "Performance", 1, info.Length()));
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
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
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedPerformanceTimeline);
    PerformanceV8Internal::getEntriesByTypeMethod(info);
}

static void getEntriesByNameMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "getEntriesByName", "Performance", 1, info.Length()));
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
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
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedPerformanceTimeline);
    PerformanceV8Internal::getEntriesByNameMethod(info);
}

static void clearResourceTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    impl->clearResourceTimings();
}

static void clearResourceTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceV8Internal::clearResourceTimingsMethod(info);
}

static void setResourceTimingBufferSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setResourceTimingBufferSize", "Performance", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
    unsigned maxSize;
    {
        maxSize = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->setResourceTimingBufferSize(maxSize);
}

static void setResourceTimingBufferSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PerformanceV8Internal::setResourceTimingBufferSizeMethod(info);
}

static void webkitClearResourceTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    impl->clearResourceTimings();
}

static void webkitClearResourceTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedPerformanceClearResourceTimings);
    PerformanceV8Internal::webkitClearResourceTimingsMethod(info);
}

static void webkitSetResourceTimingBufferSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "webkitSetResourceTimingBufferSize", "Performance", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
    unsigned maxSize;
    {
        maxSize = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->setResourceTimingBufferSize(maxSize);
}

static void webkitSetResourceTimingBufferSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedPerformanceSetResourceTimingBufferSize);
    PerformanceV8Internal::webkitSetResourceTimingBufferSizeMethod(info);
}

static void markMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "mark", "Performance", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
    V8StringResource<> markName;
    {
        markName = info[0];
        if (!markName.prepare())
            return;
    }
    impl->mark(markName, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void markMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedUserTiming);
    PerformanceV8Internal::markMethod(info);
}

static void clearMarksMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    V8StringResource<> markName;
    {
        if (!info[0]->IsUndefined()) {
            markName = info[0];
            if (!markName.prepare())
                return;
        } else {
            markName = nullptr;
        }
    }
    impl->clearMarks(markName);
}

static void clearMarksMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedUserTiming);
    PerformanceV8Internal::clearMarksMethod(info);
}

static void measureMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "measure", "Performance", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
    V8StringResource<> measureName;
    V8StringResource<> startMark;
    V8StringResource<> endMark;
    {
        measureName = info[0];
        if (!measureName.prepare())
            return;
        if (!info[1]->IsUndefined()) {
            startMark = info[1];
            if (!startMark.prepare())
                return;
        } else {
            startMark = nullptr;
        }
        if (!info[2]->IsUndefined()) {
            endMark = info[2];
            if (!endMark.prepare())
                return;
        } else {
            endMark = nullptr;
        }
    }
    impl->measure(measureName, startMark, endMark, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void measureMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedUserTiming);
    PerformanceV8Internal::measureMethod(info);
}

static void clearMeasuresMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    V8StringResource<> measureName;
    {
        if (!info[0]->IsUndefined()) {
            measureName = info[0];
            if (!measureName.prepare())
                return;
        } else {
            measureName = nullptr;
        }
    }
    impl->clearMeasures(measureName);
}

static void clearMeasuresMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::UnprefixedUserTiming);
    PerformanceV8Internal::clearMeasuresMethod(info);
}

static void clearFrameTimingsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Performance* impl = V8Performance::toImpl(info.Holder());
    impl->clearFrameTimings();
}

static void clearFrameTimingsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PerformanceFrameTiming);
    PerformanceV8Internal::clearFrameTimingsMethod(info);
}

static void setFrameTimingBufferSizeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setFrameTimingBufferSize", "Performance", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    Performance* impl = V8Performance::toImpl(info.Holder());
    unsigned maxSize;
    {
        maxSize = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->setFrameTimingBufferSize(maxSize);
}

static void setFrameTimingBufferSizeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PerformanceFrameTiming);
    PerformanceV8Internal::setFrameTimingBufferSizeMethod(info);
}

} // namespace PerformanceV8Internal

const V8DOMConfiguration::AccessorConfiguration V8PerformanceAccessors[] = {
    {"onresourcetimingbufferfull", PerformanceV8Internal::onresourcetimingbufferfullAttributeGetterCallback, PerformanceV8Internal::onresourcetimingbufferfullAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onwebkitresourcetimingbufferfull", PerformanceV8Internal::onwebkitresourcetimingbufferfullAttributeGetterCallback, PerformanceV8Internal::onwebkitresourcetimingbufferfullAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"timing", PerformanceV8Internal::timingAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"navigation", PerformanceV8Internal::navigationAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"memory", PerformanceV8Internal::memoryAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8PerformanceMethods[] = {
    {"now", PerformanceV8Internal::nowMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"getEntries", PerformanceV8Internal::getEntriesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"getEntriesByType", PerformanceV8Internal::getEntriesByTypeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"getEntriesByName", PerformanceV8Internal::getEntriesByNameMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"clearResourceTimings", PerformanceV8Internal::clearResourceTimingsMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"setResourceTimingBufferSize", PerformanceV8Internal::setResourceTimingBufferSizeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"webkitClearResourceTimings", PerformanceV8Internal::webkitClearResourceTimingsMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"webkitSetResourceTimingBufferSize", PerformanceV8Internal::webkitSetResourceTimingBufferSizeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"mark", PerformanceV8Internal::markMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"clearMarks", PerformanceV8Internal::clearMarksMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"measure", PerformanceV8Internal::measureMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"clearMeasures", PerformanceV8Internal::clearMeasuresMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8PerformanceTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Performance::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8Performance::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PerformanceAccessors, WTF_ARRAY_LENGTH(V8PerformanceAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PerformanceMethods, WTF_ARRAY_LENGTH(V8PerformanceMethods));

    if (RuntimeEnabledFeatures::frameTimingSupportEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessoronframetimingbufferfullConfiguration = \
        {"onframetimingbufferfull", PerformanceV8Internal::onframetimingbufferfullAttributeGetterCallback, PerformanceV8Internal::onframetimingbufferfullAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessoronframetimingbufferfullConfiguration);
    }

    if (RuntimeEnabledFeatures::frameTimingSupportEnabled()) {
        const V8DOMConfiguration::MethodConfiguration clearFrameTimingsMethodConfiguration = {"clearFrameTimings", PerformanceV8Internal::clearFrameTimingsMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype};
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, clearFrameTimingsMethodConfiguration);
    }
    if (RuntimeEnabledFeatures::frameTimingSupportEnabled()) {
        const V8DOMConfiguration::MethodConfiguration setFrameTimingBufferSizeMethodConfiguration = {"setFrameTimingBufferSize", PerformanceV8Internal::setFrameTimingBufferSizeMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype};
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, setFrameTimingBufferSizeMethodConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8Performance::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PerformanceTemplate);
}

bool V8Performance::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Performance::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Performance* V8Performance::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
