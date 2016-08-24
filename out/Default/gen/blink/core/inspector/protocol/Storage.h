// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Storage_h
#define protocol_Storage_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace Storage {

// ------------- Forward and enum declarations.
// Enum of possible storage types.
using StorageType = WTF::String;

namespace StorageTypeEnum {
CORE_EXPORT extern const char* Appcache;
CORE_EXPORT extern const char* Cookies;
CORE_EXPORT extern const char* File_systems;
CORE_EXPORT extern const char* Indexeddb;
CORE_EXPORT extern const char* Local_storage;
CORE_EXPORT extern const char* Shader_cache;
CORE_EXPORT extern const char* Websql;
CORE_EXPORT extern const char* Service_workers;
CORE_EXPORT extern const char* Cache_storage;
CORE_EXPORT extern const char* All;
} // namespace StorageTypeEnum

// ------------- Type and builder declarations.

// ------------- Backend interface.

class CORE_EXPORT Backend {
public:

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
    static void wire(UberDispatcher*, blink::protocol::Storage::Backend*);

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

} // namespace Storage
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Storage_h)
