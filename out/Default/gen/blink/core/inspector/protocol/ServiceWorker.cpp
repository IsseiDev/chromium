// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/ServiceWorker.h"

namespace blink {
namespace protocol {
namespace ServiceWorker {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "ServiceWorker";
const char Metainfo::commandPrefix[] = "ServiceWorker.";
const char Metainfo::version[] = "1.1";

std::unique_ptr<ServiceWorkerRegistration> ServiceWorkerRegistration::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ServiceWorkerRegistration> result(new ServiceWorkerRegistration());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* registrationIdValue = object->get("registrationId");
    errors->setName("registrationId");
    result->m_registrationId = ValueConversions<WTF::String>::parse(registrationIdValue, errors);
    protocol::Value* scopeURLValue = object->get("scopeURL");
    errors->setName("scopeURL");
    result->m_scopeURL = ValueConversions<WTF::String>::parse(scopeURLValue, errors);
    protocol::Value* isDeletedValue = object->get("isDeleted");
    errors->setName("isDeleted");
    result->m_isDeleted = ValueConversions<bool>::parse(isDeletedValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ServiceWorkerRegistration::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("registrationId", ValueConversions<WTF::String>::serialize(m_registrationId));
    result->setValue("scopeURL", ValueConversions<WTF::String>::serialize(m_scopeURL));
    result->setValue("isDeleted", ValueConversions<bool>::serialize(m_isDeleted));
    return result;
}

std::unique_ptr<ServiceWorkerRegistration> ServiceWorkerRegistration::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

namespace ServiceWorkerVersionRunningStatusEnum {
const char* Stopped = "stopped";
const char* Starting = "starting";
const char* Running = "running";
const char* Stopping = "stopping";
} // namespace ServiceWorkerVersionRunningStatusEnum

namespace ServiceWorkerVersionStatusEnum {
const char* New = "new";
const char* Installing = "installing";
const char* Installed = "installed";
const char* Activating = "activating";
const char* Activated = "activated";
const char* Redundant = "redundant";
} // namespace ServiceWorkerVersionStatusEnum

std::unique_ptr<ServiceWorkerVersion> ServiceWorkerVersion::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ServiceWorkerVersion> result(new ServiceWorkerVersion());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* versionIdValue = object->get("versionId");
    errors->setName("versionId");
    result->m_versionId = ValueConversions<WTF::String>::parse(versionIdValue, errors);
    protocol::Value* registrationIdValue = object->get("registrationId");
    errors->setName("registrationId");
    result->m_registrationId = ValueConversions<WTF::String>::parse(registrationIdValue, errors);
    protocol::Value* scriptURLValue = object->get("scriptURL");
    errors->setName("scriptURL");
    result->m_scriptURL = ValueConversions<WTF::String>::parse(scriptURLValue, errors);
    protocol::Value* runningStatusValue = object->get("runningStatus");
    errors->setName("runningStatus");
    result->m_runningStatus = ValueConversions<WTF::String>::parse(runningStatusValue, errors);
    protocol::Value* statusValue = object->get("status");
    errors->setName("status");
    result->m_status = ValueConversions<WTF::String>::parse(statusValue, errors);
    protocol::Value* scriptLastModifiedValue = object->get("scriptLastModified");
    if (scriptLastModifiedValue) {
        errors->setName("scriptLastModified");
        result->m_scriptLastModified = ValueConversions<double>::parse(scriptLastModifiedValue, errors);
    }
    protocol::Value* scriptResponseTimeValue = object->get("scriptResponseTime");
    if (scriptResponseTimeValue) {
        errors->setName("scriptResponseTime");
        result->m_scriptResponseTime = ValueConversions<double>::parse(scriptResponseTimeValue, errors);
    }
    protocol::Value* controlledClientsValue = object->get("controlledClients");
    if (controlledClientsValue) {
        errors->setName("controlledClients");
        result->m_controlledClients = ValueConversions<protocol::Array<WTF::String>>::parse(controlledClientsValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ServiceWorkerVersion::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("versionId", ValueConversions<WTF::String>::serialize(m_versionId));
    result->setValue("registrationId", ValueConversions<WTF::String>::serialize(m_registrationId));
    result->setValue("scriptURL", ValueConversions<WTF::String>::serialize(m_scriptURL));
    result->setValue("runningStatus", ValueConversions<WTF::String>::serialize(m_runningStatus));
    result->setValue("status", ValueConversions<WTF::String>::serialize(m_status));
    if (m_scriptLastModified.isJust())
        result->setValue("scriptLastModified", ValueConversions<double>::serialize(m_scriptLastModified.fromJust()));
    if (m_scriptResponseTime.isJust())
        result->setValue("scriptResponseTime", ValueConversions<double>::serialize(m_scriptResponseTime.fromJust()));
    if (m_controlledClients.isJust())
        result->setValue("controlledClients", ValueConversions<protocol::Array<WTF::String>>::serialize(m_controlledClients.fromJust()));
    return result;
}

std::unique_ptr<ServiceWorkerVersion> ServiceWorkerVersion::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<ServiceWorkerErrorMessage> ServiceWorkerErrorMessage::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ServiceWorkerErrorMessage> result(new ServiceWorkerErrorMessage());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* errorMessageValue = object->get("errorMessage");
    errors->setName("errorMessage");
    result->m_errorMessage = ValueConversions<WTF::String>::parse(errorMessageValue, errors);
    protocol::Value* registrationIdValue = object->get("registrationId");
    errors->setName("registrationId");
    result->m_registrationId = ValueConversions<WTF::String>::parse(registrationIdValue, errors);
    protocol::Value* versionIdValue = object->get("versionId");
    errors->setName("versionId");
    result->m_versionId = ValueConversions<WTF::String>::parse(versionIdValue, errors);
    protocol::Value* sourceURLValue = object->get("sourceURL");
    errors->setName("sourceURL");
    result->m_sourceURL = ValueConversions<WTF::String>::parse(sourceURLValue, errors);
    protocol::Value* lineNumberValue = object->get("lineNumber");
    errors->setName("lineNumber");
    result->m_lineNumber = ValueConversions<int>::parse(lineNumberValue, errors);
    protocol::Value* columnNumberValue = object->get("columnNumber");
    errors->setName("columnNumber");
    result->m_columnNumber = ValueConversions<int>::parse(columnNumberValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ServiceWorkerErrorMessage::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("errorMessage", ValueConversions<WTF::String>::serialize(m_errorMessage));
    result->setValue("registrationId", ValueConversions<WTF::String>::serialize(m_registrationId));
    result->setValue("versionId", ValueConversions<WTF::String>::serialize(m_versionId));
    result->setValue("sourceURL", ValueConversions<WTF::String>::serialize(m_sourceURL));
    result->setValue("lineNumber", ValueConversions<int>::serialize(m_lineNumber));
    result->setValue("columnNumber", ValueConversions<int>::serialize(m_columnNumber));
    return result;
}

std::unique_ptr<ServiceWorkerErrorMessage> ServiceWorkerErrorMessage::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<TargetInfo> TargetInfo::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<TargetInfo> result(new TargetInfo());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* idValue = object->get("id");
    errors->setName("id");
    result->m_id = ValueConversions<WTF::String>::parse(idValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    protocol::Value* titleValue = object->get("title");
    errors->setName("title");
    result->m_title = ValueConversions<WTF::String>::parse(titleValue, errors);
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> TargetInfo::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("id", ValueConversions<WTF::String>::serialize(m_id));
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    result->setValue("title", ValueConversions<WTF::String>::serialize(m_title));
    result->setValue("url", ValueConversions<WTF::String>::serialize(m_url));
    return result;
}

std::unique_ptr<TargetInfo> TargetInfo::clone() const
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
    dispatcher->registerBackend("ServiceWorker", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // ServiceWorker
} // namespace protocol
} // namespace blink
