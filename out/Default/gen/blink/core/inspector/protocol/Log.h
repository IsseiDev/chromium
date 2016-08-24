// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Log_h
#define protocol_Log_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "core/inspector/protocol/Runtime.h"
#include "core/inspector/protocol/Network.h"
#include "core/inspector/protocol/Worker.h"

namespace blink {
namespace protocol {
namespace Log {

// ------------- Forward and enum declarations.
// Log entry.
class LogEntry;

// ------------- Type and builder declarations.

// Log entry.
class CORE_EXPORT LogEntry {
    PROTOCOL_DISALLOW_COPY(LogEntry);
public:
    static std::unique_ptr<LogEntry> parse(protocol::Value* value, ErrorSupport* errors);

    ~LogEntry() { }

    struct CORE_EXPORT SourceEnum {
        static const char* Xml;
        static const char* Javascript;
        static const char* Network;
        static const char* Storage;
        static const char* Appcache;
        static const char* Rendering;
        static const char* Security;
        static const char* Deprecation;
        static const char* Worker;
        static const char* Other;
    }; // SourceEnum

    WTF::String getSource() { return m_source; }
    void setSource(const WTF::String& value) { m_source = value; }

    struct CORE_EXPORT LevelEnum {
        static const char* Log;
        static const char* Warning;
        static const char* Error;
        static const char* Debug;
        static const char* Info;
    }; // LevelEnum

    WTF::String getLevel() { return m_level; }
    void setLevel(const WTF::String& value) { m_level = value; }

    WTF::String getText() { return m_text; }
    void setText(const WTF::String& value) { m_text = value; }

    double getTimestamp() { return m_timestamp; }
    void setTimestamp(double value) { m_timestamp = value; }

    bool hasUrl() { return m_url.isJust(); }
    WTF::String getUrl(const WTF::String& defaultValue) { return m_url.isJust() ? m_url.fromJust() : defaultValue; }
    void setUrl(const WTF::String& value) { m_url = value; }

    bool hasLineNumber() { return m_lineNumber.isJust(); }
    int getLineNumber(int defaultValue) { return m_lineNumber.isJust() ? m_lineNumber.fromJust() : defaultValue; }
    void setLineNumber(int value) { m_lineNumber = value; }

    bool hasStackTrace() { return m_stackTrace.isJust(); }
    protocol::Runtime::API::StackTrace* getStackTrace(protocol::Runtime::API::StackTrace* defaultValue) { return m_stackTrace.isJust() ? m_stackTrace.fromJust() : defaultValue; }
    void setStackTrace(std::unique_ptr<protocol::Runtime::API::StackTrace> value) { m_stackTrace = std::move(value); }

    bool hasNetworkRequestId() { return m_networkRequestId.isJust(); }
    WTF::String getNetworkRequestId(const WTF::String& defaultValue) { return m_networkRequestId.isJust() ? m_networkRequestId.fromJust() : defaultValue; }
    void setNetworkRequestId(const WTF::String& value) { m_networkRequestId = value; }

    bool hasWorkerId() { return m_workerId.isJust(); }
    WTF::String getWorkerId(const WTF::String& defaultValue) { return m_workerId.isJust() ? m_workerId.fromJust() : defaultValue; }
    void setWorkerId(const WTF::String& value) { m_workerId = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<LogEntry> clone() const;

    template<int STATE>
    class LogEntryBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          SourceSet = 1 << 1,
          LevelSet = 1 << 2,
          TextSet = 1 << 3,
          TimestampSet = 1 << 4,
            AllFieldsSet = (SourceSet | LevelSet | TextSet | TimestampSet | 0)};


        LogEntryBuilder<STATE | SourceSet>& setSource(const WTF::String& value)
        {
            static_assert(!(STATE & SourceSet), "property source should not be set yet");
            m_result->setSource(value);
            return castState<SourceSet>();
        }

        LogEntryBuilder<STATE | LevelSet>& setLevel(const WTF::String& value)
        {
            static_assert(!(STATE & LevelSet), "property level should not be set yet");
            m_result->setLevel(value);
            return castState<LevelSet>();
        }

        LogEntryBuilder<STATE | TextSet>& setText(const WTF::String& value)
        {
            static_assert(!(STATE & TextSet), "property text should not be set yet");
            m_result->setText(value);
            return castState<TextSet>();
        }

        LogEntryBuilder<STATE | TimestampSet>& setTimestamp(double value)
        {
            static_assert(!(STATE & TimestampSet), "property timestamp should not be set yet");
            m_result->setTimestamp(value);
            return castState<TimestampSet>();
        }

        LogEntryBuilder<STATE>& setUrl(const WTF::String& value)
        {
            m_result->setUrl(value);
            return *this;
        }

        LogEntryBuilder<STATE>& setLineNumber(int value)
        {
            m_result->setLineNumber(value);
            return *this;
        }

        LogEntryBuilder<STATE>& setStackTrace(std::unique_ptr<protocol::Runtime::API::StackTrace> value)
        {
            m_result->setStackTrace(std::move(value));
            return *this;
        }

        LogEntryBuilder<STATE>& setNetworkRequestId(const WTF::String& value)
        {
            m_result->setNetworkRequestId(value);
            return *this;
        }

        LogEntryBuilder<STATE>& setWorkerId(const WTF::String& value)
        {
            m_result->setWorkerId(value);
            return *this;
        }

        std::unique_ptr<LogEntry> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class LogEntry;
        LogEntryBuilder() : m_result(new LogEntry()) { }

        template<int STEP> LogEntryBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<LogEntryBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Log::LogEntry> m_result;
    };

    static LogEntryBuilder<0> create()
    {
        return LogEntryBuilder<0>();
    }

private:
    LogEntry()
    {
          m_timestamp = 0;
    }

    WTF::String m_source;
    WTF::String m_level;
    WTF::String m_text;
    double m_timestamp;
    Maybe<WTF::String> m_url;
    Maybe<int> m_lineNumber;
    Maybe<protocol::Runtime::API::StackTrace> m_stackTrace;
    Maybe<WTF::String> m_networkRequestId;
    Maybe<WTF::String> m_workerId;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual void enable(ErrorString*) = 0;
    virtual void disable(ErrorString*) = 0;
    virtual void clear(ErrorString*) = 0;


protected:
    virtual ~Backend() { }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void entryAdded(std::unique_ptr<protocol::Log::LogEntry> entry);

    void flush() { m_frontendChannel->flushProtocolNotifications(); }
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, blink::protocol::Log::Backend*);

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

} // namespace Log
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Log_h)
