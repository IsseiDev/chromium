// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Rendering_h
#define protocol_Rendering_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace Rendering {

// ------------- Forward and enum declarations.

// ------------- Type and builder declarations.

// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual void setShowPaintRects(ErrorString*, bool in_result) = 0;
    virtual void setShowDebugBorders(ErrorString*, bool in_show) = 0;
    virtual void setShowFPSCounter(ErrorString*, bool in_show) = 0;
    virtual void setShowScrollBottleneckRects(ErrorString*, bool in_show) = 0;
    virtual void setShowViewportSizeOnResize(ErrorString*, bool in_show) = 0;

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
    static void wire(UberDispatcher*, blink::protocol::Rendering::Backend*);

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

} // namespace Rendering
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Rendering_h)
