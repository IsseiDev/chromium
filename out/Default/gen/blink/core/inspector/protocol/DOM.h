// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_DOM_h
#define protocol_DOM_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "core/inspector/protocol/Runtime.h"

namespace blink {
namespace protocol {
namespace DOM {

// ------------- Forward and enum declarations.
// Unique DOM node identifier.
using NodeId = int;
// Unique DOM node identifier used to reference a node that may not have been pushed to the front-end.
using BackendNodeId = int;
// Backend node with a friendly name.
class BackendNode;
// Pseudo element type.
using PseudoType = WTF::String;
// Shadow root type.
using ShadowRootType = WTF::String;
// DOM interaction is implemented in terms of mirror objects that represent the actual DOM nodes. DOMNode is a base node mirror type.
class Node;
// A structure holding an RGBA color.
class RGBA;
// Box model.
class BoxModel;
// CSS Shape Outside details.
class ShapeOutsideInfo;
// Rectangle.
class Rect;
// Configuration data for the highlighting of page elements.
class HighlightConfig;
// 
using InspectMode = WTF::String;

namespace PseudoTypeEnum {
CORE_EXPORT extern const char* FirstLine;
CORE_EXPORT extern const char* FirstLetter;
CORE_EXPORT extern const char* Before;
CORE_EXPORT extern const char* After;
CORE_EXPORT extern const char* Backdrop;
CORE_EXPORT extern const char* Selection;
CORE_EXPORT extern const char* FirstLineInherited;
CORE_EXPORT extern const char* Scrollbar;
CORE_EXPORT extern const char* ScrollbarThumb;
CORE_EXPORT extern const char* ScrollbarButton;
CORE_EXPORT extern const char* ScrollbarTrack;
CORE_EXPORT extern const char* ScrollbarTrackPiece;
CORE_EXPORT extern const char* ScrollbarCorner;
CORE_EXPORT extern const char* Resizer;
CORE_EXPORT extern const char* InputListButton;
} // namespace PseudoTypeEnum

namespace ShadowRootTypeEnum {
CORE_EXPORT extern const char* UserAgent;
CORE_EXPORT extern const char* Open;
CORE_EXPORT extern const char* Closed;
} // namespace ShadowRootTypeEnum

namespace InspectModeEnum {
CORE_EXPORT extern const char* SearchForNode;
CORE_EXPORT extern const char* SearchForUAShadowDOM;
CORE_EXPORT extern const char* ShowLayoutEditor;
CORE_EXPORT extern const char* None;
} // namespace InspectModeEnum

// ------------- Type and builder declarations.

// Backend node with a friendly name.
class CORE_EXPORT BackendNode {
    PROTOCOL_DISALLOW_COPY(BackendNode);
public:
    static std::unique_ptr<BackendNode> parse(protocol::Value* value, ErrorSupport* errors);

    ~BackendNode() { }

    int getNodeType() { return m_nodeType; }
    void setNodeType(int value) { m_nodeType = value; }

    WTF::String getNodeName() { return m_nodeName; }
    void setNodeName(const WTF::String& value) { m_nodeName = value; }

    int getBackendNodeId() { return m_backendNodeId; }
    void setBackendNodeId(int value) { m_backendNodeId = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<BackendNode> clone() const;

    template<int STATE>
    class BackendNodeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          NodeTypeSet = 1 << 1,
          NodeNameSet = 1 << 2,
          BackendNodeIdSet = 1 << 3,
            AllFieldsSet = (NodeTypeSet | NodeNameSet | BackendNodeIdSet | 0)};


        BackendNodeBuilder<STATE | NodeTypeSet>& setNodeType(int value)
        {
            static_assert(!(STATE & NodeTypeSet), "property nodeType should not be set yet");
            m_result->setNodeType(value);
            return castState<NodeTypeSet>();
        }

        BackendNodeBuilder<STATE | NodeNameSet>& setNodeName(const WTF::String& value)
        {
            static_assert(!(STATE & NodeNameSet), "property nodeName should not be set yet");
            m_result->setNodeName(value);
            return castState<NodeNameSet>();
        }

        BackendNodeBuilder<STATE | BackendNodeIdSet>& setBackendNodeId(int value)
        {
            static_assert(!(STATE & BackendNodeIdSet), "property backendNodeId should not be set yet");
            m_result->setBackendNodeId(value);
            return castState<BackendNodeIdSet>();
        }

        std::unique_ptr<BackendNode> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class BackendNode;
        BackendNodeBuilder() : m_result(new BackendNode()) { }

        template<int STEP> BackendNodeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<BackendNodeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOM::BackendNode> m_result;
    };

    static BackendNodeBuilder<0> create()
    {
        return BackendNodeBuilder<0>();
    }

private:
    BackendNode()
    {
          m_nodeType = 0;
          m_backendNodeId = 0;
    }

    int m_nodeType;
    WTF::String m_nodeName;
    int m_backendNodeId;
};


// DOM interaction is implemented in terms of mirror objects that represent the actual DOM nodes. DOMNode is a base node mirror type.
class CORE_EXPORT Node {
    PROTOCOL_DISALLOW_COPY(Node);
public:
    static std::unique_ptr<Node> parse(protocol::Value* value, ErrorSupport* errors);

    ~Node() { }

    int getNodeId() { return m_nodeId; }
    void setNodeId(int value) { m_nodeId = value; }

    int getNodeType() { return m_nodeType; }
    void setNodeType(int value) { m_nodeType = value; }

    WTF::String getNodeName() { return m_nodeName; }
    void setNodeName(const WTF::String& value) { m_nodeName = value; }

