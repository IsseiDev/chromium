// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef PointerEventInit_h
#define PointerEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/events/MouseEventInit.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT PointerEventInit : public MouseEventInit {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    PointerEventInit();
    virtual ~PointerEventInit();

    bool hasHeight() const { return !m_height.isNull(); }
    double height() const { return m_height.get(); }
    void setHeight(double value) { m_height = value; }

    bool hasIsPrimary() const { return !m_isPrimary.isNull(); }
    bool isPrimary() const { return m_isPrimary.get(); }
    void setIsPrimary(bool value) { m_isPrimary = value; }

    bool hasPointerId() const { return !m_pointerId.isNull(); }
    int pointerId() const { return m_pointerId.get(); }
    void setPointerId(int value) { m_pointerId = value; }

    bool hasPointerType() const { return !m_pointerType.isNull(); }
    String pointerType() const { return m_pointerType; }
    void setPointerType(String value) { m_pointerType = value; }

    bool hasPressure() const { return !m_pressure.isNull(); }
    float pressure() const { return m_pressure.get(); }
    void setPressure(float value) { m_pressure = value; }

    bool hasTiltX() const { return !m_tiltX.isNull(); }
    int tiltX() const { return m_tiltX.get(); }
    void setTiltX(int value) { m_tiltX = value; }

    bool hasTiltY() const { return !m_tiltY.isNull(); }
    int tiltY() const { return m_tiltY.get(); }
    void setTiltY(int value) { m_tiltY = value; }

    bool hasWidth() const { return !m_width.isNull(); }
    double width() const { return m_width.get(); }
    void setWidth(double value) { m_width = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<double> m_height;
    Nullable<bool> m_isPrimary;
    Nullable<int> m_pointerId;
    String m_pointerType;
    Nullable<float> m_pressure;
    Nullable<int> m_tiltX;
    Nullable<int> m_tiltY;
    Nullable<double> m_width;

    friend class V8PointerEventInit;
};

} // namespace blink

#endif // PointerEventInit_h
