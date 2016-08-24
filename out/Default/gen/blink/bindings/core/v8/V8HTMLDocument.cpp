// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8HTMLDocument.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HTMLAllCollection.h"
#include "bindings/core/v8/V8Location.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/animation/DocumentAnimation.h"
#include "core/css/DocumentFontFaceSet.h"
#include "core/dom/Document.h"
#include "core/dom/DocumentFullscreen.h"
#include "core/dom/custom/CEReactionsScope.h"
#include "core/dom/custom/V0CustomElementProcessingStack.h"
#include "core/frame/UseCounter.h"
#include "core/svg/SVGDocumentExtensions.h"
#include "core/xml/DocumentXPathEvaluator.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8HTMLDocument::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLDocument::domTemplate, V8HTMLDocument::trace, V8HTMLDocument::traceWrappers, 0, 0, V8HTMLDocument::preparePrototypeAndInterfaceObject, nullptr, "HTMLDocument", &V8Document::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLDocument.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLDocument::s_wrapperTypeInfo = V8HTMLDocument::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, HTMLDocument>::value,
    "HTMLDocument inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLDocumentV8Internal {

static void fgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueString(info, impl->fgColor(), info.GetIsolate());
}

static void fgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocumentV8Internal::fgColorAttributeGetter(info);
}

static void fgColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    V8StringResource<TreatNullAsEmptyString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setFgColor(cppValue);
}

static void fgColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLDocumentV8Internal::fgColorAttributeSetter(v8Value, info);
}

static void linkColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueString(info, impl->linkColor(), info.GetIsolate());
}

static void linkColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocumentV8Internal::linkColorAttributeGetter(info);
}

static void linkColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    V8StringResource<TreatNullAsEmptyString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setLinkColor(cppValue);
}

static void linkColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLDocumentV8Internal::linkColorAttributeSetter(v8Value, info);
}

static void vlinkColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueString(info, impl->vlinkColor(), info.GetIsolate());
}

static void vlinkColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocumentV8Internal::vlinkColorAttributeGetter(info);
}

static void vlinkColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    V8StringResource<TreatNullAsEmptyString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setVlinkColor(cppValue);
}

static void vlinkColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLDocumentV8Internal::vlinkColorAttributeSetter(v8Value, info);
}

static void alinkColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueString(info, impl->alinkColor(), info.GetIsolate());
}

static void alinkColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocumentV8Internal::alinkColorAttributeGetter(info);
}

static void alinkColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    V8StringResource<TreatNullAsEmptyString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setAlinkColor(cppValue);
}

static void alinkColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLDocumentV8Internal::alinkColorAttributeSetter(v8Value, info);
}

static void bgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueString(info, impl->bgColor(), info.GetIsolate());
}

static void bgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocumentV8Internal::bgColorAttributeGetter(info);
}

static void bgColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    V8StringResource<TreatNullAsEmptyString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    impl->setBgColor(cppValue);
}

static void bgColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLDocumentV8Internal::bgColorAttributeSetter(v8Value, info);
}

static void allAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->allForBinding()), impl);
}

static void allAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocumentV8Internal::allAttributeGetter(info);
}

static void allAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::String> propertyName = v8AtomicString(info.GetIsolate(), "all");
    v8CallBoolean(info.Holder()->CreateDataProperty(info.GetIsolate()->GetCurrentContext(), propertyName, v8Value));
}

static void allAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    HTMLDocumentV8Internal::allAttributeSetter(v8Value, info);
}

static void locationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* impl = V8HTMLDocument::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->location()), impl);
}

static void locationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocumentV8Internal::locationAttributeGetter(info);
}

static void locationAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLDocument* proxyImpl = V8HTMLDocument::toImpl(holder);
    Location* impl = WTF::getPtr(proxyImpl->location());
    if (!impl)
        return;
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setHref(currentDOMWindow(info.GetIsolate()), enteredDOMWindow(info.GetIsolate()), cppValue);
}

static void locationAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    HTMLDocumentV8Internal::locationAttributeSetter(v8Value, info);
}

static void clearMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocument* impl = V8HTMLDocument::toImpl(info.Holder());
    impl->clear();
}

static void clearMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::DocumentClear);
    HTMLDocumentV8Internal::clearMethod(info);
}

static void captureEventsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocument* impl = V8HTMLDocument::toImpl(info.Holder());
    impl->captureEvents();
}

static void captureEventsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::DocumentCaptureEvents);
    HTMLDocumentV8Internal::captureEventsMethod(info);
}

static void releaseEventsMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLDocument* impl = V8HTMLDocument::toImpl(info.Holder());
    impl->releaseEvents();
}

static void releaseEventsMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::DocumentReleaseEvents);
    HTMLDocumentV8Internal::releaseEventsMethod(info);
}

} // namespace HTMLDocumentV8Internal

const V8DOMConfiguration::AccessorConfiguration V8HTMLDocumentAccessors[] = {
    {"fgColor", HTMLDocumentV8Internal::fgColorAttributeGetterCallback, HTMLDocumentV8Internal::fgColorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"linkColor", HTMLDocumentV8Internal::linkColorAttributeGetterCallback, HTMLDocumentV8Internal::linkColorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"vlinkColor", HTMLDocumentV8Internal::vlinkColorAttributeGetterCallback, HTMLDocumentV8Internal::vlinkColorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"alinkColor", HTMLDocumentV8Internal::alinkColorAttributeGetterCallback, HTMLDocumentV8Internal::alinkColorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"bgColor", HTMLDocumentV8Internal::bgColorAttributeGetterCallback, HTMLDocumentV8Internal::bgColorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"all", HTMLDocumentV8Internal::allAttributeGetterCallback, HTMLDocumentV8Internal::allAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"location", HTMLDocumentV8Internal::locationAttributeGetterCallback, HTMLDocumentV8Internal::locationAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8HTMLDocumentMethods[] = {
    {"clear", HTMLDocumentV8Internal::clearMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"captureEvents", HTMLDocumentV8Internal::captureEventsMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"releaseEvents", HTMLDocumentV8Internal::releaseEventsMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8HTMLDocumentTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLDocument::wrapperTypeInfo.interfaceName, V8Document::domTemplate(isolate, world), V8HTMLDocument::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLDocumentAccessors, WTF_ARRAY_LENGTH(V8HTMLDocumentAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLDocumentMethods, WTF_ARRAY_LENGTH(V8HTMLDocumentMethods));
}

v8::Local<v8::FunctionTemplate> V8HTMLDocument::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLDocumentTemplate);
}

bool V8HTMLDocument::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLDocument::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLDocument* V8HTMLDocument::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink