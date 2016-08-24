// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8PermissionDescriptor.h"

#include "bindings/core/v8/ExceptionState.h"

namespace blink {

void V8PermissionDescriptor::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, PermissionDescriptor& impl, ExceptionState& exceptionState)
{
    if (isUndefinedOrNull(v8Value)) {
        exceptionState.throwTypeError("Missing required member(s): name.");
        return;
    }
    if (!v8Value->IsObject()) {
        exceptionState.throwTypeError("cannot convert to dictionary.");
        return;
    }

    v8::TryCatch block(isolate);
    v8::Local<v8::Object> v8Object;
    if (!v8Call(v8Value->ToObject(isolate->GetCurrentContext()), v8Object, block)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    v8::Local<v8::Value> nameValue;
    if (!v8Object->Get(isolate->GetCurrentContext(), v8String(isolate, "name")).ToLocal(&nameValue)) {
        exceptionState.rethrowV8Exception(block.Exception());
        return;
    }
    if (nameValue.IsEmpty() || nameValue->IsUndefined()) {
        exceptionState.throwTypeError("required member name is undefined.");
        return;
    } else {
        V8StringResource<> name = nameValue;
        if (!name.prepare(exceptionState))
            return;
        const char* validValues[] = {
            "geolocation",
            "midi",
            "notifications",
            "push",
            "background-sync",
        };
        if (!isValidEnum(name, validValues, WTF_ARRAY_LENGTH(validValues), "PermissionName", exceptionState))
            return;
        impl.setName(name);
    }
}

v8::Local<v8::Value> PermissionDescriptor::toV8Impl(v8::Local<v8::Object> creationContext, v8::Isolate* isolate) const
{
    v8::Local<v8::Object> v8Object = v8::Object::New(isolate);
    if (!toV8PermissionDescriptor(*this, v8Object, creationContext, isolate))
        return v8::Local<v8::Value>();
    return v8Object;
}

bool toV8PermissionDescriptor(const PermissionDescriptor& impl, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    if (impl.hasName()) {
        if (!v8CallBoolean(dictionary->CreateDataProperty(isolate->GetCurrentContext(), v8String(isolate, "name"), v8String(isolate, impl.name()))))
            return false;
    } else {
        ASSERT_NOT_REACHED();
    }

    return true;
}

PermissionDescriptor NativeValueTraits<PermissionDescriptor>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    PermissionDescriptor impl;
    V8PermissionDescriptor::toImpl(isolate, value, impl, exceptionState);
    return impl;
}

} // namespace blink
