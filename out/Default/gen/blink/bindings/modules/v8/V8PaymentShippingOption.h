// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef V8PaymentShippingOption_h
#define V8PaymentShippingOption_h

#include "bindings/core/v8/ToV8.h"
#include "bindings/core/v8/V8Binding.h"
#include "modules/ModulesExport.h"
#include "modules/payments/PaymentShippingOption.h"
#include "platform/heap/Handle.h"

namespace blink {

class ExceptionState;

class V8PaymentShippingOption {
public:
    MODULES_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, PaymentShippingOption&, ExceptionState&);
};

MODULES_EXPORT bool toV8PaymentShippingOption(const PaymentShippingOption&, v8::Local<v8::Object> dictionary, v8::Local<v8::Object> creationContext, v8::Isolate*);

template<class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, PaymentShippingOption& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<PaymentShippingOption> {
    static PaymentShippingOption nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

template <>
struct V8TypeOf<PaymentShippingOption> {
    typedef V8PaymentShippingOption Type;
};

} // namespace blink

#endif // V8PaymentShippingOption_h
