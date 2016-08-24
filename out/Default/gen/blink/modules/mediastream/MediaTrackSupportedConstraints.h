// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef MediaTrackSupportedConstraints_h
#define MediaTrackSupportedConstraints_h

#include "bindings/core/v8/IDLDictionaryBase.h"
#include "bindings/core/v8/Nullable.h"
#include "modules/ModulesExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class MODULES_EXPORT MediaTrackSupportedConstraints : public IDLDictionaryBase {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    MediaTrackSupportedConstraints();
    virtual ~MediaTrackSupportedConstraints();

    bool hasAspectRatio() const { return !m_aspectRatio.isNull(); }
    bool aspectRatio() const { return m_aspectRatio.get(); }
    void setAspectRatio(bool value) { m_aspectRatio = value; }

    bool hasChannelCount() const { return !m_channelCount.isNull(); }
    bool channelCount() const { return m_channelCount.get(); }
    void setChannelCount(bool value) { m_channelCount = value; }

    bool hasDeviceId() const { return !m_deviceId.isNull(); }
    bool deviceId() const { return m_deviceId.get(); }
    void setDeviceId(bool value) { m_deviceId = value; }

    bool hasEchoCancellation() const { return !m_echoCancellation.isNull(); }
    bool echoCancellation() const { return m_echoCancellation.get(); }
    void setEchoCancellation(bool value) { m_echoCancellation = value; }

    bool hasFacingMode() const { return !m_facingMode.isNull(); }
    bool facingMode() const { return m_facingMode.get(); }
    void setFacingMode(bool value) { m_facingMode = value; }

    bool hasFrameRate() const { return !m_frameRate.isNull(); }
    bool frameRate() const { return m_frameRate.get(); }
    void setFrameRate(bool value) { m_frameRate = value; }

    bool hasGroupId() const { return !m_groupId.isNull(); }
    bool groupId() const { return m_groupId.get(); }
    void setGroupId(bool value) { m_groupId = value; }

    bool hasHeight() const { return !m_height.isNull(); }
    bool height() const { return m_height.get(); }
    void setHeight(bool value) { m_height = value; }

    bool hasLatency() const { return !m_latency.isNull(); }
    bool latency() const { return m_latency.get(); }
    void setLatency(bool value) { m_latency = value; }

    bool hasSampleRate() const { return !m_sampleRate.isNull(); }
    bool sampleRate() const { return m_sampleRate.get(); }
    void setSampleRate(bool value) { m_sampleRate = value; }

    bool hasSampleSize() const { return !m_sampleSize.isNull(); }
    bool sampleSize() const { return m_sampleSize.get(); }
    void setSampleSize(bool value) { m_sampleSize = value; }

    bool hasVolume() const { return !m_volume.isNull(); }
    bool volume() const { return m_volume.get(); }
    void setVolume(bool value) { m_volume = value; }

    bool hasWidth() const { return !m_width.isNull(); }
    bool width() const { return m_width.get(); }
    void setWidth(bool value) { m_width = value; }

    v8::Local<v8::Value> toV8Impl(v8::Local<v8::Object>, v8::Isolate*) const override;
    DECLARE_VIRTUAL_TRACE();

private:
    Nullable<bool> m_aspectRatio;
    Nullable<bool> m_channelCount;
    Nullable<bool> m_deviceId;
    Nullable<bool> m_echoCancellation;
    Nullable<bool> m_facingMode;
    Nullable<bool> m_frameRate;
    Nullable<bool> m_groupId;
    Nullable<bool> m_height;
    Nullable<bool> m_latency;
    Nullable<bool> m_sampleRate;
    Nullable<bool> m_sampleSize;
    Nullable<bool> m_volume;
    Nullable<bool> m_width;

    friend class V8MediaTrackSupportedConstraints;
};

} // namespace blink

#endif // MediaTrackSupportedConstraints_h