    WTF::String getLocalName() { return m_localName; }
    void setLocalName(const WTF::String& value) { m_localName = value; }

    WTF::String getNodeValue() { return m_nodeValue; }
    void setNodeValue(const WTF::String& value) { m_nodeValue = value; }

    bool hasChildNodeCount() { return m_childNodeCount.isJust(); }
    int getChildNodeCount(int defaultValue) { return m_childNodeCount.isJust() ? m_childNodeCount.fromJust() : defaultValue; }
    void setChildNodeCount(int value) { m_childNodeCount = value; }

    bool hasChildren() { return m_children.isJust(); }
    protocol::Array<protocol::DOM::Node>* getChildren(protocol::Array<protocol::DOM::Node>* defaultValue) { return m_children.isJust() ? m_children.fromJust() : defaultValue; }
    void setChildren(std::unique_ptr<protocol::Array<protocol::DOM::Node>> value) { m_children = std::move(value); }

    bool hasAttributes() { return m_attributes.isJust(); }
    protocol::Array<WTF::String>* getAttributes(protocol::Array<WTF::String>* defaultValue) { return m_attributes.isJust() ? m_attributes.fromJust() : defaultValue; }
    void setAttributes(std::unique_ptr<protocol::Array<WTF::String>> value) { m_attributes = std::move(value); }

    bool hasDocumentURL() { return m_documentURL.isJust(); }
    WTF::String getDocumentURL(const WTF::String& defaultValue) { return m_documentURL.isJust() ? m_documentURL.fromJust() : defaultValue; }
    void setDocumentURL(const WTF::String& value) { m_documentURL = value; }

    bool hasBaseURL() { return m_baseURL.isJust(); }
    WTF::String getBaseURL(const WTF::String& defaultValue) { return m_baseURL.isJust() ? m_baseURL.fromJust() : defaultValue; }
    void setBaseURL(const WTF::String& value) { m_baseURL = value; }

    bool hasPublicId() { return m_publicId.isJust(); }
    WTF::String getPublicId(const WTF::String& defaultValue) { return m_publicId.isJust() ? m_publicId.fromJust() : defaultValue; }
    void setPublicId(const WTF::String& value) { m_publicId = value; }

    bool hasSystemId() { return m_systemId.isJust(); }
    WTF::String getSystemId(const WTF::String& defaultValue) { return m_systemId.isJust() ? m_systemId.fromJust() : defaultValue; }
    void setSystemId(const WTF::String& value) { m_systemId = value; }

    bool hasInternalSubset() { return m_internalSubset.isJust(); }
    WTF::String getInternalSubset(const WTF::String& defaultValue) { return m_internalSubset.isJust() ? m_internalSubset.fromJust() : defaultValue; }
    void setInternalSubset(const WTF::String& value) { m_internalSubset = value; }

    bool hasXmlVersion() { return m_xmlVersion.isJust(); }
    WTF::String getXmlVersion(const WTF::String& defaultValue) { return m_xmlVersion.isJust() ? m_xmlVersion.fromJust() : defaultValue; }
    void setXmlVersion(const WTF::String& value) { m_xmlVersion = value; }

    bool hasName() { return m_name.isJust(); }
    WTF::String getName(const WTF::String& defaultValue) { return m_name.isJust() ? m_name.fromJust() : defaultValue; }
    void setName(const WTF::String& value) { m_name = value; }

    bool hasValue() { return m_value.isJust(); }
    WTF::String getValue(const WTF::String& defaultValue) { return m_value.isJust() ? m_value.fromJust() : defaultValue; }
    void setValue(const WTF::String& value) { m_value = value; }

    bool hasPseudoType() { return m_pseudoType.isJust(); }
    WTF::String getPseudoType(const WTF::String& defaultValue) { return m_pseudoType.isJust() ? m_pseudoType.fromJust() : defaultValue; }
    void setPseudoType(const WTF::String& value) { m_pseudoType = value; }

    bool hasShadowRootType() { return m_shadowRootType.isJust(); }
    WTF::String getShadowRootType(const WTF::String& defaultValue) { return m_shadowRootType.isJust() ? m_shadowRootType.fromJust() : defaultValue; }
    void setShadowRootType(const WTF::String& value) { m_shadowRootType = value; }

    bool hasFrameId() { return m_frameId.isJust(); }
    WTF::String getFrameId(const WTF::String& defaultValue) { return m_frameId.isJust() ? m_frameId.fromJust() : defaultValue; }
    void setFrameId(const WTF::String& value) { m_frameId = value; }

    bool hasContentDocument() { return m_contentDocument.isJust(); }
    protocol::DOM::Node* getContentDocument(protocol::DOM::Node* defaultValue) { return m_contentDocument.isJust() ? m_contentDocument.fromJust() : defaultValue; }
    void setContentDocument(std::unique_ptr<protocol::DOM::Node> value) { m_contentDocument = std::move(value); }

    bool hasShadowRoots() { return m_shadowRoots.isJust(); }
    protocol::Array<protocol::DOM::Node>* getShadowRoots(protocol::Array<protocol::DOM::Node>* defaultValue) { return m_shadowRoots.isJust() ? m_shadowRoots.fromJust() : defaultValue; }
    void setShadowRoots(std::unique_ptr<protocol::Array<protocol::DOM::Node>> value) { m_shadowRoots = std::move(value); }

    bool hasTemplateContent() { return m_templateContent.isJust(); }
    protocol::DOM::Node* getTemplateContent(protocol::DOM::Node* defaultValue) { return m_templateContent.isJust() ? m_templateContent.fromJust() : defaultValue; }
    void setTemplateContent(std::unique_ptr<protocol::DOM::Node> value) { m_templateContent = std::move(value); }

