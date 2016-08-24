// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Debugger_imported_h
#define protocol_Debugger_imported_h

#include "platform/inspector_protocol/InspectorProtocol.h"
#include "platform/v8_inspector/public/protocol/Debugger.h"

namespace blink {
namespace protocol {

template<>
struct ValueConversions<Debugger::API::SearchMatch> {
    static std::unique_ptr<Debugger::API::SearchMatch> parse(protocol::Value* value, ErrorSupport* errors)
    {
        if (!value) {
            errors->addError("value expected");
            return nullptr;
        }
        std::unique_ptr<Debugger::API::SearchMatch> result = Debugger::API::SearchMatch::fromJSONString(value->toJSONString());
        if (!result)
            errors->addError("cannot parse");
        return result;
    }

    static std::unique_ptr<protocol::Value> serialize(Debugger::API::SearchMatch* value)
    {
        return SerializedValue::create(value->toJSONString());
    }

    static std::unique_ptr<protocol::Value> serialize(const std::unique_ptr<Debugger::API::SearchMatch>& value)
    {
        return SerializedValue::create(value->toJSONString());
    }
};

} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Debugger_imported_h)
