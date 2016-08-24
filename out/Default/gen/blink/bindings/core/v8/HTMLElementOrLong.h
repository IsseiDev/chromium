// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef HTMLElementOrLong_h
#define HTMLElementOrLong_h

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8Binding.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class HTMLElement;

class CORE_EXPORT HTMLElementOrLong final {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    HTMLElementOrLong();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isHTMLElement() const { return m_type == SpecificTypeHTMLElement; }
    HTMLElement* getAsHTMLElement() const;
    void setHTMLElement(HTMLElement*);
    static HTMLElementOrLong fromHTMLElement(HTMLElement*);

    bool isLong() const { return m_type == SpecificTypeLong; }
    int getAsLong() const;
    void setLong(int);
    static HTMLElementOrLong fromLong(int);

    HTMLElementOrLong(const HTMLElementOrLong&);
    ~HTMLElementOrLong();
    HTMLElementOrLong& operator=(const HTMLElementOrLong&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeHTMLElement,
        SpecificTypeLong,
    };
    SpecificTypes m_type;

    Member<HTMLElement> m_htmlElement;
    int m_long;

    friend CORE_EXPORT v8::Local<v8::Value> toV8(const HTMLElementOrLong&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8HTMLElementOrLong final {
public:
    CORE_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, HTMLElementOrLong&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> toV8(const HTMLElementOrLong&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, HTMLElementOrLong& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<HTMLElementOrLong> {
    CORE_EXPORT static HTMLElementOrLong nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

} // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::HTMLElementOrLong);

#endif // HTMLElementOrLong_h