// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8Notification.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/ScriptValue.h"
#include "bindings/core/v8/V8AbstractEventListener.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8EventListenerList.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8PrivateProperty.h"
#include "bindings/modules/v8/V8NotificationAction.h"
#include "bindings/modules/v8/V8NotificationOptions.h"
#include "bindings/modules/v8/V8NotificationPermissionCallback.h"
#include "core/dom/Document.h"
#include "core/frame/LocalDOMWindow.h"
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
const WrapperTypeInfo V8Notification::wrapperTypeInfo = { gin::kEmbedderBlink, V8Notification::domTemplate, V8Notification::trace, V8Notification::traceWrappers, V8Notification::toActiveScriptWrappable, 0, V8Notification::preparePrototypeAndInterfaceObject, nullptr, "Notification", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Dependent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in Notification.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& Notification::s_wrapperTypeInfo = V8Notification::wrapperTypeInfo;

namespace NotificationV8Internal {

static void permissionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    v8SetReturnValueString(info, Notification::permission(executionContext), info.GetIsolate());
}

static void permissionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NotificationPermission);
    NotificationV8Internal::permissionAttributeGetter(info);
}

static void maxActionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8SetReturnValueUnsigned(info, Notification::maxActions());
}

static void maxActionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::maxActionsAttributeGetter(info);
}

static void onclickAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onclick()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onclickAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::onclickAttributeGetter(info);
}

static void onclickAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onclick(), v8Value, V8Notification::eventListenerCacheIndex);
    impl->setOnclick(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onclickAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    NotificationV8Internal::onclickAttributeSetter(v8Value, info);
}

static void onshowAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onshow()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onshowAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NotificationShowEvent);
    NotificationV8Internal::onshowAttributeGetter(info);
}

static void onshowAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onshow(), v8Value, V8Notification::eventListenerCacheIndex);
    impl->setOnshow(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onshowAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NotificationShowEvent);
    NotificationV8Internal::onshowAttributeSetter(v8Value, info);
}

static void onerrorAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onerror()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void onerrorAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::onerrorAttributeGetter(info);
}

static void onerrorAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onerror(), v8Value, V8Notification::eventListenerCacheIndex);
    impl->setOnerror(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void onerrorAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    NotificationV8Internal::onerrorAttributeSetter(v8Value, info);
}

static void oncloseAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    EventListener* cppValue(WTF::getPtr(impl->onclose()));
    v8SetReturnValue(info, cppValue ? V8AbstractEventListener::cast(cppValue)->getListenerOrNull(info.GetIsolate(), impl->getExecutionContext()) : v8::Null(info.GetIsolate()).As<v8::Value>());
}

static void oncloseAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NotificationCloseEvent);
    NotificationV8Internal::oncloseAttributeGetter(info);
}

static void oncloseAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    moveEventListenerToNewWrapper(info.GetIsolate(), holder, impl->onclose(), v8Value, V8Notification::eventListenerCacheIndex);
    impl->setOnclose(V8EventListenerList::getEventListener(ScriptState::current(info.GetIsolate()), v8Value, true, ListenerFindOrCreate));
}

static void oncloseAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NotificationCloseEvent);
    NotificationV8Internal::oncloseAttributeSetter(v8Value, info);
}

static void titleAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    v8SetReturnValueString(info, impl->title(), info.GetIsolate());
}

static void titleAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::titleAttributeGetter(info);
}

static void dirAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    v8SetReturnValueString(info, impl->dir(), info.GetIsolate());
}

static void dirAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::dirAttributeGetter(info);
}

static void langAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    v8SetReturnValueString(info, impl->lang(), info.GetIsolate());
}

static void langAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::langAttributeGetter(info);
}

static void bodyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    v8SetReturnValueString(info, impl->body(), info.GetIsolate());
}

static void bodyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::bodyAttributeGetter(info);
}

static void tagAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    v8SetReturnValueString(info, impl->tag(), info.GetIsolate());
}

static void tagAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::tagAttributeGetter(info);
}

static void iconAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    v8SetReturnValueString(info, impl->icon(), info.GetIsolate());
}

static void iconAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::iconAttributeGetter(info);
}

static void badgeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    v8SetReturnValueString(info, impl->badge(), info.GetIsolate());
}

static void badgeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::badgeAttributeGetter(info);
}

