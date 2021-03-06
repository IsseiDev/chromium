// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8SourceBuffer.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8ArrayBuffer.h"
#include "bindings/core/v8/V8ArrayBufferView.h"
#include "bindings/core/v8/V8AudioTrackList.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8Stream.h"
#include "bindings/core/v8/V8TimeRanges.h"
#include "bindings/core/v8/V8VideoTrackList.h"
#include "bindings/modules/v8/V8TrackDefaultList.h"
#include "core/dom/Document.h"
#include "core/dom/FlexibleArrayBufferView.h"
#include "core/inspector/ConsoleMessage.h"
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
const WrapperTypeInfo V8SourceBuffer::wrapperTypeInfo = { gin::kEmbedderBlink, V8SourceBuffer::domTemplate, V8SourceBuffer::trace, V8SourceBuffer::traceWrappers, V8SourceBuffer::toActiveScriptWrappable, 0, V8SourceBuffer::preparePrototypeAndInterfaceObject, nullptr, "SourceBuffer", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in SourceBuffer.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& SourceBuffer::s_wrapperTypeInfo = V8SourceBuffer::wrapperTypeInfo;

namespace SourceBufferV8Internal {

static void modeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    v8SetReturnValueString(info, impl->mode(), info.GetIsolate());
}

static void modeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::modeAttributeGetter(info);
}

static void modeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "mode", "SourceBuffer", holder, info.GetIsolate());
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    const char* validValues[] = {
        "segments",
        "sequence",
    };
    if (!isValidEnum(cppValue, validValues, WTF_ARRAY_LENGTH(validValues), "AppendMode", exceptionState)) {
        currentExecutionContext(info.GetIsolate())->addConsoleMessage(ConsoleMessage::create(JSMessageSource, WarningMessageLevel, exceptionState.message()));
        return;
    }
    impl->setMode(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void modeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SourceBufferV8Internal::modeAttributeSetter(v8Value, info);
}

static void updatingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    v8SetReturnValueBool(info, impl->updating());
}

static void updatingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::updatingAttributeGetter(info);
}

static void bufferedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "buffered", "SourceBuffer", holder, info.GetIsolate());
    TimeRanges* cppValue(impl->buffered(exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "buffered"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void bufferedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::bufferedAttributeGetter(info);
}

static void timestampOffsetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    v8SetReturnValue(info, impl->timestampOffset());
}

static void timestampOffsetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::timestampOffsetAttributeGetter(info);
}

static void timestampOffsetAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "timestampOffset", "SourceBuffer", holder, info.GetIsolate());
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setTimestampOffset(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void timestampOffsetAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SourceBufferV8Internal::timestampOffsetAttributeSetter(v8Value, info);
}

static void audioTracksAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    AudioTrackList* cppValue(WTF::getPtr(impl->audioTracks()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "audioTracks"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void audioTracksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::audioTracksAttributeGetter(info);
}

static void videoTracksAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    VideoTrackList* cppValue(WTF::getPtr(impl->videoTracks()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "videoTracks"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void videoTracksAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::videoTracksAttributeGetter(info);
}

static void appendWindowStartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    v8SetReturnValue(info, impl->appendWindowStart());
}

static void appendWindowStartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::appendWindowStartAttributeGetter(info);
}

static void appendWindowStartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "appendWindowStart", "SourceBuffer", holder, info.GetIsolate());
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    double cppValue = toRestrictedDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setAppendWindowStart(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void appendWindowStartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SourceBufferV8Internal::appendWindowStartAttributeSetter(v8Value, info);
}

static void appendWindowEndAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    v8SetReturnValue(info, impl->appendWindowEnd());
}

static void appendWindowEndAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::appendWindowEndAttributeGetter(info);
}

static void appendWindowEndAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "appendWindowEnd", "SourceBuffer", holder, info.GetIsolate());
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    double cppValue = toDouble(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setAppendWindowEnd(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void appendWindowEndAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SourceBufferV8Internal::appendWindowEndAttributeSetter(v8Value, info);
}

static void onupdatestartAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onupdatestart()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onupdatestartAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::onupdatestartAttributeGetter(info);
}

static void onupdatestartAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onupdatestart(), v8Value, V8SourceBuffer::eventListenerCacheIndex);
    impl->setOnupdatestart(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onupdatestartAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SourceBufferV8Internal::onupdatestartAttributeSetter(v8Value, info);
}

