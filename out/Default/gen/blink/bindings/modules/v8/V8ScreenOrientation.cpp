// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8ScreenOrientation.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
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
const WrapperTypeInfo V8ScreenOrientation::wrapperTypeInfo = { gin::kEmbedderBlink, V8ScreenOrientation::domTemplate, V8ScreenOrientation::trace, V8ScreenOrientation::traceWrappers, 0, 0, V8ScreenOrientation::preparePrototypeAndInterfaceObject, nullptr, "ScreenOrientation", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in ScreenOrientation.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& ScreenOrientation::s_wrapperTypeInfo = V8ScreenOrientation::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, ScreenOrientation>::value,
    "ScreenOrientation inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace ScreenOrientationV8Internal {

static void angleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ScreenOrientation* impl = V8ScreenOrientation::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->angle());
}

static void angleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::ScreenOrientationAngle);
    ScreenOrientationV8Internal::angleAttributeGetter(info);
}

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ScreenOrientation* impl = V8ScreenOrientation::toImpl(holder);
    v8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::ScreenOrientationType);
    ScreenOrientationV8Internal::typeAttributeGetter(info);
}

static void onchangeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ScreenOrientation* impl = V8ScreenOrientation::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onchange()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onchangeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ScreenOrientationV8Internal::onchangeAttributeGetter(info);
}

static void onchangeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ScreenOrientation* impl = V8ScreenOrientation::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onchange(), v8Value, V8ScreenOrientation::eventListenerCacheIndex);
    impl->setOnchange(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onchangeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    ScreenOrientationV8Internal::onchangeAttributeSetter(v8Value, info);
}

static void lockMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    ScreenOrientation* impl = V8ScreenOrientation::toImpl(info.Holder());
    V8StringResource<> orientation;
    {
        orientation = info[0];
        if (!orientation.prepare(exceptionState))
            return;
        const char* validValues[] = {
            "any",
            "natural",
            "landscape",
            "portrait",
            "portrait-primary",
            "portrait-secondary",
            "landscape-primary",
            "landscape-secondary",
        };
        if (!isValidEnum(orientation, validValues, WTF_ARRAY_LENGTH(validValues), "OrientationLockType", exceptionState)) {
            return;
        }
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = impl->lock(scriptState, orientation);
    v8SetReturnValue(info, result.v8Value());
}

static void lockMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "lock", "ScreenOrientation", info.Holder(), info.GetIsolate());
    lockMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void lockMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::ScreenOrientationLock);
    ScreenOrientationV8Internal::lockMethod(info);
}

static void unlockMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ScreenOrientation* impl = V8ScreenOrientation::toImpl(info.Holder());
    impl->unlock();
}

static void unlockMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::ScreenOrientationUnlock);
    ScreenOrientationV8Internal::unlockMethod(info);
}

} // namespace ScreenOrientationV8Internal

const V8DOMConfiguration::AccessorConfiguration V8ScreenOrientationAccessors[] = {
    {"angle", ScreenOrientationV8Internal::angleAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"type", ScreenOrientationV8Internal::typeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onchange", ScreenOrientationV8Internal::onchangeAttributeGetterCallback, ScreenOrientationV8Internal::onchangeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8ScreenOrientationMethods[] = {
    {"lock", ScreenOrientationV8Internal::lockMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"unlock", ScreenOrientationV8Internal::unlockMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8ScreenOrientationTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8ScreenOrientation::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8ScreenOrientation::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8ScreenOrientationAccessors, WTF_ARRAY_LENGTH(V8ScreenOrientationAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8ScreenOrientationMethods, WTF_ARRAY_LENGTH(V8ScreenOrientationMethods));
}

v8::Local<v8::FunctionTemplate> V8ScreenOrientation::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8ScreenOrientationTemplate);
}

bool V8ScreenOrientation::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8ScreenOrientation::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

ScreenOrientation* V8ScreenOrientation::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
