// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SpeechSynthesis.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8SpeechSynthesisUtterance.h"
#include "bindings/modules/v8/V8SpeechSynthesisVoice.h"
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
const WrapperTypeInfo V8SpeechSynthesis::wrapperTypeInfo = { gin::kEmbedderBlink, V8SpeechSynthesis::domTemplate, V8SpeechSynthesis::trace, V8SpeechSynthesis::traceWrappers, 0, 0, V8SpeechSynthesis::preparePrototypeAndInterfaceObject, nullptr, "SpeechSynthesis", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SpeechSynthesis.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SpeechSynthesis::s_wrapperTypeInfo = V8SpeechSynthesis::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, SpeechSynthesis>::value,
    "SpeechSynthesis inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace SpeechSynthesisV8Internal {

static void pendingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SpeechSynthesis* impl = V8SpeechSynthesis::toImpl(holder);
    v8SetReturnValueBool(info, impl->pending());
}

static void pendingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesisV8Internal::pendingAttributeGetter(info);
}

static void speakingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SpeechSynthesis* impl = V8SpeechSynthesis::toImpl(holder);
    v8SetReturnValueBool(info, impl->speaking());
}

static void speakingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesisV8Internal::speakingAttributeGetter(info);
}

static void pausedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SpeechSynthesis* impl = V8SpeechSynthesis::toImpl(holder);
    v8SetReturnValueBool(info, impl->paused());
}

static void pausedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesisV8Internal::pausedAttributeGetter(info);
}

static void onvoiceschangedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SpeechSynthesis* impl = V8SpeechSynthesis::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onvoiceschanged()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onvoiceschangedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesisV8Internal::onvoiceschangedAttributeGetter(info);
}

static void onvoiceschangedAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SpeechSynthesis* impl = V8SpeechSynthesis::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onvoiceschanged(), v8Value, V8SpeechSynthesis::eventListenerCacheIndex);
    impl->setOnvoiceschanged(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onvoiceschangedAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SpeechSynthesisV8Internal::onvoiceschangedAttributeSetter(v8Value, info);
}

static void speakMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "speak", "SpeechSynthesis", 1, info.Length()));
        return;
    }
    SpeechSynthesis* impl = V8SpeechSynthesis::toImpl(info.Holder());
    SpeechSynthesisUtterance* utterance;
    {
        utterance = V8SpeechSynthesisUtterance::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!utterance) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("speak", "SpeechSynthesis", "parameter 1 is not of type 'SpeechSynthesisUtterance'."));
            return;
        }
    }
    impl->speak(utterance);
}

static void speakMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesisV8Internal::speakMethod(info);
}

static void cancelMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesis* impl = V8SpeechSynthesis::toImpl(info.Holder());
    impl->cancel();
}

static void cancelMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesisV8Internal::cancelMethod(info);
}

static void pauseMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesis* impl = V8SpeechSynthesis::toImpl(info.Holder());
    impl->pause();
}

static void pauseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesisV8Internal::pauseMethod(info);
}

static void resumeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesis* impl = V8SpeechSynthesis::toImpl(info.Holder());
    impl->resume();
}

static void resumeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesisV8Internal::resumeMethod(info);
}

static void getVoicesMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesis* impl = V8SpeechSynthesis::toImpl(info.Holder());
    v8SetReturnValue(info, toV8(impl->getVoices(), info.Holder(), info.GetIsolate()));
}

static void getVoicesMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SpeechSynthesisV8Internal::getVoicesMethod(info);
}

} // namespace SpeechSynthesisV8Internal

const V8DOMConfiguration::AccessorConfiguration V8SpeechSynthesisAccessors[] = {
    {"pending", SpeechSynthesisV8Internal::pendingAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"speaking", SpeechSynthesisV8Internal::speakingAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"paused", SpeechSynthesisV8Internal::pausedAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onvoiceschanged", SpeechSynthesisV8Internal::onvoiceschangedAttributeGetterCallback, SpeechSynthesisV8Internal::onvoiceschangedAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8SpeechSynthesisMethods[] = {
    {"speak", SpeechSynthesisV8Internal::speakMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"cancel", SpeechSynthesisV8Internal::cancelMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"pause", SpeechSynthesisV8Internal::pauseMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"resume", SpeechSynthesisV8Internal::resumeMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"getVoices", SpeechSynthesisV8Internal::getVoicesMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8SpeechSynthesisTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SpeechSynthesis::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8SpeechSynthesis::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SpeechSynthesisAccessors, WTF_ARRAY_LENGTH(V8SpeechSynthesisAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SpeechSynthesisMethods, WTF_ARRAY_LENGTH(V8SpeechSynthesisMethods));
}

v8::Local<v8::FunctionTemplate> V8SpeechSynthesis::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SpeechSynthesisTemplate);
}

bool V8SpeechSynthesis::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SpeechSynthesis::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SpeechSynthesis* V8SpeechSynthesis::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
