// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Log.h"

namespace blink {
namespace protocol {
namespace Log {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Log";
const char Metainfo::commandPrefix[] = "Log.";
const char Metainfo::version[] = "1.1";

const char* LogEntry::SourceEnum::Xml = "xml";
const char* LogEntry::SourceEnum::Javascript = "javascript";
const char* LogEntry::SourceEnum::Network = "network";
const char* LogEntry::SourceEnum::Storage = "storage";
const char* LogEntry::SourceEnum::Appcache = "appcache";
const char* LogEntry::SourceEnum::Rendering = "rendering";
const char* LogEntry::SourceEnum::Security = "security";
const char* LogEntry::SourceEnum::Deprecation = "deprecation";
const char* LogEntry::SourceEnum::Worker = "worker";
const char* LogEntry::SourceEnum::Other = "other";

const char* LogEntry::LevelEnum::Log = "log";
const char* LogEntry::LevelEnum::Warning = "warning";
const char* LogEntry::LevelEnum::Error = "error";
const char* LogEntry::LevelEnum::Debug = "debug";
const char* LogEntry::LevelEnum::Info = "info";

std::unique_ptr<LogEntry> LogEntry::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<LogEntry> result(new LogEntry());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* sourceValue = object->get("source");
    errors->setName("source");
    result->m_source = ValueConversions<WTF::String>::parse(sourceValue, errors);
    protocol::Value* levelValue = object->get("level");
    errors->setName("level");
    result->m_level = ValueConversions<WTF::String>::parse(levelValue, errors);
    protocol::Value* textValue = object->get("text");
    errors->setName("text");
    result->m_text = ValueConversions<WTF::String>::parse(textValue, errors);
    protocol::Value* timestampValue = object->get("timestamp");
    errors->setName("timestamp");
    result->m_timestamp = ValueConversions<double>::parse(timestampValue, errors);
    protocol::Value* urlValue = object->get("url");
    if (urlValue) {
        errors->setName("url");
        result->m_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    }
    protocol::Value* lineNumberValue = object->get("lineNumber");
    if (lineNumberValue) {
        errors->setName("lineNumber");
        result->m_lineNumber = ValueConversions<int>::parse(lineNumberValue, errors);
    }
    protocol::Value* stackTraceValue = object->get("stackTrace");
    if (stackTraceValue) {
        errors->setName("stackTrace");
        result->m_stackTrace = ValueConversions<protocol::Runtime::API::StackTrace>::parse(stackTraceValue, errors);
    }
    protocol::Value* networkRequestIdValue = object->get("networkRequestId");
    if (networkRequestIdValue) {
        errors->setName("networkRequestId");
        result->m_networkRequestId = ValueConversions<WTF::String>::parse(networkRequestIdValue, errors);
    }
    protocol::Value* workerIdValue = object->get("workerId");
    if (workerIdValue) {
        errors->setName("workerId");
        result->m_workerId = ValueConversions<WTF::String>::parse(workerIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> LogEntry::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("source", ValueConversions<WTF::String>::serialize(m_source));
    result->setValue("level", ValueConversions<WTF::String>::serialize(m_level));
    result->setValue("text", ValueConversions<WTF::String>::serialize(m_text));
    result->setValue("timestamp", ValueConversions<double>::serialize(m_timestamp));
    if (m_url.isJust())
        result->setValue("url", ValueConversions<WTF::String>::serialize(m_url.fromJust()));
    if (m_lineNumber.isJust())
        result->setValue("lineNumber", ValueConversions<int>::serialize(m_lineNumber.fromJust()));
    if (m_stackTrace.isJust())
        result->setValue("stackTrace", ValueConversions<protocol::Runtime::API::StackTrace>::serialize(m_stackTrace.fromJust()));
    if (m_networkRequestId.isJust())
        result->setValue("networkRequestId", ValueConversions<WTF::String>::serialize(m_networkRequestId.fromJust()));
    if (m_workerId.isJust())
        result->setValue("workerId", ValueConversions<WTF::String>::serialize(m_workerId.fromJust()));
    return result;
}

std::unique_ptr<LogEntry> LogEntry::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::entryAdded(std::unique_ptr<protocol::Log::LogEntry> entry)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Log.entryAdded");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("entry", ValueConversions<protocol::Log::LogEntry>::serialize(entry.get()));
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
        m_dispatchMap["Log.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["Log.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Log.clear"] = &DispatcherImpl::clear;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void clear(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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

void DispatcherImpl::clear(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->clear(&error);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Log", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Log
} // namespace protocol
} // namespace blink