static void vibrateAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    // If you see a compile error that
    //   V8PrivateProperty::getSameObjectNotificationVibrate
    // is not defined, then you need to register your attribute at
    // V8_PRIVATE_PROPERTY_FOR_EACH defined in V8PrivateProperty.h as
    //   X(SameObject, NotificationVibrate)
    auto privateSameObject = V8PrivateProperty::getSameObjectNotificationVibrate(info.GetIsolate());
    {
        v8::Local<v8::Value> v8Value = privateSameObject.get(info.GetIsolate()->GetCurrentContext(), holder);
        if (!v8Value.IsEmpty()) {
            v8SetReturnValue(info, v8Value);
            return;
        }
    }
    Notification* impl = V8Notification::toImpl(holder);
    v8SetReturnValue(info, freezeV8Object(toV8(impl->vibrate(), info.Holder(), info.GetIsolate()), info.GetIsolate()));
    privateSameObject.set(info.GetIsolate()->GetCurrentContext(), holder, info.GetReturnValue().Get());
}

static void vibrateAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::vibrateAttributeGetter(info);
}

static void timestampAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    v8SetReturnValue(info, static_cast<double>(impl->timestamp()));
}

static void timestampAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::timestampAttributeGetter(info);
}

static void renotifyAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    v8SetReturnValueBool(info, impl->renotify());
}

static void renotifyAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::renotifyAttributeGetter(info);
}

static void silentAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    v8SetReturnValueBool(info, impl->silent());
}

static void silentAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::silentAttributeGetter(info);
}

static void requireInteractionAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    Notification* impl = V8Notification::toImpl(holder);
    v8SetReturnValueBool(info, impl->requireInteraction());
}

static void requireInteractionAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::requireInteractionAttributeGetter(info);
}

static void dataAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    // If you see a compile error that
    //   V8PrivateProperty::getSameObjectNotificationData
    // is not defined, then you need to register your attribute at
    // V8_PRIVATE_PROPERTY_FOR_EACH defined in V8PrivateProperty.h as
    //   X(SameObject, NotificationData)
    auto privateSameObject = V8PrivateProperty::getSameObjectNotificationData(info.GetIsolate());
    {
        v8::Local<v8::Value> v8Value = privateSameObject.get(info.GetIsolate()->GetCurrentContext(), holder);
        if (!v8Value.IsEmpty()) {
            v8SetReturnValue(info, v8Value);
            return;
        }
    }
    Notification* impl = V8Notification::toImpl(holder);
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    v8SetReturnValue(info, impl->data(scriptState).v8Value());
    privateSameObject.set(info.GetIsolate()->GetCurrentContext(), holder, info.GetReturnValue().Get());
}

static void dataAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::dataAttributeGetter(info);
}

static void actionsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    // If you see a compile error that
    //   V8PrivateProperty::getSameObjectNotificationActions
    // is not defined, then you need to register your attribute at
    // V8_PRIVATE_PROPERTY_FOR_EACH defined in V8PrivateProperty.h as
    //   X(SameObject, NotificationActions)
    auto privateSameObject = V8PrivateProperty::getSameObjectNotificationActions(info.GetIsolate());
    {
        v8::Local<v8::Value> v8Value = privateSameObject.get(info.GetIsolate()->GetCurrentContext(), holder);
        if (!v8Value.IsEmpty()) {
            v8SetReturnValue(info, v8Value);
            return;
        }
    }
    Notification* impl = V8Notification::toImpl(holder);
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    v8SetReturnValue(info, freezeV8Object(toV8(impl->actions(scriptState), info.Holder(), info.GetIsolate()), info.GetIsolate()));
    privateSameObject.set(info.GetIsolate()->GetCurrentContext(), holder, info.GetReturnValue().Get());
}

static void actionsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationV8Internal::actionsAttributeGetter(info);
}

static void requestPermissionMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    NotificationPermissionCallback* deprecatedCallback;
    {
        if (!isUndefinedOrNull(info[0])) {
            if (!info[0]->IsFunction()) {
                v8SetReturnValue(info, ScriptPromise::rejectRaw(ScriptState::current(info.GetIsolate()), V8ThrowException::createTypeError(info.GetIsolate(), ExceptionMessages::failedToExecute("requestPermission", "Notification", "The callback provided as parameter 1 is not a function."))));
                return;
            }
            deprecatedCallback = V8NotificationPermissionCallback::create(v8::Local<v8::Function>::Cast(info[0]), ScriptState::current(info.GetIsolate()));
        } else {
            deprecatedCallback = nullptr;
        }
    }
    ScriptState* scriptState = ScriptState::forFunctionObject(info);
    ScriptPromise result = Notification::requestPermission(scriptState, deprecatedCallback);
    v8SetReturnValue(info, result.v8Value());
}

static void requestPermissionMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NotificationPermissionRequested);
    NotificationV8Internal::requestPermissionMethod(info);
}

static void closeMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Notification* impl = V8Notification::toImpl(info.Holder());
    impl->close();
}

static void closeMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NotificationClosed);
    NotificationV8Internal::closeMethod(info);
}

