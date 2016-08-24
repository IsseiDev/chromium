// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Network_h
#define protocol_Network_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "core/inspector/protocol/Runtime.h"
#include "core/inspector/protocol/Security.h"

namespace blink {
namespace protocol {
namespace Network {

// ------------- Forward and enum declarations.
// Unique loader identifier.
using LoaderId = WTF::String;
// Unique request identifier.
using RequestId = WTF::String;
// Number of seconds since epoch.
using Timestamp = double;
// Request / response headers as keys / values of JSON object.
using Headers = Object;
// Loading priority of a resource request.
using ConnectionType = WTF::String;
// Represents the cookie's 'SameSite' status: https://tools.ietf.org/html/draft-west-first-party-cookies
using CookieSameSite = WTF::String;
// Timing information for the request.
class ResourceTiming;
// Loading priority of a resource request.
using ResourcePriority = WTF::String;
// HTTP request data.
class Request;
// Subject of a certificate.
class CertificateSubject;
// Details about a request's certificate.
class CertificateDetails;
// Details of a signed certificate timestamp (SCT).
class SignedCertificateTimestamp;
// Security details about a request.
class SecurityDetails;
// The reason why request was blocked.
using BlockedReason = WTF::String;
// HTTP response data.
class Response;
// WebSocket request data.
class WebSocketRequest;
// WebSocket response data.
class WebSocketResponse;
// WebSocket frame data.
class WebSocketFrame;
// Information about the cached resource.
class CachedResource;
// Information about the request initiator.
class Initiator;
// Cookie object
class Cookie;

namespace ConnectionTypeEnum {
CORE_EXPORT extern const char* None;
CORE_EXPORT extern const char* Cellular2g;
CORE_EXPORT extern const char* Cellular3g;
CORE_EXPORT extern const char* Cellular4g;
CORE_EXPORT extern const char* Bluetooth;
CORE_EXPORT extern const char* Ethernet;
CORE_EXPORT extern const char* Wifi;
CORE_EXPORT extern const char* Wimax;
CORE_EXPORT extern const char* Other;
} // namespace ConnectionTypeEnum

namespace CookieSameSiteEnum {
CORE_EXPORT extern const char* Strict;
CORE_EXPORT extern const char* Lax;
} // namespace CookieSameSiteEnum

namespace ResourcePriorityEnum {
CORE_EXPORT extern const char* VeryLow;
CORE_EXPORT extern const char* Low;
CORE_EXPORT extern const char* Medium;
CORE_EXPORT extern const char* High;
CORE_EXPORT extern const char* VeryHigh;
} // namespace ResourcePriorityEnum

namespace BlockedReasonEnum {
CORE_EXPORT extern const char* Csp;
CORE_EXPORT extern const char* MixedContent;
CORE_EXPORT extern const char* Origin;
CORE_EXPORT extern const char* Inspector;
CORE_EXPORT extern const char* SubresourceFilter;
CORE_EXPORT extern const char* Other;
} // namespace BlockedReasonEnum

// ------------- Type and builder declarations.

// Timing information for the request.
class CORE_EXPORT ResourceTiming {
    PROTOCOL_DISALLOW_COPY(ResourceTiming);
public:
    static std::unique_ptr<ResourceTiming> parse(protocol::Value* value, ErrorSupport* errors);

    ~ResourceTiming() { }

    double getRequestTime() { return m_requestTime; }
    void setRequestTime(double value) { m_requestTime = value; }

    double getProxyStart() { return m_proxyStart; }
    void setProxyStart(double value) { m_proxyStart = value; }

    double getProxyEnd() { return m_proxyEnd; }
    void setProxyEnd(double value) { m_proxyEnd = value; }

    double getDnsStart() { return m_dnsStart; }
    void setDnsStart(double value) { m_dnsStart = value; }

    double getDnsEnd() { return m_dnsEnd; }
    void setDnsEnd(double value) { m_dnsEnd = value; }

    double getConnectStart() { return m_connectStart; }
    void setConnectStart(double value) { m_connectStart = value; }

    double getConnectEnd() { return m_connectEnd; }
    void setConnectEnd(double value) { m_connectEnd = value; }

    double getSslStart() { return m_sslStart; }
    void setSslStart(double value) { m_sslStart = value; }

    double getSslEnd() { return m_sslEnd; }
    void setSslEnd(double value) { m_sslEnd = value; }

    double getWorkerStart() { return m_workerStart; }
    void setWorkerStart(double value) { m_workerStart = value; }

    double getWorkerReady() { return m_workerReady; }
    void setWorkerReady(double value) { m_workerReady = value; }

    double getSendStart() { return m_sendStart; }
    void setSendStart(double value) { m_sendStart = value; }

    double getSendEnd() { return m_sendEnd; }
    void setSendEnd(double value) { m_sendEnd = value; }

    double getPushStart() { return m_pushStart; }
    void setPushStart(double value) { m_pushStart = value; }

    double getPushEnd() { return m_pushEnd; }
    void setPushEnd(double value) { m_pushEnd = value; }

    double getReceiveHeadersEnd() { return m_receiveHeadersEnd; }
    void setReceiveHeadersEnd(double value) { m_receiveHeadersEnd = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<ResourceTiming> clone() const;

    template<int STATE>
    class ResourceTimingBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          RequestTimeSet = 1 << 1,
          ProxyStartSet = 1 << 2,
          ProxyEndSet = 1 << 3,
          DnsStartSet = 1 << 4,
          DnsEndSet = 1 << 5,
          ConnectStartSet = 1 << 6,
          ConnectEndSet = 1 << 7,
          SslStartSet = 1 << 8,
          SslEndSet = 1 << 9,
          WorkerStartSet = 1 << 10,
          WorkerReadySet = 1 << 11,
          SendStartSet = 1 << 12,
          SendEndSet = 1 << 13,
          PushStartSet = 1 << 14,
          PushEndSet = 1 << 15,
          ReceiveHeadersEndSet = 1 << 16,
            AllFieldsSet = (RequestTimeSet | ProxyStartSet | ProxyEndSet | DnsStartSet | DnsEndSet | ConnectStartSet | ConnectEndSet | SslStartSet | SslEndSet | WorkerStartSet | WorkerReadySet | SendStartSet | SendEndSet | PushStartSet | PushEndSet | ReceiveHeadersEndSet | 0)};


        ResourceTimingBuilder<STATE | RequestTimeSet>& setRequestTime(double value)
        {
            static_assert(!(STATE & RequestTimeSet), "property requestTime should not be set yet");
            m_result->setRequestTime(value);
            return castState<RequestTimeSet>();
        }

        ResourceTimingBuilder<STATE | ProxyStartSet>& setProxyStart(double value)
        {
            static_assert(!(STATE & ProxyStartSet), "property proxyStart should not be set yet");
            m_result->setProxyStart(value);
            return castState<ProxyStartSet>();
        }

        ResourceTimingBuilder<STATE | ProxyEndSet>& setProxyEnd(double value)
        {
            static_assert(!(STATE & ProxyEndSet), "property proxyEnd should not be set yet");
            m_result->setProxyEnd(value);
            return castState<ProxyEndSet>();
        }

        ResourceTimingBuilder<STATE | DnsStartSet>& setDnsStart(double value)
        {
            static_assert(!(STATE & DnsStartSet), "property dnsStart should not be set yet");
            m_result->setDnsStart(value);
            return castState<DnsStartSet>();
        }

        ResourceTimingBuilder<STATE | DnsEndSet>& setDnsEnd(double value)
        {
            static_assert(!(STATE & DnsEndSet), "property dnsEnd should not be set yet");
            m_result->setDnsEnd(value);
            return castState<DnsEndSet>();
        }

        ResourceTimingBuilder<STATE | ConnectStartSet>& setConnectStart(double value)
        {
            static_assert(!(STATE & ConnectStartSet), "property connectStart should not be set yet");
            m_result->setConnectStart(value);
            return castState<ConnectStartSet>();
        }

