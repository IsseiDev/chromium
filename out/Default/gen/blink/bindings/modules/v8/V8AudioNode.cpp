// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8AudioNode.h"

#include "bindings/core/v8/ExceptionState.h"
#include "bindings/core/v8/V8DOMConfiguration.h"
#include "bindings/core/v8/V8HiddenValue.h"
#include "bindings/core/v8/V8ObjectConstructor.h"
#include "bindings/modules/v8/V8AudioContext.h"
#include "bindings/modules/v8/V8AudioNode.h"
#include "bindings/modules/v8/V8AudioParam.h"
#include "core/dom/Document.h"
#include "core/frame/UseCounter.h"
#include "core/inspector/ConsoleMessage.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

// Suppress warning: global constructors, because struct WrapperTypeInfo is trivial
// and does not depend on another global objects.
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif
const WrapperTypeInfo V8AudioNode::wrapperTypeInfo = { gin::kEmbedderBlink, V8AudioNode::domTemplate, V8AudioNode::trace, V8AudioNode::traceWrappers, 0, 0, V8AudioNode::preparePrototypeAndInterfaceObject, nullptr, "AudioNode", &V8EventTarget::wrapperTypeInfo, WrapperTypeInfo::WrapperTypeObjectPrototype, WrapperTypeInfo::ObjectClassId, WrapperTypeInfo::InheritFromEventTarget, WrapperTypeInfo::Independent };
#if defined(COMPONENT_BUILD) && defined(WIN32) && COMPILER(CLANG)
#pragma clang diagnostic pop
#endif

// This static member must be declared by DEFINE_WRAPPERTYPEINFO in AudioNode.h.
// For details, see the comment of DEFINE_WRAPPERTYPEINFO in
// bindings/core/v8/ScriptWrappable.h.
const WrapperTypeInfo& AudioNode::s_wrapperTypeInfo = V8AudioNode::wrapperTypeInfo;

static_assert(
    !std::is_base_of<ActiveScriptWrappable, AudioNode>::value,
    "AudioNode inherits from ActiveScriptWrappable, but does not specify "
    "[ActiveScriptWrappable] extended attribute in the IDL file.  "
    "Be consistent.");

namespace AudioNodeV8Internal {

static void contextAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioNode* impl = V8AudioNode::toImpl(holder);
    BaseAudioContext* cppValue(WTF::getPtr(impl->context()));
    if (cppValue && DOMDataStore::setReturnValue(info.GetReturnValue(), cppValue))
        return;
    v8::Local<v8::Value> v8Value(toV8(cppValue, holder, info.GetIsolate()));
    if (!v8Value.IsEmpty()) {
        V8HiddenValue::setHiddenValue(ScriptState::current(info.GetIsolate()), holder, v8AtomicString(info.GetIsolate(), "context"), v8Value);
        v8SetReturnValue(info, v8Value);
    }
}

static void contextAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AudioNodeV8Internal::contextAttributeGetter(info);
}

static void numberOfInputsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioNode* impl = V8AudioNode::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->numberOfInputs());
}

static void numberOfInputsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AudioNodeV8Internal::numberOfInputsAttributeGetter(info);
}

static void numberOfOutputsAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioNode* impl = V8AudioNode::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->numberOfOutputs());
}

static void numberOfOutputsAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AudioNodeV8Internal::numberOfOutputsAttributeGetter(info);
}

static void channelCountAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioNode* impl = V8AudioNode::toImpl(holder);
    v8SetReturnValueUnsigned(info, impl->channelCount());
}

static void channelCountAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AudioNodeV8Internal::channelCountAttributeGetter(info);
}

static void channelCountAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "channelCount", "AudioNode", holder, info.GetIsolate());
    AudioNode* impl = V8AudioNode::toImpl(holder);
    unsigned cppValue = toUInt32(info.GetIsolate(), v8Value, NormalConversion, exceptionState);
    if (exceptionState.throwIfNeeded())
        return;
    impl->setChannelCount(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void channelCountAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    AudioNodeV8Internal::channelCountAttributeSetter(v8Value, info);
}

static void channelCountModeAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioNode* impl = V8AudioNode::toImpl(holder);
    v8SetReturnValueString(info, impl->channelCountMode(), info.GetIsolate());
}

static void channelCountModeAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AudioNodeV8Internal::channelCountModeAttributeGetter(info);
}