    bool hasPseudoElements() { return m_pseudoElements.isJust(); }
    protocol::Array<protocol::DOM::Node>* getPseudoElements(protocol::Array<protocol::DOM::Node>* defaultValue) { return m_pseudoElements.isJust() ? m_pseudoElements.fromJust() : defaultValue; }
    void setPseudoElements(std::unique_ptr<protocol::Array<protocol::DOM::Node>> value) { m_pseudoElements = std::move(value); }

    bool hasImportedDocument() { return m_importedDocument.isJust(); }
    protocol::DOM::Node* getImportedDocument(protocol::DOM::Node* defaultValue) { return m_importedDocument.isJust() ? m_importedDocument.fromJust() : defaultValue; }
    void setImportedDocument(std::unique_ptr<protocol::DOM::Node> value) { m_importedDocument = std::move(value); }

    bool hasDistributedNodes() { return m_distributedNodes.isJust(); }
    protocol::Array<protocol::DOM::BackendNode>* getDistributedNodes(protocol::Array<protocol::DOM::BackendNode>* defaultValue) { return m_distributedNodes.isJust() ? m_distributedNodes.fromJust() : defaultValue; }
    void setDistributedNodes(std::unique_ptr<protocol::Array<protocol::DOM::BackendNode>> value) { m_distributedNodes = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<Node> clone() const;

    template<int STATE>
    class NodeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          NodeIdSet = 1 << 1,
          NodeTypeSet = 1 << 2,
          NodeNameSet = 1 << 3,
          LocalNameSet = 1 << 4,
          NodeValueSet = 1 << 5,
            AllFieldsSet = (NodeIdSet | NodeTypeSet | NodeNameSet | LocalNameSet | NodeValueSet | 0)};


        NodeBuilder<STATE | NodeIdSet>& setNodeId(int value)
        {
            static_assert(!(STATE & NodeIdSet), "property nodeId should not be set yet");
            m_result->setNodeId(value);
            return castState<NodeIdSet>();
        }

        NodeBuilder<STATE | NodeTypeSet>& setNodeType(int value)
        {
            static_assert(!(STATE & NodeTypeSet), "property nodeType should not be set yet");
            m_result->setNodeType(value);
            return castState<NodeTypeSet>();
        }

        NodeBuilder<STATE | NodeNameSet>& setNodeName(const WTF::String& value)
        {
            static_assert(!(STATE & NodeNameSet), "property nodeName should not be set yet");
            m_result->setNodeName(value);
            return castState<NodeNameSet>();
        }

        NodeBuilder<STATE | LocalNameSet>& setLocalName(const WTF::String& value)
        {
            static_assert(!(STATE & LocalNameSet), "property localName should not be set yet");
            m_result->setLocalName(value);
            return castState<LocalNameSet>();
        }

        NodeBuilder<STATE | NodeValueSet>& setNodeValue(const WTF::String& value)
        {
            static_assert(!(STATE & NodeValueSet), "property nodeValue should not be set yet");
            m_result->setNodeValue(value);
            return castState<NodeValueSet>();
        }

        NodeBuilder<STATE>& setChildNodeCount(int value)
        {
            m_result->setChildNodeCount(value);
            return *this;
        }

        NodeBuilder<STATE>& setChildren(std::unique_ptr<protocol::Array<protocol::DOM::Node>> value)
        {
            m_result->setChildren(std::move(value));
            return *this;
        }

        NodeBuilder<STATE>& setAttributes(std::unique_ptr<protocol::Array<WTF::String>> value)
        {
            m_result->setAttributes(std::move(value));
            return *this;
        }

        NodeBuilder<STATE>& setDocumentURL(const WTF::String& value)
        {
            m_result->setDocumentURL(value);
            return *this;
        }

        NodeBuilder<STATE>& setBaseURL(const WTF::String& value)
        {
            m_result->setBaseURL(value);
            return *this;
        }

        NodeBuilder<STATE>& setPublicId(const WTF::String& value)
        {
            m_result->setPublicId(value);
            return *this;
        }

        NodeBuilder<STATE>& setSystemId(const WTF::String& value)
        {
            m_result->setSystemId(value);
            return *this;
        }

        NodeBuilder<STATE>& setInternalSubset(const WTF::String& value)
        {
            m_result->setInternalSubset(value);
            return *this;
        }

        NodeBuilder<STATE>& setXmlVersion(const WTF::String& value)
        {
            m_result->setXmlVersion(value);
            return *this;
        }

        NodeBuilder<STATE>& setName(const WTF::String& value)
        {
            m_result->setName(value);
            return *this;
        }

        NodeBuilder<STATE>& setValue(const WTF::String& value)
        {
            m_result->setValue(value);
            return *this;
        }

        NodeBuilder<STATE>& setPseudoType(const WTF::String& value)
        {
            m_result->setPseudoType(value);
            return *this;
        }

        NodeBuilder<STATE>& setShadowRootType(const WTF::String& value)
        {
            m_result->setShadowRootType(value);
            return *this;
        }

        NodeBuilder<STATE>& setFrameId(const WTF::String& value)
        {
            m_result->setFrameId(value);
            return *this;
        }

        NodeBuilder<STATE>& setContentDocument(std::unique_ptr<protocol::DOM::Node> value)
        {
            m_result->setContentDocument(std::move(value));
            return *this;
        }

        NodeBuilder<STATE>& setShadowRoots(std::unique_ptr<protocol::Array<protocol::DOM::Node>> value)
        {
            m_result->setShadowRoots(std::move(value));
            return *this;
        }

