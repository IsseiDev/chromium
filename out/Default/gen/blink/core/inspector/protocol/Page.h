// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_Page_h
#define protocol_Page_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "core/inspector/protocol/Debugger.h"
#include "core/inspector/protocol/DOM.h"

namespace blink {
namespace protocol {
namespace Page {

// ------------- Forward and enum declarations.
// Resource type as it was perceived by the rendering engine.
using ResourceType = WTF::String;
// Unique frame identifier.
using FrameId = WTF::String;
// Information about the Frame on the page.
class Frame;
// Information about the Resource on the page.
class FrameResource;
// Information about the Frame hierarchy along with their cached resources.
class FrameResourceTree;
// Unique script identifier.
using ScriptIdentifier = WTF::String;
// Navigation history entry.
class NavigationEntry;
// Screencast frame metadata.
class ScreencastFrameMetadata;
// Javascript dialog type.
using DialogType = WTF::String;
// Error while paring app manifest.
class AppManifestError;
// Proceed: allow the navigation; Cancel: cancel the navigation; CancelAndIgnore: cancels the navigation and makes the requester of the navigation acts like the request was never made.
using NavigationResponse = WTF::String;

namespace ResourceTypeEnum {
CORE_EXPORT extern const char* Document;
CORE_EXPORT extern const char* Stylesheet;
CORE_EXPORT extern const char* Image;
CORE_EXPORT extern const char* Media;
CORE_EXPORT extern const char* Font;
CORE_EXPORT extern const char* Script;
CORE_EXPORT extern const char* TextTrack;
CORE_EXPORT extern const char* XHR;
CORE_EXPORT extern const char* Fetch;
CORE_EXPORT extern const char* EventSource;
CORE_EXPORT extern const char* WebSocket;
CORE_EXPORT extern const char* Manifest;
CORE_EXPORT extern const char* Other;
} // namespace ResourceTypeEnum

namespace DialogTypeEnum {
CORE_EXPORT extern const char* Alert;
CORE_EXPORT extern const char* Confirm;
CORE_EXPORT extern const char* Prompt;
CORE_EXPORT extern const char* Beforeunload;
} // namespace DialogTypeEnum

namespace NavigationResponseEnum {
CORE_EXPORT extern const char* Proceed;
CORE_EXPORT extern const char* Cancel;
CORE_EXPORT extern const char* CancelAndIgnore;
} // namespace NavigationResponseEnum

namespace SetTouchEmulationEnabled {
namespace ConfigurationEnum {
CORE_EXPORT extern const char* Mobile;
CORE_EXPORT extern const char* Desktop;
} // ConfigurationEnum
} // SetTouchEmulationEnabled

namespace StartScreencast {
namespace FormatEnum {
CORE_EXPORT extern const char* Jpeg;
CORE_EXPORT extern const char* Png;
} // FormatEnum
} // StartScreencast

// ------------- Type and builder declarations.

// Information about the Frame on the page.
class CORE_EXPORT Frame {
    PROTOCOL_DISALLOW_COPY(Frame);
public:
    static std::unique_ptr<Frame> parse(protocol::Value* value, ErrorSupport* errors);

    ~Frame() { }

    WTF::String getId() { return m_id; }
    void setId(const WTF::String& value) { m_id = value; }

    bool hasParentId() { return m_parentId.isJust(); }
    WTF::String getParentId(const WTF::String& defaultValue) { return m_parentId.isJust() ? m_parentId.fromJust() : defaultValue; }
    void setParentId(const WTF::String& value) { m_parentId = value; }

    WTF::String getLoaderId() { return m_loaderId; }
    void setLoaderId(const WTF::String& value) { m_loaderId = value; }

    bool hasName() { return m_name.isJust(); }
    WTF::String getName(const WTF::String& defaultValue) { return m_name.isJust() ? m_name.fromJust() : defaultValue; }
    void setName(const WTF::String& value) { m_name = value; }

    WTF::String getUrl() { return m_url; }
    void setUrl(const WTF::String& value) { m_url = value; }

    WTF::String getSecurityOrigin() { return m_securityOrigin; }
    void setSecurityOrigin(const WTF::String& value) { m_securityOrigin = value; }

