// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8IdleRequestOptions_h
#define V8IdleRequestOptions_h

#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "core/CoreExport.h"
#include "core/dom/IdleRequestOptions.h"
#include "platform/heap/Handle.h"

namespace blink {

class ExceptionState;

class V8IdleRequestOptions {
public:
    CORE_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, IdleRequestOptions&, ExceptionState&);
};

CORE_EXPORT bool toV8IdleRequestOptions(const IdleRequestOptions&, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate*);

template<class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, IdleRequestOptions& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<IdleRequestOptions> {
    static IdleRequestOptions nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

template <>
struct V8TypeOf<IdleRequestOptions> {
    typedef V8IdleRequestOptions Type;
};

} // namespace blink

#endif // V8IdleRequestOptions_h