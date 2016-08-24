// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Tracing.h"

namespace blink {
namespace protocol {
namespace Tracing {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Tracing";
const char Metainfo::commandPrefix[] = "Tracing.";
const char Metainfo::version[] = "1.1";

const char* TraceConfig::RecordModeEnum::RecordUntilFull = "recordUntilFull";
const char* TraceConfig::RecordModeEnum::RecordContinuously = "recordContinuously";
const char* TraceConfig::RecordModeEnum::RecordAsMuchAsPossible = "recordAsMuchAsPossible";
const char* TraceConfig::RecordModeEnum::EchoToConsole = "echoToConsole";

std::unique_ptr<TraceConfig> TraceConfig::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<TraceConfig> result(new TraceConfig());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* recordModeValue = object->get("recordMode");
    if (recordModeValue) {
        errors->setName("recordMode");
        result->m_recordMode = ValueConversions<WTF::String>::parse(recordModeValue, errors);
    }
    protocol::Value* enableSamplingValue = object->get("enableSampling");
    if (enableSamplingValue) {
        errors->setName("enableSampling");
        result->m_enableSampling = ValueConversions<bool>::parse(enableSamplingValue, errors);
    }
    protocol::Value* enableSystraceValue = object->get("enableSystrace");
    if (enableSystraceValue) {
        errors->setName("enableSystrace");
        result->m_enableSystrace = ValueConversions<bool>::parse(enableSystraceValue, errors);
    }
    protocol::Value* enableArgumentFilterValue = object->get("enableArgumentFilter");
    if (enableArgumentFilterValue) {
        errors->setName("enableArgumentFilter");
        result->m_enableArgumentFilter = ValueConversions<bool>::parse(enableArgumentFilterValue, errors);
    }
    protocol::Value* includedCategoriesValue = object->get("includedCategories");
    if (includedCategoriesValue) {
        errors->setName("includedCategories");
        result->m_includedCategories = ValueConversions<protocol::Array<WTF::String>>::parse(includedCategoriesValue, errors);
    }
    protocol::Value* excludedCategoriesValue = object->get("excludedCategories");
    if (excludedCategoriesValue) {
        errors->setName("excludedCategories");
        result->m_excludedCategories = ValueConversions<protocol::Array<WTF::String>>::parse(excludedCategoriesValue, errors);
    }
    protocol::Value* syntheticDelaysValue = object->get("syntheticDelays");
    if (syntheticDelaysValue) {
        errors->setName("syntheticDelays");
        result->m_syntheticDelays = ValueConversions<protocol::Array<WTF::String>>::parse(syntheticDelaysValue, errors);
    }
    protocol::Value* memoryDumpConfigValue = object->get("memoryDumpConfig");
    if (memoryDumpConfigValue) {
        errors->setName("memoryDumpConfig");
        result->m_memoryDumpConfig = ValueConversions<protocol::Tracing::MemoryDumpConfig>::parse(memoryDumpConfigValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> TraceConfig::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    if (m_recordMode.isJust())
        result->setValue("recordMode", ValueConversions<WTF::String>::serialize(m_recordMode.fromJust()));
    if (m_enableSampling.isJust())
        result->setValue("enableSampling", ValueConversions<bool>::serialize(m_enableSampling.fromJust()));
    if (m_enableSystrace.isJust())
        result->setValue("enableSystrace", ValueConversions<bool>::serialize(m_enableSystrace.fromJust()));
    if (m_enableArgumentFilter.isJust())
        result->setValue("enableArgumentFilter", ValueConversions<bool>::serialize(m_enableArgumentFilter.fromJust()));
    if (m_includedCategories.isJust())
        result->setValue("includedCategories", ValueConversions<protocol::Array<WTF::String>>::serialize(m_includedCategories.fromJust()));
    if (m_excludedCategories.isJust())
        result->setValue("excludedCategories", ValueConversions<protocol::Array<WTF::String>>::serialize(m_excludedCategories.fromJust()));
    if (m_syntheticDelays.isJust())
        result->setValue("syntheticDelays", ValueConversions<protocol::Array<WTF::String>>::serialize(m_syntheticDelays.fromJust()));
    if (m_memoryDumpConfig.isJust())
        result->setValue("memoryDumpConfig", ValueConversions<protocol::Tracing::MemoryDumpConfig>::serialize(m_memoryDumpConfig.fromJust()));
    return result;
}

std::unique_ptr<TraceConfig> TraceConfig::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

// ------------- Enum values from params.


namespace Start {
namespace TransferModeEnum {
const char* ReportEvents = "ReportEvents";
const char* ReturnAsStream = "ReturnAsStream";
} // namespace TransferModeEnum
} // namespace Start

// ------------- Frontend notifications.

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend)
        : DispatcherBase(frontendChannel)
        , m_backend(backend) {
        m_dispatchMap["Tracing.start"] = &DispatcherImpl::start;
        m_dispatchMap["Tracing.end"] = &DispatcherImpl::end;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void start(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void end(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


class StartCallbackImpl : public Backend::StartCallback, public DispatcherBase::Callback {
public:
    StartCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
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

void DispatcherImpl::start(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* categoriesValue = object ? object->get("categories") : nullptr;
    Maybe<WTF::String> in_categories;
    if (categoriesValue) {
        errors->setName("categories");
        in_categories = ValueConversions<WTF::String>::parse(categoriesValue, errors);
    }
    protocol::Value* optionsValue = object ? object->get("options") : nullptr;
    Maybe<WTF::String> in_options;
    if (optionsValue) {
        errors->setName("options");
        in_options = ValueConversions<WTF::String>::parse(optionsValue, errors);
    }
    protocol::Value* bufferUsageReportingIntervalValue = object ? object->get("bufferUsageReportingInterval") : nullptr;
    Maybe<double> in_bufferUsageReportingInterval;
    if (bufferUsageReportingIntervalValue) {
        errors->setName("bufferUsageReportingInterval");
        in_bufferUsageReportingInterval = ValueConversions<double>::parse(bufferUsageReportingIntervalValue, errors);
    }
    protocol::Value* transferModeValue = object ? object->get("transferMode") : nullptr;
    Maybe<WTF::String> in_transferMode;
    if (transferModeValue) {
        errors->setName("transferMode");
        in_transferMode = ValueConversions<WTF::String>::parse(transferModeValue, errors);
    }
    protocol::Value* traceConfigValue = object ? object->get("traceConfig") : nullptr;
    Maybe<protocol::Tracing::TraceConfig> in_traceConfig;
    if (traceConfigValue) {
        errors->setName("traceConfig");
        in_traceConfig = ValueConversions<protocol::Tracing::TraceConfig>::parse(traceConfigValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    std::unique_ptr<StartCallbackImpl> callback(new StartCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->start(in_categories,in_options,in_bufferUsageReportingInterval,in_transferMode,in_traceConfig,std::move(callback));
}

class EndCallbackImpl : public Backend::EndCallback, public DispatcherBase::Callback {
public:
    EndCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
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

void DispatcherImpl::end(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    std::unique_ptr<EndCallbackImpl> callback(new EndCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->end(std::move(callback));
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Tracing", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Tracing
} // namespace protocol
} // namespace blink
