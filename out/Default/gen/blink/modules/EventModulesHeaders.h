// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef EventModulesHeaders_h
#define EventModulesHeaders_h

#include "core/EventHeaders.h"

#include "modules/speech/SpeechSynthesisEvent.h"
#include "bindings/modules/v8/V8SpeechSynthesisEvent.h"
#include "modules/speech/SpeechRecognitionEvent.h"
#include "bindings/modules/v8/V8SpeechRecognitionEvent.h"
#include "modules/encryptedmedia/MediaEncryptedEvent.h"
#include "bindings/modules/v8/V8MediaEncryptedEvent.h"
#include "modules/push_messaging/PushEvent.h"
#include "bindings/modules/v8/V8PushEvent.h"
#include "modules/device_light/DeviceLightEvent.h"
#include "bindings/modules/v8/V8DeviceLightEvent.h"
#include "modules/serviceworkers/ExtendableEvent.h"
#include "bindings/modules/v8/V8ExtendableEvent.h"
#include "modules/serviceworkers/ServiceWorkerMessageEvent.h"
#include "bindings/modules/v8/V8ServiceWorkerMessageEvent.h"
#include "modules/mediarecorder/BlobEvent.h"
#include "bindings/modules/v8/V8BlobEvent.h"
#include "modules/payments/PaymentRequestUpdateEvent.h"
#include "bindings/modules/v8/V8PaymentRequestUpdateEvent.h"
#include "modules/webgl/WebGLContextEvent.h"
#include "bindings/modules/v8/V8WebGLContextEvent.h"
#include "modules/peerconnection/RTCDTMFToneChangeEvent.h"
#include "bindings/modules/v8/V8RTCDTMFToneChangeEvent.h"
#include "modules/device_orientation/DeviceOrientationEvent.h"
#include "bindings/modules/v8/V8DeviceOrientationEvent.h"
#include "modules/presentation/PresentationConnectionAvailableEvent.h"
#include "bindings/modules/v8/V8PresentationConnectionAvailableEvent.h"
#include "modules/sensor/SensorErrorEvent.h"
#include "bindings/modules/v8/V8SensorErrorEvent.h"
#include "modules/encryptedmedia/MediaKeyMessageEvent.h"
#include "bindings/modules/v8/V8MediaKeyMessageEvent.h"
#include "modules/serviceworkers/ForeignFetchEvent.h"
#include "bindings/modules/v8/V8ForeignFetchEvent.h"
#include "modules/gamepad/GamepadEvent.h"
#include "bindings/modules/v8/V8GamepadEvent.h"
#include "modules/mediastream/MediaStreamTrackEvent.h"
#include "bindings/modules/v8/V8MediaStreamTrackEvent.h"
#include "modules/peerconnection/RTCIceCandidateEvent.h"
#include "bindings/modules/v8/V8RTCIceCandidateEvent.h"
#include "modules/storage/StorageEvent.h"
#include "bindings/modules/v8/V8StorageEvent.h"
#include "modules/device_orientation/DeviceMotionEvent.h"
#include "bindings/modules/v8/V8DeviceMotionEvent.h"
#include "modules/background_sync/SyncEvent.h"
#include "bindings/modules/v8/V8SyncEvent.h"
#include "modules/presentation/PresentationConnectionCloseEvent.h"
#include "bindings/modules/v8/V8PresentationConnectionCloseEvent.h"
#include "modules/sensor/SensorReadingEvent.h"
#include "bindings/modules/v8/V8SensorReadingEvent.h"
#include "modules/webaudio/OfflineAudioCompletionEvent.h"
#include "bindings/modules/v8/V8OfflineAudioCompletionEvent.h"
#include "modules/app_banner/BeforeInstallPromptEvent.h"
#include "bindings/modules/v8/V8BeforeInstallPromptEvent.h"
#include "modules/serviceworkers/ExtendableMessageEvent.h"
#include "bindings/modules/v8/V8ExtendableMessageEvent.h"
#include "modules/mediastream/MediaStreamEvent.h"
#include "bindings/modules/v8/V8MediaStreamEvent.h"
#include "modules/notifications/NotificationEvent.h"
#include "bindings/modules/v8/V8NotificationEvent.h"
#include "modules/serviceworkers/InstallEvent.h"
#include "bindings/modules/v8/V8InstallEvent.h"
#include "modules/serviceworkers/FetchEvent.h"
#include "bindings/modules/v8/V8FetchEvent.h"
#include "modules/speech/SpeechRecognitionError.h"
#include "bindings/modules/v8/V8SpeechRecognitionError.h"
#include "modules/webmidi/MIDIConnectionEvent.h"
#include "bindings/modules/v8/V8MIDIConnectionEvent.h"
#include "modules/peerconnection/RTCDataChannelEvent.h"
#include "bindings/modules/v8/V8RTCDataChannelEvent.h"
#include "modules/indexeddb/IDBVersionChangeEvent.h"
#include "bindings/modules/v8/V8IDBVersionChangeEvent.h"
#include "modules/websockets/CloseEvent.h"
#include "bindings/modules/v8/V8CloseEvent.h"
#include "modules/webmidi/MIDIMessageEvent.h"
#include "bindings/modules/v8/V8MIDIMessageEvent.h"
#include "modules/webaudio/AudioProcessingEvent.h"
#include "bindings/modules/v8/V8AudioProcessingEvent.h"

#endif // EventModulesHeaders_h