// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Browser_h
#define protocol_Browser_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace Browser {

// ------------- Forward and enum declarations.
// 
using BrowserContextID = WTF::String;
// 
using TargetID = WTF::String;
// 
class TargetInfo;

// ------------- Type and builder declarations.

// 
class CORE_EXPORT TargetInfo {
    PROTOCOL_DISALLOW_COPY(TargetInfo);
public:
    static std::unique_ptr<TargetInfo> parse(protocol::Value* value, ErrorSupport* errors);

    ~TargetInfo() { }

    WTF::String getTargetId() { return m_targetId; }
    void setTargetId(const WTF::String& value) { m_targetId = value; }

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
          TargetIdSet = 1 << 1,
          TypeSet = 1 << 2,
          TitleSet = 1 << 3,
          UrlSet = 1 << 4,
            AllFieldsSet = (TargetIdSet | TypeSet | TitleSet | UrlSet | 0)};


        TargetInfoBuilder<STATE | TargetIdSet>& setTargetId(const WTF::String& value)
        {
            static_assert(!(STATE & TargetIdSet), "property targetId should not be set yet");
            m_result->setTargetId(value);
            return castState<TargetIdSet>();
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

        std::unique_ptr<protocol::Browser::TargetInfo> m_result;
    };

    static TargetInfoBuilder<0> create()
    {
        return TargetInfoBuilder<0>();
    }

private:
    TargetInfo()
    {
    }

    WTF::String m_targetId;
    WTF::String m_type;
    WTF::String m_title;
    WTF::String m_url;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:

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
    static void wire(UberDispatcher*, blink::protocol::Browser::Backend*);

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

} // namespace Browser
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Browser_h)