    WTF::String getMimeType() { return m_mimeType; }
    void setMimeType(const WTF::String& value) { m_mimeType = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<Frame> clone() const;

    template<int STATE>
    class FrameBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          IdSet = 1 << 1,
          LoaderIdSet = 1 << 2,
          UrlSet = 1 << 3,
          SecurityOriginSet = 1 << 4,
          MimeTypeSet = 1 << 5,
            AllFieldsSet = (IdSet | LoaderIdSet | UrlSet | SecurityOriginSet | MimeTypeSet | 0)};


        FrameBuilder<STATE | IdSet>& setId(const WTF::String& value)
        {
            static_assert(!(STATE & IdSet), "property id should not be set yet");
            m_result->setId(value);
            return castState<IdSet>();
        }

        FrameBuilder<STATE>& setParentId(const WTF::String& value)
        {
            m_result->setParentId(value);
            return *this;
        }

        FrameBuilder<STATE | LoaderIdSet>& setLoaderId(const WTF::String& value)
        {
            static_assert(!(STATE & LoaderIdSet), "property loaderId should not be set yet");
            m_result->setLoaderId(value);
            return castState<LoaderIdSet>();
        }

        FrameBuilder<STATE>& setName(const WTF::String& value)
        {
            m_result->setName(value);
            return *this;
        }

        FrameBuilder<STATE | UrlSet>& setUrl(const WTF::String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->setUrl(value);
            return castState<UrlSet>();
        }

        FrameBuilder<STATE | SecurityOriginSet>& setSecurityOrigin(const WTF::String& value)
        {
            static_assert(!(STATE & SecurityOriginSet), "property securityOrigin should not be set yet");
            m_result->setSecurityOrigin(value);
            return castState<SecurityOriginSet>();
        }

        FrameBuilder<STATE | MimeTypeSet>& setMimeType(const WTF::String& value)
        {
            static_assert(!(STATE & MimeTypeSet), "property mimeType should not be set yet");
            m_result->setMimeType(value);
            return castState<MimeTypeSet>();
        }

        std::unique_ptr<Frame> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Frame;
        FrameBuilder() : m_result(new Frame()) { }

        template<int STEP> FrameBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<FrameBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::Frame> m_result;
    };

    static FrameBuilder<0> create()
    {
        return FrameBuilder<0>();
    }

private:
    Frame()
    {
    }

    WTF::String m_id;
    Maybe<WTF::String> m_parentId;
    WTF::String m_loaderId;
    Maybe<WTF::String> m_name;
    WTF::String m_url;
    WTF::String m_securityOrigin;
    WTF::String m_mimeType;
};


// Information about the Resource on the page.
class CORE_EXPORT FrameResource {
    PROTOCOL_DISALLOW_COPY(FrameResource);
public:
    static std::unique_ptr<FrameResource> parse(protocol::Value* value, ErrorSupport* errors);

    ~FrameResource() { }

    WTF::String getUrl() { return m_url; }
    void setUrl(const WTF::String& value) { m_url = value; }

    WTF::String getType() { return m_type; }
    void setType(const WTF::String& value) { m_type = value; }

    WTF::String getMimeType() { return m_mimeType; }
    void setMimeType(const WTF::String& value) { m_mimeType = value; }

    bool hasFailed() { return m_failed.isJust(); }
    bool getFailed(bool defaultValue) { return m_failed.isJust() ? m_failed.fromJust() : defaultValue; }
    void setFailed(bool value) { m_failed = value; }

    bool hasCanceled() { return m_canceled.isJust(); }
    bool getCanceled(bool defaultValue) { return m_canceled.isJust() ? m_canceled.fromJust() : defaultValue; }
    void setCanceled(bool value) { m_canceled = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<FrameResource> clone() const;

    template<int STATE>
    class FrameResourceBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          UrlSet = 1 << 1,
          TypeSet = 1 << 2,
          MimeTypeSet = 1 << 3,
            AllFieldsSet = (UrlSet | TypeSet | MimeTypeSet | 0)};


        FrameResourceBuilder<STATE | UrlSet>& setUrl(const WTF::String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->setUrl(value);
            return castState<UrlSet>();
        }

