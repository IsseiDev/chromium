// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/DOMDebugger.h"

namespace blink {
namespace protocol {
namespace DOMDebugger {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "DOMDebugger";
const char Metainfo::commandPrefix[] = "DOMDebugger.";
const char Metainfo::version[] = "1.1";

namespace DOMBreakpointTypeEnum {
const char* SubtreeModified = "subtree-modified";
const char* AttributeModified = "attribute-modified";
const char* NodeRemoved = "node-removed";
} // namespace DOMBreakpointTypeEnum

std::unique_ptr<EventListener> EventListener::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<EventListener> result(new EventListener());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    protocol::Value* useCaptureValue = object->get("useCapture");
    errors->setName("useCapture");
    result->m_useCapture = ValueConversions<bool>::parse(useCaptureValue, errors);
    protocol::Value* passiveValue = object->get("passive");
    errors->setName("passive");
    result->m_passive = ValueConversions<bool>::parse(passiveValue, errors);
    protocol::Value* scriptIdValue = object->get("scriptId");
    errors->setName("scriptId");
    result->m_scriptId = ValueConversions<WTF::String>::parse(scriptIdValue, errors);
    protocol::Value* lineNumberValue = object->get("lineNumber");
    errors->setName("lineNumber");
    result->m_lineNumber = ValueConversions<int>::parse(lineNumberValue, errors);
    protocol::Value* columnNumberValue = object->get("columnNumber");
    errors->setName("columnNumber");
    result->m_columnNumber = ValueConversions<int>::parse(columnNumberValue, errors);
    protocol::Value* handlerValue = object->get("handler");
    if (handlerValue) {
        errors->setName("handler");
        result->m_handler = ValueConversions<protocol::Runtime::API::RemoteObject>::parse(handlerValue, errors);
    }
    protocol::Value* originalHandlerValue = object->get("originalHandler");
    if (originalHandlerValue) {
        errors->setName("originalHandler");
        result->m_originalHandler = ValueConversions<protocol::Runtime::API::RemoteObject>::parse(originalHandlerValue, errors);
    }
    protocol::Value* removeFunctionValue = object->get("removeFunction");
    if (removeFunctionValue) {
        errors->setName("removeFunction");
        result->m_removeFunction = ValueConversions<protocol::Runtime::API::RemoteObject>::parse(removeFunctionValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> EventListener::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    result->setValue("useCapture", ValueConversions<bool>::serialize(m_useCapture));
    result->setValue("passive", ValueConversions<bool>::serialize(m_passive));
    result->setValue("scriptId", ValueConversions<WTF::String>::serialize(m_scriptId));
    result->setValue("lineNumber", ValueConversions<int>::serialize(m_lineNumber));
    result->setValue("columnNumber", ValueConversions<int>::serialize(m_columnNumber));
    if (m_handler.isJust())
        result->setValue("handler", ValueConversions<protocol::Runtime::API::RemoteObject>::serialize(m_handler.fromJust()));
    if (m_originalHandler.isJust())
        result->setValue("originalHandler", ValueConversions<protocol::Runtime::API::RemoteObject>::serialize(m_originalHandler.fromJust()));
    if (m_removeFunction.isJust())
        result->setValue("removeFunction", ValueConversions<protocol::Runtime::API::RemoteObject>::serialize(m_removeFunction.fromJust()));
    return result;
}

std::unique_ptr<EventListener> EventListener::clone() const
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
        m_dispatchMap["DOMDebugger.setDOMBreakpoint"] = &DispatcherImpl::setDOMBreakpoint;
        m_dispatchMap["DOMDebugger.removeDOMBreakpoint"] = &DispatcherImpl::removeDOMBreakpoint;
        m_dispatchMap["DOMDebugger.setEventListenerBreakpoint"] = &DispatcherImpl::setEventListenerBreakpoint;
        m_dispatchMap["DOMDebugger.removeEventListenerBreakpoint"] = &DispatcherImpl::removeEventListenerBreakpoint;
        m_dispatchMap["DOMDebugger.setInstrumentationBreakpoint"] = &DispatcherImpl::setInstrumentationBreakpoint;
        m_dispatchMap["DOMDebugger.removeInstrumentationBreakpoint"] = &DispatcherImpl::removeInstrumentationBreakpoint;
        m_dispatchMap["DOMDebugger.setXHRBreakpoint"] = &DispatcherImpl::setXHRBreakpoint;
        m_dispatchMap["DOMDebugger.removeXHRBreakpoint"] = &DispatcherImpl::removeXHRBreakpoint;
        m_dispatchMap["DOMDebugger.getEventListeners"] = &DispatcherImpl::getEventListeners;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void setDOMBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void removeDOMBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setEventListenerBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void removeEventListenerBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setInstrumentationBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void removeInstrumentationBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setXHRBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void removeXHRBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getEventListeners(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


void DispatcherImpl::setDOMBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* nodeIdValue = object ? object->get("nodeId") : nullptr;
    errors->setName("nodeId");
    int in_nodeId = ValueConversions<int>::parse(nodeIdValue, errors);
    protocol::Value* typeValue = object ? object->get("type") : nullptr;
    errors->setName("type");
    WTF::String in_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setDOMBreakpoint(&error, in_nodeId, in_type);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::removeDOMBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* nodeIdValue = object ? object->get("nodeId") : nullptr;
    errors->setName("nodeId");
    int in_nodeId = ValueConversions<int>::parse(nodeIdValue, errors);
    protocol::Value* typeValue = object ? object->get("type") : nullptr;
    errors->setName("type");
    WTF::String in_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->removeDOMBreakpoint(&error, in_nodeId, in_type);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setEventListenerBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* eventNameValue = object ? object->get("eventName") : nullptr;
    errors->setName("eventName");
    WTF::String in_eventName = ValueConversions<WTF::String>::parse(eventNameValue, errors);
    protocol::Value* targetNameValue = object ? object->get("targetName") : nullptr;
    Maybe<WTF::String> in_targetName;
    if (targetNameValue) {
        errors->setName("targetName");
        in_targetName = ValueConversions<WTF::String>::parse(targetNameValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setEventListenerBreakpoint(&error, in_eventName, in_targetName);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::removeEventListenerBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* eventNameValue = object ? object->get("eventName") : nullptr;
    errors->setName("eventName");
    WTF::String in_eventName = ValueConversions<WTF::String>::parse(eventNameValue, errors);
    protocol::Value* targetNameValue = object ? object->get("targetName") : nullptr;
    Maybe<WTF::String> in_targetName;
    if (targetNameValue) {
        errors->setName("targetName");
        in_targetName = ValueConversions<WTF::String>::parse(targetNameValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->removeEventListenerBreakpoint(&error, in_eventName, in_targetName);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setInstrumentationBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* eventNameValue = object ? object->get("eventName") : nullptr;
    errors->setName("eventName");
    WTF::String in_eventName = ValueConversions<WTF::String>::parse(eventNameValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setInstrumentationBreakpoint(&error, in_eventName);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::removeInstrumentationBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* eventNameValue = object ? object->get("eventName") : nullptr;
    errors->setName("eventName");
    WTF::String in_eventName = ValueConversions<WTF::String>::parse(eventNameValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->removeInstrumentationBreakpoint(&error, in_eventName);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setXHRBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    errors->setName("url");
    WTF::String in_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setXHRBreakpoint(&error, in_url);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::removeXHRBreakpoint(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    errors->setName("url");
    WTF::String in_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->removeXHRBreakpoint(&error, in_url);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::getEventListeners(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* objectIdValue = object ? object->get("objectId") : nullptr;
    errors->setName("objectId");
    WTF::String in_objectId = ValueConversions<WTF::String>::parse(objectIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    std::unique_ptr<protocol::Array<protocol::DOMDebugger::EventListener>> out_listeners;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->getEventListeners(&error, in_objectId, &out_listeners);
    if (!error.length()) {
        result->setValue("listeners", ValueConversions<protocol::Array<protocol::DOMDebugger::EventListener>>::serialize(out_listeners.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("DOMDebugger", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // DOMDebugger
} // namespace protocol
} // namespace blink
