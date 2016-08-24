// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Accessibility.h"

namespace blink {
namespace protocol {
namespace Accessibility {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Accessibility";
const char Metainfo::commandPrefix[] = "Accessibility.";
const char Metainfo::version[] = "1.1";

namespace AXValueTypeEnum {
const char* Boolean = "boolean";
const char* Tristate = "tristate";
const char* BooleanOrUndefined = "booleanOrUndefined";
const char* Idref = "idref";
const char* IdrefList = "idrefList";
const char* Integer = "integer";
const char* Node = "node";
const char* NodeList = "nodeList";
const char* Number = "number";
const char* String = "string";
const char* ComputedString = "computedString";
const char* Token = "token";
const char* TokenList = "tokenList";
const char* DomRelation = "domRelation";
const char* Role = "role";
const char* InternalRole = "internalRole";
const char* ValueUndefined = "valueUndefined";
} // namespace AXValueTypeEnum

namespace AXValueSourceTypeEnum {
const char* Attribute = "attribute";
const char* Implicit = "implicit";
const char* Style = "style";
const char* Contents = "contents";
const char* Placeholder = "placeholder";
const char* RelatedElement = "relatedElement";
} // namespace AXValueSourceTypeEnum

namespace AXValueNativeSourceTypeEnum {
const char* Figcaption = "figcaption";
const char* Label = "label";
const char* Labelfor = "labelfor";
const char* Labelwrapped = "labelwrapped";
const char* Legend = "legend";
const char* Tablecaption = "tablecaption";
const char* Title = "title";
const char* Other = "other";
} // namespace AXValueNativeSourceTypeEnum

std::unique_ptr<AXValueSource> AXValueSource::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AXValueSource> result(new AXValueSource());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    protocol::Value* valueValue = object->get("value");
    if (valueValue) {
        errors->setName("value");
        result->m_value = ValueConversions<protocol::Accessibility::AXValue>::parse(valueValue, errors);
    }
    protocol::Value* attributeValue = object->get("attribute");
    if (attributeValue) {
        errors->setName("attribute");
        result->m_attribute = ValueConversions<WTF::String>::parse(attributeValue, errors);
    }
    protocol::Value* attributeValueValue = object->get("attributeValue");
    if (attributeValueValue) {
        errors->setName("attributeValue");
        result->m_attributeValue = ValueConversions<protocol::Accessibility::AXValue>::parse(attributeValueValue, errors);
    }
    protocol::Value* supersededValue = object->get("superseded");
    if (supersededValue) {
        errors->setName("superseded");
        result->m_superseded = ValueConversions<bool>::parse(supersededValue, errors);
    }
    protocol::Value* nativeSourceValue = object->get("nativeSource");
    if (nativeSourceValue) {
        errors->setName("nativeSource");
        result->m_nativeSource = ValueConversions<WTF::String>::parse(nativeSourceValue, errors);
    }
    protocol::Value* nativeSourceValueValue = object->get("nativeSourceValue");
    if (nativeSourceValueValue) {
        errors->setName("nativeSourceValue");
        result->m_nativeSourceValue = ValueConversions<protocol::Accessibility::AXValue>::parse(nativeSourceValueValue, errors);
    }
    protocol::Value* invalidValue = object->get("invalid");
    if (invalidValue) {
        errors->setName("invalid");
        result->m_invalid = ValueConversions<bool>::parse(invalidValue, errors);
    }
    protocol::Value* invalidReasonValue = object->get("invalidReason");
    if (invalidReasonValue) {
        errors->setName("invalidReason");
        result->m_invalidReason = ValueConversions<WTF::String>::parse(invalidReasonValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AXValueSource::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    if (m_value.isJust())
        result->setValue("value", ValueConversions<protocol::Accessibility::AXValue>::serialize(m_value.fromJust()));
    if (m_attribute.isJust())
        result->setValue("attribute", ValueConversions<WTF::String>::serialize(m_attribute.fromJust()));
    if (m_attributeValue.isJust())
        result->setValue("attributeValue", ValueConversions<protocol::Accessibility::AXValue>::serialize(m_attributeValue.fromJust()));
    if (m_superseded.isJust())
        result->setValue("superseded", ValueConversions<bool>::serialize(m_superseded.fromJust()));
    if (m_nativeSource.isJust())
        result->setValue("nativeSource", ValueConversions<WTF::String>::serialize(m_nativeSource.fromJust()));
    if (m_nativeSourceValue.isJust())
        result->setValue("nativeSourceValue", ValueConversions<protocol::Accessibility::AXValue>::serialize(m_nativeSourceValue.fromJust()));
    if (m_invalid.isJust())
        result->setValue("invalid", ValueConversions<bool>::serialize(m_invalid.fromJust()));
    if (m_invalidReason.isJust())
        result->setValue("invalidReason", ValueConversions<WTF::String>::serialize(m_invalidReason.fromJust()));
    return result;
}

std::unique_ptr<AXValueSource> AXValueSource::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<AXRelatedNode> AXRelatedNode::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AXRelatedNode> result(new AXRelatedNode());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* backendNodeIdValue = object->get("backendNodeId");
    errors->setName("backendNodeId");
    result->m_backendNodeId = ValueConversions<int>::parse(backendNodeIdValue, errors);
    protocol::Value* idrefValue = object->get("idref");
    if (idrefValue) {
        errors->setName("idref");
        result->m_idref = ValueConversions<WTF::String>::parse(idrefValue, errors);
    }
    protocol::Value* textValue = object->get("text");
    if (textValue) {
        errors->setName("text");
        result->m_text = ValueConversions<WTF::String>::parse(textValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AXRelatedNode::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("backendNodeId", ValueConversions<int>::serialize(m_backendNodeId));
    if (m_idref.isJust())
        result->setValue("idref", ValueConversions<WTF::String>::serialize(m_idref.fromJust()));
    if (m_text.isJust())
        result->setValue("text", ValueConversions<WTF::String>::serialize(m_text.fromJust()));
    return result;
}

std::unique_ptr<AXRelatedNode> AXRelatedNode::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<AXProperty> AXProperty::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AXProperty> result(new AXProperty());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<WTF::String>::parse(nameValue, errors);
    protocol::Value* valueValue = object->get("value");
    errors->setName("value");
    result->m_value = ValueConversions<protocol::Accessibility::AXValue>::parse(valueValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AXProperty::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<WTF::String>::serialize(m_name));
    result->setValue("value", ValueConversions<protocol::Accessibility::AXValue>::serialize(m_value.get()));
    return result;
}

std::unique_ptr<AXProperty> AXProperty::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<AXValue> AXValue::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AXValue> result(new AXValue());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    protocol::Value* valueValue = object->get("value");
    if (valueValue) {
        errors->setName("value");
        result->m_value = ValueConversions<protocol::Value>::parse(valueValue, errors);
    }
    protocol::Value* relatedNodesValue = object->get("relatedNodes");
    if (relatedNodesValue) {
        errors->setName("relatedNodes");
        result->m_relatedNodes = ValueConversions<protocol::Array<protocol::Accessibility::AXRelatedNode>>::parse(relatedNodesValue, errors);
    }
    protocol::Value* sourcesValue = object->get("sources");
    if (sourcesValue) {
        errors->setName("sources");
        result->m_sources = ValueConversions<protocol::Array<protocol::Accessibility::AXValueSource>>::parse(sourcesValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AXValue::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    if (m_value.isJust())
        result->setValue("value", ValueConversions<protocol::Value>::serialize(m_value.fromJust()));
    if (m_relatedNodes.isJust())
        result->setValue("relatedNodes", ValueConversions<protocol::Array<protocol::Accessibility::AXRelatedNode>>::serialize(m_relatedNodes.fromJust()));
    if (m_sources.isJust())
        result->setValue("sources", ValueConversions<protocol::Array<protocol::Accessibility::AXValueSource>>::serialize(m_sources.fromJust()));
    return result;
}

std::unique_ptr<AXValue> AXValue::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

namespace AXGlobalStatesEnum {
const char* Disabled = "disabled";
const char* Hidden = "hidden";
const char* HiddenRoot = "hiddenRoot";
const char* Invalid = "invalid";
} // namespace AXGlobalStatesEnum

namespace AXLiveRegionAttributesEnum {
const char* Live = "live";
const char* Atomic = "atomic";
const char* Relevant = "relevant";
const char* Busy = "busy";
const char* Root = "root";
} // namespace AXLiveRegionAttributesEnum

namespace AXWidgetAttributesEnum {
const char* Autocomplete = "autocomplete";
const char* Haspopup = "haspopup";
const char* Level = "level";
const char* Multiselectable = "multiselectable";
const char* Orientation = "orientation";
const char* Multiline = "multiline";
const char* Readonly = "readonly";
const char* Required = "required";
const char* Valuemin = "valuemin";
const char* Valuemax = "valuemax";
const char* Valuetext = "valuetext";
} // namespace AXWidgetAttributesEnum

namespace AXWidgetStatesEnum {
const char* Checked = "checked";
const char* Expanded = "expanded";
const char* Pressed = "pressed";
const char* Selected = "selected";
} // namespace AXWidgetStatesEnum

namespace AXRelationshipAttributesEnum {
const char* Activedescendant = "activedescendant";
const char* Flowto = "flowto";
const char* Controls = "controls";
const char* Describedby = "describedby";
const char* Labelledby = "labelledby";
const char* Owns = "owns";
} // namespace AXRelationshipAttributesEnum

std::unique_ptr<AXNode> AXNode::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<AXNode> result(new AXNode());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nodeIdValue = object->get("nodeId");
    errors->setName("nodeId");
    result->m_nodeId = ValueConversions<WTF::String>::parse(nodeIdValue, errors);
    protocol::Value* ignoredValue = object->get("ignored");
    errors->setName("ignored");
    result->m_ignored = ValueConversions<bool>::parse(ignoredValue, errors);
    protocol::Value* ignoredReasonsValue = object->get("ignoredReasons");
    if (ignoredReasonsValue) {
        errors->setName("ignoredReasons");
        result->m_ignoredReasons = ValueConversions<protocol::Array<protocol::Accessibility::AXProperty>>::parse(ignoredReasonsValue, errors);
    }
    protocol::Value* roleValue = object->get("role");
    if (roleValue) {
        errors->setName("role");
        result->m_role = ValueConversions<protocol::Accessibility::AXValue>::parse(roleValue, errors);
    }
    protocol::Value* nameValue = object->get("name");
    if (nameValue) {
        errors->setName("name");
        result->m_name = ValueConversions<protocol::Accessibility::AXValue>::parse(nameValue, errors);
    }
    protocol::Value* descriptionValue = object->get("description");
    if (descriptionValue) {
        errors->setName("description");
        result->m_description = ValueConversions<protocol::Accessibility::AXValue>::parse(descriptionValue, errors);
    }
    protocol::Value* valueValue = object->get("value");
    if (valueValue) {
        errors->setName("value");
        result->m_value = ValueConversions<protocol::Accessibility::AXValue>::parse(valueValue, errors);
    }
    protocol::Value* propertiesValue = object->get("properties");
    if (propertiesValue) {
        errors->setName("properties");
        result->m_properties = ValueConversions<protocol::Array<protocol::Accessibility::AXProperty>>::parse(propertiesValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> AXNode::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("nodeId", ValueConversions<WTF::String>::serialize(m_nodeId));
    result->setValue("ignored", ValueConversions<bool>::serialize(m_ignored));
    if (m_ignoredReasons.isJust())
        result->setValue("ignoredReasons", ValueConversions<protocol::Array<protocol::Accessibility::AXProperty>>::serialize(m_ignoredReasons.fromJust()));
    if (m_role.isJust())
        result->setValue("role", ValueConversions<protocol::Accessibility::AXValue>::serialize(m_role.fromJust()));
    if (m_name.isJust())
        result->setValue("name", ValueConversions<protocol::Accessibility::AXValue>::serialize(m_name.fromJust()));
    if (m_description.isJust())
        result->setValue("description", ValueConversions<protocol::Accessibility::AXValue>::serialize(m_description.fromJust()));
    if (m_value.isJust())
        result->setValue("value", ValueConversions<protocol::Accessibility::AXValue>::serialize(m_value.fromJust()));
    if (m_properties.isJust())
        result->setValue("properties", ValueConversions<protocol::Array<protocol::Accessibility::AXProperty>>::serialize(m_properties.fromJust()));
    return result;
}

std::unique_ptr<AXNode> AXNode::clone() const
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
        m_dispatchMap["Accessibility.getAXNode"] = &DispatcherImpl::getAXNode;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void getAXNode(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


void DispatcherImpl::getAXNode(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* nodeIdValue = object ? object->get("nodeId") : nullptr;
    errors->setName("nodeId");
    int in_nodeId = ValueConversions<int>::parse(nodeIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    Maybe<protocol::Accessibility::AXNode> out_accessibilityNode;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->getAXNode(&error, in_nodeId, &out_accessibilityNode);
    if (!error.length()) {
        if (out_accessibilityNode.isJust())
            result->setValue("accessibilityNode", ValueConversions<protocol::Accessibility::AXNode>::serialize(out_accessibilityNode.fromJust()));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Accessibility", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Accessibility
} // namespace protocol
} // namespace blink
