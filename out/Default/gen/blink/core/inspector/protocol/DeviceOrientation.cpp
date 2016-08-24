// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/DeviceOrientation.h"

namespace blink {
namespace protocol {
namespace DeviceOrientation {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "DeviceOrientation";
const char Metainfo::commandPrefix[] = "DeviceOrientation.";
const char Metainfo::version[] = "1.1";

// ------------- Enum values from params.


// ------------- Frontend notifications.

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend)
        : DispatcherBase(frontendChannel)
        , m_backend(backend) {
        m_dispatchMap["DeviceOrientation.setDeviceOrientationOverride"] = &DispatcherImpl::setDeviceOrientationOverride;
        m_dispatchMap["DeviceOrientation.clearDeviceOrientationOverride"] = &DispatcherImpl::clearDeviceOrientationOverride;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void setDeviceOrientationOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void clearDeviceOrientationOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


void DispatcherImpl::setDeviceOrientationOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* alphaValue = object ? object->get("alpha") : nullptr;
    errors->setName("alpha");
    double in_alpha = ValueConversions<double>::parse(alphaValue, errors);
    protocol::Value* betaValue = object ? object->get("beta") : nullptr;
    errors->setName("beta");
    double in_beta = ValueConversions<double>::parse(betaValue, errors);
    protocol::Value* gammaValue = object ? object->get("gamma") : nullptr;
    errors->setName("gamma");
    double in_gamma = ValueConversions<double>::parse(gammaValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setDeviceOrientationOverride(&error, in_alpha, in_beta, in_gamma);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::clearDeviceOrientationOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->clearDeviceOrientationOverride(&error);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("DeviceOrientation", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // DeviceOrientation
} // namespace protocol
} // namespace blink