static void channelCountModeAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "channelCountMode", "AudioNode", holder, info.GetIsolate());
    AudioNode* impl = V8AudioNode::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    const char* validValues[] = {
        "max",
        "clamped-max",
        "explicit",
    };
    if (!isValidEnum(cppValue, validValues, WTF_ARRAY_LENGTH(validValues), "ChannelCountMode", exceptionState)) {
        currentExecutionContext(info.GetIsolate())->addConsoleMessage(ConsoleMessage::create(JSMessageSource, WarningMessageLevel, exceptionState.message()));
        return;
    }
    impl->setChannelCountMode(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void channelCountModeAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    AudioNodeV8Internal::channelCountModeAttributeSetter(v8Value, info);
}

static void channelInterpretationAttributeGetter(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    AudioNode* impl = V8AudioNode::toImpl(holder);
    v8SetReturnValueString(info, impl->channelInterpretation(), info.GetIsolate());
}

static void channelInterpretationAttributeGetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AudioNodeV8Internal::channelInterpretationAttributeGetter(info);
}

static void channelInterpretationAttributeSetter(v8::Local<v8::Value> v8Value, const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Object> holder = info.Holder();
    ExceptionState exceptionState(ExceptionState::SetterContext, "channelInterpretation", "AudioNode", holder, info.GetIsolate());
    AudioNode* impl = V8AudioNode::toImpl(holder);
    V8StringResource<> cppValue = v8Value;
    if (!cppValue.prepare())
        return;
    const char* validValues[] = {
        "speakers",
        "discrete",
    };
    if (!isValidEnum(cppValue, validValues, WTF_ARRAY_LENGTH(validValues), "ChannelInterpretation", exceptionState)) {
        currentExecutionContext(info.GetIsolate())->addConsoleMessage(ConsoleMessage::create(JSMessageSource, WarningMessageLevel, exceptionState.message()));
        return;
    }
    impl->setChannelInterpretation(cppValue, exceptionState);
    exceptionState.throwIfNeeded();
}

static void channelInterpretationAttributeSetterCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    v8::Local<v8::Value> v8Value = info[0];
    AudioNodeV8Internal::channelInterpretationAttributeSetter(v8Value, info);
}

static void connect1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "connect", "AudioNode", info.Holder(), info.GetIsolate());
    AudioNode* impl = V8AudioNode::toImpl(info.Holder());
    AudioNode* destination;
    unsigned output;
    unsigned input;
    {
        destination = V8AudioNode::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!destination) {
            exceptionState.throwTypeError("parameter 1 is not of type 'AudioNode'.");
            exceptionState.throwIfNeeded();
            return;
        }
        if (!info[1]->IsUndefined()) {
            output = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            output = 0u;
        }
        if (!info[2]->IsUndefined()) {
            input = toUInt32(info.GetIsolate(), info[2], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            input = 0u;
        }
    }
    AudioNode* result = impl->connect(destination, output, input, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
    v8SetReturnValue(info, result);
}

static void connect2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "connect", "AudioNode", info.Holder(), info.GetIsolate());
    AudioNode* impl = V8AudioNode::toImpl(info.Holder());
    AudioParam* destination;
    unsigned output;
    {
        destination = V8AudioParam::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!destination) {
            exceptionState.throwTypeError("parameter 1 is not of type 'AudioParam'.");
            exceptionState.throwIfNeeded();
            return;
        }
        if (!info[1]->IsUndefined()) {
            output = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
            if (exceptionState.throwIfNeeded())
                return;
        } else {
            output = 0u;
        }
    }
    impl->connect(destination, output, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void connectMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "connect", "AudioNode", info.Holder(), info.GetIsolate());
    switch (std::min(3, info.Length())) {
    case 1:
        if (V8AudioNode::hasInstance(info[0], info.GetIsolate())) {
            UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AudioNodeConnectToAudioNode);
            connect1Method(info);
            return;
        }
        if (V8AudioParam::hasInstance(info[0], info.GetIsolate())) {
            UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AudioNodeConnectToAudioParam);
            connect2Method(info);
            return;
        }
        break;
    case 2:
        if (V8AudioNode::hasInstance(info[0], info.GetIsolate())) {
            UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AudioNodeConnectToAudioNode);
            connect1Method(info);
            return;
        }
        if (V8AudioParam::hasInstance(info[0], info.GetIsolate())) {
            UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AudioNodeConnectToAudioParam);
            connect2Method(info);
            return;
        }
        break;
    case 3:
        if (true) {
            UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AudioNodeConnectToAudioNode);
            connect1Method(info);
            return;
        }
        break;
    default:
        break;
    }
    if (info.Length() < 1) {
        exceptionState.throwTypeError(ExceptionMessages::notEnoughArguments(1, info.Length()));
        exceptionState.throwIfNeeded();
        return;
    }
    exceptionState.throwTypeError("No function was found that matched the signature provided.");
    exceptionState.throwIfNeeded();
    return;
}

