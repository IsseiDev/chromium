// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Security.h"

namespace blink {
namespace protocol {
namespace Security {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Security";
const char Metainfo::commandPrefix[] = "Security.";
const char Metainfo::version[] = "1.1";

namespace SecurityStateEnum {
const char* Unknown = "unknown";
const char* Neutral = "neutral";
const char* Insecure = "insecure";
const char* Warning = "warning";
const char* Secure = "secure";
const char* Info = "info";
} // namespace SecurityStateEnum

std::unique_ptr<SecurityStateExplanation> SecurityStateExplanation::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SecurityStateExplanation> result(new SecurityStateExplanation());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* securityStateValue = object->get("securityState");
    errors->setName("securityState");
    result->m_securityState = ValueConversions<WTF::String>::parse(securityStateValue, errors);
    protocol::Value* summaryValue = object->get("summary");
    errors->setName("summary");
    result->m_summary = ValueConversions<WTF::String>::parse(summaryValue, errors);
    protocol::Value* descriptionValue = object->get("description");
    errors->setName("description");
    result->m_description = ValueConversions<WTF::String>::parse(descriptionValue, errors);
    protocol::Value* certificateIdValue = object->get("certificateId");
    if (certificateIdValue) {
        errors->setName("certificateId");
        result->m_certificateId = ValueConversions<int>::parse(certificateIdValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SecurityStateExplanation::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("securityState", ValueConversions<WTF::String>::serialize(m_securityState));
    result->setValue("summary", ValueConversions<WTF::String>::serialize(m_summary));
    result->setValue("description", ValueConversions<WTF::String>::serialize(m_description));
    if (m_certificateId.isJust())
        result->setValue("certificateId", ValueConversions<int>::serialize(m_certificateId.fromJust()));
    return result;
}

std::unique_ptr<SecurityStateExplanation> SecurityStateExplanation::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<MixedContentStatus> MixedContentStatus::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<MixedContentStatus> result(new MixedContentStatus());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* ranInsecureContentValue = object->get("ranInsecureContent");
    errors->setName("ranInsecureContent");
    result->m_ranInsecureContent = ValueConversions<bool>::parse(ranInsecureContentValue, errors);
    protocol::Value* displayedInsecureContentValue = object->get("displayedInsecureContent");
    errors->setName("displayedInsecureContent");
    result->m_displayedInsecureContent = ValueConversions<bool>::parse(displayedInsecureContentValue, errors);
    protocol::Value* ranInsecureContentStyleValue = object->get("ranInsecureContentStyle");
    errors->setName("ranInsecureContentStyle");
    result->m_ranInsecureContentStyle = ValueConversions<WTF::String>::parse(ranInsecureContentStyleValue, errors);
    protocol::Value* displayedInsecureContentStyleValue = object->get("displayedInsecureContentStyle");
    errors->setName("displayedInsecureContentStyle");
    result->m_displayedInsecureContentStyle = ValueConversions<WTF::String>::parse(displayedInsecureContentStyleValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> MixedContentStatus::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("ranInsecureContent", ValueConversions<bool>::serialize(m_ranInsecureContent));
    result->setValue("displayedInsecureContent", ValueConversions<bool>::serialize(m_displayedInsecureContent));
    result->setValue("ranInsecureContentStyle", ValueConversions<WTF::String>::serialize(m_ranInsecureContentStyle));
    result->setValue("displayedInsecureContentStyle", ValueConversions<WTF::String>::serialize(m_displayedInsecureContentStyle));
    return result;
}

std::unique_ptr<MixedContentStatus> MixedContentStatus::clone() const
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
    dispatcher->registerBackend("Security", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Security
} // namespace protocol
} // namespace blink