        ResourceTimingBuilder<STATE | ConnectEndSet>& setConnectEnd(double value)
        {
            static_assert(!(STATE & ConnectEndSet), "property connectEnd should not be set yet");
            m_result->setConnectEnd(value);
            return castState<ConnectEndSet>();
        }

        ResourceTimingBuilder<STATE | SslStartSet>& setSslStart(double value)
        {
            static_assert(!(STATE & SslStartSet), "property sslStart should not be set yet");
            m_result->setSslStart(value);
            return castState<SslStartSet>();
        }

        ResourceTimingBuilder<STATE | SslEndSet>& setSslEnd(double value)
        {
            static_assert(!(STATE & SslEndSet), "property sslEnd should not be set yet");
            m_result->setSslEnd(value);
            return castState<SslEndSet>();
        }

        ResourceTimingBuilder<STATE | WorkerStartSet>& setWorkerStart(double value)
        {
            static_assert(!(STATE & WorkerStartSet), "property workerStart should not be set yet");
            m_result->setWorkerStart(value);
            return castState<WorkerStartSet>();
        }

        ResourceTimingBuilder<STATE | WorkerReadySet>& setWorkerReady(double value)
        {
            static_assert(!(STATE & WorkerReadySet), "property workerReady should not be set yet");
            m_result->setWorkerReady(value);
            return castState<WorkerReadySet>();
        }

        ResourceTimingBuilder<STATE | SendStartSet>& setSendStart(double value)
        {
            static_assert(!(STATE & SendStartSet), "property sendStart should not be set yet");
            m_result->setSendStart(value);
            return castState<SendStartSet>();
        }

        ResourceTimingBuilder<STATE | SendEndSet>& setSendEnd(double value)
        {
            static_assert(!(STATE & SendEndSet), "property sendEnd should not be set yet");
            m_result->setSendEnd(value);
            return castState<SendEndSet>();
        }

        ResourceTimingBuilder<STATE | PushStartSet>& setPushStart(double value)
        {
            static_assert(!(STATE & PushStartSet), "property pushStart should not be set yet");
            m_result->setPushStart(value);
            return castState<PushStartSet>();
        }

        ResourceTimingBuilder<STATE | PushEndSet>& setPushEnd(double value)
        {
            static_assert(!(STATE & PushEndSet), "property pushEnd should not be set yet");
            m_result->setPushEnd(value);
            return castState<PushEndSet>();
        }

        ResourceTimingBuilder<STATE | ReceiveHeadersEndSet>& setReceiveHeadersEnd(double value)
        {
            static_assert(!(STATE & ReceiveHeadersEndSet), "property receiveHeadersEnd should not be set yet");
            m_result->setReceiveHeadersEnd(value);
            return castState<ReceiveHeadersEndSet>();
        }

        std::unique_ptr<ResourceTiming> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ResourceTiming;
        ResourceTimingBuilder() : m_result(new ResourceTiming()) { }

        template<int STEP> ResourceTimingBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ResourceTimingBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::ResourceTiming> m_result;
    };

    static ResourceTimingBuilder<0> create()
    {
        return ResourceTimingBuilder<0>();
    }

private:
    ResourceTiming()
    {
          m_requestTime = 0;
          m_proxyStart = 0;
          m_proxyEnd = 0;
          m_dnsStart = 0;
          m_dnsEnd = 0;
          m_connectStart = 0;
          m_connectEnd = 0;
          m_sslStart = 0;
          m_sslEnd = 0;
          m_workerStart = 0;
          m_workerReady = 0;
          m_sendStart = 0;
          m_sendEnd = 0;
          m_pushStart = 0;
          m_pushEnd = 0;
          m_receiveHeadersEnd = 0;
    }

    double m_requestTime;
    double m_proxyStart;
    double m_proxyEnd;
    double m_dnsStart;
    double m_dnsEnd;
    double m_connectStart;
    double m_connectEnd;
    double m_sslStart;
    double m_sslEnd;
    double m_workerStart;
    double m_workerReady;
    double m_sendStart;
    double m_sendEnd;
    double m_pushStart;
    double m_pushEnd;
    double m_receiveHeadersEnd;
};


// HTTP request data.
class CORE_EXPORT Request {
    PROTOCOL_DISALLOW_COPY(Request);
public:
    static std::unique_ptr<Request> parse(protocol::Value* value, ErrorSupport* errors);

    ~Request() { }

    WTF::String getUrl() { return m_url; }
    void setUrl(const WTF::String& value) { m_url = value; }

    WTF::String getMethod() { return m_method; }
    void setMethod(const WTF::String& value) { m_method = value; }

    protocol::Network::Headers* getHeaders() { return m_headers.get(); }
    void setHeaders(std::unique_ptr<protocol::Network::Headers> value) { m_headers = std::move(value); }

    bool hasPostData() { return m_postData.isJust(); }
    WTF::String getPostData(const WTF::String& defaultValue) { return m_postData.isJust() ? m_postData.fromJust() : defaultValue; }
    void setPostData(const WTF::String& value) { m_postData = value; }

    struct CORE_EXPORT MixedContentTypeEnum {
        static const char* Blockable;
        static const char* OptionallyBlockable;
        static const char* None;
    }; // MixedContentTypeEnum

    bool hasMixedContentType() { return m_mixedContentType.isJust(); }
    WTF::String getMixedContentType(const WTF::String& defaultValue) { return m_mixedContentType.isJust() ? m_mixedContentType.fromJust() : defaultValue; }
    void setMixedContentType(const WTF::String& value) { m_mixedContentType = value; }

    WTF::String getInitialPriority() { return m_initialPriority; }
    void setInitialPriority(const WTF::String& value) { m_initialPriority = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<Request> clone() const;

    template<int STATE>
    class RequestBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          UrlSet = 1 << 1,
          MethodSet = 1 << 2,
          HeadersSet = 1 << 3,
          InitialPrioritySet = 1 << 4,
            AllFieldsSet = (UrlSet | MethodSet | HeadersSet | InitialPrioritySet | 0)};


        RequestBuilder<STATE | UrlSet>& setUrl(const WTF::String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->setUrl(value);
            return castState<UrlSet>();
        }

        RequestBuilder<STATE | MethodSet>& setMethod(const WTF::String& value)
        {
            static_assert(!(STATE & MethodSet), "property method should not be set yet");
            m_result->setMethod(value);
            return castState<MethodSet>();
        }

        RequestBuilder<STATE | HeadersSet>& setHeaders(std::unique_ptr<protocol::Network::Headers> value)
        {
            static_assert(!(STATE & HeadersSet), "property headers should not be set yet");
            m_result->setHeaders(std::move(value));
            return castState<HeadersSet>();
        }

        RequestBuilder<STATE>& setPostData(const WTF::String& value)
        {
            m_result->setPostData(value);
            return *this;
        }

        RequestBuilder<STATE>& setMixedContentType(const WTF::String& value)
        {
            m_result->setMixedContentType(value);
            return *this;
        }

        RequestBuilder<STATE | InitialPrioritySet>& setInitialPriority(const WTF::String& value)
        {
            static_assert(!(STATE & InitialPrioritySet), "property initialPriority should not be set yet");
            m_result->setInitialPriority(value);
            return castState<InitialPrioritySet>();
        }

        std::unique_ptr<Request> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Request;
        RequestBuilder() : m_result(new Request()) { }

        template<int STEP> RequestBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<RequestBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::Request> m_result;
    };

    static RequestBuilder<0> create()
    {
        return RequestBuilder<0>();
    }

private:
    Request()
    {
    }

    WTF::String m_url;
    WTF::String m_method;
    std::unique_ptr<protocol::Network::Headers> m_headers;
    Maybe<WTF::String> m_postData;
    Maybe<WTF::String> m_mixedContentType;
    WTF::String m_initialPriority;
};


// Subject of a certificate.
class CORE_EXPORT CertificateSubject {
    PROTOCOL_DISALLOW_COPY(CertificateSubject);
public:
    static std::unique_ptr<CertificateSubject> parse(protocol::Value* value, ErrorSupport* errors);

