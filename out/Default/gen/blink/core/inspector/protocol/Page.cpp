// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Page.h"

namespace blink {
namespace protocol {
namespace Page {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Page";
const char Metainfo::commandPrefix[] = "Page.";
const char Metainfo::version[] = "1.1";

namespace ResourceTypeEnum {
const char* Document = "Document";
const char* Stylesheet = "Stylesheet";
const char* Image = "Image";
const char* Media = "Media";
const char* Font = "Font";
const char* Script = "Script";
const char* TextTrack = "TextTrack";
const char* XHR = "XHR";
const char* Fetch = "Fetch";
const char* EventSource = "EventSource";
const char* WebSocket = "WebSocket";
const char* Manifest = "Manifest";
const char* Other = "Other";
} // namespace ResourceTypeEnum

std::unique_ptr<Frame> Frame::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Frame> result(new Frame());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* idValue = object->get("id");
    errors->setName("id");
    result->m_id = ValueConversions<WTF::String>::parse(idValue, errors);
    protocol::Value* parentIdValue = object->get("parentId");
    if (parentIdValue) {
        errors->setName("parentId");
        result->m_parentId = ValueConversions<WTF::String>::parse(parentIdValue, errors);
    }
    protocol::Value* loaderIdValue = object->get("loaderId");
    errors->setName("loaderId");
    result->m_loaderId = ValueConversions<WTF::String>::parse(loaderIdValue, errors);
    protocol::Value* nameValue = object->get("name");
    if (nameValue) {
        errors->setName("name");
        result->m_name = ValueConversions<WTF::String>::parse(nameValue, errors);
    }
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    protocol::Value* securityOriginValue = object->get("securityOrigin");
    errors->setName("securityOrigin");
    result->m_securityOrigin = ValueConversions<WTF::String>::parse(securityOriginValue, errors);
    protocol::Value* mimeTypeValue = object->get("mimeType");
    errors->setName("mimeType");
    result->m_mimeType = ValueConversions<WTF::String>::parse(mimeTypeValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Frame::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("id", ValueConversions<WTF::String>::serialize(m_id));
    if (m_parentId.isJust())
        result->setValue("parentId", ValueConversions<WTF::String>::serialize(m_parentId.fromJust()));
    result->setValue("loaderId", ValueConversions<WTF::String>::serialize(m_loaderId));
    if (m_name.isJust())
        result->setValue("name", ValueConversions<WTF::String>::serialize(m_name.fromJust()));
    result->setValue("url", ValueConversions<WTF::String>::serialize(m_url));
    result->setValue("securityOrigin", ValueConversions<WTF::String>::serialize(m_securityOrigin));
    result->setValue("mimeType", ValueConversions<WTF::String>::serialize(m_mimeType));
    return result;
}

std::unique_ptr<Frame> Frame::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<FrameResource> FrameResource::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameResource> result(new FrameResource());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    protocol::Value* mimeTypeValue = object->get("mimeType");
    errors->setName("mimeType");
    result->m_mimeType = ValueConversions<WTF::String>::parse(mimeTypeValue, errors);
    protocol::Value* failedValue = object->get("failed");
    if (failedValue) {
        errors->setName("failed");
        result->m_failed = ValueConversions<bool>::parse(failedValue, errors);
    }
    protocol::Value* canceledValue = object->get("canceled");
    if (canceledValue) {
        errors->setName("canceled");
        result->m_canceled = ValueConversions<bool>::parse(canceledValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameResource::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("url", ValueConversions<WTF::String>::serialize(m_url));
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    result->setValue("mimeType", ValueConversions<WTF::String>::serialize(m_mimeType));
    if (m_failed.isJust())
        result->setValue("failed", ValueConversions<bool>::serialize(m_failed.fromJust()));
    if (m_canceled.isJust())
        result->setValue("canceled", ValueConversions<bool>::serialize(m_canceled.fromJust()));
    return result;
}

std::unique_ptr<FrameResource> FrameResource::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<FrameResourceTree> FrameResourceTree::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<FrameResourceTree> result(new FrameResourceTree());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* frameValue = object->get("frame");
    errors->setName("frame");
    result->m_frame = ValueConversions<protocol::Page::Frame>::parse(frameValue, errors);
    protocol::Value* childFramesValue = object->get("childFrames");
    if (childFramesValue) {
        errors->setName("childFrames");
        result->m_childFrames = ValueConversions<protocol::Array<protocol::Page::FrameResourceTree>>::parse(childFramesValue, errors);
    }
    protocol::Value* resourcesValue = object->get("resources");
    errors->setName("resources");
    result->m_resources = ValueConversions<protocol::Array<protocol::Page::FrameResource>>::parse(resourcesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> FrameResourceTree::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("frame", ValueConversions<protocol::Page::Frame>::serialize(m_frame.get()));
    if (m_childFrames.isJust())
        result->setValue("childFrames", ValueConversions<protocol::Array<protocol::Page::FrameResourceTree>>::serialize(m_childFrames.fromJust()));
    result->setValue("resources", ValueConversions<protocol::Array<protocol::Page::FrameResource>>::serialize(m_resources.get()));
    return result;
}

std::unique_ptr<FrameResourceTree> FrameResourceTree::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<NavigationEntry> NavigationEntry::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<NavigationEntry> result(new NavigationEntry());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* idValue = object->get("id");
    errors->setName("id");
    result->m_id = ValueConversions<int>::parse(idValue, errors);
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    protocol::Value* titleValue = object->get("title");
    errors->setName("title");
    result->m_title = ValueConversions<WTF::String>::parse(titleValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> NavigationEntry::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("id", ValueConversions<int>::serialize(m_id));
    result->setValue("url", ValueConversions<WTF::String>::serialize(m_url));
    result->setValue("title", ValueConversions<WTF::String>::serialize(m_title));
    return result;
}

std::unique_ptr<NavigationEntry> NavigationEntry::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<ScreencastFrameMetadata> ScreencastFrameMetadata::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ScreencastFrameMetadata> result(new ScreencastFrameMetadata());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* offsetTopValue = object->get("offsetTop");
    errors->setName("offsetTop");
    result->m_offsetTop = ValueConversions<double>::parse(offsetTopValue, errors);
    protocol::Value* pageScaleFactorValue = object->get("pageScaleFactor");
    errors->setName("pageScaleFactor");
    result->m_pageScaleFactor = ValueConversions<double>::parse(pageScaleFactorValue, errors);
    protocol::Value* deviceWidthValue = object->get("deviceWidth");
    errors->setName("deviceWidth");
    result->m_deviceWidth = ValueConversions<double>::parse(deviceWidthValue, errors);
    protocol::Value* deviceHeightValue = object->get("deviceHeight");
    errors->setName("deviceHeight");
    result->m_deviceHeight = ValueConversions<double>::parse(deviceHeightValue, errors);
    protocol::Value* scrollOffsetXValue = object->get("scrollOffsetX");
    errors->setName("scrollOffsetX");
    result->m_scrollOffsetX = ValueConversions<double>::parse(scrollOffsetXValue, errors);
    protocol::Value* scrollOffsetYValue = object->get("scrollOffsetY");
    errors->setName("scrollOffsetY");
    result->m_scrollOffsetY = ValueConversions<double>::parse(scrollOffsetYValue, errors);
    protocol::Value* timestampValue = object->get("timestamp");
    if (timestampValue) {
        errors->setName("timestamp");
        result->m_timestamp = ValueConversions<double>::parse(timestampValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ScreencastFrameMetadata::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("offsetTop", ValueConversions<double>::serialize(m_offsetTop));
    result->setValue("pageScaleFactor", ValueConversions<double>::serialize(m_pageScaleFactor));
    result->setValue("deviceWidth", ValueConversions<double>::serialize(m_deviceWidth));
    result->setValue("deviceHeight", ValueConversions<double>::serialize(m_deviceHeight));
    result->setValue("scrollOffsetX", ValueConversions<double>::serialize(m_scrollOffsetX));
    result->setValue("scrollOffsetY", ValueConversions<double>::serialize(m_scrollOffsetY));
    if (m_timestamp.isJust())
        result->setValue("timestamp", ValueConversions<double>::serialize(m_timestamp.fromJust()));
    return result;
}

std::unique_ptr<ScreencastFrameMetadata> ScreencastFrameMetadata::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

namespace DialogTypeEnum {
const char* Alert = "alert";
const char* Confirm = "confirm";
const char* Prompt = "prompt";
const char* Beforeunload = "beforeunload";
} // namespace DialogTypeEnum

std::unique_ptr<AppManifestError> AppManifestError::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AppManifestError> result(new AppManifestError());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* messageValue = object->get("message");
    errors->setName("message");
    result->m_message = ValueConversions<WTF::String>::parse(messageValue, errors);
    protocol::Value* criticalValue = object->get("critical");
    errors->setName("critical");
    result->m_critical = ValueConversions<int>::parse(criticalValue, errors);
    protocol::Value* lineValue = object->get("line");
    errors->setName("line");
    result->m_line = ValueConversions<int>::parse(lineValue, errors);
    protocol::Value* columnValue = object->get("column");
    errors->setName("column");
    result->m_column = ValueConversions<int>::parse(columnValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AppManifestError::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("message", ValueConversions<WTF::String>::serialize(m_message));
    result->setValue("critical", ValueConversions<int>::serialize(m_critical));
    result->setValue("line", ValueConversions<int>::serialize(m_line));
    result->setValue("column", ValueConversions<int>::serialize(m_column));
    return result;
}

std::unique_ptr<AppManifestError> AppManifestError::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

namespace NavigationResponseEnum {
const char* Proceed = "Proceed";
const char* Cancel = "Cancel";
const char* CancelAndIgnore = "CancelAndIgnore";
} // namespace NavigationResponseEnum

// ------------- Enum values from params.


namespace SetTouchEmulationEnabled {
namespace ConfigurationEnum {
const char* Mobile = "mobile";
const char* Desktop = "desktop";
} // namespace ConfigurationEnum
} // namespace SetTouchEmulationEnabled

namespace StartScreencast {
namespace FormatEnum {
const char* Jpeg = "jpeg";
const char* Png = "png";
} // namespace FormatEnum
} // namespace StartScreencast

// ------------- Frontend notifications.

void Frontend::domContentEventFired(double timestamp)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Page.domContentEventFired");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::loadEventFired(double timestamp)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Page.loadEventFired");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::frameAttached(const WTF::String& frameId, const WTF::String& parentFrameId)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Page.frameAttached");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("frameId", ValueConversions<WTF::String>::serialize(frameId));
    paramsObject->setValue("parentFrameId", ValueConversions<WTF::String>::serialize(parentFrameId));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::frameNavigated(std::unique_ptr<protocol::Page::Frame> frame)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Page.frameNavigated");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("frame", ValueConversions<protocol::Page::Frame>::serialize(frame.get()));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::frameDetached(const WTF::String& frameId)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Page.frameDetached");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("frameId", ValueConversions<WTF::String>::serialize(frameId));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::frameStartedLoading(const WTF::String& frameId)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Page.frameStartedLoading");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("frameId", ValueConversions<WTF::String>::serialize(frameId));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::frameStoppedLoading(const WTF::String& frameId)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Page.frameStoppedLoading");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("frameId", ValueConversions<WTF::String>::serialize(frameId));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::frameScheduledNavigation(const WTF::String& frameId, double delay)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Page.frameScheduledNavigation");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("frameId", ValueConversions<WTF::String>::serialize(frameId));
    paramsObject->setValue("delay", ValueConversions<double>::serialize(delay));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::frameClearedScheduledNavigation(const WTF::String& frameId)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Page.frameClearedScheduledNavigation");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("frameId", ValueConversions<WTF::String>::serialize(frameId));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::frameResized()
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Page.frameResized");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::javascriptDialogOpening(const WTF::String& message, const WTF::String& type)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Page.javascriptDialogOpening");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("message", ValueConversions<WTF::String>::serialize(message));
    paramsObject->setValue("type", ValueConversions<WTF::String>::serialize(type));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::javascriptDialogClosed(bool result)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Page.javascriptDialogClosed");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("result", ValueConversions<bool>::serialize(result));
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
        m_dispatchMap["Page.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["Page.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Page.addScriptToEvaluateOnLoad"] = &DispatcherImpl::addScriptToEvaluateOnLoad;
        m_dispatchMap["Page.removeScriptToEvaluateOnLoad"] = &DispatcherImpl::removeScriptToEvaluateOnLoad;
        m_dispatchMap["Page.setAutoAttachToCreatedPages"] = &DispatcherImpl::setAutoAttachToCreatedPages;
        m_dispatchMap["Page.reload"] = &DispatcherImpl::reload;
        m_dispatchMap["Page.navigate"] = &DispatcherImpl::navigate;
        m_dispatchMap["Page.getResourceTree"] = &DispatcherImpl::getResourceTree;
        m_dispatchMap["Page.getResourceContent"] = &DispatcherImpl::getResourceContent;
        m_dispatchMap["Page.searchInResource"] = &DispatcherImpl::searchInResource;
        m_dispatchMap["Page.setDocumentContent"] = &DispatcherImpl::setDocumentContent;
        m_dispatchMap["Page.startScreencast"] = &DispatcherImpl::startScreencast;
        m_dispatchMap["Page.stopScreencast"] = &DispatcherImpl::stopScreencast;
        m_dispatchMap["Page.configureOverlay"] = &DispatcherImpl::configureOverlay;
        m_dispatchMap["Page.setBlockedEventsWarningThreshold"] = &DispatcherImpl::setBlockedEventsWarningThreshold;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void addScriptToEvaluateOnLoad(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void removeScriptToEvaluateOnLoad(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setAutoAttachToCreatedPages(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void reload(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void navigate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getResourceTree(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getResourceContent(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void searchInResource(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setDocumentContent(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void startScreencast(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void stopScreencast(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void configureOverlay(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setBlockedEventsWarningThreshold(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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

void DispatcherImpl::addScriptToEvaluateOnLoad(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* scriptSourceValue = object ? object->get("scriptSource") : nullptr;
    errors->setName("scriptSource");
    WTF::String in_scriptSource = ValueConversions<WTF::String>::parse(scriptSourceValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    WTF::String out_identifier;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->addScriptToEvaluateOnLoad(&error, in_scriptSource, &out_identifier);
    if (!error.length()) {
        result->setValue("identifier", ValueConversions<WTF::String>::serialize(out_identifier));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::removeScriptToEvaluateOnLoad(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* identifierValue = object ? object->get("identifier") : nullptr;
    errors->setName("identifier");
    WTF::String in_identifier = ValueConversions<WTF::String>::parse(identifierValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->removeScriptToEvaluateOnLoad(&error, in_identifier);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setAutoAttachToCreatedPages(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* autoAttachValue = object ? object->get("autoAttach") : nullptr;
    errors->setName("autoAttach");
    bool in_autoAttach = ValueConversions<bool>::parse(autoAttachValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setAutoAttachToCreatedPages(&error, in_autoAttach);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::reload(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* ignoreCacheValue = object ? object->get("ignoreCache") : nullptr;
    Maybe<bool> in_ignoreCache;
    if (ignoreCacheValue) {
        errors->setName("ignoreCache");
        in_ignoreCache = ValueConversions<bool>::parse(ignoreCacheValue, errors);
    }
    protocol::Value* scriptToEvaluateOnLoadValue = object ? object->get("scriptToEvaluateOnLoad") : nullptr;
    Maybe<WTF::String> in_scriptToEvaluateOnLoad;
    if (scriptToEvaluateOnLoadValue) {
        errors->setName("scriptToEvaluateOnLoad");
        in_scriptToEvaluateOnLoad = ValueConversions<WTF::String>::parse(scriptToEvaluateOnLoadValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->reload(&error, in_ignoreCache, in_scriptToEvaluateOnLoad);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::navigate(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
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
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    WTF::String out_frameId;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->navigate(&error, in_url, &out_frameId);
    if (!error.length()) {
        result->setValue("frameId", ValueConversions<WTF::String>::serialize(out_frameId));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::getResourceTree(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    std::unique_ptr<protocol::Page::FrameResourceTree> out_frameTree;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->getResourceTree(&error, &out_frameTree);
    if (!error.length()) {
        result->setValue("frameTree", ValueConversions<protocol::Page::FrameResourceTree>::serialize(out_frameTree.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

class GetResourceContentCallbackImpl : public Backend::GetResourceContentCallback, public DispatcherBase::Callback {
public:
    GetResourceContentCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
        : DispatcherBase::Callback(std::move(backendImpl), callId) { }

    void sendSuccess(const WTF::String& content, bool base64Encoded) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("content", ValueConversions<WTF::String>::serialize(content));
        resultObject->setValue("base64Encoded", ValueConversions<bool>::serialize(base64Encoded));
        sendIfActive(std::move(resultObject), ErrorString());
    }

    void sendFailure(const ErrorString& error) override
    {
        DCHECK(error.length());
        sendIfActive(nullptr, error);
    }

};

void DispatcherImpl::getResourceContent(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* frameIdValue = object ? object->get("frameId") : nullptr;
    errors->setName("frameId");
    WTF::String in_frameId = ValueConversions<WTF::String>::parse(frameIdValue, errors);
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    errors->setName("url");
    WTF::String in_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    std::unique_ptr<GetResourceContentCallbackImpl> callback(new GetResourceContentCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->getResourceContent(in_frameId,in_url,std::move(callback));
}

class SearchInResourceCallbackImpl : public Backend::SearchInResourceCallback, public DispatcherBase::Callback {
public:
    SearchInResourceCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
        : DispatcherBase::Callback(std::move(backendImpl), callId) { }

    void sendSuccess(std::unique_ptr<protocol::Array<protocol::Debugger::API::SearchMatch>> result) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("result", ValueConversions<protocol::Array<protocol::Debugger::API::SearchMatch>>::serialize(result.get()));
        sendIfActive(std::move(resultObject), ErrorString());
    }

    void sendFailure(const ErrorString& error) override
    {
        DCHECK(error.length());
        sendIfActive(nullptr, error);
    }

};

void DispatcherImpl::searchInResource(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* frameIdValue = object ? object->get("frameId") : nullptr;
    errors->setName("frameId");
    WTF::String in_frameId = ValueConversions<WTF::String>::parse(frameIdValue, errors);
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    errors->setName("url");
    WTF::String in_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    protocol::Value* queryValue = object ? object->get("query") : nullptr;
    errors->setName("query");
    WTF::String in_query = ValueConversions<WTF::String>::parse(queryValue, errors);
    protocol::Value* caseSensitiveValue = object ? object->get("caseSensitive") : nullptr;
    Maybe<bool> in_caseSensitive;
    if (caseSensitiveValue) {
        errors->setName("caseSensitive");
        in_caseSensitive = ValueConversions<bool>::parse(caseSensitiveValue, errors);
    }
    protocol::Value* isRegexValue = object ? object->get("isRegex") : nullptr;
    Maybe<bool> in_isRegex;
    if (isRegexValue) {
        errors->setName("isRegex");
        in_isRegex = ValueConversions<bool>::parse(isRegexValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    std::unique_ptr<SearchInResourceCallbackImpl> callback(new SearchInResourceCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->searchInResource(in_frameId,in_url,in_query,in_caseSensitive,in_isRegex,std::move(callback));
}

void DispatcherImpl::setDocumentContent(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* frameIdValue = object ? object->get("frameId") : nullptr;
    errors->setName("frameId");
    WTF::String in_frameId = ValueConversions<WTF::String>::parse(frameIdValue, errors);
    protocol::Value* htmlValue = object ? object->get("html") : nullptr;
    errors->setName("html");
    WTF::String in_html = ValueConversions<WTF::String>::parse(htmlValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setDocumentContent(&error, in_frameId, in_html);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::startScreencast(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* formatValue = object ? object->get("format") : nullptr;
    Maybe<WTF::String> in_format;
    if (formatValue) {
        errors->setName("format");
        in_format = ValueConversions<WTF::String>::parse(formatValue, errors);
    }
    protocol::Value* qualityValue = object ? object->get("quality") : nullptr;
    Maybe<int> in_quality;
    if (qualityValue) {
        errors->setName("quality");
        in_quality = ValueConversions<int>::parse(qualityValue, errors);
    }
    protocol::Value* maxWidthValue = object ? object->get("maxWidth") : nullptr;
    Maybe<int> in_maxWidth;
    if (maxWidthValue) {
        errors->setName("maxWidth");
        in_maxWidth = ValueConversions<int>::parse(maxWidthValue, errors);
    }
    protocol::Value* maxHeightValue = object ? object->get("maxHeight") : nullptr;
    Maybe<int> in_maxHeight;
    if (maxHeightValue) {
        errors->setName("maxHeight");
        in_maxHeight = ValueConversions<int>::parse(maxHeightValue, errors);
    }
    protocol::Value* everyNthFrameValue = object ? object->get("everyNthFrame") : nullptr;
    Maybe<int> in_everyNthFrame;
    if (everyNthFrameValue) {
        errors->setName("everyNthFrame");
        in_everyNthFrame = ValueConversions<int>::parse(everyNthFrameValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->startScreencast(&error, in_format, in_quality, in_maxWidth, in_maxHeight, in_everyNthFrame);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::stopScreencast(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->stopScreencast(&error);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::configureOverlay(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* suspendedValue = object ? object->get("suspended") : nullptr;
    Maybe<bool> in_suspended;
    if (suspendedValue) {
        errors->setName("suspended");
        in_suspended = ValueConversions<bool>::parse(suspendedValue, errors);
    }
    protocol::Value* messageValue = object ? object->get("message") : nullptr;
    Maybe<WTF::String> in_message;
    if (messageValue) {
        errors->setName("message");
        in_message = ValueConversions<WTF::String>::parse(messageValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->configureOverlay(&error, in_suspended, in_message);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setBlockedEventsWarningThreshold(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* thresholdValue = object ? object->get("threshold") : nullptr;
    errors->setName("threshold");
    double in_threshold = ValueConversions<double>::parse(thresholdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setBlockedEventsWarningThreshold(&error, in_threshold);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Page", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Page
} // namespace protocol
} // namespace blink
