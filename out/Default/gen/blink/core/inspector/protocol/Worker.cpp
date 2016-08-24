// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Worker.h"

namespace blink {
namespace protocol {
namespace Worker {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Worker";
const char Metainfo::commandPrefix[] = "Worker.";
const char Metainfo::version[] = "1.1";

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::workerCreated(const WTF::String& workerId, const WTF::String& url, bool waitingForDebugger)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Worker.workerCreated");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("workerId", ValueConversions<WTF::String>::serialize(workerId));
    paramsObject->setValue("url", ValueConversions<WTF::String>::serialize(url));
    paramsObject->setValue("waitingForDebugger", ValueConversions<bool>::serialize(waitingForDebugger));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::workerTerminated(const WTF::String& workerId)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Worker.workerTerminated");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("workerId", ValueConversions<WTF::String>::serialize(workerId));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::dispatchMessageFromWorker(const WTF::String& workerId, const WTF::String& message)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Worker.dispatchMessageFromWorker");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("workerId", ValueConversions<WTF::String>::serialize(workerId));
    paramsObject->setValue("message", ValueConversions<WTF::String>::serialize(message));
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
        m_dispatchMap["Worker.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["Worker.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Worker.sendMessageToWorker"] = &DispatcherImpl::sendMessageToWorker;
        m_dispatchMap["Worker.setWaitForDebuggerOnStart"] = &DispatcherImpl::setWaitForDebuggerOnStart;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void sendMessageToWorker(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setWaitForDebuggerOnStart(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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

void DispatcherImpl::sendMessageToWorker(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* workerIdValue = object ? object->get("workerId") : nullptr;
    errors->setName("workerId");
    WTF::String in_workerId = ValueConversions<WTF::String>::parse(workerIdValue, errors);
    protocol::Value* messageValue = object ? object->get("message") : nullptr;
    errors->setName("message");
    WTF::String in_message = ValueConversions<WTF::String>::parse(messageValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->sendMessageToWorker(&error, in_workerId, in_message);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setWaitForDebuggerOnStart(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
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
    m_backend->setWaitForDebuggerOnStart(&error, in_value);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Worker", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Worker
} // namespace protocol
} // namespace blink
