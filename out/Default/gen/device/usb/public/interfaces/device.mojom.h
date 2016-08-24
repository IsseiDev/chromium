// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_INTERFACES_DEVICE_MOJOM_H_
#define DEVICE_USB_PUBLIC_INTERFACES_DEVICE_MOJOM_H_

#include <stdint.h>

#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/optional.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/native_struct.h"
#include "mojo/public/cpp/bindings/native_struct_data_view.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "device/usb/public/interfaces/device.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace device {
namespace usb {
class Device;
using DevicePtr = mojo::InterfacePtr<Device>;
using DevicePtrInfo = mojo::InterfacePtrInfo<Device>;
using DeviceRequest = mojo::InterfaceRequest<Device>;
using DeviceAssociatedPtr =
    mojo::AssociatedInterfacePtr<Device>;
using DeviceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Device>;
using DeviceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Device>;

class EndpointInfo;
class EndpointInfoDataView;
using EndpointInfoPtr = mojo::InlinedStructPtr<EndpointInfo>;

class AlternateInterfaceInfo;
class AlternateInterfaceInfoDataView;
using AlternateInterfaceInfoPtr = mojo::StructPtr<AlternateInterfaceInfo>;

class InterfaceInfo;
class InterfaceInfoDataView;
using InterfaceInfoPtr = mojo::StructPtr<InterfaceInfo>;

class ConfigurationInfo;
class ConfigurationInfoDataView;
using ConfigurationInfoPtr = mojo::StructPtr<ConfigurationInfo>;

class DeviceInfo;
class DeviceInfoDataView;
using DeviceInfoPtr = mojo::StructPtr<DeviceInfo>;

class ControlTransferParams;
class ControlTransferParamsDataView;
using ControlTransferParamsPtr = mojo::StructPtr<ControlTransferParams>;

class IsochronousPacket;
class IsochronousPacketDataView;
using IsochronousPacketPtr = mojo::InlinedStructPtr<IsochronousPacket>;


class DeviceProxy;
class DeviceStub;

class DeviceRequestValidator;
class DeviceResponseValidator;

class  Device {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = DeviceProxy;
  using Stub_ = DeviceStub;

  using RequestValidator_ = DeviceRequestValidator;
  using ResponseValidator_ = DeviceResponseValidator;
  virtual ~Device() {}


  using GetDeviceInfoCallback = base::Callback<void(DeviceInfoPtr)>;
  virtual void GetDeviceInfo(const GetDeviceInfoCallback& callback) = 0;


  using OpenCallback = base::Callback<void(OpenDeviceError)>;
  virtual void Open(const OpenCallback& callback) = 0;


  using CloseCallback = base::Callback<void()>;
  virtual void Close(const CloseCallback& callback) = 0;


  using SetConfigurationCallback = base::Callback<void(bool)>;
  virtual void SetConfiguration(uint8_t value, const SetConfigurationCallback& callback) = 0;


  using ClaimInterfaceCallback = base::Callback<void(bool)>;
  virtual void ClaimInterface(uint8_t interface_number, const ClaimInterfaceCallback& callback) = 0;


  using ReleaseInterfaceCallback = base::Callback<void(bool)>;
  virtual void ReleaseInterface(uint8_t interface_number, const ReleaseInterfaceCallback& callback) = 0;


  using SetInterfaceAlternateSettingCallback = base::Callback<void(bool)>;
  virtual void SetInterfaceAlternateSetting(uint8_t interface_number, uint8_t alternate_setting, const SetInterfaceAlternateSettingCallback& callback) = 0;


  using ResetCallback = base::Callback<void(bool)>;
  virtual void Reset(const ResetCallback& callback) = 0;


  using ClearHaltCallback = base::Callback<void(bool)>;
  virtual void ClearHalt(uint8_t endpoint, const ClearHaltCallback& callback) = 0;


  using ControlTransferInCallback = base::Callback<void(TransferStatus, const base::Optional<std::vector<uint8_t>>&)>;
  virtual void ControlTransferIn(ControlTransferParamsPtr params, uint32_t length, uint32_t timeout, const ControlTransferInCallback& callback) = 0;


  using ControlTransferOutCallback = base::Callback<void(TransferStatus)>;
  virtual void ControlTransferOut(ControlTransferParamsPtr params, const std::vector<uint8_t>& data, uint32_t timeout, const ControlTransferOutCallback& callback) = 0;


  using GenericTransferInCallback = base::Callback<void(TransferStatus, const base::Optional<std::vector<uint8_t>>&)>;
  virtual void GenericTransferIn(uint8_t endpoint_number, uint32_t length, uint32_t timeout, const GenericTransferInCallback& callback) = 0;


  using GenericTransferOutCallback = base::Callback<void(TransferStatus)>;
  virtual void GenericTransferOut(uint8_t endpoint_number, const std::vector<uint8_t>& data, uint32_t timeout, const GenericTransferOutCallback& callback) = 0;


  using IsochronousTransferInCallback = base::Callback<void(const base::Optional<std::vector<uint8_t>>&, std::vector<IsochronousPacketPtr>)>;
  virtual void IsochronousTransferIn(uint8_t endpoint_number, const std::vector<uint32_t>& packet_lengths, uint32_t timeout, const IsochronousTransferInCallback& callback) = 0;


