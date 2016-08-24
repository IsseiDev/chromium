// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Memory_h
#define protocol_Memory_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace Memory {

// ------------- Forward and enum declarations.
// Memory pressure level.
using PressureLevel = WTF::String;

namespace PressureLevelEnum {
CORE_EXPORT extern const char* Moderate;
CORE_EXPORT extern const char* Critical;
} // namespace PressureLevelEnum

// ------------- Type and builder declarations.

// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual void getDOMCounters(ErrorString*, int* out_documents, int* out_nodes, int* out_jsEventListeners) = 0;

    virtual void disable(ErrorString*) { }

protected:
    virtual ~Backend() { }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }

    void flush() { m_frontendChannel->flushProtocolNotifications(); }
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, blink::protocol::Memory::Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CORE_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace Memory
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Memory_h)