static void onupdateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onupdate()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onupdateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::onupdateAttributeGetter(info);
}

static void onupdateAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onupdate(), v8Value, V8SourceBuffer::eventListenerCacheIndex);
    impl->setOnupdate(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onupdateAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SourceBufferV8Internal::onupdateAttributeSetter(v8Value, info);
}

static void onupdateendAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onupdateend()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onupdateendAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::onupdateendAttributeGetter(info);
}

static void onupdateendAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onupdateend(), v8Value, V8SourceBuffer::eventListenerCacheIndex);
    impl->setOnupdateend(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onupdateendAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SourceBufferV8Internal::onupdateendAttributeSetter(v8Value, info);
}

static void onerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onerror()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::onerrorAttributeGetter(info);
}

static void onerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onerror(), v8Value, V8SourceBuffer::eventListenerCacheIndex);
    impl->setOnerror(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SourceBufferV8Internal::onerrorAttributeSetter(v8Value, info);
}

static void onabortAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onabort()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onabortAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::onabortAttributeGetter(info);
}

static void onabortAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onabort(), v8Value, V8SourceBuffer::eventListenerCacheIndex);
    impl->setOnabort(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onabortAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SourceBufferV8Internal::onabortAttributeSetter(v8Value, info);
}

static void trackDefaultsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->trackDefaults()), impl);
}

static void trackDefaultsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::trackDefaultsAttributeGetter(info);
}

static void trackDefaultsAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "trackDefaults", "SourceBuffer", holder, info.GetIsolate());
    SourceBuffer* impl = V8SourceBuffer::toImpl(holder);
    TrackDefaultList* cppValue = V8TrackDefaultList::toImplWithTypeCheck(info.GetIsolate(), v8Value);
    if (!cppValue) {
        exceptionState.throwTypeError("The provided value is not of type 'TrackDefaultList'.");
        exceptionState.throwIfNeeded();
        return;
    }
    impl->setTrackDefaults(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void trackDefaultsAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    SourceBufferV8Internal::trackDefaultsAttributeSetter(v8Value, info);
}

