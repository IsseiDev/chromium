// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Storage.h"

namespace blink {
namespace protocol {
namespace Storage {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Storage";
const char Metainfo::commandPrefix[] = "Storage.";
const char Metainfo::version[] = "1.1";

namespace StorageTypeEnum {
const char* Appcache = "appcache";
const char* Cookies = "cookies";
const char* File_systems = "file_systems";
const char* Indexeddb = "indexeddb";
const char* Local_storage = "local_storage";
const char* Shader_cache = "shader_cache";
const char* Websql = "websql";
const char* Service_workers = "service_workers";
const char* Cache_storage = "cache_storage";
const char* All = "all";
} // namespace StorageTypeEnum

// ------------- Enum values from params.


// ------------- Frontend notifications.

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend)
        : DispatcherBase(frontendChannel)
        , m_backend(backend) {
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;


    Backend* m_backend;
};

void DispatcherImpl::dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject)
{
    protocol::HashMap<String16, CallHandler>::iterator it = m_dispatchMap.find(method);
    if (it == m_dispatchMap.end()) {
        reportProtocolError(callId, MethodNotFound, "'" + method + "' wasn't found", nullptr);
        return;
    }

    protocol::ErrorSupport errors;
    (this->*(it->second))(callId, std::move(messageObject), &errors);
}


// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Storage", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Storage
} // namespace protocol
} // namespace blink
