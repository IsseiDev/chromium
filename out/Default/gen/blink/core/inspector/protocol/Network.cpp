// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "core/inspector/protocol/Network.h"

namespace blink {
namespace protocol {
namespace Network {

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Network";
const char Metainfo::commandPrefix[] = "Network.";
const char Metainfo::version[] = "1.1";

namespace ConnectionTypeEnum {
const char* None = "none";
const char* Cellular2g = "cellular2g";
const char* Cellular3g = "cellular3g";
const char* Cellular4g = "cellular4g";
const char* Bluetooth = "bluetooth";
const char* Ethernet = "ethernet";
const char* Wifi = "wifi";
const char* Wimax = "wimax";
const char* Other = "other";
} // namespace ConnectionTypeEnum

namespace CookieSameSiteEnum {
const char* Strict = "Strict";
const char* Lax = "Lax";
} // namespace CookieSameSiteEnum

std::unique_ptr<ResourceTiming> ResourceTiming::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<ResourceTiming> result(new ResourceTiming());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* requestTimeValue = object->get("requestTime");
    errors->setName("requestTime");
    result->m_requestTime = ValueConversions<double>::parse(requestTimeValue, errors);
    protocol::Value* proxyStartValue = object->get("proxyStart");
    errors->setName("proxyStart");
    result->m_proxyStart = ValueConversions<double>::parse(proxyStartValue, errors);
    protocol::Value* proxyEndValue = object->get("proxyEnd");
    errors->setName("proxyEnd");
    result->m_proxyEnd = ValueConversions<double>::parse(proxyEndValue, errors);
    protocol::Value* dnsStartValue = object->get("dnsStart");
    errors->setName("dnsStart");
    result->m_dnsStart = ValueConversions<double>::parse(dnsStartValue, errors);
    protocol::Value* dnsEndValue = object->get("dnsEnd");
    errors->setName("dnsEnd");
    result->m_dnsEnd = ValueConversions<double>::parse(dnsEndValue, errors);
    protocol::Value* connectStartValue = object->get("connectStart");
    errors->setName("connectStart");
    result->m_connectStart = ValueConversions<double>::parse(connectStartValue, errors);
    protocol::Value* connectEndValue = object->get("connectEnd");
    errors->setName("connectEnd");
    result->m_connectEnd = ValueConversions<double>::parse(connectEndValue, errors);
    protocol::Value* sslStartValue = object->get("sslStart");
    errors->setName("sslStart");
    result->m_sslStart = ValueConversions<double>::parse(sslStartValue, errors);
    protocol::Value* sslEndValue = object->get("sslEnd");
    errors->setName("sslEnd");
    result->m_sslEnd = ValueConversions<double>::parse(sslEndValue, errors);
    protocol::Value* workerStartValue = object->get("workerStart");
    errors->setName("workerStart");
    result->m_workerStart = ValueConversions<double>::parse(workerStartValue, errors);
    protocol::Value* workerReadyValue = object->get("workerReady");
    errors->setName("workerReady");
    result->m_workerReady = ValueConversions<double>::parse(workerReadyValue, errors);
    protocol::Value* sendStartValue = object->get("sendStart");
    errors->setName("sendStart");
    result->m_sendStart = ValueConversions<double>::parse(sendStartValue, errors);
    protocol::Value* sendEndValue = object->get("sendEnd");
    errors->setName("sendEnd");
    result->m_sendEnd = ValueConversions<double>::parse(sendEndValue, errors);
    protocol::Value* pushStartValue = object->get("pushStart");
    errors->setName("pushStart");
    result->m_pushStart = ValueConversions<double>::parse(pushStartValue, errors);
    protocol::Value* pushEndValue = object->get("pushEnd");
    errors->setName("pushEnd");
    result->m_pushEnd = ValueConversions<double>::parse(pushEndValue, errors);
    protocol::Value* receiveHeadersEndValue = object->get("receiveHeadersEnd");
    errors->setName("receiveHeadersEnd");
    result->m_receiveHeadersEnd = ValueConversions<double>::parse(receiveHeadersEndValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> ResourceTiming::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("requestTime", ValueConversions<double>::serialize(m_requestTime));
    result->setValue("proxyStart", ValueConversions<double>::serialize(m_proxyStart));
    result->setValue("proxyEnd", ValueConversions<double>::serialize(m_proxyEnd));
    result->setValue("dnsStart", ValueConversions<double>::serialize(m_dnsStart));
    result->setValue("dnsEnd", ValueConversions<double>::serialize(m_dnsEnd));
    result->setValue("connectStart", ValueConversions<double>::serialize(m_connectStart));
    result->setValue("connectEnd", ValueConversions<double>::serialize(m_connectEnd));
    result->setValue("sslStart", ValueConversions<double>::serialize(m_sslStart));
    result->setValue("sslEnd", ValueConversions<double>::serialize(m_sslEnd));
    result->setValue("workerStart", ValueConversions<double>::serialize(m_workerStart));
    result->setValue("workerReady", ValueConversions<double>::serialize(m_workerReady));
    result->setValue("sendStart", ValueConversions<double>::serialize(m_sendStart));
    result->setValue("sendEnd", ValueConversions<double>::serialize(m_sendEnd));
    result->setValue("pushStart", ValueConversions<double>::serialize(m_pushStart));
    result->setValue("pushEnd", ValueConversions<double>::serialize(m_pushEnd));
    result->setValue("receiveHeadersEnd", ValueConversions<double>::serialize(m_receiveHeadersEnd));
    return result;
}

std::unique_ptr<ResourceTiming> ResourceTiming::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

namespace ResourcePriorityEnum {
const char* VeryLow = "VeryLow";
const char* Low = "Low";
const char* Medium = "Medium";
const char* High = "High";
const char* VeryHigh = "VeryHigh";
} // namespace ResourcePriorityEnum

const char* Request::MixedContentTypeEnum::Blockable = "blockable";
const char* Request::MixedContentTypeEnum::OptionallyBlockable = "optionally-blockable";
const char* Request::MixedContentTypeEnum::None = "none";

std::unique_ptr<Request> Request::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Request> result(new Request());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    protocol::Value* methodValue = object->get("method");
    errors->setName("method");
    result->m_method = ValueConversions<WTF::String>::parse(methodValue, errors);
    protocol::Value* headersValue = object->get("headers");
    errors->setName("headers");
    result->m_headers = ValueConversions<protocol::Network::Headers>::parse(headersValue, errors);
    protocol::Value* postDataValue = object->get("postData");
    if (postDataValue) {
        errors->setName("postData");
        result->m_postData = ValueConversions<WTF::String>::parse(postDataValue, errors);
    }
    protocol::Value* mixedContentTypeValue = object->get("mixedContentType");
    if (mixedContentTypeValue) {
        errors->setName("mixedContentType");
        result->m_mixedContentType = ValueConversions<WTF::String>::parse(mixedContentTypeValue, errors);
    }
    protocol::Value* initialPriorityValue = object->get("initialPriority");
    errors->setName("initialPriority");
    result->m_initialPriority = ValueConversions<WTF::String>::parse(initialPriorityValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Request::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("url", ValueConversions<WTF::String>::serialize(m_url));
    result->setValue("method", ValueConversions<WTF::String>::serialize(m_method));
    result->setValue("headers", ValueConversions<protocol::Network::Headers>::serialize(m_headers.get()));
    if (m_postData.isJust())
        result->setValue("postData", ValueConversions<WTF::String>::serialize(m_postData.fromJust()));
    if (m_mixedContentType.isJust())
        result->setValue("mixedContentType", ValueConversions<WTF::String>::serialize(m_mixedContentType.fromJust()));
    result->setValue("initialPriority", ValueConversions<WTF::String>::serialize(m_initialPriority));
    return result;
}

std::unique_ptr<Request> Request::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<CertificateSubject> CertificateSubject::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<CertificateSubject> result(new CertificateSubject());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<WTF::String>::parse(nameValue, errors);
    protocol::Value* sanDnsNamesValue = object->get("sanDnsNames");
    errors->setName("sanDnsNames");
    result->m_sanDnsNames = ValueConversions<protocol::Array<WTF::String>>::parse(sanDnsNamesValue, errors);
    protocol::Value* sanIpAddressesValue = object->get("sanIpAddresses");
    errors->setName("sanIpAddresses");
    result->m_sanIpAddresses = ValueConversions<protocol::Array<WTF::String>>::parse(sanIpAddressesValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> CertificateSubject::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<WTF::String>::serialize(m_name));
    result->setValue("sanDnsNames", ValueConversions<protocol::Array<WTF::String>>::serialize(m_sanDnsNames.get()));
    result->setValue("sanIpAddresses", ValueConversions<protocol::Array<WTF::String>>::serialize(m_sanIpAddresses.get()));
    return result;
}

std::unique_ptr<CertificateSubject> CertificateSubject::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<CertificateDetails> CertificateDetails::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<CertificateDetails> result(new CertificateDetails());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* subjectValue = object->get("subject");
    errors->setName("subject");
    result->m_subject = ValueConversions<protocol::Network::CertificateSubject>::parse(subjectValue, errors);
    protocol::Value* issuerValue = object->get("issuer");
    errors->setName("issuer");
    result->m_issuer = ValueConversions<WTF::String>::parse(issuerValue, errors);
    protocol::Value* validFromValue = object->get("validFrom");
    errors->setName("validFrom");
    result->m_validFrom = ValueConversions<double>::parse(validFromValue, errors);
    protocol::Value* validToValue = object->get("validTo");
    errors->setName("validTo");
    result->m_validTo = ValueConversions<double>::parse(validToValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> CertificateDetails::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("subject", ValueConversions<protocol::Network::CertificateSubject>::serialize(m_subject.get()));
    result->setValue("issuer", ValueConversions<WTF::String>::serialize(m_issuer));
    result->setValue("validFrom", ValueConversions<double>::serialize(m_validFrom));
    result->setValue("validTo", ValueConversions<double>::serialize(m_validTo));
    return result;
}

std::unique_ptr<CertificateDetails> CertificateDetails::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<SignedCertificateTimestamp> SignedCertificateTimestamp::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SignedCertificateTimestamp> result(new SignedCertificateTimestamp());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* statusValue = object->get("status");
    errors->setName("status");
    result->m_status = ValueConversions<WTF::String>::parse(statusValue, errors);
    protocol::Value* originValue = object->get("origin");
    errors->setName("origin");
    result->m_origin = ValueConversions<WTF::String>::parse(originValue, errors);
    protocol::Value* logDescriptionValue = object->get("logDescription");
    errors->setName("logDescription");
    result->m_logDescription = ValueConversions<WTF::String>::parse(logDescriptionValue, errors);
    protocol::Value* logIdValue = object->get("logId");
    errors->setName("logId");
    result->m_logId = ValueConversions<WTF::String>::parse(logIdValue, errors);
    protocol::Value* timestampValue = object->get("timestamp");
    errors->setName("timestamp");
    result->m_timestamp = ValueConversions<double>::parse(timestampValue, errors);
    protocol::Value* hashAlgorithmValue = object->get("hashAlgorithm");
    errors->setName("hashAlgorithm");
    result->m_hashAlgorithm = ValueConversions<WTF::String>::parse(hashAlgorithmValue, errors);
    protocol::Value* signatureAlgorithmValue = object->get("signatureAlgorithm");
    errors->setName("signatureAlgorithm");
    result->m_signatureAlgorithm = ValueConversions<WTF::String>::parse(signatureAlgorithmValue, errors);
    protocol::Value* signatureDataValue = object->get("signatureData");
    errors->setName("signatureData");
    result->m_signatureData = ValueConversions<WTF::String>::parse(signatureDataValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SignedCertificateTimestamp::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("status", ValueConversions<WTF::String>::serialize(m_status));
    result->setValue("origin", ValueConversions<WTF::String>::serialize(m_origin));
    result->setValue("logDescription", ValueConversions<WTF::String>::serialize(m_logDescription));
    result->setValue("logId", ValueConversions<WTF::String>::serialize(m_logId));
    result->setValue("timestamp", ValueConversions<double>::serialize(m_timestamp));
    result->setValue("hashAlgorithm", ValueConversions<WTF::String>::serialize(m_hashAlgorithm));
    result->setValue("signatureAlgorithm", ValueConversions<WTF::String>::serialize(m_signatureAlgorithm));
    result->setValue("signatureData", ValueConversions<WTF::String>::serialize(m_signatureData));
    return result;
}

std::unique_ptr<SignedCertificateTimestamp> SignedCertificateTimestamp::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<SecurityDetails> SecurityDetails::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<SecurityDetails> result(new SecurityDetails());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* protocolValue = object->get("protocol");
    errors->setName("protocol");
    result->m_protocol = ValueConversions<WTF::String>::parse(protocolValue, errors);
    protocol::Value* keyExchangeValue = object->get("keyExchange");
    errors->setName("keyExchange");
    result->m_keyExchange = ValueConversions<WTF::String>::parse(keyExchangeValue, errors);
    protocol::Value* cipherValue = object->get("cipher");
    errors->setName("cipher");
    result->m_cipher = ValueConversions<WTF::String>::parse(cipherValue, errors);
    protocol::Value* macValue = object->get("mac");
    if (macValue) {
        errors->setName("mac");
        result->m_mac = ValueConversions<WTF::String>::parse(macValue, errors);
    }
    protocol::Value* certificateIdValue = object->get("certificateId");
    errors->setName("certificateId");
    result->m_certificateId = ValueConversions<int>::parse(certificateIdValue, errors);
    protocol::Value* signedCertificateTimestampListValue = object->get("signedCertificateTimestampList");
    errors->setName("signedCertificateTimestampList");
    result->m_signedCertificateTimestampList = ValueConversions<protocol::Array<protocol::Network::SignedCertificateTimestamp>>::parse(signedCertificateTimestampListValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> SecurityDetails::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("protocol", ValueConversions<WTF::String>::serialize(m_protocol));
    result->setValue("keyExchange", ValueConversions<WTF::String>::serialize(m_keyExchange));
    result->setValue("cipher", ValueConversions<WTF::String>::serialize(m_cipher));
    if (m_mac.isJust())
        result->setValue("mac", ValueConversions<WTF::String>::serialize(m_mac.fromJust()));
    result->setValue("certificateId", ValueConversions<int>::serialize(m_certificateId));
    result->setValue("signedCertificateTimestampList", ValueConversions<protocol::Array<protocol::Network::SignedCertificateTimestamp>>::serialize(m_signedCertificateTimestampList.get()));
    return result;
}

std::unique_ptr<SecurityDetails> SecurityDetails::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

namespace BlockedReasonEnum {
const char* Csp = "csp";
const char* MixedContent = "mixed-content";
const char* Origin = "origin";
const char* Inspector = "inspector";
const char* SubresourceFilter = "subresource-filter";
const char* Other = "other";
} // namespace BlockedReasonEnum

std::unique_ptr<Response> Response::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Response> result(new Response());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    protocol::Value* statusValue = object->get("status");
    errors->setName("status");
    result->m_status = ValueConversions<double>::parse(statusValue, errors);
    protocol::Value* statusTextValue = object->get("statusText");
    errors->setName("statusText");
    result->m_statusText = ValueConversions<WTF::String>::parse(statusTextValue, errors);
    protocol::Value* headersValue = object->get("headers");
    errors->setName("headers");
    result->m_headers = ValueConversions<protocol::Network::Headers>::parse(headersValue, errors);
    protocol::Value* headersTextValue = object->get("headersText");
    if (headersTextValue) {
        errors->setName("headersText");
        result->m_headersText = ValueConversions<WTF::String>::parse(headersTextValue, errors);
    }
    protocol::Value* mimeTypeValue = object->get("mimeType");
    errors->setName("mimeType");
    result->m_mimeType = ValueConversions<WTF::String>::parse(mimeTypeValue, errors);
    protocol::Value* requestHeadersValue = object->get("requestHeaders");
    if (requestHeadersValue) {
        errors->setName("requestHeaders");
        result->m_requestHeaders = ValueConversions<protocol::Network::Headers>::parse(requestHeadersValue, errors);
    }
    protocol::Value* requestHeadersTextValue = object->get("requestHeadersText");
    if (requestHeadersTextValue) {
        errors->setName("requestHeadersText");
        result->m_requestHeadersText = ValueConversions<WTF::String>::parse(requestHeadersTextValue, errors);
    }
    protocol::Value* connectionReusedValue = object->get("connectionReused");
    errors->setName("connectionReused");
    result->m_connectionReused = ValueConversions<bool>::parse(connectionReusedValue, errors);
    protocol::Value* connectionIdValue = object->get("connectionId");
    errors->setName("connectionId");
    result->m_connectionId = ValueConversions<double>::parse(connectionIdValue, errors);
    protocol::Value* remoteIPAddressValue = object->get("remoteIPAddress");
    if (remoteIPAddressValue) {
        errors->setName("remoteIPAddress");
        result->m_remoteIPAddress = ValueConversions<WTF::String>::parse(remoteIPAddressValue, errors);
    }
    protocol::Value* remotePortValue = object->get("remotePort");
    if (remotePortValue) {
        errors->setName("remotePort");
        result->m_remotePort = ValueConversions<int>::parse(remotePortValue, errors);
    }
    protocol::Value* fromDiskCacheValue = object->get("fromDiskCache");
    if (fromDiskCacheValue) {
        errors->setName("fromDiskCache");
        result->m_fromDiskCache = ValueConversions<bool>::parse(fromDiskCacheValue, errors);
    }
    protocol::Value* fromServiceWorkerValue = object->get("fromServiceWorker");
    if (fromServiceWorkerValue) {
        errors->setName("fromServiceWorker");
        result->m_fromServiceWorker = ValueConversions<bool>::parse(fromServiceWorkerValue, errors);
    }
    protocol::Value* encodedDataLengthValue = object->get("encodedDataLength");
    errors->setName("encodedDataLength");
    result->m_encodedDataLength = ValueConversions<double>::parse(encodedDataLengthValue, errors);
    protocol::Value* timingValue = object->get("timing");
    if (timingValue) {
        errors->setName("timing");
        result->m_timing = ValueConversions<protocol::Network::ResourceTiming>::parse(timingValue, errors);
    }
    protocol::Value* protocolValue = object->get("protocol");
    if (protocolValue) {
        errors->setName("protocol");
        result->m_protocol = ValueConversions<WTF::String>::parse(protocolValue, errors);
    }
    protocol::Value* securityStateValue = object->get("securityState");
    errors->setName("securityState");
    result->m_securityState = ValueConversions<WTF::String>::parse(securityStateValue, errors);
    protocol::Value* securityDetailsValue = object->get("securityDetails");
    if (securityDetailsValue) {
        errors->setName("securityDetails");
        result->m_securityDetails = ValueConversions<protocol::Network::SecurityDetails>::parse(securityDetailsValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Response::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("url", ValueConversions<WTF::String>::serialize(m_url));
    result->setValue("status", ValueConversions<double>::serialize(m_status));
    result->setValue("statusText", ValueConversions<WTF::String>::serialize(m_statusText));
    result->setValue("headers", ValueConversions<protocol::Network::Headers>::serialize(m_headers.get()));
    if (m_headersText.isJust())
        result->setValue("headersText", ValueConversions<WTF::String>::serialize(m_headersText.fromJust()));
    result->setValue("mimeType", ValueConversions<WTF::String>::serialize(m_mimeType));
    if (m_requestHeaders.isJust())
        result->setValue("requestHeaders", ValueConversions<protocol::Network::Headers>::serialize(m_requestHeaders.fromJust()));
    if (m_requestHeadersText.isJust())
        result->setValue("requestHeadersText", ValueConversions<WTF::String>::serialize(m_requestHeadersText.fromJust()));
    result->setValue("connectionReused", ValueConversions<bool>::serialize(m_connectionReused));
    result->setValue("connectionId", ValueConversions<double>::serialize(m_connectionId));
    if (m_remoteIPAddress.isJust())
        result->setValue("remoteIPAddress", ValueConversions<WTF::String>::serialize(m_remoteIPAddress.fromJust()));
    if (m_remotePort.isJust())
        result->setValue("remotePort", ValueConversions<int>::serialize(m_remotePort.fromJust()));
    if (m_fromDiskCache.isJust())
        result->setValue("fromDiskCache", ValueConversions<bool>::serialize(m_fromDiskCache.fromJust()));
    if (m_fromServiceWorker.isJust())
        result->setValue("fromServiceWorker", ValueConversions<bool>::serialize(m_fromServiceWorker.fromJust()));
    result->setValue("encodedDataLength", ValueConversions<double>::serialize(m_encodedDataLength));
    if (m_timing.isJust())
        result->setValue("timing", ValueConversions<protocol::Network::ResourceTiming>::serialize(m_timing.fromJust()));
    if (m_protocol.isJust())
        result->setValue("protocol", ValueConversions<WTF::String>::serialize(m_protocol.fromJust()));
    result->setValue("securityState", ValueConversions<WTF::String>::serialize(m_securityState));
    if (m_securityDetails.isJust())
        result->setValue("securityDetails", ValueConversions<protocol::Network::SecurityDetails>::serialize(m_securityDetails.fromJust()));
    return result;
}

std::unique_ptr<Response> Response::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<WebSocketRequest> WebSocketRequest::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<WebSocketRequest> result(new WebSocketRequest());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* headersValue = object->get("headers");
    errors->setName("headers");
    result->m_headers = ValueConversions<protocol::Network::Headers>::parse(headersValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> WebSocketRequest::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("headers", ValueConversions<protocol::Network::Headers>::serialize(m_headers.get()));
    return result;
}

std::unique_ptr<WebSocketRequest> WebSocketRequest::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<WebSocketResponse> WebSocketResponse::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<WebSocketResponse> result(new WebSocketResponse());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* statusValue = object->get("status");
    errors->setName("status");
    result->m_status = ValueConversions<double>::parse(statusValue, errors);
    protocol::Value* statusTextValue = object->get("statusText");
    errors->setName("statusText");
    result->m_statusText = ValueConversions<WTF::String>::parse(statusTextValue, errors);
    protocol::Value* headersValue = object->get("headers");
    errors->setName("headers");
    result->m_headers = ValueConversions<protocol::Network::Headers>::parse(headersValue, errors);
    protocol::Value* headersTextValue = object->get("headersText");
    if (headersTextValue) {
        errors->setName("headersText");
        result->m_headersText = ValueConversions<WTF::String>::parse(headersTextValue, errors);
    }
    protocol::Value* requestHeadersValue = object->get("requestHeaders");
    if (requestHeadersValue) {
        errors->setName("requestHeaders");
        result->m_requestHeaders = ValueConversions<protocol::Network::Headers>::parse(requestHeadersValue, errors);
    }
    protocol::Value* requestHeadersTextValue = object->get("requestHeadersText");
    if (requestHeadersTextValue) {
        errors->setName("requestHeadersText");
        result->m_requestHeadersText = ValueConversions<WTF::String>::parse(requestHeadersTextValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> WebSocketResponse::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("status", ValueConversions<double>::serialize(m_status));
    result->setValue("statusText", ValueConversions<WTF::String>::serialize(m_statusText));
    result->setValue("headers", ValueConversions<protocol::Network::Headers>::serialize(m_headers.get()));
    if (m_headersText.isJust())
        result->setValue("headersText", ValueConversions<WTF::String>::serialize(m_headersText.fromJust()));
    if (m_requestHeaders.isJust())
        result->setValue("requestHeaders", ValueConversions<protocol::Network::Headers>::serialize(m_requestHeaders.fromJust()));
    if (m_requestHeadersText.isJust())
        result->setValue("requestHeadersText", ValueConversions<WTF::String>::serialize(m_requestHeadersText.fromJust()));
    return result;
}

std::unique_ptr<WebSocketResponse> WebSocketResponse::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<WebSocketFrame> WebSocketFrame::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<WebSocketFrame> result(new WebSocketFrame());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* opcodeValue = object->get("opcode");
    errors->setName("opcode");
    result->m_opcode = ValueConversions<double>::parse(opcodeValue, errors);
    protocol::Value* maskValue = object->get("mask");
    errors->setName("mask");
    result->m_mask = ValueConversions<bool>::parse(maskValue, errors);
    protocol::Value* payloadDataValue = object->get("payloadData");
    errors->setName("payloadData");
    result->m_payloadData = ValueConversions<WTF::String>::parse(payloadDataValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> WebSocketFrame::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("opcode", ValueConversions<double>::serialize(m_opcode));
    result->setValue("mask", ValueConversions<bool>::serialize(m_mask));
    result->setValue("payloadData", ValueConversions<WTF::String>::serialize(m_payloadData));
    return result;
}

std::unique_ptr<WebSocketFrame> WebSocketFrame::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<CachedResource> CachedResource::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<CachedResource> result(new CachedResource());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* urlValue = object->get("url");
    errors->setName("url");
    result->m_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    protocol::Value* responseValue = object->get("response");
    if (responseValue) {
        errors->setName("response");
        result->m_response = ValueConversions<protocol::Network::Response>::parse(responseValue, errors);
    }
    protocol::Value* bodySizeValue = object->get("bodySize");
    errors->setName("bodySize");
    result->m_bodySize = ValueConversions<double>::parse(bodySizeValue, errors);
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> CachedResource::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("url", ValueConversions<WTF::String>::serialize(m_url));
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    if (m_response.isJust())
        result->setValue("response", ValueConversions<protocol::Network::Response>::serialize(m_response.fromJust()));
    result->setValue("bodySize", ValueConversions<double>::serialize(m_bodySize));
    return result;
}

std::unique_ptr<CachedResource> CachedResource::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

const char* Initiator::TypeEnum::Parser = "parser";
const char* Initiator::TypeEnum::Script = "script";
const char* Initiator::TypeEnum::Other = "other";

std::unique_ptr<Initiator> Initiator::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Initiator> result(new Initiator());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* typeValue = object->get("type");
    errors->setName("type");
    result->m_type = ValueConversions<WTF::String>::parse(typeValue, errors);
    protocol::Value* stackValue = object->get("stack");
    if (stackValue) {
        errors->setName("stack");
        result->m_stack = ValueConversions<protocol::Runtime::API::StackTrace>::parse(stackValue, errors);
    }
    protocol::Value* urlValue = object->get("url");
    if (urlValue) {
        errors->setName("url");
        result->m_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    }
    protocol::Value* lineNumberValue = object->get("lineNumber");
    if (lineNumberValue) {
        errors->setName("lineNumber");
        result->m_lineNumber = ValueConversions<double>::parse(lineNumberValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Initiator::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("type", ValueConversions<WTF::String>::serialize(m_type));
    if (m_stack.isJust())
        result->setValue("stack", ValueConversions<protocol::Runtime::API::StackTrace>::serialize(m_stack.fromJust()));
    if (m_url.isJust())
        result->setValue("url", ValueConversions<WTF::String>::serialize(m_url.fromJust()));
    if (m_lineNumber.isJust())
        result->setValue("lineNumber", ValueConversions<double>::serialize(m_lineNumber.fromJust()));
    return result;
}

std::unique_ptr<Initiator> Initiator::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

std::unique_ptr<Cookie> Cookie::parse(protocol::Value* value, ErrorSupport* errors)
{
    if (!value || value->type() != protocol::Value::TypeObject) {
        errors->addError("object expected");
        return nullptr;
    }

    std::unique_ptr<Cookie> result(new Cookie());
    protocol::DictionaryValue* object = DictionaryValue::cast(value);
    errors->push();
    protocol::Value* nameValue = object->get("name");
    errors->setName("name");
    result->m_name = ValueConversions<WTF::String>::parse(nameValue, errors);
    protocol::Value* valueValue = object->get("value");
    errors->setName("value");
    result->m_value = ValueConversions<WTF::String>::parse(valueValue, errors);
    protocol::Value* domainValue = object->get("domain");
    errors->setName("domain");
    result->m_domain = ValueConversions<WTF::String>::parse(domainValue, errors);
    protocol::Value* pathValue = object->get("path");
    errors->setName("path");
    result->m_path = ValueConversions<WTF::String>::parse(pathValue, errors);
    protocol::Value* expiresValue = object->get("expires");
    errors->setName("expires");
    result->m_expires = ValueConversions<double>::parse(expiresValue, errors);
    protocol::Value* sizeValue = object->get("size");
    errors->setName("size");
    result->m_size = ValueConversions<int>::parse(sizeValue, errors);
    protocol::Value* httpOnlyValue = object->get("httpOnly");
    errors->setName("httpOnly");
    result->m_httpOnly = ValueConversions<bool>::parse(httpOnlyValue, errors);
    protocol::Value* secureValue = object->get("secure");
    errors->setName("secure");
    result->m_secure = ValueConversions<bool>::parse(secureValue, errors);
    protocol::Value* sessionValue = object->get("session");
    errors->setName("session");
    result->m_session = ValueConversions<bool>::parse(sessionValue, errors);
    protocol::Value* sameSiteValue = object->get("sameSite");
    if (sameSiteValue) {
        errors->setName("sameSite");
        result->m_sameSite = ValueConversions<WTF::String>::parse(sameSiteValue, errors);
    }
    errors->pop();
    if (errors->hasErrors())
        return nullptr;
    return result;
}

std::unique_ptr<protocol::DictionaryValue> Cookie::serialize() const
{
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    result->setValue("name", ValueConversions<WTF::String>::serialize(m_name));
    result->setValue("value", ValueConversions<WTF::String>::serialize(m_value));
    result->setValue("domain", ValueConversions<WTF::String>::serialize(m_domain));
    result->setValue("path", ValueConversions<WTF::String>::serialize(m_path));
    result->setValue("expires", ValueConversions<double>::serialize(m_expires));
    result->setValue("size", ValueConversions<int>::serialize(m_size));
    result->setValue("httpOnly", ValueConversions<bool>::serialize(m_httpOnly));
    result->setValue("secure", ValueConversions<bool>::serialize(m_secure));
    result->setValue("session", ValueConversions<bool>::serialize(m_session));
    if (m_sameSite.isJust())
        result->setValue("sameSite", ValueConversions<WTF::String>::serialize(m_sameSite.fromJust()));
    return result;
}

std::unique_ptr<Cookie> Cookie::clone() const
{
    ErrorSupport errors;
    return parse(serialize().get(), &errors);
}

// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::resourceChangedPriority(const WTF::String& requestId, const WTF::String& newPriority, double timestamp)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.resourceChangedPriority");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("newPriority", ValueConversions<WTF::String>::serialize(newPriority));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::requestWillBeSent(const WTF::String& requestId, const WTF::String& frameId, const WTF::String& loaderId, const WTF::String& documentURL, std::unique_ptr<protocol::Network::Request> request, double timestamp, double wallTime, std::unique_ptr<protocol::Network::Initiator> initiator, const Maybe<protocol::Network::Response>& redirectResponse, const Maybe<WTF::String>& type)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.requestWillBeSent");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("frameId", ValueConversions<WTF::String>::serialize(frameId));
    paramsObject->setValue("loaderId", ValueConversions<WTF::String>::serialize(loaderId));
    paramsObject->setValue("documentURL", ValueConversions<WTF::String>::serialize(documentURL));
    paramsObject->setValue("request", ValueConversions<protocol::Network::Request>::serialize(request.get()));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    paramsObject->setValue("wallTime", ValueConversions<double>::serialize(wallTime));
    paramsObject->setValue("initiator", ValueConversions<protocol::Network::Initiator>::serialize(initiator.get()));
    if (redirectResponse.isJust())
        paramsObject->setValue("redirectResponse", ValueConversions<protocol::Network::Response>::serialize(redirectResponse.fromJust()));
    if (type.isJust())
        paramsObject->setValue("type", ValueConversions<WTF::String>::serialize(type.fromJust()));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::requestServedFromCache(const WTF::String& requestId)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.requestServedFromCache");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::responseReceived(const WTF::String& requestId, const WTF::String& frameId, const WTF::String& loaderId, double timestamp, const WTF::String& type, std::unique_ptr<protocol::Network::Response> response)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.responseReceived");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("frameId", ValueConversions<WTF::String>::serialize(frameId));
    paramsObject->setValue("loaderId", ValueConversions<WTF::String>::serialize(loaderId));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    paramsObject->setValue("type", ValueConversions<WTF::String>::serialize(type));
    paramsObject->setValue("response", ValueConversions<protocol::Network::Response>::serialize(response.get()));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::dataReceived(const WTF::String& requestId, double timestamp, int dataLength, int encodedDataLength)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.dataReceived");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    paramsObject->setValue("dataLength", ValueConversions<int>::serialize(dataLength));
    paramsObject->setValue("encodedDataLength", ValueConversions<int>::serialize(encodedDataLength));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::loadingFinished(const WTF::String& requestId, double timestamp, double encodedDataLength)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.loadingFinished");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    paramsObject->setValue("encodedDataLength", ValueConversions<double>::serialize(encodedDataLength));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::loadingFailed(const WTF::String& requestId, double timestamp, const WTF::String& type, const WTF::String& errorText, const Maybe<bool>& canceled, const Maybe<WTF::String>& blockedReason)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.loadingFailed");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    paramsObject->setValue("type", ValueConversions<WTF::String>::serialize(type));
    paramsObject->setValue("errorText", ValueConversions<WTF::String>::serialize(errorText));
    if (canceled.isJust())
        paramsObject->setValue("canceled", ValueConversions<bool>::serialize(canceled.fromJust()));
    if (blockedReason.isJust())
        paramsObject->setValue("blockedReason", ValueConversions<WTF::String>::serialize(blockedReason.fromJust()));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::webSocketWillSendHandshakeRequest(const WTF::String& requestId, double timestamp, double wallTime, std::unique_ptr<protocol::Network::WebSocketRequest> request)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.webSocketWillSendHandshakeRequest");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    paramsObject->setValue("wallTime", ValueConversions<double>::serialize(wallTime));
    paramsObject->setValue("request", ValueConversions<protocol::Network::WebSocketRequest>::serialize(request.get()));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::webSocketHandshakeResponseReceived(const WTF::String& requestId, double timestamp, std::unique_ptr<protocol::Network::WebSocketResponse> response)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.webSocketHandshakeResponseReceived");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    paramsObject->setValue("response", ValueConversions<protocol::Network::WebSocketResponse>::serialize(response.get()));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::webSocketCreated(const WTF::String& requestId, const WTF::String& url, const Maybe<protocol::Network::Initiator>& initiator)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.webSocketCreated");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("url", ValueConversions<WTF::String>::serialize(url));
    if (initiator.isJust())
        paramsObject->setValue("initiator", ValueConversions<protocol::Network::Initiator>::serialize(initiator.fromJust()));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::webSocketClosed(const WTF::String& requestId, double timestamp)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.webSocketClosed");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::webSocketFrameReceived(const WTF::String& requestId, double timestamp, std::unique_ptr<protocol::Network::WebSocketFrame> response)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.webSocketFrameReceived");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    paramsObject->setValue("response", ValueConversions<protocol::Network::WebSocketFrame>::serialize(response.get()));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::webSocketFrameError(const WTF::String& requestId, double timestamp, const WTF::String& errorMessage)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.webSocketFrameError");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    paramsObject->setValue("errorMessage", ValueConversions<WTF::String>::serialize(errorMessage));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::webSocketFrameSent(const WTF::String& requestId, double timestamp, std::unique_ptr<protocol::Network::WebSocketFrame> response)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.webSocketFrameSent");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    paramsObject->setValue("response", ValueConversions<protocol::Network::WebSocketFrame>::serialize(response.get()));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

