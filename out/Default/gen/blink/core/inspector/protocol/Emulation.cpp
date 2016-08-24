// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Emulation.h"

namespace blink {
namespace protocol {
namespace Emulation {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Emulation";
const char Metainfo::commandPrefix[] = "Emulation.";
const char Metainfo::version[] = "1.1";

const char* ScreenOrientation::TypeEnum::PortraitPrimary = "portraitPrimary";
const char* ScreenOrientation::TypeEnum::PortraitSecondary = "portraitSecondary";
const char* ScreenOrientation::TypeEnum::LandscapePrimary = "landscapePrimary";
const char* ScreenOrientation::TypeEnum::LandscapeSecondary = "landscapeSecondary";

std::unique_ptr<ScreenOrientation> ScreenOrientation::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ScreenOrientation> result(new ScreenOrientation());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    protocol::Value* angleValue = object->get("angle");
    errors->setName("angle");
    result->m_angle = ValueConversions<int>::parse(angleValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ScreenOrientation::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    result->setValue("angle", ValueConversions<int>::serialize(m_angle));
    return result;
}

std::unique_ptr<ScreenOrientation> ScreenOrientation::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

namespace VirtualTimePolicyEnum {
const char* Advance = "advance";
const char* Pause = "pause";
const char* PauseIfNetworkFetchesPending = "pauseIfNetworkFetchesPending";
} // namespace VirtualTimePolicyEnum

// ------------- Enum values from params.


namespace SetTouchEmulationEnabled {
namespace ConfigurationEnum {
const char* Mobile = "mobile";
const char* Desktop = "desktop";
} // namespace ConfigurationEnum
} // namespace SetTouchEmulationEnabled

// ------------- Frontend notifications.

void Frontend::virtualTimeBudgetExpired()
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Emulation.virtualTimeBudgetExpired");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
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
        m_dispatchMap["Emulation.resetPageScaleFactor"] = &DispatcherImpl::resetPageScaleFactor;
        m_dispatchMap["Emulation.setPageScaleFactor"] = &DispatcherImpl::setPageScaleFactor;
        m_dispatchMap["Emulation.setScriptExecutionDisabled"] = &DispatcherImpl::setScriptExecutionDisabled;
        m_dispatchMap["Emulation.setTouchEmulationEnabled"] = &DispatcherImpl::setTouchEmulationEnabled;
        m_dispatchMap["Emulation.setEmulatedMedia"] = &DispatcherImpl::setEmulatedMedia;
        m_dispatchMap["Emulation.setCPUThrottlingRate"] = &DispatcherImpl::setCPUThrottlingRate;
        m_dispatchMap["Emulation.setVirtualTimePolicy"] = &DispatcherImpl::setVirtualTimePolicy;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void resetPageScaleFactor(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setPageScaleFactor(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setScriptExecutionDisabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setTouchEmulationEnabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setEmulatedMedia(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setCPUThrottlingRate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setVirtualTimePolicy(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


void DispatcherImpl::resetPageScaleFactor(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->resetPageScaleFactor(&error);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setPageScaleFactor(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* pageScaleFactorValue = object ? object->get("pageScaleFactor") : nullptr;
    errors->setName("pageScaleFactor");
    double in_pageScaleFactor = ValueConversions<double>::parse(pageScaleFactorValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setPageScaleFactor(&error, in_pageScaleFactor);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setScriptExecutionDisabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* valueValue = object ? object->get("value") : nullptr;
    errors->setName("value");
    bool in_value = ValueConversions<bool>::parse(valueValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setScriptExecutionDisabled(&error, in_value);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setTouchEmulationEnabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* enabledValue = object ? object->get("enabled") : nullptr;
    errors->setName("enabled");
    bool in_enabled = ValueConversions<bool>::parse(enabledValue, errors);
    protocol::Value* configurationValue = object ? object->get("configuration") : nullptr;
    Maybe<WTF::String> in_configuration;
    if (configurationValue) {
        errors->setName("configuration");
        in_configuration = ValueConversions<WTF::String>::parse(configurationValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setTouchEmulationEnabled(&error, in_enabled, in_configuration);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setEmulatedMedia(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* mediaValue = object ? object->get("media") : nullptr;
    errors->setName("media");
    WTF::String in_media = ValueConversions<WTF::String>::parse(mediaValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setEmulatedMedia(&error, in_media);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setCPUThrottlingRate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* rateValue = object ? object->get("rate") : nullptr;
    errors->setName("rate");
    double in_rate = ValueConversions<double>::parse(rateValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setCPUThrottlingRate(&error, in_rate);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setVirtualTimePolicy(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* policyValue = object ? object->get("policy") : nullptr;
    errors->setName("policy");
    WTF::String in_policy = ValueConversions<WTF::String>::parse(policyValue, errors);
    protocol::Value* budgetValue = object ? object->get("budget") : nullptr;
    Maybe<int> in_budget;
    if (budgetValue) {
        errors->setName("budget");
        in_budget = ValueConversions<int>::parse(budgetValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setVirtualTimePolicy(&error, in_policy, in_budget);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Emulation", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Emulation
} // namespace protocol
} // namespace blink
