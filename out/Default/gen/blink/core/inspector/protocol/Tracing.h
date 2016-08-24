// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Tracing_h
#define protocol_Tracing_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace Tracing {

// ------------- Forward and enum declarations.
// Configuration for memory dump. Used only when "memory-infra" category is enabled.
using MemoryDumpConfig = Object;
// 
class TraceConfig;

namespace Start {
namespace TransferModeEnum {
CORE_EXPORT extern const char* ReportEvents;
CORE_EXPORT extern const char* ReturnAsStream;
} // TransferModeEnum
} // Start

// ------------- Type and builder declarations.

// 
class CORE_EXPORT TraceConfig {
    PROTOCOL_DISALLOW_COPY(TraceConfig);
public:
    static std::unique_ptr<TraceConfig> parse(protocol::Value* value, ErrorSupport* errors);

    ~TraceConfig() { }

    struct CORE_EXPORT RecordModeEnum {
        static const char* RecordUntilFull;
        static const char* RecordContinuously;
        static const char* RecordAsMuchAsPossible;
        static const char* EchoToConsole;
    }; // RecordModeEnum

    bool hasRecordMode() { return m_recordMode.isJust(); }
    WTF::String getRecordMode(const WTF::String& defaultValue) { return m_recordMode.isJust() ? m_recordMode.fromJust() : defaultValue; }
    void setRecordMode(const WTF::String& value) { m_recordMode = value; }

    bool hasEnableSampling() { return m_enableSampling.isJust(); }
    bool getEnableSampling(bool defaultValue) { return m_enableSampling.isJust() ? m_enableSampling.fromJust() : defaultValue; }
    void setEnableSampling(bool value) { m_enableSampling = value; }

    bool hasEnableSystrace() { return m_enableSystrace.isJust(); }
    bool getEnableSystrace(bool defaultValue) { return m_enableSystrace.isJust() ? m_enableSystrace.fromJust() : defaultValue; }
    void setEnableSystrace(bool value) { m_enableSystrace = value; }

    bool hasEnableArgumentFilter() { return m_enableArgumentFilter.isJust(); }
    bool getEnableArgumentFilter(bool defaultValue) { return m_enableArgumentFilter.isJust() ? m_enableArgumentFilter.fromJust() : defaultValue; }
    void setEnableArgumentFilter(bool value) { m_enableArgumentFilter = value; }

    bool hasIncludedCategories() { return m_includedCategories.isJust(); }
    protocol::Array<WTF::String>* getIncludedCategories(protocol::Array<WTF::String>* defaultValue) { return m_includedCategories.isJust() ? m_includedCategories.fromJust() : defaultValue; }
    void setIncludedCategories(std::unique_ptr<protocol::Array<WTF::String>> value) { m_includedCategories = std::move(value); }

    bool hasExcludedCategories() { return m_excludedCategories.isJust(); }
    protocol::Array<WTF::String>* getExcludedCategories(protocol::Array<WTF::String>* defaultValue) { return m_excludedCategories.isJust() ? m_excludedCategories.fromJust() : defaultValue; }
    void setExcludedCategories(std::unique_ptr<protocol::Array<WTF::String>> value) { m_excludedCategories = std::move(value); }

    bool hasSyntheticDelays() { return m_syntheticDelays.isJust(); }
    protocol::Array<WTF::String>* getSyntheticDelays(protocol::Array<WTF::String>* defaultValue) { return m_syntheticDelays.isJust() ? m_syntheticDelays.fromJust() : defaultValue; }
    void setSyntheticDelays(std::unique_ptr<protocol::Array<WTF::String>> value) { m_syntheticDelays = std::move(value); }

    bool hasMemoryDumpConfig() { return m_memoryDumpConfig.isJust(); }
    protocol::Tracing::MemoryDumpConfig* getMemoryDumpConfig(protocol::Tracing::MemoryDumpConfig* defaultValue) { return m_memoryDumpConfig.isJust() ? m_memoryDumpConfig.fromJust() : defaultValue; }
    void setMemoryDumpConfig(std::unique_ptr<protocol::Tracing::MemoryDumpConfig> value) { m_memoryDumpConfig = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<TraceConfig> clone() const;

    template<int STATE>
    class TraceConfigBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            AllFieldsSet = (0)};


        TraceConfigBuilder<STATE>& setRecordMode(const WTF::String& value)
        {
            m_result->setRecordMode(value);
            return *this;
        }

        TraceConfigBuilder<STATE>& setEnableSampling(bool value)
        {
            m_result->setEnableSampling(value);
            return *this;
        }

        TraceConfigBuilder<STATE>& setEnableSystrace(bool value)
        {
            m_result->setEnableSystrace(value);
            return *this;
        }

        TraceConfigBuilder<STATE>& setEnableArgumentFilter(bool value)
        {
            m_result->setEnableArgumentFilter(value);
            return *this;
        }

        TraceConfigBuilder<STATE>& setIncludedCategories(std::unique_ptr<protocol::Array<WTF::String>> value)
        {
            m_result->setIncludedCategories(std::move(value));
            return *this;
        }

        TraceConfigBuilder<STATE>& setExcludedCategories(std::unique_ptr<protocol::Array<WTF::String>> value)
        {
            m_result->setExcludedCategories(std::move(value));
            return *this;
        }

        TraceConfigBuilder<STATE>& setSyntheticDelays(std::unique_ptr<protocol::Array<WTF::String>> value)
        {
            m_result->setSyntheticDelays(std::move(value));
            return *this;
        }

        TraceConfigBuilder<STATE>& setMemoryDumpConfig(std::unique_ptr<protocol::Tracing::MemoryDumpConfig> value)
        {
            m_result->setMemoryDumpConfig(std::move(value));
            return *this;
        }

        std::unique_ptr<TraceConfig> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class TraceConfig;
        TraceConfigBuilder() : m_result(new TraceConfig()) { }

        template<int STEP> TraceConfigBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<TraceConfigBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Tracing::TraceConfig> m_result;
    };

    static TraceConfigBuilder<0> create()
    {
        return TraceConfigBuilder<0>();
    }

private:
    TraceConfig()
    {
    }

    Maybe<WTF::String> m_recordMode;
    Maybe<bool> m_enableSampling;
    Maybe<bool> m_enableSystrace;
    Maybe<bool> m_enableArgumentFilter;
    Maybe<protocol::Array<WTF::String>> m_includedCategories;
    Maybe<protocol::Array<WTF::String>> m_excludedCategories;
    Maybe<protocol::Array<WTF::String>> m_syntheticDelays;
    Maybe<protocol::Tracing::MemoryDumpConfig> m_memoryDumpConfig;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    class CORE_EXPORT StartCallback : public BackendCallback {
    public:
        virtual void sendSuccess() = 0;
    };
    virtual void start(const Maybe<WTF::String>& in_categories, const Maybe<WTF::String>& in_options, const Maybe<double>& in_bufferUsageReportingInterval, const Maybe<WTF::String>& in_transferMode, const Maybe<protocol::Tracing::TraceConfig>& in_traceConfig, std::unique_ptr<StartCallback> callback) = 0;
    class CORE_EXPORT EndCallback : public BackendCallback {
    public:
        virtual void sendSuccess() = 0;
    };
    virtual void end(std::unique_ptr<EndCallback> callback) = 0;

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
    static void wire(UberDispatcher*, blink::protocol::Tracing::Backend*);

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

} // namespace Tracing
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Tracing_h)
