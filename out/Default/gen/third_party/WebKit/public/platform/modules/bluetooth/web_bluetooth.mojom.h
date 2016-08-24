// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_H_

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
#include "third_party/WebKit/public/platform/modules/bluetooth/web_bluetooth.mojom-shared.h"
#include "device/bluetooth/public/interfaces/bluetooth_uuid.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "base/optional.h"
#include "url/gurl.h"
#include "device/bluetooth/bluetooth_uuid.h"
#include "url/origin.h"
#include "cc/surfaces/surface_sequence.h"
#include "cc/surfaces/surface_id.h"
#include "content/common/bluetooth/web_bluetooth_device_id.h"
#include "content/common/content_export.h"


namespace blink {
namespace mojom {
class WebBluetoothService;
using WebBluetoothServicePtr = mojo::InterfacePtr<WebBluetoothService>;
using WebBluetoothServicePtrInfo = mojo::InterfacePtrInfo<WebBluetoothService>;
using WebBluetoothServiceRequest = mojo::InterfaceRequest<WebBluetoothService>;
using WebBluetoothServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebBluetoothService>;
using WebBluetoothServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebBluetoothService>;
using WebBluetoothServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebBluetoothService>;

class WebBluetoothServiceClient;
using WebBluetoothServiceClientPtr = mojo::InterfacePtr<WebBluetoothServiceClient>;
using WebBluetoothServiceClientPtrInfo = mojo::InterfacePtrInfo<WebBluetoothServiceClient>;
using WebBluetoothServiceClientRequest = mojo::InterfaceRequest<WebBluetoothServiceClient>;
using WebBluetoothServiceClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<WebBluetoothServiceClient>;
using WebBluetoothServiceClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<WebBluetoothServiceClient>;
using WebBluetoothServiceClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<WebBluetoothServiceClient>;

class WebBluetoothScanFilter;
class WebBluetoothScanFilterDataView;
using WebBluetoothScanFilterPtr = mojo::StructPtr<WebBluetoothScanFilter>;

class WebBluetoothRequestDeviceOptions;
class WebBluetoothRequestDeviceOptionsDataView;
using WebBluetoothRequestDeviceOptionsPtr = mojo::StructPtr<WebBluetoothRequestDeviceOptions>;

class WebBluetoothDeviceId;
class WebBluetoothDeviceIdDataView;
using WebBluetoothDeviceIdPtr = mojo::InlinedStructPtr<WebBluetoothDeviceId>;

class WebBluetoothDevice;
class WebBluetoothDeviceDataView;
using WebBluetoothDevicePtr = mojo::StructPtr<WebBluetoothDevice>;

class WebBluetoothRemoteGATTService;
class WebBluetoothRemoteGATTServiceDataView;
using WebBluetoothRemoteGATTServicePtr = mojo::InlinedStructPtr<WebBluetoothRemoteGATTService>;

class WebBluetoothRemoteGATTCharacteristic;
class WebBluetoothRemoteGATTCharacteristicDataView;
using WebBluetoothRemoteGATTCharacteristicPtr = mojo::InlinedStructPtr<WebBluetoothRemoteGATTCharacteristic>;


class WebBluetoothServiceProxy;
class WebBluetoothServiceStub;

class WebBluetoothServiceRequestValidator;
class WebBluetoothServiceResponseValidator;

class CONTENT_EXPORT WebBluetoothService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = true;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WebBluetoothServiceProxy;
  using Stub_ = WebBluetoothServiceStub;

  using RequestValidator_ = WebBluetoothServiceRequestValidator;
  using ResponseValidator_ = WebBluetoothServiceResponseValidator;
  virtual ~WebBluetoothService() {}

  virtual void SetClient(WebBluetoothServiceClientAssociatedPtrInfo client) = 0;


  using RequestDeviceCallback = base::Callback<void(WebBluetoothError, WebBluetoothDevicePtr)>;
  virtual void RequestDevice(WebBluetoothRequestDeviceOptionsPtr options, const RequestDeviceCallback& callback) = 0;


  using RemoteServerConnectCallback = base::Callback<void(WebBluetoothError)>;
  virtual void RemoteServerConnect(const content::WebBluetoothDeviceId& device_id, const RemoteServerConnectCallback& callback) = 0;

