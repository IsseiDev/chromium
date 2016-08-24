// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Database_h
#define protocol_Database_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace Database {

// ------------- Forward and enum declarations.
// Unique identifier of Database object.
using DatabaseId = WTF::String;
// Database object.
class Database;
// Database error.
class Error;

// ------------- Type and builder declarations.

// Database object.
class CORE_EXPORT Database {
    PROTOCOL_DISALLOW_COPY(Database);
public:
    static std::unique_ptr<Database> parse(protocol::Value* value, ErrorSupport* errors);

    ~Database() { }

    WTF::String getId() { return m_id; }
    void setId(const WTF::String& value) { m_id = value; }

    WTF::String getDomain() { return m_domain; }
    void setDomain(const WTF::String& value) { m_domain = value; }

    WTF::String getName() { return m_name; }
    void setName(const WTF::String& value) { m_name = value; }

    WTF::String getVersion() { return m_version; }
    void setVersion(const WTF::String& value) { m_version = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<Database> clone() const;

    template<int STATE>
    class DatabaseBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          IdSet = 1 << 1,
          DomainSet = 1 << 2,
          NameSet = 1 << 3,
          VersionSet = 1 << 4,
            AllFieldsSet = (IdSet | DomainSet | NameSet | VersionSet | 0)};


        DatabaseBuilder<STATE | IdSet>& setId(const WTF::String& value)
        {
            static_assert(!(STATE & IdSet), "property id should not be set yet");
            m_result->setId(value);
            return castState<IdSet>();
        }

        DatabaseBuilder<STATE | DomainSet>& setDomain(const WTF::String& value)
        {
            static_assert(!(STATE & DomainSet), "property domain should not be set yet");
            m_result->setDomain(value);
            return castState<DomainSet>();
        }

        DatabaseBuilder<STATE | NameSet>& setName(const WTF::String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->setName(value);
            return castState<NameSet>();
        }

        DatabaseBuilder<STATE | VersionSet>& setVersion(const WTF::String& value)
        {
            static_assert(!(STATE & VersionSet), "property version should not be set yet");
            m_result->setVersion(value);
            return castState<VersionSet>();
        }

        std::unique_ptr<Database> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Database;
        DatabaseBuilder() : m_result(new Database()) { }

        template<int STEP> DatabaseBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<DatabaseBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Database::Database> m_result;
    };

    static DatabaseBuilder<0> create()
    {
        return DatabaseBuilder<0>();
    }

private:
    Database()
    {
    }

    WTF::String m_id;
    WTF::String m_domain;
    WTF::String m_name;
    WTF::String m_version;
};


// Database error.
class CORE_EXPORT Error {
    PROTOCOL_DISALLOW_COPY(Error);
public:
    static std::unique_ptr<Error> parse(protocol::Value* value, ErrorSupport* errors);

    ~Error() { }

    WTF::String getMessage() { return m_message; }
    void setMessage(const WTF::String& value) { m_message = value; }

    int getCode() { return m_code; }
    void setCode(int value) { m_code = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<Error> clone() const;

    template<int STATE>
    class ErrorBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          MessageSet = 1 << 1,
          CodeSet = 1 << 2,
            AllFieldsSet = (MessageSet | CodeSet | 0)};


        ErrorBuilder<STATE | MessageSet>& setMessage(const WTF::String& value)
        {
            static_assert(!(STATE & MessageSet), "property message should not be set yet");
            m_result->setMessage(value);
            return castState<MessageSet>();
        }

        ErrorBuilder<STATE | CodeSet>& setCode(int value)
        {
            static_assert(!(STATE & CodeSet), "property code should not be set yet");
            m_result->setCode(value);
            return castState<CodeSet>();
        }

        std::unique_ptr<Error> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Error;
        ErrorBuilder() : m_result(new Error()) { }

        template<int STEP> ErrorBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ErrorBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Database::Error> m_result;
    };

    static ErrorBuilder<0> create()
    {
        return ErrorBuilder<0>();
    }

private:
    Error()
    {
          m_code = 0;
    }

    WTF::String m_message;
    int m_code;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual void enable(ErrorString*) = 0;
    virtual void disable(ErrorString*) = 0;
    virtual void getDatabaseTableNames(ErrorString*, const WTF::String& in_databaseId, std::unique_ptr<protocol::Array<WTF::String>>* out_tableNames) = 0;
    class CORE_EXPORT ExecuteSQLCallback : public BackendCallback {
    public:
        virtual void sendSuccess(const Maybe<protocol::Array<WTF::String>>& columnNames, const Maybe<protocol::Array<protocol::Value>>& values, const Maybe<protocol::Database::Error>& sqlError) = 0;
    };
    virtual void executeSQL(const WTF::String& in_databaseId, const WTF::String& in_query, std::unique_ptr<ExecuteSQLCallback> callback) = 0;


protected:
    virtual ~Backend() { }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void addDatabase(std::unique_ptr<protocol::Database::Database> database);

    void flush() { m_frontendChannel->flushProtocolNotifications(); }
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, blink::protocol::Database::Backend*);

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

} // namespace Database
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Database_h)
