// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef SensorErrorEventInit_h
#define SensorErrorEventInit_h

#include "bindings/core/v8/ScriptValue.h"
#include "core/events/EventInit.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT SensorErrorEventInit : public EventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    SensorErrorEventInit();
    virtual ~SensorErrorEventInit();

    bool hasError() const { return !(m_error.isEmpty() || m_error.isNull() || m_error.isUndefined()); }
    ScriptValue error() const { return m_error; }
    void setError(ScriptValue value) { m_error = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    ScriptValue m_error;

    friend class V8SensorErrorEventInit;
};

} // namespace blink

#endif // SensorErrorEventInit_h