    ~CertificateSubject() { }

    WTF::String getName() { return m_name; }
    void setName(const WTF::String& value) { m_name = value; }

    protocol::Array<WTF::String>* getSanDnsNames() { return m_sanDnsNames.get(); }
    void setSanDnsNames(std::unique_ptr<protocol::Array<WTF::String>> value) { m_sanDnsNames = std::move(value); }

    protocol::Array<WTF::String>* getSanIpAddresses() { return m_sanIpAddresses.get(); }
    void setSanIpAddresses(std::unique_ptr<protocol::Array<WTF::String>> value) { m_sanIpAddresses = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<CertificateSubject> clone() const;

    template<int STATE>
    class CertificateSubjectBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          NameSet = 1 << 1,
          SanDnsNamesSet = 1 << 2,
          SanIpAddressesSet = 1 << 3,
            AllFieldsSet = (NameSet | SanDnsNamesSet | SanIpAddressesSet | 0)};


        CertificateSubjectBuilder<STATE | NameSet>& setName(const WTF::String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->setName(value);
            return castState<NameSet>();
        }

        CertificateSubjectBuilder<STATE | SanDnsNamesSet>& setSanDnsNames(std::unique_ptr<protocol::Array<WTF::String>> value)
        {
            static_assert(!(STATE & SanDnsNamesSet), "property sanDnsNames should not be set yet");
            m_result->setSanDnsNames(std::move(value));
            return castState<SanDnsNamesSet>();
        }

        CertificateSubjectBuilder<STATE | SanIpAddressesSet>& setSanIpAddresses(std::unique_ptr<protocol::Array<WTF::String>> value)
        {
            static_assert(!(STATE & SanIpAddressesSet), "property sanIpAddresses should not be set yet");
            m_result->setSanIpAddresses(std::move(value));
            return castState<SanIpAddressesSet>();
        }

        std::unique_ptr<CertificateSubject> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class CertificateSubject;
        CertificateSubjectBuilder() : m_result(new CertificateSubject()) { }

        template<int STEP> CertificateSubjectBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CertificateSubjectBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::CertificateSubject> m_result;
    };

    static CertificateSubjectBuilder<0> create()
    {
        return CertificateSubjectBuilder<0>();
    }

private:
    CertificateSubject()
    {
    }

    WTF::String m_name;
    std::unique_ptr<protocol::Array<WTF::String>> m_sanDnsNames;
    std::unique_ptr<protocol::Array<WTF::String>> m_sanIpAddresses;
};


// Details about a request's certificate.
class CORE_EXPORT CertificateDetails {
    PROTOCOL_DISALLOW_COPY(CertificateDetails);
public:
    static std::unique_ptr<CertificateDetails> parse(protocol::Value* value, ErrorSupport* errors);

    ~CertificateDetails() { }

    protocol::Network::CertificateSubject* getSubject() { return m_subject.get(); }
    void setSubject(std::unique_ptr<protocol::Network::CertificateSubject> value) { m_subject = std::move(value); }

    WTF::String getIssuer() { return m_issuer; }
    void setIssuer(const WTF::String& value) { m_issuer = value; }

    double getValidFrom() { return m_validFrom; }
    void setValidFrom(double value) { m_validFrom = value; }

    double getValidTo() { return m_validTo; }
    void setValidTo(double value) { m_validTo = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<CertificateDetails> clone() const;

    template<int STATE>
    class CertificateDetailsBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          SubjectSet = 1 << 1,
          IssuerSet = 1 << 2,
          ValidFromSet = 1 << 3,
          ValidToSet = 1 << 4,
            AllFieldsSet = (SubjectSet | IssuerSet | ValidFromSet | ValidToSet | 0)};


        CertificateDetailsBuilder<STATE | SubjectSet>& setSubject(std::unique_ptr<protocol::Network::CertificateSubject> value)
        {
            static_assert(!(STATE & SubjectSet), "property subject should not be set yet");
            m_result->setSubject(std::move(value));
            return castState<SubjectSet>();
        }

        CertificateDetailsBuilder<STATE | IssuerSet>& setIssuer(const WTF::String& value)
        {
            static_assert(!(STATE & IssuerSet), "property issuer should not be set yet");
            m_result->setIssuer(value);
            return castState<IssuerSet>();
        }

        CertificateDetailsBuilder<STATE | ValidFromSet>& setValidFrom(double value)
        {
            static_assert(!(STATE & ValidFromSet), "property validFrom should not be set yet");
            m_result->setValidFrom(value);
            return castState<ValidFromSet>();
        }

        CertificateDetailsBuilder<STATE | ValidToSet>& setValidTo(double value)
        {
            static_assert(!(STATE & ValidToSet), "property validTo should not be set yet");
            m_result->setValidTo(value);
            return castState<ValidToSet>();
        }

        std::unique_ptr<CertificateDetails> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class CertificateDetails;
        CertificateDetailsBuilder() : m_result(new CertificateDetails()) { }

        template<int STEP> CertificateDetailsBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CertificateDetailsBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::CertificateDetails> m_result;
    };

    static CertificateDetailsBuilder<0> create()
    {
        return CertificateDetailsBuilder<0>();
    }

private:
    CertificateDetails()
    {
          m_validFrom = 0;
          m_validTo = 0;
    }

    std::unique_ptr<protocol::Network::CertificateSubject> m_subject;
    WTF::String m_issuer;
    double m_validFrom;
    double m_validTo;
};


// Details of a signed certificate timestamp (SCT).
class CORE_EXPORT SignedCertificateTimestamp {
    PROTOCOL_DISALLOW_COPY(SignedCertificateTimestamp);
public:
    static std::unique_ptr<SignedCertificateTimestamp> parse(protocol::Value* value, ErrorSupport* errors);

    ~SignedCertificateTimestamp() { }

    WTF::String getStatus() { return m_status; }
    void setStatus(const WTF::String& value) { m_status = value; }

    WTF::String getOrigin() { return m_origin; }
    void setOrigin(const WTF::String& value) { m_origin = value; }

    WTF::String getLogDescription() { return m_logDescription; }
    void setLogDescription(const WTF::String& value) { m_logDescription = value; }

    WTF::String getLogId() { return m_logId; }
    void setLogId(const WTF::String& value) { m_logId = value; }

    double getTimestamp() { return m_timestamp; }
    void setTimestamp(double value) { m_timestamp = value; }

    WTF::String getHashAlgorithm() { return m_hashAlgorithm; }
    void setHashAlgorithm(const WTF::String& value) { m_hashAlgorithm = value; }

    WTF::String getSignatureAlgorithm() { return m_signatureAlgorithm; }
    void setSignatureAlgorithm(const WTF::String& value) { m_signatureAlgorithm = value; }

    WTF::String getSignatureData() { return m_signatureData; }
    void setSignatureData(const WTF::String& value) { m_signatureData = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<SignedCertificateTimestamp> clone() const;

    template<int STATE>
    class SignedCertificateTimestampBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          StatusSet = 1 << 1,
          OriginSet = 1 << 2,
          LogDescriptionSet = 1 << 3,
          LogIdSet = 1 << 4,
          TimestampSet = 1 << 5,
          HashAlgorithmSet = 1 << 6,
          SignatureAlgorithmSet = 1 << 7,
          SignatureDataSet = 1 << 8,
            AllFieldsSet = (StatusSet | OriginSet | LogDescriptionSet | LogIdSet | TimestampSet | HashAlgorithmSet | SignatureAlgorithmSet | SignatureDataSet | 0)};


        SignedCertificateTimestampBuilder<STATE | StatusSet>& setStatus(const WTF::String& value)
        {
            static_assert(!(STATE & StatusSet), "property status should not be set yet");
            m_result->setStatus(value);
            return castState<StatusSet>();
        }

        SignedCertificateTimestampBuilder<STATE | OriginSet>& setOrigin(const WTF::String& value)
        {
            static_assert(!(STATE & OriginSet), "property origin should not be set yet");
            m_result->setOrigin(value);
            return castState<OriginSet>();
        }