        NodeBuilder<STATE>& setTemplateContent(std::unique_ptr<protocol::DOM::Node> value)
        {
            m_result->setTemplateContent(std::move(value));
            return *this;
        }

        NodeBuilder<STATE>& setPseudoElements(std::unique_ptr<protocol::Array<protocol::DOM::Node>> value)
        {
            m_result->setPseudoElements(std::move(value));
            return *this;
        }

        NodeBuilder<STATE>& setImportedDocument(std::unique_ptr<protocol::DOM::Node> value)
        {
            m_result->setImportedDocument(std::move(value));
            return *this;
        }

        NodeBuilder<STATE>& setDistributedNodes(std::unique_ptr<protocol::Array<protocol::DOM::BackendNode>> value)
        {
            m_result->setDistributedNodes(std::move(value));
            return *this;
        }

        std::unique_ptr<Node> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Node;
        NodeBuilder() : m_result(new Node()) { }

        template<int STEP> NodeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<NodeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOM::Node> m_result;
    };

    static NodeBuilder<0> create()
    {
        return NodeBuilder<0>();
    }

private:
    Node()
    {
          m_nodeId = 0;
          m_nodeType = 0;
    }

    int m_nodeId;
    int m_nodeType;
    WTF::String m_nodeName;
    WTF::String m_localName;
    WTF::String m_nodeValue;
    Maybe<int> m_childNodeCount;
    Maybe<protocol::Array<protocol::DOM::Node>> m_children;
    Maybe<protocol::Array<WTF::String>> m_attributes;
    Maybe<WTF::String> m_documentURL;
    Maybe<WTF::String> m_baseURL;
    Maybe<WTF::String> m_publicId;
    Maybe<WTF::String> m_systemId;
    Maybe<WTF::String> m_internalSubset;
    Maybe<WTF::String> m_xmlVersion;
    Maybe<WTF::String> m_name;
    Maybe<WTF::String> m_value;
    Maybe<WTF::String> m_pseudoType;
    Maybe<WTF::String> m_shadowRootType;
    Maybe<WTF::String> m_frameId;
    Maybe<protocol::DOM::Node> m_contentDocument;
    Maybe<protocol::Array<protocol::DOM::Node>> m_shadowRoots;
    Maybe<protocol::DOM::Node> m_templateContent;
    Maybe<protocol::Array<protocol::DOM::Node>> m_pseudoElements;
    Maybe<protocol::DOM::Node> m_importedDocument;
    Maybe<protocol::Array<protocol::DOM::BackendNode>> m_distributedNodes;
};


// A structure holding an RGBA color.
class CORE_EXPORT RGBA {
    PROTOCOL_DISALLOW_COPY(RGBA);
public:
    static std::unique_ptr<RGBA> parse(protocol::Value* value, ErrorSupport* errors);

    ~RGBA() { }

    int getR() { return m_r; }
    void setR(int value) { m_r = value; }

    int getG() { return m_g; }
    void setG(int value) { m_g = value; }

    int getB() { return m_b; }
    void setB(int value) { m_b = value; }

    bool hasA() { return m_a.isJust(); }
    double getA(double defaultValue) { return m_a.isJust() ? m_a.fromJust() : defaultValue; }
    void setA(double value) { m_a = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<RGBA> clone() const;

    template<int STATE>
    class RGBABuilder {
    public:
        enum {
            NoFieldsSet = 0,
          RSet = 1 << 1,
          GSet = 1 << 2,
          BSet = 1 << 3,
            AllFieldsSet = (RSet | GSet | BSet | 0)};


        RGBABuilder<STATE | RSet>& setR(int value)
        {
            static_assert(!(STATE & RSet), "property r should not be set yet");
            m_result->setR(value);
            return castState<RSet>();
        }

        RGBABuilder<STATE | GSet>& setG(int value)
        {
            static_assert(!(STATE & GSet), "property g should not be set yet");
            m_result->setG(value);
            return castState<GSet>();
        }

        RGBABuilder<STATE | BSet>& setB(int value)
        {
            static_assert(!(STATE & BSet), "property b should not be set yet");
            m_result->setB(value);
            return castState<BSet>();
        }

        RGBABuilder<STATE>& setA(double value)
        {
            m_result->setA(value);
            return *this;
        }

        std::unique_ptr<RGBA> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class RGBA;
        RGBABuilder() : m_result(new RGBA()) { }

        template<int STEP> RGBABuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<RGBABuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOM::RGBA> m_result;
    };

    static RGBABuilder<0> create()
    {
        return RGBABuilder<0>();
    }

private:
    RGBA()
    {
          m_r = 0;
          m_g = 0;
          m_b = 0;
    }

    int m_r;
    int m_g;
    int m_b;
    Maybe<double> m_a;
};


// Box model.
class CORE_EXPORT BoxModel {
    PROTOCOL_DISALLOW_COPY(BoxModel);
public:
    static std::unique_ptr<BoxModel> parse(protocol::Value* value, ErrorSupport* errors);

    ~BoxModel() { }

    protocol::Array<double>* getContent() { return m_content.get(); }
    void setContent(std::unique_ptr<protocol::Array<double>> value) { m_content = std::move(value); }

    protocol::Array<double>* getPadding() { return m_padding.get(); }
    void setPadding(std::unique_ptr<protocol::Array<double>> value) { m_padding = std::move(value); }

    protocol::Array<double>* getBorder() { return m_border.get(); }
    void setBorder(std::unique_ptr<protocol::Array<double>> value) { m_border = std::move(value); }

    protocol::Array<double>* getMargin() { return m_margin.get(); }
    void setMargin(std::unique_ptr<protocol::Array<double>> value) { m_margin = std::move(value); }