void Frontend::eventSourceMessageReceived(const WTF::String& requestId, double timestamp, const WTF::String& eventName, const WTF::String& eventId, const WTF::String& data)
{
    std::unique_ptr<protocol::DictionaryValue> jsonMessage = DictionaryValue::create();
    jsonMessage->setString("method", "Network.eventSourceMessageReceived");
    std::unique_ptr<protocol::DictionaryValue> paramsObject = DictionaryValue::create();
    paramsObject->setValue("requestId", ValueConversions<WTF::String>::serialize(requestId));
    paramsObject->setValue("timestamp", ValueConversions<double>::serialize(timestamp));
    paramsObject->setValue("eventName", ValueConversions<WTF::String>::serialize(eventName));
    paramsObject->setValue("eventId", ValueConversions<WTF::String>::serialize(eventId));
    paramsObject->setValue("data", ValueConversions<WTF::String>::serialize(data));
    jsonMessage->setObject("params", std::move(paramsObject));
    if (m_frontendChannel)
        m_frontendChannel->sendProtocolNotification(jsonMessage->toJSONString());
}

// --------------------- Dispatcher.

class DispatcherImpl : public protocol::DispatcherBase {
public:
    DispatcherImpl(FrontendChannel* frontendChannel, Backend* backend)
        : DispatcherBase(frontendChannel)
        , m_backend(backend) {
        m_dispatchMap["Network.enable"] = &DispatcherImpl::enable;
        m_dispatchMap["Network.disable"] = &DispatcherImpl::disable;
        m_dispatchMap["Network.setUserAgentOverride"] = &DispatcherImpl::setUserAgentOverride;
        m_dispatchMap["Network.setExtraHTTPHeaders"] = &DispatcherImpl::setExtraHTTPHeaders;
        m_dispatchMap["Network.getResponseBody"] = &DispatcherImpl::getResponseBody;
        m_dispatchMap["Network.addBlockedURL"] = &DispatcherImpl::addBlockedURL;
        m_dispatchMap["Network.removeBlockedURL"] = &DispatcherImpl::removeBlockedURL;
        m_dispatchMap["Network.replayXHR"] = &DispatcherImpl::replayXHR;
        m_dispatchMap["Network.setMonitoringXHREnabled"] = &DispatcherImpl::setMonitoringXHREnabled;
        m_dispatchMap["Network.canClearBrowserCache"] = &DispatcherImpl::canClearBrowserCache;
        m_dispatchMap["Network.canClearBrowserCookies"] = &DispatcherImpl::canClearBrowserCookies;
        m_dispatchMap["Network.emulateNetworkConditions"] = &DispatcherImpl::emulateNetworkConditions;
        m_dispatchMap["Network.setCacheDisabled"] = &DispatcherImpl::setCacheDisabled;
        m_dispatchMap["Network.setBypassServiceWorker"] = &DispatcherImpl::setBypassServiceWorker;
        m_dispatchMap["Network.setDataSizeLimitsForTest"] = &DispatcherImpl::setDataSizeLimitsForTest;
    }
    ~DispatcherImpl() override { }
    void dispatch(int callId, const String16& method, std::unique_ptr<protocol::DictionaryValue> messageObject) override;

protected:
    using CallHandler = void (DispatcherImpl::*)(int callId, std::unique_ptr<DictionaryValue> messageObject, ErrorSupport* errors);
    using DispatchMap = protocol::HashMap<String16, CallHandler>;
    DispatchMap m_dispatchMap;

