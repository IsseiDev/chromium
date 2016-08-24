// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef TouchEventInit_h
#define TouchEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/dom/Touch.h"
#include "core/events/EventModifierInit.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"

namespace blink {

class CORE_EXPORT TouchEventInit : public EventModifierInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    TouchEventInit();
    virtual ~TouchEventInit();

    bool hasChangedTouches() const { return !m_changedTouches.isNull(); }
    const HeapVector<Member<Touch>>& changedTouches() const { return m_changedTouches.get(); }
    void setChangedTouches(const HeapVector<Member<Touch>>& value) { m_changedTouches = value; }

    bool hasTargetTouches() const { return !m_targetTouches.isNull(); }
    const HeapVector<Member<Touch>>& targetTouches() const { return m_targetTouches.get(); }
    void setTargetTouches(const HeapVector<Member<Touch>>& value) { m_targetTouches = value; }

    bool hasTouches() const { return !m_touches.isNull(); }
    const HeapVector<Member<Touch>>& touches() const { return m_touches.get(); }
    void setTouches(const HeapVector<Member<Touch>>& value) { m_touches = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<HeapVector<Member<Touch>>> m_changedTouches;
    Nullable<HeapVector<Member<Touch>>> m_targetTouches;
    Nullable<HeapVector<Member<Touch>>> m_touches;

    friend class V8TouchEventInit;
};

} // namespace blink

#endif // TouchEventInit_h