  virtual void RemoteServerDisconnect(const content::WebBluetoothDeviceId& device_id) = 0;


  using RemoteServerGetPrimaryServicesCallback = base::Callback<void(WebBluetoothError, mojo::Array<WebBluetoothRemoteGATTServicePtr>)>;
  virtual void RemoteServerGetPrimaryServices(const content::WebBluetoothDeviceId& device_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& services_uuid, const RemoteServerGetPrimaryServicesCallback& callback) = 0;


  using RemoteServiceGetCharacteristicsCallback = base::Callback<void(WebBluetoothError, mojo::Array<WebBluetoothRemoteGATTCharacteristicPtr>)>;
  virtual void RemoteServiceGetCharacteristics(const mojo::String& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& characteristics_uuid, const RemoteServiceGetCharacteristicsCallback& callback) = 0;


  using RemoteCharacteristicReadValueCallback = base::Callback<void(WebBluetoothError, mojo::Array<uint8_t>)>;
  virtual void RemoteCharacteristicReadValue(const mojo::String& characteristic_instance_id, const RemoteCharacteristicReadValueCallback& callback) = 0;


  using RemoteCharacteristicWriteValueCallback = base::Callback<void(WebBluetoothError)>;
  virtual void RemoteCharacteristicWriteValue(const mojo::String& characteristic_instance_id, mojo::Array<uint8_t> value, const RemoteCharacteristicWriteValueCallback& callback) = 0;


  using RemoteCharacteristicStartNotificationsCallback = base::Callback<void(WebBluetoothError)>;
  virtual void RemoteCharacteristicStartNotifications(const mojo::String& characteristic_instance_id, const RemoteCharacteristicStartNotificationsCallback& callback) = 0;


  using RemoteCharacteristicStopNotificationsCallback = base::Callback<void()>;
  virtual void RemoteCharacteristicStopNotifications(const mojo::String& characteristic_instance_id, const RemoteCharacteristicStopNotificationsCallback& callback) = 0;
};

class WebBluetoothServiceClientProxy;
class WebBluetoothServiceClientStub;

class WebBluetoothServiceClientRequestValidator;

class CONTENT_EXPORT WebBluetoothServiceClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = WebBluetoothServiceClientProxy;
  using Stub_ = WebBluetoothServiceClientStub;

  using RequestValidator_ = WebBluetoothServiceClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~WebBluetoothServiceClient() {}

  virtual void RemoteCharacteristicValueChanged(const mojo::String& characteristic_instance_id, mojo::Array<uint8_t> value) = 0;

  virtual void GattServerDisconnected(const content::WebBluetoothDeviceId& device_id) = 0;
};

class CONTENT_EXPORT WebBluetoothServiceProxy
    : public WebBluetoothService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WebBluetoothServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(WebBluetoothServiceClientAssociatedPtrInfo client) override;
  void RequestDevice(WebBluetoothRequestDeviceOptionsPtr options, const RequestDeviceCallback& callback) override;
  void RemoteServerConnect(const content::WebBluetoothDeviceId& device_id, const RemoteServerConnectCallback& callback) override;
  void RemoteServerDisconnect(const content::WebBluetoothDeviceId& device_id) override;
  void RemoteServerGetPrimaryServices(const content::WebBluetoothDeviceId& device_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& services_uuid, const RemoteServerGetPrimaryServicesCallback& callback) override;
  void RemoteServiceGetCharacteristics(const mojo::String& service_instance_id, WebBluetoothGATTQueryQuantity quantity, const base::Optional<device::BluetoothUUID>& characteristics_uuid, const RemoteServiceGetCharacteristicsCallback& callback) override;
  void RemoteCharacteristicReadValue(const mojo::String& characteristic_instance_id, const RemoteCharacteristicReadValueCallback& callback) override;
  void RemoteCharacteristicWriteValue(const mojo::String& characteristic_instance_id, mojo::Array<uint8_t> value, const RemoteCharacteristicWriteValueCallback& callback) override;
  void RemoteCharacteristicStartNotifications(const mojo::String& characteristic_instance_id, const RemoteCharacteristicStartNotificationsCallback& callback) override;
  void RemoteCharacteristicStopNotifications(const mojo::String& characteristic_instance_id, const RemoteCharacteristicStopNotificationsCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class CONTENT_EXPORT WebBluetoothServiceClientProxy
    : public WebBluetoothServiceClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit WebBluetoothServiceClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void RemoteCharacteristicValueChanged(const mojo::String& characteristic_instance_id, mojo::Array<uint8_t> value) override;
  void GattServerDisconnected(const content::WebBluetoothDeviceId& device_id) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class CONTENT_EXPORT WebBluetoothServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WebBluetoothServiceStub();
  ~WebBluetoothServiceStub() override;
  void set_sink(WebBluetoothService* sink) { sink_ = sink; }
  WebBluetoothService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WebBluetoothService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT WebBluetoothServiceClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  WebBluetoothServiceClientStub();
  ~WebBluetoothServiceClientStub() override;
  void set_sink(WebBluetoothServiceClient* sink) { sink_ = sink; }
  WebBluetoothServiceClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  WebBluetoothServiceClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT WebBluetoothServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WebBluetoothServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT WebBluetoothServiceClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WebBluetoothServiceClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT WebBluetoothServiceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit WebBluetoothServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};




