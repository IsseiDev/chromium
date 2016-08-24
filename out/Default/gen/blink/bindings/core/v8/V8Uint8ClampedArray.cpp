// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8Uint8ClampedArray.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8ArrayBuffer.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8SharedArrayBuffer.h"
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
const WrapperTypeInfo V8Uint8ClampedArray::wrapperTypeInfo = { gin::kEmbedderBlink, 0, V8Uint8ClampedArray::trace, V8Uint8ClampedArray::traceWrappers, 0, 0, V8Uint8ClampedArray::preparePrototypeAndInterfaceObject, nullptr, "Uint8ClampedArray", &V8ArrayBufferView::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

static_assert(
    !std::is_base_of<ActiveScriptWrappable, DOMUint8ClampedArray>::value,
    "DOMUint8ClampedArray inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

DOMUint8ClampedArray* V8Uint8ClampedArray::toImpl(v8::Local<v8::Object> object)
{
    ASSERT(object->IsUint8ClampedArray());
    ScriptWrappable* scriptWrappable = toScriptWrappable(object);
    if (scriptWrappable)
        return scriptWrappable->toImpl<DOMUint8ClampedArray>();

    v8::Local<v8::Uint8ClampedArray> v8View = object.As<v8::Uint8ClampedArray>();
    v8::Local<v8::Object> arrayBuffer = v8View->Buffer();
    DOMUint8ClampedArray* typedArray = nullptr;
    if (arrayBuffer->IsArrayBuffer()) {
        typedArray = DOMUint8ClampedArray::create(V8ArrayBuffer::toImpl(arrayBuffer), v8View->ByteOffset(), v8View->Length());
    } else if (arrayBuffer->IsSharedArrayBuffer()) {
        typedArray = DOMUint8ClampedArray::create(V8SharedArrayBuffer::toImpl(arrayBuffer), v8View->ByteOffset(), v8View->Length());
    } else {
        ASSERT_NOT_REACHED();
    }
    v8::Local<v8::Object> associatedWrapper = typedArray->associateWithWrapper(v8::Isolate::GetCurrent(), typedArray->wrapperTypeInfo(), object);
    ASSERT_UNUSED(associatedWrapper, associatedWrapper == object);

    return typedArray->toImpl<DOMUint8ClampedArray>();
}

DOMUint8ClampedArray* V8Uint8ClampedArray::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return value->IsUint8ClampedArray() ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