static void constructor(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ConstructionContext, "Notification", info.Holder(), info.GetIsolate());
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        exceptionState.throwIfNeeded();
        return;
    }
    V8StringResource<> title;
    NotificationOptions options;
    {
        title = info[0];
        if (!title.prepare())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('options') is not an object.");
            exceptionState.throwIfNeeded();
            return;
        }
        V8NotificationOptions::toImpl(info.GetIsolate(), info[1], options, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    ExecutionContext* executionContext = currentExecutionContext(info.GetIsolate());
    Notification* impl = Notification::create(executionContext, title, options, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8::Local<v8::Object> wrapper = info.Holder();
    wrapper = impl->associateWithWrapper(info.GetIsolate(), &V8Notification::wrapperTypeInfo, wrapper);
    v8SetReturnValue(info, wrapper);
}

} // namespace NotificationV8Internal

const V8DOMConfiguration::AccessorConfiguration V8NotificationAccessors[] = {
    {"permission", NotificationV8Internal::permissionAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInterface, V8DOMConfiguration::CheckHolder},
    {"maxActions", NotificationV8Internal::maxActionsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInterface, V8DOMConfiguration::CheckHolder},
    {"onclick", NotificationV8Internal::onclickAttributeGetterCallback, NotificationV8Internal::onclickAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onshow", NotificationV8Internal::onshowAttributeGetterCallback, NotificationV8Internal::onshowAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onerror", NotificationV8Internal::onerrorAttributeGetterCallback, NotificationV8Internal::onerrorAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"onclose", NotificationV8Internal::oncloseAttributeGetterCallback, NotificationV8Internal::oncloseAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"title", NotificationV8Internal::titleAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"dir", NotificationV8Internal::dirAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"lang", NotificationV8Internal::langAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"body", NotificationV8Internal::bodyAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"tag", NotificationV8Internal::tagAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"icon", NotificationV8Internal::iconAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"vibrate", NotificationV8Internal::vibrateAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"timestamp", NotificationV8Internal::timestampAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"renotify", NotificationV8Internal::renotifyAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"silent", NotificationV8Internal::silentAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"requireInteraction", NotificationV8Internal::requireInteractionAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"data", NotificationV8Internal::dataAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"actions", NotificationV8Internal::actionsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8NotificationMethods[] = {
    {"close", NotificationV8Internal::closeMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

void V8Notification::constructorCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::NotificationCreated);
    if (!info.IsConstructCall()) {
        V8ThrowException::throwTypeError(info.GetIsolate(), ExceptionMessages::constructorNotCallableAsFunction("Notification"));
        return;
    }

    if (ConstructorMode::current(info.GetIsolate()) == ConstructorMode::WrapExistingObject) {
        v8SetReturnValue(info, info.Holder());
        return;
    }

    NotificationV8Internal::constructor(info);
}

static void installV8NotificationTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8Notification::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8Notification::internalFieldCount);
    interfaceTemplate->SetCallHandler(V8Notification::constructorCallback);
    interfaceTemplate->SetLength(1);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    if (RuntimeEnabledFeatures::notificationsEnabled()) {
        V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8NotificationAccessors, WTF_ARRAY_LENGTH(V8NotificationAccessors));
        V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8NotificationMethods, WTF_ARRAY_LENGTH(V8NotificationMethods));
    }

    if (RuntimeEnabledFeatures::notificationBadgeEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessorbadgeConfiguration = \
        {"badge", NotificationV8Internal::badgeAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorbadgeConfiguration);
    }
}

v8::Local<v8::FunctionTemplate> V8Notification::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8NotificationTemplate);
}

bool V8Notification::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8Notification::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

Notification* V8Notification::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

void V8Notification::preparePrototypeAndInterfaceObject(v8::Local<v8::Context> context, const DOMWrapperWorld& world, v8::Local<v8::Object> prototypeObject, v8::Local<v8::Function> interfaceObject, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    v8::Isolate* isolate = context->GetIsolate();
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ExecutionContext* executionContext = toExecutionContext(prototypeObject->CreationContext());
    ASSERT(executionContext);
    if (executionContext && (executionContext->isDocument())) {
        const V8DOMConfiguration::MethodConfiguration requestPermissionMethodConfiguration = {"requestPermission", NotificationV8Internal::requestPermissionMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInterface};
        V8DOMConfiguration::installMethod(isolate, world, v8::Local<v8::Object>(), prototypeObject, interfaceObject, signature, requestPermissionMethodConfiguration);
    }
}

ActiveScriptWrappable* V8Notification::toActiveScriptWrappable(v8::Local<v8::Object> wrapper)
{
    return toImpl(wrapper);
}

} // namespace blink