// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Rendering.h"

namespace blink {
namespace protocol {
namespace Rendering {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Rendering";
const char Metainfo::commandPrefix[] = "Rendering.";
const char Metainfo::version[] = "1.1";

// ------------- Enum values from params.


// ------------- Frontend notifications.

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend)
        : DispatcherBase(frontendChannel)
        , m_backend(backend) {
        m_dispatchMap["Rendering.setShowPaintRects"] = &DispatcherImpl::setShowPaintRects;
        m_dispatchMap["Rendering.setShowDebugBorders"] = &DispatcherImpl::setShowDebugBorders;
        m_dispatchMap["Rendering.setShowFPSCounter"] = &DispatcherImpl::setShowFPSCounter;
        m_dispatchMap["Rendering.setShowScrollBottleneckRects"] = &DispatcherImpl::setShowScrollBottleneckRects;
        m_dispatchMap["Rendering.setShowViewportSizeOnResize"] = &DispatcherImpl::setShowViewportSizeOnResize;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void setShowPaintRects(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setShowDebugBorders(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setShowFPSCounter(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setShowScrollBottleneckRects(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setShowViewportSizeOnResize(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


void DispatcherImpl::setShowPaintRects(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* resultValue = object ? object->get("result") : nullptr;
    errors->setName("result");
    bool in_result = ValueConversions<bool>::parse(resultValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setShowPaintRects(&error, in_result);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setShowDebugBorders(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* showValue = object ? object->get("show") : nullptr;
    errors->setName("show");
    bool in_show = ValueConversions<bool>::parse(showValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setShowDebugBorders(&error, in_show);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setShowFPSCounter(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* showValue = object ? object->get("show") : nullptr;
    errors->setName("show");
    bool in_show = ValueConversions<bool>::parse(showValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setShowFPSCounter(&error, in_show);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setShowScrollBottleneckRects(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* showValue = object ? object->get("show") : nullptr;
    errors->setName("show");
    bool in_show = ValueConversions<bool>::parse(showValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setShowScrollBottleneckRects(&error, in_show);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setShowViewportSizeOnResize(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* showValue = object ? object->get("show") : nullptr;
    errors->setName("show");
    bool in_show = ValueConversions<bool>::parse(showValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setShowViewportSizeOnResize(&error, in_show);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Rendering", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Rendering
} // namespace protocol
} // namespace blink
