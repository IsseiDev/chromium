// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8WorkerGlobalScope.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8Blob.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ErrorHandler.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8HTMLCanvasElement.h"
#include "bindings/core/v8/V8HTMLImageElement.h"
#include "bindings/core/v8/V8HTMLVideoElement.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ImageBitmap.h"
#include "bindings/core/v8/V8ImageBitmapOptions.h"
#include "bindings/core/v8/V8ImageData.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8WorkerGlobalScope.h"
#include "bindings/core/v8/V8WorkerLocation.h"
#include "bindings/core/v8/V8WorkerNavigator.h"
#include "bindings/core/v8/V8WorkerPerformance.h"
#include "core/dom/Document.h"
#include "core/frame/DOMWindowTimers.h"
#include "core/imagebitmap/ImageBitmapFactories.h"
#include "core/inspector/ConsoleMessage.h"
#include "core/timing/WorkerGlobalScopePerformance.h"
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
WrapperTypeInfo V8WorkerGlobalScope::wrapperTypeInfo = { gin::kEmbedderBlink, V8WorkerGlobalScope::domTemplate, V8WorkerGlobalScope::trace, V8WorkerGlobalScope::traceWrappers, V8WorkerGlobalScope::toActiveScriptWrappable, 0, V8WorkerGlobalScope::preparePrototypeAndInterfaceObject, nullptr, "WorkerGlobalScope", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in WorkerGlobalScope.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& WorkerGlobalScope::s_wrapperTypeInfo = V8WorkerGlobalScope::wrapperTypeInfo;

namespace WorkerGlobalScopeV8Internal {

static void selfAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->self()), impl);
}

static void selfAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::selfAttributeGetter(info);
}

static void locationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    WorkerLocation* cppValue(WTF::getPtr(impl->location()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "location"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void locationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::locationAttributeGetter(info);
}

static void onerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onerror()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::onerrorAttributeGetter(info);
}

static void onerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onerror(), v8Value, V8WorkerGlobalScope::eventListenerCacheIndex);
    impl->setOnerror(V8EventListenerList::findOrCreateWrapper<V8ErrorHandler>(v8Value, true, ScriptState::current(info.GetIsolate())));
}

static void onerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    WorkerGlobalScopeV8Internal::onerrorAttributeSetter(v8Value, info);
}

static void navigatorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    WorkerNavigator* cppValue(WTF::getPtr(impl->navigator()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "navigator"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void navigatorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::navigatorAttributeGetter(info);
}

static void addressSpaceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    v8SetReturnValueString(info, impl->addressSpaceForBindings(), info.GetIsolate());
}

static void addressSpaceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::addressSpaceAttributeGetter(info);
}

static void onrejectionhandledAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onrejectionhandled()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onrejectionhandledAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::onrejectionhandledAttributeGetter(info);
}

static void onrejectionhandledAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onrejectionhandled(), v8Value, V8WorkerGlobalScope::eventListenerCacheIndex);
    impl->setOnrejectionhandled(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onrejectionhandledAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    WorkerGlobalScopeV8Internal::onrejectionhandledAttributeSetter(v8Value, info);
}

static void onunhandledrejectionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onunhandledrejection()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onunhandledrejectionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::onunhandledrejectionAttributeGetter(info);
}

static void onunhandledrejectionAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onunhandledrejection(), v8Value, V8WorkerGlobalScope::eventListenerCacheIndex);
    impl->setOnunhandledrejection(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onunhandledrejectionAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    WorkerGlobalScopeV8Internal::onunhandledrejectionAttributeSetter(v8Value, info);
}

static void performanceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    WorkerPerformance* cppValue(WorkerGlobalScopePerformance::performance(*impl));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "performance"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void performanceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::performanceAttributeGetter(info);
}

static void importScriptsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "importScripts", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(info.Holder());
    Vector<String> urls;
    {
        urls = toImplArguments<Vector<String>>(info, 0, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->importScripts(urls, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void importScriptsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::importScriptsMethod(info);
}

static void btoaMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "btoa", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(info.Holder());
    V8StringResource<> btoa;
    {
        btoa = info[0];
        if (!btoa.prepare())
            return;
    }
    String result = impl->btoa(btoa, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueString(info, result, info.GetIsolate());
}

static void btoaMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::btoaMethod(info);
}

static void atobMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "atob", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(info.Holder());
    V8StringResource<> atob;
    {
        atob = info[0];
        if (!atob.prepare())
            return;
    }
    String result = impl->atob(atob, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueString(info, result, info.GetIsolate());
}

static void atobMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::atobMethod(info);
}