        FrameResourceBuilder<STATE | TypeSet>& setType(const WTF::String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        FrameResourceBuilder<STATE | MimeTypeSet>& setMimeType(const WTF::String& value)
        {
            static_assert(!(STATE & MimeTypeSet), "property mimeType should not be set yet");
            m_result->setMimeType(value);
            return castState<MimeTypeSet>();
        }

        FrameResourceBuilder<STATE>& setFailed(bool value)
        {
            m_result->setFailed(value);
            return *this;
        }

        FrameResourceBuilder<STATE>& setCanceled(bool value)
        {
            m_result->setCanceled(value);
            return *this;
        }

        std::unique_ptr<FrameResource> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class FrameResource;
        FrameResourceBuilder() : m_result(new FrameResource()) { }

        template<int STEP> FrameResourceBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<FrameResourceBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::FrameResource> m_result;
    };

    static FrameResourceBuilder<0> create()
    {
        return FrameResourceBuilder<0>();
    }

private:
    FrameResource()
    {
    }

    WTF::String m_url;
    WTF::String m_type;
    WTF::String m_mimeType;
    Maybe<bool> m_failed;
    Maybe<bool> m_canceled;
};


// Information about the Frame hierarchy along with their cached resources.
class CORE_EXPORT FrameResourceTree {
    PROTOCOL_DISALLOW_COPY(FrameResourceTree);
public:
    static std::unique_ptr<FrameResourceTree> parse(protocol::Value* value, ErrorSupport* errors);

    ~FrameResourceTree() { }

    protocol::Page::Frame* getFrame() { return m_frame.get(); }
    void setFrame(std::unique_ptr<protocol::Page::Frame> value) { m_frame = std::move(value); }

    bool hasChildFrames() { return m_childFrames.isJust(); }
    protocol::Array<protocol::Page::FrameResourceTree>* getChildFrames(protocol::Array<protocol::Page::FrameResourceTree>* defaultValue) { return m_childFrames.isJust() ? m_childFrames.fromJust() : defaultValue; }
    void setChildFrames(std::unique_ptr<protocol::Array<protocol::Page::FrameResourceTree>> value) { m_childFrames = std::move(value); }

    protocol::Array<protocol::Page::FrameResource>* getResources() { return m_resources.get(); }
    void setResources(std::unique_ptr<protocol::Array<protocol::Page::FrameResource>> value) { m_resources = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<FrameResourceTree> clone() const;

    template<int STATE>
    class FrameResourceTreeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          FrameSet = 1 << 1,
          ResourcesSet = 1 << 2,
            AllFieldsSet = (FrameSet | ResourcesSet | 0)};


        FrameResourceTreeBuilder<STATE | FrameSet>& setFrame(std::unique_ptr<protocol::Page::Frame> value)
        {
            static_assert(!(STATE & FrameSet), "property frame should not be set yet");
            m_result->setFrame(std::move(value));
            return castState<FrameSet>();
        }

        FrameResourceTreeBuilder<STATE>& setChildFrames(std::unique_ptr<protocol::Array<protocol::Page::FrameResourceTree>> value)
        {
            m_result->setChildFrames(std::move(value));
            return *this;
        }

        FrameResourceTreeBuilder<STATE | ResourcesSet>& setResources(std::unique_ptr<protocol::Array<protocol::Page::FrameResource>> value)
        {
            static_assert(!(STATE & ResourcesSet), "property resources should not be set yet");
            m_result->setResources(std::move(value));
            return castState<ResourcesSet>();
        }

        std::unique_ptr<FrameResourceTree> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class FrameResourceTree;
        FrameResourceTreeBuilder() : m_result(new FrameResourceTree()) { }

        template<int STEP> FrameResourceTreeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<FrameResourceTreeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::FrameResourceTree> m_result;
    };

    static FrameResourceTreeBuilder<0> create()
    {
        return FrameResourceTreeBuilder<0>();
    }

private:
    FrameResourceTree()
    {
    }

    std::unique_ptr<protocol::Page::Frame> m_frame;
    Maybe<protocol::Array<protocol::Page::FrameResourceTree>> m_childFrames;
    std::unique_ptr<protocol::Array<protocol::Page::FrameResource>> m_resources;
};


// Navigation history entry.
class CORE_EXPORT NavigationEntry {
    PROTOCOL_DISALLOW_COPY(NavigationEntry);
public:
    static std::unique_ptr<NavigationEntry> parse(protocol::Value* value, ErrorSupport* errors);

    ~NavigationEntry() { }

