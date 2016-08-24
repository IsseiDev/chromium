// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_ServiceWorker_h
#define protocol_ServiceWorker_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace ServiceWorker {

// ------------- Forward and enum declarations.
// ServiceWorker registration.
class ServiceWorkerRegistration;
// 
using ServiceWorkerVersionRunningStatus = WTF::String;
// 
using ServiceWorkerVersionStatus = WTF::String;
// 
using TargetID = WTF::String;
// ServiceWorker version.
class ServiceWorkerVersion;
// ServiceWorker error message.
class ServiceWorkerErrorMessage;
// 
class TargetInfo;

namespace ServiceWorkerVersionRunningStatusEnum {
CORE_EXPORT extern const char* Stopped;
CORE_EXPORT extern const char* Starting;
CORE_EXPORT extern const char* Running;
CORE_EXPORT extern const char* Stopping;
} // namespace ServiceWorkerVersionRunningStatusEnum

namespace ServiceWorkerVersionStatusEnum {
CORE_EXPORT extern const char* New;
CORE_EXPORT extern const char* Installing;
CORE_EXPORT extern const char* Installed;
CORE_EXPORT extern const char* Activating;
CORE_EXPORT extern const char* Activated;
CORE_EXPORT extern const char* Redundant;
} // namespace ServiceWorkerVersionStatusEnum

// ------------- Type and builder declarations.

// ServiceWorker registration.
class CORE_EXPORT ServiceWorkerRegistration {
    PROTOCOL_DISALLOW_COPY(ServiceWorkerRegistration);
public:
    static std::unique_ptr<ServiceWorkerRegistration> parse(protocol::Value* value, ErrorSupport* errors);

    ~ServiceWorkerRegistration() { }

    WTF::String getRegistrationId() { return m_registrationId; }
    void setRegistrationId(const WTF::String& value) { m_registrationId = value; }

    WTF::String getScopeURL() { return m_scopeURL; }
    void setScopeURL(const WTF::String& value) { m_scopeURL = value; }

    bool getIsDeleted() { return m_isDeleted; }
    void setIsDeleted(bool value) { m_isDeleted = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<ServiceWorkerRegistration> clone() const;

    template<int STATE>
    class ServiceWorkerRegistrationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          RegistrationIdSet = 1 << 1,
          ScopeURLSet = 1 << 2,
          IsDeletedSet = 1 << 3,
            AllFieldsSet = (RegistrationIdSet | ScopeURLSet | IsDeletedSet | 0)};


        ServiceWorkerRegistrationBuilder<STATE | RegistrationIdSet>& setRegistrationId(const WTF::String& value)
        {
            static_assert(!(STATE & RegistrationIdSet), "property registrationId should not be set yet");
            m_result->setRegistrationId(value);
            return castState<RegistrationIdSet>();
        }

        ServiceWorkerRegistrationBuilder<STATE | ScopeURLSet>& setScopeURL(const WTF::String& value)
        {
            static_assert(!(STATE & ScopeURLSet), "property scopeURL should not be set yet");
            m_result->setScopeURL(value);
            return castState<ScopeURLSet>();
        }

        ServiceWorkerRegistrationBuilder<STATE | IsDeletedSet>& setIsDeleted(bool value)
        {
            static_assert(!(STATE & IsDeletedSet), "property isDeleted should not be set yet");
            m_result->setIsDeleted(value);
            return castState<IsDeletedSet>();
        }

        std::unique_ptr<ServiceWorkerRegistration> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ServiceWorkerRegistration;
        ServiceWorkerRegistrationBuilder() : m_result(new ServiceWorkerRegistration()) { }

        template<int STEP> ServiceWorkerRegistrationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ServiceWorkerRegistrationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ServiceWorker::ServiceWorkerRegistration> m_result;
    };

    static ServiceWorkerRegistrationBuilder<0> create()
    {
        return ServiceWorkerRegistrationBuilder<0>();
    }

private:
    ServiceWorkerRegistration()
    {
          m_isDeleted = false;
    }

    WTF::String m_registrationId;
    WTF::String m_scopeURL;
    bool m_isDeleted;
};


