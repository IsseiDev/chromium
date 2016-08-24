// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/ApplicationCache.h"

namespace blink {
namespace protocol {
namespace ApplicationCache {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "ApplicationCache";
const char Metainfo::commandPrefix[] = "ApplicationCache.";
const char Metainfo::version[] = "1.1";

std::unique_ptr<ApplicationCacheResource> ApplicationCacheResource::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ApplicationCacheResource> result(new ApplicationCacheResource());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    protocol::Value* sizeValue = object->get("size");
    errors->setName("size");
    result->m_size = ValueConversions<int>::parse(sizeValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ApplicationCacheResource::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("url", ValueConversions<WTF::String>::serialize(m_url));
    result->setValue("size", ValueConversions<int>::serialize(m_size));
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    return result;
}

std::unique_ptr<ApplicationCacheResource> ApplicationCacheResource::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<ApplicationCache> ApplicationCache::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ApplicationCache> result(new ApplicationCache());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* manifestURLValue = object->get("manifestURL");
    errors->setName("manifestURL");
    result->m_manifestURL = ValueConversions<WTF::String>::parse(manifestURLValue, errors);
    protocol::Value* sizeValue = object->get("size");
    errors->setName("size");
    result->m_size = ValueConversions<double>::parse(sizeValue, errors);
    protocol::Value* creationTimeValue = object->get("creationTime");
    errors->setName("creationTime");
    result->m_creationTime = ValueConversions<double>::parse(creationTimeValue, errors);
    protocol::Value* updateTimeValue = object->get("updateTime");
    errors->setName("updateTime");
    result->m_updateTime = ValueConversions<double>::parse(updateTimeValue, errors);
    protocol::Value* resourcesValue = object->get("resources");
    errors->setName("resources");
    result->m_resources = ValueConversions<protocol::Array<protocol::ApplicationCache::ApplicationCacheResource>>::parse(resourcesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ApplicationCache::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("manifestURL", ValueConversions<WTF::String>::serialize(m_manifestURL));
    result->setValue("size", ValueConversions<double>::serialize(m_size));
    result->setValue("creationTime", ValueConversions<double>::serialize(m_creationTime));
    result->setValue("updateTime", ValueConversions<double>::serialize(m_updateTime));
    result->setValue("resources", ValueConversions<protocol::Array<protocol::ApplicationCache::ApplicationCacheResource>>::serialize(m_resources.get()));
    return result;
}

std::unique_ptr<ApplicationCache> ApplicationCache::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<FrameWithManifest> FrameWithManifest::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameWithManifest> result(new FrameWithManifest());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameIdValue = object->get("frameId");
    errors->setName("frameId");
    result->m_frameId = ValueConversions<WTF::String>::parse(frameIdValue, errors);
    protocol::Value* manifestURLValue = object->get("manifestURL");
    errors->setName("manifestURL");
    result->m_manifestURL = ValueConversions<WTF::String>::parse(manifestURLValue, errors);
    protocol::Value* statusValue = object->get("status");
    errors->setName("status");
    result->m_status = ValueConversions<int>::parse(statusValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameWithManifest::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frameId", ValueConversions<WTF::String>::serialize(m_frameId));
    result->setValue("manifestURL", ValueConversions<WTF::String>::serialize(m_manifestURL));
    result->setValue("status", ValueConversions<int>::serialize(m_status));
    return result;
}

std::unique_ptr<FrameWithManifest> FrameWithManifest::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::applicationCacheStatusUpdated(const WTF::String& frameId, const WTF::String& manifestURL, int status)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "ApplicationCache.applicationCacheStatusUpdated");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("frameId", ValueConversions<WTF::String>::serialize(frameId));
    paramsObject->setValue("manifestURL", ValueConversions<WTF::String>::serialize(manifestURL));
    paramsObject->setValue("status", ValueConversions<int>::serialize(status));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::networkStateUpdated(bool isNowOnline)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "ApplicationCache.networkStateUpdated");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("isNowOnline", ValueConversions<bool>::serialize(isNowOnline));
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
        m_dispatchMap["ApplicationCache.getFramesWithManifests"] = &DispatcherImpl::getFramesWithManifests;
        m_dispatchMap["ApplicationCache.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["ApplicationCache.getManifestForFrame"] = &DispatcherImpl::getManifestForFrame;
        m_dispatchMap["ApplicationCache.getApplicationCacheForFrame"] = &DispatcherImpl::getApplicationCacheForFrame;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void getFramesWithManifests(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getManifestForFrame(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getApplicationCacheForFrame(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


void DispatcherImpl::getFramesWithManifests(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    std::unique_ptr<protocol::Array<protocol::ApplicationCache::FrameWithManifest>> out_frameIds;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->getFramesWithManifests(&error, &out_frameIds);
    if (!error.length()) {
        result->setValue("frameIds", ValueConversions<protocol::Array<protocol::ApplicationCache::FrameWithManifest>>::serialize(out_frameIds.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->enable(&error);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::getManifestForFrame(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* frameIdValue = object ? object->get("frameId") : nullptr;
    errors->setName("frameId");
    WTF::String in_frameId = ValueConversions<WTF::String>::parse(frameIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    WTF::String out_manifestURL;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->getManifestForFrame(&error, in_frameId, &out_manifestURL);
    if (!error.length()) {
        result->setValue("manifestURL", ValueConversions<WTF::String>::serialize(out_manifestURL));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::getApplicationCacheForFrame(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* frameIdValue = object ? object->get("frameId") : nullptr;
    errors->setName("frameId");
    WTF::String in_frameId = ValueConversions<WTF::String>::parse(frameIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    std::unique_ptr<protocol::ApplicationCache::ApplicationCache> out_applicationCache;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->getApplicationCacheForFrame(&error, in_frameId, &out_applicationCache);
    if (!error.length()) {
        result->setValue("applicationCache", ValueConversions<protocol::ApplicationCache::ApplicationCache>::serialize(out_applicationCache.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("ApplicationCache", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // ApplicationCache
} // namespace protocol
} // namespace blink
