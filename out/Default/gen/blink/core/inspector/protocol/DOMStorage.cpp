// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/DOMStorage.h"

namespace blink {
namespace protocol {
namespace DOMStorage {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "DOMStorage";
const char Metainfo::commandPrefix[] = "DOMStorage.";
const char Metainfo::version[] = "1.1";

std::unique_ptr<StorageId> StorageId::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<StorageId> result(new StorageId());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* securityOriginValue = object->get("securityOrigin");
    errors->setName("securityOrigin");
    result->m_securityOrigin = ValueConversions<WTF::String>::parse(securityOriginValue, errors);
    protocol::Value* isLocalStorageValue = object->get("isLocalStorage");
    errors->setName("isLocalStorage");
    result->m_isLocalStorage = ValueConversions<bool>::parse(isLocalStorageValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> StorageId::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("securityOrigin", ValueConversions<WTF::String>::serialize(m_securityOrigin));
    result->setValue("isLocalStorage", ValueConversions<bool>::serialize(m_isLocalStorage));
    return result;
}

std::unique_ptr<StorageId> StorageId::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::domStorageItemsCleared(std::unique_ptr<protocol::DOMStorage::StorageId> storageId)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "DOMStorage.domStorageItemsCleared");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("storageId", ValueConversions<protocol::DOMStorage::StorageId>::serialize(storageId.get()));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::domStorageItemRemoved(std::unique_ptr<protocol::DOMStorage::StorageId> storageId, const WTF::String& key)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "DOMStorage.domStorageItemRemoved");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("storageId", ValueConversions<protocol::DOMStorage::StorageId>::serialize(storageId.get()));
    paramsObject->setValue("key", ValueConversions<WTF::String>::serialize(key));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::domStorageItemAdded(std::unique_ptr<protocol::DOMStorage::StorageId> storageId, const WTF::String& key, const WTF::String& newValue)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "DOMStorage.domStorageItemAdded");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("storageId", ValueConversions<protocol::DOMStorage::StorageId>::serialize(storageId.get()));
    paramsObject->setValue("key", ValueConversions<WTF::String>::serialize(key));
    paramsObject->setValue("newValue", ValueConversions<WTF::String>::serialize(newValue));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::domStorageItemUpdated(std::unique_ptr<protocol::DOMStorage::StorageId> storageId, const WTF::String& key, const WTF::String& oldValue, const WTF::String& newValue)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "DOMStorage.domStorageItemUpdated");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("storageId", ValueConversions<protocol::DOMStorage::StorageId>::serialize(storageId.get()));
    paramsObject->setValue("key", ValueConversions<WTF::String>::serialize(key));
    paramsObject->setValue("oldValue", ValueConversions<WTF::String>::serialize(oldValue));
    paramsObject->setValue("newValue", ValueConversions<WTF::String>::serialize(newValue));
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
        m_dispatchMap["DOMStorage.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["DOMStorage.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["DOMStorage.getDOMStorageItems"] = &DispatcherImpl::getDOMStorageItems;
        m_dispatchMap["DOMStorage.setDOMStorageItem"] = &DispatcherImpl::setDOMStorageItem;
        m_dispatchMap["DOMStorage.removeDOMStorageItem"] = &DispatcherImpl::removeDOMStorageItem;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getDOMStorageItems(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setDOMStorageItem(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void removeDOMStorageItem(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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

void DispatcherImpl::getDOMStorageItems(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* storageIdValue = object ? object->get("storageId") : nullptr;
    errors->setName("storageId");
    std::unique_ptr<protocol::DOMStorage::StorageId> in_storageId = ValueConversions<protocol::DOMStorage::StorageId>::parse(storageIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    std::unique_ptr<protocol::Array<protocol::Array<WTF::String>>> out_entries;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->getDOMStorageItems(&error, std::move(in_storageId), &out_entries);
    if (!error.length()) {
        result->setValue("entries", ValueConversions<protocol::Array<protocol::Array<WTF::String>>>::serialize(out_entries.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::setDOMStorageItem(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* storageIdValue = object ? object->get("storageId") : nullptr;
    errors->setName("storageId");
    std::unique_ptr<protocol::DOMStorage::StorageId> in_storageId = ValueConversions<protocol::DOMStorage::StorageId>::parse(storageIdValue, errors);
    protocol::Value* keyValue = object ? object->get("key") : nullptr;
    errors->setName("key");
    WTF::String in_key = ValueConversions<WTF::String>::parse(keyValue, errors);
    protocol::Value* valueValue = object ? object->get("value") : nullptr;
    errors->setName("value");
    WTF::String in_value = ValueConversions<WTF::String>::parse(valueValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setDOMStorageItem(&error, std::move(in_storageId), in_key, in_value);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::removeDOMStorageItem(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* storageIdValue = object ? object->get("storageId") : nullptr;
    errors->setName("storageId");
    std::unique_ptr<protocol::DOMStorage::StorageId> in_storageId = ValueConversions<protocol::DOMStorage::StorageId>::parse(storageIdValue, errors);
    protocol::Value* keyValue = object ? object->get("key") : nullptr;
    errors->setName("key");
    WTF::String in_key = ValueConversions<WTF::String>::parse(keyValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->removeDOMStorageItem(&error, std::move(in_storageId), in_key);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("DOMStorage", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // DOMStorage
} // namespace protocol
} // namespace blink