static void connectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AudioNodeV8Internal::connectMethod(info);
}

static void disconnect1Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AudioNode* impl = V8AudioNode::toImpl(info.Holder());
    impl->disconnect();
}

static void disconnect2Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "disconnect", "AudioNode", info.Holder(), info.GetIsolate());
    AudioNode* impl = V8AudioNode::toImpl(info.Holder());
    unsigned output;
    {
        output = toUInt32(info.GetIsolate(), info[0], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->disconnect(output, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void disconnect3Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "disconnect", "AudioNode", info.Holder(), info.GetIsolate());
    AudioNode* impl = V8AudioNode::toImpl(info.Holder());
    AudioNode* destination;
    {
        destination = V8AudioNode::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!destination) {
            exceptionState.throwTypeError("parameter 1 is not of type 'AudioNode'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    impl->disconnect(destination, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void disconnect4Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "disconnect", "AudioNode", info.Holder(), info.GetIsolate());
    AudioNode* impl = V8AudioNode::toImpl(info.Holder());
    AudioNode* destination;
    unsigned output;
    {
        destination = V8AudioNode::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!destination) {
            exceptionState.throwTypeError("parameter 1 is not of type 'AudioNode'.");
            exceptionState.throwIfNeeded();
            return;
        }
        output = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->disconnect(destination, output, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void disconnect5Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "disconnect", "AudioNode", info.Holder(), info.GetIsolate());
    AudioNode* impl = V8AudioNode::toImpl(info.Holder());
    AudioNode* destination;
    unsigned output;
    unsigned input;
    {
        destination = V8AudioNode::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!destination) {
            exceptionState.throwTypeError("parameter 1 is not of type 'AudioNode'.");
            exceptionState.throwIfNeeded();
            return;
        }
        output = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
        input = toUInt32(info.GetIsolate(), info[2], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->disconnect(destination, output, input, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void disconnect6Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "disconnect", "AudioNode", info.Holder(), info.GetIsolate());
    AudioNode* impl = V8AudioNode::toImpl(info.Holder());
    AudioParam* destination;
    {
        destination = V8AudioParam::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!destination) {
            exceptionState.throwTypeError("parameter 1 is not of type 'AudioParam'.");
            exceptionState.throwIfNeeded();
            return;
        }
    }
    impl->disconnect(destination, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void disconnect7Method(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "disconnect", "AudioNode", info.Holder(), info.GetIsolate());
    AudioNode* impl = V8AudioNode::toImpl(info.Holder());
    AudioParam* destination;
    unsigned output;
    {
        destination = V8AudioParam::toImplWithTypeCheck(info.GetIsolate(), info[0]);
        if (!destination) {
            exceptionState.throwTypeError("parameter 1 is not of type 'AudioParam'.");
            exceptionState.throwIfNeeded();
            return;
        }
        output = toUInt32(info.GetIsolate(), info[1], NormalConversion, exceptionState);
        if (exceptionState.throwIfNeeded())
            return;
    }
    impl->disconnect(destination, output, exceptionState);
    if (exceptionState.hadException()) {
        exceptionState.throwIfNeeded();
        return;
    }
}

static void disconnectMethod(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    ExceptionState exceptionState(ExceptionState::ExecutionContext, "disconnect", "AudioNode", info.Holder(), info.GetIsolate());
    switch (std::min(3, info.Length())) {
    case 0:
        if (true) {
            disconnect1Method(info);
            return;
        }
        break;
    case 1:
        if (V8AudioNode::hasInstance(info[0], info.GetIsolate())) {
            UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AudioNodeDisconnectFromAudioNode);
            disconnect3Method(info);
            return;
        }
        if (V8AudioParam::hasInstance(info[0], info.GetIsolate())) {
            UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AudioNodeDisconnectFromAudioParam);
            disconnect6Method(info);
            return;
        }
        if (true) {
            UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AudioNodeDisconnectFromAudioNode);
            disconnect2Method(info);
            return;
        }
        break;
    case 2:
        if (V8AudioNode::hasInstance(info[0], info.GetIsolate())) {
            UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AudioNodeDisconnectFromAudioNode);
            disconnect4Method(info);
            return;
        }
        if (V8AudioParam::hasInstance(info[0], info.GetIsolate())) {
            UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AudioNodeDisconnectFromAudioParam);
            disconnect7Method(info);
            return;
        }
        break;
    case 3:
        if (true) {
            UseCounter::countIfNotPrivateScript(info.GetIsolate(), currentExecutionContext(info.GetIsolate()), UseCounter::AudioNodeDisconnectFromAudioNode);
            disconnect5Method(info);
            return;
        }
        break;
    default:
        break;
    }
    exceptionState.throwTypeError("No function was found that matched the signature provided.");
    exceptionState.throwIfNeeded();
    return;
}

