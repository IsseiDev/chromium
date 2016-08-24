// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Schema_imported_h
#define protocol_Schema_imported_h

#include "platform/inspector_protocol/InspectorProtocol.h"
#include "platform/v8_inspector/public/protocol/Schema.h"

namespace blink {
namespace protocol {

template<>
struct ValueConversions<Schema::API::Domain> {
    static std::unique_ptr<Schema::API::Domain> parse(protocol::Value* value, ErrorSupport* errors)
    {
        if (!value) {
            errors->addError("value expected");
            return nullptr;
        }
        std::unique_ptr<Schema::API::Domain> result = Schema::API::Domain::fromJSONString(value->toJSONString());
        if (!result)
            errors->addError("cannot parse");
        return result;
    }

    static std::unique_ptr<protocol::Value> serialize(Schema::API::Domain* value)
    {
        return SerializedValue::create(value->toJSONString());
    }

    static std::unique_ptr<protocol::Value> serialize(const std::unique_ptr<Schema::API::Domain>& value)
    {
        return SerializedValue::create(value->toJSONString());
    }
};

} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Schema_imported_h)
