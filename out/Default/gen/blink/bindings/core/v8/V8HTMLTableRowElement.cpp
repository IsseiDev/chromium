// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8HTMLTableRowElement.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HTMLCollection.h"
#include "bindings/core/v8/V8HTMLElement.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/HTMLNames.h"
#include "core/animation/ElementAnimation.h"
#include "core/dom/ClassCollection.h"
#include "core/dom/Document.h"
#include "core/dom/ElementFullscreen.h"
#include "core/dom/TagCollection.h"
#include "core/dom/custom/CEReactionsScope.h"
#include "core/dom/custom/V0CustomElementProcessingStack.h"
#include "core/html/HTMLCollection.h"
#include "core/html/HTMLDataListOptionsCollection.h"
#include "core/html/HTMLFormControlsCollection.h"
#include "core/html/HTMLTableRowsCollection.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8HTMLTableRowElement::wrapperTypeInfo = { gin::kEmbedderBlink, V8HTMLTableRowElement::domTemplate, V8HTMLTableRowElement::trace, V8HTMLTableRowElement::traceWrappers, 0, 0, V8HTMLTableRowElement::preparePrototypeAndInterfaceObject, nullptr, "HTMLTableRowElement", &V8HTMLElement::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::NodeClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in HTMLTableRowElement.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& HTMLTableRowElement::s_wrapperTypeInfo = V8HTMLTableRowElement::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, HTMLTableRowElement>::value,
    "HTMLTableRowElement inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HTMLTableRowElementV8Internal {

static void rowIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    v8SetReturnValueInt(info, impl->rowIndex());
}

static void rowIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableRowElementV8Internal::rowIndexAttributeGetter(info);
}

static void sectionRowIndexAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    v8SetReturnValueInt(info, impl->sectionRowIndex());
}

static void sectionRowIndexAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableRowElementV8Internal::sectionRowIndexAttributeGetter(info);
}

static void cellsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    v8SetReturnValueFast(info, WTF::getPtr(impl->cells()), impl);
}

static void cellsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableRowElementV8Internal::cellsAttributeGetter(info);
}

static void alignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::alignAttr), info.GetIsolate());
}

static void alignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableRowElementV8Internal::alignAttributeGetter(info);
}

static void alignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::alignAttr, cppValue);
}

static void alignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableRowElementV8Internal::alignAttributeSetter(v8Value, info);
}

static void chAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::charAttr), info.GetIsolate());
}

static void chAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableRowElementV8Internal::chAttributeGetter(info);
}

static void chAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::charAttr, cppValue);
}

static void chAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableRowElementV8Internal::chAttributeSetter(v8Value, info);
}

static void chOffAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::charoffAttr), info.GetIsolate());
}

static void chOffAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableRowElementV8Internal::chOffAttributeGetter(info);
}

static void chOffAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::charoffAttr, cppValue);
}

static void chOffAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableRowElementV8Internal::chOffAttributeSetter(v8Value, info);
}

static void vAlignAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::valignAttr), info.GetIsolate());
}

static void vAlignAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableRowElementV8Internal::vAlignAttributeGetter(info);
}

static void vAlignAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::valignAttr, cppValue);
}

static void vAlignAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableRowElementV8Internal::vAlignAttributeSetter(v8Value, info);
}

static void bgColorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    v8SetReturnValueString(info, impl->fastGetAttribute(HTMLNames::bgcolorAttr), info.GetIsolate());
}

static void bgColorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HTMLTableRowElementV8Internal::bgColorAttributeGetter(info);
}

static void bgColorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(holder);
    V8StringResource<TreatNullAsEmptyString> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    impl->setAttribute(HTMLNames::bgcolorAttr, cppValue);
}

static void bgColorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    CEReactionsScope ceReactionsScope;
    V0CustomElementProcessingStack::CallbackDeliveryScope deliveryScope;
    HTMLTableRowElementV8Internal::bgColorAttributeSetter(v8Value, info);
}

static void insertCellMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "insertCell", "HTMLTableRowElement", info.Holder(), info.GetIsolate());
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(info.Holder());
    int index;
    {
        if (!info[0]->IsUndefined()) {
            index = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            index = -1;
        }
    }
    HTMLElement* result = impl->insertCell(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValueFast(info, result, impl);
}

static void insertCellMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLTableRowElementV8Internal::insertCellMethod(info);
}

static void deleteCellMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "deleteCell", "HTMLTableRowElement", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    HTMLTableRowElement* impl = V8HTMLTableRowElement::toImpl(info.Holder());
    int index;
    {
        index = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->deleteCell(index, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void deleteCellMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    CEReactionsScope ceReactionsScope;
    HTMLTableRowElementV8Internal::deleteCellMethod(info);
}

} // namespace HTMLTableRowElementV8Internal

const V8DOMConfiguration::AccessorConfiguration V8HTMLTableRowElementAccessors[] = {
    {"rowIndex", HTMLTableRowElementV8Internal::rowIndexAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"sectionRowIndex", HTMLTableRowElementV8Internal::sectionRowIndexAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"cells", HTMLTableRowElementV8Internal::cellsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"align", HTMLTableRowElementV8Internal::alignAttributeGetterCallback, HTMLTableRowElementV8Internal::alignAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"ch", HTMLTableRowElementV8Internal::chAttributeGetterCallback, HTMLTableRowElementV8Internal::chAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"chOff", HTMLTableRowElementV8Internal::chOffAttributeGetterCallback, HTMLTableRowElementV8Internal::chOffAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"vAlign", HTMLTableRowElementV8Internal::vAlignAttributeGetterCallback, HTMLTableRowElementV8Internal::vAlignAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"bgColor", HTMLTableRowElementV8Internal::bgColorAttributeGetterCallback, HTMLTableRowElementV8Internal::bgColorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8HTMLTableRowElementMethods[] = {
    {"insertCell", HTMLTableRowElementV8Internal::insertCellMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"deleteCell", HTMLTableRowElementV8Internal::deleteCellMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8HTMLTableRowElementTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8HTMLTableRowElement::wrapperTypeInfo.interfaceName, V8HTMLElement::domTemplate(isolate, world), V8HTMLTableRowElement::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLTableRowElementAccessors, WTF_ARRAY_LENGTH(V8HTMLTableRowElementAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HTMLTableRowElementMethods, WTF_ARRAY_LENGTH(V8HTMLTableRowElementMethods));
}

v8::Local<v8::FunctionTemplate> V8HTMLTableRowElement::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HTMLTableRowElementTemplate);
}

bool V8HTMLTableRowElement::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8HTMLTableRowElement::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

HTMLTableRowElement* V8HTMLTableRowElement::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