static void setTimeout1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setTimeout", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(info.Holder());
    ScriptValue handler;
    int timeout;
    Vector<ScriptValue> arguments;
    {
        if (!info[0]->IsFunction()) {
            exceptionState.throwTypeError("The callback provided as parameter 1 is not a function.");
            exceptionState.throwIfNeeded();
            return;
        }
        handler = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
        if (!info[1]->IsUndefined()) {
            timeout = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            timeout = 0;
        }
        arguments = toImplArguments<Vector<ScriptValue>>(info, 2, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    int result = DOMWindowTimers::setTimeout(scriptState, *impl, handler, timeout, arguments);
    v8SetReturnValueInt(info, result);
}

static void setTimeout2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setTimeout", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(info.Holder());
    V8StringResource<> handler;
    int timeout;
    Vector<ScriptValue> arguments;
    {
        handler = info[0];
        if (!handler.prepare())
            return;
        if (!info[1]->IsUndefined()) {
            timeout = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            timeout = 0;
        }
        arguments = toImplArguments<Vector<ScriptValue>>(info, 2, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    int result = DOMWindowTimers::setTimeout(scriptState, *impl, handler, timeout, arguments);
    v8SetReturnValueInt(info, result);
}

static void setTimeoutMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setTimeout", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    switch (std::min(3, info.Length())) {
    case 1:
        if (info[0]->IsFunction()) {
            setTimeout1Method(info);
            return;
        }
        if (true) {
            setTimeout2Method(info);
            return;
        }
        break;
    case 2:
        if (info[0]->IsFunction()) {
            setTimeout1Method(info);
            return;
        }
        if (true) {
            setTimeout2Method(info);
            return;
        }
        break;
    case 3:
        if (info[0]->IsFunction()) {
            setTimeout1Method(info);
            return;
        }
        if (true) {
            setTimeout2Method(info);
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

static void setTimeoutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::setTimeoutMethod(info);
}

static void clearTimeoutMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "clearTimeout", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(info.Holder());
    int handle;
    {
        if (!info[0]->IsUndefined()) {
            handle = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            handle = 0;
        }
    }
    DOMWindowTimers::clearTimeout(*impl, handle);
}

static void clearTimeoutMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::clearTimeoutMethod(info);
}

static void setInterval1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setInterval", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(info.Holder());
    ScriptValue handler;
    int timeout;
    Vector<ScriptValue> arguments;
    {
        if (!info[0]->IsFunction()) {
            exceptionState.throwTypeError("The callback provided as parameter 1 is not a function.");
            exceptionState.throwIfNeeded();
            return;
        }
        handler = ScriptValue(ScriptState::current(info.GetIsolate()), info[0]);
        if (!info[1]->IsUndefined()) {
            timeout = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            timeout = 0;
        }
        arguments = toImplArguments<Vector<ScriptValue>>(info, 2, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    int result = DOMWindowTimers::setInterval(scriptState, *impl, handler, timeout, arguments);
    v8SetReturnValueInt(info, result);
}

static void setInterval2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setInterval", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(info.Holder());
    V8StringResource<> handler;
    int timeout;
    Vector<ScriptValue> arguments;
    {
        handler = info[0];
        if (!handler.prepare())
            return;
        if (!info[1]->IsUndefined()) {
            timeout = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            timeout = 0;
        }
        arguments = toImplArguments<Vector<ScriptValue>>(info, 2, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    int result = DOMWindowTimers::setInterval(scriptState, *impl, handler, timeout, arguments);
    v8SetReturnValueInt(info, result);
}

static void setIntervalMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setInterval", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    switch (std::min(3, info.Length())) {
    case 1:
        if (info[0]->IsFunction()) {
            setInterval1Method(info);
            return;
        }
        if (true) {
            setInterval2Method(info);
            return;
        }
        break;
    case 2:
        if (info[0]->IsFunction()) {
            setInterval1Method(info);
            return;
        }
        if (true) {
            setInterval2Method(info);
            return;
        }
        break;
    case 3:
        if (info[0]->IsFunction()) {
            setInterval1Method(info);
            return;
        }
        if (true) {
            setInterval2Method(info);
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

static void setIntervalMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::setIntervalMethod(info);
}

static void clearIntervalMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "clearInterval", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(info.Holder());
    int handle;
    {
        if (!info[0]->IsUndefined()) {
            handle = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            handle = 0;
        }
    }
    DOMWindowTimers::clearInterval(*impl, handle);
}

static void clearIntervalMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::clearIntervalMethod(info);
}

