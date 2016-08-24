// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef MediaTrackConstraintSet_h
#define MediaTrackConstraintSet_h

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/IDLDictionaryBase.h"
#include "bindings/core/v8/Nullable.h"
#include "bindings/modules/v8/BooleanOrConstrainBooleanParameters.h"
#include "bindings/modules/v8/DoubleOrConstrainDoubleRange.h"
#include "bindings/modules/v8/LongOrConstrainLongRange.h"
#include "bindings/modules/v8/StringOrStringSequenceOrConstrainDOMStringParameters.h"
#include "modules/ModulesExport.h"
#include "modules/mediastream/ConstrainBooleanParameters.h"
#include "modules/mediastream/ConstrainDOMStringParameters.h"
#include "modules/mediastream/ConstrainDoubleRange.h"
#include "modules/mediastream/ConstrainLongRange.h"
#include "platform/heap/Handle.h"
#include "wtf/Vector.h"
#include "wtf/text/WTFString.h"

namespace blink {

class MODULES_EXPORT MediaTrackConstraintSet : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    MediaTrackConstraintSet();
    virtual ~MediaTrackConstraintSet();

    bool hasAspectRatio() const { return !m_aspectRatio.isNull(); }
    const DoubleOrConstrainDoubleRange& aspectRatio() const { return m_aspectRatio; }
    void setAspectRatio(const DoubleOrConstrainDoubleRange& value) { m_aspectRatio = value; }

    bool hasChannelCount() const { return !m_channelCount.isNull(); }
    const LongOrConstrainLongRange& channelCount() const { return m_channelCount; }
    void setChannelCount(const LongOrConstrainLongRange& value) { m_channelCount = value; }

    bool hasDeviceId() const { return !m_deviceId.isNull(); }
    const StringOrStringSequenceOrConstrainDOMStringParameters& deviceId() const { return m_deviceId; }
    void setDeviceId(const StringOrStringSequenceOrConstrainDOMStringParameters& value) { m_deviceId = value; }

    bool hasEchoCancellation() const { return !m_echoCancellation.isNull(); }
    const BooleanOrConstrainBooleanParameters& echoCancellation() const { return m_echoCancellation; }
    void setEchoCancellation(const BooleanOrConstrainBooleanParameters& value) { m_echoCancellation = value; }

    bool hasFacingMode() const { return !m_facingMode.isNull(); }
    const StringOrStringSequenceOrConstrainDOMStringParameters& facingMode() const { return m_facingMode; }
    void setFacingMode(const StringOrStringSequenceOrConstrainDOMStringParameters& value) { m_facingMode = value; }

    bool hasFrameRate() const { return !m_frameRate.isNull(); }
    const DoubleOrConstrainDoubleRange& frameRate() const { return m_frameRate; }
    void setFrameRate(const DoubleOrConstrainDoubleRange& value) { m_frameRate = value; }

    bool hasGroupId() const { return !m_groupId.isNull(); }
    const StringOrStringSequenceOrConstrainDOMStringParameters& groupId() const { return m_groupId; }
    void setGroupId(const StringOrStringSequenceOrConstrainDOMStringParameters& value) { m_groupId = value; }

    bool hasHeight() const { return !m_height.isNull(); }
    const LongOrConstrainLongRange& height() const { return m_height; }
    void setHeight(const LongOrConstrainLongRange& value) { m_height = value; }

    bool hasLatency() const { return !m_latency.isNull(); }
    const DoubleOrConstrainDoubleRange& latency() const { return m_latency; }
    void setLatency(const DoubleOrConstrainDoubleRange& value) { m_latency = value; }

    bool hasMandatory() const { return !m_mandatory.isUndefinedOrNull(); }
    Dictionary mandatory() const { return m_mandatory; }
    void setMandatory(Dictionary value) { m_mandatory = value; }

    bool hasOptional() const { return !m_optional.isNull(); }
    const Vector<Dictionary>& optional() const { return m_optional.get(); }
    void setOptional(const Vector<Dictionary>& value) { m_optional = value; }

    bool hasSampleRate() const { return !m_sampleRate.isNull(); }
    const LongOrConstrainLongRange& sampleRate() const { return m_sampleRate; }
    void setSampleRate(const LongOrConstrainLongRange& value) { m_sampleRate = value; }

    bool hasSampleSize() const { return !m_sampleSize.isNull(); }
    const LongOrConstrainLongRange& sampleSize() const { return m_sampleSize; }
    void setSampleSize(const LongOrConstrainLongRange& value) { m_sampleSize = value; }

    bool hasVolume() const { return !m_volume.isNull(); }
    const DoubleOrConstrainDoubleRange& volume() const { return m_volume; }
    void setVolume(const DoubleOrConstrainDoubleRange& value) { m_volume = value; }

    bool hasWidth() const { return !m_width.isNull(); }
    const LongOrConstrainLongRange& width() const { return m_width; }
    void setWidth(const LongOrConstrainLongRange& value) { m_width = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    DoubleOrConstrainDoubleRange m_aspectRatio;
    LongOrConstrainLongRange m_channelCount;
    StringOrStringSequenceOrConstrainDOMStringParameters m_deviceId;
    BooleanOrConstrainBooleanParameters m_echoCancellation;
    StringOrStringSequenceOrConstrainDOMStringParameters m_facingMode;
    DoubleOrConstrainDoubleRange m_frameRate;
    StringOrStringSequenceOrConstrainDOMStringParameters m_groupId;
    LongOrConstrainLongRange m_height;
    DoubleOrConstrainDoubleRange m_latency;
    Dictionary m_mandatory;
    Nullable<Vector<Dictionary>> m_optional;
    LongOrConstrainLongRange m_sampleRate;
    LongOrConstrainLongRange m_sampleSize;
    DoubleOrConstrainDoubleRange m_volume;
    LongOrConstrainLongRange m_width;

    friend class V8MediaTrackConstraintSet;
};

} // namespace blink

#endif // MediaTrackConstraintSet_h
