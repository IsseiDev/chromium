// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8MediaRecorder.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8MediaRecorderOptions.h"
#include "bindings/modules/v8/V8MediaStream.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
#include "core/inspector/ConsoleMessage.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8MediaRecorder::wrapperTypeInfo = { gin::kEmbedderBlink, V8MediaRecorder::domTemplate, V8MediaRecorder::trace, V8MediaRecorder::traceWrappers, V8MediaRecorder::toActiveScriptWrappable, 0, V8MediaRecorder::preparePrototypeAndInterfaceObject, nullptr, "MediaRecorder", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MediaRecorder.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MediaRecorder::s_wrapperTypeInfo = V8MediaRecorder::wrapperTypeInfo;

namespace MediaRecorderV8Internal {

static void streamAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    MediaStream* cppValue(WTF::getPtr(impl->stream()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "stream"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void streamAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::streamAttributeGetter(info);
}

static void mimeTypeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    v8SetReturnValueString(info, impl->mimeType(), info.GetIsolate());
}

static void mimeTypeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::mimeTypeAttributeGetter(info);
}

static void stateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    v8SetReturnValueString(info, impl->state(), info.GetIsolate());
}

static void stateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::stateAttributeGetter(info);
}

static void onstartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onstart()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onstartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::onstartAttributeGetter(info);
}

static void onstartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onstart(), v8Value, V8MediaRecorder::eventListenerCacheIndex);
    impl->setOnstart(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onstartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    MediaRecorderV8Internal::onstartAttributeSetter(v8Value, info);
}

static void onstopAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onstop()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onstopAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::onstopAttributeGetter(info);
}

static void onstopAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onstop(), v8Value, V8MediaRecorder::eventListenerCacheIndex);
    impl->setOnstop(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onstopAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    MediaRecorderV8Internal::onstopAttributeSetter(v8Value, info);
}

static void ondataavailableAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->ondataavailable()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void ondataavailableAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::ondataavailableAttributeGetter(info);
}

static void ondataavailableAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->ondataavailable(), v8Value, V8MediaRecorder::eventListenerCacheIndex);
    impl->setOndataavailable(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void ondataavailableAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    MediaRecorderV8Internal::ondataavailableAttributeSetter(v8Value, info);
}

static void onpauseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onpause()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onpauseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::onpauseAttributeGetter(info);
}

static void onpauseAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onpause(), v8Value, V8MediaRecorder::eventListenerCacheIndex);
    impl->setOnpause(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onpauseAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    MediaRecorderV8Internal::onpauseAttributeSetter(v8Value, info);
}

static void onresumeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onresume()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onresumeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::onresumeAttributeGetter(info);
}

static void onresumeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onresume(), v8Value, V8MediaRecorder::eventListenerCacheIndex);
    impl->setOnresume(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onresumeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    MediaRecorderV8Internal::onresumeAttributeSetter(v8Value, info);
}

static void onerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onerror()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::onerrorAttributeGetter(info);
}

static void onerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onerror(), v8Value, V8MediaRecorder::eventListenerCacheIndex);
    impl->setOnerror(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    MediaRecorderV8Internal::onerrorAttributeSetter(v8Value, info);
}

static void ignoreMutedMediaAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    v8SetReturnValueBool(info, impl->ignoreMutedMedia());
}

static void ignoreMutedMediaAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::ignoreMutedMediaAttributeGetter(info);
}

static void ignoreMutedMediaAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "ignoreMutedMedia", "MediaRecorder", holder, info.GetIsolate());
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setIgnoreMutedMedia(cppValue);
}

static void ignoreMutedMediaAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    MediaRecorderV8Internal::ignoreMutedMediaAttributeSetter(v8Value, info);
}

static void videoBitsPerSecondAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->videoBitsPerSecond());
}

static void videoBitsPerSecondAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::videoBitsPerSecondAttributeGetter(info);
}

static void audioBitsPerSecondAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MediaRecorder* impl = V8MediaRecorder::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->audioBitsPerSecond());
}

static void audioBitsPerSecondAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::audioBitsPerSecondAttributeGetter(info);
}

static void startMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "start", "MediaRecorder", info.Holder(), info.GetIsolate());
    MediaRecorder* impl = V8MediaRecorder::toImpl(info.Holder());
    int timeslice;
    {
        int numArgsPassed = info.Length();
        while (numArgsPassed > 0) {
            if (!info[numArgsPassed - 1]->IsUndefined())
                break;
            --numArgsPassed;
        }
        if (UNLIKELY(numArgsPassed <= 0)) {
            impl->start(exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            return;
        }
        timeslice = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->start(timeslice, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void startMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::startMethod(info);
}

static void stopMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "stop", "MediaRecorder", info.Holder(), info.GetIsolate());
    MediaRecorder* impl = V8MediaRecorder::toImpl(info.Holder());
    impl->stop(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void stopMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::stopMethod(info);
}

static void pauseMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "pause", "MediaRecorder", info.Holder(), info.GetIsolate());
    MediaRecorder* impl = V8MediaRecorder::toImpl(info.Holder());
    impl->pause(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void pauseMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::pauseMethod(info);
}

