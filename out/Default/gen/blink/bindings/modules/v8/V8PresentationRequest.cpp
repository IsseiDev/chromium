// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8PresentationRequest.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8PresentationRequest::wrapperTypeInfo = { gin::kEmbedderBlink, V8PresentationRequest::domTemplate, V8PresentationRequest::trace, V8PresentationRequest::traceWrappers, V8PresentationRequest::toActiveScriptWrappable, 0, V8PresentationRequest::preparePrototypeAndInterfaceObject, nullptr, "PresentationRequest", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PresentationRequest.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PresentationRequest::s_wrapperTypeInfo = V8PresentationRequest::wrapperTypeInfo;

namespace PresentationRequestV8Internal {

static void onconnectionavailableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PresentationRequest* impl = V8PresentationRequest::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onconnectionavailable()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onconnectionavailableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PresentationRequestV8Internal::onconnectionavailableAttributeGetter(info);
}

static void onconnectionavailableAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    PresentationRequest* impl = V8PresentationRequest::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onconnectionavailable(), v8Value, V8PresentationRequest::eventListenerCacheIndex);
    impl->setOnconnectionavailable(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onconnectionavailableAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    PresentationRequestV8Internal::onconnectionavailableAttributeSetter(v8Value, info);
}

static void startMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PresentationRequest* impl = V8PresentationRequest::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->start(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void startMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PresentationRequestStart);
    PresentationRequestV8Internal::startMethod(info);
}

static void reconnectMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    PresentationRequest* impl = V8PresentationRequest::toImpl(info.Holder());
    V8StringResource<> id;
    {
        id = info[0];
        if (!id.prepare(exceptionState))
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->reconnect(scriptState, id);
    v8SetReturnValue(info, result.v8Value());
}

static void reconnectMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "reconnect", "PresentationRequest", info.Holder(), info.GetIsolate());
    reconnectMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void reconnectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PresentationRequestReconnect);
    PresentationRequestV8Internal::reconnectMethod(info);
}

static void getAvailabilityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PresentationRequest* impl = V8PresentationRequest::toImpl(info.Holder());
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->getAvailability(scriptState);
    v8SetReturnValue(info, result.v8Value());
}

static void getAvailabilityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PresentationRequestGetAvailability);
    PresentationRequestV8Internal::getAvailabilityMethod(info);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "PresentationRequest", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    V8StringResource<> url;
    {
        url = info[0];
        if (!url.prepare())
            return;
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    PresentationRequest* impl = PresentationRequest::create(executionContext, url, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8PresentationRequest::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace PresentationRequestV8Internal

const V8DOMConfiguration::AccessorConfiguration V8PresentationRequestAccessors[] = {
    {"onconnectionavailable", PresentationRequestV8Internal::onconnectionavailableAttributeGetterCallback, PresentationRequestV8Internal::onconnectionavailableAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8PresentationRequestMethods[] = {
    {"start", PresentationRequestV8Internal::startMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"reconnect", PresentationRequestV8Internal::reconnectMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"getAvailability", PresentationRequestV8Internal::getAvailabilityMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

void V8PresentationRequest::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PresentationRequestConstructor);
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("PresentationRequest"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    PresentationRequestV8Internal::constructor(info);
}

static void installV8PresentationRequestTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8PresentationRequest::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8PresentationRequest::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8PresentationRequest::constructorCallback);
    interfaceTemplate->SetLength(1);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::presentationEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PresentationRequestAccessors, WTF_ARRAY_LENGTH(V8PresentationRequestAccessors));
        V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PresentationRequestMethods, WTF_ARRAY_LENGTH(V8PresentationRequestMethods));
    }
}

v8::Local<v8::FunctionTemplate> V8PresentationRequest::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PresentationRequestTemplate);
}

bool V8PresentationRequest::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PresentationRequest::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PresentationRequest* V8PresentationRequest::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ActiveScriptWrappable* V8PresentationRequest::toActiveScriptWrappable(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

} // namespace blink