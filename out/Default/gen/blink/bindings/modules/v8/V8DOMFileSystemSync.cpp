// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8DOMFileSystemSync.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8DirectoryEntrySync.h"
#include "core/dom/Document.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8DOMFileSystemSync::wrapperTypeInfo = { gin::kEmbedderBlink, V8DOMFileSystemSync::domTemplate, V8DOMFileSystemSync::trace, V8DOMFileSystemSync::traceWrappers, 0, 0, V8DOMFileSystemSync::preparePrototypeAndInterfaceObject, nullptr, "DOMFileSystemSync", 0, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::NotInheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in DOMFileSystemSync.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& DOMFileSystemSync::s_wrapperTypeInfo = V8DOMFileSystemSync::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, DOMFileSystemSync>::value,
    "DOMFileSystemSync inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace DOMFileSystemSyncV8Internal {

static void nameAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMFileSystemSync* impl = V8DOMFileSystemSync::toImpl(holder);
    v8SetReturnValueString(info, impl->name(), info.GetIsolate());
}

static void nameAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMFileSystemSyncV8Internal::nameAttributeGetter(info);
}

static void rootAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    DOMFileSystemSync* impl = V8DOMFileSystemSync::toImpl(holder);
    DirectoryEntrySync* cppValue(WTF::getPtr(impl->root()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "root"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void rootAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    DOMFileSystemSyncV8Internal::rootAttributeGetter(info);
}

} // namespace DOMFileSystemSyncV8Internal

const V8DOMConfiguration::AccessorConfiguration V8DOMFileSystemSyncAccessors[] = {
    {"name", DOMFileSystemSyncV8Internal::nameAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"root", DOMFileSystemSyncV8Internal::rootAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

static void installV8DOMFileSystemSyncTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8DOMFileSystemSync::wrapperTypeInfo.interfaceName, v8::Local<v8::FunctionTemplate>(), V8DOMFileSystemSync::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8DOMFileSystemSyncAccessors, WTF_ARRAY_LENGTH(V8DOMFileSystemSyncAccessors));
}

v8::Local<v8::FunctionTemplate> V8DOMFileSystemSync::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8DOMFileSystemSyncTemplate);
}

bool V8DOMFileSystemSync::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8DOMFileSystemSync::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

DOMFileSystemSync* V8DOMFileSystemSync::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
