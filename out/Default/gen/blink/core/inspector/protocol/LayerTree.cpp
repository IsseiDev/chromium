// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/LayerTree.h"

namespace blink {
namespace protocol {
namespace LayerTree {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "LayerTree";
const char Metainfo::commandPrefix[] = "LayerTree.";
const char Metainfo::version[] = "1.1";

const char* ScrollRect::TypeEnum::RepaintsOnScroll = "RepaintsOnScroll";
const char* ScrollRect::TypeEnum::TouchEventHandler = "TouchEventHandler";
const char* ScrollRect::TypeEnum::WheelEventHandler = "WheelEventHandler";

std::unique_ptr<ScrollRect> ScrollRect::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ScrollRect> result(new ScrollRect());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* rectValue = object->get("rect");
    errors->setName("rect");
    result->m_rect = ValueConversions<protocol::DOM::Rect>::parse(rectValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ScrollRect::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("rect", ValueConversions<protocol::DOM::Rect>::serialize(m_rect.get()));
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    return result;
}

std::unique_ptr<ScrollRect> ScrollRect::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<PictureTile> PictureTile::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<PictureTile> result(new PictureTile());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* xValue = object->get("x");
    errors->setName("x");
    result->m_x = ValueConversions<double>::parse(xValue, errors);
    protocol::Value* yValue = object->get("y");
    errors->setName("y");
    result->m_y = ValueConversions<double>::parse(yValue, errors);
    protocol::Value* pictureValue = object->get("picture");
    errors->setName("picture");
    result->m_picture = ValueConversions<WTF::String>::parse(pictureValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> PictureTile::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("x", ValueConversions<double>::serialize(m_x));
    result->setValue("y", ValueConversions<double>::serialize(m_y));
    result->setValue("picture", ValueConversions<WTF::String>::serialize(m_picture));
    return result;
}

std::unique_ptr<PictureTile> PictureTile::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<Layer> Layer::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Layer> result(new Layer());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* layerIdValue = object->get("layerId");
    errors->setName("layerId");
    result->m_layerId = ValueConversions<WTF::String>::parse(layerIdValue, errors);
    protocol::Value* parentLayerIdValue = object->get("parentLayerId");
    if (parentLayerIdValue) {
        errors->setName("parentLayerId");
        result->m_parentLayerId = ValueConversions<WTF::String>::parse(parentLayerIdValue, errors);
    }
    protocol::Value* backendNodeIdValue = object->get("backendNodeId");
    if (backendNodeIdValue) {
        errors->setName("backendNodeId");
        result->m_backendNodeId = ValueConversions<int>::parse(backendNodeIdValue, errors);
    }
    protocol::Value* offsetXValue = object->get("offsetX");
    errors->setName("offsetX");
    result->m_offsetX = ValueConversions<double>::parse(offsetXValue, errors);
    protocol::Value* offsetYValue = object->get("offsetY");
    errors->setName("offsetY");
    result->m_offsetY = ValueConversions<double>::parse(offsetYValue, errors);
    protocol::Value* widthValue = object->get("width");
    errors->setName("width");
    result->m_width = ValueConversions<double>::parse(widthValue, errors);
    protocol::Value* heightValue = object->get("height");
    errors->setName("height");
    result->m_height = ValueConversions<double>::parse(heightValue, errors);
    protocol::Value* transformValue = object->get("transform");
    if (transformValue) {
        errors->setName("transform");
        result->m_transform = ValueConversions<protocol::Array<double>>::parse(transformValue, errors);
    }
    protocol::Value* anchorXValue = object->get("anchorX");
    if (anchorXValue) {
        errors->setName("anchorX");
        result->m_anchorX = ValueConversions<double>::parse(anchorXValue, errors);
    }
    protocol::Value* anchorYValue = object->get("anchorY");
    if (anchorYValue) {
        errors->setName("anchorY");
        result->m_anchorY = ValueConversions<double>::parse(anchorYValue, errors);
    }
    protocol::Value* anchorZValue = object->get("anchorZ");
    if (anchorZValue) {
        errors->setName("anchorZ");
        result->m_anchorZ = ValueConversions<double>::parse(anchorZValue, errors);
    }
    protocol::Value* paintCountValue = object->get("paintCount");
    errors->setName("paintCount");
    result->m_paintCount = ValueConversions<int>::parse(paintCountValue, errors);
    protocol::Value* drawsContentValue = object->get("drawsContent");
    errors->setName("drawsContent");
    result->m_drawsContent = ValueConversions<bool>::parse(drawsContentValue, errors);
    protocol::Value* invisibleValue = object->get("invisible");
    if (invisibleValue) {
        errors->setName("invisible");
        result->m_invisible = ValueConversions<bool>::parse(invisibleValue, errors);
    }
    protocol::Value* scrollRectsValue = object->get("scrollRects");
    if (scrollRectsValue) {
        errors->setName("scrollRects");
        result->m_scrollRects = ValueConversions<protocol::Array<protocol::LayerTree::ScrollRect>>::parse(scrollRectsValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Layer::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("layerId", ValueConversions<WTF::String>::serialize(m_layerId));
    if (m_parentLayerId.isJust())
        result->setValue("parentLayerId", ValueConversions<WTF::String>::serialize(m_parentLayerId.fromJust()));
    if (m_backendNodeId.isJust())
        result->setValue("backendNodeId", ValueConversions<int>::serialize(m_backendNodeId.fromJust()));
    result->setValue("offsetX", ValueConversions<double>::serialize(m_offsetX));
    result->setValue("offsetY", ValueConversions<double>::serialize(m_offsetY));
    result->setValue("width", ValueConversions<double>::serialize(m_width));
    result->setValue("height", ValueConversions<double>::serialize(m_height));
    if (m_transform.isJust())
        result->setValue("transform", ValueConversions<protocol::Array<double>>::serialize(m_transform.fromJust()));
    if (m_anchorX.isJust())
        result->setValue("anchorX", ValueConversions<double>::serialize(m_anchorX.fromJust()));
    if (m_anchorY.isJust())
        result->setValue("anchorY", ValueConversions<double>::serialize(m_anchorY.fromJust()));
    if (m_anchorZ.isJust())
        result->setValue("anchorZ", ValueConversions<double>::serialize(m_anchorZ.fromJust()));
    result->setValue("paintCount", ValueConversions<int>::serialize(m_paintCount));
    result->setValue("drawsContent", ValueConversions<bool>::serialize(m_drawsContent));
    if (m_invisible.isJust())
        result->setValue("invisible", ValueConversions<bool>::serialize(m_invisible.fromJust()));
    if (m_scrollRects.isJust())
        result->setValue("scrollRects", ValueConversions<protocol::Array<protocol::LayerTree::ScrollRect>>::serialize(m_scrollRects.fromJust()));
    return result;
}

std::unique_ptr<Layer> Layer::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::layerTreeDidChange(const Maybe<protocol::Array<protocol::LayerTree::Layer>>& layers)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "LayerTree.layerTreeDidChange");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    if (layers.isJust())
        paramsObject->setValue("layers", ValueConversions<protocol::Array<protocol::LayerTree::Layer>>::serialize(layers.fromJust()));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::layerPainted(const WTF::String& layerId, std::unique_ptr<protocol::DOM::Rect> clip)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "LayerTree.layerPainted");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("layerId", ValueConversions<WTF::String>::serialize(layerId));
    paramsObject->setValue("clip", ValueConversions<protocol::DOM::Rect>::serialize(clip.get()));
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
        m_dispatchMap["LayerTree.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["LayerTree.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["LayerTree.compositingReasons"] = &DispatcherImpl::compositingReasons;
        m_dispatchMap["LayerTree.makeSnapshot"] = &DispatcherImpl::makeSnapshot;
        m_dispatchMap["LayerTree.loadSnapshot"] = &DispatcherImpl::loadSnapshot;
        m_dispatchMap["LayerTree.releaseSnapshot"] = &DispatcherImpl::releaseSnapshot;
        m_dispatchMap["LayerTree.profileSnapshot"] = &DispatcherImpl::profileSnapshot;
        m_dispatchMap["LayerTree.replaySnapshot"] = &DispatcherImpl::replaySnapshot;
        m_dispatchMap["LayerTree.snapshotCommandLog"] = &DispatcherImpl::snapshotCommandLog;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void compositingReasons(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void makeSnapshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void loadSnapshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void releaseSnapshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void profileSnapshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void replaySnapshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void snapshotCommandLog(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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

void DispatcherImpl::compositingReasons(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* layerIdValue = object ? object->get("layerId") : nullptr;
    errors->setName("layerId");
    WTF::String in_layerId = ValueConversions<WTF::String>::parse(layerIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    std::unique_ptr<protocol::Array<WTF::String>> out_compositingReasons;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->compositingReasons(&error, in_layerId, &out_compositingReasons);
    if (!error.length()) {
        result->setValue("compositingReasons", ValueConversions<protocol::Array<WTF::String>>::serialize(out_compositingReasons.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::makeSnapshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* layerIdValue = object ? object->get("layerId") : nullptr;
    errors->setName("layerId");
    WTF::String in_layerId = ValueConversions<WTF::String>::parse(layerIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    WTF::String out_snapshotId;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->makeSnapshot(&error, in_layerId, &out_snapshotId);
    if (!error.length()) {
        result->setValue("snapshotId", ValueConversions<WTF::String>::serialize(out_snapshotId));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::loadSnapshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* tilesValue = object ? object->get("tiles") : nullptr;
    errors->setName("tiles");
    std::unique_ptr<protocol::Array<protocol::LayerTree::PictureTile>> in_tiles = ValueConversions<protocol::Array<protocol::LayerTree::PictureTile>>::parse(tilesValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    WTF::String out_snapshotId;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->loadSnapshot(&error, std::move(in_tiles), &out_snapshotId);
    if (!error.length()) {
        result->setValue("snapshotId", ValueConversions<WTF::String>::serialize(out_snapshotId));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::releaseSnapshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* snapshotIdValue = object ? object->get("snapshotId") : nullptr;
    errors->setName("snapshotId");
    WTF::String in_snapshotId = ValueConversions<WTF::String>::parse(snapshotIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->releaseSnapshot(&error, in_snapshotId);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::profileSnapshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* snapshotIdValue = object ? object->get("snapshotId") : nullptr;
    errors->setName("snapshotId");
    WTF::String in_snapshotId = ValueConversions<WTF::String>::parse(snapshotIdValue, errors);
    protocol::Value* minRepeatCountValue = object ? object->get("minRepeatCount") : nullptr;
    Maybe<int> in_minRepeatCount;
    if (minRepeatCountValue) {
        errors->setName("minRepeatCount");
        in_minRepeatCount = ValueConversions<int>::parse(minRepeatCountValue, errors);
    }
    protocol::Value* minDurationValue = object ? object->get("minDuration") : nullptr;
    Maybe<double> in_minDuration;
    if (minDurationValue) {
        errors->setName("minDuration");
        in_minDuration = ValueConversions<double>::parse(minDurationValue, errors);
    }
    protocol::Value* clipRectValue = object ? object->get("clipRect") : nullptr;
    Maybe<protocol::DOM::Rect> in_clipRect;
    if (clipRectValue) {
        errors->setName("clipRect");
        in_clipRect = ValueConversions<protocol::DOM::Rect>::parse(clipRectValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    std::unique_ptr<protocol::Array<protocol::Array<double>>> out_timings;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->profileSnapshot(&error, in_snapshotId, in_minRepeatCount, in_minDuration, in_clipRect, &out_timings);
    if (!error.length()) {
        result->setValue("timings", ValueConversions<protocol::Array<protocol::Array<double>>>::serialize(out_timings.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::replaySnapshot(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* snapshotIdValue = object ? object->get("snapshotId") : nullptr;
    errors->setName("snapshotId");
    WTF::String in_snapshotId = ValueConversions<WTF::String>::parse(snapshotIdValue, errors);
    protocol::Value* fromStepValue = object ? object->get("fromStep") : nullptr;
    Maybe<int> in_fromStep;
    if (fromStepValue) {
        errors->setName("fromStep");
        in_fromStep = ValueConversions<int>::parse(fromStepValue, errors);
    }
    protocol::Value* toStepValue = object ? object->get("toStep") : nullptr;
    Maybe<int> in_toStep;
    if (toStepValue) {
        errors->setName("toStep");
        in_toStep = ValueConversions<int>::parse(toStepValue, errors);
    }
    protocol::Value* scaleValue = object ? object->get("scale") : nullptr;
    Maybe<double> in_scale;
    if (scaleValue) {
        errors->setName("scale");
        in_scale = ValueConversions<double>::parse(scaleValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    WTF::String out_dataURL;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->replaySnapshot(&error, in_snapshotId, in_fromStep, in_toStep, in_scale, &out_dataURL);
    if (!error.length()) {
        result->setValue("dataURL", ValueConversions<WTF::String>::serialize(out_dataURL));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::snapshotCommandLog(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* snapshotIdValue = object ? object->get("snapshotId") : nullptr;
    errors->setName("snapshotId");
    WTF::String in_snapshotId = ValueConversions<WTF::String>::parse(snapshotIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    std::unique_ptr<protocol::Array<protocol::DictionaryValue>> out_commandLog;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->snapshotCommandLog(&error, in_snapshotId, &out_commandLog);
    if (!error.length()) {
        result->setValue("commandLog", ValueConversions<protocol::Array<protocol::DictionaryValue>>::serialize(out_commandLog.get()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("LayerTree", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // LayerTree
} // namespace protocol
} // namespace blink
