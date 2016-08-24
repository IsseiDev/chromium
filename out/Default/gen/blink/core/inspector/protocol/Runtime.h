// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Runtime_imported_h
#define protocol_Runtime_imported_h

#include "platform/inspector_protocol/InspectorProtocol.h"
#include "platform/v8_inspector/public/protocol/Runtime.h"

namespace blink {
namespace protocol {

template<>
struct ValueConversions<Runtime::API::RemoteObject> {
    static std::unique_ptr<Runtime::API::RemoteObject> parse(protocol::Value* value, ErrorSupport* errors)
    {
        if (!value) {
            errors->addError("value expected");
            return nullptr;
        }
        std::unique_ptr<Runtime::API::RemoteObject> result = Runtime::API::RemoteObject::fromJSONString(value->toJSONString());
        if (!result)
            errors->addError("cannot parse");
        return result;
    }

    static std::unique_ptr<protocol::Value> serialize(Runtime::API::RemoteObject* value)
    {
        return SerializedValue::create(value->toJSONString());
    }

    static std::unique_ptr<protocol::Value> serialize(const std::unique_ptr<Runtime::API::RemoteObject>& value)
    {
        return SerializedValue::create(value->toJSONString());
    }
};

template<>
struct ValueConversions<Runtime::API::StackTrace> {
    static std::unique_ptr<Runtime::API::StackTrace> parse(protocol::Value* value, ErrorSupport* errors)
    {
        if (!value) {
            errors->addError("value expected");
            return nullptr;
        }
        std::unique_ptr<Runtime::API::StackTrace> result = Runtime::API::StackTrace::fromJSONString(value->toJSONString());
        if (!result)
            errors->addError("cannot parse");
        return result;
    }

    static std::unique_ptr<protocol::Value> serialize(Runtime::API::StackTrace* value)
    {
        return SerializedValue::create(value->toJSONString());
    }

    static std::unique_ptr<protocol::Value> serialize(const std::unique_ptr<Runtime::API::StackTrace>& value)
    {
        return SerializedValue::create(value->toJSONString());
    }
};

} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Runtime_imported_h)