        SignedCertificateTimestampBuilder<STATE | LogDescriptionSet>& setLogDescription(const WTF::String& value)
        {
            static_assert(!(STATE & LogDescriptionSet), "property logDescription should not be set yet");
            m_result->setLogDescription(value);
            return castState<LogDescriptionSet>();
        }

        SignedCertificateTimestampBuilder<STATE | LogIdSet>& setLogId(const WTF::String& value)
        {
            static_assert(!(STATE & LogIdSet), "property logId should not be set yet");
            m_result->setLogId(value);
            return castState<LogIdSet>();
        }

        SignedCertificateTimestampBuilder<STATE | TimestampSet>& setTimestamp(double value)
        {
            static_assert(!(STATE & TimestampSet), "property timestamp should not be set yet");
            m_result->setTimestamp(value);
            return castState<TimestampSet>();
        }

        SignedCertificateTimestampBuilder<STATE | HashAlgorithmSet>& setHashAlgorithm(const WTF::String& value)
        {
            static_assert(!(STATE & HashAlgorithmSet), "property hashAlgorithm should not be set yet");
            m_result->setHashAlgorithm(value);
            return castState<HashAlgorithmSet>();
        }

        SignedCertificateTimestampBuilder<STATE | SignatureAlgorithmSet>& setSignatureAlgorithm(const WTF::String& value)
        {
            static_assert(!(STATE & SignatureAlgorithmSet), "property signatureAlgorithm should not be set yet");
            m_result->setSignatureAlgorithm(value);
            return castState<SignatureAlgorithmSet>();
        }

        SignedCertificateTimestampBuilder<STATE | SignatureDataSet>& setSignatureData(const WTF::String& value)
        {
            static_assert(!(STATE & SignatureDataSet), "property signatureData should not be set yet");
            m_result->setSignatureData(value);
            return castState<SignatureDataSet>();
        }

        std::unique_ptr<SignedCertificateTimestamp> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SignedCertificateTimestamp;
        SignedCertificateTimestampBuilder() : m_result(new SignedCertificateTimestamp()) { }

        template<int STEP> SignedCertificateTimestampBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SignedCertificateTimestampBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::SignedCertificateTimestamp> m_result;
    };

    static SignedCertificateTimestampBuilder<0> create()
    {
        return SignedCertificateTimestampBuilder<0>();
    }

private:
    SignedCertificateTimestamp()
    {
          m_timestamp = 0;
    }

    WTF::String m_status;
    WTF::String m_origin;
    WTF::String m_logDescription;
    WTF::String m_logId;
    double m_timestamp;
    WTF::String m_hashAlgorithm;
    WTF::String m_signatureAlgorithm;
    WTF::String m_signatureData;
};


// Security details about a request.
class CORE_EXPORT SecurityDetails {
    PROTOCOL_DISALLOW_COPY(SecurityDetails);
public:
    static std::unique_ptr<SecurityDetails> parse(protocol::Value* value, ErrorSupport* errors);

    ~SecurityDetails() { }

    WTF::String getProtocol() { return m_protocol; }
    void setProtocol(const WTF::String& value) { m_protocol = value; }

    WTF::String getKeyExchange() { return m_keyExchange; }
    void setKeyExchange(const WTF::String& value) { m_keyExchange = value; }

    WTF::String getCipher() { return m_cipher; }
    void setCipher(const WTF::String& value) { m_cipher = value; }

    bool hasMac() { return m_mac.isJust(); }
    WTF::String getMac(const WTF::String& defaultValue) { return m_mac.isJust() ? m_mac.fromJust() : defaultValue; }
    void setMac(const WTF::String& value) { m_mac = value; }

    int getCertificateId() { return m_certificateId; }
    void setCertificateId(int value) { m_certificateId = value; }

    protocol::Array<protocol::Network::SignedCertificateTimestamp>* getSignedCertificateTimestampList() { return m_signedCertificateTimestampList.get(); }
    void setSignedCertificateTimestampList(std::unique_ptr<protocol::Array<protocol::Network::SignedCertificateTimestamp>> value) { m_signedCertificateTimestampList = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<SecurityDetails> clone() const;

    template<int STATE>
    class SecurityDetailsBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          ProtocolSet = 1 << 1,
          KeyExchangeSet = 1 << 2,
          CipherSet = 1 << 3,
          CertificateIdSet = 1 << 4,
          SignedCertificateTimestampListSet = 1 << 5,
            AllFieldsSet = (ProtocolSet | KeyExchangeSet | CipherSet | CertificateIdSet | SignedCertificateTimestampListSet | 0)};


        SecurityDetailsBuilder<STATE | ProtocolSet>& setProtocol(const WTF::String& value)
        {
            static_assert(!(STATE & ProtocolSet), "property protocol should not be set yet");
            m_result->setProtocol(value);
            return castState<ProtocolSet>();
        }

        SecurityDetailsBuilder<STATE | KeyExchangeSet>& setKeyExchange(const WTF::String& value)
        {
            static_assert(!(STATE & KeyExchangeSet), "property keyExchange should not be set yet");
            m_result->setKeyExchange(value);
            return castState<KeyExchangeSet>();
        }

        SecurityDetailsBuilder<STATE | CipherSet>& setCipher(const WTF::String& value)
        {
            static_assert(!(STATE & CipherSet), "property cipher should not be set yet");
            m_result->setCipher(value);
            return castState<CipherSet>();
        }

        SecurityDetailsBuilder<STATE>& setMac(const WTF::String& value)
        {
            m_result->setMac(value);
            return *this;
        }

        SecurityDetailsBuilder<STATE | CertificateIdSet>& setCertificateId(int value)
        {
            static_assert(!(STATE & CertificateIdSet), "property certificateId should not be set yet");
            m_result->setCertificateId(value);
            return castState<CertificateIdSet>();
        }

        SecurityDetailsBuilder<STATE | SignedCertificateTimestampListSet>& setSignedCertificateTimestampList(std::unique_ptr<protocol::Array<protocol::Network::SignedCertificateTimestamp>> value)
        {
            static_assert(!(STATE & SignedCertificateTimestampListSet), "property signedCertificateTimestampList should not be set yet");
            m_result->setSignedCertificateTimestampList(std::move(value));
            return castState<SignedCertificateTimestampListSet>();
        }

        std::unique_ptr<SecurityDetails> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SecurityDetails;
        SecurityDetailsBuilder() : m_result(new SecurityDetails()) { }

        template<int STEP> SecurityDetailsBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SecurityDetailsBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::SecurityDetails> m_result;
    };

    static SecurityDetailsBuilder<0> create()
    {
        return SecurityDetailsBuilder<0>();
    }

private:
    SecurityDetails()
    {
          m_certificateId = 0;
    }

    WTF::String m_protocol;
    WTF::String m_keyExchange;
    WTF::String m_cipher;
    Maybe<WTF::String> m_mac;
    int m_certificateId;
    std::unique_ptr<protocol::Array<protocol::Network::SignedCertificateTimestamp>> m_signedCertificateTimestampList;
};


// HTTP response data.
class CORE_EXPORT Response {
    PROTOCOL_DISALLOW_COPY(Response);
public:
    static std::unique_ptr<Response> parse(protocol::Value* value, ErrorSupport* errors);

    ~Response() { }

    WTF::String getUrl() { return m_url; }
    void setUrl(const WTF::String& value) { m_url = value; }

    double getStatus() { return m_status; }
    void setStatus(double value) { m_status = value; }

    WTF::String getStatusText() { return m_statusText; }
    void setStatusText(const WTF::String& value) { m_statusText = value; }

    protocol::Network::Headers* getHeaders() { return m_headers.get(); }
    void setHeaders(std::unique_ptr<protocol::Network::Headers> value) { m_headers = std::move(value); }

    bool hasHeadersText() { return m_headersText.isJust(); }
    WTF::String getHeadersText(const WTF::String& defaultValue) { return m_headersText.isJust() ? m_headersText.fromJust() : defaultValue; }
    void setHeadersText(const WTF::String& value) { m_headersText = value; }

