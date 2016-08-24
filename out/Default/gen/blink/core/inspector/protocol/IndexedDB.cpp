// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/IndexedDB.h"

namespace blink {
namespace protocol {
namespace IndexedDB {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "IndexedDB";
const char Metainfo::commandPrefix[] = "IndexedDB.";
const char Metainfo::version[] = "1.1";

std::unique_ptr<DatabaseWithObjectStores> DatabaseWithObjectStores::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<DatabaseWithObjectStores> result(new DatabaseWithObjectStores());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<WTF::String>::parse(nameValue, errors);
    protocol::Value* versionValue = object->get("version");
    errors->setName("version");
    result->m_version = ValueConversions<int>::parse(versionValue, errors);
    protocol::Value* objectStoresValue = object->get("objectStores");
    errors->setName("objectStores");
    result->m_objectStores = ValueConversions<protocol::Array<protocol::IndexedDB::ObjectStore>>::parse(objectStoresValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> DatabaseWithObjectStores::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<WTF::String>::serialize(m_name));
    result->setValue("version", ValueConversions<int>::serialize(m_version));
    result->setValue("objectStores", ValueConversions<protocol::Array<protocol::IndexedDB::ObjectStore>>::serialize(m_objectStores.get()));
    return result;
}

std::unique_ptr<DatabaseWithObjectStores> DatabaseWithObjectStores::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<ObjectStore> ObjectStore::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ObjectStore> result(new ObjectStore());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<WTF::String>::parse(nameValue, errors);
    protocol::Value* keyPathValue = object->get("keyPath");
    errors->setName("keyPath");
    result->m_keyPath = ValueConversions<protocol::IndexedDB::KeyPath>::parse(keyPathValue, errors);
    protocol::Value* autoIncrementValue = object->get("autoIncrement");
    errors->setName("autoIncrement");
    result->m_autoIncrement = ValueConversions<bool>::parse(autoIncrementValue, errors);
    protocol::Value* indexesValue = object->get("indexes");
    errors->setName("indexes");
    result->m_indexes = ValueConversions<protocol::Array<protocol::IndexedDB::ObjectStoreIndex>>::parse(indexesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ObjectStore::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<WTF::String>::serialize(m_name));
    result->setValue("keyPath", ValueConversions<protocol::IndexedDB::KeyPath>::serialize(m_keyPath.get()));
    result->setValue("autoIncrement", ValueConversions<bool>::serialize(m_autoIncrement));
    result->setValue("indexes", ValueConversions<protocol::Array<protocol::IndexedDB::ObjectStoreIndex>>::serialize(m_indexes.get()));
    return result;
}

std::unique_ptr<ObjectStore> ObjectStore::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<ObjectStoreIndex> ObjectStoreIndex::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ObjectStoreIndex> result(new ObjectStoreIndex());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<WTF::String>::parse(nameValue, errors);
    protocol::Value* keyPathValue = object->get("keyPath");
    errors->setName("keyPath");
    result->m_keyPath = ValueConversions<protocol::IndexedDB::KeyPath>::parse(keyPathValue, errors);
    protocol::Value* uniqueValue = object->get("unique");
    errors->setName("unique");
    result->m_unique = ValueConversions<bool>::parse(uniqueValue, errors);
    protocol::Value* multiEntryValue = object->get("multiEntry");
    errors->setName("multiEntry");
    result->m_multiEntry = ValueConversions<bool>::parse(multiEntryValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ObjectStoreIndex::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<WTF::String>::serialize(m_name));
    result->setValue("keyPath", ValueConversions<protocol::IndexedDB::KeyPath>::serialize(m_keyPath.get()));
    result->setValue("unique", ValueConversions<bool>::serialize(m_unique));
    result->setValue("multiEntry", ValueConversions<bool>::serialize(m_multiEntry));
    return result;
}

std::unique_ptr<ObjectStoreIndex> ObjectStoreIndex::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

const char* Key::TypeEnum::Number = "number";
const char* Key::TypeEnum::String = "string";
const char* Key::TypeEnum::Date = "date";
const char* Key::TypeEnum::Array = "array";

