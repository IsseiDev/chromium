// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/SystemInfo.h"

namespace blink {
namespace protocol {
namespace SystemInfo {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "SystemInfo";
const char Metainfo::commandPrefix[] = "SystemInfo.";
const char Metainfo::version[] = "1.1";

std::unique_ptr<GPUDevice> GPUDevice::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<GPUDevice> result(new GPUDevice());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* vendorIdValue = object->get("vendorId");
    errors->setName("vendorId");
    result->m_vendorId = ValueConversions<double>::parse(vendorIdValue, errors);
    protocol::Value* deviceIdValue = object->get("deviceId");
    errors->setName("deviceId");
    result->m_deviceId = ValueConversions<double>::parse(deviceIdValue, errors);
    protocol::Value* vendorStringValue = object->get("vendorString");
    errors->setName("vendorString");
    result->m_vendorString = ValueConversions<WTF::String>::parse(vendorStringValue, errors);
    protocol::Value* deviceStringValue = object->get("deviceString");
    errors->setName("deviceString");
    result->m_deviceString = ValueConversions<WTF::String>::parse(deviceStringValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> GPUDevice::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("vendorId", ValueConversions<double>::serialize(m_vendorId));
    result->setValue("deviceId", ValueConversions<double>::serialize(m_deviceId));
    result->setValue("vendorString", ValueConversions<WTF::String>::serialize(m_vendorString));
    result->setValue("deviceString", ValueConversions<WTF::String>::serialize(m_deviceString));
    return result;
}

std::unique_ptr<GPUDevice> GPUDevice::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<GPUInfo> GPUInfo::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<GPUInfo> result(new GPUInfo());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* devicesValue = object->get("devices");
    errors->setName("devices");
    result->m_devices = ValueConversions<protocol::Array<protocol::SystemInfo::GPUDevice>>::parse(devicesValue, errors);
    protocol::Value* auxAttributesValue = object->get("auxAttributes");
    if (auxAttributesValue) {
        errors->setName("auxAttributes");
        result->m_auxAttributes = ValueConversions<protocol::DictionaryValue>::parse(auxAttributesValue, errors);
    }
    protocol::Value* featureStatusValue = object->get("featureStatus");
    if (featureStatusValue) {
        errors->setName("featureStatus");
        result->m_featureStatus = ValueConversions<protocol::DictionaryValue>::parse(featureStatusValue, errors);
    }
    protocol::Value* driverBugWorkaroundsValue = object->get("driverBugWorkarounds");
    errors->setName("driverBugWorkarounds");
    result->m_driverBugWorkarounds = ValueConversions<protocol::Array<WTF::String>>::parse(driverBugWorkaroundsValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> GPUInfo::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("devices", ValueConversions<protocol::Array<protocol::SystemInfo::GPUDevice>>::serialize(m_devices.get()));
    if (m_auxAttributes.isJust())
        result->setValue("auxAttributes", ValueConversions<protocol::DictionaryValue>::serialize(m_auxAttributes.fromJust()));
    if (m_featureStatus.isJust())
        result->setValue("featureStatus", ValueConversions<protocol::DictionaryValue>::serialize(m_featureStatus.fromJust()));
    result->setValue("driverBugWorkarounds", ValueConversions<protocol::Array<WTF::String>>::serialize(m_driverBugWorkarounds.get()));
    return result;
}

std::unique_ptr<GPUInfo> GPUInfo::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend)
        : DispatcherBase(frontendChannel)
        , m_backend(backend) {
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;


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


// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("SystemInfo", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // SystemInfo
} // namespace protocol
} // namespace blink