    int getWidth() { return m_width; }
    void setWidth(int value) { m_width = value; }

    int getHeight() { return m_height; }
    void setHeight(int value) { m_height = value; }

    bool hasShapeOutside() { return m_shapeOutside.isJust(); }
    protocol::DOM::ShapeOutsideInfo* getShapeOutside(protocol::DOM::ShapeOutsideInfo* defaultValue) { return m_shapeOutside.isJust() ? m_shapeOutside.fromJust() : defaultValue; }
    void setShapeOutside(std::unique_ptr<protocol::DOM::ShapeOutsideInfo> value) { m_shapeOutside = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<BoxModel> clone() const;

    template<int STATE>
    class BoxModelBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          ContentSet = 1 << 1,
          PaddingSet = 1 << 2,
          BorderSet = 1 << 3,
          MarginSet = 1 << 4,
          WidthSet = 1 << 5,
          HeightSet = 1 << 6,
            AllFieldsSet = (ContentSet | PaddingSet | BorderSet | MarginSet | WidthSet | HeightSet | 0)};


        BoxModelBuilder<STATE | ContentSet>& setContent(std::unique_ptr<protocol::Array<double>> value)
        {
            static_assert(!(STATE & ContentSet), "property content should not be set yet");
            m_result->setContent(std::move(value));
            return castState<ContentSet>();
        }

        BoxModelBuilder<STATE | PaddingSet>& setPadding(std::unique_ptr<protocol::Array<double>> value)
        {
            static_assert(!(STATE & PaddingSet), "property padding should not be set yet");
            m_result->setPadding(std::move(value));
            return castState<PaddingSet>();
        }

        BoxModelBuilder<STATE | BorderSet>& setBorder(std::unique_ptr<protocol::Array<double>> value)
        {
            static_assert(!(STATE & BorderSet), "property border should not be set yet");
            m_result->setBorder(std::move(value));
            return castState<BorderSet>();
        }

        BoxModelBuilder<STATE | MarginSet>& setMargin(std::unique_ptr<protocol::Array<double>> value)
        {
            static_assert(!(STATE & MarginSet), "property margin should not be set yet");
            m_result->setMargin(std::move(value));
            return castState<MarginSet>();
        }

        BoxModelBuilder<STATE | WidthSet>& setWidth(int value)
        {
            static_assert(!(STATE & WidthSet), "property width should not be set yet");
            m_result->setWidth(value);
            return castState<WidthSet>();
        }

        BoxModelBuilder<STATE | HeightSet>& setHeight(int value)
        {
            static_assert(!(STATE & HeightSet), "property height should not be set yet");
            m_result->setHeight(value);
            return castState<HeightSet>();
        }

        BoxModelBuilder<STATE>& setShapeOutside(std::unique_ptr<protocol::DOM::ShapeOutsideInfo> value)
        {
            m_result->setShapeOutside(std::move(value));
            return *this;
        }

        std::unique_ptr<BoxModel> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class BoxModel;
        BoxModelBuilder() : m_result(new BoxModel()) { }

        template<int STEP> BoxModelBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<BoxModelBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOM::BoxModel> m_result;
    };

    static BoxModelBuilder<0> create()
    {
        return BoxModelBuilder<0>();
    }

private:
    BoxModel()
    {
          m_width = 0;
          m_height = 0;
    }

    std::unique_ptr<protocol::Array<double>> m_content;
    std::unique_ptr<protocol::Array<double>> m_padding;
    std::unique_ptr<protocol::Array<double>> m_border;
    std::unique_ptr<protocol::Array<double>> m_margin;
    int m_width;
    int m_height;
    Maybe<protocol::DOM::ShapeOutsideInfo> m_shapeOutside;
};


// CSS Shape Outside details.
class CORE_EXPORT ShapeOutsideInfo {
    PROTOCOL_DISALLOW_COPY(ShapeOutsideInfo);
public:
    static std::unique_ptr<ShapeOutsideInfo> parse(protocol::Value* value, ErrorSupport* errors);

    ~ShapeOutsideInfo() { }

    protocol::Array<double>* getBounds() { return m_bounds.get(); }
    void setBounds(std::unique_ptr<protocol::Array<double>> value) { m_bounds = std::move(value); }

    protocol::Array<protocol::Value>* getShape() { return m_shape.get(); }
    void setShape(std::unique_ptr<protocol::Array<protocol::Value>> value) { m_shape = std::move(value); }

    protocol::Array<protocol::Value>* getMarginShape() { return m_marginShape.get(); }
    void setMarginShape(std::unique_ptr<protocol::Array<protocol::Value>> value) { m_marginShape = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<ShapeOutsideInfo> clone() const;

    template<int STATE>
    class ShapeOutsideInfoBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          BoundsSet = 1 << 1,
          ShapeSet = 1 << 2,
          MarginShapeSet = 1 << 3,
            AllFieldsSet = (BoundsSet | ShapeSet | MarginShapeSet | 0)};


        ShapeOutsideInfoBuilder<STATE | BoundsSet>& setBounds(std::unique_ptr<protocol::Array<double>> value)
        {
            static_assert(!(STATE & BoundsSet), "property bounds should not be set yet");
            m_result->setBounds(std::move(value));
            return castState<BoundsSet>();
        }

        ShapeOutsideInfoBuilder<STATE | ShapeSet>& setShape(std::unique_ptr<protocol::Array<protocol::Value>> value)
        {
            static_assert(!(STATE & ShapeSet), "property shape should not be set yet");
            m_result->setShape(std::move(value));
            return castState<ShapeSet>();
        }