static void createImageBitmap1MethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(info.Holder());
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap imageBitmap;
    ImageBitmapOptions options;
    {
        V8HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::toImpl(info.GetIsolate(), info[0], imageBitmap, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('options') is not an object.");
            return;
        }
        V8ImageBitmapOptions::toImpl(info.GetIsolate(), info[1], options, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = ImageBitmapFactories::createImageBitmap(scriptState, *impl, imageBitmap, options, exceptionState);
    if (exceptionState.hadException()) {
        return;
    }
    v8SetReturnValue(info, result.v8Value());
}

static void createImageBitmap1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createImageBitmap", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    createImageBitmap1MethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void createImageBitmap2MethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(info.Holder());
    HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap imageBitmap;
    int sx;
    int sy;
    int sw;
    int sh;
    ImageBitmapOptions options;
    {
        V8HTMLImageElementOrHTMLVideoElementOrHTMLCanvasElementOrBlobOrImageDataOrImageBitmap::toImpl(info.GetIsolate(), info[0], imageBitmap, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;
        sx = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        sy = toInt32(info.GetIsolate(), info[2], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        sw = toInt32(info.GetIsolate(), info[3], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        sh = toInt32(info.GetIsolate(), info[4], NormalConversion, exceptionState);
        if (exceptionState.hadException())
            return;
        if (!isUndefinedOrNull(info[5]) && !info[5]->IsObject()) {
            exceptionState.throwTypeError("parameter 6 ('options') is not an object.");
            return;
        }
        V8ImageBitmapOptions::toImpl(info.GetIsolate(), info[5], options, exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = ImageBitmapFactories::createImageBitmap(scriptState, *impl, imageBitmap, sx, sy, sw, sh, options, exceptionState);
    if (exceptionState.hadException()) {
        return;
    }
    v8SetReturnValue(info, result.v8Value());
}

static void createImageBitmap2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createImageBitmap", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    createImageBitmap2MethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void createImageBitmapMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "createImageBitmap", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    switch (std::min(6, info.Length())) {
    case 1:
        if (true) {
            createImageBitmap1Method(info);
            return;
        }
        break;
    case 2:
        if (true) {
            createImageBitmap1Method(info);
            return;
        }
        break;
    case 5:
        if (true) {
            createImageBitmap2Method(info);
            return;
        }
        break;
    case 6:
        if (true) {
            createImageBitmap2Method(info);
            return;
        }
        break;
    default:
        if (info.Length() >= 1) {
            setArityTypeError(exceptionState, "[1, 2, 5, 6]", info.Length());
            v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
            return;
        }
        break;
    }
    if (info.Length() < 1) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
        return;
    }
    exceptionState.throwTypeError("No function was found that matched the signature provided.");
    v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
    return;
}

static void createImageBitmapMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopeV8Internal::createImageBitmapMethod(info);
}

} // namespace WorkerGlobalScopeV8Internal

const V8DOMConfiguration::AccessorConfiguration V8WorkerGlobalScopeAccessors[] = {
    {"self", WorkerGlobalScopeV8Internal::selfAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"location", WorkerGlobalScopeV8Internal::locationAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onerror", WorkerGlobalScopeV8Internal::onerrorAttributeGetterCallback, WorkerGlobalScopeV8Internal::onerrorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"navigator", WorkerGlobalScopeV8Internal::navigatorAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onrejectionhandled", WorkerGlobalScopeV8Internal::onrejectionhandledAttributeGetterCallback, WorkerGlobalScopeV8Internal::onrejectionhandledAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onunhandledrejection", WorkerGlobalScopeV8Internal::onunhandledrejectionAttributeGetterCallback, WorkerGlobalScopeV8Internal::onunhandledrejectionAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"performance", WorkerGlobalScopeV8Internal::performanceAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8WorkerGlobalScopeMethods[] = {
    {"importScripts", WorkerGlobalScopeV8Internal::importScriptsMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"btoa", WorkerGlobalScopeV8Internal::btoaMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"atob", WorkerGlobalScopeV8Internal::atobMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"setTimeout", WorkerGlobalScopeV8Internal::setTimeoutMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"clearTimeout", WorkerGlobalScopeV8Internal::clearTimeoutMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"setInterval", WorkerGlobalScopeV8Internal::setIntervalMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"clearInterval", WorkerGlobalScopeV8Internal::clearIntervalMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"createImageBitmap", WorkerGlobalScopeV8Internal::createImageBitmapMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

void V8WorkerGlobalScope::installV8WorkerGlobalScopeTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8WorkerGlobalScope::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8WorkerGlobalScope::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8WorkerGlobalScopeAccessors, WTF_ARRAY_LENGTH(V8WorkerGlobalScopeAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8WorkerGlobalScopeMethods, WTF_ARRAY_LENGTH(V8WorkerGlobalScopeMethods));

    if (RuntimeEnabledFeatures::corsRFC1918Enabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessoraddressSpaceConfiguration = \
        {"addressSpace", WorkerGlobalScopeV8Internal::addressSpaceAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessoraddressSpaceConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8WorkerGlobalScope::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), V8WorkerGlobalScope::installV8WorkerGlobalScopeTemplateFunction);
}

bool V8WorkerGlobalScope::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8WorkerGlobalScope::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

WorkerGlobalScope* V8WorkerGlobalScope::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ActiveScriptWrappable* V8WorkerGlobalScope::toActiveScriptWrappable(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

InstallTemplateFunction V8WorkerGlobalScope::installV8WorkerGlobalScopeTemplateFunction = (InstallTemplateFunction)&V8WorkerGlobalScope::installV8WorkerGlobalScopeTemplate;

void V8WorkerGlobalScope::updateWrapperTypeInfo(InstallTemplateFunction installTemplateFunction, PreparePrototypeAndInterfaceObjectFunction preparePrototypeAndInterfaceObjectFunction)
{
    V8WorkerGlobalScope::installV8WorkerGlobalScopeTemplateFunction = installTemplateFunction;
    if (preparePrototypeAndInterfaceObjectFunction)
        V8WorkerGlobalScope::wrapperTypeInfo.preparePrototypeAndInterfaceObjectFunction = preparePrototypeAndInterfaceObjectFunction;
}

} // namespace blink
