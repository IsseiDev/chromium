// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Animation.h"

namespace blink {
namespace protocol {
namespace Animation {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Animation";
const char Metainfo::commandPrefix[] = "Animation.";
const char Metainfo::version[] = "1.1";

const char* Animation::TypeEnum::CSSTransition = "CSSTransition";
const char* Animation::TypeEnum::CSSAnimation = "CSSAnimation";
const char* Animation::TypeEnum::WebAnimation = "WebAnimation";

std::unique_ptr<Animation> Animation::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Animation> result(new Animation());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* idValue = object->get("id");
    errors->setName("id");
    result->m_id = ValueConversions<WTF::String>::parse(idValue, errors);
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<WTF::String>::parse(nameValue, errors);
    protocol::Value* pausedStateValue = object->get("pausedState");
    errors->setName("pausedState");
    result->m_pausedState = ValueConversions<bool>::parse(pausedStateValue, errors);
    protocol::Value* playStateValue = object->get("playState");
    errors->setName("playState");
    result->m_playState = ValueConversions<WTF::String>::parse(playStateValue, errors);
    protocol::Value* playbackRateValue = object->get("playbackRate");
    errors->setName("playbackRate");
    result->m_playbackRate = ValueConversions<double>::parse(playbackRateValue, errors);
    protocol::Value* startTimeValue = object->get("startTime");
    errors->setName("startTime");
    result->m_startTime = ValueConversions<double>::parse(startTimeValue, errors);
    protocol::Value* currentTimeValue = object->get("currentTime");
    errors->setName("currentTime");
    result->m_currentTime = ValueConversions<double>::parse(currentTimeValue, errors);
    protocol::Value* sourceValue = object->get("source");
    errors->setName("source");
    result->m_source = ValueConversions<protocol::Animation::AnimationEffect>::parse(sourceValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    protocol::Value* cssIdValue = object->get("cssId");
    if (cssIdValue) {
        errors->setName("cssId");
        result->m_cssId = ValueConversions<WTF::String>::parse(cssIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Animation::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("id", ValueConversions<WTF::String>::serialize(m_id));
    result->setValue("name", ValueConversions<WTF::String>::serialize(m_name));
    result->setValue("pausedState", ValueConversions<bool>::serialize(m_pausedState));
    result->setValue("playState", ValueConversions<WTF::String>::serialize(m_playState));
    result->setValue("playbackRate", ValueConversions<double>::serialize(m_playbackRate));
    result->setValue("startTime", ValueConversions<double>::serialize(m_startTime));
    result->setValue("currentTime", ValueConversions<double>::serialize(m_currentTime));
    result->setValue("source", ValueConversions<protocol::Animation::AnimationEffect>::serialize(m_source.get()));
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    if (m_cssId.isJust())
        result->setValue("cssId", ValueConversions<WTF::String>::serialize(m_cssId.fromJust()));
    return result;
}

std::unique_ptr<Animation> Animation::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<AnimationEffect> AnimationEffect::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AnimationEffect> result(new AnimationEffect());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* delayValue = object->get("delay");
    errors->setName("delay");
    result->m_delay = ValueConversions<double>::parse(delayValue, errors);
    protocol::Value* endDelayValue = object->get("endDelay");
    errors->setName("endDelay");
    result->m_endDelay = ValueConversions<double>::parse(endDelayValue, errors);
    protocol::Value* iterationStartValue = object->get("iterationStart");
    errors->setName("iterationStart");
    result->m_iterationStart = ValueConversions<double>::parse(iterationStartValue, errors);
    protocol::Value* iterationsValue = object->get("iterations");
    errors->setName("iterations");
    result->m_iterations = ValueConversions<double>::parse(iterationsValue, errors);
    protocol::Value* durationValue = object->get("duration");
    errors->setName("duration");
    result->m_duration = ValueConversions<double>::parse(durationValue, errors);
    protocol::Value* directionValue = object->get("direction");
    errors->setName("direction");
    result->m_direction = ValueConversions<WTF::String>::parse(directionValue, errors);
    protocol::Value* fillValue = object->get("fill");
    errors->setName("fill");
    result->m_fill = ValueConversions<WTF::String>::parse(fillValue, errors);
    protocol::Value* backendNodeIdValue = object->get("backendNodeId");
    errors->setName("backendNodeId");
    result->m_backendNodeId = ValueConversions<int>::parse(backendNodeIdValue, errors);
    protocol::Value* keyframesRuleValue = object->get("keyframesRule");
    if (keyframesRuleValue) {
        errors->setName("keyframesRule");
        result->m_keyframesRule = ValueConversions<protocol::Animation::KeyframesRule>::parse(keyframesRuleValue, errors);
    }
    protocol::Value* easingValue = object->get("easing");
    errors->setName("easing");
    result->m_easing = ValueConversions<WTF::String>::parse(easingValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AnimationEffect::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("delay", ValueConversions<double>::serialize(m_delay));
    result->setValue("endDelay", ValueConversions<double>::serialize(m_endDelay));
    result->setValue("iterationStart", ValueConversions<double>::serialize(m_iterationStart));
    result->setValue("iterations", ValueConversions<double>::serialize(m_iterations));
    result->setValue("duration", ValueConversions<double>::serialize(m_duration));
    result->setValue("direction", ValueConversions<WTF::String>::serialize(m_direction));
    result->setValue("fill", ValueConversions<WTF::String>::serialize(m_fill));
    result->setValue("backendNodeId", ValueConversions<int>::serialize(m_backendNodeId));
    if (m_keyframesRule.isJust())
        result->setValue("keyframesRule", ValueConversions<protocol::Animation::KeyframesRule>::serialize(m_keyframesRule.fromJust()));
    result->setValue("easing", ValueConversions<WTF::String>::serialize(m_easing));
    return result;
}

std::unique_ptr<AnimationEffect> AnimationEffect::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<KeyframesRule> KeyframesRule::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<KeyframesRule> result(new KeyframesRule());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    if (nameValue) {
        errors->setName("name");
        result->m_name = ValueConversions<WTF::String>::parse(nameValue, errors);
    }
    protocol::Value* keyframesValue = object->get("keyframes");
    errors->setName("keyframes");
    result->m_keyframes = ValueConversions<protocol::Array<protocol::Animation::KeyframeStyle>>::parse(keyframesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> KeyframesRule::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_name.isJust())
        result->setValue("name", ValueConversions<WTF::String>::serialize(m_name.fromJust()));
    result->setValue("keyframes", ValueConversions<protocol::Array<protocol::Animation::KeyframeStyle>>::serialize(m_keyframes.get()));
    return result;
}

std::unique_ptr<KeyframesRule> KeyframesRule::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<KeyframeStyle> KeyframeStyle::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<KeyframeStyle> result(new KeyframeStyle());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* offsetValue = object->get("offset");
    errors->setName("offset");
    result->m_offset = ValueConversions<WTF::String>::parse(offsetValue, errors);
    protocol::Value* easingValue = object->get("easing");
    errors->setName("easing");
    result->m_easing = ValueConversions<WTF::String>::parse(easingValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> KeyframeStyle::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("offset", ValueConversions<WTF::String>::serialize(m_offset));
    result->setValue("easing", ValueConversions<WTF::String>::serialize(m_easing));
    return result;
}

std::unique_ptr<KeyframeStyle> KeyframeStyle::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::animationCreated(const WTF::String& id)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Animation.animationCreated");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("id", ValueConversions<WTF::String>::serialize(id));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::animationStarted(std::unique_ptr<protocol::Animation::Animation> animation)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Animation.animationStarted");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("animation", ValueConversions<protocol::Animation::Animation>::serialize(animation.get()));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::animationCanceled(const WTF::String& id)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Animation.animationCanceled");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("id", ValueConversions<WTF::String>::serialize(id));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend)
        : DispatcherBase(frontendChannel)
        , m_backend(backend) {
        m_dispatchMap["Animation.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["Animation.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Animation.getPlaybackRate"] = &DispatcherImpl::getPlaybackRate;
        m_dispatchMap["Animation.setPlaybackRate"] = &DispatcherImpl::setPlaybackRate;
        m_dispatchMap["Animation.getCurrentTime"] = &DispatcherImpl::getCurrentTime;
        m_dispatchMap["Animation.setPaused"] = &DispatcherImpl::setPaused;
        m_dispatchMap["Animation.setTiming"] = &DispatcherImpl::setTiming;
        m_dispatchMap["Animation.seekAnimations"] = &DispatcherImpl::seekAnimations;
        m_dispatchMap["Animation.releaseAnimations"] = &DispatcherImpl::releaseAnimations;
        m_dispatchMap["Animation.resolveAnimation"] = &DispatcherImpl::resolveAnimation;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getPlaybackRate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setPlaybackRate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getCurrentTime(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setPaused(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setTiming(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void seekAnimations(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void releaseAnimations(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void resolveAnimation(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

    Backend* m_backend;
};

void DispatcherImpl::dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject)
{
    protocol::HashMap<String16, CallHandler>::iterator it = m_dispatchMap.find(method);
    if (it == m_dispatchMap.end()) {
        reportProtocolError(callId, MethodNotFound, "'" + method + "' wasn't found", nullptr);
        return;
    }

    protocol::ErrorSupport errors;
    (this->*(it->second))(callId, std::move(messageObject), &errors);
}


void DispatcherImpl::enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->enable(&error);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->disable(&error);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::getPlaybackRate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    double out_playbackRate;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->getPlaybackRate(&error, &out_playbackRate);
    if (!error.length()) {
        result->setValue("playbackRate", ValueConversions<double>::serialize(out_playbackRate));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::setPlaybackRate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* playbackRateValue = object ? object->get("playbackRate") : nullptr;
    errors->setName("playbackRate");
    double in_playbackRate = ValueConversions<double>::parse(playbackRateValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setPlaybackRate(&error, in_playbackRate);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::getCurrentTime(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* idValue = object ? object->get("id") : nullptr;
    errors->setName("id");
    WTF::String in_id = ValueConversions<WTF::String>::parse(idValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    double out_currentTime;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->getCurrentTime(&error, in_id, &out_currentTime);
    if (!error.length()) {
        result->setValue("currentTime", ValueConversions<double>::serialize(out_currentTime));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::setPaused(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* animationsValue = object ? object->get("animations") : nullptr;
    errors->setName("animations");
    std::unique_ptr<protocol::Array<WTF::String>> in_animations = ValueConversions<protocol::Array<WTF::String>>::parse(animationsValue, errors);
    protocol::Value* pausedValue = object ? object->get("paused") : nullptr;
    errors->setName("paused");
    bool in_paused = ValueConversions<bool>::parse(pausedValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setPaused(&error, std::move(in_animations), in_paused);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setTiming(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* animationIdValue = object ? object->get("animationId") : nullptr;
    errors->setName("animationId");
    WTF::String in_animationId = ValueConversions<WTF::String>::parse(animationIdValue, errors);
    protocol::Value* durationValue = object ? object->get("duration") : nullptr;
    errors->setName("duration");
    double in_duration = ValueConversions<double>::parse(durationValue, errors);
    protocol::Value* delayValue = object ? object->get("delay") : nullptr;
    errors->setName("delay");
    double in_delay = ValueConversions<double>::parse(delayValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setTiming(&error, in_animationId, in_duration, in_delay);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::seekAnimations(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* animationsValue = object ? object->get("animations") : nullptr;
    errors->setName("animations");
    std::unique_ptr<protocol::Array<WTF::String>> in_animations = ValueConversions<protocol::Array<WTF::String>>::parse(animationsValue, errors);
    protocol::Value* currentTimeValue = object ? object->get("currentTime") : nullptr;
    errors->setName("currentTime");
    double in_currentTime = ValueConversions<double>::parse(currentTimeValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->seekAnimations(&error, std::move(in_animations), in_currentTime);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::releaseAnimations(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* animationsValue = object ? object->get("animations") : nullptr;
    errors->setName("animations");
    std::unique_ptr<protocol::Array<WTF::String>> in_animations = ValueConversions<protocol::Array<WTF::String>>::parse(animationsValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->releaseAnimations(&error, std::move(in_animations));
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::resolveAnimation(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* animationIdValue = object ? object->get("animationId") : nullptr;
    errors->setName("animationId");
    WTF::String in_animationId = ValueConversions<WTF::String>::parse(animationIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    std::unique_ptr<protocol::Runtime::API::RemoteObject> out_remoteObject;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->resolveAnimation(&error, in_animationId, &out_remoteObject);
    if (!error.length()) {
        result->setValue("remoteObject", ValueConversions<protocol::Runtime::API::RemoteObject>::serialize(out_remoteObject.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Animation", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Animation
} // namespace protocol
} // namespace blink