static void appendBuffer1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "appendBuffer", "SourceBuffer", info.Holder(), info.GetIsolate());
    SourceBuffer* impl = V8SourceBuffer::toImpl(info.Holder());
    DOMArrayBuffer* data;
    {
        data = info[0]->IsArrayBuffer() ? V8ArrayBuffer::toImpl(v8::Local<v8::ArrayBuffer>::Cast(info[0])) : 0;
        if (!data) {
            exceptionState.throwTypeError("parameter 1 is not of type 'ArrayBuffer'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    impl->appendBuffer(data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void appendBuffer2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "appendBuffer", "SourceBuffer", info.Holder(), info.GetIsolate());
    SourceBuffer* impl = V8SourceBuffer::toImpl(info.Holder());
    DOMArrayBufferView* data;
    {
        data = info[0]->IsArrayBufferView() ? V8ArrayBufferView::toImpl(v8::Local<v8::ArrayBufferView>::Cast(info[0])) : 0;
        if (!data) {
            exceptionState.throwTypeError("parameter 1 is not of type 'ArrayBufferView'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    impl->appendBuffer(data, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void appendBufferMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "appendBuffer", "SourceBuffer", info.Holder(), info.GetIsolate());
    switch (std::min(1, info.Length())) {
    case 1:
        if (info[0]->IsArrayBuffer()) {
            appendBuffer1Method(info);
            return;
        }
        if (info[0]->IsArrayBufferView()) {
            appendBuffer2Method(info);
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

static void appendBufferMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::appendBufferMethod(info);
}

static void appendStreamMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "appendStream", "SourceBuffer", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SourceBuffer* impl = V8SourceBuffer::toImpl(info.Holder());
    Stream* stream;
    unsigned long long maxSize;
    {
        int numArgsPassed = info.Length();
        while (numArgsPassed > 0) {
            if (!info[numArgsPassed - 1]->IsUndefined())
                break;
            --numArgsPassed;
        }
        stream = V8Stream::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!stream) {
            exceptionState.throwTypeError("parameter 1 is not of type 'Stream'.");
            exceptionState.throwIfNeeded();
            return;
        }
        if (UNLIKELY(numArgsPassed <= 1)) {
            impl->appendStream(stream, exceptionState);
            if (exceptionState.hadException()) {
                exceptionState.throwIfNeeded();
                return;
            }
            return;
        }
        maxSize = toUInt64(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->appendStream(stream, maxSize, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void appendStreamMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::appendStreamMethod(info);
}

static void abortMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "abort", "SourceBuffer", info.Holder(), info.GetIsolate());
    SourceBuffer* impl = V8SourceBuffer::toImpl(info.Holder());
    impl->abort(exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void abortMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::abortMethod(info);
}

static void removeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "remove", "SourceBuffer", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    SourceBuffer* impl = V8SourceBuffer::toImpl(info.Holder());
    double start;
    double end;
    {
        start = toRestrictedDouble(info.GetIsolate(), info[0], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        end = toDouble(info.GetIsolate(), info[1], exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->remove(start, end, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void removeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    SourceBufferV8Internal::removeMethod(info);
}

} // namespace SourceBufferV8Internal

const V8DOMConfiguration::AccessorConfiguration V8SourceBufferAccessors[] = {
    {"mode", SourceBufferV8Internal::modeAttributeGetterCallback, SourceBufferV8Internal::modeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"updating", SourceBufferV8Internal::updatingAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"buffered", SourceBufferV8Internal::bufferedAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"timestampOffset", SourceBufferV8Internal::timestampOffsetAttributeGetterCallback, SourceBufferV8Internal::timestampOffsetAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"appendWindowStart", SourceBufferV8Internal::appendWindowStartAttributeGetterCallback, SourceBufferV8Internal::appendWindowStartAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"appendWindowEnd", SourceBufferV8Internal::appendWindowEndAttributeGetterCallback, SourceBufferV8Internal::appendWindowEndAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onupdatestart", SourceBufferV8Internal::onupdatestartAttributeGetterCallback, SourceBufferV8Internal::onupdatestartAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onupdate", SourceBufferV8Internal::onupdateAttributeGetterCallback, SourceBufferV8Internal::onupdateAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onupdateend", SourceBufferV8Internal::onupdateendAttributeGetterCallback, SourceBufferV8Internal::onupdateendAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onerror", SourceBufferV8Internal::onerrorAttributeGetterCallback, SourceBufferV8Internal::onerrorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onabort", SourceBufferV8Internal::onabortAttributeGetterCallback, SourceBufferV8Internal::onabortAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8SourceBufferMethods[] = {
    {"appendBuffer", SourceBufferV8Internal::appendBufferMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"abort", SourceBufferV8Internal::abortMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"remove", SourceBufferV8Internal::removeMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8SourceBufferTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8SourceBuffer::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8SourceBuffer::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SourceBufferAccessors, WTF_ARRAY_LENGTH(V8SourceBufferAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8SourceBufferMethods, WTF_ARRAY_LENGTH(V8SourceBufferMethods));

    if (RuntimeEnabledFeatures::audioVideoTracksEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessoraudioTracksConfiguration = \
        {"audioTracks", SourceBufferV8Internal::audioTracksAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessoraudioTracksConfiguration);
        const V8DOMConfiguration::AccessorConfiguration accessorvideoTracksConfiguration = \
        {"videoTracks", SourceBufferV8Internal::videoTracksAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorvideoTracksConfiguration);
    }

    if (RuntimeEnabledFeatures::mediaSourceExperimentalEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessortrackDefaultsConfiguration = \
        {"trackDefaults", SourceBufferV8Internal::trackDefaultsAttributeGetterCallback, SourceBufferV8Internal::trackDefaultsAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessortrackDefaultsConfiguration);
    }

    if (RuntimeEnabledFeatures::experimentalStreamEnabled()) {
        const V8DOMConfiguration::MethodConfiguration appendStreamMethodConfiguration = {"appendStream", SourceBufferV8Internal::appendStreamMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype};
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, appendStreamMethodConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8SourceBuffer::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8SourceBufferTemplate);
}

bool V8SourceBuffer::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8SourceBuffer::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

SourceBuffer* V8SourceBuffer::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

ActiveScriptWrappable* V8SourceBuffer::toActiveScriptWrappable(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

} // namespace blink