static void resumeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "resume", "MediaRecorder", info.Holder(), info.GetIsolate());
    MediaRecorder* impl = V8MediaRecorder::toImpl(info.Holder());
    impl->resume(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void resumeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::resumeMethod(info);
}

static void requestDataMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "requestData", "MediaRecorder", info.Holder(), info.GetIsolate());
    MediaRecorder* impl = V8MediaRecorder::toImpl(info.Holder());
    impl->requestData(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void requestDataMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::requestDataMethod(info);
}

static void isTypeSupportedMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "isTypeSupported", "MediaRecorder", 1, info.Length()));
        return;
    }
    V8StringResource<> type;
    {
        type = info[0];
        if (!type.prepare())
            return;
    }
    v8SetReturnValueBool(info, MediaRecorder::isTypeSupported(type));
}

static void isTypeSupportedMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MediaRecorderV8Internal::isTypeSupportedMethod(info);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "MediaRecorder", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    MediaStream* stream;
    MediaRecorderOptions options;
    {
        stream = V8MediaStream::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!stream) {
            exceptionState.throwTypeError("parameter 1 is not of type 'MediaStream'.");
            exceptionState.throwIfNeeded();
            return;
        }
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('options') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8MediaRecorderOptions::toImpl(info.GetIsolate(), info[1], options, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    MediaRecorder* impl = MediaRecorder::create(executionContext, stream, options, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8MediaRecorder::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace MediaRecorderV8Internal

const V8DOMConfiguration::AccessorConfiguration V8MediaRecorderAccessors[] = {
    {"stream", MediaRecorderV8Internal::streamAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"mimeType", MediaRecorderV8Internal::mimeTypeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"state", MediaRecorderV8Internal::stateAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onstart", MediaRecorderV8Internal::onstartAttributeGetterCallback, MediaRecorderV8Internal::onstartAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onstop", MediaRecorderV8Internal::onstopAttributeGetterCallback, MediaRecorderV8Internal::onstopAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ondataavailable", MediaRecorderV8Internal::ondataavailableAttributeGetterCallback, MediaRecorderV8Internal::ondataavailableAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onpause", MediaRecorderV8Internal::onpauseAttributeGetterCallback, MediaRecorderV8Internal::onpauseAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onresume", MediaRecorderV8Internal::onresumeAttributeGetterCallback, MediaRecorderV8Internal::onresumeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onerror", MediaRecorderV8Internal::onerrorAttributeGetterCallback, MediaRecorderV8Internal::onerrorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ignoreMutedMedia", MediaRecorderV8Internal::ignoreMutedMediaAttributeGetterCallback, MediaRecorderV8Internal::ignoreMutedMediaAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"videoBitsPerSecond", MediaRecorderV8Internal::videoBitsPerSecondAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"audioBitsPerSecond", MediaRecorderV8Internal::audioBitsPerSecondAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8MediaRecorderMethods[] = {
    {"start", MediaRecorderV8Internal::startMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"stop", MediaRecorderV8Internal::stopMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"pause", MediaRecorderV8Internal::pauseMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"resume", MediaRecorderV8Internal::resumeMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"requestData", MediaRecorderV8Internal::requestDataMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"isTypeSupported", MediaRecorderV8Internal::isTypeSupportedMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInterface},
};

void V8MediaRecorder::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("MediaRecorder"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    MediaRecorderV8Internal::constructor(info);
}

static void installV8MediaRecorderTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8MediaRecorder::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8MediaRecorder::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8MediaRecorder::constructorCallback);
    interfaceTemplate->SetLength(1);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MediaRecorderAccessors, WTF_ARRAY_LENGTH(V8MediaRecorderAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MediaRecorderMethods, WTF_ARRAY_LENGTH(V8MediaRecorderMethods));
}

v8::Local<v8::FunctionTemplate> V8MediaRecorder::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MediaRecorderTemplate);
}

bool V8MediaRecorder::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MediaRecorder::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MediaRecorder* V8MediaRecorder::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ActiveScriptWrappable* V8MediaRecorder::toActiveScriptWrappable(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

} // namespace blink