// ServiceWorker version.
class CORE_EXPORT ServiceWorkerVersion {
    PROTOCOL_DISALLOW_COPY(ServiceWorkerVersion);
public:
    static std::unique_ptr<ServiceWorkerVersion> parse(protocol::Value* value, ErrorSupport* errors);

    ~ServiceWorkerVersion() { }

    WTF::String getVersionId() { return m_versionId; }
    void setVersionId(const WTF::String& value) { m_versionId = value; }

    WTF::String getRegistrationId() { return m_registrationId; }
    void setRegistrationId(const WTF::String& value) { m_registrationId = value; }

    WTF::String getScriptURL() { return m_scriptURL; }
    void setScriptURL(const WTF::String& value) { m_scriptURL = value; }

    WTF::String getRunningStatus() { return m_runningStatus; }
    void setRunningStatus(const WTF::String& value) { m_runningStatus = value; }

    WTF::String getStatus() { return m_status; }
    void setStatus(const WTF::String& value) { m_status = value; }

    bool hasScriptLastModified() { return m_scriptLastModified.isJust(); }
    double getScriptLastModified(double defaultValue) { return m_scriptLastModified.isJust() ? m_scriptLastModified.fromJust() : defaultValue; }
    void setScriptLastModified(double value) { m_scriptLastModified = value; }

    bool hasScriptResponseTime() { return m_scriptResponseTime.isJust(); }
    double getScriptResponseTime(double defaultValue) { return m_scriptResponseTime.isJust() ? m_scriptResponseTime.fromJust() : defaultValue; }
    void setScriptResponseTime(double value) { m_scriptResponseTime = value; }

    bool hasControlledClients() { return m_controlledClients.isJust(); }
    protocol::Array<WTF::String>* getControlledClients(protocol::Array<WTF::String>* defaultValue) { return m_controlledClients.isJust() ? m_controlledClients.fromJust() : defaultValue; }
    void setControlledClients(std::unique_ptr<protocol::Array<WTF::String>> value) { m_controlledClients = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<ServiceWorkerVersion> clone() const;

    template<int STATE>
    class ServiceWorkerVersionBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          VersionIdSet = 1 << 1,
          RegistrationIdSet = 1 << 2,
          ScriptURLSet = 1 << 3,
          RunningStatusSet = 1 << 4,
          StatusSet = 1 << 5,
            AllFieldsSet = (VersionIdSet | RegistrationIdSet | ScriptURLSet | RunningStatusSet | StatusSet | 0)};


        ServiceWorkerVersionBuilder<STATE | VersionIdSet>& setVersionId(const WTF::String& value)
        {
            static_assert(!(STATE & VersionIdSet), "property versionId should not be set yet");
            m_result->setVersionId(value);
            return castState<VersionIdSet>();
        }

        ServiceWorkerVersionBuilder<STATE | RegistrationIdSet>& setRegistrationId(const WTF::String& value)
        {
            static_assert(!(STATE & RegistrationIdSet), "property registrationId should not be set yet");
            m_result->setRegistrationId(value);
            return castState<RegistrationIdSet>();
        }

        ServiceWorkerVersionBuilder<STATE | ScriptURLSet>& setScriptURL(const WTF::String& value)
        {
            static_assert(!(STATE & ScriptURLSet), "property scriptURL should not be set yet");
            m_result->setScriptURL(value);
            return castState<ScriptURLSet>();
        }

        ServiceWorkerVersionBuilder<STATE | RunningStatusSet>& setRunningStatus(const WTF::String& value)
        {
            static_assert(!(STATE & RunningStatusSet), "property runningStatus should not be set yet");
            m_result->setRunningStatus(value);
            return castState<RunningStatusSet>();
        }

        ServiceWorkerVersionBuilder<STATE | StatusSet>& setStatus(const WTF::String& value)
        {
            static_assert(!(STATE & StatusSet), "property status should not be set yet");
            m_result->setStatus(value);
            return castState<StatusSet>();
        }

        ServiceWorkerVersionBuilder<STATE>& setScriptLastModified(double value)
        {
            m_result->setScriptLastModified(value);
            return *this;
        }

