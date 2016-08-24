// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Database.h"

namespace blink {
namespace protocol {
namespace Database {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Database";
const char Metainfo::commandPrefix[] = "Database.";
const char Metainfo::version[] = "1.1";

std::unique_ptr<Database> Database::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Database> result(new Database());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* idValue = object->get("id");
    errors->setName("id");
    result->m_id = ValueConversions<WTF::String>::parse(idValue, errors);
    protocol::Value* domainValue = object->get("domain");
    errors->setName("domain");
    result->m_domain = ValueConversions<WTF::String>::parse(domainValue, errors);
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<WTF::String>::parse(nameValue, errors);
    protocol::Value* versionValue = object->get("version");
    errors->setName("version");
    result->m_version = ValueConversions<WTF::String>::parse(versionValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Database::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("id", ValueConversions<WTF::String>::serialize(m_id));
    result->setValue("domain", ValueConversions<WTF::String>::serialize(m_domain));
    result->setValue("name", ValueConversions<WTF::String>::serialize(m_name));
    result->setValue("version", ValueConversions<WTF::String>::serialize(m_version));
    return result;
}

std::unique_ptr<Database> Database::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<Error> Error::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Error> result(new Error());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* messageValue = object->get("message");
    errors->setName("message");
    result->m_message = ValueConversions<WTF::String>::parse(messageValue, errors);
    protocol::Value* codeValue = object->get("code");
    errors->setName("code");
    result->m_code = ValueConversions<int>::parse(codeValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Error::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("message", ValueConversions<WTF::String>::serialize(m_message));
    result->setValue("code", ValueConversions<int>::serialize(m_code));
    return result;
}

std::unique_ptr<Error> Error::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::addDatabase(std::unique_ptr<protocol::Database::Database> database)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Database.addDatabase");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("database", ValueConversions<protocol::Database::Database>::serialize(database.get()));
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
        m_dispatchMap["Database.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["Database.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Database.getDatabaseTableNames"] = &DispatcherImpl::getDatabaseTableNames;
        m_dispatchMap["Database.executeSQL"] = &DispatcherImpl::executeSQL;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getDatabaseTableNames(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void executeSQL(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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

void DispatcherImpl::getDatabaseTableNames(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* databaseIdValue = object ? object->get("databaseId") : nullptr;
    errors->setName("databaseId");
    WTF::String in_databaseId = ValueConversions<WTF::String>::parse(databaseIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    std::unique_ptr<protocol::Array<WTF::String>> out_tableNames;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->getDatabaseTableNames(&error, in_databaseId, &out_tableNames);
    if (!error.length()) {
        result->setValue("tableNames", ValueConversions<protocol::Array<WTF::String>>::serialize(out_tableNames.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

class ExecuteSQLCallbackImpl : public Backend::ExecuteSQLCallback, public DispatcherBase::Callback {
public:
    ExecuteSQLCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
        : DispatcherBase::Callback(std::move(backendImpl), callId) { }

    void sendSuccess(const Maybe<protocol::Array<WTF::String>>& columnNames, const Maybe<protocol::Array<protocol::Value>>& values, const Maybe<protocol::Database::Error>& sqlError) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        if (columnNames.isJust())
            resultObject->setValue("columnNames", ValueConversions<protocol::Array<WTF::String>>::serialize(columnNames.fromJust()));
        if (values.isJust())
            resultObject->setValue("values", ValueConversions<protocol::Array<protocol::Value>>::serialize(values.fromJust()));
        if (sqlError.isJust())
            resultObject->setValue("sqlError", ValueConversions<protocol::Database::Error>::serialize(sqlError.fromJust()));
        sendIfActive(std::move(resultObject), ErrorString());
    }

    void sendFailure(const ErrorString& error) override
    {
        DCHECK(error.length());
        sendIfActive(nullptr, error);
    }

};

void DispatcherImpl::executeSQL(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* databaseIdValue = object ? object->get("databaseId") : nullptr;
    errors->setName("databaseId");
    WTF::String in_databaseId = ValueConversions<WTF::String>::parse(databaseIdValue, errors);
    protocol::Value* queryValue = object ? object->get("query") : nullptr;
    errors->setName("query");
    WTF::String in_query = ValueConversions<WTF::String>::parse(queryValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    std::unique_ptr<ExecuteSQLCallbackImpl> callback(new ExecuteSQLCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->executeSQL(in_databaseId,in_query,std::move(callback));
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Database", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Database
} // namespace protocol
} // namespace blink
