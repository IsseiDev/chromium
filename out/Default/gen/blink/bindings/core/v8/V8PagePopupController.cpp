// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8PagePopupController.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8Document.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "core/dom/Document.h"
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
const WrapperTypeInfo V8PagePopupController::wrapperTypeInfo = { gin::kEmbedderBlink, V8PagePopupController::domTemplate, V8PagePopupController::trace, V8PagePopupController::traceWrappers, 0, 0, V8PagePopupController::preparePrototypeAndInterfaceObject, nullptr, "PagePopupController", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in PagePopupController.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& PagePopupController::s_wrapperTypeInfo = V8PagePopupController::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, PagePopupController>::value,
    "PagePopupController inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace PagePopupControllerV8Internal {

static void setValueAndClosePopupMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setValueAndClosePopup", "PagePopupController", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    PagePopupController* impl = V8PagePopupController::toImpl(info.Holder());
    int numberValue;
    V8StringResource<> stringValue;
    {
        numberValue = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        stringValue = info[1];
        if (!stringValue.prepare())
            return;
    }
    impl->setValueAndClosePopup(numberValue, stringValue);
}

static void setValueAndClosePopupMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PagePopupControllerV8Internal::setValueAndClosePopupMethod(info);
}

static void setValueMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "setValue", "PagePopupController", 1, info.Length()));
        return;
    }
    PagePopupController* impl = V8PagePopupController::toImpl(info.Holder());
    V8StringResource<> value;
    {
        value = info[0];
        if (!value.prepare())
            return;
    }
    impl->setValue(value);
}

static void setValueMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PagePopupControllerV8Internal::setValueMethod(info);
}

static void closePopupMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PagePopupController* impl = V8PagePopupController::toImpl(info.Holder());
    impl->closePopup();
}

static void closePopupMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PagePopupControllerV8Internal::closePopupMethod(info);
}

static void selectFontsFromOwnerDocumentMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "selectFontsFromOwnerDocument", "PagePopupController", 1, info.Length()));
        return;
    }
    PagePopupController* impl = V8PagePopupController::toImpl(info.Holder());
    Document* targetDocument;
    {
        targetDocument = V8Document::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!targetDocument) {
            V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("selectFontsFromOwnerDocument", "PagePopupController", "parameter 1 is not of type 'Document'."));
            return;
        }
    }
    impl->selectFontsFromOwnerDocument(targetDocument);
}

static void selectFontsFromOwnerDocumentMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PagePopupControllerV8Internal::selectFontsFromOwnerDocumentMethod(info);
}

static void localizeNumberStringMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    if (UNLIKELY(info.Length() < 1)) {
        V8ThrowException::throwException(info.GetIsolate(), createMinimumArityTypeErrorForMethod(info.GetIsolate(), "localizeNumberString", "PagePopupController", 1, info.Length()));
        return;
    }
    PagePopupController* impl = V8PagePopupController::toImpl(info.Holder());
    V8StringResource<> numberString;
    {
        numberString = info[0];
        if (!numberString.prepare())
            return;
    }
    v8SetReturnValueString(info, impl->localizeNumberString(numberString), info.GetIsolate());
}

static void localizeNumberStringMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PagePopupControllerV8Internal::localizeNumberStringMethod(info);
}

static void formatMonthMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "formatMonth", "PagePopupController", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    PagePopupController* impl = V8PagePopupController::toImpl(info.Holder());
    int year;
    int zeroBaseMonth;
    {
        year = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        zeroBaseMonth = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    v8SetReturnValueString(info, impl->formatMonth(year, zeroBaseMonth), info.GetIsolate());
}

static void formatMonthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PagePopupControllerV8Internal::formatMonthMethod(info);
}

static void formatShortMonthMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "formatShortMonth", "PagePopupController", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 2)) {
        setMinimumArityTypeError(exceptionState, 2, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    PagePopupController* impl = V8PagePopupController::toImpl(info.Holder());
    int year;
    int zeroBaseMonth;
    {
        year = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        zeroBaseMonth = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    v8SetReturnValueString(info, impl->formatShortMonth(year, zeroBaseMonth), info.GetIsolate());
}

static void formatShortMonthMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PagePopupControllerV8Internal::formatShortMonthMethod(info);
}

static void formatWeekMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "formatWeek", "PagePopupController", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 3)) {
        setMinimumArityTypeError(exceptionState, 3, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    PagePopupController* impl = V8PagePopupController::toImpl(info.Holder());
    int year;
    int weekNumber;
    V8StringResource<> localizedStartDate;
    {
        year = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        weekNumber = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        localizedStartDate = info[2];
        if (!localizedStartDate.prepare())
            return;
    }
    v8SetReturnValueString(info, impl->formatWeek(year, weekNumber, localizedStartDate), info.GetIsolate());
}

static void formatWeekMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PagePopupControllerV8Internal::formatWeekMethod(info);
}

static void setWindowRectMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "setWindowRect", "PagePopupController", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 4)) {
        setMinimumArityTypeError(exceptionState, 4, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    PagePopupController* impl = V8PagePopupController::toImpl(info.Holder());
    int x;
    int y;
    int width;
    int height;
    {
        x = toInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        y = toInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        width = toInt32(info.GetIsolate(), info[2], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        height = toInt32(info.GetIsolate(), info[3], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->setWindowRect(x, y, width, height);
}

static void setWindowRectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    PagePopupControllerV8Internal::setWindowRectMethod(info);
}

} // namespace PagePopupControllerV8Internal

const V8DOMConfiguration::MethodConfiguration V8PagePopupControllerMethods[] = {
    {"setValueAndClosePopup", PagePopupControllerV8Internal::setValueAndClosePopupMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"setValue", PagePopupControllerV8Internal::setValueMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"closePopup", PagePopupControllerV8Internal::closePopupMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"selectFontsFromOwnerDocument", PagePopupControllerV8Internal::selectFontsFromOwnerDocumentMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"localizeNumberString", PagePopupControllerV8Internal::localizeNumberStringMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"formatMonth", PagePopupControllerV8Internal::formatMonthMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"formatShortMonth", PagePopupControllerV8Internal::formatShortMonthMethodCallback, 0, 2, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"formatWeek", PagePopupControllerV8Internal::formatWeekMethodCallback, 0, 3, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"setWindowRect", PagePopupControllerV8Internal::setWindowRectMethodCallback, 0, 4, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8PagePopupControllerTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8PagePopupController::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8PagePopupController::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::pagePopupEnabled()) {
        V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8PagePopupControllerMethods, WTF_ARRAY_LENGTH(V8PagePopupControllerMethods));
    }
}

v8::Local<v8::FunctionTemplate> V8PagePopupController::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8PagePopupControllerTemplate);
}

bool V8PagePopupController::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8PagePopupController::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

PagePopupController* V8PagePopupController::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