    int getId() { return m_id; }
    void setId(int value) { m_id = value; }

    WTF::String getUrl() { return m_url; }
    void setUrl(const WTF::String& value) { m_url = value; }

    WTF::String getTitle() { return m_title; }
    void setTitle(const WTF::String& value) { m_title = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<NavigationEntry> clone() const;

    template<int STATE>
    class NavigationEntryBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          IdSet = 1 << 1,
          UrlSet = 1 << 2,
          TitleSet = 1 << 3,
            AllFieldsSet = (IdSet | UrlSet | TitleSet | 0)};


        NavigationEntryBuilder<STATE | IdSet>& setId(int value)
        {
            static_assert(!(STATE & IdSet), "property id should not be set yet");
            m_result->setId(value);
            return castState<IdSet>();
        }

        NavigationEntryBuilder<STATE | UrlSet>& setUrl(const WTF::String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->setUrl(value);
            return castState<UrlSet>();
        }

        NavigationEntryBuilder<STATE | TitleSet>& setTitle(const WTF::String& value)
        {
            static_assert(!(STATE & TitleSet), "property title should not be set yet");
            m_result->setTitle(value);
            return castState<TitleSet>();
        }

        std::unique_ptr<NavigationEntry> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class NavigationEntry;
        NavigationEntryBuilder() : m_result(new NavigationEntry()) { }

        template<int STEP> NavigationEntryBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<NavigationEntryBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::NavigationEntry> m_result;
    };

    static NavigationEntryBuilder<0> create()
    {
        return NavigationEntryBuilder<0>();
    }

private:
    NavigationEntry()
    {
          m_id = 0;
    }

    int m_id;
    WTF::String m_url;
    WTF::String m_title;
};


// Screencast frame metadata.
class CORE_EXPORT ScreencastFrameMetadata {
    PROTOCOL_DISALLOW_COPY(ScreencastFrameMetadata);
public:
    static std::unique_ptr<ScreencastFrameMetadata> parse(protocol::Value* value, ErrorSupport* errors);

    ~ScreencastFrameMetadata() { }

    double getOffsetTop() { return m_offsetTop; }
    void setOffsetTop(double value) { m_offsetTop = value; }

    double getPageScaleFactor() { return m_pageScaleFactor; }
    void setPageScaleFactor(double value) { m_pageScaleFactor = value; }

    double getDeviceWidth() { return m_deviceWidth; }
    void setDeviceWidth(double value) { m_deviceWidth = value; }

    double getDeviceHeight() { return m_deviceHeight; }
    void setDeviceHeight(double value) { m_deviceHeight = value; }

    double getScrollOffsetX() { return m_scrollOffsetX; }
    void setScrollOffsetX(double value) { m_scrollOffsetX = value; }

    double getScrollOffsetY() { return m_scrollOffsetY; }
    void setScrollOffsetY(double value) { m_scrollOffsetY = value; }

    bool hasTimestamp() { return m_timestamp.isJust(); }
    double getTimestamp(double defaultValue) { return m_timestamp.isJust() ? m_timestamp.fromJust() : defaultValue; }
    void setTimestamp(double value) { m_timestamp = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<ScreencastFrameMetadata> clone() const;

    template<int STATE>
    class ScreencastFrameMetadataBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          OffsetTopSet = 1 << 1,
          PageScaleFactorSet = 1 << 2,
          DeviceWidthSet = 1 << 3,
          DeviceHeightSet = 1 << 4,
          ScrollOffsetXSet = 1 << 5,
          ScrollOffsetYSet = 1 << 6,
            AllFieldsSet = (OffsetTopSet | PageScaleFactorSet | DeviceWidthSet | DeviceHeightSet | ScrollOffsetXSet | ScrollOffsetYSet | 0)};


        ScreencastFrameMetadataBuilder<STATE | OffsetTopSet>& setOffsetTop(double value)
        {
            static_assert(!(STATE & OffsetTopSet), "property offsetTop should not be set yet");
            m_result->setOffsetTop(value);
            return castState<OffsetTopSet>();
        }

        ScreencastFrameMetadataBuilder<STATE | PageScaleFactorSet>& setPageScaleFactor(double value)
        {
            static_assert(!(STATE & PageScaleFactorSet), "property pageScaleFactor should not be set yet");
            m_result->setPageScaleFactor(value);
            return castState<PageScaleFactorSet>();
        }