        ServiceWorkerVersionBuilder<STATE>& setScriptResponseTime(double value)
        {
            m_result->setScriptResponseTime(value);
            return *this;
        }

        ServiceWorkerVersionBuilder<STATE>& setControlledClients(std::unique_ptr<protocol::Array<WTF::String>> value)
        {
            m_result->setControlledClients(std::move(value));
            return *this;
        }

        std::unique_ptr<ServiceWorkerVersion> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ServiceWorkerVersion;
        ServiceWorkerVersionBuilder() : m_result(new ServiceWorkerVersion()) { }

        template<int STEP> ServiceWorkerVersionBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ServiceWorkerVersionBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ServiceWorker::ServiceWorkerVersion> m_result;
    };

    static ServiceWorkerVersionBuilder<0> create()
    {
        return ServiceWorkerVersionBuilder<0>();
    }

private:
    ServiceWorkerVersion()
    {
    }

    WTF::String m_versionId;
    WTF::String m_registrationId;
    WTF::String m_scriptURL;
    WTF::String m_runningStatus;
    WTF::String m_status;
    Maybe<double> m_scriptLastModified;
    Maybe<double> m_scriptResponseTime;
    Maybe<protocol::Array<WTF::String>> m_controlledClients;
};


// ServiceWorker error message.
class CORE_EXPORT ServiceWorkerErrorMessage {
    PROTOCOL_DISALLOW_COPY(ServiceWorkerErrorMessage);
public:
    static std::unique_ptr<ServiceWorkerErrorMessage> parse(protocol::Value* value, ErrorSupport* errors);

    ~ServiceWorkerErrorMessage() { }

    WTF::String getErrorMessage() { return m_errorMessage; }
    void setErrorMessage(const WTF::String& value) { m_errorMessage = value; }

    WTF::String getRegistrationId() { return m_registrationId; }
    void setRegistrationId(const WTF::String& value) { m_registrationId = value; }

    WTF::String getVersionId() { return m_versionId; }
    void setVersionId(const WTF::String& value) { m_versionId = value; }

    WTF::String getSourceURL() { return m_sourceURL; }
    void setSourceURL(const WTF::String& value) { m_sourceURL = value; }

    int getLineNumber() { return m_lineNumber; }
    void setLineNumber(int value) { m_lineNumber = value; }

    int getColumnNumber() { return m_columnNumber; }
    void setColumnNumber(int value) { m_columnNumber = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<ServiceWorkerErrorMessage> clone() const;

    template<int STATE>
    class ServiceWorkerErrorMessageBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          ErrorMessageSet = 1 << 1,
          RegistrationIdSet = 1 << 2,
          VersionIdSet = 1 << 3,
          SourceURLSet = 1 << 4,
          LineNumberSet = 1 << 5,
          ColumnNumberSet = 1 << 6,
            AllFieldsSet = (ErrorMessageSet | RegistrationIdSet | VersionIdSet | SourceURLSet | LineNumberSet | ColumnNumberSet | 0)};


        ServiceWorkerErrorMessageBuilder<STATE | ErrorMessageSet>& setErrorMessage(const WTF::String& value)
        {
            static_assert(!(STATE & ErrorMessageSet), "property errorMessage should not be set yet");
            m_result->setErrorMessage(value);
            return castState<ErrorMessageSet>();
        }

        ServiceWorkerErrorMessageBuilder<STATE | RegistrationIdSet>& setRegistrationId(const WTF::String& value)
        {
            static_assert(!(STATE & RegistrationIdSet), "property registrationId should not be set yet");
            m_result->setRegistrationId(value);
            return castState<RegistrationIdSet>();
        }

        ServiceWorkerErrorMessageBuilder<STATE | VersionIdSet>& setVersionId(const WTF::String& value)
        {
            static_assert(!(STATE & VersionIdSet), "property versionId should not be set yet");
            m_result->setVersionId(value);
            return castState<VersionIdSet>();
        }

