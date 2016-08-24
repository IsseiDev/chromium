// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/CacheStorage.h"

namespace blink {
namespace protocol {
namespace CacheStorage {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "CacheStorage";
const char Metainfo::commandPrefix[] = "CacheStorage.";
const char Metainfo::version[] = "1.1";

std::unique_ptr<DataEntry> DataEntry::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<DataEntry> result(new DataEntry());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* requestValue = object->get("request");
    errors->setName("request");
    result->m_request = ValueConversions<WTF::String>::parse(requestValue, errors);
    protocol::Value* responseValue = object->get("response");
    errors->setName("response");
    result->m_response = ValueConversions<WTF::String>::parse(responseValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> DataEntry::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("request", ValueConversions<WTF::String>::serialize(m_request));
    result->setValue("response", ValueConversions<WTF::String>::serialize(m_response));
    return result;
}

std::unique_ptr<DataEntry> DataEntry::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<Cache> Cache::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Cache> result(new Cache());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* cacheIdValue = object->get("cacheId");
    errors->setName("cacheId");
    result->m_cacheId = ValueConversions<WTF::String>::parse(cacheIdValue, errors);
    protocol::Value* securityOriginValue = object->get("securityOrigin");
    errors->setName("securityOrigin");
    result->m_securityOrigin = ValueConversions<WTF::String>::parse(securityOriginValue, errors);
    protocol::Value* cacheNameValue = object->get("cacheName");
    errors->setName("cacheName");
    result->m_cacheName = ValueConversions<WTF::String>::parse(cacheNameValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Cache::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("cacheId", ValueConversions<WTF::String>::serialize(m_cacheId));
    result->setValue("securityOrigin", ValueConversions<WTF::String>::serialize(m_securityOrigin));
    result->setValue("cacheName", ValueConversions<WTF::String>::serialize(m_cacheName));
    return result;
}

std::unique_ptr<Cache> Cache::clone() const
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
        m_dispatchMap["CacheStorage.requestCacheNames"] = &DispatcherImpl::requestCacheNames;
        m_dispatchMap["CacheStorage.requestEntries"] = &DispatcherImpl::requestEntries;
        m_dispatchMap["CacheStorage.deleteCache"] = &DispatcherImpl::deleteCache;
        m_dispatchMap["CacheStorage.deleteEntry"] = &DispatcherImpl::deleteEntry;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void requestCacheNames(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void requestEntries(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void deleteCache(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void deleteEntry(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


class RequestCacheNamesCallbackImpl : public Backend::RequestCacheNamesCallback, public DispatcherBase::Callback {
public:
    RequestCacheNamesCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
        : DispatcherBase::Callback(std::move(backendImpl), callId) { }

    void sendSuccess(std::unique_ptr<protocol::Array<protocol::CacheStorage::Cache>> caches) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("caches", ValueConversions<protocol::Array<protocol::CacheStorage::Cache>>::serialize(caches.get()));
        sendIfActive(std::move(resultObject), ErrorString());
    }

    void sendFailure(const ErrorString& error) override
    {
        DCHECK(error.length());
        sendIfActive(nullptr, error);
    }

};

void DispatcherImpl::requestCacheNames(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* securityOriginValue = object ? object->get("securityOrigin") : nullptr;
    errors->setName("securityOrigin");
    WTF::String in_securityOrigin = ValueConversions<WTF::String>::parse(securityOriginValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    std::unique_ptr<RequestCacheNamesCallbackImpl> callback(new RequestCacheNamesCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->requestCacheNames(in_securityOrigin,std::move(callback));
}

class RequestEntriesCallbackImpl : public Backend::RequestEntriesCallback, public DispatcherBase::Callback {
public:
    RequestEntriesCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
        : DispatcherBase::Callback(std::move(backendImpl), callId) { }

    void sendSuccess(std::unique_ptr<protocol::Array<protocol::CacheStorage::DataEntry>> cacheDataEntries, bool hasMore) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("cacheDataEntries", ValueConversions<protocol::Array<protocol::CacheStorage::DataEntry>>::serialize(cacheDataEntries.get()));
        resultObject->setValue("hasMore", ValueConversions<bool>::serialize(hasMore));
        sendIfActive(std::move(resultObject), ErrorString());
    }

    void sendFailure(const ErrorString& error) override
    {
        DCHECK(error.length());
        sendIfActive(nullptr, error);
    }

};

void DispatcherImpl::requestEntries(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* cacheIdValue = object ? object->get("cacheId") : nullptr;
    errors->setName("cacheId");
    WTF::String in_cacheId = ValueConversions<WTF::String>::parse(cacheIdValue, errors);
    protocol::Value* skipCountValue = object ? object->get("skipCount") : nullptr;
    errors->setName("skipCount");
    int in_skipCount = ValueConversions<int>::parse(skipCountValue, errors);
    protocol::Value* pageSizeValue = object ? object->get("pageSize") : nullptr;
    errors->setName("pageSize");
    int in_pageSize = ValueConversions<int>::parse(pageSizeValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    std::unique_ptr<RequestEntriesCallbackImpl> callback(new RequestEntriesCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->requestEntries(in_cacheId,in_skipCount,in_pageSize,std::move(callback));
}

class DeleteCacheCallbackImpl : public Backend::DeleteCacheCallback, public DispatcherBase::Callback {
public:
    DeleteCacheCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
        : DispatcherBase::Callback(std::move(backendImpl), callId) { }

    void sendSuccess() override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        sendIfActive(std::move(resultObject), ErrorString());
    }

    void sendFailure(const ErrorString& error) override
    {
        DCHECK(error.length());
        sendIfActive(nullptr, error);
    }

};

void DispatcherImpl::deleteCache(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* cacheIdValue = object ? object->get("cacheId") : nullptr;
    errors->setName("cacheId");
    WTF::String in_cacheId = ValueConversions<WTF::String>::parse(cacheIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    std::unique_ptr<DeleteCacheCallbackImpl> callback(new DeleteCacheCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->deleteCache(in_cacheId,std::move(callback));
}

class DeleteEntryCallbackImpl : public Backend::DeleteEntryCallback, public DispatcherBase::Callback {
public:
    DeleteEntryCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
        : DispatcherBase::Callback(std::move(backendImpl), callId) { }

    void sendSuccess() override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        sendIfActive(std::move(resultObject), ErrorString());
    }

    void sendFailure(const ErrorString& error) override
    {
        DCHECK(error.length());
        sendIfActive(nullptr, error);
    }

};

void DispatcherImpl::deleteEntry(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* cacheIdValue = object ? object->get("cacheId") : nullptr;
    errors->setName("cacheId");
    WTF::String in_cacheId = ValueConversions<WTF::String>::parse(cacheIdValue, errors);
    protocol::Value* requestValue = object ? object->get("request") : nullptr;
    errors->setName("request");
    WTF::String in_request = ValueConversions<WTF::String>::parse(requestValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    std::unique_ptr<DeleteEntryCallbackImpl> callback(new DeleteEntryCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->deleteEntry(in_cacheId,in_request,std::move(callback));
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("CacheStorage", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // CacheStorage
} // namespace protocol
} // namespace blink
