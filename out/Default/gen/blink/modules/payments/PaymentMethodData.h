// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef PaymentMethodData_h
#define PaymentMethodData_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "bindings/core/v8/Nullable.h"
#include "bindings/core/v8/ScriptValue.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT PaymentMethodData : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    PaymentMethodData();
    virtual ~PaymentMethodData();

    bool hasData() const { return !(m_data.isEmpty() || m_data.isNull() || m_data.isUndefined()); }
    ScriptValue data() const { return m_data; }
    void setData(ScriptValue value) { m_data = value; }

    bool hasSupportedMethods() const { return !m_supportedMethods.isNull(); }
    const Vector<String>& supportedMethods() const { return m_supportedMethods.get(); }
    void setSupportedMethods(const Vector<String>& value) { m_supportedMethods = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    ScriptValue m_data;
    Nullable<Vector<String>> m_supportedMethods;

    friend class V8PaymentMethodData;
};

} // namespace blink

#endif // PaymentMethodData_h