        ShapeOutsideInfoBuilder<STATE | MarginShapeSet>& setMarginShape(std::unique_ptr<protocol::Array<protocol::Value>> value)
        {
            static_assert(!(STATE & MarginShapeSet), "property marginShape should not be set yet");
            m_result->setMarginShape(std::move(value));
            return castState<MarginShapeSet>();
        }

        std::unique_ptr<ShapeOutsideInfo> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ShapeOutsideInfo;
        ShapeOutsideInfoBuilder() : m_result(new ShapeOutsideInfo()) { }

        template<int STEP> ShapeOutsideInfoBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ShapeOutsideInfoBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOM::ShapeOutsideInfo> m_result;
    };

    static ShapeOutsideInfoBuilder<0> create()
    {
        return ShapeOutsideInfoBuilder<0>();
    }

private:
    ShapeOutsideInfo()
    {
    }

    std::unique_ptr<protocol::Array<double>> m_bounds;
    std::unique_ptr<protocol::Array<protocol::Value>> m_shape;
    std::unique_ptr<protocol::Array<protocol::Value>> m_marginShape;
};


// Rectangle.
class CORE_EXPORT Rect {
    PROTOCOL_DISALLOW_COPY(Rect);
public:
    static std::unique_ptr<Rect> parse(protocol::Value* value, ErrorSupport* errors);

    ~Rect() { }

    double getX() { return m_x; }
    void setX(double value) { m_x = value; }

    double getY() { return m_y; }
    void setY(double value) { m_y = value; }

    double getWidth() { return m_width; }
    void setWidth(double value) { m_width = value; }

    double getHeight() { return m_height; }
    void setHeight(double value) { m_height = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<Rect> clone() const;

    template<int STATE>
    class RectBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          XSet = 1 << 1,
          YSet = 1 << 2,
          WidthSet = 1 << 3,
          HeightSet = 1 << 4,
            AllFieldsSet = (XSet | YSet | WidthSet | HeightSet | 0)};


        RectBuilder<STATE | XSet>& setX(double value)
        {
            static_assert(!(STATE & XSet), "property x should not be set yet");
            m_result->setX(value);
            return castState<XSet>();
        }

        RectBuilder<STATE | YSet>& setY(double value)
        {
            static_assert(!(STATE & YSet), "property y should not be set yet");
            m_result->setY(value);
            return castState<YSet>();
        }

        RectBuilder<STATE | WidthSet>& setWidth(double value)
        {
            static_assert(!(STATE & WidthSet), "property width should not be set yet");
            m_result->setWidth(value);
            return castState<WidthSet>();
        }

        RectBuilder<STATE | HeightSet>& setHeight(double value)
        {
            static_assert(!(STATE & HeightSet), "property height should not be set yet");
            m_result->setHeight(value);
            return castState<HeightSet>();
        }

        std::unique_ptr<Rect> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Rect;
        RectBuilder() : m_result(new Rect()) { }

        template<int STEP> RectBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<RectBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOM::Rect> m_result;
    };

    static RectBuilder<0> create()
    {
        return RectBuilder<0>();
    }

private:
    Rect()
    {
          m_x = 0;
          m_y = 0;
          m_width = 0;
          m_height = 0;
    }

    double m_x;
    double m_y;
    double m_width;
    double m_height;
};


// Configuration data for the highlighting of page elements.
class CORE_EXPORT HighlightConfig {
    PROTOCOL_DISALLOW_COPY(HighlightConfig);
public:
    static std::unique_ptr<HighlightConfig> parse(protocol::Value* value, ErrorSupport* errors);

    ~HighlightConfig() { }

    bool hasShowInfo() { return m_showInfo.isJust(); }
    bool getShowInfo(bool defaultValue) { return m_showInfo.isJust() ? m_showInfo.fromJust() : defaultValue; }
    void setShowInfo(bool value) { m_showInfo = value; }

    bool hasShowRulers() { return m_showRulers.isJust(); }
    bool getShowRulers(bool defaultValue) { return m_showRulers.isJust() ? m_showRulers.fromJust() : defaultValue; }
    void setShowRulers(bool value) { m_showRulers = value; }

    bool hasShowExtensionLines() { return m_showExtensionLines.isJust(); }
    bool getShowExtensionLines(bool defaultValue) { return m_showExtensionLines.isJust() ? m_showExtensionLines.fromJust() : defaultValue; }
    void setShowExtensionLines(bool value) { m_showExtensionLines = value; }

    bool hasDisplayAsMaterial() { return m_displayAsMaterial.isJust(); }
    bool getDisplayAsMaterial(bool defaultValue) { return m_displayAsMaterial.isJust() ? m_displayAsMaterial.fromJust() : defaultValue; }
    void setDisplayAsMaterial(bool value) { m_displayAsMaterial = value; }

