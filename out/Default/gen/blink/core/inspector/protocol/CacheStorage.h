// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_CacheStorage_h
#define protocol_CacheStorage_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace CacheStorage {

// ------------- Forward and enum declarations.
// Unique identifier of the Cache object.
using CacheId = WTF::String;
// Data entry.
class DataEntry;
// Cache identifier.
class Cache;

// ------------- Type and builder declarations.

// Data entry.
class CORE_EXPORT DataEntry {
    PROTOCOL_DISALLOW_COPY(DataEntry);
public:
    static std::unique_ptr<DataEntry> parse(protocol::Value* value, ErrorSupport* errors);

    ~DataEntry() { }

    WTF::String getRequest() { return m_request; }
    void setRequest(const WTF::String& value) { m_request = value; }

    WTF::String getResponse() { return m_response; }
    void setResponse(const WTF::String& value) { m_response = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<DataEntry> clone() const;

    template<int STATE>
    class DataEntryBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          RequestSet = 1 << 1,
          ResponseSet = 1 << 2,
            AllFieldsSet = (RequestSet | ResponseSet | 0)};


        DataEntryBuilder<STATE | RequestSet>& setRequest(const WTF::String& value)
        {
            static_assert(!(STATE & RequestSet), "property request should not be set yet");
            m_result->setRequest(value);
            return castState<RequestSet>();
        }

        DataEntryBuilder<STATE | ResponseSet>& setResponse(const WTF::String& value)
        {
            static_assert(!(STATE & ResponseSet), "property response should not be set yet");
            m_result->setResponse(value);
            return castState<ResponseSet>();
        }

        std::unique_ptr<DataEntry> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class DataEntry;
        DataEntryBuilder() : m_result(new DataEntry()) { }

        template<int STEP> DataEntryBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<DataEntryBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::CacheStorage::DataEntry> m_result;
    };

    static DataEntryBuilder<0> create()
    {
        return DataEntryBuilder<0>();
    }

private:
    DataEntry()
    {
    }

    WTF::String m_request;
    WTF::String m_response;
};


// Cache identifier.
class CORE_EXPORT Cache {
    PROTOCOL_DISALLOW_COPY(Cache);
public:
    static std::unique_ptr<Cache> parse(protocol::Value* value, ErrorSupport* errors);

    ~Cache() { }

    WTF::String getCacheId() { return m_cacheId; }
    void setCacheId(const WTF::String& value) { m_cacheId = value; }

    WTF::String getSecurityOrigin() { return m_securityOrigin; }
    void setSecurityOrigin(const WTF::String& value) { m_securityOrigin = value; }

    WTF::String getCacheName() { return m_cacheName; }
    void setCacheName(const WTF::String& value) { m_cacheName = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<Cache> clone() const;

    template<int STATE>
    class CacheBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          CacheIdSet = 1 << 1,
          SecurityOriginSet = 1 << 2,
          CacheNameSet = 1 << 3,
            AllFieldsSet = (CacheIdSet | SecurityOriginSet | CacheNameSet | 0)};


        CacheBuilder<STATE | CacheIdSet>& setCacheId(const WTF::String& value)
        {
            static_assert(!(STATE & CacheIdSet), "property cacheId should not be set yet");
            m_result->setCacheId(value);
            return castState<CacheIdSet>();
        }

        CacheBuilder<STATE | SecurityOriginSet>& setSecurityOrigin(const WTF::String& value)
        {
            static_assert(!(STATE & SecurityOriginSet), "property securityOrigin should not be set yet");
            m_result->setSecurityOrigin(value);
            return castState<SecurityOriginSet>();
        }

        CacheBuilder<STATE | CacheNameSet>& setCacheName(const WTF::String& value)
        {
            static_assert(!(STATE & CacheNameSet), "property cacheName should not be set yet");
            m_result->setCacheName(value);
            return castState<CacheNameSet>();
        }

        std::unique_ptr<Cache> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Cache;
        CacheBuilder() : m_result(new Cache()) { }

        template<int STEP> CacheBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CacheBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::CacheStorage::Cache> m_result;
    };

    static CacheBuilder<0> create()
    {
        return CacheBuilder<0>();
    }

private:
    Cache()
    {
    }

    WTF::String m_cacheId;
    WTF::String m_securityOrigin;
    WTF::String m_cacheName;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    class CORE_EXPORT RequestCacheNamesCallback : public BackendCallback {
    public:
        virtual void sendSuccess(std::unique_ptr<protocol::Array<protocol::CacheStorage::Cache>> caches) = 0;
    };
    virtual void requestCacheNames(const WTF::String& in_securityOrigin, std::unique_ptr<RequestCacheNamesCallback> callback) = 0;
    class CORE_EXPORT RequestEntriesCallback : public BackendCallback {
    public:
        virtual void sendSuccess(std::unique_ptr<protocol::Array<protocol::CacheStorage::DataEntry>> cacheDataEntries, bool hasMore) = 0;
    };
    virtual void requestEntries(const WTF::String& in_cacheId, int in_skipCount, int in_pageSize, std::unique_ptr<RequestEntriesCallback> callback) = 0;
    class CORE_EXPORT DeleteCacheCallback : public BackendCallback {
    public:
        virtual void sendSuccess() = 0;
    };
    virtual void deleteCache(const WTF::String& in_cacheId, std::unique_ptr<DeleteCacheCallback> callback) = 0;
    class CORE_EXPORT DeleteEntryCallback : public BackendCallback {
    public:
        virtual void sendSuccess() = 0;
    };
    virtual void deleteEntry(const WTF::String& in_cacheId, const WTF::String& in_request, std::unique_ptr<DeleteEntryCallback> callback) = 0;

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
    static void wire(UberDispatcher*, blink::protocol::CacheStorage::Backend*);

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

} // namespace CacheStorage
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_CacheStorage_h)