  using IsochronousTransferOutCallback = base::Callback<void(std::vector<IsochronousPacketPtr>)>;
  virtual void IsochronousTransferOut(uint8_t endpoint_number, const std::vector<uint8_t>& data, const std::vector<uint32_t>& packet_lengths, uint32_t timeout, const IsochronousTransferOutCallback& callback) = 0;
};

class  DeviceProxy
    : public Device,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit DeviceProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDeviceInfo(const GetDeviceInfoCallback& callback) override;
  void Open(const OpenCallback& callback) override;
  void Close(const CloseCallback& callback) override;
  void SetConfiguration(uint8_t value, const SetConfigurationCallback& callback) override;
  void ClaimInterface(uint8_t interface_number, const ClaimInterfaceCallback& callback) override;
  void ReleaseInterface(uint8_t interface_number, const ReleaseInterfaceCallback& callback) override;
  void SetInterfaceAlternateSetting(uint8_t interface_number, uint8_t alternate_setting, const SetInterfaceAlternateSettingCallback& callback) override;
  void Reset(const ResetCallback& callback) override;
  void ClearHalt(uint8_t endpoint, const ClearHaltCallback& callback) override;
  void ControlTransferIn(ControlTransferParamsPtr params, uint32_t length, uint32_t timeout, const ControlTransferInCallback& callback) override;
  void ControlTransferOut(ControlTransferParamsPtr params, const std::vector<uint8_t>& data, uint32_t timeout, const ControlTransferOutCallback& callback) override;
  void GenericTransferIn(uint8_t endpoint_number, uint32_t length, uint32_t timeout, const GenericTransferInCallback& callback) override;
  void GenericTransferOut(uint8_t endpoint_number, const std::vector<uint8_t>& data, uint32_t timeout, const GenericTransferOutCallback& callback) override;
  void IsochronousTransferIn(uint8_t endpoint_number, const std::vector<uint32_t>& packet_lengths, uint32_t timeout, const IsochronousTransferInCallback& callback) override;
  void IsochronousTransferOut(uint8_t endpoint_number, const std::vector<uint8_t>& data, const std::vector<uint32_t>& packet_lengths, uint32_t timeout, const IsochronousTransferOutCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  DeviceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  DeviceStub();
  ~DeviceStub() override;
  void set_sink(Device* sink) { sink_ = sink; }
  Device* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Device* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  DeviceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DeviceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  DeviceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DeviceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class  EndpointInfo {
 public:
  using DataView = EndpointInfoDataView;
  using Data_ = internal::EndpointInfo_Data;

  static EndpointInfoPtr New();

  template <typename U>
  static EndpointInfoPtr From(const U& u) {
    return mojo::TypeConverter<EndpointInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EndpointInfo>::Convert(*this);
  }

  EndpointInfo();
  ~EndpointInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EndpointInfoPtr>
  EndpointInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EndpointInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        EndpointInfoPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        EndpointInfoPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint8_t endpoint_number;
  TransferDirection direction;
  EndpointType type;
  uint32_t packet_size;
};

class EndpointInfoDataView {
 public:
  EndpointInfoDataView() {}

  EndpointInfoDataView(
      internal::EndpointInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint8_t endpoint_number() const {
    return data_->endpoint_number;
  }
  template <typename UserType>
  bool ReadDirection(UserType* output) const {
    auto data_value = data_->direction;
    return mojo::internal::Deserialize<::device::usb::TransferDirection>(
        data_value, output);
  }

  ::device::usb::TransferDirection direction() const {
    return static_cast<::device::usb::TransferDirection>(data_->direction);
  }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::usb::EndpointType>(
        data_value, output);
  }

  ::device::usb::EndpointType type() const {
    return static_cast<::device::usb::EndpointType>(data_->type);
  }
  uint32_t packet_size() const {
    return data_->packet_size;
  }
 private:
  internal::EndpointInfo_Data* data_ = nullptr;
};



}  // namespace usb
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::usb::EndpointInfoDataView> {
  using MojomType = ::device::usb::EndpointInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace usb {








class  IsochronousPacket {
 public:
  using DataView = IsochronousPacketDataView;
  using Data_ = internal::IsochronousPacket_Data;

  static IsochronousPacketPtr New();

  template <typename U>
  static IsochronousPacketPtr From(const U& u) {
    return mojo::TypeConverter<IsochronousPacketPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IsochronousPacket>::Convert(*this);
  }

  IsochronousPacket();
  ~IsochronousPacket();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IsochronousPacketPtr>
  IsochronousPacketPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, IsochronousPacket>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        IsochronousPacketPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        IsochronousPacketPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t length;
  uint32_t transferred_length;
  TransferStatus status;
};

class IsochronousPacketDataView {
 public:
  IsochronousPacketDataView() {}

  IsochronousPacketDataView(
      internal::IsochronousPacket_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t length() const {
    return data_->length;
  }
  uint32_t transferred_length() const {
    return data_->transferred_length;
  }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::device::usb::TransferStatus>(
        data_value, output);
  }

  ::device::usb::TransferStatus status() const {
    return static_cast<::device::usb::TransferStatus>(data_->status);
  }
 private:
  internal::IsochronousPacket_Data* data_ = nullptr;
};



}  // namespace usb
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::usb::IsochronousPacketDataView> {
  using MojomType = ::device::usb::IsochronousPacketPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace usb {






class  AlternateInterfaceInfo {
 public:
  using DataView = AlternateInterfaceInfoDataView;
  using Data_ = internal::AlternateInterfaceInfo_Data;

  static AlternateInterfaceInfoPtr New();

  template <typename U>
  static AlternateInterfaceInfoPtr From(const U& u) {
    return mojo::TypeConverter<AlternateInterfaceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AlternateInterfaceInfo>::Convert(*this);
  }

  AlternateInterfaceInfo();
  ~AlternateInterfaceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AlternateInterfaceInfoPtr>
  AlternateInterfaceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AlternateInterfaceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        AlternateInterfaceInfoPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        AlternateInterfaceInfoPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint8_t alternate_setting;
  uint8_t class_code;
  uint8_t subclass_code;
  uint8_t protocol_code;
  base::Optional<std::string> interface_name;
  std::vector<EndpointInfoPtr> endpoints;
 private:
  DISALLOW_COPY_AND_ASSIGN(AlternateInterfaceInfo);
};

class AlternateInterfaceInfoDataView {
 public:
  AlternateInterfaceInfoDataView() {}

  AlternateInterfaceInfoDataView(
      internal::AlternateInterfaceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t alternate_setting() const {
    return data_->alternate_setting;
  }
  uint8_t class_code() const {
    return data_->class_code;
  }
  uint8_t subclass_code() const {
    return data_->subclass_code;
  }
  uint8_t protocol_code() const {
    return data_->protocol_code;
  }
  inline void GetInterfaceNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadInterfaceName(UserType* output) {
    auto pointer = data_->interface_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetEndpointsDataView(
      mojo::ArrayDataView<EndpointInfoDataView>* output);

  template <typename UserType>
  bool ReadEndpoints(UserType* output) {
    auto pointer = data_->endpoints.Get();
    return mojo::internal::Deserialize<mojo::Array<::device::usb::EndpointInfoPtr>>(
        pointer, output, context_);
  }
 private:
  internal::AlternateInterfaceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace usb
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::usb::AlternateInterfaceInfoDataView> {
  using MojomType = ::device::usb::AlternateInterfaceInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace usb {



class  InterfaceInfo {
 public:
  using DataView = InterfaceInfoDataView;
  using Data_ = internal::InterfaceInfo_Data;

  static InterfaceInfoPtr New();

  template <typename U>
  static InterfaceInfoPtr From(const U& u) {
    return mojo::TypeConverter<InterfaceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, InterfaceInfo>::Convert(*this);
  }

  InterfaceInfo();
  ~InterfaceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = InterfaceInfoPtr>
  InterfaceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, InterfaceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        InterfaceInfoPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        InterfaceInfoPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint8_t interface_number;
  std::vector<AlternateInterfaceInfoPtr> alternates;
 private:
  DISALLOW_COPY_AND_ASSIGN(InterfaceInfo);
};

class InterfaceInfoDataView {
 public:
  InterfaceInfoDataView() {}

  InterfaceInfoDataView(
      internal::InterfaceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t interface_number() const {
    return data_->interface_number;
  }
  inline void GetAlternatesDataView(
      mojo::ArrayDataView<AlternateInterfaceInfoDataView>* output);

  template <typename UserType>
  bool ReadAlternates(UserType* output) {
    auto pointer = data_->alternates.Get();
    return mojo::internal::Deserialize<mojo::Array<::device::usb::AlternateInterfaceInfoPtr>>(
        pointer, output, context_);
  }
 private:
  internal::InterfaceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace usb
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::usb::InterfaceInfoDataView> {
  using MojomType = ::device::usb::InterfaceInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace usb {



class  ConfigurationInfo {
 public:
  using DataView = ConfigurationInfoDataView;
  using Data_ = internal::ConfigurationInfo_Data;

  static ConfigurationInfoPtr New();

  template <typename U>
  static ConfigurationInfoPtr From(const U& u) {
    return mojo::TypeConverter<ConfigurationInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ConfigurationInfo>::Convert(*this);
  }

  ConfigurationInfo();
  ~ConfigurationInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ConfigurationInfoPtr>
  ConfigurationInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ConfigurationInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        ConfigurationInfoPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        ConfigurationInfoPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint8_t configuration_value;
  base::Optional<std::string> configuration_name;
  std::vector<InterfaceInfoPtr> interfaces;
 private:
  DISALLOW_COPY_AND_ASSIGN(ConfigurationInfo);
};

class ConfigurationInfoDataView {
 public:
  ConfigurationInfoDataView() {}

  ConfigurationInfoDataView(
      internal::ConfigurationInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint8_t configuration_value() const {
    return data_->configuration_value;
  }
  inline void GetConfigurationNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadConfigurationName(UserType* output) {
    auto pointer = data_->configuration_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetInterfacesDataView(
      mojo::ArrayDataView<InterfaceInfoDataView>* output);

  template <typename UserType>
  bool ReadInterfaces(UserType* output) {
    auto pointer = data_->interfaces.Get();
    return mojo::internal::Deserialize<mojo::Array<::device::usb::InterfaceInfoPtr>>(
        pointer, output, context_);
  }
 private:
  internal::ConfigurationInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace usb
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::usb::ConfigurationInfoDataView> {
  using MojomType = ::device::usb::ConfigurationInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace usb {



class  DeviceInfo {
 public:
  using DataView = DeviceInfoDataView;
  using Data_ = internal::DeviceInfo_Data;

  static DeviceInfoPtr New();

  template <typename U>
  static DeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<DeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DeviceInfo>::Convert(*this);
  }

  DeviceInfo();
  ~DeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DeviceInfoPtr>
  DeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        DeviceInfoPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        DeviceInfoPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string guid;
  uint8_t usb_version_major;
  uint8_t usb_version_minor;
  uint8_t usb_version_subminor;
  uint8_t class_code;
  uint8_t subclass_code;
  uint8_t protocol_code;
  uint16_t vendor_id;
  uint16_t product_id;
  uint8_t device_version_major;
  uint8_t device_version_minor;
  uint8_t device_version_subminor;
  base::Optional<std::string> manufacturer_name;
  base::Optional<std::string> product_name;
  base::Optional<std::string> serial_number;
  uint8_t active_configuration;
  std::vector<ConfigurationInfoPtr> configurations;
 private:
  DISALLOW_COPY_AND_ASSIGN(DeviceInfo);
};

class DeviceInfoDataView {
 public:
  DeviceInfoDataView() {}

  DeviceInfoDataView(
      internal::DeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadGuid(UserType* output) {
    auto pointer = data_->guid.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  uint8_t usb_version_major() const {
    return data_->usb_version_major;
  }
  uint8_t usb_version_minor() const {
    return data_->usb_version_minor;
  }
  uint8_t usb_version_subminor() const {
    return data_->usb_version_subminor;
  }
  uint8_t class_code() const {
    return data_->class_code;
  }
  uint8_t subclass_code() const {
    return data_->subclass_code;
  }
  uint8_t protocol_code() const {
    return data_->protocol_code;
  }
  uint16_t vendor_id() const {
    return data_->vendor_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  uint8_t device_version_major() const {
    return data_->device_version_major;
  }
  uint8_t device_version_minor() const {
    return data_->device_version_minor;
  }
  uint8_t device_version_subminor() const {
    return data_->device_version_subminor;
  }
  inline void GetManufacturerNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadManufacturerName(UserType* output) {
    auto pointer = data_->manufacturer_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetProductNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadProductName(UserType* output) {
    auto pointer = data_->product_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetSerialNumberDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSerialNumber(UserType* output) {
    auto pointer = data_->serial_number.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  uint8_t active_configuration() const {
    return data_->active_configuration;
  }
  inline void GetConfigurationsDataView(
      mojo::ArrayDataView<ConfigurationInfoDataView>* output);

  template <typename UserType>
  bool ReadConfigurations(UserType* output) {
    auto pointer = data_->configurations.Get();
    return mojo::internal::Deserialize<mojo::Array<::device::usb::ConfigurationInfoPtr>>(
        pointer, output, context_);
  }
 private:
  internal::DeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace usb
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::usb::DeviceInfoDataView> {
  using MojomType = ::device::usb::DeviceInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace usb {



class  ControlTransferParams {
 public:
  using DataView = ControlTransferParamsDataView;
  using Data_ = internal::ControlTransferParams_Data;

  static ControlTransferParamsPtr New();

  template <typename U>
  static ControlTransferParamsPtr From(const U& u) {
    return mojo::TypeConverter<ControlTransferParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ControlTransferParams>::Convert(*this);
  }

  ControlTransferParams();
  ~ControlTransferParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ControlTransferParamsPtr>
  ControlTransferParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ControlTransferParams>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        ControlTransferParamsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        ControlTransferParamsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  ControlTransferType type;
  ControlTransferRecipient recipient;
  uint8_t request;
  uint16_t value;
  uint16_t index;
};

class ControlTransferParamsDataView {
 public:
  ControlTransferParamsDataView() {}

  ControlTransferParamsDataView(
      internal::ControlTransferParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::usb::ControlTransferType>(
        data_value, output);
  }

  ::device::usb::ControlTransferType type() const {
    return static_cast<::device::usb::ControlTransferType>(data_->type);
  }
  template <typename UserType>
  bool ReadRecipient(UserType* output) const {
    auto data_value = data_->recipient;
    return mojo::internal::Deserialize<::device::usb::ControlTransferRecipient>(
        data_value, output);
  }

  ::device::usb::ControlTransferRecipient recipient() const {
    return static_cast<::device::usb::ControlTransferRecipient>(data_->recipient);
  }
  uint8_t request() const {
    return data_->request;
  }
  uint16_t value() const {
    return data_->value;
  }
  uint16_t index() const {
    return data_->index;
  }
 private:
  internal::ControlTransferParams_Data* data_ = nullptr;
};



}  // namespace usb
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::usb::ControlTransferParamsDataView> {
  using MojomType = ::device::usb::ControlTransferParamsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace usb {



template <typename StructPtrType>
EndpointInfoPtr EndpointInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->endpoint_number = mojo::internal::Clone(endpoint_number);
  rv->direction = mojo::internal::Clone(direction);
  rv->type = mojo::internal::Clone(type);
  rv->packet_size = mojo::internal::Clone(packet_size);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EndpointInfo>::value>::type*>
bool EndpointInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->endpoint_number, other.endpoint_number))
    return false;
  if (!mojo::internal::Equals(this->direction, other.direction))
    return false;
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->packet_size, other.packet_size))
    return false;
  return true;
}


template <typename StructPtrType>
AlternateInterfaceInfoPtr AlternateInterfaceInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->alternate_setting = mojo::internal::Clone(alternate_setting);
  rv->class_code = mojo::internal::Clone(class_code);
  rv->subclass_code = mojo::internal::Clone(subclass_code);
  rv->protocol_code = mojo::internal::Clone(protocol_code);
  rv->interface_name = mojo::internal::Clone(interface_name);
  rv->endpoints = mojo::internal::Clone(endpoints);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AlternateInterfaceInfo>::value>::type*>
bool AlternateInterfaceInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->alternate_setting, other.alternate_setting))
    return false;
  if (!mojo::internal::Equals(this->class_code, other.class_code))
    return false;
  if (!mojo::internal::Equals(this->subclass_code, other.subclass_code))
    return false;
  if (!mojo::internal::Equals(this->protocol_code, other.protocol_code))
    return false;
  if (!mojo::internal::Equals(this->interface_name, other.interface_name))
    return false;
  if (!mojo::internal::Equals(this->endpoints, other.endpoints))
    return false;
  return true;
}

inline void AlternateInterfaceInfoDataView::GetInterfaceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->interface_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AlternateInterfaceInfoDataView::GetEndpointsDataView(
    mojo::ArrayDataView<EndpointInfoDataView>* output) {
  auto pointer = data_->endpoints.Get();
  *output = mojo::ArrayDataView<EndpointInfoDataView>(pointer, context_);
}

template <typename StructPtrType>
InterfaceInfoPtr InterfaceInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->interface_number = mojo::internal::Clone(interface_number);
  rv->alternates = mojo::internal::Clone(alternates);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, InterfaceInfo>::value>::type*>
bool InterfaceInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->interface_number, other.interface_number))
    return false;
  if (!mojo::internal::Equals(this->alternates, other.alternates))
    return false;
  return true;
}

inline void InterfaceInfoDataView::GetAlternatesDataView(
    mojo::ArrayDataView<AlternateInterfaceInfoDataView>* output) {
  auto pointer = data_->alternates.Get();
  *output = mojo::ArrayDataView<AlternateInterfaceInfoDataView>(pointer, context_);
}

template <typename StructPtrType>
ConfigurationInfoPtr ConfigurationInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->configuration_value = mojo::internal::Clone(configuration_value);
  rv->configuration_name = mojo::internal::Clone(configuration_name);
  rv->interfaces = mojo::internal::Clone(interfaces);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ConfigurationInfo>::value>::type*>
bool ConfigurationInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->configuration_value, other.configuration_value))
    return false;
  if (!mojo::internal::Equals(this->configuration_name, other.configuration_name))
    return false;
  if (!mojo::internal::Equals(this->interfaces, other.interfaces))
    return false;
  return true;
}

inline void ConfigurationInfoDataView::GetConfigurationNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->configuration_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ConfigurationInfoDataView::GetInterfacesDataView(
    mojo::ArrayDataView<InterfaceInfoDataView>* output) {
  auto pointer = data_->interfaces.Get();
  *output = mojo::ArrayDataView<InterfaceInfoDataView>(pointer, context_);
}

template <typename StructPtrType>
DeviceInfoPtr DeviceInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->guid = mojo::internal::Clone(guid);
  rv->usb_version_major = mojo::internal::Clone(usb_version_major);
  rv->usb_version_minor = mojo::internal::Clone(usb_version_minor);
  rv->usb_version_subminor = mojo::internal::Clone(usb_version_subminor);
  rv->class_code = mojo::internal::Clone(class_code);
  rv->subclass_code = mojo::internal::Clone(subclass_code);
  rv->protocol_code = mojo::internal::Clone(protocol_code);
  rv->vendor_id = mojo::internal::Clone(vendor_id);
  rv->product_id = mojo::internal::Clone(product_id);
  rv->device_version_major = mojo::internal::Clone(device_version_major);
  rv->device_version_minor = mojo::internal::Clone(device_version_minor);
  rv->device_version_subminor = mojo::internal::Clone(device_version_subminor);
  rv->manufacturer_name = mojo::internal::Clone(manufacturer_name);
  rv->product_name = mojo::internal::Clone(product_name);
  rv->serial_number = mojo::internal::Clone(serial_number);
  rv->active_configuration = mojo::internal::Clone(active_configuration);
  rv->configurations = mojo::internal::Clone(configurations);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DeviceInfo>::value>::type*>
bool DeviceInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->guid, other.guid))
    return false;
  if (!mojo::internal::Equals(this->usb_version_major, other.usb_version_major))
    return false;
  if (!mojo::internal::Equals(this->usb_version_minor, other.usb_version_minor))
    return false;
  if (!mojo::internal::Equals(this->usb_version_subminor, other.usb_version_subminor))
    return false;
  if (!mojo::internal::Equals(this->class_code, other.class_code))
    return false;
  if (!mojo::internal::Equals(this->subclass_code, other.subclass_code))
    return false;
  if (!mojo::internal::Equals(this->protocol_code, other.protocol_code))
    return false;
  if (!mojo::internal::Equals(this->vendor_id, other.vendor_id))
    return false;
  if (!mojo::internal::Equals(this->product_id, other.product_id))
    return false;
  if (!mojo::internal::Equals(this->device_version_major, other.device_version_major))
    return false;
  if (!mojo::internal::Equals(this->device_version_minor, other.device_version_minor))
    return false;
  if (!mojo::internal::Equals(this->device_version_subminor, other.device_version_subminor))
    return false;
  if (!mojo::internal::Equals(this->manufacturer_name, other.manufacturer_name))
    return false;
  if (!mojo::internal::Equals(this->product_name, other.product_name))
    return false;
  if (!mojo::internal::Equals(this->serial_number, other.serial_number))
    return false;
  if (!mojo::internal::Equals(this->active_configuration, other.active_configuration))
    return false;
  if (!mojo::internal::Equals(this->configurations, other.configurations))
    return false;
  return true;
}

inline void DeviceInfoDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DeviceInfoDataView::GetManufacturerNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->manufacturer_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DeviceInfoDataView::GetProductNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->product_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DeviceInfoDataView::GetSerialNumberDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->serial_number.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DeviceInfoDataView::GetConfigurationsDataView(
    mojo::ArrayDataView<ConfigurationInfoDataView>* output) {
  auto pointer = data_->configurations.Get();
  *output = mojo::ArrayDataView<ConfigurationInfoDataView>(pointer, context_);
}

template <typename StructPtrType>
ControlTransferParamsPtr ControlTransferParams::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->recipient = mojo::internal::Clone(recipient);
  rv->request = mojo::internal::Clone(request);
  rv->value = mojo::internal::Clone(value);
  rv->index = mojo::internal::Clone(index);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ControlTransferParams>::value>::type*>
bool ControlTransferParams::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->recipient, other.recipient))
    return false;
  if (!mojo::internal::Equals(this->request, other.request))
    return false;
  if (!mojo::internal::Equals(this->value, other.value))
    return false;
  if (!mojo::internal::Equals(this->index, other.index))
    return false;
  return true;
}


template <typename StructPtrType>
IsochronousPacketPtr IsochronousPacket::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->length = mojo::internal::Clone(length);
  rv->transferred_length = mojo::internal::Clone(transferred_length);
  rv->status = mojo::internal::Clone(status);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, IsochronousPacket>::value>::type*>
bool IsochronousPacket::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->length, other.length))
    return false;
  if (!mojo::internal::Equals(this->transferred_length, other.transferred_length))
    return false;
  if (!mojo::internal::Equals(this->status, other.status))
    return false;
  return true;
}




}  // namespace usb
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::usb::EndpointInfo, ::device::usb::EndpointInfoPtr> {
  static bool IsNull(const ::device::usb::EndpointInfoPtr& input) { return !input; }
  static void SetToNull(::device::usb::EndpointInfoPtr* output) { output->reset(); }
  static decltype(::device::usb::EndpointInfo::endpoint_number) endpoint_number(
      const ::device::usb::EndpointInfoPtr& input) {
    return input->endpoint_number;
  }
  static decltype(::device::usb::EndpointInfo::direction) direction(
      const ::device::usb::EndpointInfoPtr& input) {
    return input->direction;
  }
  static decltype(::device::usb::EndpointInfo::type) type(
      const ::device::usb::EndpointInfoPtr& input) {
    return input->type;
  }
  static decltype(::device::usb::EndpointInfo::packet_size) packet_size(
      const ::device::usb::EndpointInfoPtr& input) {
    return input->packet_size;
  }

  static bool Read(::device::usb::EndpointInfoDataView input, ::device::usb::EndpointInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::EndpointInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::usb::EndpointInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::usb::internal::EndpointInfo_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::usb::internal::EndpointInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::usb::internal::EndpointInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->endpoint_number = CallWithContext(Traits::endpoint_number, input, custom_context);
      mojo::internal::Serialize<::device::usb::TransferDirection>(
          CallWithContext(Traits::direction, input, custom_context), &result->direction);
      mojo::internal::Serialize<::device::usb::EndpointType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      result->packet_size = CallWithContext(Traits::packet_size, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::usb::internal::EndpointInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::usb::EndpointInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::usb::AlternateInterfaceInfo, ::device::usb::AlternateInterfaceInfoPtr> {
  static bool IsNull(const ::device::usb::AlternateInterfaceInfoPtr& input) { return !input; }
  static void SetToNull(::device::usb::AlternateInterfaceInfoPtr* output) { output->reset(); }
  static decltype(::device::usb::AlternateInterfaceInfo::alternate_setting) alternate_setting(
      const ::device::usb::AlternateInterfaceInfoPtr& input) {
    return input->alternate_setting;
  }
  static decltype(::device::usb::AlternateInterfaceInfo::class_code) class_code(
      const ::device::usb::AlternateInterfaceInfoPtr& input) {
    return input->class_code;
  }
  static decltype(::device::usb::AlternateInterfaceInfo::subclass_code) subclass_code(
      const ::device::usb::AlternateInterfaceInfoPtr& input) {
    return input->subclass_code;
  }
  static decltype(::device::usb::AlternateInterfaceInfo::protocol_code) protocol_code(
      const ::device::usb::AlternateInterfaceInfoPtr& input) {
    return input->protocol_code;
  }
  static decltype(::device::usb::AlternateInterfaceInfo::interface_name)& interface_name(
      ::device::usb::AlternateInterfaceInfoPtr& input) {
    return input->interface_name;
  }
  static decltype(::device::usb::AlternateInterfaceInfo::endpoints)& endpoints(
      ::device::usb::AlternateInterfaceInfoPtr& input) {
    return input->endpoints;
  }

  static bool Read(::device::usb::AlternateInterfaceInfoDataView input, ::device::usb::AlternateInterfaceInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::AlternateInterfaceInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::usb::AlternateInterfaceInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::usb::internal::AlternateInterfaceInfo_Data);
    decltype(CallWithContext(Traits::interface_name, input, custom_context)) in_interface_name = CallWithContext(Traits::interface_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_interface_name, context);
    decltype(CallWithContext(Traits::endpoints, input, custom_context)) in_endpoints = CallWithContext(Traits::endpoints, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::device::usb::EndpointInfoPtr>>(
        in_endpoints, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::usb::internal::AlternateInterfaceInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::usb::internal::AlternateInterfaceInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->alternate_setting = CallWithContext(Traits::alternate_setting, input, custom_context);
      result->class_code = CallWithContext(Traits::class_code, input, custom_context);
      result->subclass_code = CallWithContext(Traits::subclass_code, input, custom_context);
      result->protocol_code = CallWithContext(Traits::protocol_code, input, custom_context);
      decltype(CallWithContext(Traits::interface_name, input, custom_context)) in_interface_name = CallWithContext(Traits::interface_name, input, custom_context);
      typename decltype(result->interface_name)::BaseType* interface_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_interface_name, buffer, &interface_name_ptr, context);
      result->interface_name.Set(interface_name_ptr);
      decltype(CallWithContext(Traits::endpoints, input, custom_context)) in_endpoints = CallWithContext(Traits::endpoints, input, custom_context);
      typename decltype(result->endpoints)::BaseType* endpoints_ptr;
      const mojo::internal::ContainerValidateParams endpoints_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::device::usb::EndpointInfoPtr>>(
          in_endpoints, buffer, &endpoints_ptr, &endpoints_validate_params,
          context);
      result->endpoints.Set(endpoints_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->endpoints.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null endpoints in AlternateInterfaceInfo struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::usb::internal::AlternateInterfaceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::usb::AlternateInterfaceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::usb::InterfaceInfo, ::device::usb::InterfaceInfoPtr> {
  static bool IsNull(const ::device::usb::InterfaceInfoPtr& input) { return !input; }
  static void SetToNull(::device::usb::InterfaceInfoPtr* output) { output->reset(); }
  static decltype(::device::usb::InterfaceInfo::interface_number) interface_number(
      const ::device::usb::InterfaceInfoPtr& input) {
    return input->interface_number;
  }
  static decltype(::device::usb::InterfaceInfo::alternates)& alternates(
      ::device::usb::InterfaceInfoPtr& input) {
    return input->alternates;
  }

  static bool Read(::device::usb::InterfaceInfoDataView input, ::device::usb::InterfaceInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::InterfaceInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::usb::InterfaceInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::usb::internal::InterfaceInfo_Data);
    decltype(CallWithContext(Traits::alternates, input, custom_context)) in_alternates = CallWithContext(Traits::alternates, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::device::usb::AlternateInterfaceInfoPtr>>(
        in_alternates, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::usb::internal::InterfaceInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::usb::internal::InterfaceInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->interface_number = CallWithContext(Traits::interface_number, input, custom_context);
      decltype(CallWithContext(Traits::alternates, input, custom_context)) in_alternates = CallWithContext(Traits::alternates, input, custom_context);
      typename decltype(result->alternates)::BaseType* alternates_ptr;
      const mojo::internal::ContainerValidateParams alternates_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::device::usb::AlternateInterfaceInfoPtr>>(
          in_alternates, buffer, &alternates_ptr, &alternates_validate_params,
          context);
      result->alternates.Set(alternates_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->alternates.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null alternates in InterfaceInfo struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::usb::internal::InterfaceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::usb::InterfaceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::usb::ConfigurationInfo, ::device::usb::ConfigurationInfoPtr> {
  static bool IsNull(const ::device::usb::ConfigurationInfoPtr& input) { return !input; }
  static void SetToNull(::device::usb::ConfigurationInfoPtr* output) { output->reset(); }
  static decltype(::device::usb::ConfigurationInfo::configuration_value) configuration_value(
      const ::device::usb::ConfigurationInfoPtr& input) {
    return input->configuration_value;
  }
  static decltype(::device::usb::ConfigurationInfo::configuration_name)& configuration_name(
      ::device::usb::ConfigurationInfoPtr& input) {
    return input->configuration_name;
  }
  static decltype(::device::usb::ConfigurationInfo::interfaces)& interfaces(
      ::device::usb::ConfigurationInfoPtr& input) {
    return input->interfaces;
  }

  static bool Read(::device::usb::ConfigurationInfoDataView input, ::device::usb::ConfigurationInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::ConfigurationInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::usb::ConfigurationInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::usb::internal::ConfigurationInfo_Data);
    decltype(CallWithContext(Traits::configuration_name, input, custom_context)) in_configuration_name = CallWithContext(Traits::configuration_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_configuration_name, context);
    decltype(CallWithContext(Traits::interfaces, input, custom_context)) in_interfaces = CallWithContext(Traits::interfaces, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::device::usb::InterfaceInfoPtr>>(
        in_interfaces, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::usb::internal::ConfigurationInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::usb::internal::ConfigurationInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->configuration_value = CallWithContext(Traits::configuration_value, input, custom_context);
      decltype(CallWithContext(Traits::configuration_name, input, custom_context)) in_configuration_name = CallWithContext(Traits::configuration_name, input, custom_context);
      typename decltype(result->configuration_name)::BaseType* configuration_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_configuration_name, buffer, &configuration_name_ptr, context);
      result->configuration_name.Set(configuration_name_ptr);
      decltype(CallWithContext(Traits::interfaces, input, custom_context)) in_interfaces = CallWithContext(Traits::interfaces, input, custom_context);
      typename decltype(result->interfaces)::BaseType* interfaces_ptr;
      const mojo::internal::ContainerValidateParams interfaces_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::device::usb::InterfaceInfoPtr>>(
          in_interfaces, buffer, &interfaces_ptr, &interfaces_validate_params,
          context);
      result->interfaces.Set(interfaces_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->interfaces.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null interfaces in ConfigurationInfo struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::usb::internal::ConfigurationInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::usb::ConfigurationInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::usb::DeviceInfo, ::device::usb::DeviceInfoPtr> {
  static bool IsNull(const ::device::usb::DeviceInfoPtr& input) { return !input; }
  static void SetToNull(::device::usb::DeviceInfoPtr* output) { output->reset(); }
  static decltype(::device::usb::DeviceInfo::guid)& guid(
      ::device::usb::DeviceInfoPtr& input) {
    return input->guid;
  }
  static decltype(::device::usb::DeviceInfo::usb_version_major) usb_version_major(
      const ::device::usb::DeviceInfoPtr& input) {
    return input->usb_version_major;
  }
  static decltype(::device::usb::DeviceInfo::usb_version_minor) usb_version_minor(
      const ::device::usb::DeviceInfoPtr& input) {
    return input->usb_version_minor;
  }
  static decltype(::device::usb::DeviceInfo::usb_version_subminor) usb_version_subminor(
      const ::device::usb::DeviceInfoPtr& input) {
    return input->usb_version_subminor;
  }
  static decltype(::device::usb::DeviceInfo::class_code) class_code(
      const ::device::usb::DeviceInfoPtr& input) {
    return input->class_code;
  }
  static decltype(::device::usb::DeviceInfo::subclass_code) subclass_code(
      const ::device::usb::DeviceInfoPtr& input) {
    return input->subclass_code;
  }
  static decltype(::device::usb::DeviceInfo::protocol_code) protocol_code(
      const ::device::usb::DeviceInfoPtr& input) {
    return input->protocol_code;
  }
  static decltype(::device::usb::DeviceInfo::vendor_id) vendor_id(
      const ::device::usb::DeviceInfoPtr& input) {
    return input->vendor_id;
  }
  static decltype(::device::usb::DeviceInfo::product_id) product_id(
      const ::device::usb::DeviceInfoPtr& input) {
    return input->product_id;
  }
  static decltype(::device::usb::DeviceInfo::device_version_major) device_version_major(
      const ::device::usb::DeviceInfoPtr& input) {
    return input->device_version_major;
  }
  static decltype(::device::usb::DeviceInfo::device_version_minor) device_version_minor(
      const ::device::usb::DeviceInfoPtr& input) {
    return input->device_version_minor;
  }
  static decltype(::device::usb::DeviceInfo::device_version_subminor) device_version_subminor(
      const ::device::usb::DeviceInfoPtr& input) {
    return input->device_version_subminor;
  }
  static decltype(::device::usb::DeviceInfo::manufacturer_name)& manufacturer_name(
      ::device::usb::DeviceInfoPtr& input) {
    return input->manufacturer_name;
  }
  static decltype(::device::usb::DeviceInfo::product_name)& product_name(
      ::device::usb::DeviceInfoPtr& input) {
    return input->product_name;
  }
  static decltype(::device::usb::DeviceInfo::serial_number)& serial_number(
      ::device::usb::DeviceInfoPtr& input) {
    return input->serial_number;
  }
  static decltype(::device::usb::DeviceInfo::active_configuration) active_configuration(
      const ::device::usb::DeviceInfoPtr& input) {
    return input->active_configuration;
  }
  static decltype(::device::usb::DeviceInfo::configurations)& configurations(
      ::device::usb::DeviceInfoPtr& input) {
    return input->configurations;
  }

  static bool Read(::device::usb::DeviceInfoDataView input, ::device::usb::DeviceInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::DeviceInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::usb::DeviceInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::usb::internal::DeviceInfo_Data);
    decltype(CallWithContext(Traits::guid, input, custom_context)) in_guid = CallWithContext(Traits::guid, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_guid, context);
    decltype(CallWithContext(Traits::manufacturer_name, input, custom_context)) in_manufacturer_name = CallWithContext(Traits::manufacturer_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_manufacturer_name, context);
    decltype(CallWithContext(Traits::product_name, input, custom_context)) in_product_name = CallWithContext(Traits::product_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_product_name, context);
    decltype(CallWithContext(Traits::serial_number, input, custom_context)) in_serial_number = CallWithContext(Traits::serial_number, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_serial_number, context);
    decltype(CallWithContext(Traits::configurations, input, custom_context)) in_configurations = CallWithContext(Traits::configurations, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::device::usb::ConfigurationInfoPtr>>(
        in_configurations, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::usb::internal::DeviceInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::usb::internal::DeviceInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::guid, input, custom_context)) in_guid = CallWithContext(Traits::guid, input, custom_context);
      typename decltype(result->guid)::BaseType* guid_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_guid, buffer, &guid_ptr, context);
      result->guid.Set(guid_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->guid.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null guid in DeviceInfo struct");
      result->usb_version_major = CallWithContext(Traits::usb_version_major, input, custom_context);
      result->usb_version_minor = CallWithContext(Traits::usb_version_minor, input, custom_context);
      result->usb_version_subminor = CallWithContext(Traits::usb_version_subminor, input, custom_context);
      result->class_code = CallWithContext(Traits::class_code, input, custom_context);
      result->subclass_code = CallWithContext(Traits::subclass_code, input, custom_context);
      result->protocol_code = CallWithContext(Traits::protocol_code, input, custom_context);
      result->vendor_id = CallWithContext(Traits::vendor_id, input, custom_context);
      result->product_id = CallWithContext(Traits::product_id, input, custom_context);
      result->device_version_major = CallWithContext(Traits::device_version_major, input, custom_context);
      result->device_version_minor = CallWithContext(Traits::device_version_minor, input, custom_context);
      result->device_version_subminor = CallWithContext(Traits::device_version_subminor, input, custom_context);
      decltype(CallWithContext(Traits::manufacturer_name, input, custom_context)) in_manufacturer_name = CallWithContext(Traits::manufacturer_name, input, custom_context);
      typename decltype(result->manufacturer_name)::BaseType* manufacturer_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_manufacturer_name, buffer, &manufacturer_name_ptr, context);
      result->manufacturer_name.Set(manufacturer_name_ptr);
      decltype(CallWithContext(Traits::product_name, input, custom_context)) in_product_name = CallWithContext(Traits::product_name, input, custom_context);
      typename decltype(result->product_name)::BaseType* product_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_product_name, buffer, &product_name_ptr, context);
      result->product_name.Set(product_name_ptr);
      decltype(CallWithContext(Traits::serial_number, input, custom_context)) in_serial_number = CallWithContext(Traits::serial_number, input, custom_context);
      typename decltype(result->serial_number)::BaseType* serial_number_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_serial_number, buffer, &serial_number_ptr, context);
      result->serial_number.Set(serial_number_ptr);
      result->active_configuration = CallWithContext(Traits::active_configuration, input, custom_context);
      decltype(CallWithContext(Traits::configurations, input, custom_context)) in_configurations = CallWithContext(Traits::configurations, input, custom_context);
      typename decltype(result->configurations)::BaseType* configurations_ptr;
      const mojo::internal::ContainerValidateParams configurations_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::device::usb::ConfigurationInfoPtr>>(
          in_configurations, buffer, &configurations_ptr, &configurations_validate_params,
          context);
      result->configurations.Set(configurations_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->configurations.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null configurations in DeviceInfo struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::usb::internal::DeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::usb::DeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::usb::ControlTransferParams, ::device::usb::ControlTransferParamsPtr> {
  static bool IsNull(const ::device::usb::ControlTransferParamsPtr& input) { return !input; }
  static void SetToNull(::device::usb::ControlTransferParamsPtr* output) { output->reset(); }
  static decltype(::device::usb::ControlTransferParams::type) type(
      const ::device::usb::ControlTransferParamsPtr& input) {
    return input->type;
  }
  static decltype(::device::usb::ControlTransferParams::recipient) recipient(
      const ::device::usb::ControlTransferParamsPtr& input) {
    return input->recipient;
  }
  static decltype(::device::usb::ControlTransferParams::request) request(
      const ::device::usb::ControlTransferParamsPtr& input) {
    return input->request;
  }
  static decltype(::device::usb::ControlTransferParams::value) value(
      const ::device::usb::ControlTransferParamsPtr& input) {
    return input->value;
  }
  static decltype(::device::usb::ControlTransferParams::index) index(
      const ::device::usb::ControlTransferParamsPtr& input) {
    return input->index;
  }

  static bool Read(::device::usb::ControlTransferParamsDataView input, ::device::usb::ControlTransferParamsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::ControlTransferParamsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::usb::ControlTransferParams, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::usb::internal::ControlTransferParams_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::usb::internal::ControlTransferParams_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::usb::internal::ControlTransferParams_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::device::usb::ControlTransferType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      mojo::internal::Serialize<::device::usb::ControlTransferRecipient>(
          CallWithContext(Traits::recipient, input, custom_context), &result->recipient);
      result->request = CallWithContext(Traits::request, input, custom_context);
      result->value = CallWithContext(Traits::value, input, custom_context);
      result->index = CallWithContext(Traits::index, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::usb::internal::ControlTransferParams_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::usb::ControlTransferParamsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::usb::IsochronousPacket, ::device::usb::IsochronousPacketPtr> {
  static bool IsNull(const ::device::usb::IsochronousPacketPtr& input) { return !input; }
  static void SetToNull(::device::usb::IsochronousPacketPtr* output) { output->reset(); }
  static decltype(::device::usb::IsochronousPacket::length) length(
      const ::device::usb::IsochronousPacketPtr& input) {
    return input->length;
  }
  static decltype(::device::usb::IsochronousPacket::transferred_length) transferred_length(
      const ::device::usb::IsochronousPacketPtr& input) {
    return input->transferred_length;
  }
  static decltype(::device::usb::IsochronousPacket::status) status(
      const ::device::usb::IsochronousPacketPtr& input) {
    return input->status;
  }

  static bool Read(::device::usb::IsochronousPacketDataView input, ::device::usb::IsochronousPacketPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::IsochronousPacketPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::usb::IsochronousPacket, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::usb::internal::IsochronousPacket_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::usb::internal::IsochronousPacket_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::usb::internal::IsochronousPacket_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->length = CallWithContext(Traits::length, input, custom_context);
      result->transferred_length = CallWithContext(Traits::transferred_length, input, custom_context);
      mojo::internal::Serialize<::device::usb::TransferStatus>(
          CallWithContext(Traits::status, input, custom_context), &result->status);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::usb::internal::IsochronousPacket_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::usb::IsochronousPacketDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // DEVICE_USB_PUBLIC_INTERFACES_DEVICE_MOJOM_H_