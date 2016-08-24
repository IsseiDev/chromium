// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_DOMStorage_h
#define protocol_DOMStorage_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace DOMStorage {

// ------------- Forward and enum declarations.
// DOM Storage identifier.
class StorageId;

// ------------- Type and builder declarations.

// DOM Storage identifier.
class CORE_EXPORT StorageId {
    PROTOCOL_DISALLOW_COPY(StorageId);
public:
    static std::unique_ptr<StorageId> parse(protocol::Value* value, ErrorSupport* errors);

    ~StorageId() { }

    WTF::String getSecurityOrigin() { return m_securityOrigin; }
    void setSecurityOrigin(const WTF::String& value) { m_securityOrigin = value; }

    bool getIsLocalStorage() { return m_isLocalStorage; }
    void setIsLocalStorage(bool value) { m_isLocalStorage = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<StorageId> clone() const;

    template<int STATE>
    class StorageIdBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          SecurityOriginSet = 1 << 1,
          IsLocalStorageSet = 1 << 2,
            AllFieldsSet = (SecurityOriginSet | IsLocalStorageSet | 0)};


        StorageIdBuilder<STATE | SecurityOriginSet>& setSecurityOrigin(const WTF::String& value)
        {
            static_assert(!(STATE & SecurityOriginSet), "property securityOrigin should not be set yet");
            m_result->setSecurityOrigin(value);
            return castState<SecurityOriginSet>();
        }

        StorageIdBuilder<STATE | IsLocalStorageSet>& setIsLocalStorage(bool value)
        {
            static_assert(!(STATE & IsLocalStorageSet), "property isLocalStorage should not be set yet");
            m_result->setIsLocalStorage(value);
            return castState<IsLocalStorageSet>();
        }

        std::unique_ptr<StorageId> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class StorageId;
        StorageIdBuilder() : m_result(new StorageId()) { }

        template<int STEP> StorageIdBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<StorageIdBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOMStorage::StorageId> m_result;
    };

    static StorageIdBuilder<0> create()
    {
        return StorageIdBuilder<0>();
    }

private:
    StorageId()
    {
          m_isLocalStorage = false;
    }

    WTF::String m_securityOrigin;
    bool m_isLocalStorage;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual void enable(ErrorString*) = 0;
    virtual void disable(ErrorString*) = 0;
    virtual void getDOMStorageItems(ErrorString*, std::unique_ptr<protocol::DOMStorage::StorageId> in_storageId, std::unique_ptr<protocol::Array<protocol::Array<WTF::String>>>* out_entries) = 0;
    virtual void setDOMStorageItem(ErrorString*, std::unique_ptr<protocol::DOMStorage::StorageId> in_storageId, const WTF::String& in_key, const WTF::String& in_value) = 0;
    virtual void removeDOMStorageItem(ErrorString*, std::unique_ptr<protocol::DOMStorage::StorageId> in_storageId, const WTF::String& in_key) = 0;


protected:
    virtual ~Backend() { }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void domStorageItemsCleared(std::unique_ptr<protocol::DOMStorage::StorageId> storageId);
    void domStorageItemRemoved(std::unique_ptr<protocol::DOMStorage::StorageId> storageId, const WTF::String& key);
    void domStorageItemAdded(std::unique_ptr<protocol::DOMStorage::StorageId> storageId, const WTF::String& key, const WTF::String& newValue);
    void domStorageItemUpdated(std::unique_ptr<protocol::DOMStorage::StorageId> storageId, const WTF::String& key, const WTF::String& oldValue, const WTF::String& newValue);

    void flush() { m_frontendChannel->flushProtocolNotifications(); }
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, blink::protocol::DOMStorage::Backend*);

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

} // namespace DOMStorage
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_DOMStorage_h)
