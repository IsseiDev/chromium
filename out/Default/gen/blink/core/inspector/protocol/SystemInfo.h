// This file is generated

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef protocol_SystemInfo_h
#define protocol_SystemInfo_h

#include "core/CoreExport.h"
#include "platform/inspector_protocol/InspectorProtocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace SystemInfo {

// ------------- Forward and enum declarations.
// Describes a single graphics processor (GPU).
class GPUDevice;
// Provides information about the GPU(s) on the system.
class GPUInfo;

// ------------- Type and builder declarations.

// Describes a single graphics processor (GPU).
class CORE_EXPORT GPUDevice {
    PROTOCOL_DISALLOW_COPY(GPUDevice);
public:
    static std::unique_ptr<GPUDevice> parse(protocol::Value* value, ErrorSupport* errors);

    ~GPUDevice() { }

    double getVendorId() { return m_vendorId; }
    void setVendorId(double value) { m_vendorId = value; }

    double getDeviceId() { return m_deviceId; }
    void setDeviceId(double value) { m_deviceId = value; }

    WTF::String getVendorString() { return m_vendorString; }
    void setVendorString(const WTF::String& value) { m_vendorString = value; }

    WTF::String getDeviceString() { return m_deviceString; }
    void setDeviceString(const WTF::String& value) { m_deviceString = value; }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<GPUDevice> clone() const;

    template<int STATE>
    class GPUDeviceBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          VendorIdSet = 1 << 1,
          DeviceIdSet = 1 << 2,
          VendorStringSet = 1 << 3,
          DeviceStringSet = 1 << 4,
            AllFieldsSet = (VendorIdSet | DeviceIdSet | VendorStringSet | DeviceStringSet | 0)};


        GPUDeviceBuilder<STATE | VendorIdSet>& setVendorId(double value)
        {
            static_assert(!(STATE & VendorIdSet), "property vendorId should not be set yet");
            m_result->setVendorId(value);
            return castState<VendorIdSet>();
        }

        GPUDeviceBuilder<STATE | DeviceIdSet>& setDeviceId(double value)
        {
            static_assert(!(STATE & DeviceIdSet), "property deviceId should not be set yet");
            m_result->setDeviceId(value);
            return castState<DeviceIdSet>();
        }

        GPUDeviceBuilder<STATE | VendorStringSet>& setVendorString(const WTF::String& value)
        {
            static_assert(!(STATE & VendorStringSet), "property vendorString should not be set yet");
            m_result->setVendorString(value);
            return castState<VendorStringSet>();
        }

        GPUDeviceBuilder<STATE | DeviceStringSet>& setDeviceString(const WTF::String& value)
        {
            static_assert(!(STATE & DeviceStringSet), "property deviceString should not be set yet");
            m_result->setDeviceString(value);
            return castState<DeviceStringSet>();
        }

        std::unique_ptr<GPUDevice> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class GPUDevice;
        GPUDeviceBuilder() : m_result(new GPUDevice()) { }

        template<int STEP> GPUDeviceBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<GPUDeviceBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::SystemInfo::GPUDevice> m_result;
    };

    static GPUDeviceBuilder<0> create()
    {
        return GPUDeviceBuilder<0>();
    }

private:
    GPUDevice()
    {
          m_vendorId = 0;
          m_deviceId = 0;
    }

    double m_vendorId;
    double m_deviceId;
    WTF::String m_vendorString;
    WTF::String m_deviceString;
};


// Provides information about the GPU(s) on the system.
class CORE_EXPORT GPUInfo {
    PROTOCOL_DISALLOW_COPY(GPUInfo);
public:
    static std::unique_ptr<GPUInfo> parse(protocol::Value* value, ErrorSupport* errors);

    ~GPUInfo() { }

    protocol::Array<protocol::SystemInfo::GPUDevice>* getDevices() { return m_devices.get(); }
    void setDevices(std::unique_ptr<protocol::Array<protocol::SystemInfo::GPUDevice>> value) { m_devices = std::move(value); }

    bool hasAuxAttributes() { return m_auxAttributes.isJust(); }
    protocol::DictionaryValue* getAuxAttributes(protocol::DictionaryValue* defaultValue) { return m_auxAttributes.isJust() ? m_auxAttributes.fromJust() : defaultValue; }
    void setAuxAttributes(std::unique_ptr<protocol::DictionaryValue> value) { m_auxAttributes = std::move(value); }

    bool hasFeatureStatus() { return m_featureStatus.isJust(); }
    protocol::DictionaryValue* getFeatureStatus(protocol::DictionaryValue* defaultValue) { return m_featureStatus.isJust() ? m_featureStatus.fromJust() : defaultValue; }
    void setFeatureStatus(std::unique_ptr<protocol::DictionaryValue> value) { m_featureStatus = std::move(value); }

    protocol::Array<WTF::String>* getDriverBugWorkarounds() { return m_driverBugWorkarounds.get(); }
    void setDriverBugWorkarounds(std::unique_ptr<protocol::Array<WTF::String>> value) { m_driverBugWorkarounds = std::move(value); }

    std::unique_ptr<protocol::DictionaryValue> serialize() const;
    std::unique_ptr<GPUInfo> clone() const;

    template<int STATE>
    class GPUInfoBuilder {
    public:
        enum {
            NoFieldsSet = 0,
          DevicesSet = 1 << 1,
          DriverBugWorkaroundsSet = 1 << 2,
            AllFieldsSet = (DevicesSet | DriverBugWorkaroundsSet | 0)};


        GPUInfoBuilder<STATE | DevicesSet>& setDevices(std::unique_ptr<protocol::Array<protocol::SystemInfo::GPUDevice>> value)
        {
            static_assert(!(STATE & DevicesSet), "property devices should not be set yet");
            m_result->setDevices(std::move(value));
            return castState<DevicesSet>();
        }

        GPUInfoBuilder<STATE>& setAuxAttributes(std::unique_ptr<protocol::DictionaryValue> value)
        {
            m_result->setAuxAttributes(std::move(value));
            return *this;
        }

        GPUInfoBuilder<STATE>& setFeatureStatus(std::unique_ptr<protocol::DictionaryValue> value)
        {
            m_result->setFeatureStatus(std::move(value));
            return *this;
        }

        GPUInfoBuilder<STATE | DriverBugWorkaroundsSet>& setDriverBugWorkarounds(std::unique_ptr<protocol::Array<WTF::String>> value)
        {
            static_assert(!(STATE & DriverBugWorkaroundsSet), "property driverBugWorkarounds should not be set yet");
            m_result->setDriverBugWorkarounds(std::move(value));
            return castState<DriverBugWorkaroundsSet>();
        }

        std::unique_ptr<GPUInfo> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class GPUInfo;
        GPUInfoBuilder() : m_result(new GPUInfo()) { }

        template<int STEP> GPUInfoBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<GPUInfoBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::SystemInfo::GPUInfo> m_result;
    };

    static GPUInfoBuilder<0> create()
    {
        return GPUInfoBuilder<0>();
    }

private:
    GPUInfo()
    {
    }

    std::unique_ptr<protocol::Array<protocol::SystemInfo::GPUDevice>> m_devices;
    Maybe<protocol::DictionaryValue> m_auxAttributes;
    Maybe<protocol::DictionaryValue> m_featureStatus;
    std::unique_ptr<protocol::Array<WTF::String>> m_driverBugWorkarounds;
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
    static void wire(UberDispatcher*, blink::protocol::SystemInfo::Backend*);

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

} // namespace SystemInfo
} // namespace protocol
} // namespace blink

#endif // !defined(protocol_SystemInfo_h)
