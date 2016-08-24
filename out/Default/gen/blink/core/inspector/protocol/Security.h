// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Security_h
#define protocol_Security_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace Security {

// ------------- Forward and enum declarations.
// An internal certificate ID value.
using CertificateId = int;
// The security level of a page or resource.
using SecurityState = WTF::String;
// An explanation of an factor contributing to the security state.
class SecurityStateExplanation;
// Information about mixed content on the page.
class MixedContentStatus;

namespace SecurityStateEnum {
CORE_EXPORT extern const char* Unknown;
CORE_EXPORT extern const char* Neutral;
CORE_EXPORT extern const char* Insecure;
CORE_EXPORT extern const char* Warning;
CORE_EXPORT extern const char* Secure;
CORE_EXPORT extern const char* Info;
} // namespace SecurityStateEnum

// ------------- Type and builder declarations.

// An explanation of an factor contributing to the security state.
class CORE_EXPORT SecurityStateExplanation {
    PROTOCOL_DISALLOW_COPY(SecurityStateExplanation);
public:
    static std::unique_ptr<SecurityStateExplanation> parse(protocol::Value* value, ErrorSupport* errors);

    ~SecurityStateExplanation() { }

    WTF::String getSecurityState() { return m_securityState; }
    void setSecurityState(const WTF::String& value) { m_securityState = value; }

    WTF::String getSummary() { return m_summary; }
    void setSummary(const WTF::String& value) { m_summary = value; }

    WTF::String getDescription() { return m_description; }
    void setDescription(const WTF::String& value) { m_description = value; }

    bool hasCertificateId() { return m_certificateId.isJust(); }
    int getCertificateId(int defaultValue) { return m_certificateId.isJust() ? m_certificateId.fromJust() : defaultValue; }
    void setCertificateId(int value) { m_certificateId = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<SecurityStateExplanation> clone() const;

    template<int STATE>
    class SecurityStateExplanationBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          SecurityStateSet = 1 << 1,
          SummarySet = 1 << 2,
          DescriptionSet = 1 << 3,
            AllFieldsSet = (SecurityStateSet | SummarySet | DescriptionSet | 0)};


        SecurityStateExplanationBuilder<STATE | SecurityStateSet>& setSecurityState(const WTF::String& value)
        {
            static_assert(!(STATE & SecurityStateSet), "property securityState should not be set yet");
            m_result->setSecurityState(value);
            return castState<SecurityStateSet>();
        }

        SecurityStateExplanationBuilder<STATE | SummarySet>& setSummary(const WTF::String& value)
        {
            static_assert(!(STATE & SummarySet), "property summary should not be set yet");
            m_result->setSummary(value);
            return castState<SummarySet>();
        }

        SecurityStateExplanationBuilder<STATE | DescriptionSet>& setDescription(const WTF::String& value)
        {
            static_assert(!(STATE & DescriptionSet), "property description should not be set yet");
            m_result->setDescription(value);
            return castState<DescriptionSet>();
        }

        SecurityStateExplanationBuilder<STATE>& setCertificateId(int value)
        {
            m_result->setCertificateId(value);
            return *this;
        }

        std::unique_ptr<SecurityStateExplanation> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SecurityStateExplanation;
        SecurityStateExplanationBuilder() : m_result(new SecurityStateExplanation()) { }

        template<int STEP> SecurityStateExplanationBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SecurityStateExplanationBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Security::SecurityStateExplanation> m_result;
    };

    static SecurityStateExplanationBuilder<0> create()
    {
        return SecurityStateExplanationBuilder<0>();
    }

private:
    SecurityStateExplanation()
    {
    }

    WTF::String m_securityState;
    WTF::String m_summary;
    WTF::String m_description;
    Maybe<int> m_certificateId;
};


// Information about mixed content on the page.
class CORE_EXPORT MixedContentStatus {
    PROTOCOL_DISALLOW_COPY(MixedContentStatus);
public:
    static std::unique_ptr<MixedContentStatus> parse(protocol::Value* value, ErrorSupport* errors);

    ~MixedContentStatus() { }

    bool getRanInsecureContent() { return m_ranInsecureContent; }
    void setRanInsecureContent(bool value) { m_ranInsecureContent = value; }

    bool getDisplayedInsecureContent() { return m_displayedInsecureContent; }
    void setDisplayedInsecureContent(bool value) { m_displayedInsecureContent = value; }

    WTF::String getRanInsecureContentStyle() { return m_ranInsecureContentStyle; }
    void setRanInsecureContentStyle(const WTF::String& value) { m_ranInsecureContentStyle = value; }

    WTF::String getDisplayedInsecureContentStyle() { return m_displayedInsecureContentStyle; }
    void setDisplayedInsecureContentStyle(const WTF::String& value) { m_displayedInsecureContentStyle = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<MixedContentStatus> clone() const;

    template<int STATE>
    class MixedContentStatusBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          RanInsecureContentSet = 1 << 1,
          DisplayedInsecureContentSet = 1 << 2,
          RanInsecureContentStyleSet = 1 << 3,
          DisplayedInsecureContentStyleSet = 1 << 4,
            AllFieldsSet = (RanInsecureContentSet | DisplayedInsecureContentSet | RanInsecureContentStyleSet | DisplayedInsecureContentStyleSet | 0)};


        MixedContentStatusBuilder<STATE | RanInsecureContentSet>& setRanInsecureContent(bool value)
        {
            static_assert(!(STATE & RanInsecureContentSet), "property ranInsecureContent should not be set yet");
            m_result->setRanInsecureContent(value);
            return castState<RanInsecureContentSet>();
        }

        MixedContentStatusBuilder<STATE | DisplayedInsecureContentSet>& setDisplayedInsecureContent(bool value)
        {
            static_assert(!(STATE & DisplayedInsecureContentSet), "property displayedInsecureContent should not be set yet");
            m_result->setDisplayedInsecureContent(value);
            return castState<DisplayedInsecureContentSet>();
        }

        MixedContentStatusBuilder<STATE | RanInsecureContentStyleSet>& setRanInsecureContentStyle(const WTF::String& value)
        {
            static_assert(!(STATE & RanInsecureContentStyleSet), "property ranInsecureContentStyle should not be set yet");
            m_result->setRanInsecureContentStyle(value);
            return castState<RanInsecureContentStyleSet>();
        }

        MixedContentStatusBuilder<STATE | DisplayedInsecureContentStyleSet>& setDisplayedInsecureContentStyle(const WTF::String& value)
        {
            static_assert(!(STATE & DisplayedInsecureContentStyleSet), "property displayedInsecureContentStyle should not be set yet");
            m_result->setDisplayedInsecureContentStyle(value);
            return castState<DisplayedInsecureContentStyleSet>();
        }

        std::unique_ptr<MixedContentStatus> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class MixedContentStatus;
        MixedContentStatusBuilder() : m_result(new MixedContentStatus()) { }

        template<int STEP> MixedContentStatusBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<MixedContentStatusBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Security::MixedContentStatus> m_result;
    };

    static MixedContentStatusBuilder<0> create()
    {
        return MixedContentStatusBuilder<0>();
    }

private:
    MixedContentStatus()
    {
          m_ranInsecureContent = false;
          m_displayedInsecureContent = false;
    }

    bool m_ranInsecureContent;
    bool m_displayedInsecureContent;
    WTF::String m_ranInsecureContentStyle;
    WTF::String m_displayedInsecureContentStyle;
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
    static void wire(UberDispatcher*, blink::protocol::Security::Backend*);

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

} // namespace Security
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Security_h)
