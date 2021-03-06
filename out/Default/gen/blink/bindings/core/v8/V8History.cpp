// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8History.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/SerializedScriptValue.h"
#include "bindings/core/v8/SerializedScriptValueFactory.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "core/inspector/ConsoleMessage.h"
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
const WrapperTypeInfo V8History::wrapperTypeInfo = { gin::kEmbedderBlink, V8History::domTemplate, V8History::trace, V8History::traceWrappers, 0, 0, V8History::preparePrototypeAndInterfaceObject, nullptr, "History", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in History.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& History::s_wrapperTypeInfo = V8History::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, History>::value,
    "History inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace HistoryV8Internal {

static void lengthAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    History* impl = V8History::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->length());
}

static void lengthAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HistoryV8Internal::lengthAttributeGetter(info);
}

static void scrollRestorationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    History* impl = V8History::toImpl(holder);
    v8SetReturnValueString(info, impl->scrollRestoration(), info.GetIsolate());
}

static void scrollRestorationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8History_ScrollRestoration_AttributeGetter);
    HistoryV8Internal::scrollRestorationAttributeGetter(info);
}

static void scrollRestorationAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "scrollRestoration", "History", holder, info.GetIsolate());
    History* impl = V8History::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    const char* validValues[] = {
        "auto",
        "manual",
    };
    if (!isValidEnum(cppValue, validValues, WTF_ARRAY_LENGTH(validValues), "ScrollRestoration", exceptionState)) {
        currentExecutionContext(info.GetIsolate())->addConsoleMessage(ConsoleMessage::create(JSMessageSource, WarningMessageLevel, exceptionState.message()));
        return;
    }
    impl->setScrollRestoration(cppValue);
}

static void scrollRestorationAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::V8History_ScrollRestoration_AttributeSetter);
    HistoryV8Internal::scrollRestorationAttributeSetter(v8Value, info);
}

static void stateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    History* impl = V8History::toImpl(holder);
    v8::Local<v8::String> propertyName = v8AtomicString(info.GetIsolate(), "state");
    if (!impl->stateChanged()) {
        v8::Local<v8::Value> v8Value = V8HiddenValue::getHiddenValue(ScriptState::current(info.GetIsolate()), holder, propertyName);
        if (!v8Value.IsEmpty() && !v8Value->IsUndefined()) {
            v8SetReturnValue(info, v8Value);
            return;
        }
    }
    RefPtr<SerializedScriptValue> cppValue(WTF::getPtr(impl->state()));
    v8::Local<v8::Value> v8Value(v8Deserialize(info.GetIsolate(), cppValue));
    V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, propertyName, v8Value);
    v8SetReturnValue(info, v8Value);
}

static void stateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HistoryV8Internal::stateAttributeGetter(info);
}

static void goMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "go", "History", info.Holder(), info.GetIsolate());
    History* impl = V8History::toImpl(info.Holder());
    int delta;
    {
        if (!info[0]->IsUndefined()) {
            delta = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            delta = 0;
        }
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->go(executionContext, delta);
}

static void goMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HistoryV8Internal::goMethod(info);
}

static void backMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    History* impl = V8History::toImpl(info.Holder());
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->back(executionContext);
}

static void backMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HistoryV8Internal::backMethod(info);
}

static void forwardMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    History* impl = V8History::toImpl(info.Holder());
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    impl->forward(executionContext);
}

static void forwardMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HistoryV8Internal::forwardMethod(info);
}

static void pushStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "pushState", "History", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    History* impl = V8History::toImpl(info.Holder());
    RefPtr<SerializedScriptValue> data;
    V8StringResource<TreatNullAndUndefinedAsNullString> title;
    V8StringResource<TreatNullAndUndefinedAsNullString> url;
    {
        data = SerializedScriptValue::serialize(info.GetIsolate(), info[0], nullptr, nullptr, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        title = info[1];
        if (!title.prepare())
            return;
        if (!info[2]->IsUndefined()) {
            url = info[2];
            if (!url.prepare())
                return;
        } else {
            url = nullptr;
        }
    }
    impl->pushState(data, title, url, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void pushStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HistoryV8Internal::pushStateMethod(info);
}

static void replaceStateMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "replaceState", "History", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    History* impl = V8History::toImpl(info.Holder());
    RefPtr<SerializedScriptValue> data;
    V8StringResource<TreatNullAndUndefinedAsNullString> title;
    V8StringResource<TreatNullAndUndefinedAsNullString> url;
    {
        data = SerializedScriptValue::serialize(info.GetIsolate(), info[0], nullptr, nullptr, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        title = info[1];
        if (!title.prepare())
            return;
        if (!info[2]->IsUndefined()) {
            url = info[2];
            if (!url.prepare())
                return;
        } else {
            url = nullptr;
        }
    }
    impl->replaceState(data, title, url, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void replaceStateMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    HistoryV8Internal::replaceStateMethod(info);
}

} // namespace HistoryV8Internal

const V8DOMConfiguration::AccessorConfiguration V8HistoryAccessors[] = {
    {"length", HistoryV8Internal::lengthAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"state", HistoryV8Internal::stateAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8HistoryMethods[] = {
    {"go", HistoryV8Internal::goMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"back", HistoryV8Internal::backMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"forward", HistoryV8Internal::forwardMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"pushState", HistoryV8Internal::pushStateMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"replaceState", HistoryV8Internal::replaceStateMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8HistoryTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8History::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8History::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HistoryAccessors, WTF_ARRAY_LENGTH(V8HistoryAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8HistoryMethods, WTF_ARRAY_LENGTH(V8HistoryMethods));

    if (RuntimeEnabledFeatures::scrollRestorationEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessorscrollRestorationConfiguration = \
        {"scrollRestoration", HistoryV8Internal::scrollRestorationAttributeGetterCallback, HistoryV8Internal::scrollRestorationAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorscrollRestorationConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8History::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8HistoryTemplate);
}

bool V8History::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8History::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

History* V8History::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