        ScreencastFrameMetadataBuilder<STATE | DeviceWidthSet>& setDeviceWidth(double value)
        {
            static_assert(!(STATE & DeviceWidthSet), "property deviceWidth should not be set yet");
            m_result->setDeviceWidth(value);
            return castState<DeviceWidthSet>();
        }

        ScreencastFrameMetadataBuilder<STATE | DeviceHeightSet>& setDeviceHeight(double value)
        {
            static_assert(!(STATE & DeviceHeightSet), "property deviceHeight should not be set yet");
            m_result->setDeviceHeight(value);
            return castState<DeviceHeightSet>();
        }

        ScreencastFrameMetadataBuilder<STATE | ScrollOffsetXSet>& setScrollOffsetX(double value)
        {
            static_assert(!(STATE & ScrollOffsetXSet), "property scrollOffsetX should not be set yet");
            m_result->setScrollOffsetX(value);
            return castState<ScrollOffsetXSet>();
        }

        ScreencastFrameMetadataBuilder<STATE | ScrollOffsetYSet>& setScrollOffsetY(double value)
        {
            static_assert(!(STATE & ScrollOffsetYSet), "property scrollOffsetY should not be set yet");
            m_result->setScrollOffsetY(value);
            return castState<ScrollOffsetYSet>();
        }

        ScreencastFrameMetadataBuilder<STATE>& setTimestamp(double value)
        {
            m_result->setTimestamp(value);
            return *this;
        }

        std::unique_ptr<ScreencastFrameMetadata> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class ScreencastFrameMetadata;
        ScreencastFrameMetadataBuilder() : m_result(new ScreencastFrameMetadata()) { }

        template<int STEP> ScreencastFrameMetadataBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ScreencastFrameMetadataBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::ScreencastFrameMetadata> m_result;
    };

    static ScreencastFrameMetadataBuilder<0> create()
    {
        return ScreencastFrameMetadataBuilder<0>();
    }

private:
    ScreencastFrameMetadata()
    {
          m_offsetTop = 0;
          m_pageScaleFactor = 0;
          m_deviceWidth = 0;
          m_deviceHeight = 0;
          m_scrollOffsetX = 0;
          m_scrollOffsetY = 0;
    }

    double m_offsetTop;
    double m_pageScaleFactor;
    double m_deviceWidth;
    double m_deviceHeight;
    double m_scrollOffsetX;
    double m_scrollOffsetY;
    Maybe<double> m_timestamp;
};


// Error while paring app manifest.
class CORE_EXPORT AppManifestError {
    PROTOCOL_DISALLOW_COPY(AppManifestError);
public:
    static std::unique_ptr<AppManifestError> parse(protocol::Value* value, ErrorSupport* errors);

    ~AppManifestError() { }

    WTF::String getMessage() { return m_message; }
    void setMessage(const WTF::String& value) { m_message = value; }

    int getCritical() { return m_critical; }
    void setCritical(int value) { m_critical = value; }

    int getLine() { return m_line; }
    void setLine(int value) { m_line = value; }

    int getColumn() { return m_column; }
    void setColumn(int value) { m_column = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<AppManifestError> clone() const;

    template<int STATE>
    class AppManifestErrorBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          MessageSet = 1 << 1,
          CriticalSet = 1 << 2,
          LineSet = 1 << 3,
          ColumnSet = 1 << 4,
            AllFieldsSet = (MessageSet | CriticalSet | LineSet | ColumnSet | 0)};


        AppManifestErrorBuilder<STATE | MessageSet>& setMessage(const WTF::String& value)
        {
            static_assert(!(STATE & MessageSet), "property message should not be set yet");
            m_result->setMessage(value);
            return castState<MessageSet>();
        }

        AppManifestErrorBuilder<STATE | CriticalSet>& setCritical(int value)
        {
            static_assert(!(STATE & CriticalSet), "property critical should not be set yet");
            m_result->setCritical(value);
            return castState<CriticalSet>();
        }

        AppManifestErrorBuilder<STATE | LineSet>& setLine(int value)
        {
            static_assert(!(STATE & LineSet), "property line should not be set yet");
            m_result->setLine(value);
            return castState<LineSet>();
        }