static void disconnectMethodCallback(const v8::FunctionCallbackInfo<v8::Value>& info)
{
    AudioNodeV8Internal::disconnectMethod(info);
}

} // namespace AudioNodeV8Internal

const V8DOMConfiguration::AccessorConfiguration V8AudioNodeAccessors[] = {
    {"context", AudioNodeV8Internal::contextAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"numberOfInputs", AudioNodeV8Internal::numberOfInputsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"numberOfOutputs", AudioNodeV8Internal::numberOfOutputsAttributeGetterCallback, 0, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::ReadOnly), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"channelCount", AudioNodeV8Internal::channelCountAttributeGetterCallback, AudioNodeV8Internal::channelCountAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"channelCountMode", AudioNodeV8Internal::channelCountModeAttributeGetterCallback, AudioNodeV8Internal::channelCountModeAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
    {"channelInterpretation", AudioNodeV8Internal::channelInterpretationAttributeGetterCallback, AudioNodeV8Internal::channelInterpretationAttributeSetterCallback, 0, 0, 0, v8::DEFAULT, static_cast<v8::PropertyAttribute>(v8::None), V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype, V8DOMConfiguration::CheckHolder},
};

const V8DOMConfiguration::MethodConfiguration V8AudioNodeMethods[] = {
    {"connect", AudioNodeV8Internal::connectMethodCallback, 0, 1, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
    {"disconnect", AudioNodeV8Internal::disconnectMethodCallback, 0, 0, v8::None, V8DOMConfiguration::ExposedToAllScripts, V8DOMConfiguration::OnPrototype},
};

static void installV8AudioNodeTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world, v8::Local<v8::FunctionTemplate> interfaceTemplate)
{
    // Initialize the interface object's template.
    V8DOMConfiguration::initializeDOMInterfaceTemplate(isolate, interfaceTemplate, V8AudioNode::wrapperTypeInfo.interfaceName, V8EventTarget::domTemplate(isolate, world), V8AudioNode::internalFieldCount);
    v8::Local<v8::Signature> signature = v8::Signature::New(isolate, interfaceTemplate);
    ALLOW_UNUSED_LOCAL(signature);
    v8::Local<v8::ObjectTemplate> instanceTemplate = interfaceTemplate->InstanceTemplate();
    ALLOW_UNUSED_LOCAL(instanceTemplate);
    v8::Local<v8::ObjectTemplate> prototypeTemplate = interfaceTemplate->PrototypeTemplate();
    ALLOW_UNUSED_LOCAL(prototypeTemplate);
    // Register DOM constants, attributes and operations.
    V8DOMConfiguration::installAccessors(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8AudioNodeAccessors, WTF_ARRAY_LENGTH(V8AudioNodeAccessors));
    V8DOMConfiguration::installMethods(isolate, world, instanceTemplate, prototypeTemplate, interfaceTemplate, signature, V8AudioNodeMethods, WTF_ARRAY_LENGTH(V8AudioNodeMethods));
}

v8::Local<v8::FunctionTemplate> V8AudioNode::domTemplate(v8::Isolate* isolate, const DOMWrapperWorld& world)
{
    return V8DOMConfiguration::domClassTemplate(isolate, world, const_cast<WrapperTypeInfo*>(&wrapperTypeInfo), installV8AudioNodeTemplate);
}

bool V8AudioNode::hasInstance(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->hasInstance(&wrapperTypeInfo, v8Value);
}

v8::Local<v8::Object> V8AudioNode::findInstanceInPrototypeChain(v8::Local<v8::Value> v8Value, v8::Isolate* isolate)
{
    return V8PerIsolateData::from(isolate)->findInstanceInPrototypeChain(&wrapperTypeInfo, v8Value);
}

AudioNode* V8AudioNode::toImplWithTypeCheck(v8::Isolate* isolate, v8::Local<v8::Value> value)
{
    return hasInstance(value, isolate) ? toImpl(v8::Local<v8::Object>::Cast(value)) : nullptr;
}

} // namespace blink
