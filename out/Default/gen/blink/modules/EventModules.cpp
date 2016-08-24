// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "modules/EventModulesFactory.h"

#include "EventModulesHeaders.h"
#include "core/frame/Deprecation.h"
#include "platform/RuntimeEnabledFeatures.h"

namespace blink {

Event* EventModulesFactory::create(ExecutionContext* executionContext, const String& type)
{
    if (type == "BeforeInstallPromptEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventBeforeInstallPromptEvent);
        return BeforeInstallPromptEvent::create();
    }
    if (type == "SyncEvent" && RuntimeEnabledFeatures::backgroundSyncEnabled()) {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventSyncEvent);
        return SyncEvent::create();
    }
    if (type == "DeviceMotionEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventDeviceMotionEvent);
        return DeviceMotionEvent::create();
    }
    if (type == "DeviceOrientationEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventDeviceOrientationEvent);
        return DeviceOrientationEvent::create();
    }
    if (type == "MediaEncryptedEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventMediaEncryptedEvent);
        return MediaEncryptedEvent::create();
    }
    if (type == "MediaKeyMessageEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventMediaKeyMessageEvent);
        return MediaKeyMessageEvent::create();
    }
    if (type == "GamepadEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventGamepadEvent);
        return GamepadEvent::create();
    }
    if (type == "IDBVersionChangeEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventIDBVersionChangeEvent);
        return IDBVersionChangeEvent::create();
    }
    if (type == "BlobEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventBlobEvent);
        return BlobEvent::create();
    }
    if (type == "MediaStreamEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventMediaStreamEvent);
        return MediaStreamEvent::create();
    }
    if (type == "MediaStreamTrackEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventMediaStreamTrackEvent);
        return MediaStreamTrackEvent::create();
    }
    if (type == "NotificationEvent" && RuntimeEnabledFeatures::notificationsEnabled()) {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventNotificationEvent);
        return NotificationEvent::create();
    }
    if (type == "RTCDTMFToneChangeEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventRTCDTMFToneChangeEvent);
        return RTCDTMFToneChangeEvent::create();
    }
    if (type == "RTCDataChannelEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventRTCDataChannelEvent);
        return RTCDataChannelEvent::create();
    }
    if (type == "RTCIceCandidateEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventRTCIceCandidateEvent);
        return RTCIceCandidateEvent::create();
    }
    if (type == "PresentationConnectionAvailableEvent" && RuntimeEnabledFeatures::presentationEnabled()) {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventPresentationConnectionAvailableEvent);
        return PresentationConnectionAvailableEvent::create();
    }
    if (type == "PresentationConnectionCloseEvent" && RuntimeEnabledFeatures::presentationEnabled()) {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventPresentationConnectionCloseEvent);
        return PresentationConnectionCloseEvent::create();
    }
    if (type == "PushEvent" && RuntimeEnabledFeatures::pushMessagingEnabled()) {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventPushEvent);
        return PushEvent::create();
    }
    if (type == "ExtendableEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventExtendableEvent);
        return ExtendableEvent::create();
    }
    if (type == "ExtendableMessageEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventExtendableMessageEvent);
        return ExtendableMessageEvent::create();
    }
    if (type == "FetchEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventFetchEvent);
        return FetchEvent::create();
    }
    if (type == "ServiceWorkerMessageEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventServiceWorkerMessageEvent);
        return ServiceWorkerMessageEvent::create();
    }
    if (type == "SpeechRecognitionError") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventSpeechRecognitionError);
        return SpeechRecognitionError::create();
    }
    if (type == "SpeechRecognitionEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventSpeechRecognitionEvent);
        return SpeechRecognitionEvent::create();
    }
    if (type == "SpeechSynthesisEvent" && RuntimeEnabledFeatures::scriptedSpeechEnabled()) {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventSpeechSynthesisEvent);
        return SpeechSynthesisEvent::create();
    }
    if (type == "StorageEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventStorageEvent);
        return StorageEvent::create();
    }
    if (type == "AudioProcessingEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventAudioProcessingEvent);
        return AudioProcessingEvent::create();
    }
    if (type == "OfflineAudioCompletionEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventOfflineAudioCompletionEvent);
        return OfflineAudioCompletionEvent::create();
    }
    if (type == "WebGLContextEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventWebGLContextEvent);
        return WebGLContextEvent::create();
    }
    if (type == "MIDIConnectionEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventMIDIConnectionEvent);
        return MIDIConnectionEvent::create();
    }
    if (type == "MIDIMessageEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventMIDIMessageEvent);
        return MIDIMessageEvent::create();
    }
    if (type == "CloseEvent") {
        UseCounter::count(executionContext, UseCounter::DocumentCreateEventCloseEvent);
        return CloseEvent::create();
    }
    return nullptr;
}

} // namespace blink
