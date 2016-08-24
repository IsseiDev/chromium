// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8HTMLVideoElementPartial.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMActivityLogger.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HTMLVideoElement.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8VideoPlaybackQuality.h"
#include "core/dom/Document.h"
#include "core/frame/Deprecation.h"
#include "modules/audio_output_devices/HTMLMediaElementAudioOutputDevice.h"
#include "modules/encryptedmedia/HTMLMediaElementEncryptedMedia.h"
#include "modules/mediacapturefromelement/HTMLMediaElementCapture.h"
#include "modules/mediasession/HTMLMediaElementMediaSession.h"
#include "modules/mediasource/HTMLVideoElementMediaSource.h"
#include "modules/remoteplayback/HTMLMediaElementRemotePlayback.h"
#include "modules/srcobject/HTMLMediaElementSrcObject.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

namespace HTMLVideoElementPartialV8Internal {

static void getVideoPlaybackQualityMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLVideoElement* impl = V8HTMLVideoElement::toImpl(info.Holder());
    v8SetReturnValueFast(info, HTMLVideoElementMediaSource::getVideoPlaybackQuality(*impl), impl);
}

static void getVideoPlaybackQualityMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLVideoElementPartialV8Internal::getVideoPlaybackQualityMethod(info);
}

} // namespace HTMLVideoElementPartialV8Internal

void V8HTMLVideoElementPartial::installV8HTMLVideoElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8HTMLVideoElement::installV8HTMLVideoElementTemplate(isolate, world, interfaceTemplate);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.

    if (RuntimeEnabledFeatures::mediaSourceExperimentalEnabled()) {
        const V8DOMConfiguration::MethodConfiguration getVideoPlaybackQualityMethodConfiguration = {"getVideoPlaybackQuality", HTMLVideoElementPartialV8Internal::getVideoPlaybackQualityMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype};
        V8DOMConfiguration::installMethod(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, getVideoPlaybackQualityMethodConfiguration);
    }
}

void V8HTMLVideoElementPartial::preparePrototypeAndInterfaceObject(v8::Local<v8::Context> context, const DOMWrapperWorld& world, v8::Local<v8::Object> prototypeObject, v8::Local<v8::Function> interfaceObject, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    V8HTMLVideoElement::preparePrototypeAndInterfaceObject(context, world, prototypeObject, interfaceObject, interfaceTemplate);
}

void V8HTMLVideoElementPartial::initialize()
{
    // Should be invoked from ModulesInitializer.
    V8HTMLVideoElement::updateWrapperTypeInfo(
        &V8HTMLVideoElementPartial::installV8HTMLVideoElementTemplate,
        &V8HTMLVideoElementPartial::preparePrototypeAndInterfaceObject);
}

} // namespace blink
