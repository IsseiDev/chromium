// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Memory.h"

namespace blink {
namespace protocol {
namespace Memory {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Memory";
const char Metainfo::commandPrefix[] = "Memory.";
const char Metainfo::version[] = "1.1";

namespace PressureLevelEnum {
const char* Moderate = "moderate";
const char* Critical = "critical";
} // namespace PressureLevelEnum

// ------------- Enum values from params.


// ------------- Frontend notifications.

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend)
        : DispatcherBase(frontendChannel)
        , m_backend(backend) {
        m_dispatchMap["Memory.getDOMCounters"] = &DispatcherImpl::getDOMCounters;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void getDOMCounters(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


void DispatcherImpl::getDOMCounters(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    int out_documents;
    int out_nodes;
    int out_jsEventListeners;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->getDOMCounters(&error, &out_documents, &out_nodes, &out_jsEventListeners);
    if (!error.length()) {
        result->setValue("documents", ValueConversions<int>::serialize(out_documents));
        result->setValue("nodes", ValueConversions<int>::serialize(out_nodes));
        result->setValue("jsEventListeners", ValueConversions<int>::serialize(out_jsEventListeners));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Memory", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Memory
} // namespace protocol
} // namespace blink