    WTF::String getMimeType() { return m_mimeType; }
    void setMimeType(const WTF::String& value) { m_mimeType = value; }

    bool hasRequestHeaders() { return m_requestHeaders.isJust(); }
    protocol::Network::Headers* getRequestHeaders(protocol::Network::Headers* defaultValue) { return m_requestHeaders.isJust() ? m_requestHeaders.fromJust() : defaultValue; }
    void setRequestHeaders(std::unique_ptr<protocol::Network::Headers> value) { m_requestHeaders = std::move(value); }

    bool hasRequestHeadersText() { return m_requestHeadersText.isJust(); }
    WTF::String getRequestHeadersText(const WTF::String& defaultValue) { return m_requestHeadersText.isJust() ? m_requestHeadersText.fromJust() : defaultValue; }
    void setRequestHeadersText(const WTF::String& value) { m_requestHeadersText = value; }

    bool getConnectionReused() { return m_connectionReused; }
    void setConnectionReused(bool value) { m_connectionReused = value; }

    double getConnectionId() { return m_connectionId; }
    void setConnectionId(double value) { m_connectionId = value; }

    bool hasRemoteIPAddress() { return m_remoteIPAddress.isJust(); }
    WTF::String getRemoteIPAddress(const WTF::String& defaultValue) { return m_remoteIPAddress.isJust() ? m_remoteIPAddress.fromJust() : defaultValue; }
    void setRemoteIPAddress(const WTF::String& value) { m_remoteIPAddress = value; }

    bool hasRemotePort() { return m_remotePort.isJust(); }
    int getRemotePort(int defaultValue) { return m_remotePort.isJust() ? m_remotePort.fromJust() : defaultValue; }
    void setRemotePort(int value) { m_remotePort = value; }

    bool hasFromDiskCache() { return m_fromDiskCache.isJust(); }
    bool getFromDiskCache(bool defaultValue) { return m_fromDiskCache.isJust() ? m_fromDiskCache.fromJust() : defaultValue; }
    void setFromDiskCache(bool value) { m_fromDiskCache = value; }

    bool hasFromServiceWorker() { return m_fromServiceWorker.isJust(); }
    bool getFromServiceWorker(bool defaultValue) { return m_fromServiceWorker.isJust() ? m_fromServiceWorker.fromJust() : defaultValue; }
    void setFromServiceWorker(bool value) { m_fromServiceWorker = value; }

    double getEncodedDataLength() { return m_encodedDataLength; }
    void setEncodedDataLength(double value) { m_encodedDataLength = value; }

    bool hasTiming() { return m_timing.isJust(); }
    protocol::Network::ResourceTiming* getTiming(protocol::Network::ResourceTiming* defaultValue) { return m_timing.isJust() ? m_timing.fromJust() : defaultValue; }
    void setTiming(std::unique_ptr<protocol::Network::ResourceTiming> value) { m_timing = std::move(value); }

    bool hasProtocol() { return m_protocol.isJust(); }
    WTF::String getProtocol(const WTF::String& defaultValue) { return m_protocol.isJust() ? m_protocol.fromJust() : defaultValue; }
    void setProtocol(const WTF::String& value) { m_protocol = value; }

    WTF::String getSecurityState() { return m_securityState; }
    void setSecurityState(const WTF::String& value) { m_securityState = value; }

    bool hasSecurityDetails() { return m_securityDetails.isJust(); }
    protocol::Network::SecurityDetails* getSecurityDetails(protocol::Network::SecurityDetails* defaultValue) { return m_securityDetails.isJust() ? m_securityDetails.fromJust() : defaultValue; }
    void setSecurityDetails(std::unique_ptr<protocol::Network::SecurityDetails> value) { m_securityDetails = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<Response> clone() const;

    template<int STATE>
    class ResponseBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          UrlSet = 1 << 1,
          StatusSet = 1 << 2,
          StatusTextSet = 1 << 3,
          HeadersSet = 1 << 4,
          MimeTypeSet = 1 << 5,
          ConnectionReusedSet = 1 << 6,
          ConnectionIdSet = 1 << 7,
          EncodedDataLengthSet = 1 << 8,
          SecurityStateSet = 1 << 9,
            AllFieldsSet = (UrlSet | StatusSet | StatusTextSet | HeadersSet | MimeTypeSet | ConnectionReusedSet | ConnectionIdSet | EncodedDataLengthSet | SecurityStateSet | 0)};


        ResponseBuilder<STATE | UrlSet>& setUrl(const WTF::String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->setUrl(value);
            return castState<UrlSet>();
        }

        ResponseBuilder<STATE | StatusSet>& setStatus(double value)
        {
            static_assert(!(STATE & StatusSet), "property status should not be set yet");
            m_result->setStatus(value);
            return castState<StatusSet>();
        }

        ResponseBuilder<STATE | StatusTextSet>& setStatusText(const WTF::String& value)
        {
            static_assert(!(STATE & StatusTextSet), "property statusText should not be set yet");
            m_result->setStatusText(value);
            return castState<StatusTextSet>();
        }

        ResponseBuilder<STATE | HeadersSet>& setHeaders(std::unique_ptr<protocol::Network::Headers> value)
        {
            static_assert(!(STATE & HeadersSet), "property headers should not be set yet");
            m_result->setHeaders(std::move(value));
            return castState<HeadersSet>();
        }

        ResponseBuilder<STATE>& setHeadersText(const WTF::String& value)
        {
            m_result->setHeadersText(value);
            return *this;
        }

        ResponseBuilder<STATE | MimeTypeSet>& setMimeType(const WTF::String& value)
        {
            static_assert(!(STATE & MimeTypeSet), "property mimeType should not be set yet");
            m_result->setMimeType(value);
            return castState<MimeTypeSet>();
        }

        ResponseBuilder<STATE>& setRequestHeaders(std::unique_ptr<protocol::Network::Headers> value)
        {
            m_result->setRequestHeaders(std::move(value));
            return *this;
        }

        ResponseBuilder<STATE>& setRequestHeadersText(const WTF::String& value)
        {
            m_result->setRequestHeadersText(value);
            return *this;
        }

        ResponseBuilder<STATE | ConnectionReusedSet>& setConnectionReused(bool value)
        {
            static_assert(!(STATE & ConnectionReusedSet), "property connectionReused should not be set yet");
            m_result->setConnectionReused(value);
            return castState<ConnectionReusedSet>();
        }

        ResponseBuilder<STATE | ConnectionIdSet>& setConnectionId(double value)
        {
            static_assert(!(STATE & ConnectionIdSet), "property connectionId should not be set yet");
            m_result->setConnectionId(value);
            return castState<ConnectionIdSet>();
        }

        ResponseBuilder<STATE>& setRemoteIPAddress(const WTF::String& value)
        {
            m_result->setRemoteIPAddress(value);
            return *this;
        }

        ResponseBuilder<STATE>& setRemotePort(int value)
        {
            m_result->setRemotePort(value);
            return *this;
        }

        ResponseBuilder<STATE>& setFromDiskCache(bool value)
        {
            m_result->setFromDiskCache(value);
            return *this;
        }

        ResponseBuilder<STATE>& setFromServiceWorker(bool value)
        {
            m_result->setFromServiceWorker(value);
            return *this;
        }

        ResponseBuilder<STATE | EncodedDataLengthSet>& setEncodedDataLength(double value)
        {
            static_assert(!(STATE & EncodedDataLengthSet), "property encodedDataLength should not be set yet");
            m_result->setEncodedDataLength(value);
            return castState<EncodedDataLengthSet>();
        }

        ResponseBuilder<STATE>& setTiming(std::unique_ptr<protocol::Network::ResourceTiming> value)
        {
            m_result->setTiming(std::move(value));
            return *this;
        }

        ResponseBuilder<STATE>& setProtocol(const WTF::String& value)
        {
            m_result->setProtocol(value);
            return *this;
        }

