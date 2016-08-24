// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_DOMDebugger_h
#define protocol_DOMDebugger_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "core/inspector/protocol/DOM.h"
#include "core/inspector/protocol/Debugger.h"

namespace blink {
namespace protocol {
namespace DOMDebugger {

// ------------- Forward and enum declarations.
// DOM breakpoint type.
using DOMBreakpointType = WTF::String;
// Object event listener.
class EventListener;

namespace DOMBreakpointTypeEnum {
CORE_EXPORT extern const char* SubtreeModified;
CORE_EXPORT extern const char* AttributeModified;
CORE_EXPORT extern const char* NodeRemoved;
} // namespace DOMBreakpointTypeEnum

// ------------- Type and builder declarations.

// Object event listener.
class CORE_EXPORT EventListener {
    PROTOCOL_DISALLOW_COPY(EventListener);
public:
    static std::unique_ptr<EventListener> parse(protocol::Value* value, ErrorSupport* errors);

    ~EventListener() { }

    WTF::String getType() { return m_type; }
    void setType(const WTF::String& value) { m_type = value; }

    bool getUseCapture() { return m_useCapture; }
    void setUseCapture(bool value) { m_useCapture = value; }

    bool getPassive() { return m_passive; }
    void setPassive(bool value) { m_passive = value; }

    WTF::String getScriptId() { return m_scriptId; }
    void setScriptId(const WTF::String& value) { m_scriptId = value; }

    int getLineNumber() { return m_lineNumber; }
    void setLineNumber(int value) { m_lineNumber = value; }

    int getColumnNumber() { return m_columnNumber; }
    void setColumnNumber(int value) { m_columnNumber = value; }

    bool hasHandler() { return m_handler.isJust(); }
    protocol::Runtime::API::RemoteObject* getHandler(protocol::Runtime::API::RemoteObject* defaultValue) { return m_handler.isJust() ? m_handler.fromJust() : defaultValue; }
    void setHandler(std::unique_ptr<protocol::Runtime::API::RemoteObject> value) { m_handler = std::move(value); }

    bool hasOriginalHandler() { return m_originalHandler.isJust(); }
    protocol::Runtime::API::RemoteObject* getOriginalHandler(protocol::Runtime::API::RemoteObject* defaultValue) { return m_originalHandler.isJust() ? m_originalHandler.fromJust() : defaultValue; }
    void setOriginalHandler(std::unique_ptr<protocol::Runtime::API::RemoteObject> value) { m_originalHandler = std::move(value); }

    bool hasRemoveFunction() { return m_removeFunction.isJust(); }
    protocol::Runtime::API::RemoteObject* getRemoveFunction(protocol::Runtime::API::RemoteObject* defaultValue) { return m_removeFunction.isJust() ? m_removeFunction.fromJust() : defaultValue; }
    void setRemoveFunction(std::unique_ptr<protocol::Runtime::API::RemoteObject> value) { m_removeFunction = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<EventListener> clone() const;

    template<int STATE>
    class EventListenerBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          TypeSet = 1 << 1,
          UseCaptureSet = 1 << 2,
          PassiveSet = 1 << 3,
          ScriptIdSet = 1 << 4,
          LineNumberSet = 1 << 5,
          ColumnNumberSet = 1 << 6,
            AllFieldsSet = (TypeSet | UseCaptureSet | PassiveSet | ScriptIdSet | LineNumberSet | ColumnNumberSet | 0)};


        EventListenerBuilder<STATE | TypeSet>& setType(const WTF::String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        EventListenerBuilder<STATE | UseCaptureSet>& setUseCapture(bool value)
        {
            static_assert(!(STATE & UseCaptureSet), "property useCapture should not be set yet");
            m_result->setUseCapture(value);
            return castState<UseCaptureSet>();
        }

        EventListenerBuilder<STATE | PassiveSet>& setPassive(bool value)
        {
            static_assert(!(STATE & PassiveSet), "property passive should not be set yet");
            m_result->setPassive(value);
            return castState<PassiveSet>();
        }

        EventListenerBuilder<STATE | ScriptIdSet>& setScriptId(const WTF::String& value)
        {
            static_assert(!(STATE & ScriptIdSet), "property scriptId should not be set yet");
            m_result->setScriptId(value);
            return castState<ScriptIdSet>();
        }

        EventListenerBuilder<STATE | LineNumberSet>& setLineNumber(int value)
        {
            static_assert(!(STATE & LineNumberSet), "property lineNumber should not be set yet");
            m_result->setLineNumber(value);
            return castState<LineNumberSet>();
        }

        EventListenerBuilder<STATE | ColumnNumberSet>& setColumnNumber(int value)
        {
            static_assert(!(STATE & ColumnNumberSet), "property columnNumber should not be set yet");
            m_result->setColumnNumber(value);
            return castState<ColumnNumberSet>();
        }

        EventListenerBuilder<STATE>& setHandler(std::unique_ptr<protocol::Runtime::API::RemoteObject> value)
        {
            m_result->setHandler(std::move(value));
            return *this;
        }

        EventListenerBuilder<STATE>& setOriginalHandler(std::unique_ptr<protocol::Runtime::API::RemoteObject> value)
        {
            m_result->setOriginalHandler(std::move(value));
            return *this;
        }

        EventListenerBuilder<STATE>& setRemoveFunction(std::unique_ptr<protocol::Runtime::API::RemoteObject> value)
        {
            m_result->setRemoveFunction(std::move(value));
            return *this;
        }

        std::unique_ptr<EventListener> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class EventListener;
        EventListenerBuilder() : m_result(new EventListener()) { }

        template<int STEP> EventListenerBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<EventListenerBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOMDebugger::EventListener> m_result;
    };

    static EventListenerBuilder<0> create()
    {
        return EventListenerBuilder<0>();
    }

private:
    EventListener()
    {
          m_useCapture = false;
          m_passive = false;
          m_lineNumber = 0;
          m_columnNumber = 0;
    }

    WTF::String m_type;
    bool m_useCapture;
    bool m_passive;
    WTF::String m_scriptId;
    int m_lineNumber;
    int m_columnNumber;
    Maybe<protocol::Runtime::API::RemoteObject> m_handler;
    Maybe<protocol::Runtime::API::RemoteObject> m_originalHandler;
    Maybe<protocol::Runtime::API::RemoteObject> m_removeFunction;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual void setDOMBreakpoint(ErrorString*, int in_nodeId, const WTF::String& in_type) = 0;
    virtual void removeDOMBreakpoint(ErrorString*, int in_nodeId, const WTF::String& in_type) = 0;
    virtual void setEventListenerBreakpoint(ErrorString*, const WTF::String& in_eventName, const Maybe<WTF::String>& in_targetName) = 0;
    virtual void removeEventListenerBreakpoint(ErrorString*, const WTF::String& in_eventName, const Maybe<WTF::String>& in_targetName) = 0;
    virtual void setInstrumentationBreakpoint(ErrorString*, const WTF::String& in_eventName) = 0;
    virtual void removeInstrumentationBreakpoint(ErrorString*, const WTF::String& in_eventName) = 0;
    virtual void setXHRBreakpoint(ErrorString*, const WTF::String& in_url) = 0;
    virtual void removeXHRBreakpoint(ErrorString*, const WTF::String& in_url) = 0;
    virtual void getEventListeners(ErrorString*, const WTF::String& in_objectId, std::unique_ptr<protocol::Array<protocol::DOMDebugger::EventListener>>* out_listeners) = 0;

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
    static void wire(UberDispatcher*, blink::protocol::DOMDebugger::Backend*);

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

} // namespace DOMDebugger
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_DOMDebugger_h)
