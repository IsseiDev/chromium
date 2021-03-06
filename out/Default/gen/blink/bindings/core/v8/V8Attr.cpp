// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8Attr.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Element.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/dom/custom/CEReactionsScope.h"
#include "core/dom/custom/V0CustomElementProcessingStack.h"
#include "core/frame/UseCounter.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8Attr::wrapperTypeInfo = { gin::kEmbedderBlink, V8Attr::domTemplate, V8Attr::trace, V8Attr::traceWrappers, 0, 0, V8Attr::preparePrototypeAndInterfaceObject, nullptr, "Attr", &V8Node::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Attr.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Attr::s_wrapperTypeInfo = V8Attr::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, Attr>::value,
    "Attr inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace AttrV8Internal {

static void namespaceURIAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Attr* impl = V8Attr::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->namespaceURI(), info.GetIsolate());
}

static void namespaceURIAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AttrV8Internal::namespaceURIAttributeGetter(info);
}

static void prefixAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Attr* impl = V8Attr::toImpl(holder);
    v8SetReturnValueStringOrNull(info, impl->prefix(), info.GetIsolate());
}

static void prefixAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AttrV8Internal::prefixAttributeGetter(info);
}

static void localNameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Attr* impl = V8Attr::toImpl(holder);
    v8SetReturnValueString(info, impl->localName(), info.GetIsolate());
}

static void localNameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AttrV8Internal::localNameAttributeGetter(info);
}

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Attr* impl = V8Attr::toImpl(holder);
    v8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AttrV8Internal::nameAttributeGetter(info);
}

static void valueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Attr* impl = V8Attr::toImpl(holder);
    v8SetReturnValueString(info, impl->valueForBindings(), info.GetIsolate());
}

static void valueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AttrV8Internal::valueAttributeGetter(info);
}

static void valueAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Attr* impl = V8Attr::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setValueForBindings(cppValue);
}

static void valueAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    AttrV8Internal::valueAttributeSetter(v8Value, info);
}

static void nodeValueAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Attr* impl = V8Attr::toImpl(holder);
    v8SetReturnValueString(info, impl->valueForBindings(), info.GetIsolate());
}

static void nodeValueAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AttrNodeValue);
    AttrV8Internal::nodeValueAttributeGetter(info);
}

static void nodeValueAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Attr* impl = V8Attr::toImpl(holder);
    V8StringResource<TreatNullAsEmptyString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setValueForBindings(cppValue);
}

static void nodeValueAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AttrNodeValue);
    CEReactionsScope ceReactionsScope;
    AttrV8Internal::nodeValueAttributeSetter(v8Value, info);
}

static void textContentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Attr* impl = V8Attr::toImpl(holder);
    v8SetReturnValueString(info, impl->valueForBindings(), info.GetIsolate());
}

static void textContentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AttrTextContent);
    AttrV8Internal::textContentAttributeGetter(info);
}

static void textContentAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Attr* impl = V8Attr::toImpl(holder);
    V8StringResource<TreatNullAsEmptyString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setValueForBindings(cppValue);
}

static void textContentAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AttrTextContent);
    CEReactionsScope ceReactionsScope;
    AttrV8Internal::textContentAttributeSetter(v8Value, info);
}

static void ownerElementAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Attr* impl = V8Attr::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->ownerElement()), impl);
}

static void ownerElementAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AttributeOwnerElement);
    AttrV8Internal::ownerElementAttributeGetter(info);
}

static void specifiedAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Attr* impl = V8Attr::toImpl(holder);
    v8SetReturnValueBool(info, impl->specified());
}

static void specifiedAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AttributeSpecified);
    AttrV8Internal::specifiedAttributeGetter(info);
}

} // namespace AttrV8Internal

const V8DOMConfiguration::AccessorConfiguration V8AttrAccessors[] = {
    {"namespaceURI", AttrV8Internal::namespaceURIAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"prefix", AttrV8Internal::prefixAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"localName", AttrV8Internal::localNameAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"name", AttrV8Internal::nameAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"value", AttrV8Internal::valueAttributeGetterCallback, AttrV8Internal::valueAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"nodeValue", AttrV8Internal::nodeValueAttributeGetterCallback, AttrV8Internal::nodeValueAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"textContent", AttrV8Internal::textContentAttributeGetterCallback, AttrV8Internal::textContentAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ownerElement", AttrV8Internal::ownerElementAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"specified", AttrV8Internal::specifiedAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8AttrTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Attr::wrapperTypeInfo.interfaceName, V8Node::domTemplate(isolate, world), V8Attr::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8AttrAccessors, WTF_ARRAY_LENGTH(V8AttrAccessors));
}

v8::Local<v8::FunctionTemplate> V8Attr::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AttrTemplate);
}

bool V8Attr::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Attr::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Attr* V8Attr::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