        AppManifestErrorBuilder<STATE | ColumnSet>& setColumn(int value)
        {
            static_assert(!(STATE & ColumnSet), "property column should not be set yet");
            m_result->setColumn(value);
            return castState<ColumnSet>();
        }

        std::unique_ptr<AppManifestError> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class AppManifestError;
        AppManifestErrorBuilder() : m_result(new AppManifestError()) { }

        template<int STEP> AppManifestErrorBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<AppManifestErrorBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::AppManifestError> m_result;
    };

    static AppManifestErrorBuilder<0> create()
    {
        return AppManifestErrorBuilder<0>();
    }

private:
    AppManifestError()
    {
          m_critical = 0;
          m_line = 0;
          m_column = 0;
    }

    WTF::String m_message;
    int m_critical;
    int m_line;
    int m_column;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual void enable(ErrorString*) = 0;
    virtual void disable(ErrorString*) = 0;
    virtual void addScriptToEvaluateOnLoad(ErrorString*, const WTF::String& in_scriptSource, WTF::String* out_identifier) = 0;
    virtual void removeScriptToEvaluateOnLoad(ErrorString*, const WTF::String& in_identifier) = 0;
    virtual void setAutoAttachToCreatedPages(ErrorString*, bool in_autoAttach) = 0;
    virtual void reload(ErrorString*, const Maybe<bool>& in_ignoreCache, const Maybe<WTF::String>& in_scriptToEvaluateOnLoad) = 0;
    virtual void navigate(ErrorString*, const WTF::String& in_url, WTF::String* out_frameId) = 0;
    virtual void getResourceTree(ErrorString*, std::unique_ptr<protocol::Page::FrameResourceTree>* out_frameTree) = 0;
    class CORE_EXPORT GetResourceContentCallback : public BackendCallback {
    public:
        virtual void sendSuccess(const WTF::String& content, bool base64Encoded) = 0;
    };
    virtual void getResourceContent(const WTF::String& in_frameId, const WTF::String& in_url, std::unique_ptr<GetResourceContentCallback> callback) = 0;
    class CORE_EXPORT SearchInResourceCallback : public BackendCallback {
    public:
        virtual void sendSuccess(std::unique_ptr<protocol::Array<protocol::Debugger::API::SearchMatch>> result) = 0;
    };
    virtual void searchInResource(const WTF::String& in_frameId, const WTF::String& in_url, const WTF::String& in_query, const Maybe<bool>& in_caseSensitive, const Maybe<bool>& in_isRegex, std::unique_ptr<SearchInResourceCallback> callback) = 0;
    virtual void setDocumentContent(ErrorString*, const WTF::String& in_frameId, const WTF::String& in_html) = 0;
    virtual void startScreencast(ErrorString*, const Maybe<WTF::String>& in_format, const Maybe<int>& in_quality, const Maybe<int>& in_maxWidth, const Maybe<int>& in_maxHeight, const Maybe<int>& in_everyNthFrame) = 0;
    virtual void stopScreencast(ErrorString*) = 0;
    virtual void configureOverlay(ErrorString*, const Maybe<bool>& in_suspended, const Maybe<WTF::String>& in_message) = 0;
    virtual void setBlockedEventsWarningThreshold(ErrorString*, double in_threshold) = 0;


protected:
    virtual ~Backend() { }
};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
    Frontend(FrontendChannel* frontendChannel) : m_frontendChannel(frontendChannel) { }
    void domContentEventFired(double timestamp);
    void loadEventFired(double timestamp);
    void frameAttached(const WTF::String& frameId, const WTF::String& parentFrameId);
    void frameNavigated(std::unique_ptr<protocol::Page::Frame> frame);
    void frameDetached(const WTF::String& frameId);
    void frameStartedLoading(const WTF::String& frameId);
    void frameStoppedLoading(const WTF::String& frameId);
    void frameScheduledNavigation(const WTF::String& frameId, double delay);
    void frameClearedScheduledNavigation(const WTF::String& frameId);
    void frameResized();
    void javascriptDialogOpening(const WTF::String& message, const WTF::String& type);
    void javascriptDialogClosed(bool result);

    void flush() { m_frontendChannel->flushProtocolNotifications(); }
private:
    FrontendChannel* m_frontendChannel;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, blink::protocol::Page::Backend*);

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

} // namespace Page
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_Page_h)