        ResponseBuilder<STATE | SecurityStateSet>& setSecurityState(const WTF::String& value)
        {
            static_assert(!(STATE & SecurityStateSet), "property securityState should not be set yet");
            m_result->setSecurityState(value);
            return castState<SecurityStateSet>();
        }

        ResponseBuilder<STATE>& setSecurityDetails(std::unique_ptr<protocol::Network::SecurityDetails> value)
        {
            m_result->setSecurityDetails(std::move(value));
            return *this;
        }

        std::unique_ptr<Response> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Response;
        ResponseBuilder() : m_result(new Response()) { }

        template<int STEP> ResponseBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ResponseBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::Response> m_result;
    };

    static ResponseBuilder<0> create()
    {
        return ResponseBuilder<0>();
    }

private:
    Response()
    {
          m_status = 0;
          m_connectionReused = false;
          m_connectionId = 0;
          m_encodedDataLength = 0;
    }

    WTF::String m_url;
    double m_status;
    WTF::String m_statusText;
    std::unique_ptr<protocol::Network::Headers> m_headers;
    Maybe<WTF::String> m_headersText;
    WTF::String m_mimeType;
    Maybe<protocol::Network::Headers> m_requestHeaders;
    Maybe<WTF::String> m_requestHeadersText;
    bool m_connectionReused;
    double m_connectionId;
    Maybe<WTF::String> m_remoteIPAddress;
    Maybe<int> m_remotePort;
    Maybe<bool> m_fromDiskCache;
    Maybe<bool> m_fromServiceWorker;
    double m_encodedDataLength;
    Maybe<protocol::Network::ResourceTiming> m_timing;
    Maybe<WTF::String> m_protocol;
    WTF::String m_securityState;
    Maybe<protocol::Network::SecurityDetails> m_securityDetails;
};


// WebSocket request data.
class CORE_EXPORT WebSocketRequest {
    PROTOCOL_DISALLOW_COPY(WebSocketRequest);
public:
    static std::unique_ptr<WebSocketRequest> parse(protocol::Value* value, ErrorSupport* errors);

    ~WebSocketRequest() { }

    protocol::Network::Headers* getHeaders() { return m_headers.get(); }
    void setHeaders(std::unique_ptr<protocol::Network::Headers> value) { m_headers = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<WebSocketRequest> clone() const;

    template<int STATE>
    class WebSocketRequestBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          HeadersSet = 1 << 1,
            AllFieldsSet = (HeadersSet | 0)};


        WebSocketRequestBuilder<STATE | HeadersSet>& setHeaders(std::unique_ptr<protocol::Network::Headers> value)
        {
            static_assert(!(STATE & HeadersSet), "property headers should not be set yet");
            m_result->setHeaders(std::move(value));
            return castState<HeadersSet>();
        }

        std::unique_ptr<WebSocketRequest> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class WebSocketRequest;
        WebSocketRequestBuilder() : m_result(new WebSocketRequest()) { }

        template<int STEP> WebSocketRequestBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<WebSocketRequestBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::WebSocketRequest> m_result;
    };

    static WebSocketRequestBuilder<0> create()
    {
        return WebSocketRequestBuilder<0>();
    }

private:
    WebSocketRequest()
    {
    }

    std::unique_ptr<protocol::Network::Headers> m_headers;
};


// WebSocket response data.
class CORE_EXPORT WebSocketResponse {
    PROTOCOL_DISALLOW_COPY(WebSocketResponse);
public:
    static std::unique_ptr<WebSocketResponse> parse(protocol::Value* value, ErrorSupport* errors);

    ~WebSocketResponse() { }

    double getStatus() { return m_status; }
    void setStatus(double value) { m_status = value; }

    WTF::String getStatusText() { return m_statusText; }
    void setStatusText(const WTF::String& value) { m_statusText = value; }

    protocol::Network::Headers* getHeaders() { return m_headers.get(); }
    void setHeaders(std::unique_ptr<protocol::Network::Headers> value) { m_headers = std::move(value); }

    bool hasHeadersText() { return m_headersText.isJust(); }
    WTF::String getHeadersText(const WTF::String& defaultValue) { return m_headersText.isJust() ? m_headersText.fromJust() : defaultValue; }
    void setHeadersText(const WTF::String& value) { m_headersText = value; }

    bool hasRequestHeaders() { return m_requestHeaders.isJust(); }
    protocol::Network::Headers* getRequestHeaders(protocol::Network::Headers* defaultValue) { return m_requestHeaders.isJust() ? m_requestHeaders.fromJust() : defaultValue; }
    void setRequestHeaders(std::unique_ptr<protocol::Network::Headers> value) { m_requestHeaders = std::move(value); }

    bool hasRequestHeadersText() { return m_requestHeadersText.isJust(); }
    WTF::String getRequestHeadersText(const WTF::String& defaultValue) { return m_requestHeadersText.isJust() ? m_requestHeadersText.fromJust() : defaultValue; }
    void setRequestHeadersText(const WTF::String& value) { m_requestHeadersText = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<WebSocketResponse> clone() const;

    template<int STATE>
    class WebSocketResponseBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          StatusSet = 1 << 1,
          StatusTextSet = 1 << 2,
          HeadersSet = 1 << 3,
            AllFieldsSet = (StatusSet | StatusTextSet | HeadersSet | 0)};


        WebSocketResponseBuilder<STATE | StatusSet>& setStatus(double value)
        {
            static_assert(!(STATE & StatusSet), "property status should not be set yet");
            m_result->setStatus(value);
            return castState<StatusSet>();
        }

        WebSocketResponseBuilder<STATE | StatusTextSet>& setStatusText(const WTF::String& value)
        {
            static_assert(!(STATE & StatusTextSet), "property statusText should not be set yet");
            m_result->setStatusText(value);
            return castState<StatusTextSet>();
        }

        WebSocketResponseBuilder<STATE | HeadersSet>& setHeaders(std::unique_ptr<protocol::Network::Headers> value)
        {
            static_assert(!(STATE & HeadersSet), "property headers should not be set yet");
            m_result->setHeaders(std::move(value));
            return castState<HeadersSet>();
        }

        WebSocketResponseBuilder<STATE>& setHeadersText(const WTF::String& value)
        {
            m_result->setHeadersText(value);
            return *this;
        }

        WebSocketResponseBuilder<STATE>& setRequestHeaders(std::unique_ptr<protocol::Network::Headers> value)
        {
            m_result->setRequestHeaders(std::move(value));
            return *this;
        }

        WebSocketResponseBuilder<STATE>& setRequestHeadersText(const WTF::String& value)
        {
            m_result->setRequestHeadersText(value);
            return *this;
        }

        std::unique_ptr<WebSocketResponse> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class WebSocketResponse;
        WebSocketResponseBuilder() : m_result(new WebSocketResponse()) { }

        template<int STEP> WebSocketResponseBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<WebSocketResponseBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::WebSocketResponse> m_result;
    };

    static WebSocketResponseBuilder<0> create()
    {
        return WebSocketResponseBuilder<0>();
    }

private:
    WebSocketResponse()
    {
          m_status = 0;
    }

    double m_status;
    WTF::String m_statusText;
    std::unique_ptr<protocol::Network::Headers> m_headers;
    Maybe<WTF::String> m_headersText;
    Maybe<protocol::Network::Headers> m_requestHeaders;
    Maybe<WTF::String> m_requestHeadersText;
};


// WebSocket frame data.
class CORE_EXPORT WebSocketFrame {
    PROTOCOL_DISALLOW_COPY(WebSocketFrame);
public:
    static std::unique_ptr<WebSocketFrame> parse(protocol::Value* value, ErrorSupport* errors);

    ~WebSocketFrame() { }

    double getOpcode() { return m_opcode; }
    void setOpcode(double value) { m_opcode = value; }

    bool getMask() { return m_mask; }
    void setMask(bool value) { m_mask = value; }

