// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8WorkerGlobalScopePartial.h"

#include "bindings/core/v8/Dictionary.h"
#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/ScriptPromise.h"
#include "bindings/core/v8/ScriptState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/core/v8/V8WorkerGlobalScope.h"
#include "bindings/modules/v8/V8CacheStorage.h"
#include "bindings/modules/v8/V8Crypto.h"
#include "bindings/modules/v8/V8IDBCursor.h"
#include "bindings/modules/v8/V8IDBDatabase.h"
#include "bindings/modules/v8/V8IDBFactory.h"
#include "bindings/modules/v8/V8IDBIndex.h"
#include "bindings/modules/v8/V8IDBKeyRange.h"
#include "bindings/modules/v8/V8IDBObjectStore.h"
#include "bindings/modules/v8/V8IDBRequest.h"
#include "bindings/modules/v8/V8IDBTransaction.h"
#include "bindings/modules/v8/V8Request.h"
#include "core/dom/Document.h"
#include "core/frame/Deprecation.h"
#include "core/frame/UseCounter.h"
#include "modules/cachestorage/GlobalCacheStorage.h"
#include "modules/crypto/WorkerGlobalScopeCrypto.h"
#include "modules/fetch/GlobalFetch.h"
#include "modules/indexeddb/GlobalIndexedDB.h"
#include "platform/RuntimeEnabledFeatures.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

namespace WorkerGlobalScopePartialV8Internal {

static void cachesAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    ExceptionState exceptionState(ExceptionState::GetterContext, "caches", "WorkerGlobalScope", holder, info.GetIsolate());
    CacheStorage* cppValue(GlobalCacheStorage::caches(*impl, exceptionState));
    if (UNLIKELY(exceptionState.throwIfNeeded()))
        return;
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "caches"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void cachesAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::GlobalCacheStorage);
    WorkerGlobalScopePartialV8Internal::cachesAttributeGetter(info);
}

static void cryptoAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    Crypto* cppValue(WorkerGlobalScopeCrypto::crypto(*impl));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "crypto"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void cryptoAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopePartialV8Internal::cryptoAttributeGetter(info);
}

static void webkitIndexedDBAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    IDBFactory* cppValue(GlobalIndexedDB::indexedDB(*impl));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "webkitIndexedDB"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void webkitIndexedDBAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedIndexedDB);
    WorkerGlobalScopePartialV8Internal::webkitIndexedDBAttributeGetter(info);
}

static void webkitIDBCursorConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedIDBCursorConstructor);
    v8ConstructorAttributeGetter(property, info);
}

static void webkitIDBDatabaseConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedIDBDatabaseConstructor);
    v8ConstructorAttributeGetter(property, info);
}

static void webkitIDBFactoryConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedIDBFactoryConstructor);
    v8ConstructorAttributeGetter(property, info);
}

static void webkitIDBIndexConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedIDBIndexConstructor);
    v8ConstructorAttributeGetter(property, info);
}

static void webkitIDBKeyRangeConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedIDBKeyRangeConstructor);
    v8ConstructorAttributeGetter(property, info);
}

static void webkitIDBObjectStoreConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedIDBObjectStoreConstructor);
    v8ConstructorAttributeGetter(property, info);
}

static void webkitIDBRequestConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedIDBRequestConstructor);
    v8ConstructorAttributeGetter(property, info);
}

static void webkitIDBTransactionConstructorGetterCallback(v8::Local<v8::Name> property, const v8::PropertyCallbackInfo<v8::Value>& info)
{
    Deprecation::countDeprecationIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::PrefixedIDBTransactionConstructor);
    v8ConstructorAttributeGetter(property, info);
}

static void indexedDBAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(holder);
    IDBFactory* cppValue(GlobalIndexedDB::indexedDB(*impl));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "indexedDB"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void indexedDBAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopePartialV8Internal::indexedDBAttributeGetter(info);
}

static void fetchMethodPromise(const v8::FunctionCallbackInfo<v8::Value>& info, ExceptionState& exceptionState)
{
    if (UNLIKELY(info.Length() < 1)) {
        setMinimumArityTypeError(exceptionState, 1, info.Length());
        return;
    }
    WorkerGlobalScope* impl = V8WorkerGlobalScope::toImpl(info.Holder());
    RequestOrUSVString input;
    Dictionary init;
    {
        V8RequestOrUSVString::toImpl(info.GetIsolate(), info[0], input, UnionTypeConversionMode::NotNullable, exceptionState);
        if (exceptionState.hadException())
            return;
        if (!isUndefinedOrNull(info[1]) && !info[1]->IsObject()) {
            exceptionState.throwTypeError("parameter 2 ('init') is not an object.");
            return;
        }
        init = Dictionary(info[1], info.GetIsolate(), exceptionState);
        if (exceptionState.hadException())
            return;
    }
    ScriptState* scriptState = ScriptState::forReceiverObject(info);
    ScriptPromise result = GlobalFetch::fetch(scriptState, *impl, input, init, exceptionState);
    if (exceptionState.hadException()) {
        return;
    }
    v8SetReturnValue(info, result.v8Value());
}