    bool hasContentColor() { return m_contentColor.isJust(); }
    protocol::DOM::RGBA* getContentColor(protocol::DOM::RGBA* defaultValue) { return m_contentColor.isJust() ? m_contentColor.fromJust() : defaultValue; }
    void setContentColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_contentColor = std::move(value); }

    bool hasPaddingColor() { return m_paddingColor.isJust(); }
    protocol::DOM::RGBA* getPaddingColor(protocol::DOM::RGBA* defaultValue) { return m_paddingColor.isJust() ? m_paddingColor.fromJust() : defaultValue; }
    void setPaddingColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_paddingColor = std::move(value); }

    bool hasBorderColor() { return m_borderColor.isJust(); }
    protocol::DOM::RGBA* getBorderColor(protocol::DOM::RGBA* defaultValue) { return m_borderColor.isJust() ? m_borderColor.fromJust() : defaultValue; }
    void setBorderColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_borderColor = std::move(value); }

    bool hasMarginColor() { return m_marginColor.isJust(); }
    protocol::DOM::RGBA* getMarginColor(protocol::DOM::RGBA* defaultValue) { return m_marginColor.isJust() ? m_marginColor.fromJust() : defaultValue; }
    void setMarginColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_marginColor = std::move(value); }

    bool hasEventTargetColor() { return m_eventTargetColor.isJust(); }
    protocol::DOM::RGBA* getEventTargetColor(protocol::DOM::RGBA* defaultValue) { return m_eventTargetColor.isJust() ? m_eventTargetColor.fromJust() : defaultValue; }
    void setEventTargetColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_eventTargetColor = std::move(value); }

    bool hasShapeColor() { return m_shapeColor.isJust(); }
    protocol::DOM::RGBA* getShapeColor(protocol::DOM::RGBA* defaultValue) { return m_shapeColor.isJust() ? m_shapeColor.fromJust() : defaultValue; }
    void setShapeColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_shapeColor = std::move(value); }

    bool hasShapeMarginColor() { return m_shapeMarginColor.isJust(); }
    protocol::DOM::RGBA* getShapeMarginColor(protocol::DOM::RGBA* defaultValue) { return m_shapeMarginColor.isJust() ? m_shapeMarginColor.fromJust() : defaultValue; }
    void setShapeMarginColor(std::unique_ptr<protocol::DOM::RGBA> value) { m_shapeMarginColor = std::move(value); }

    bool hasSelectorList() { return m_selectorList.isJust(); }
    WTF::String getSelectorList(const WTF::String& defaultValue) { return m_selectorList.isJust() ? m_selectorList.fromJust() : defaultValue; }
    void setSelectorList(const WTF::String& value) { m_selectorList = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<HighlightConfig> clone() const;

    template<int STATE>
    class HighlightConfigBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            AllFieldsSet = (0)};


        HighlightConfigBuilder<STATE>& setShowInfo(bool value)
        {
            m_result->setShowInfo(value);
            return *this;
        }

        HighlightConfigBuilder<STATE>& setShowRulers(bool value)
        {
            m_result->setShowRulers(value);
            return *this;
        }

        HighlightConfigBuilder<STATE>& setShowExtensionLines(bool value)
        {
            m_result->setShowExtensionLines(value);
            return *this;
        }

        HighlightConfigBuilder<STATE>& setDisplayAsMaterial(bool value)
        {
            m_result->setDisplayAsMaterial(value);
            return *this;
        }

        HighlightConfigBuilder<STATE>& setContentColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->setContentColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& setPaddingColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->setPaddingColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& setBorderColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->setBorderColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& setMarginColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->setMarginColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& setEventTargetColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->setEventTargetColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& setShapeColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->setShapeColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& setShapeMarginColor(std::unique_ptr<protocol::DOM::RGBA> value)
        {
            m_result->setShapeMarginColor(std::move(value));
            return *this;
        }

        HighlightConfigBuilder<STATE>& setSelectorList(const WTF::String& value)
        {
            m_result->setSelectorList(value);
            return *this;
        }

        std::unique_ptr<HighlightConfig> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class HighlightConfig;
        HighlightConfigBuilder() : m_result(new HighlightConfig()) { }

        template<int STEP> HighlightConfigBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<HighlightConfigBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOM::HighlightConfig> m_result;
    };

    static HighlightConfigBuilder<0> create()
    {
        return HighlightConfigBuilder<0>();
    }