class CONTENT_EXPORT WebBluetoothDeviceId {
 public:
  using DataView = WebBluetoothDeviceIdDataView;
  using Data_ = internal::WebBluetoothDeviceId_Data;

  static WebBluetoothDeviceIdPtr New();

  template <typename U>
  static WebBluetoothDeviceIdPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothDeviceIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothDeviceId>::Convert(*this);
  }

  WebBluetoothDeviceId();
  ~WebBluetoothDeviceId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothDeviceIdPtr>
  WebBluetoothDeviceIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothDeviceId>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        WebBluetoothDeviceIdPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        WebBluetoothDeviceIdPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String device_id;
};

class WebBluetoothDeviceIdDataView {
 public:
  WebBluetoothDeviceIdDataView() {}

  WebBluetoothDeviceIdDataView(
      internal::WebBluetoothDeviceId_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDeviceId(UserType* output) {
    auto pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothDeviceId_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::WebBluetoothDeviceIdDataView> {
  using MojomType = ::blink::mojom::WebBluetoothDeviceIdPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {




class CONTENT_EXPORT WebBluetoothRemoteGATTService {
 public:
  using DataView = WebBluetoothRemoteGATTServiceDataView;
  using Data_ = internal::WebBluetoothRemoteGATTService_Data;

  static WebBluetoothRemoteGATTServicePtr New();

  template <typename U>
  static WebBluetoothRemoteGATTServicePtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothRemoteGATTServicePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothRemoteGATTService>::Convert(*this);
  }

  WebBluetoothRemoteGATTService();
  ~WebBluetoothRemoteGATTService();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothRemoteGATTServicePtr>
  WebBluetoothRemoteGATTServicePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothRemoteGATTService>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        WebBluetoothRemoteGATTServicePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        WebBluetoothRemoteGATTServicePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String instance_id;
  mojo::String uuid;
};

class WebBluetoothRemoteGATTServiceDataView {
 public:
  WebBluetoothRemoteGATTServiceDataView() {}

  WebBluetoothRemoteGATTServiceDataView(
      internal::WebBluetoothRemoteGATTService_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadInstanceId(UserType* output) {
    auto pointer = data_->instance_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUuid(UserType* output) {
    auto pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothRemoteGATTService_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::WebBluetoothRemoteGATTServiceDataView> {
  using MojomType = ::blink::mojom::WebBluetoothRemoteGATTServicePtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {



class CONTENT_EXPORT WebBluetoothRemoteGATTCharacteristic {
 public:
  using DataView = WebBluetoothRemoteGATTCharacteristicDataView;
  using Data_ = internal::WebBluetoothRemoteGATTCharacteristic_Data;

  static WebBluetoothRemoteGATTCharacteristicPtr New();

  template <typename U>
  static WebBluetoothRemoteGATTCharacteristicPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothRemoteGATTCharacteristicPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothRemoteGATTCharacteristic>::Convert(*this);
  }

  WebBluetoothRemoteGATTCharacteristic();
  ~WebBluetoothRemoteGATTCharacteristic();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothRemoteGATTCharacteristicPtr>
  WebBluetoothRemoteGATTCharacteristicPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothRemoteGATTCharacteristic>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        WebBluetoothRemoteGATTCharacteristicPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        WebBluetoothRemoteGATTCharacteristicPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String instance_id;
  mojo::String uuid;
  uint32_t properties;
};

class WebBluetoothRemoteGATTCharacteristicDataView {
 public:
  WebBluetoothRemoteGATTCharacteristicDataView() {}

  WebBluetoothRemoteGATTCharacteristicDataView(
      internal::WebBluetoothRemoteGATTCharacteristic_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadInstanceId(UserType* output) {
    auto pointer = data_->instance_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUuid(UserType* output) {
    auto pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  uint32_t properties() const {
    return data_->properties;
  }
 private:
  internal::WebBluetoothRemoteGATTCharacteristic_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView> {
  using MojomType = ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {





class CONTENT_EXPORT WebBluetoothScanFilter {
 public:
  using DataView = WebBluetoothScanFilterDataView;
  using Data_ = internal::WebBluetoothScanFilter_Data;

  static WebBluetoothScanFilterPtr New();

  template <typename U>
  static WebBluetoothScanFilterPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothScanFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothScanFilter>::Convert(*this);
  }

  WebBluetoothScanFilter();
  ~WebBluetoothScanFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothScanFilterPtr>
  WebBluetoothScanFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothScanFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        WebBluetoothScanFilterPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        WebBluetoothScanFilterPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::Array<base::Optional<device::BluetoothUUID>> services;
  mojo::String name;
  mojo::String name_prefix;
 private:
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothScanFilter);
};

class WebBluetoothScanFilterDataView {
 public:
  WebBluetoothScanFilterDataView() {}

  WebBluetoothScanFilterDataView(
      internal::WebBluetoothScanFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServicesDataView(
      mojo::ArrayDataView<::device::mojom::BluetoothUUIDDataView>* output);

  template <typename UserType>
  bool ReadServices(UserType* output) {
    auto pointer = data_->services.Get();
    return mojo::internal::Deserialize<mojo::Array<::device::mojom::BluetoothUUIDPtr>>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetNamePrefixDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadNamePrefix(UserType* output) {
    auto pointer = data_->name_prefix.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothScanFilter_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::WebBluetoothScanFilterDataView> {
  using MojomType = ::blink::mojom::WebBluetoothScanFilterPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {



class CONTENT_EXPORT WebBluetoothRequestDeviceOptions {
 public:
  using DataView = WebBluetoothRequestDeviceOptionsDataView;
  using Data_ = internal::WebBluetoothRequestDeviceOptions_Data;

  static WebBluetoothRequestDeviceOptionsPtr New();

  template <typename U>
  static WebBluetoothRequestDeviceOptionsPtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothRequestDeviceOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothRequestDeviceOptions>::Convert(*this);
  }

  WebBluetoothRequestDeviceOptions();
  ~WebBluetoothRequestDeviceOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothRequestDeviceOptionsPtr>
  WebBluetoothRequestDeviceOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothRequestDeviceOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        WebBluetoothRequestDeviceOptionsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        WebBluetoothRequestDeviceOptionsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::Array<WebBluetoothScanFilterPtr> filters;
  mojo::Array<base::Optional<device::BluetoothUUID>> optional_services;
 private:
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothRequestDeviceOptions);
};

class WebBluetoothRequestDeviceOptionsDataView {
 public:
  WebBluetoothRequestDeviceOptionsDataView() {}

  WebBluetoothRequestDeviceOptionsDataView(
      internal::WebBluetoothRequestDeviceOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFiltersDataView(
      mojo::ArrayDataView<WebBluetoothScanFilterDataView>* output);

  template <typename UserType>
  bool ReadFilters(UserType* output) {
    auto pointer = data_->filters.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::WebBluetoothScanFilterPtr>>(
        pointer, output, context_);
  }
  inline void GetOptionalServicesDataView(
      mojo::ArrayDataView<::device::mojom::BluetoothUUIDDataView>* output);

  template <typename UserType>
  bool ReadOptionalServices(UserType* output) {
    auto pointer = data_->optional_services.Get();
    return mojo::internal::Deserialize<mojo::Array<::device::mojom::BluetoothUUIDPtr>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothRequestDeviceOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::WebBluetoothRequestDeviceOptionsDataView> {
  using MojomType = ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {




class CONTENT_EXPORT WebBluetoothDevice {
 public:
  using DataView = WebBluetoothDeviceDataView;
  using Data_ = internal::WebBluetoothDevice_Data;

  static WebBluetoothDevicePtr New();

  template <typename U>
  static WebBluetoothDevicePtr From(const U& u) {
    return mojo::TypeConverter<WebBluetoothDevicePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebBluetoothDevice>::Convert(*this);
  }

  WebBluetoothDevice();
  ~WebBluetoothDevice();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebBluetoothDevicePtr>
  WebBluetoothDevicePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WebBluetoothDevice>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        WebBluetoothDevicePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        WebBluetoothDevicePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  content::WebBluetoothDeviceId id;
  mojo::String name;
  mojo::Array<mojo::String> uuids;
 private:
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothDevice);
};

class WebBluetoothDeviceDataView {
 public:
  WebBluetoothDeviceDataView() {}

  WebBluetoothDeviceDataView(
      internal::WebBluetoothDevice_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  bool ReadId(UserType* output) {
    auto pointer = data_->id.Get();
    return mojo::internal::Deserialize<::blink::mojom::WebBluetoothDeviceIdPtr>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetUuidsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadUuids(UserType* output) {
    auto pointer = data_->uuids.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::String>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothDevice_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::WebBluetoothDeviceDataView> {
  using MojomType = ::blink::mojom::WebBluetoothDevicePtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {




template <typename StructPtrType>
WebBluetoothScanFilterPtr WebBluetoothScanFilter::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->services = mojo::internal::Clone(services);
  rv->name = mojo::internal::Clone(name);
  rv->name_prefix = mojo::internal::Clone(name_prefix);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothScanFilter>::value>::type*>
bool WebBluetoothScanFilter::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->services, other.services))
    return false;
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->name_prefix, other.name_prefix))
    return false;
  return true;
}

inline void WebBluetoothScanFilterDataView::GetServicesDataView(
    mojo::ArrayDataView<::device::mojom::BluetoothUUIDDataView>* output) {
  auto pointer = data_->services.Get();
  *output = mojo::ArrayDataView<::device::mojom::BluetoothUUIDDataView>(pointer, context_);
}
inline void WebBluetoothScanFilterDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothScanFilterDataView::GetNamePrefixDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name_prefix.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
WebBluetoothRequestDeviceOptionsPtr WebBluetoothRequestDeviceOptions::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->filters = mojo::internal::Clone(filters);
  rv->optional_services = mojo::internal::Clone(optional_services);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothRequestDeviceOptions>::value>::type*>
bool WebBluetoothRequestDeviceOptions::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->filters, other.filters))
    return false;
  if (!mojo::internal::Equals(this->optional_services, other.optional_services))
    return false;
  return true;
}

inline void WebBluetoothRequestDeviceOptionsDataView::GetFiltersDataView(
    mojo::ArrayDataView<WebBluetoothScanFilterDataView>* output) {
  auto pointer = data_->filters.Get();
  *output = mojo::ArrayDataView<WebBluetoothScanFilterDataView>(pointer, context_);
}
inline void WebBluetoothRequestDeviceOptionsDataView::GetOptionalServicesDataView(
    mojo::ArrayDataView<::device::mojom::BluetoothUUIDDataView>* output) {
  auto pointer = data_->optional_services.Get();
  *output = mojo::ArrayDataView<::device::mojom::BluetoothUUIDDataView>(pointer, context_);
}

template <typename StructPtrType>
WebBluetoothDeviceIdPtr WebBluetoothDeviceId::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->device_id = mojo::internal::Clone(device_id);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothDeviceId>::value>::type*>
bool WebBluetoothDeviceId::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->device_id, other.device_id))
    return false;
  return true;
}

inline void WebBluetoothDeviceIdDataView::GetDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
WebBluetoothDevicePtr WebBluetoothDevice::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->id = mojo::internal::Clone(id);
  rv->name = mojo::internal::Clone(name);
  rv->uuids = mojo::internal::Clone(uuids);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothDevice>::value>::type*>
bool WebBluetoothDevice::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->uuids, other.uuids))
    return false;
  return true;
}

inline void WebBluetoothDeviceDataView::GetIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}
inline void WebBluetoothDeviceDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothDeviceDataView::GetUuidsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->uuids.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}

template <typename StructPtrType>
WebBluetoothRemoteGATTServicePtr WebBluetoothRemoteGATTService::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->instance_id = mojo::internal::Clone(instance_id);
  rv->uuid = mojo::internal::Clone(uuid);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothRemoteGATTService>::value>::type*>
bool WebBluetoothRemoteGATTService::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->instance_id, other.instance_id))
    return false;
  if (!mojo::internal::Equals(this->uuid, other.uuid))
    return false;
  return true;
}

inline void WebBluetoothRemoteGATTServiceDataView::GetInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothRemoteGATTServiceDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
WebBluetoothRemoteGATTCharacteristicPtr WebBluetoothRemoteGATTCharacteristic::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->instance_id = mojo::internal::Clone(instance_id);
  rv->uuid = mojo::internal::Clone(uuid);
  rv->properties = mojo::internal::Clone(properties);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WebBluetoothRemoteGATTCharacteristic>::value>::type*>
bool WebBluetoothRemoteGATTCharacteristic::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->instance_id, other.instance_id))
    return false;
  if (!mojo::internal::Equals(this->uuid, other.uuid))
    return false;
  if (!mojo::internal::Equals(this->properties, other.properties))
    return false;
  return true;
}

inline void WebBluetoothRemoteGATTCharacteristicDataView::GetInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothRemoteGATTCharacteristicDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothScanFilter, ::blink::mojom::WebBluetoothScanFilterPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothScanFilterPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothScanFilterPtr* output) { output->reset(); }
  static decltype(::blink::mojom::WebBluetoothScanFilter::services)& services(
      ::blink::mojom::WebBluetoothScanFilterPtr& input) {
    return input->services;
  }
  static decltype(::blink::mojom::WebBluetoothScanFilter::name)& name(
      ::blink::mojom::WebBluetoothScanFilterPtr& input) {
    return input->name;
  }
  static decltype(::blink::mojom::WebBluetoothScanFilter::name_prefix)& name_prefix(
      ::blink::mojom::WebBluetoothScanFilterPtr& input) {
    return input->name_prefix;
  }

  static bool Read(::blink::mojom::WebBluetoothScanFilterDataView input, ::blink::mojom::WebBluetoothScanFilterPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothScanFilterPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothScanFilter, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::WebBluetoothScanFilter_Data);
    decltype(CallWithContext(Traits::services, input, custom_context)) in_services = CallWithContext(Traits::services, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::device::mojom::BluetoothUUIDPtr>>(
        in_services, context);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::name_prefix, input, custom_context)) in_name_prefix = CallWithContext(Traits::name_prefix, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name_prefix, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothScanFilter_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::WebBluetoothScanFilter_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::services, input, custom_context)) in_services = CallWithContext(Traits::services, input, custom_context);
      typename decltype(result->services)::BaseType* services_ptr;
      const mojo::internal::ContainerValidateParams services_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::device::mojom::BluetoothUUIDPtr>>(
          in_services, buffer, &services_ptr, &services_validate_params,
          context);
      result->services.Set(services_ptr);
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      decltype(CallWithContext(Traits::name_prefix, input, custom_context)) in_name_prefix = CallWithContext(Traits::name_prefix, input, custom_context);
      typename decltype(result->name_prefix)::BaseType* name_prefix_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name_prefix, buffer, &name_prefix_ptr, context);
      result->name_prefix.Set(name_prefix_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothScanFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothScanFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothRequestDeviceOptions, ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothRequestDeviceOptionsPtr* output) { output->reset(); }
  static decltype(::blink::mojom::WebBluetoothRequestDeviceOptions::filters)& filters(
      ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr& input) {
    return input->filters;
  }
  static decltype(::blink::mojom::WebBluetoothRequestDeviceOptions::optional_services)& optional_services(
      ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr& input) {
    return input->optional_services;
  }