static void fetchMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "fetch", "WorkerGlobalScope", info.Holder(), info.GetIsolate());
    fetchMethodPromise(info, exceptionState);
    if (exceptionState.hadException())
        v8SetReturnValue(info, exceptionState.reject(ScriptState::current(info.GetIsolate())).v8Value());
}

static void fetchMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    WorkerGlobalScopePartialV8Internal::fetchMethod(info);
}

} // namespace WorkerGlobalScopePartialV8Internal

// Suppress warning: global constructors, because AttributeConfiguration is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const V8DOMConfiguration::AttributeConfiguration V8WorkerGlobalScopeAttributes[] = {
    {"webkitIDBCursor", WorkerGlobalScopePartialV8Internal::webkitIDBCursorConstructorGetterCallback, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8IDBCursor::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder},
    {"webkitIDBDatabase", WorkerGlobalScopePartialV8Internal::webkitIDBDatabaseConstructorGetterCallback, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8IDBDatabase::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder},
    {"webkitIDBFactory", WorkerGlobalScopePartialV8Internal::webkitIDBFactoryConstructorGetterCallback, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8IDBFactory::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder},
    {"webkitIDBIndex", WorkerGlobalScopePartialV8Internal::webkitIDBIndexConstructorGetterCallback, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8IDBIndex::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder},
    {"webkitIDBKeyRange", WorkerGlobalScopePartialV8Internal::webkitIDBKeyRangeConstructorGetterCallback, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8IDBKeyRange::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder},
    {"webkitIDBObjectStore", WorkerGlobalScopePartialV8Internal::webkitIDBObjectStoreConstructorGetterCallback, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8IDBObjectStore::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder},
    {"webkitIDBRequest", WorkerGlobalScopePartialV8Internal::webkitIDBRequestConstructorGetterCallback, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8IDBRequest::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder},
    {"webkitIDBTransaction", WorkerGlobalScopePartialV8Internal::webkitIDBTransactionConstructorGetterCallback, 0, 0, 0, const_cast<WrapperTypeInfo*>(&V8IDBTransaction::wrapperTypeInfo), static_cast<v8::AccessControl>(v8::DEFAULT), static_cast<v8::PropertyAttribute>(v8::DontEnum), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnInstance, V8DOMConfiguration::CheckHolder},
};
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

const V8DOMConfiguration::AccessorConfiguration V8WorkerGlobalScopeAccessors[] = {
    {"crypto", WorkerGlobalScopePartialV8Internal::cryptoAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"webkitIndexedDB", WorkerGlobalScopePartialV8Internal::webkitIndexedDBAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"indexedDB", WorkerGlobalScopePartialV8Internal::indexedDBAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8WorkerGlobalScopeMethods[] = {
    {"fetch", WorkerGlobalScopePartialV8Internal::fetchMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

void V8WorkerGlobalScopePartial::installV8WorkerGlobalScopeTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8WorkerGlobalScope::installV8WorkerGlobalScopeTemplate(isolate, world, interfaceTemplate);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAttributes(isolate, world, instanceTemplate, prototypeTemplate, V8WorkerGlobalScopeAttributes, WTF_ARRAY_LENGTH(V8WorkerGlobalScopeAttributes));
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8WorkerGlobalScopeAccessors, WTF_ARRAY_LENGTH(V8WorkerGlobalScopeAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8WorkerGlobalScopeMethods, WTF_ARRAY_LENGTH(V8WorkerGlobalScopeMethods));

    if (RuntimeEnabledFeatures::globalCacheStorageEnabled()) {
        const V8DOMConfiguration::AccessorConfiguration accessorcachesConfiguration = \
        {"caches", WorkerGlobalScopePartialV8Internal::cachesAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder};
        V8DOMConfiguration::installAccessor(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, accessorcachesConfiguration);
    }
}

void V8WorkerGlobalScopePartial::preparePrototypeAndInterfaceObject(v8::Local<v8::Context> context, const DOMWrapperWorld& world, v8::Local<v8::Object> prototypeObject, v8::Local<v8::Function> interfaceObject, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    V8WorkerGlobalScope::preparePrototypeAndInterfaceObject(context, world, prototypeObject, interfaceObject, interfaceTemplate);
}

void V8WorkerGlobalScopePartial::initialize()
{
    // Should be invoked from ModulesInitializer.
    V8WorkerGlobalScope::updateWrapperTypeInfo(
        &V8WorkerGlobalScopePartial::installV8WorkerGlobalScopeTemplate,
        &V8WorkerGlobalScopePartial::preparePrototypeAndInterfaceObject);
}

} // namespace blink