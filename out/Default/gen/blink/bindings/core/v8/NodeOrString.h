// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef NodeOrString_h
#define NodeOrString_h

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8Binding.h"
#include "core/CoreExport.h"
#include "platform/heap/Handle.h"

namespace blink {

class Node;

class CORE_EXPORT NodeOrString final {
    DISALLOW_NEW_EXCEPT_PLACEMENT_NEW();
public:
    NodeOrString();
    bool isNull() const { return m_type == SpecificTypeNone; }

    bool isNode() const { return m_type == SpecificTypeNode; }
    Node* getAsNode() const;
    void setNode(Node*);
    static NodeOrString fromNode(Node*);

    bool isString() const { return m_type == SpecificTypeString; }
    String getAsString() const;
    void setString(String);
    static NodeOrString fromString(String);

    NodeOrString(const NodeOrString&);
    ~NodeOrString();
    NodeOrString& operator=(const NodeOrString&);
    DECLARE_TRACE();

private:
    enum SpecificTypes {
        SpecificTypeNone,
        SpecificTypeNode,
        SpecificTypeString,
    };
    SpecificTypes m_type;

    Member<Node> m_node;
    String m_string;

    friend CORE_EXPORT v8::Local<v8::Value> toV8(const NodeOrString&, v8::Local<v8::Object>, v8::Isolate*);
};

class V8NodeOrString final {
public:
    CORE_EXPORT static void toImpl(v8::Isolate*, v8::Local<v8::Value>, NodeOrString&, UnionTypeConversionMode, ExceptionState&);
};

CORE_EXPORT v8::Local<v8::Value> toV8(const NodeOrString&, v8::Local<v8::Object>, v8::Isolate*);

template <class CallbackInfo>
inline void v8SetReturnValue(const CallbackInfo& callbackInfo, NodeOrString& impl)
{
    v8SetReturnValue(callbackInfo, toV8(impl, callbackInfo.Holder(), callbackInfo.GetIsolate()));
}

template <>
struct NativeValueTraits<NodeOrString> {
    CORE_EXPORT static NodeOrString nativeValue(v8::Isolate*, v8::Local<v8::Value>, ExceptionState&);
};

} // namespace blink

// We need to set canInitializeWithMemset=true because HeapVector supports
// items that can initialize with memset or have a vtable. It is safe to
// set canInitializeWithMemset=true for a union type object in practice.
// See https://codereview.chromium.org/1118993002/#msg5 for more details.
WTF_ALLOW_MOVE_AND_INIT_WITH_MEM_FUNCTIONS(blink::NodeOrString);

#endif // NodeOrString_h