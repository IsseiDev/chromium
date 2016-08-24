// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#include "V8StringCallback.h"

#include "bindings/core/v8/ScriptController.h"
#include "bindings/core/v8/V8Binding.h"
#include "core/dom/ExecutionContext.h"
#include "wtf/Assertions.h"
#include "wtf/GetPtr.h"
#include "wtf/RefPtr.h"

namespace blink {

V8StringCallback::V8StringCallback(v8::Local<v8::Function> callback, ScriptState* scriptState)
    : ActiveDOMCallback(scriptState->getExecutionContext())
    , m_scriptState(scriptState)
{
    m_callback.set(scriptState->isolate(), callback);
}

V8StringCallback::~V8StringCallback()
{
}

DEFINE_TRACE(V8StringCallback)
{
    StringCallback::trace(visitor);
    ActiveDOMCallback::trace(visitor);
}

void V8StringCallback::handleEvent(const String& data)
{
    if (!canInvokeCallback())
        return;

    if (!m_scriptState->contextIsValid())
        return;

    ScriptState::Scope scope(m_scriptState.get());
    v8::Local<v8::Value> dataHandle = v8String(m_scriptState->isolate(), data);
    v8::Local<v8::Value> argv[] = { dataHandle };

    V8ScriptRunner::callFunction(m_callback.newLocal(m_scriptState->isolate()), m_scriptState->getExecutionContext(), v8::Undefined(m_scriptState->isolate()), 1, argv, m_scriptState->isolate());
}

} // namespace blink
