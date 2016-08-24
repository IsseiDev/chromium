// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8MutationRecord.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8Node.h"
#include "bindings/core/v8/V8NodeList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/dom/NameNodeList.h"
#include "core/dom/NodeList.h"
#include "core/dom/StaticNodeList.h"
#include "core/html/LabelsNodeList.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8MutationRecord::wrapperTypeInfo = { gin::kEmbedderBlink, V8MutationRecord::domTemplate, V8MutationRecord::trace, V8MutationRecord::traceWrappers, 0, 0, V8MutationRecord::preparePrototypeAndInterfaceObject, nullptr, "MutationRecord", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in MutationRecord.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& MutationRecord::s_wrapperTypeInfo = V8MutationRecord::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, MutationRecord>::value,
    "MutationRecord inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace MutationRecordV8Internal {

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationRecord* impl = V8MutationRecord::toImpl(holder);
    v8SetReturnValueString(info, impl->type(), info.GetIsolate());
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MutationRecordV8Internal::typeAttributeGetter(info);
}

static void targetAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationRecord* impl = V8MutationRecord::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->target()), impl);
}

static void targetAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MutationRecordV8Internal::targetAttributeGetter(info);
}

static void addedNodesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationRecord* impl = V8MutationRecord::toImpl(holder);
    NodeList* cppValue(WTF::getPtr(impl->addedNodes()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "addedNodes"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void addedNodesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MutationRecordV8Internal::addedNodesAttributeGetter(info);
}

static void removedNodesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationRecord* impl = V8MutationRecord::toImpl(holder);
    NodeList* cppValue(WTF::getPtr(impl->removedNodes()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "removedNodes"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void removedNodesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MutationRecordV8Internal::removedNodesAttributeGetter(info);
}

static void previousSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationRecord* impl = V8MutationRecord::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->previousSibling()), impl);
}

static void previousSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MutationRecordV8Internal::previousSiblingAttributeGetter(info);
}

static void nextSiblingAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationRecord* impl = V8MutationRecord::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->nextSibling()), impl);
}

static void nextSiblingAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MutationRecordV8Internal::nextSiblingAttributeGetter(info);
}

static void attributeNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationRecord* impl = V8MutationRecord::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->attributeName(), info.GetIsolate());
}

static void attributeNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MutationRecordV8Internal::attributeNameAttributeGetter(info);
}

static void attributeNamespaceAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationRecord* impl = V8MutationRecord::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->attributeNamespace(), info.GetIsolate());
}

static void attributeNamespaceAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MutationRecordV8Internal::attributeNamespaceAttributeGetter(info);
}

static void oldValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    MutationRecord* impl = V8MutationRecord::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->oldValue(), info.GetIsolate());
}

static void oldValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    MutationRecordV8Internal::oldValueAttributeGetter(info);
}

} // namespace MutationRecordV8Internal

const V8DOMConfiguration::AccessorConfiguration V8MutationRecordAccessors[] = {
    {"type", MutationRecordV8Internal::typeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"target", MutationRecordV8Internal::targetAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"addedNodes", MutationRecordV8Internal::addedNodesAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"removedNodes", MutationRecordV8Internal::removedNodesAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"previousSibling", MutationRecordV8Internal::previousSiblingAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"nextSibling", MutationRecordV8Internal::nextSiblingAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"attributeName", MutationRecordV8Internal::attributeNameAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"attributeNamespace", MutationRecordV8Internal::attributeNamespaceAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"oldValue", MutationRecordV8Internal::oldValueAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8MutationRecordTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8MutationRecord::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8MutationRecord::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8MutationRecordAccessors, WTF_ARRAY_LENGTH(V8MutationRecordAccessors));
}

v8::Local<v8::FunctionTemplate> V8MutationRecord::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8MutationRecordTemplate);
}

bool V8MutationRecord::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8MutationRecord::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

MutationRecord* V8MutationRecord::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink