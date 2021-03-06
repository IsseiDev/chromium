// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8HTMLMenuElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/HTMLNames.h"
#include "core/animation/ElementAnimation.h"
#include "core/dom/Document.h"
#include "core/dom/ElementFullscreen.h"
#include "core/dom/custom/CEReactionsScope.h"
#include "core/dom/custom/V0CustomElementProcessingStack.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8HTMLMenuElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLMenuElement::domTemplate, V8HTMLMenuElement::trace, V8HTMLMenuElement::traceWrappers, 0, 0, V8HTMLMenuElement::preparePrototypeAndInterfaceObject, nullptr, "HTMLMenuElement", &V8HTMLElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLMenuElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLMenuElement::s_wrapperTypeInfo = V8HTMLMenuElement::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, HTMLMenuElement>::value,
    "HTMLMenuElement inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLMenuElementV8Internal {

static void typeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLMenuElement* impl = V8HTMLMenuElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::typeAttr), info.GetIsolate());
}

static void typeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLMenuElementV8Internal::typeAttributeGetter(info);
}

static void typeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLMenuElement* impl = V8HTMLMenuElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::typeAttr, cppValue);
}

static void typeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLMenuElementV8Internal::typeAttributeSetter(v8Value, info);
}

static void labelAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLMenuElement* impl = V8HTMLMenuElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::labelAttr), info.GetIsolate());
}

static void labelAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLMenuElementV8Internal::labelAttributeGetter(info);
}

static void labelAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLMenuElement* impl = V8HTMLMenuElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::labelAttr, cppValue);
}

static void labelAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLMenuElementV8Internal::labelAttributeSetter(v8Value, info);
}

static void compactAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLMenuElement* impl = V8HTMLMenuElement::toImpl(holder);
    v8SetReturnValueBool(info, impl->fastHasAttribute(HTMLNames::compactAttr));
}

static void compactAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLMenuElementV8Internal::compactAttributeGetter(info);
}

static void compactAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "compact", "HTMLMenuElement", holder, info.GetIsolate());
    HTMLMenuElement* impl = V8HTMLMenuElement::toImpl(holder);
    bool cppValue = toBoolean(info.GetIsolate(), v8Value, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setBooleanAttribute(HTMLNames::compactAttr, cppValue);
}

static void compactAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLMenuElementV8Internal::compactAttributeSetter(v8Value, info);
}

} // namespace HTMLMenuElementV8Internal

const V8DOMConfiguration::AccessorConfiguration V8HTMLMenuElementAccessors[] = {
    {"compact", HTMLMenuElementV8Internal::compactAttributeGetterCallback, HTMLMenuElementV8Internal::compactAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8HTMLMenuElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLMenuElement::wrapperTypeInfo.interfaceName, V8HTMLElement::domTemplate(isolate, world), V8HTMLMenuElement::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLMenuElementAccessors, WTF_ARRAY_LENGTH(V8HTMLMenuElementAccessors));

    if (RuntimeEnabledFeatures::contextMenuEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessorlabelConfiguration = \
        {"label", HTMLMenuElementV8Internal::labelAttributeGetterCallback, HTMLMenuElementV8Internal::labelAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorlabelConfiguration);
        const V8DOMConfiguration::AccessorConfiguration accessortypeConfiguration = \
        {"type", HTMLMenuElementV8Internal::typeAttributeGetterCallback, HTMLMenuElementV8Internal::typeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessortypeConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8HTMLMenuElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLMenuElementTemplate);
}

bool V8HTMLMenuElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLMenuElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLMenuElement* V8HTMLMenuElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