    WTF::String getPayloadData() { return m_payloadData; }
    void setPayloadData(const WTF::String& value) { m_payloadData = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<WebSocketFrame> clone() const;

    template<int STATE>
    class WebSocketFrameBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          OpcodeSet = 1 << 1,
          MaskSet = 1 << 2,
          PayloadDataSet = 1 << 3,
            AllFieldsSet = (OpcodeSet | MaskSet | PayloadDataSet | 0)};


        WebSocketFrameBuilder<STATE | OpcodeSet>& setOpcode(double value)
        {
            static_assert(!(STATE & OpcodeSet), "property opcode should not be set yet");
            m_result->setOpcode(value);
            return castState<OpcodeSet>();
        }

        WebSocketFrameBuilder<STATE | MaskSet>& setMask(bool value)
        {
            static_assert(!(STATE & MaskSet), "property mask should not be set yet");
            m_result->setMask(value);
            return castState<MaskSet>();
        }

        WebSocketFrameBuilder<STATE | PayloadDataSet>& setPayloadData(const WTF::String& value)
        {
            static_assert(!(STATE & PayloadDataSet), "property payloadData should not be set yet");
            m_result->setPayloadData(value);
            return castState<PayloadDataSet>();
        }

        std::unique_ptr<WebSocketFrame> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class WebSocketFrame;
        WebSocketFrameBuilder() : m_result(new WebSocketFrame()) { }

        template<int STEP> WebSocketFrameBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<WebSocketFrameBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::WebSocketFrame> m_result;
    };

    static WebSocketFrameBuilder<0> create()
    {
        return WebSocketFrameBuilder<0>();
    }

private:
    WebSocketFrame()
    {
          m_opcode = 0;
          m_mask = false;
    }

    double m_opcode;
    bool m_mask;
    WTF::String m_payloadData;
};


// Information about the cached resource.
class CORE_EXPORT CachedResource {
    PROTOCOL_DISALLOW_COPY(CachedResource);
public:
    static std::unique_ptr<CachedResource> parse(protocol::Value* value, ErrorSupport* errors);

    ~CachedResource() { }

    WTF::String getUrl() { return m_url; }
    void setUrl(const WTF::String& value) { m_url = value; }

    WTF::String getType() { return m_type; }
    void setType(const WTF::String& value) { m_type = value; }

    bool hasResponse() { return m_response.isJust(); }
    protocol::Network::Response* getResponse(protocol::Network::Response* defaultValue) { return m_response.isJust() ? m_response.fromJust() : defaultValue; }
    void setResponse(std::unique_ptr<protocol::Network::Response> value) { m_response = std::move(value); }

    double getBodySize() { return m_bodySize; }
    void setBodySize(double value) { m_bodySize = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<CachedResource> clone() const;

    template<int STATE>
    class CachedResourceBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          UrlSet = 1 << 1,
          TypeSet = 1 << 2,
          BodySizeSet = 1 << 3,
            AllFieldsSet = (UrlSet | TypeSet | BodySizeSet | 0)};


        CachedResourceBuilder<STATE | UrlSet>& setUrl(const WTF::String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->setUrl(value);
            return castState<UrlSet>();
        }

        CachedResourceBuilder<STATE | TypeSet>& setType(const WTF::String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        CachedResourceBuilder<STATE>& setResponse(std::unique_ptr<protocol::Network::Response> value)
        {
            m_result->setResponse(std::move(value));
            return *this;
        }

        CachedResourceBuilder<STATE | BodySizeSet>& setBodySize(double value)
        {
            static_assert(!(STATE & BodySizeSet), "property bodySize should not be set yet");
            m_result->setBodySize(value);
            return castState<BodySizeSet>();
        }

        std::unique_ptr<CachedResource> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class CachedResource;
        CachedResourceBuilder() : m_result(new CachedResource()) { }

        template<int STEP> CachedResourceBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CachedResourceBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::CachedResource> m_result;
    };

    static CachedResourceBuilder<0> create()
    {
        return CachedResourceBuilder<0>();
    }

private:
    CachedResource()
    {
          m_bodySize = 0;
    }

    WTF::String m_url;
    WTF::String m_type;
    Maybe<protocol::Network::Response> m_response;
    double m_bodySize;
};


// Information about the request initiator.
class CORE_EXPORT Initiator {
    PROTOCOL_DISALLOW_COPY(Initiator);
public:
    static std::unique_ptr<Initiator> parse(protocol::Value* value, ErrorSupport* errors);

    ~Initiator() { }

    struct CORE_EXPORT TypeEnum {
        static const char* Parser;
        static const char* Script;
        static const char* Other;
    }; // TypeEnum

    WTF::String getType() { return m_type; }
    void setType(const WTF::String& value) { m_type = value; }

    bool hasStack() { return m_stack.isJust(); }
    protocol::Runtime::API::StackTrace* getStack(protocol::Runtime::API::StackTrace* defaultValue) { return m_stack.isJust() ? m_stack.fromJust() : defaultValue; }
    void setStack(std::unique_ptr<protocol::Runtime::API::StackTrace> value) { m_stack = std::move(value); }

    bool hasUrl() { return m_url.isJust(); }
    WTF::String getUrl(const WTF::String& defaultValue) { return m_url.isJust() ? m_url.fromJust() : defaultValue; }
    void setUrl(const WTF::String& value) { m_url = value; }

    bool hasLineNumber() { return m_lineNumber.isJust(); }
    double getLineNumber(double defaultValue) { return m_lineNumber.isJust() ? m_lineNumber.fromJust() : defaultValue; }
    void setLineNumber(double value) { m_lineNumber = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<Initiator> clone() const;

    template<int STATE>
    class InitiatorBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          TypeSet = 1 << 1,
            AllFieldsSet = (TypeSet | 0)};


        InitiatorBuilder<STATE | TypeSet>& setType(const WTF::String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        InitiatorBuilder<STATE>& setStack(std::unique_ptr<protocol::Runtime::API::StackTrace> value)
        {
            m_result->setStack(std::move(value));
            return *this;
        }

        InitiatorBuilder<STATE>& setUrl(const WTF::String& value)
        {
            m_result->setUrl(value);
            return *this;
        }

        InitiatorBuilder<STATE>& setLineNumber(double value)
        {
            m_result->setLineNumber(value);
            return *this;
        }

        std::unique_ptr<Initiator> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Initiator;
        InitiatorBuilder() : m_result(new Initiator()) { }

        template<int STEP> InitiatorBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<InitiatorBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::Initiator> m_result;
    };

    static InitiatorBuilder<0> create()
    {
        return InitiatorBuilder<0>();
    }

private:
    Initiator()
    {
    }

    WTF::String m_type;
    Maybe<protocol::Runtime::API::StackTrace> m_stack;
    Maybe<WTF::String> m_url;
    Maybe<double> m_lineNumber;
};


// Cookie object
class CORE_EXPORT Cookie {
    PROTOCOL_DISALLOW_COPY(Cookie);
public:
    static std::unique_ptr<Cookie> parse(protocol::Value* value, ErrorSupport* errors);

    ~Cookie() { }

    WTF::String getName() { return m_name; }
    void setName(const WTF::String& value) { m_name = value; }

    WTF::String getValue() { return m_value; }
    void setValue(const WTF::String& value) { m_value = value; }

    WTF::String getDomain() { return m_domain; }
    void setDomain(const WTF::String& value) { m_domain = value; }

    WTF::String getPath() { return m_path; }
    void setPath(const WTF::String& value) { m_path = value; }

    double getExpires() { return m_expires; }
    void setExpires(double value) { m_expires = value; }

    int getSize() { return m_size; }
    void setSize(int value) { m_size = value; }

    bool getHttpOnly() { return m_httpOnly; }
    void setHttpOnly(bool value) { m_httpOnly = value; }

    bool getSecure() { return m_secure; }
    void setSecure(bool value) { m_secure = value; }

    bool getSession() { return m_session; }
    void setSession(bool value) { m_session = value; }

