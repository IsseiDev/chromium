// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8PresentationConnectionCloseEventInit.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8EventInit.h"

namespace blink {

void V8PresentationConnectionCloseEventInit::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PresentationConnectionCloseEventInit& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        exceptionState.throwTypeError("Missing required member(s): reason.");
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    V8EventInit::toImpl(isolate, v8Value, impl, exceptionState);
    if (exceptionState.hadException())
        return;

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> messageValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "message")).ToLocal(&messageValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (messageValue.IsEmpty() || messageValue->IsUndefined()) {
        // Do nothing.
    } else {
        V8StringResource<> message = messageValue;
        if (!message.prepare(exceptionState))
            return;
        impl.setMessage(message);
    }

    v8::Local<v8::Value> reasonValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "reason")).ToLocal(&reasonValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (reasonValue.IsEmpty() || reasonValue->IsUndefined()) {
        exceptionState.throwTypeError("required member reason is undefined.");
        return;
    } else {
        V8StringResource<> reason = reasonValue;
        if (!reason.prepare(exceptionState))
            return;
        const char* validValues[] = {
            "error",
            "closed",
            "wentaway",
        };
        if (!isValidEnum(reason, validValues, WTF_ARRAY_LENGTH(validValues), "PresentationConnectionCloseReason", exceptionState))
            return;
        impl.setReason(reason);
    }
}

v8::Local<v8::Value> PresentationConnectionCloseEventInit::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8PresentationConnectionCloseEventInit(*this, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8PresentationConnectionCloseEventInit(const PresentationConnectionCloseEventInit& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (!toV8EventInit(impl, dictionary, creationContext, isolate))
        return false;

    if (impl.hasMessage()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "message"), v8String(isolate, impl.message()))))
            return false;
    }

    if (impl.hasReason()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "reason"), v8String(isolate, impl.reason()))))
            return false;
    } else {
        ASSERT_NOT_REACHED();
    }

    return true;
}

PresentationConnectionCloseEventInit NativeValueTraits<PresentationConnectionCloseEventInit>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    PresentationConnectionCloseEventInit impl;
    V8PresentationConnectionCloseEventInit::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
