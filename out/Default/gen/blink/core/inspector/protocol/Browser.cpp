// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Browser.h"

namespace blink {
namespace protocol {
namespace Browser {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Browser";
const char Metainfo::commandPrefix[] = "Browser.";
const char Metainfo::version[] = "1.1";

std::unique_ptr<TargetInfo> TargetInfo::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<TargetInfo> result(new TargetInfo());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* targetIdValue = object->get("targetId");
    errors->setName("targetId");
    result->m_targetId = ValueConversions<WTF::String>::parse(targetIdValue, errors);
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
    result->setValue("targetId", ValueConversions<WTF::String>::serialize(m_targetId));
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
    dispatcher->registerBackend("Browser", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Browser
} // namespace protocol
} // namespace blink