private:
    HighlightConfig()
    {
    }

    Maybe<bool> m_showInfo;
    Maybe<bool> m_showRulers;
    Maybe<bool> m_showExtensionLines;
    Maybe<bool> m_displayAsMaterial;
    Maybe<protocol::DOM::RGBA> m_contentColor;
    Maybe<protocol::DOM::RGBA> m_paddingColor;
    Maybe<protocol::DOM::RGBA> m_borderColor;
    Maybe<protocol::DOM::RGBA> m_marginColor;
    Maybe<protocol::DOM::RGBA> m_eventTargetColor;
    Maybe<protocol::DOM::RGBA> m_shapeColor;
    Maybe<protocol::DOM::RGBA> m_shapeMarginColor;
    Maybe<WTF::String> m_selectorList;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual void enable(ErrorString*) = 0;
    virtual void disable(ErrorString*) = 0;
    virtual void getDocument(ErrorString*, std::unique_ptr<protocol::DOM::Node>* out_root) = 0;
    virtual void requestChildNodes(ErrorString*, int in_nodeId, const Maybe<int>& in_depth) = 0;
    virtual void querySelector(ErrorString*, int in_nodeId, const WTF::String& in_selector, int* out_nodeId) = 0;
    virtual void querySelectorAll(ErrorString*, int in_nodeId, const WTF::String& in_selector, std::unique_ptr<protocol::Array<int>>* out_nodeIds) = 0;
    virtual void setNodeName(ErrorString*, int in_nodeId, const WTF::String& in_name, int* out_nodeId) = 0;
    virtual void setNodeValue(ErrorString*, int in_nodeId, const WTF::String& in_value) = 0;
    virtual void removeNode(ErrorString*, int in_nodeId) = 0;
    virtual void setAttributeValue(ErrorString*, int in_nodeId, const WTF::String& in_name, const WTF::String& in_value) = 0;
    virtual void setAttributesAsText(ErrorString*, int in_nodeId, const WTF::String& in_text, const Maybe<WTF::String>& in_name) = 0;
    virtual void removeAttribute(ErrorString*, int in_nodeId, const WTF::String& in_name) = 0;
    virtual void getOuterHTML(ErrorString*, int in_nodeId, WTF::String* out_outerHTML) = 0;
    virtual void setOuterHTML(ErrorString*, int in_nodeId, const WTF::String& in_outerHTML) = 0;
    virtual void performSearch(ErrorString*, const WTF::String& in_query, const Maybe<bool>& in_includeUserAgentShadowDOM, WTF::String* out_searchId, int* out_resultCount) = 0;
    virtual void getSearchResults(ErrorString*, const WTF::String& in_searchId, int in_fromIndex, int in_toIndex, std::unique_ptr<protocol::Array<int>>* out_nodeIds) = 0;
    virtual void discardSearchResults(ErrorString*, const WTF::String& in_searchId) = 0;
    virtual void requestNode(ErrorString*, const WTF::String& in_objectId, int* out_nodeId) = 0;
    virtual void setInspectMode(ErrorString*, const WTF::String& in_mode, const Maybe<protocol::DOM::HighlightConfig>& in_highlightConfig) = 0;
    virtual void highlightRect(ErrorString*, int in_x, int in_y, int in_width, int in_height, const Maybe<protocol::DOM::RGBA>& in_color, const Maybe<protocol::DOM::RGBA>& in_outlineColor) = 0;
    virtual void highlightQuad(ErrorString*, std::unique_ptr<protocol::Array<double>> in_quad, const Maybe<protocol::DOM::RGBA>& in_color, const Maybe<protocol::DOM::RGBA>& in_outlineColor) = 0;
    virtual void highlightNode(ErrorString*, std::unique_ptr<protocol::DOM::HighlightConfig> in_highlightConfig, const Maybe<int>& in_nodeId, const Maybe<int>& in_backendNodeId, const Maybe<WTF::String>& in_objectId) = 0;
    virtual void hideHighlight(ErrorString*) = 0;
    virtual void highlightFrame(ErrorString*, const WTF::String& in_frameId, const Maybe<protocol::DOM::RGBA>& in_contentColor, const Maybe<protocol::DOM::RGBA>& in_contentOutlineColor) = 0;
    virtual void pushNodeByPathToFrontend(ErrorString*, const WTF::String& in_path, int* out_nodeId) = 0;
    virtual void pushNodesByBackendIdsToFrontend(ErrorString*, std::unique_ptr<protocol::Array<int>> in_backendNodeIds, std::unique_ptr<protocol::Array<int>>* out_nodeIds) = 0;
    virtual void setInspectedNode(ErrorString*, int in_nodeId) = 0;
    virtual void resolveNode(ErrorString*, int in_nodeId, const Maybe<WTF::String>& in_objectGroup, std::unique_ptr<protocol::Runtime::API::RemoteObject>* out_object) = 0;
    virtual void getAttributes(ErrorString*, int in_nodeId, std::unique_ptr<protocol::Array<WTF::String>>* out_attributes) = 0;
    virtual void copyTo(ErrorString*, int in_nodeId, int in_targetNodeId, const Maybe<int>& in_insertBeforeNodeId, int* out_nodeId) = 0;
    virtual void moveTo(ErrorString*, int in_nodeId, int in_targetNodeId, const Maybe<int>& in_insertBeforeNodeId, int* out_nodeId) = 0;
    virtual void undo(ErrorString*) = 0;
    virtual void redo(ErrorString*) = 0;
    virtual void markUndoableState(ErrorString*) = 0;
    virtual void focus(ErrorString*, int in_nodeId) = 0;
    virtual void setFileInputFiles(ErrorString*, int in_nodeId, std::unique_ptr<protocol::Array<WTF::String>> in_files) = 0;
    virtual void getBoxModel(ErrorString*, int in_nodeId, std::unique_ptr<protocol::DOM::BoxModel>* out_model) = 0;
    virtual void getNodeForLocation(ErrorString*, int in_x, int in_y, int* out_nodeId) = 0;
    virtual void getRelayoutBoundary(ErrorString*, int in_nodeId, int* out_nodeId) = 0;
    virtual void getHighlightObjectForTest(ErrorString*, int in_nodeId, std::unique_ptr<protocol::DictionaryValue>* out_highlight) = 0;


protected:
    virtual ~Backend() { }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void documentUpdated();
    void inspectNodeRequested(int backendNodeId);
    void setChildNodes(int parentId, std::unique_ptr<protocol::Array<protocol::DOM::Node>> nodes);
    void attributeModified(int nodeId, const WTF::String& name, const WTF::String& value);
    void attributeRemoved(int nodeId, const WTF::String& name);
    void inlineStyleInvalidated(std::unique_ptr<protocol::Array<int>> nodeIds);
    void characterDataModified(int nodeId, const WTF::String& characterData);
    void childNodeCountUpdated(int nodeId, int childNodeCount);
    void childNodeInserted(int parentNodeId, int previousNodeId, std::unique_ptr<protocol::DOM::Node> node);
    void childNodeRemoved(int parentNodeId, int nodeId);
    void shadowRootPushed(int hostId, std::unique_ptr<protocol::DOM::Node> root);
    void shadowRootPopped(int hostId, int rootId);
    void pseudoElementAdded(int parentId, std::unique_ptr<protocol::DOM::Node> pseudoElement);
    void pseudoElementRemoved(int parentId, int pseudoElementId);
    void distributedNodesUpdated(int insertionPointId, std::unique_ptr<protocol::Array<protocol::DOM::BackendNode>> distributedNodes);
    void nodeHighlightRequested(int nodeId);

    void flush() { m_frontendChannel->flushProtocolNotifications(); }
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, blink::protocol::DOM::Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CORE_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace DOM
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_DOM_h)