std::unique_ptr<Key> Key::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Key> result(new Key());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    protocol::Value* numberValue = object->get("number");
    if (numberValue) {
        errors->setName("number");
        result->m_number = ValueConversions<double>::parse(numberValue, errors);
    }
    protocol::Value* stringValue = object->get("string");
    if (stringValue) {
        errors->setName("string");
        result->m_string = ValueConversions<WTF::String>::parse(stringValue, errors);
    }
    protocol::Value* dateValue = object->get("date");
    if (dateValue) {
        errors->setName("date");
        result->m_date = ValueConversions<double>::parse(dateValue, errors);
    }
    protocol::Value* arrayValue = object->get("array");
    if (arrayValue) {
        errors->setName("array");
        result->m_array = ValueConversions<protocol::Array<protocol::IndexedDB::Key>>::parse(arrayValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Key::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    if (m_number.isJust())
        result->setValue("number", ValueConversions<double>::serialize(m_number.fromJust()));
    if (m_string.isJust())
        result->setValue("string", ValueConversions<WTF::String>::serialize(m_string.fromJust()));
    if (m_date.isJust())
        result->setValue("date", ValueConversions<double>::serialize(m_date.fromJust()));
    if (m_array.isJust())
        result->setValue("array", ValueConversions<protocol::Array<protocol::IndexedDB::Key>>::serialize(m_array.fromJust()));
    return result;
}

std::unique_ptr<Key> Key::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<KeyRange> KeyRange::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<KeyRange> result(new KeyRange());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* lowerValue = object->get("lower");
    if (lowerValue) {
        errors->setName("lower");
        result->m_lower = ValueConversions<protocol::IndexedDB::Key>::parse(lowerValue, errors);
    }
    protocol::Value* upperValue = object->get("upper");
    if (upperValue) {
        errors->setName("upper");
        result->m_upper = ValueConversions<protocol::IndexedDB::Key>::parse(upperValue, errors);
    }
    protocol::Value* lowerOpenValue = object->get("lowerOpen");
    errors->setName("lowerOpen");
    result->m_lowerOpen = ValueConversions<bool>::parse(lowerOpenValue, errors);
    protocol::Value* upperOpenValue = object->get("upperOpen");
    errors->setName("upperOpen");
    result->m_upperOpen = ValueConversions<bool>::parse(upperOpenValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> KeyRange::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_lower.isJust())
        result->setValue("lower", ValueConversions<protocol::IndexedDB::Key>::serialize(m_lower.fromJust()));
    if (m_upper.isJust())
        result->setValue("upper", ValueConversions<protocol::IndexedDB::Key>::serialize(m_upper.fromJust()));
    result->setValue("lowerOpen", ValueConversions<bool>::serialize(m_lowerOpen));
    result->setValue("upperOpen", ValueConversions<bool>::serialize(m_upperOpen));
    return result;
}

std::unique_ptr<KeyRange> KeyRange::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<DataEntry> DataEntry::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<DataEntry> result(new DataEntry());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* keyValue = object->get("key");
    errors->setName("key");
    result->m_key = ValueConversions<protocol::Runtime::API::RemoteObject>::parse(keyValue, errors);
    protocol::Value* primaryKeyValue = object->get("primaryKey");
    errors->setName("primaryKey");
    result->m_primaryKey = ValueConversions<protocol::Runtime::API::RemoteObject>::parse(primaryKeyValue, errors);
    protocol::Value* valueValue = object->get("value");
    errors->setName("value");
    result->m_value = ValueConversions<protocol::Runtime::API::RemoteObject>::parse(valueValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> DataEntry::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("key", ValueConversions<protocol::Runtime::API::RemoteObject>::serialize(m_key.get()));
    result->setValue("primaryKey", ValueConversions<protocol::Runtime::API::RemoteObject>::serialize(m_primaryKey.get()));
    result->setValue("value", ValueConversions<protocol::Runtime::API::RemoteObject>::serialize(m_value.get()));
    return result;
}