  static bool Read(::blink::mojom::WebBluetoothRequestDeviceOptionsDataView input, ::blink::mojom::WebBluetoothRequestDeviceOptionsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothRequestDeviceOptionsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothRequestDeviceOptions, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::WebBluetoothRequestDeviceOptions_Data);
    decltype(CallWithContext(Traits::filters, input, custom_context)) in_filters = CallWithContext(Traits::filters, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::WebBluetoothScanFilterPtr>>(
        in_filters, context);
    decltype(CallWithContext(Traits::optional_services, input, custom_context)) in_optional_services = CallWithContext(Traits::optional_services, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::device::mojom::BluetoothUUIDPtr>>(
        in_optional_services, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothRequestDeviceOptions_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::WebBluetoothRequestDeviceOptions_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::filters, input, custom_context)) in_filters = CallWithContext(Traits::filters, input, custom_context);
      typename decltype(result->filters)::BaseType* filters_ptr;
      const mojo::internal::ContainerValidateParams filters_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::blink::mojom::WebBluetoothScanFilterPtr>>(
          in_filters, buffer, &filters_ptr, &filters_validate_params,
          context);
      result->filters.Set(filters_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->filters.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null filters in WebBluetoothRequestDeviceOptions struct");
      decltype(CallWithContext(Traits::optional_services, input, custom_context)) in_optional_services = CallWithContext(Traits::optional_services, input, custom_context);
      typename decltype(result->optional_services)::BaseType* optional_services_ptr;
      const mojo::internal::ContainerValidateParams optional_services_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::device::mojom::BluetoothUUIDPtr>>(
          in_optional_services, buffer, &optional_services_ptr, &optional_services_validate_params,
          context);
      result->optional_services.Set(optional_services_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->optional_services.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null optional_services in WebBluetoothRequestDeviceOptions struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothRequestDeviceOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothRequestDeviceOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothDeviceId, ::blink::mojom::WebBluetoothDeviceIdPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothDeviceIdPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothDeviceIdPtr* output) { output->reset(); }
  static decltype(::blink::mojom::WebBluetoothDeviceId::device_id)& device_id(
      ::blink::mojom::WebBluetoothDeviceIdPtr& input) {
    return input->device_id;
  }

  static bool Read(::blink::mojom::WebBluetoothDeviceIdDataView input, ::blink::mojom::WebBluetoothDeviceIdPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothDeviceIdPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothDeviceId, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::WebBluetoothDeviceId_Data);
    decltype(CallWithContext(Traits::device_id, input, custom_context)) in_device_id = CallWithContext(Traits::device_id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_device_id, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothDeviceId_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::WebBluetoothDeviceId_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::device_id, input, custom_context)) in_device_id = CallWithContext(Traits::device_id, input, custom_context);
      typename decltype(result->device_id)::BaseType* device_id_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_device_id, buffer, &device_id_ptr, context);
      result->device_id.Set(device_id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->device_id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null device_id in WebBluetoothDeviceId struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothDeviceId_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothDeviceIdDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothDevice, ::blink::mojom::WebBluetoothDevicePtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothDevicePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothDevicePtr* output) { output->reset(); }
  static decltype(::blink::mojom::WebBluetoothDevice::id)& id(
      ::blink::mojom::WebBluetoothDevicePtr& input) {
    return input->id;
  }
  static decltype(::blink::mojom::WebBluetoothDevice::name)& name(
      ::blink::mojom::WebBluetoothDevicePtr& input) {
    return input->name;
  }
  static decltype(::blink::mojom::WebBluetoothDevice::uuids)& uuids(
      ::blink::mojom::WebBluetoothDevicePtr& input) {
    return input->uuids;
  }

