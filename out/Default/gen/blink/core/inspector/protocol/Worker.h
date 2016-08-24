// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Worker_h
#define protocol_Worker_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace Worker {

// ------------- Forward and enum declarations.

// ------------- Type and builder declarations.

// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual void enable(ErrorString*) = 0;
    virtual void disable(ErrorString*) = 0;
    virtual void sendMessageToWorker(ErrorString*, const WTF::String& in_workerId, const WTF::String& in_message) = 0;
    virtual void setWaitForDebuggerOnStart(ErrorString*, bool in_value) = 0;


protected:
    virtual ~Backend() { }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void workerCreated(const WTF::String& workerId, const WTF::String& url, bool waitingForDebugger);
    void workerTerminated(const WTF::String& workerId);
    void dispatchMessageFromWorker(const WTF::String& workerId, const WTF::String& message);

    void flush() { m_frontendChannel->flushProtocolNotifications(); }
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, blink::protocol::Worker::Backend*);

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

} // namespace Worker
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Worker_h)