std::unique_ptr<DataEntry> DataEntry::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

const char* KeyPath::TypeEnum::Null = "null";
const char* KeyPath::TypeEnum::String = "string";
const char* KeyPath::TypeEnum::Array = "array";

std::unique_ptr<KeyPath> KeyPath::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<KeyPath> result(new KeyPath());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    protocol::Value* stringValue = object->get("string");
    if (stringValue) {
        errors->setName("string");
        result->m_string = ValueConversions<WTF::String>::parse(stringValue, errors);
    }
    protocol::Value* arrayValue = object->get("array");
    if (arrayValue) {
        errors->setName("array");
        result->m_array = ValueConversions<protocol::Array<WTF::String>>::parse(arrayValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> KeyPath::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    if (m_string.isJust())
        result->setValue("string", ValueConversions<WTF::String>::serialize(m_string.fromJust()));
    if (m_array.isJust())
        result->setValue("array", ValueConversions<protocol::Array<WTF::String>>::serialize(m_array.fromJust()));
    return result;
}

std::unique_ptr<KeyPath> KeyPath::clone() const
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
        m_dispatchMap["IndexedDB.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["IndexedDB.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["IndexedDB.requestDatabaseNames"] = &DispatcherImpl::requestDatabaseNames;
        m_dispatchMap["IndexedDB.requestDatabase"] = &DispatcherImpl::requestDatabase;
        m_dispatchMap["IndexedDB.requestData"] = &DispatcherImpl::requestData;
        m_dispatchMap["IndexedDB.clearObjectStore"] = &DispatcherImpl::clearObjectStore;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void requestDatabaseNames(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void requestDatabase(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void requestData(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void clearObjectStore(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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

class RequestDatabaseNamesCallbackImpl : public Backend::RequestDatabaseNamesCallback, public DispatcherBase::Callback {
public:
    RequestDatabaseNamesCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
        : DispatcherBase::Callback(std::move(backendImpl), callId) { }

    void sendSuccess(std::unique_ptr<protocol::Array<WTF::String>> databaseNames) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("databaseNames", ValueConversions<protocol::Array<WTF::String>>::serialize(databaseNames.get()));
        sendIfActive(std::move(resultObject), ErrorString());
    }

    void sendFailure(const ErrorString& error) override
    {
        DCHECK(error.length());
        sendIfActive(nullptr, error);
    }

};

void DispatcherImpl::requestDatabaseNames(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
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
    std::unique_ptr<RequestDatabaseNamesCallbackImpl> callback(new RequestDatabaseNamesCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->requestDatabaseNames(in_securityOrigin,std::move(callback));
}

class RequestDatabaseCallbackImpl : public Backend::RequestDatabaseCallback, public DispatcherBase::Callback {
public:
    RequestDatabaseCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
        : DispatcherBase::Callback(std::move(backendImpl), callId) { }

    void sendSuccess(std::unique_ptr<protocol::IndexedDB::DatabaseWithObjectStores> databaseWithObjectStores) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("databaseWithObjectStores", ValueConversions<protocol::IndexedDB::DatabaseWithObjectStores>::serialize(databaseWithObjectStores.get()));
        sendIfActive(std::move(resultObject), ErrorString());
    }

    void sendFailure(const ErrorString& error) override
    {
        DCHECK(error.length());
        sendIfActive(nullptr, error);
    }

};

void DispatcherImpl::requestDatabase(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* securityOriginValue = object ? object->get("securityOrigin") : nullptr;
    errors->setName("securityOrigin");
    WTF::String in_securityOrigin = ValueConversions<WTF::String>::parse(securityOriginValue, errors);
    protocol::Value* databaseNameValue = object ? object->get("databaseName") : nullptr;
    errors->setName("databaseName");
    WTF::String in_databaseName = ValueConversions<WTF::String>::parse(databaseNameValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    std::unique_ptr<RequestDatabaseCallbackImpl> callback(new RequestDatabaseCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->requestDatabase(in_securityOrigin,in_databaseName,std::move(callback));
}

class RequestDataCallbackImpl : public Backend::RequestDataCallback, public DispatcherBase::Callback {
public:
    RequestDataCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
        : DispatcherBase::Callback(std::move(backendImpl), callId) { }

    void sendSuccess(std::unique_ptr<protocol::Array<protocol::IndexedDB::DataEntry>> objectStoreDataEntries, bool hasMore) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("objectStoreDataEntries", ValueConversions<protocol::Array<protocol::IndexedDB::DataEntry>>::serialize(objectStoreDataEntries.get()));
        resultObject->setValue("hasMore", ValueConversions<bool>::serialize(hasMore));
        sendIfActive(std::move(resultObject), ErrorString());
    }

    void sendFailure(const ErrorString& error) override
    {
        DCHECK(error.length());
        sendIfActive(nullptr, error);
    }

};

void DispatcherImpl::requestData(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* securityOriginValue = object ? object->get("securityOrigin") : nullptr;
    errors->setName("securityOrigin");
    WTF::String in_securityOrigin = ValueConversions<WTF::String>::parse(securityOriginValue, errors);
    protocol::Value* databaseNameValue = object ? object->get("databaseName") : nullptr;
    errors->setName("databaseName");
    WTF::String in_databaseName = ValueConversions<WTF::String>::parse(databaseNameValue, errors);
    protocol::Value* objectStoreNameValue = object ? object->get("objectStoreName") : nullptr;
    errors->setName("objectStoreName");
    WTF::String in_objectStoreName = ValueConversions<WTF::String>::parse(objectStoreNameValue, errors);
    protocol::Value* indexNameValue = object ? object->get("indexName") : nullptr;
    errors->setName("indexName");
    WTF::String in_indexName = ValueConversions<WTF::String>::parse(indexNameValue, errors);
    protocol::Value* skipCountValue = object ? object->get("skipCount") : nullptr;
    errors->setName("skipCount");
    int in_skipCount = ValueConversions<int>::parse(skipCountValue, errors);
    protocol::Value* pageSizeValue = object ? object->get("pageSize") : nullptr;
    errors->setName("pageSize");
    int in_pageSize = ValueConversions<int>::parse(pageSizeValue, errors);
    protocol::Value* keyRangeValue = object ? object->get("keyRange") : nullptr;
    Maybe<protocol::IndexedDB::KeyRange> in_keyRange;
    if (keyRangeValue) {
        errors->setName("keyRange");
        in_keyRange = ValueConversions<protocol::IndexedDB::KeyRange>::parse(keyRangeValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    std::unique_ptr<RequestDataCallbackImpl> callback(new RequestDataCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->requestData(in_securityOrigin,in_databaseName,in_objectStoreName,in_indexName,in_skipCount,in_pageSize,in_keyRange,std::move(callback));
}

class ClearObjectStoreCallbackImpl : public Backend::ClearObjectStoreCallback, public DispatcherBase::Callback {
public:
    ClearObjectStoreCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
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

void DispatcherImpl::clearObjectStore(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* securityOriginValue = object ? object->get("securityOrigin") : nullptr;
    errors->setName("securityOrigin");
    WTF::String in_securityOrigin = ValueConversions<WTF::String>::parse(securityOriginValue, errors);
    protocol::Value* databaseNameValue = object ? object->get("databaseName") : nullptr;
    errors->setName("databaseName");
    WTF::String in_databaseName = ValueConversions<WTF::String>::parse(databaseNameValue, errors);
    protocol::Value* objectStoreNameValue = object ? object->get("objectStoreName") : nullptr;
    errors->setName("objectStoreName");
    WTF::String in_objectStoreName = ValueConversions<WTF::String>::parse(objectStoreNameValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    std::unique_ptr<ClearObjectStoreCallbackImpl> callback(new ClearObjectStoreCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->clearObjectStore(in_securityOrigin,in_databaseName,in_objectStoreName,std::move(callback));
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("IndexedDB", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // IndexedDB
} // namespace protocol
} // namespace blink