  static bool Read(::blink::mojom::WebBluetoothDeviceDataView input, ::blink::mojom::WebBluetoothDevicePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothDevicePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothDevice, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::WebBluetoothDevice_Data);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::blink::mojom::WebBluetoothDeviceIdPtr>(
        in_id, context);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::uuids, input, custom_context)) in_uuids = CallWithContext(Traits::uuids, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
        in_uuids, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothDevice_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::WebBluetoothDevice_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
      typename decltype(result->id)::BaseType* id_ptr;
      mojo::internal::Serialize<::blink::mojom::WebBluetoothDeviceIdPtr>(
          in_id, buffer, &id_ptr, context);
      result->id.Set(id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null id in WebBluetoothDevice struct");
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      decltype(CallWithContext(Traits::uuids, input, custom_context)) in_uuids = CallWithContext(Traits::uuids, input, custom_context);
      typename decltype(result->uuids)::BaseType* uuids_ptr;
      const mojo::internal::ContainerValidateParams uuids_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Array<mojo::String>>(
          in_uuids, buffer, &uuids_ptr, &uuids_validate_params,
          context);
      result->uuids.Set(uuids_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->uuids.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null uuids in WebBluetoothDevice struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothDevice_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothDeviceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothRemoteGATTService, ::blink::mojom::WebBluetoothRemoteGATTServicePtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothRemoteGATTServicePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothRemoteGATTServicePtr* output) { output->reset(); }
  static decltype(::blink::mojom::WebBluetoothRemoteGATTService::instance_id)& instance_id(
      ::blink::mojom::WebBluetoothRemoteGATTServicePtr& input) {
    return input->instance_id;
  }
  static decltype(::blink::mojom::WebBluetoothRemoteGATTService::uuid)& uuid(
      ::blink::mojom::WebBluetoothRemoteGATTServicePtr& input) {
    return input->uuid;
  }

  static bool Read(::blink::mojom::WebBluetoothRemoteGATTServiceDataView input, ::blink::mojom::WebBluetoothRemoteGATTServicePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothRemoteGATTServicePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothRemoteGATTService, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::WebBluetoothRemoteGATTService_Data);
    decltype(CallWithContext(Traits::instance_id, input, custom_context)) in_instance_id = CallWithContext(Traits::instance_id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_instance_id, context);
    decltype(CallWithContext(Traits::uuid, input, custom_context)) in_uuid = CallWithContext(Traits::uuid, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_uuid, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothRemoteGATTService_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::WebBluetoothRemoteGATTService_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::instance_id, input, custom_context)) in_instance_id = CallWithContext(Traits::instance_id, input, custom_context);
      typename decltype(result->instance_id)::BaseType* instance_id_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_instance_id, buffer, &instance_id_ptr, context);
      result->instance_id.Set(instance_id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->instance_id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null instance_id in WebBluetoothRemoteGATTService struct");
      decltype(CallWithContext(Traits::uuid, input, custom_context)) in_uuid = CallWithContext(Traits::uuid, input, custom_context);
      typename decltype(result->uuid)::BaseType* uuid_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_uuid, buffer, &uuid_ptr, context);
      result->uuid.Set(uuid_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->uuid.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null uuid in WebBluetoothRemoteGATTService struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothRemoteGATTService_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothRemoteGATTServiceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct CONTENT_EXPORT StructTraits<::blink::mojom::WebBluetoothRemoteGATTCharacteristic, ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr> {
  static bool IsNull(const ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr* output) { output->reset(); }
  static decltype(::blink::mojom::WebBluetoothRemoteGATTCharacteristic::instance_id)& instance_id(
      ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr& input) {
    return input->instance_id;
  }
  static decltype(::blink::mojom::WebBluetoothRemoteGATTCharacteristic::uuid)& uuid(
      ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr& input) {
    return input->uuid;
  }
  static decltype(::blink::mojom::WebBluetoothRemoteGATTCharacteristic::properties) properties(
      const ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr& input) {
    return input->properties;
  }

  static bool Read(::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView input, ::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothRemoteGATTCharacteristicPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::WebBluetoothRemoteGATTCharacteristic, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::WebBluetoothRemoteGATTCharacteristic_Data);
    decltype(CallWithContext(Traits::instance_id, input, custom_context)) in_instance_id = CallWithContext(Traits::instance_id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_instance_id, context);
    decltype(CallWithContext(Traits::uuid, input, custom_context)) in_uuid = CallWithContext(Traits::uuid, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_uuid, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::WebBluetoothRemoteGATTCharacteristic_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::WebBluetoothRemoteGATTCharacteristic_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::instance_id, input, custom_context)) in_instance_id = CallWithContext(Traits::instance_id, input, custom_context);
      typename decltype(result->instance_id)::BaseType* instance_id_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_instance_id, buffer, &instance_id_ptr, context);
      result->instance_id.Set(instance_id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->instance_id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null instance_id in WebBluetoothRemoteGATTCharacteristic struct");
      decltype(CallWithContext(Traits::uuid, input, custom_context)) in_uuid = CallWithContext(Traits::uuid, input, custom_context);
      typename decltype(result->uuid)::BaseType* uuid_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_uuid, buffer, &uuid_ptr, context);
      result->uuid.Set(uuid_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->uuid.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null uuid in WebBluetoothRemoteGATTCharacteristic struct");
      result->properties = CallWithContext(Traits::properties, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::WebBluetoothRemoteGATTCharacteristic_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::WebBluetoothRemoteGATTCharacteristicDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_H_