    bool hasSameSite() { return m_sameSite.isJust(); }
    WTF::String getSameSite(const WTF::String& defaultValue) { return m_sameSite.isJust() ? m_sameSite.fromJust() : defaultValue; }
    void setSameSite(const WTF::String& value) { m_sameSite = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<Cookie> clone() const;

    template<int STATE>
    class CookieBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          NameSet = 1 << 1,
          ValueSet = 1 << 2,
          DomainSet = 1 << 3,
          PathSet = 1 << 4,
          ExpiresSet = 1 << 5,
          SizeSet = 1 << 6,
          HttpOnlySet = 1 << 7,
          SecureSet = 1 << 8,
          SessionSet = 1 << 9,
            AllFieldsSet = (NameSet | ValueSet | DomainSet | PathSet | ExpiresSet | SizeSet | HttpOnlySet | SecureSet | SessionSet | 0)};


        CookieBuilder<STATE | NameSet>& setName(const WTF::String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->setName(value);
            return castState<NameSet>();
        }

        CookieBuilder<STATE | ValueSet>& setValue(const WTF::String& value)
        {
            static_assert(!(STATE & ValueSet), "property value should not be set yet");
            m_result->setValue(value);
            return castState<ValueSet>();
        }

        CookieBuilder<STATE | DomainSet>& setDomain(const WTF::String& value)
        {
            static_assert(!(STATE & DomainSet), "property domain should not be set yet");
            m_result->setDomain(value);
            return castState<DomainSet>();
        }

        CookieBuilder<STATE | PathSet>& setPath(const WTF::String& value)
        {
            static_assert(!(STATE & PathSet), "property path should not be set yet");
            m_result->setPath(value);
            return castState<PathSet>();
        }

        CookieBuilder<STATE | ExpiresSet>& setExpires(double value)
        {
            static_assert(!(STATE & ExpiresSet), "property expires should not be set yet");
            m_result->setExpires(value);
            return castState<ExpiresSet>();
        }

        CookieBuilder<STATE | SizeSet>& setSize(int value)
        {
            static_assert(!(STATE & SizeSet), "property size should not be set yet");
            m_result->setSize(value);
            return castState<SizeSet>();
        }

        CookieBuilder<STATE | HttpOnlySet>& setHttpOnly(bool value)
        {
            static_assert(!(STATE & HttpOnlySet), "property httpOnly should not be set yet");
            m_result->setHttpOnly(value);
            return castState<HttpOnlySet>();
        }

        CookieBuilder<STATE | SecureSet>& setSecure(bool value)
        {
            static_assert(!(STATE & SecureSet), "property secure should not be set yet");
            m_result->setSecure(value);
            return castState<SecureSet>();
        }

        CookieBuilder<STATE | SessionSet>& setSession(bool value)
        {
            static_assert(!(STATE & SessionSet), "property session should not be set yet");
            m_result->setSession(value);
            return castState<SessionSet>();
        }

        CookieBuilder<STATE>& setSameSite(const WTF::String& value)
        {
            m_result->setSameSite(value);
            return *this;
        }

        std::unique_ptr<Cookie> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Cookie;
        CookieBuilder() : m_result(new Cookie()) { }

        template<int STEP> CookieBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<CookieBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Network::Cookie> m_result;
    };

    static CookieBuilder<0> create()
    {
        return CookieBuilder<0>();
    }

private:
    Cookie()
    {
          m_expires = 0;
          m_size = 0;
          m_httpOnly = false;
          m_secure = false;
          m_session = false;
    }

    WTF::String m_name;
    WTF::String m_value;
    WTF::String m_domain;
    WTF::String m_path;
    double m_expires;
    int m_size;
    bool m_httpOnly;
    bool m_secure;
    bool m_session;
    Maybe<WTF::String> m_sameSite;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual void enable(ErrorString*, const Maybe<int>& in_maxTotalBufferSize, const Maybe<int>& in_maxResourceBufferSize) = 0;
    virtual void disable(ErrorString*) = 0;
    virtual void setUserAgentOverride(ErrorString*, const WTF::String& in_userAgent) = 0;
    virtual void setExtraHTTPHeaders(ErrorString*, std::unique_ptr<protocol::Network::Headers> in_headers) = 0;
    class CORE_EXPORT GetResponseBodyCallback : public BackendCallback {
    public:
        virtual void sendSuccess(const WTF::String& body, bool base64Encoded) = 0;
    };
    virtual void getResponseBody(const WTF::String& in_requestId, std::unique_ptr<GetResponseBodyCallback> callback) = 0;
    virtual void addBlockedURL(ErrorString*, const WTF::String& in_url) = 0;
    virtual void removeBlockedURL(ErrorString*, const WTF::String& in_url) = 0;
    virtual void replayXHR(ErrorString*, const WTF::String& in_requestId) = 0;
    virtual void setMonitoringXHREnabled(ErrorString*, bool in_enabled) = 0;
    virtual void canClearBrowserCache(ErrorString*, bool* out_result) = 0;
    virtual void canClearBrowserCookies(ErrorString*, bool* out_result) = 0;
    virtual void emulateNetworkConditions(ErrorString*, bool in_offline, double in_latency, double in_downloadThroughput, double in_uploadThroughput, const Maybe<WTF::String>& in_connectionType) = 0;
    virtual void setCacheDisabled(ErrorString*, bool in_cacheDisabled) = 0;
    virtual void setBypassServiceWorker(ErrorString*, bool in_bypass) = 0;
    virtual void setDataSizeLimitsForTest(ErrorString*, int in_maxTotalSize, int in_maxResourceSize) = 0;


protected:
    virtual ~Backend() { }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void resourceChangedPriority(const WTF::String& requestId, const WTF::String& newPriority, double timestamp);
    void requestWillBeSent(const WTF::String& requestId, const WTF::String& frameId, const WTF::String& loaderId, const WTF::String& documentURL, std::unique_ptr<protocol::Network::Request> request, double timestamp, double wallTime, std::unique_ptr<protocol::Network::Initiator> initiator, const Maybe<protocol::Network::Response>& redirectResponse = Maybe<protocol::Network::Response>(), const Maybe<WTF::String>& type = Maybe<WTF::String>());
    void requestServedFromCache(const WTF::String& requestId);
    void responseReceived(const WTF::String& requestId, const WTF::String& frameId, const WTF::String& loaderId, double timestamp, const WTF::String& type, std::unique_ptr<protocol::Network::Response> response);
    void dataReceived(const WTF::String& requestId, double timestamp, int dataLength, int encodedDataLength);
    void loadingFinished(const WTF::String& requestId, double timestamp, double encodedDataLength);
    void loadingFailed(const WTF::String& requestId, double timestamp, const WTF::String& type, const WTF::String& errorText, const Maybe<bool>& canceled = Maybe<bool>(), const Maybe<WTF::String>& blockedReason = Maybe<WTF::String>());
    void webSocketWillSendHandshakeRequest(const WTF::String& requestId, double timestamp, double wallTime, std::unique_ptr<protocol::Network::WebSocketRequest> request);
    void webSocketHandshakeResponseReceived(const WTF::String& requestId, double timestamp, std::unique_ptr<protocol::Network::WebSocketResponse> response);
    void webSocketCreated(const WTF::String& requestId, const WTF::String& url, const Maybe<protocol::Network::Initiator>& initiator = Maybe<protocol::Network::Initiator>());
    void webSocketClosed(const WTF::String& requestId, double timestamp);
    void webSocketFrameReceived(const WTF::String& requestId, double timestamp, std::unique_ptr<protocol::Network::WebSocketFrame> response);
    void webSocketFrameError(const WTF::String& requestId, double timestamp, const WTF::String& errorMessage);
    void webSocketFrameSent(const WTF::String& requestId, double timestamp, std::unique_ptr<protocol::Network::WebSocketFrame> response);
    void eventSourceMessageReceived(const WTF::String& requestId, double timestamp, const WTF::String& eventName, const WTF::String& eventId, const WTF::String& data);

    void flush() { m_frontendChannel->flushProtocolNotifications(); }
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, blink::protocol::Network::Backend*);

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

} // namespace Network
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Network_h)
