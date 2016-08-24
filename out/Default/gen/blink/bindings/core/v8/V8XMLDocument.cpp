// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8XMLDocument.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Location.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/animation/DocumentAnimation.h"
#include "core/css/DocumentFontFaceSet.h"
#include "core/dom/Document.h"
#include "core/dom/DocumentFullscreen.h"
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
const WrapperTypeInfo V8XMLDocument::wrapperTypeInfo = { gin::kEmbedderBlink, V8XMLDocument::domTemplate, V8XMLDocument::trace, V8XMLDocument::traceWrappers, 0, 0, V8XMLDocument::preparePrototypeAndInterfaceObject, nullptr, "XMLDocument", &V8Document::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in XMLDocument.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& XMLDocument::s_wrapperTypeInfo = V8XMLDocument::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, XMLDocument>::value,
    "XMLDocument inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace XMLDocumentV8Internal {

static void locationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLDocument* impl = V8XMLDocument::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->location()), impl);
}

static void locationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    XMLDocumentV8Internal::locationAttributeGetter(info);
}

static void locationAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    XMLDocument* proxyImpl = V8XMLDocument::toImpl(holder);
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
    XMLDocumentV8Internal::locationAttributeSetter(v8Value, info);
}

} // namespace XMLDocumentV8Internal

const V8DOMConfiguration::AccessorConfiguration V8XMLDocumentAccessors[] = {
    {"location", XMLDocumentV8Internal::locationAttributeGetterCallback, XMLDocumentV8Internal::locationAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::DontDelete), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder},
};

static void installV8XMLDocumentTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8XMLDocument::wrapperTypeInfo.interfaceName, V8Document::domTemplate(isolate, world), V8XMLDocument::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8XMLDocumentAccessors, WTF_ARRAY_LENGTH(V8XMLDocumentAccessors));
}

v8::Local<v8::FunctionTemplate> V8XMLDocument::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8XMLDocumentTemplate);
}

bool V8XMLDocument::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8XMLDocument::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

XMLDocument* V8XMLDocument::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
