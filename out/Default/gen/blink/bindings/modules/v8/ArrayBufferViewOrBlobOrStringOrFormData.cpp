// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "ArrayBufferViewOrBlobOrStringOrFormData.h"

#include "bindings/core/v8/ArrayBufferOrArrayBufferViewOrBlobOrUSVString.h"
#include "bindings/core/v8/FileOrUSVString.h"
#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8ArrayBufferView.h"
#include "bindings/core/v8/V8Blob.h"
#include "bindings/core/v8/V8FormData.h"
#include "core/dom/FlexibleArrayBufferView.h"

namespace blink {

ArrayBufferViewOrBlobOrStringOrFormData::ArrayBufferViewOrBlobOrStringOrFormData()
    : m_type(SpecificTypeNone)
{
}

DOMArrayBufferView* ArrayBufferViewOrBlobOrStringOrFormData::getAsArrayBufferView() const
{
    ASSERT(isArrayBufferView());
    return m_arrayBufferView;
}

void ArrayBufferViewOrBlobOrStringOrFormData::setArrayBufferView(DOMArrayBufferView* value)
{
    ASSERT(isNull());
    m_arrayBufferView = value;
    m_type = SpecificTypeArrayBufferView;
}

ArrayBufferViewOrBlobOrStringOrFormData ArrayBufferViewOrBlobOrStringOrFormData::fromArrayBufferView(DOMArrayBufferView* value)
{
    ArrayBufferViewOrBlobOrStringOrFormData container;
    container.setArrayBufferView(value);
    return container;
}

Blob* ArrayBufferViewOrBlobOrStringOrFormData::getAsBlob() const
{
    ASSERT(isBlob());
    return m_blob;
}

void ArrayBufferViewOrBlobOrStringOrFormData::setBlob(Blob* value)
{
    ASSERT(isNull());
    m_blob = value;
    m_type = SpecificTypeBlob;
}

ArrayBufferViewOrBlobOrStringOrFormData ArrayBufferViewOrBlobOrStringOrFormData::fromBlob(Blob* value)
{
    ArrayBufferViewOrBlobOrStringOrFormData container;
    container.setBlob(value);
    return container;
}

String ArrayBufferViewOrBlobOrStringOrFormData::getAsString() const
{
    ASSERT(isString());
    return m_string;
}

void ArrayBufferViewOrBlobOrStringOrFormData::setString(String value)
{
    ASSERT(isNull());
    m_string = value;
    m_type = SpecificTypeString;
}

ArrayBufferViewOrBlobOrStringOrFormData ArrayBufferViewOrBlobOrStringOrFormData::fromString(String value)
{
    ArrayBufferViewOrBlobOrStringOrFormData container;
    container.setString(value);
    return container;
}

FormData* ArrayBufferViewOrBlobOrStringOrFormData::getAsFormData() const
{
    ASSERT(isFormData());
    return m_formData;
}

void ArrayBufferViewOrBlobOrStringOrFormData::setFormData(FormData* value)
{
    ASSERT(isNull());
    m_formData = value;
    m_type = SpecificTypeFormData;
}

ArrayBufferViewOrBlobOrStringOrFormData ArrayBufferViewOrBlobOrStringOrFormData::fromFormData(FormData* value)
{
    ArrayBufferViewOrBlobOrStringOrFormData container;
    container.setFormData(value);
    return container;
}

ArrayBufferViewOrBlobOrStringOrFormData::ArrayBufferViewOrBlobOrStringOrFormData(const ArrayBufferViewOrBlobOrStringOrFormData&) = default;
ArrayBufferViewOrBlobOrStringOrFormData::~ArrayBufferViewOrBlobOrStringOrFormData() = default;
ArrayBufferViewOrBlobOrStringOrFormData& ArrayBufferViewOrBlobOrStringOrFormData::operator=(const ArrayBufferViewOrBlobOrStringOrFormData&) = default;

DEFINE_TRACE(ArrayBufferViewOrBlobOrStringOrFormData)
{
    visitor->trace(m_arrayBufferView);
    visitor->trace(m_blob);
    visitor->trace(m_formData);
}

void V8ArrayBufferViewOrBlobOrStringOrFormData::toImpl(v8::Isolate* isolate, v8::Local<v8::Value> v8Value, ArrayBufferViewOrBlobOrStringOrFormData& impl, UnionTypeConversionMode conversionMode, ExceptionState& exceptionState)
{
    if (v8Value.IsEmpty())
        return;

    if (conversionMode == UnionTypeConversionMode::Nullable && isUndefinedOrNull(v8Value))
        return;

    if (V8Blob::hasInstance(v8Value, isolate)) {
        Blob* cppValue = V8Blob::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setBlob(cppValue);
        return;
    }

    if (V8FormData::hasInstance(v8Value, isolate)) {
        FormData* cppValue = V8FormData::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setFormData(cppValue);
        return;
    }

    if (v8Value->IsArrayBufferView()) {
        DOMArrayBufferView* cppValue = V8ArrayBufferView::toImpl(v8::Local<v8::Object>::Cast(v8Value));
        impl.setArrayBufferView(cppValue);
        return;
    }

    {
        V8StringResource<> cppValue = v8Value;
        if (!cppValue.prepare(exceptionState))
            return;
        impl.setString(cppValue);
        return;
    }
}

v8::Local<v8::Value> toV8(const ArrayBufferViewOrBlobOrStringOrFormData& impl, v8::Local<v8::Object> creationContext, v8::Isolate* isolate)
{
    switch (impl.m_type) {
    case ArrayBufferViewOrBlobOrStringOrFormData::SpecificTypeNone:
        return v8::Null(isolate);
    case ArrayBufferViewOrBlobOrStringOrFormData::SpecificTypeArrayBufferView:
        return toV8(impl.getAsArrayBufferView(), creationContext, isolate);
    case ArrayBufferViewOrBlobOrStringOrFormData::SpecificTypeBlob:
        return toV8(impl.getAsBlob(), creationContext, isolate);
    case ArrayBufferViewOrBlobOrStringOrFormData::SpecificTypeString:
        return v8String(isolate, impl.getAsString());
    case ArrayBufferViewOrBlobOrStringOrFormData::SpecificTypeFormData:
        return toV8(impl.getAsFormData(), creationContext, isolate);
    default:
        ASSERT_NOT_REACHED();
    }
    return v8::Local<v8::Value>();
}

ArrayBufferViewOrBlobOrStringOrFormData NativeValueTraits<ArrayBufferViewOrBlobOrStringOrFormData>::nativeValue(v8::Isolate* isolate, v8::Local<v8::Value> value, ExceptionState& exceptionState)
{
    ArrayBufferViewOrBlobOrStringOrFormData impl;
    V8ArrayBufferViewOrBlobOrStringOrFormData::toImpl(isolate, value, impl, UnionTypeConversionMode::NotNullable, exceptionState);
    return impl;
}

} // namespace blink