        ServiceWorkerErrorMessageBuilder<STATE | SourceURLSet>& setSourceURL(const WTF::String& value)
        {
            static_assert(!(STATE & SourceURLSet), "property sourceURL should not be set yet");
            m_result->setSourceURL(value);
            return castState<SourceURLSet>();
        }

        ServiceWorkerErrorMessageBuilder<STATE | LineNumberSet>& setLineNumber(int value)
        {
            static_assert(!(STATE & LineNumberSet), "property lineNumber should not be set yet");
            m_result->setLineNumber(value);
            return castState<LineNumberSet>();
        }

        ServiceWorkerErrorMessageBuilder<STATE | ColumnNumberSet>& setColumnNumber(int value)
        {
            static_assert(!(STATE & ColumnNumberSet), "property columnNumber should not be set yet");
            m_result->setColumnNumber(value);
            return castState<ColumnNumberSet>();
        }

        std::unique_ptr<ServiceWorkerErrorMessage> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ServiceWorkerErrorMessage;
        ServiceWorkerErrorMessageBuilder() : m_result(new ServiceWorkerErrorMessage()) { }

        template<int STEP> ServiceWorkerErrorMessageBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ServiceWorkerErrorMessageBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ServiceWorker::ServiceWorkerErrorMessage> m_result;
    };

    static ServiceWorkerErrorMessageBuilder<0> create()
    {
        return ServiceWorkerErrorMessageBuilder<0>();
    }

private:
    ServiceWorkerErrorMessage()
    {
          m_lineNumber = 0;
          m_columnNumber = 0;
    }

    WTF::String m_errorMessage;
    WTF::String m_registrationId;
    WTF::String m_versionId;
    WTF::String m_sourceURL;
    int m_lineNumber;
    int m_columnNumber;
};


// 
class CORE_EXPORT TargetInfo {
    PROTOCOL_DISALLOW_COPY(TargetInfo);
public:
    static std::unique_ptr<TargetInfo> parse(protocol::Value* value, ErrorSupport* errors);

    ~TargetInfo() { }

    WTF::String getId() { return m_id; }
    void setId(const WTF::String& value) { m_id = value; }

    WTF::String getType() { return m_type; }
    void setType(const WTF::String& value) { m_type = value; }

    WTF::String getTitle() { return m_title; }
    void setTitle(const WTF::String& value) { m_title = value; }

    WTF::String getUrl() { return m_url; }
    void setUrl(const WTF::String& value) { m_url = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<TargetInfo> clone() const;

    template<int STATE>
    class TargetInfoBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          IdSet = 1 << 1,
          TypeSet = 1 << 2,
          TitleSet = 1 << 3,
          UrlSet = 1 << 4,
            AllFieldsSet = (IdSet | TypeSet | TitleSet | UrlSet | 0)};


        TargetInfoBuilder<STATE | IdSet>& setId(const WTF::String& value)
        {
            static_assert(!(STATE & IdSet), "property id should not be set yet");
            m_result->setId(value);
            return castState<IdSet>();
        }

        TargetInfoBuilder<STATE | TypeSet>& setType(const WTF::String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        TargetInfoBuilder<STATE | TitleSet>& setTitle(const WTF::String& value)
        {
            static_assert(!(STATE & TitleSet), "property title should not be set yet");
            m_result->setTitle(value);
            return castState<TitleSet>();
        }

        TargetInfoBuilder<STATE | UrlSet>& setUrl(const WTF::String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->setUrl(value);
            return castState<UrlSet>();
        }

        std::unique_ptr<TargetInfo> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class TargetInfo;
        TargetInfoBuilder() : m_result(new TargetInfo()) { }

        template<int STEP> TargetInfoBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<TargetInfoBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::ServiceWorker::TargetInfo> m_result;
    };

    static TargetInfoBuilder<0> create()
    {
        return TargetInfoBuilder<0>();
    }

private:
    TargetInfo()
    {
    }

    WTF::String m_id;
    WTF::String m_type;
    WTF::String m_title;
    WTF::String m_url;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:


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
    static void wire(UberDispatcher*, blink::protocol::ServiceWorker::Backend*);

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

} // namespace ServiceWorker
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_ServiceWorker_h)