    void enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setUserAgentOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setExtraHTTPHeaders(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void getResponseBody(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void addBlockedURL(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void removeBlockedURL(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void replayXHR(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setMonitoringXHREnabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void canClearBrowserCache(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void canClearBrowserCookies(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void emulateNetworkConditions(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setCacheDisabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setBypassServiceWorker(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);
    void setDataSizeLimitsForTest(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport*);

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


void DispatcherImpl::enable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* maxTotalBufferSizeValue = object ? object->get("maxTotalBufferSize") : nullptr;
    Maybe<int> in_maxTotalBufferSize;
    if (maxTotalBufferSizeValue) {
        errors->setName("maxTotalBufferSize");
        in_maxTotalBufferSize = ValueConversions<int>::parse(maxTotalBufferSizeValue, errors);
    }
    protocol::Value* maxResourceBufferSizeValue = object ? object->get("maxResourceBufferSize") : nullptr;
    Maybe<int> in_maxResourceBufferSize;
    if (maxResourceBufferSizeValue) {
        errors->setName("maxResourceBufferSize");
        in_maxResourceBufferSize = ValueConversions<int>::parse(maxResourceBufferSizeValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->enable(&error, in_maxTotalBufferSize, in_maxResourceBufferSize);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::disable(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->disable(&error);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setUserAgentOverride(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* userAgentValue = object ? object->get("userAgent") : nullptr;
    errors->setName("userAgent");
    WTF::String in_userAgent = ValueConversions<WTF::String>::parse(userAgentValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setUserAgentOverride(&error, in_userAgent);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setExtraHTTPHeaders(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* headersValue = object ? object->get("headers") : nullptr;
    errors->setName("headers");
    std::unique_ptr<protocol::Network::Headers> in_headers = ValueConversions<protocol::Network::Headers>::parse(headersValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setExtraHTTPHeaders(&error, std::move(in_headers));
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

class GetResponseBodyCallbackImpl : public Backend::GetResponseBodyCallback, public DispatcherBase::Callback {
public:
    GetResponseBodyCallbackImpl(std::unique_ptr<DispatcherBase::WeakPtr> backendImpl, int callId)
        : DispatcherBase::Callback(std::move(backendImpl), callId) { }

    void sendSuccess(const WTF::String& body, bool base64Encoded) override
    {
        std::unique_ptr<protocol::DictionaryValue> resultObject = DictionaryValue::create();
        resultObject->setValue("body", ValueConversions<WTF::String>::serialize(body));
        resultObject->setValue("base64Encoded", ValueConversions<bool>::serialize(base64Encoded));
        sendIfActive(std::move(resultObject), ErrorString());
    }

    void sendFailure(const ErrorString& error) override
    {
        DCHECK(error.length());
        sendIfActive(nullptr, error);
    }

};

void DispatcherImpl::getResponseBody(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* requestIdValue = object ? object->get("requestId") : nullptr;
    errors->setName("requestId");
    WTF::String in_requestId = ValueConversions<WTF::String>::parse(requestIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }
    std::unique_ptr<GetResponseBodyCallbackImpl> callback(new GetResponseBodyCallbackImpl(weakPtr(), callId));

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    m_backend->getResponseBody(in_requestId,std::move(callback));
}

void DispatcherImpl::addBlockedURL(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    errors->setName("url");
    WTF::String in_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->addBlockedURL(&error, in_url);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::removeBlockedURL(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* urlValue = object ? object->get("url") : nullptr;
    errors->setName("url");
    WTF::String in_url = ValueConversions<WTF::String>::parse(urlValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->removeBlockedURL(&error, in_url);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::replayXHR(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* requestIdValue = object ? object->get("requestId") : nullptr;
    errors->setName("requestId");
    WTF::String in_requestId = ValueConversions<WTF::String>::parse(requestIdValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->replayXHR(&error, in_requestId);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setMonitoringXHREnabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* enabledValue = object ? object->get("enabled") : nullptr;
    errors->setName("enabled");
    bool in_enabled = ValueConversions<bool>::parse(enabledValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setMonitoringXHREnabled(&error, in_enabled);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::canClearBrowserCache(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    bool out_result;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->canClearBrowserCache(&error, &out_result);
    if (!error.length()) {
        result->setValue("result", ValueConversions<bool>::serialize(out_result));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::canClearBrowserCookies(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Declare output parameters.
    std::unique_ptr<protocol::DictionaryValue> result = DictionaryValue::create();
    bool out_result;

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->canClearBrowserCookies(&error, &out_result);
    if (!error.length()) {
        result->setValue("result", ValueConversions<bool>::serialize(out_result));
    }
    if (weak->get())
        weak->get()->sendResponse(callId, error, std::move(result));
}

void DispatcherImpl::emulateNetworkConditions(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* offlineValue = object ? object->get("offline") : nullptr;
    errors->setName("offline");
    bool in_offline = ValueConversions<bool>::parse(offlineValue, errors);
    protocol::Value* latencyValue = object ? object->get("latency") : nullptr;
    errors->setName("latency");
    double in_latency = ValueConversions<double>::parse(latencyValue, errors);
    protocol::Value* downloadThroughputValue = object ? object->get("downloadThroughput") : nullptr;
    errors->setName("downloadThroughput");
    double in_downloadThroughput = ValueConversions<double>::parse(downloadThroughputValue, errors);
    protocol::Value* uploadThroughputValue = object ? object->get("uploadThroughput") : nullptr;
    errors->setName("uploadThroughput");
    double in_uploadThroughput = ValueConversions<double>::parse(uploadThroughputValue, errors);
    protocol::Value* connectionTypeValue = object ? object->get("connectionType") : nullptr;
    Maybe<WTF::String> in_connectionType;
    if (connectionTypeValue) {
        errors->setName("connectionType");
        in_connectionType = ValueConversions<WTF::String>::parse(connectionTypeValue, errors);
    }
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->emulateNetworkConditions(&error, in_offline, in_latency, in_downloadThroughput, in_uploadThroughput, in_connectionType);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setCacheDisabled(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* cacheDisabledValue = object ? object->get("cacheDisabled") : nullptr;
    errors->setName("cacheDisabled");
    bool in_cacheDisabled = ValueConversions<bool>::parse(cacheDisabledValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setCacheDisabled(&error, in_cacheDisabled);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setBypassServiceWorker(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* bypassValue = object ? object->get("bypass") : nullptr;
    errors->setName("bypass");
    bool in_bypass = ValueConversions<bool>::parse(bypassValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setBypassServiceWorker(&error, in_bypass);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

void DispatcherImpl::setDataSizeLimitsForTest(int callId, std::unique_ptr<DictionaryValue> requestMessageObject, ErrorSupport* errors)
{
    // Prepare input parameters.
    protocol::DictionaryValue* object = DictionaryValue::cast(requestMessageObject->get("params"));
    errors->push();
    protocol::Value* maxTotalSizeValue = object ? object->get("maxTotalSize") : nullptr;
    errors->setName("maxTotalSize");
    int in_maxTotalSize = ValueConversions<int>::parse(maxTotalSizeValue, errors);
    protocol::Value* maxResourceSizeValue = object ? object->get("maxResourceSize") : nullptr;
    errors->setName("maxResourceSize");
    int in_maxResourceSize = ValueConversions<int>::parse(maxResourceSizeValue, errors);
    errors->pop();
    if (errors->hasErrors()) {
        reportProtocolError(callId, InvalidParams, kInvalidRequest, errors);
        return;
    }

    std::unique_ptr<DispatcherBase::WeakPtr> weak = weakPtr();
    ErrorString error;
    m_backend->setDataSizeLimitsForTest(&error, in_maxTotalSize, in_maxResourceSize);
    if (weak->get())
        weak->get()->sendResponse(callId, error);
}

// static
void Dispatcher::wire(UberDispatcher* dispatcher, Backend* backend)
{
    dispatcher->registerBackend("Network", wrapUnique(new DispatcherImpl(dispatcher->channel(), backend)));
}

} // Network
} // namespace protocol
} // namespace blink
