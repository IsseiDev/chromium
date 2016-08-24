// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8PaintWorkletGlobalScope.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8CSSAngleValue.h"
#include "bindings/core/v8/V8CSSCalcLength.h"
#include "bindings/core/v8/V8CSSImageValue.h"
#include "bindings/core/v8/V8CSSKeywordValue.h"
#include "bindings/core/v8/V8CSSLengthValue.h"
#include "bindings/core/v8/V8CSSMatrixTransformComponent.h"
#include "bindings/core/v8/V8CSSNumberValue.h"
#include "bindings/core/v8/V8CSSPerspective.h"
#include "bindings/core/v8/V8CSSPositionValue.h"
#include "bindings/core/v8/V8CSSResourceValue.h"
#include "bindings/core/v8/V8CSSRotation.h"
#include "bindings/core/v8/V8CSSScale.h"
#include "bindings/core/v8/V8CSSSimpleLength.h"
#include "bindings/core/v8/V8CSSSkew.h"
#include "bindings/core/v8/V8CSSStyleValue.h"
#include "bindings/core/v8/V8CSSTokenStreamValue.h"
#include "bindings/core/v8/V8CSSTransformComponent.h"
#include "bindings/core/v8/V8CSSTransformValue.h"
#include "bindings/core/v8/V8CSSTranslation.h"
#include "bindings/core/v8/V8CSSURLImageValue.h"
#include "bindings/core/v8/V8CSSVariableReferenceValue.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8StylePropertyMap.h"
#include "bindings/core/v8/V8WorkletGlobalScope.h"
#include "bindings/modules/v8/V8PaintRenderingContext2D.h"
#include "bindings/modules/v8/V8PaintSize.h"
#include "bindings/modules/v8/V8PaintWorkletGlobalScope.h"
#include "bindings/modules/v8/V8Path2D.h"
#include "core/dom/Document.h"
#include "modules/PaintWorkletGlobalScopeCoreConstructors.h"
#include "modules/PaintWorkletGlobalScopeModulesConstructors.h"
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
const WrapperTypeInfo V8PaintWorkletGlobalScope::wrapperTypeInfo = { gin::kEmbedderBlink, V8PaintWorkletGlobalScope::domTemplate, V8PaintWorkletGlobalScope::trace, V8PaintWorkletGlobalScope::traceWrappers, 0, 0, V8PaintWorkletGlobalScope::preparePrototypeAndInterfaceObject, nullptr, "PaintWorkletGlobalScope", &V8WorkletGlobalScope::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PaintWorkletGlobalScope.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PaintWorkletGlobalScope::s_wrapperTypeInfo = V8PaintWorkletGlobalScope::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, PaintWorkletGlobalScope>::value,
    "PaintWorkletGlobalScope inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace PaintWorkletGlobalScopeV8Internal {

static void registerPaintMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "registerPaint", "PaintWorkletGlobalScope", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    PaintWorkletGlobalScope* impl = V8PaintWorkletGlobalScope::toImpl(info.Holder());
    V8StringResource<> name;
    ScriptValue paintCtor;
    {
        name = info[0];
        if (!name.prepare())
            return;
        if (!info[1]->IsFunction()) {
            exceptionState.throwTypeError("The callback provided as parameter 2 is not a function.");
            exceptionState.throwIfNeeded();
            return;
        }
        paintCtor = ScriptValue(ScriptState::current(info.GetIsolate()), info[1]);
    }
    impl->registerPaint(name, paintCtor, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void registerPaintMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PaintWorkletGlobalScopeV8Internal::registerPaintMethod(info);
}

} // namespace PaintWorkletGlobalScopeV8Internal

const V8DOMConfiguration::MethodConfiguration V8PaintWorkletGlobalScopeMethods[] = {
    {"registerPaint", PaintWorkletGlobalScopeV8Internal::registerPaintMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance},
};

static void installV8PaintWorkletGlobalScopeTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8PaintWorkletGlobalScope::wrapperTypeInfo.interfaceName, V8WorkletGlobalScope::domTemplate(isolate, world), V8PaintWorkletGlobalScope::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::cssPaintAPIEnabled()) {
        V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PaintWorkletGlobalScopeMethods, WTF_ARRAY_LENGTH(V8PaintWorkletGlobalScopeMethods));
    }

    if (RuntimeEnabledFeatures::cssPaintAPIEnabled()) {
        const V8DOMConfiguration::AttributeConfiguration attributePaintRenderingContext2DConfiguration = \
        {"PaintRenderingContext2D", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8PaintRenderingContext2D::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributePaintRenderingContext2DConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributePaintSizeConfiguration = \
        {"PaintSize", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8PaintSize::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributePaintSizeConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributePaintWorkletGlobalScopeConfiguration = \
        {"PaintWorkletGlobalScope", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8PaintWorkletGlobalScope::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributePaintWorkletGlobalScopeConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributePath2DConfiguration = \
        {"Path2D", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8Path2D::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributePath2DConfiguration);
    }

    if (RuntimeEnabledFeatures::cssTypedOMEnabled()) {
        const V8DOMConfiguration::AttributeConfiguration attributeCSSAngleValueConfiguration = \
        {"CSSAngleValue", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSAngleValue::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSAngleValueConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSCalcLengthConfiguration = \
        {"CSSCalcLength", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSCalcLength::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSCalcLengthConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSImageValueConfiguration = \
        {"CSSImageValue", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSImageValue::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSImageValueConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSKeywordValueConfiguration = \
        {"CSSKeywordValue", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSKeywordValue::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSKeywordValueConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSLengthValueConfiguration = \
        {"CSSLengthValue", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSLengthValue::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSLengthValueConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSMatrixTransformComponentConfiguration = \
        {"CSSMatrixTransformComponent", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSMatrixTransformComponent::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSMatrixTransformComponentConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSNumberValueConfiguration = \
        {"CSSNumberValue", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSNumberValue::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSNumberValueConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSPerspectiveConfiguration = \
        {"CSSPerspective", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSPerspective::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSPerspectiveConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSPositionValueConfiguration = \
        {"CSSPositionValue", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSPositionValue::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSPositionValueConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSResourceValueConfiguration = \
        {"CSSResourceValue", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSResourceValue::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSResourceValueConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSRotationConfiguration = \
        {"CSSRotation", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSRotation::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSRotationConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSScaleConfiguration = \
        {"CSSScale", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSScale::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSScaleConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSSimpleLengthConfiguration = \
        {"CSSSimpleLength", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSSimpleLength::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSSimpleLengthConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSSkewConfiguration = \
        {"CSSSkew", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSSkew::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSSkewConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSStyleValueConfiguration = \
        {"CSSStyleValue", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSStyleValue::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSStyleValueConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSTokenStreamValueConfiguration = \
        {"CSSTokenStreamValue", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSTokenStreamValue::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSTokenStreamValueConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSTransformComponentConfiguration = \
        {"CSSTransformComponent", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSTransformComponent::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSTransformComponentConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSTransformValueConfiguration = \
        {"CSSTransformValue", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSTransformValue::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSTransformValueConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSTranslationConfiguration = \
        {"CSSTranslation", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSTranslation::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSTranslationConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSURLImageValueConfiguration = \
        {"CSSURLImageValue", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSURLImageValue::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSURLImageValueConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeCSSVariableReferenceValueConfiguration = \
        {"CSSVariableReferenceValue", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8CSSVariableReferenceValue::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeCSSVariableReferenceValueConfiguration);
        const V8DOMConfiguration::AttributeConfiguration attributeStylePropertyMapConfiguration = \
        {"StylePropertyMap", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8StylePropertyMap::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeStylePropertyMapConfiguration);
    }

    if (RuntimeEnabledFeatures::workletEnabled()) {
        const V8DOMConfiguration::AttributeConfiguration attributeWorkletGlobalScopeConfiguration = \
        {"WorkletGlobalScope", v8ConstructorAttributeGetter, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8WorkletGlobalScope::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAttribute(isolate, world, instanceTemplate, prototypeTemplate, attributeWorkletGlobalScopeConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8PaintWorkletGlobalScope::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PaintWorkletGlobalScopeTemplate);
}

bool V8PaintWorkletGlobalScope::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PaintWorkletGlobalScope::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PaintWorkletGlobalScope* V8PaintWorkletGlobalScope::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
