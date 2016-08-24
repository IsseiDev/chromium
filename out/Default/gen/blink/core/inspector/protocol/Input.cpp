// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Input.h"

namespace blink {
namespace protocol {
namespace Input {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Input";
const char Metainfo::commandPrefix[] = "Input.";
const char Metainfo::version[] = "1.1";

const char* TouchPoint::StateEnum::TouchPressed = "touchPressed";
const char* TouchPoint::StateEnum::TouchReleased = "touchReleased";
const char* TouchPoint::StateEnum::TouchMoved = "touchMoved";
const char* TouchPoint::StateEnum::TouchStationary = "touchStationary";
const char* TouchPoint::StateEnum::TouchCancelled = "touchCancelled";

std::unique_ptr<TouchPoint> TouchPoint::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<TouchPoint> result(new TouchPoint());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* stateValue = object->get("state");
    errors->setName("state");
    result->m_state = ValueConversions<WTF::String>::parse(stateValue, errors);
    protocol::Value* xValue = object->get("x");
    errors->setName("x");
    result->m_x = ValueConversions<int>::parse(xValue, errors);
    protocol::Value* yValue = object->get("y");
    errors->setName("y");
    result->m_y = ValueConversions<int>::parse(yValue, errors);
    protocol::Value* radiusXValue = object->get("radiusX");
    if (radiusXValue) {
        errors->setName("radiusX");
        result->m_radiusX = ValueConversions<int>::parse(radiusXValue, errors);
    }
    protocol::Value* radiusYValue = object->get("radiusY");
    if (radiusYValue) {
        errors->setName("radiusY");
        result->m_radiusY = ValueConversions<int>::parse(radiusYValue, errors);
    }
    protocol::Value* rotationAngleValue = object->get("rotationAngle");
    if (rotationAngleValue) {
        errors->setName("rotationAngle");
        result->m_rotationAngle = ValueConversions<double>::parse(rotationAngleValue, errors);
    }
    protocol::Value* forceValue = object->get("force");
    if (forceValue) {
        errors->setName("force");
        result->m_force = ValueConversions<double>::parse(forceValue, errors);
    }
    protocol::Value* idValue = object->get("id");
    if (idValue) {
        errors->setName("id");
        result->m_id = ValueConversions<double>::parse(idValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> TouchPoint::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("state", ValueConversions<WTF::String>::serialize(m_state));
    result->setValue("x", ValueConversions<int>::serialize(m_x));
    result->setValue("y", ValueConversions<int>::serialize(m_y));
    if (m_radiusX.isJust())
        result->setValue("radiusX", ValueConversions<int>::serialize(m_radiusX.fromJust()));
    if (m_radiusY.isJust())
        result->setValue("radiusY", ValueConversions<int>::serialize(m_radiusY.fromJust()));
    if (m_rotationAngle.isJust())
        result->setValue("rotationAngle", ValueConversions<double>::serialize(m_rotationAngle.fromJust()));
    if (m_force.isJust())
        result->setValue("force", ValueConversions<double>::serialize(m_force.fromJust()));
    if (m_id.isJust())
        result->setValue("id", ValueConversions<double>::serialize(m_id.fromJust()));
    return result;
}

std::unique_ptr<TouchPoint> TouchPoint::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

namespace GestureSourceTypeEnum {
const char* Default = "default";
const char* Touch = "touch";
const char* Mouse = "mouse";
} // namespace GestureSourceTypeEnum

// ------------- Enum values from params.


namespace DispatchKeyEvent {
namespace TypeEnum {
const char* KeyDown = "keyDown";
const char* KeyUp = "keyUp";
const char* RawKeyDown = "rawKeyDown";
const char* Char = "char";
} // namespace TypeEnum
} // namespace DispatchKeyEvent

namespace DispatchMouseEvent {
namespace TypeEnum {
const char* MousePressed = "mousePressed";
const char* MouseReleased = "mouseReleased";
const char* MouseMoved = "mouseMoved";
} // namespace TypeEnum
} // namespace DispatchMouseEvent

namespace DispatchMouseEvent {
namespace ButtonEnum {
const char* None = "none";
const char* Left = "left";
const char* Middle = "middle";
const char* Right = "right";
} // namespace ButtonEnum
} // namespace DispatchMouseEvent

namespace DispatchTouchEvent {
namespace TypeEnum {
const char* TouchStart = "touchStart";
const char* TouchEnd = "touchEnd";
const char* TouchMove = "touchMove";
} // namespace TypeEnum
} // namespace DispatchTouchEvent

namespace EmulateTouchFromMouseEvent {
namespace TypeEnum {
const char* MousePressed = "mousePressed";
const char* MouseReleased = "mouseReleased";
const char* MouseMoved = "mouseMoved";
const char* MouseWheel = "mouseWheel";
} // namespace TypeEnum
} // namespace EmulateTouchFromMouseEvent

namespace EmulateTouchFromMouseEvent {
namespace ButtonEnum {
const char* None = "none";
const char* Left = "left";
const char* Middle = "middle";
const char* Right = "right";
} // namespace ButtonEnum
} // namespace EmulateTouchFromMouseEvent

// ------------- Frontend notifications.

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend)
        : DispatcherBase(frontendChannel)
        , m_backend(backend) {
        m_dispatchMap["Input.dispatchTouchEvent"] = &DispatcherImpl::dispatchTouchEvent;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void dispatchTouchEvent(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


void DispatcherImpl::dispatchTouchEvent(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* typeValue = object ? object->get("type") : nullptr;
    errors->setName("type");
    WTF::String in_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    protocol::Value* touchPointsValue = object ? object->get("touchPoints") : nullptr;
    errors->setName("touchPoints");
    std::unique_ptr<protocol::Array<protocol::Input::TouchPoint>> in_touchPoints = ValueConversions<protocol::Array<protocol::Input::TouchPoint>>::parse(touchPointsValue, errors);
    protocol::Value* modifiersValue = object ? object->get("modifiers") : nullptr;
    Maybe<int> in_modifiers;
    if (modifiersValue) {
        errors->setName("modifiers");
        in_modifiers = ValueConversions<int>::parse(modifiersValue, errors);
    }
    protocol::Value* timestampValue = object ? object->get("timestamp") : nullptr;
    Maybe<double> in_timestamp;
    if (timestampValue) {
        errors->setName("timestamp");
        in_timestamp = ValueConversions<double>::parse(timestampValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->dispatchTouchEvent(&error, in_type, std::move(in_touchPoints), in_modifiers, in_timestamp);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Input", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Input
} // namespace protocol
} // namespace blink
