// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/WebKit/public/platform/modules/bluetooth/web_bluetooth.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "third_party/WebKit/Source/platform/mojo/KURLStructTraits.h"
#include "third_party/WebKit/Source/platform/mojo/SecurityOriginStructTraits.h"
namespace blink {
namespace mojom {
namespace blink {

namespace {

class WebBluetoothService_SetClient_ParamsDataView {
 public:
  WebBluetoothService_SetClient_ParamsDataView() {}

  WebBluetoothService_SetClient_ParamsDataView(
      internal::WebBluetoothService_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  WebBluetoothServiceClientAssociatedPtrInfo TakeClient() {
    WebBluetoothServiceClientAssociatedPtrInfo result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothServiceClientAssociatedPtrInfo>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WebBluetoothService_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class WebBluetoothService_RequestDevice_ParamsDataView {
 public:
  WebBluetoothService_RequestDevice_ParamsDataView() {}

  WebBluetoothService_RequestDevice_ParamsDataView(
      internal::WebBluetoothService_RequestDevice_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      WebBluetoothRequestDeviceOptionsDataView* output);

  template <typename UserType>
  bool ReadOptions(UserType* output) {
    auto pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RequestDevice_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RequestDevice_ParamsDataView::GetOptionsDataView(
    WebBluetoothRequestDeviceOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = WebBluetoothRequestDeviceOptionsDataView(pointer, context_);
}

class WebBluetoothService_RequestDevice_ResponseParamsDataView {
 public:
  WebBluetoothService_RequestDevice_ResponseParamsDataView() {}

  WebBluetoothService_RequestDevice_ResponseParamsDataView(
      internal::WebBluetoothService_RequestDevice_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothError>(
        data_value, output);
  }

  ::blink::mojom::blink::WebBluetoothError error() const {
    return static_cast<::blink::mojom::blink::WebBluetoothError>(data_->error);
  }
  inline void GetDeviceDataView(
      WebBluetoothDeviceDataView* output);

  template <typename UserType>
  bool ReadDevice(UserType* output) {
    auto pointer = data_->device.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothDevicePtr>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RequestDevice_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RequestDevice_ResponseParamsDataView::GetDeviceDataView(
    WebBluetoothDeviceDataView* output) {
  auto pointer = data_->device.Get();
  *output = WebBluetoothDeviceDataView(pointer, context_);
}


class WebBluetoothService_RemoteServerConnect_ParamsDataView {
 public:
  WebBluetoothService_RemoteServerConnect_ParamsDataView() {}

  WebBluetoothService_RemoteServerConnect_ParamsDataView(
      internal::WebBluetoothService_RemoteServerConnect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  bool ReadDeviceId(UserType* output) {
    auto pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothDeviceIdPtr>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServerConnect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RemoteServerConnect_ParamsDataView::GetDeviceIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}

class WebBluetoothService_RemoteServerConnect_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteServerConnect_ResponseParamsDataView() {}

  WebBluetoothService_RemoteServerConnect_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothError>(
        data_value, output);
  }

  ::blink::mojom::blink::WebBluetoothError error() const {
    return static_cast<::blink::mojom::blink::WebBluetoothError>(data_->error);
  }
 private:
  internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data* data_ = nullptr;
};




class WebBluetoothService_RemoteServerDisconnect_ParamsDataView {
 public:
  WebBluetoothService_RemoteServerDisconnect_ParamsDataView() {}

  WebBluetoothService_RemoteServerDisconnect_ParamsDataView(
      internal::WebBluetoothService_RemoteServerDisconnect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  bool ReadDeviceId(UserType* output) {
    auto pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothDeviceIdPtr>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServerDisconnect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RemoteServerDisconnect_ParamsDataView::GetDeviceIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}


class WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView {
 public:
  WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView() {}

  WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView(
      internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  bool ReadDeviceId(UserType* output) {
    auto pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothDeviceIdPtr>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadQuantity(UserType* output) const {
    auto data_value = data_->quantity;
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothGATTQueryQuantity>(
        data_value, output);
  }

  ::blink::mojom::blink::WebBluetoothGATTQueryQuantity quantity() const {
    return static_cast<::blink::mojom::blink::WebBluetoothGATTQueryQuantity>(data_->quantity);
  }
  inline void GetServicesUuidDataView(
      ::device::mojom::blink::BluetoothUUIDDataView* output);

  template <typename UserType>
  bool ReadServicesUuid(UserType* output) {
    auto pointer = data_->services_uuid.Get();
    return mojo::internal::Deserialize<::device::mojom::blink::BluetoothUUIDPtr>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView::GetDeviceIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView::GetServicesUuidDataView(
    ::device::mojom::blink::BluetoothUUIDDataView* output) {
  auto pointer = data_->services_uuid.Get();
  *output = ::device::mojom::blink::BluetoothUUIDDataView(pointer, context_);
}

class WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView() {}

  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothError>(
        data_value, output);
  }

  ::blink::mojom::blink::WebBluetoothError error() const {
    return static_cast<::blink::mojom::blink::WebBluetoothError>(data_->error);
  }
  inline void GetServicesDataView(
      mojo::ArrayDataView<WebBluetoothRemoteGATTServiceDataView>* output);

  template <typename UserType>
  bool ReadServices(UserType* output) {
    auto pointer = data_->services.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView::GetServicesDataView(
    mojo::ArrayDataView<WebBluetoothRemoteGATTServiceDataView>* output) {
  auto pointer = data_->services.Get();
  *output = mojo::ArrayDataView<WebBluetoothRemoteGATTServiceDataView>(pointer, context_);
}


class WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView {
 public:
  WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView() {}

  WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView(
      internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadServiceInstanceId(UserType* output) {
    auto pointer = data_->service_instance_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadQuantity(UserType* output) const {
    auto data_value = data_->quantity;
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothGATTQueryQuantity>(
        data_value, output);
  }

  ::blink::mojom::blink::WebBluetoothGATTQueryQuantity quantity() const {
    return static_cast<::blink::mojom::blink::WebBluetoothGATTQueryQuantity>(data_->quantity);
  }
  inline void GetCharacteristicsUuidDataView(
      ::device::mojom::blink::BluetoothUUIDDataView* output);

  template <typename UserType>
  bool ReadCharacteristicsUuid(UserType* output) {
    auto pointer = data_->characteristics_uuid.Get();
    return mojo::internal::Deserialize<::device::mojom::blink::BluetoothUUIDPtr>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView::GetServiceInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->service_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView::GetCharacteristicsUuidDataView(
    ::device::mojom::blink::BluetoothUUIDDataView* output) {
  auto pointer = data_->characteristics_uuid.Get();
  *output = ::device::mojom::blink::BluetoothUUIDDataView(pointer, context_);
}

class WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView() {}

  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothError>(
        data_value, output);
  }

  ::blink::mojom::blink::WebBluetoothError error() const {
    return static_cast<::blink::mojom::blink::WebBluetoothError>(data_->error);
  }
  inline void GetCharacteristicsDataView(
      mojo::ArrayDataView<WebBluetoothRemoteGATTCharacteristicDataView>* output);

  template <typename UserType>
  bool ReadCharacteristics(UserType* output) {
    auto pointer = data_->characteristics.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView::GetCharacteristicsDataView(
    mojo::ArrayDataView<WebBluetoothRemoteGATTCharacteristicDataView>* output) {
  auto pointer = data_->characteristics.Get();
  *output = mojo::ArrayDataView<WebBluetoothRemoteGATTCharacteristicDataView>(pointer, context_);
}


class WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCharacteristicInstanceId(UserType* output) {
    auto pointer = data_->characteristic_instance_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothError>(
        data_value, output);
  }

  ::blink::mojom::blink::WebBluetoothError error() const {
    return static_cast<::blink::mojom::blink::WebBluetoothError>(data_->error);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadValue(UserType* output) {
    auto pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


class WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCharacteristicInstanceId(UserType* output) {
    auto pointer = data_->characteristic_instance_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadValue(UserType* output) {
    auto pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

class WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothError>(
        data_value, output);
  }

  ::blink::mojom::blink::WebBluetoothError error() const {
    return static_cast<::blink::mojom::blink::WebBluetoothError>(data_->error);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* data_ = nullptr;
};




class WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCharacteristicInstanceId(UserType* output) {
    auto pointer = data_->characteristic_instance_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothError>(
        data_value, output);
  }

  ::blink::mojom::blink::WebBluetoothError error() const {
    return static_cast<::blink::mojom::blink::WebBluetoothError>(data_->error);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* data_ = nullptr;
};




class WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCharacteristicInstanceId(UserType* output) {
    auto pointer = data_->characteristic_instance_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParamsDataView {
 public:
  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParamsDataView() {}

  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParamsDataView(
      internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* data_ = nullptr;
};




class WebBluetoothServiceClient_RemoteCharacteristicValueChanged_ParamsDataView {
 public:
  WebBluetoothServiceClient_RemoteCharacteristicValueChanged_ParamsDataView() {}

  WebBluetoothServiceClient_RemoteCharacteristicValueChanged_ParamsDataView(
      internal::WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCharacteristicInstanceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCharacteristicInstanceId(UserType* output) {
    auto pointer = data_->characteristic_instance_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadValue(UserType* output) {
    auto pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothServiceClient_RemoteCharacteristicValueChanged_ParamsDataView::GetCharacteristicInstanceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->characteristic_instance_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void WebBluetoothServiceClient_RemoteCharacteristicValueChanged_ParamsDataView::GetValueDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->value.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}


class WebBluetoothServiceClient_GattServerDisconnected_ParamsDataView {
 public:
  WebBluetoothServiceClient_GattServerDisconnected_ParamsDataView() {}

  WebBluetoothServiceClient_GattServerDisconnected_ParamsDataView(
      internal::WebBluetoothServiceClient_GattServerDisconnected_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceIdDataView(
      WebBluetoothDeviceIdDataView* output);

  template <typename UserType>
  bool ReadDeviceId(UserType* output) {
    auto pointer = data_->device_id.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::WebBluetoothDeviceIdPtr>(
        pointer, output, context_);
  }
 private:
  internal::WebBluetoothServiceClient_GattServerDisconnected_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void WebBluetoothServiceClient_GattServerDisconnected_ParamsDataView::GetDeviceIdDataView(
    WebBluetoothDeviceIdDataView* output) {
  auto pointer = data_->device_id.Get();
  *output = WebBluetoothDeviceIdDataView(pointer, context_);
}


}  // namespace// static
WebBluetoothScanFilterPtr WebBluetoothScanFilter::New() {
  WebBluetoothScanFilterPtr rv;
  mojo::internal::StructHelper<WebBluetoothScanFilter>::Initialize(&rv);
  return rv;
}

WebBluetoothScanFilter::WebBluetoothScanFilter()
    : services(nullptr),
      name(),
      name_prefix() {
}

WebBluetoothScanFilter::~WebBluetoothScanFilter() {
}// static
WebBluetoothRequestDeviceOptionsPtr WebBluetoothRequestDeviceOptions::New() {
  WebBluetoothRequestDeviceOptionsPtr rv;
  mojo::internal::StructHelper<WebBluetoothRequestDeviceOptions>::Initialize(&rv);
  return rv;
}

WebBluetoothRequestDeviceOptions::WebBluetoothRequestDeviceOptions()
    : filters(nullptr),
      optional_services(nullptr) {
}

WebBluetoothRequestDeviceOptions::~WebBluetoothRequestDeviceOptions() {
}// static
WebBluetoothDeviceIdPtr WebBluetoothDeviceId::New() {
  WebBluetoothDeviceIdPtr rv;
  mojo::internal::StructHelper<WebBluetoothDeviceId>::Initialize(&rv);
  return rv;
}

WebBluetoothDeviceId::WebBluetoothDeviceId()
    : device_id() {
}

WebBluetoothDeviceId::~WebBluetoothDeviceId() {
}// static
WebBluetoothDevicePtr WebBluetoothDevice::New() {
  WebBluetoothDevicePtr rv;
  mojo::internal::StructHelper<WebBluetoothDevice>::Initialize(&rv);
  return rv;
}

WebBluetoothDevice::WebBluetoothDevice()
    : id(),
      name(),
      uuids(nullptr) {
}

WebBluetoothDevice::~WebBluetoothDevice() {
}// static
WebBluetoothRemoteGATTServicePtr WebBluetoothRemoteGATTService::New() {
  WebBluetoothRemoteGATTServicePtr rv;
  mojo::internal::StructHelper<WebBluetoothRemoteGATTService>::Initialize(&rv);
  return rv;
}

WebBluetoothRemoteGATTService::WebBluetoothRemoteGATTService()
    : instance_id(),
      uuid() {
}

WebBluetoothRemoteGATTService::~WebBluetoothRemoteGATTService() {
}// static
WebBluetoothRemoteGATTCharacteristicPtr WebBluetoothRemoteGATTCharacteristic::New() {
  WebBluetoothRemoteGATTCharacteristicPtr rv;
  mojo::internal::StructHelper<WebBluetoothRemoteGATTCharacteristic>::Initialize(&rv);
  return rv;
}

WebBluetoothRemoteGATTCharacteristic::WebBluetoothRemoteGATTCharacteristic()
    : instance_id(),
      uuid(),
      properties() {
}

WebBluetoothRemoteGATTCharacteristic::~WebBluetoothRemoteGATTCharacteristic() {
}
const char WebBluetoothService::Name_[] = "blink::mojom::WebBluetoothService";
const uint32_t WebBluetoothService::Version_;

class WebBluetoothService_RequestDevice_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RequestDevice_ForwardToCallback(
      const WebBluetoothService::RequestDeviceCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RequestDeviceCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RequestDevice_ForwardToCallback);
};
bool WebBluetoothService_RequestDevice_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::WebBluetoothService_RequestDevice_ResponseParams_Data* params =
      reinterpret_cast<internal::WebBluetoothService_RequestDevice_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  WebBluetoothError p_error{};
  WebBluetoothDevicePtr p_device{};
  WebBluetoothService_RequestDevice_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadDevice(&p_device))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RequestDevice response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error), 
std::move(p_device));
  }
  return true;
}

class WebBluetoothService_RemoteServerConnect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteServerConnect_ForwardToCallback(
      const WebBluetoothService::RemoteServerConnectCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteServerConnectCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteServerConnect_ForwardToCallback);
};
bool WebBluetoothService_RemoteServerConnect_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data* params =
      reinterpret_cast<internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  WebBluetoothError p_error{};
  WebBluetoothService_RemoteServerConnect_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteServerConnect response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}

class WebBluetoothService_RemoteServerGetPrimaryServices_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteServerGetPrimaryServices_ForwardToCallback(
      const WebBluetoothService::RemoteServerGetPrimaryServicesCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteServerGetPrimaryServicesCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteServerGetPrimaryServices_ForwardToCallback);
};
bool WebBluetoothService_RemoteServerGetPrimaryServices_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data* params =
      reinterpret_cast<internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  WebBluetoothError p_error{};
  mojo::WTFArray<WebBluetoothRemoteGATTServicePtr> p_services{};
  WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadServices(&p_services))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteServerGetPrimaryServices response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error), 
std::move(p_services));
  }
  return true;
}

class WebBluetoothService_RemoteServiceGetCharacteristics_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteServiceGetCharacteristics_ForwardToCallback(
      const WebBluetoothService::RemoteServiceGetCharacteristicsCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteServiceGetCharacteristicsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteServiceGetCharacteristics_ForwardToCallback);
};
bool WebBluetoothService_RemoteServiceGetCharacteristics_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data* params =
      reinterpret_cast<internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  WebBluetoothError p_error{};
  mojo::WTFArray<WebBluetoothRemoteGATTCharacteristicPtr> p_characteristics{};
  WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadCharacteristics(&p_characteristics))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteServiceGetCharacteristics response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error), 
std::move(p_characteristics));
  }
  return true;
}

class WebBluetoothService_RemoteCharacteristicReadValue_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteCharacteristicReadValue_ForwardToCallback(
      const WebBluetoothService::RemoteCharacteristicReadValueCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteCharacteristicReadValueCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicReadValue_ForwardToCallback);
};
bool WebBluetoothService_RemoteCharacteristicReadValue_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data* params =
      reinterpret_cast<internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  WebBluetoothError p_error{};
  mojo::WTFArray<uint8_t> p_value{};
  WebBluetoothService_RemoteCharacteristicReadValue_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!input_data_view.ReadValue(&p_value))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteCharacteristicReadValue response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error), 
std::move(p_value));
  }
  return true;
}

class WebBluetoothService_RemoteCharacteristicWriteValue_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteCharacteristicWriteValue_ForwardToCallback(
      const WebBluetoothService::RemoteCharacteristicWriteValueCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteCharacteristicWriteValueCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicWriteValue_ForwardToCallback);
};
bool WebBluetoothService_RemoteCharacteristicWriteValue_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data* params =
      reinterpret_cast<internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  WebBluetoothError p_error{};
  WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteCharacteristicWriteValue response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}

class WebBluetoothService_RemoteCharacteristicStartNotifications_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteCharacteristicStartNotifications_ForwardToCallback(
      const WebBluetoothService::RemoteCharacteristicStartNotificationsCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteCharacteristicStartNotificationsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicStartNotifications_ForwardToCallback);
};
bool WebBluetoothService_RemoteCharacteristicStartNotifications_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data* params =
      reinterpret_cast<internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  WebBluetoothError p_error{};
  WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteCharacteristicStartNotifications response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_error));
  }
  return true;
}

class WebBluetoothService_RemoteCharacteristicStopNotifications_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBluetoothService_RemoteCharacteristicStopNotifications_ForwardToCallback(
      const WebBluetoothService::RemoteCharacteristicStopNotificationsCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  WebBluetoothService::RemoteCharacteristicStopNotificationsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicStopNotifications_ForwardToCallback);
};
bool WebBluetoothService_RemoteCharacteristicStopNotifications_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data* params =
      reinterpret_cast<internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "WebBluetoothService::RemoteCharacteristicStopNotifications response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run();
  }
  return true;
}

WebBluetoothServiceProxy::WebBluetoothServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void WebBluetoothServiceProxy::SetClient(
    WebBluetoothServiceClientAssociatedPtrInfo in_client) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_SetClient_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kWebBluetoothService_SetClient_Name, size);

  auto params =
      ::blink::mojom::internal::WebBluetoothService_SetClient_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothServiceClientAssociatedPtrInfo>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_INTERFACE_ID,
      "invalid client in WebBluetoothService.SetClient request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebBluetoothServiceProxy::RequestDevice(
    WebBluetoothRequestDeviceOptionsPtr in_options, const RequestDeviceCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RequestDevice_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr>(
      in_options, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kWebBluetoothService_RequestDevice_Name, size);

  auto params =
      ::blink::mojom::internal::WebBluetoothService_RequestDevice_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->options)::BaseType* options_ptr;
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr>(
      in_options, builder.buffer(), &options_ptr, &serialization_context_);
  params->options.Set(options_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in WebBluetoothService.RequestDevice request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new WebBluetoothService_RequestDevice_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void WebBluetoothServiceProxy::RemoteServerConnect(
    WebBluetoothDeviceIdPtr in_device_id, const RemoteServerConnectCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteServerConnect_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::WebBluetoothDeviceIdPtr>(
      in_device_id, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kWebBluetoothService_RemoteServerConnect_Name, size);

  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteServerConnect_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->device_id)::BaseType* device_id_ptr;
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothDeviceIdPtr>(
      in_device_id, builder.buffer(), &device_id_ptr, &serialization_context_);
  params->device_id.Set(device_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in WebBluetoothService.RemoteServerConnect request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new WebBluetoothService_RemoteServerConnect_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void WebBluetoothServiceProxy::RemoteServerDisconnect(
    WebBluetoothDeviceIdPtr in_device_id) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteServerDisconnect_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::WebBluetoothDeviceIdPtr>(
      in_device_id, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWebBluetoothService_RemoteServerDisconnect_Name, size);

  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteServerDisconnect_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->device_id)::BaseType* device_id_ptr;
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothDeviceIdPtr>(
      in_device_id, builder.buffer(), &device_id_ptr, &serialization_context_);
  params->device_id.Set(device_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in WebBluetoothService.RemoteServerDisconnect request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebBluetoothServiceProxy::RemoteServerGetPrimaryServices(
    WebBluetoothDeviceIdPtr in_device_id, WebBluetoothGATTQueryQuantity in_quantity, ::device::mojom::blink::BluetoothUUIDPtr in_services_uuid, const RemoteServerGetPrimaryServicesCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::WebBluetoothDeviceIdPtr>(
      in_device_id, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::device::mojom::blink::BluetoothUUIDPtr>(
      in_services_uuid, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kWebBluetoothService_RemoteServerGetPrimaryServices_Name, size);

  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->device_id)::BaseType* device_id_ptr;
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothDeviceIdPtr>(
      in_device_id, builder.buffer(), &device_id_ptr, &serialization_context_);
  params->device_id.Set(device_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in WebBluetoothService.RemoteServerGetPrimaryServices request");
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothGATTQueryQuantity>(
      in_quantity, &params->quantity);
  typename decltype(params->services_uuid)::BaseType* services_uuid_ptr;
  mojo::internal::Serialize<::device::mojom::blink::BluetoothUUIDPtr>(
      in_services_uuid, builder.buffer(), &services_uuid_ptr, &serialization_context_);
  params->services_uuid.Set(services_uuid_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new WebBluetoothService_RemoteServerGetPrimaryServices_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void WebBluetoothServiceProxy::RemoteServiceGetCharacteristics(
    const WTF::String& in_service_instance_id, WebBluetoothGATTQueryQuantity in_quantity, ::device::mojom::blink::BluetoothUUIDPtr in_characteristics_uuid, const RemoteServiceGetCharacteristicsCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_service_instance_id, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::device::mojom::blink::BluetoothUUIDPtr>(
      in_characteristics_uuid, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kWebBluetoothService_RemoteServiceGetCharacteristics_Name, size);

  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->service_instance_id)::BaseType* service_instance_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_service_instance_id, builder.buffer(), &service_instance_id_ptr, &serialization_context_);
  params->service_instance_id.Set(service_instance_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service_instance_id in WebBluetoothService.RemoteServiceGetCharacteristics request");
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothGATTQueryQuantity>(
      in_quantity, &params->quantity);
  typename decltype(params->characteristics_uuid)::BaseType* characteristics_uuid_ptr;
  mojo::internal::Serialize<::device::mojom::blink::BluetoothUUIDPtr>(
      in_characteristics_uuid, builder.buffer(), &characteristics_uuid_ptr, &serialization_context_);
  params->characteristics_uuid.Set(characteristics_uuid_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new WebBluetoothService_RemoteServiceGetCharacteristics_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void WebBluetoothServiceProxy::RemoteCharacteristicReadValue(
    const WTF::String& in_characteristic_instance_id, const RemoteCharacteristicReadValueCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_characteristic_instance_id, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kWebBluetoothService_RemoteCharacteristicReadValue_Name, size);

  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->characteristic_instance_id)::BaseType* characteristic_instance_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_characteristic_instance_id, builder.buffer(), &characteristic_instance_id_ptr, &serialization_context_);
  params->characteristic_instance_id.Set(characteristic_instance_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_instance_id in WebBluetoothService.RemoteCharacteristicReadValue request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new WebBluetoothService_RemoteCharacteristicReadValue_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void WebBluetoothServiceProxy::RemoteCharacteristicWriteValue(
    const WTF::String& in_characteristic_instance_id, mojo::WTFArray<uint8_t> in_value, const RemoteCharacteristicWriteValueCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_characteristic_instance_id, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_value, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kWebBluetoothService_RemoteCharacteristicWriteValue_Name, size);

  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->characteristic_instance_id)::BaseType* characteristic_instance_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_characteristic_instance_id, builder.buffer(), &characteristic_instance_id_ptr, &serialization_context_);
  params->characteristic_instance_id.Set(characteristic_instance_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_instance_id in WebBluetoothService.RemoteCharacteristicWriteValue request");
  typename decltype(params->value)::BaseType* value_ptr;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_value, builder.buffer(), &value_ptr, &value_validate_params,
      &serialization_context_);
  params->value.Set(value_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in WebBluetoothService.RemoteCharacteristicWriteValue request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new WebBluetoothService_RemoteCharacteristicWriteValue_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void WebBluetoothServiceProxy::RemoteCharacteristicStartNotifications(
    const WTF::String& in_characteristic_instance_id, const RemoteCharacteristicStartNotificationsCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_characteristic_instance_id, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kWebBluetoothService_RemoteCharacteristicStartNotifications_Name, size);

  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->characteristic_instance_id)::BaseType* characteristic_instance_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_characteristic_instance_id, builder.buffer(), &characteristic_instance_id_ptr, &serialization_context_);
  params->characteristic_instance_id.Set(characteristic_instance_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_instance_id in WebBluetoothService.RemoteCharacteristicStartNotifications request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new WebBluetoothService_RemoteCharacteristicStartNotifications_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void WebBluetoothServiceProxy::RemoteCharacteristicStopNotifications(
    const WTF::String& in_characteristic_instance_id, const RemoteCharacteristicStopNotificationsCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_characteristic_instance_id, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kWebBluetoothService_RemoteCharacteristicStopNotifications_Name, size);

  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->characteristic_instance_id)::BaseType* characteristic_instance_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_characteristic_instance_id, builder.buffer(), &characteristic_instance_id_ptr, &serialization_context_);
  params->characteristic_instance_id.Set(characteristic_instance_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_instance_id in WebBluetoothService.RemoteCharacteristicStopNotifications request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new WebBluetoothService_RemoteCharacteristicStopNotifications_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class WebBluetoothService_RequestDevice_ProxyToResponder {
 public:
  static WebBluetoothService::RequestDeviceCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<WebBluetoothService_RequestDevice_ProxyToResponder> proxy(
        new WebBluetoothService_RequestDevice_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&WebBluetoothService_RequestDevice_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~WebBluetoothService_RequestDevice_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "WebBluetoothService::RequestDevice() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  WebBluetoothService_RequestDevice_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      WebBluetoothError in_error, WebBluetoothDevicePtr in_device);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RequestDevice_ProxyToResponder);
};

void WebBluetoothService_RequestDevice_ProxyToResponder::Run(
    WebBluetoothError in_error, WebBluetoothDevicePtr in_device) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RequestDevice_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::WebBluetoothDevicePtr>(
      in_device, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kWebBluetoothService_RequestDevice_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::WebBluetoothService_RequestDevice_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothError>(
      in_error, &params->error);
  typename decltype(params->device)::BaseType* device_ptr;
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothDevicePtr>(
      in_device, builder.buffer(), &device_ptr, &serialization_context_);
  params->device.Set(device_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class WebBluetoothService_RemoteServerConnect_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteServerConnectCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<WebBluetoothService_RemoteServerConnect_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteServerConnect_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&WebBluetoothService_RemoteServerConnect_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~WebBluetoothService_RemoteServerConnect_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "WebBluetoothService::RemoteServerConnect() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  WebBluetoothService_RemoteServerConnect_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      WebBluetoothError in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteServerConnect_ProxyToResponder);
};

void WebBluetoothService_RemoteServerConnect_ProxyToResponder::Run(
    WebBluetoothError in_error) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kWebBluetoothService_RemoteServerConnect_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothError>(
      in_error, &params->error);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteServerGetPrimaryServicesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "WebBluetoothService::RemoteServerGetPrimaryServices() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      WebBluetoothError in_error, mojo::WTFArray<WebBluetoothRemoteGATTServicePtr> in_services);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder);
};

void WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder::Run(
    WebBluetoothError in_error, mojo::WTFArray<WebBluetoothRemoteGATTServicePtr> in_services) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr>>(
      in_services, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kWebBluetoothService_RemoteServerGetPrimaryServices_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothError>(
      in_error, &params->error);
  typename decltype(params->services)::BaseType* services_ptr;
  const mojo::internal::ContainerValidateParams services_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr>>(
      in_services, builder.buffer(), &services_ptr, &services_validate_params,
      &serialization_context_);
  params->services.Set(services_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteServiceGetCharacteristicsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "WebBluetoothService::RemoteServiceGetCharacteristics() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      WebBluetoothError in_error, mojo::WTFArray<WebBluetoothRemoteGATTCharacteristicPtr> in_characteristics);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder);
};

void WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder::Run(
    WebBluetoothError in_error, mojo::WTFArray<WebBluetoothRemoteGATTCharacteristicPtr> in_characteristics) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr>>(
      in_characteristics, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kWebBluetoothService_RemoteServiceGetCharacteristics_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothError>(
      in_error, &params->error);
  typename decltype(params->characteristics)::BaseType* characteristics_ptr;
  const mojo::internal::ContainerValidateParams characteristics_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr>>(
      in_characteristics, builder.buffer(), &characteristics_ptr, &characteristics_validate_params,
      &serialization_context_);
  params->characteristics.Set(characteristics_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteCharacteristicReadValueCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "WebBluetoothService::RemoteCharacteristicReadValue() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      WebBluetoothError in_error, mojo::WTFArray<uint8_t> in_value);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder);
};

void WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder::Run(
    WebBluetoothError in_error, mojo::WTFArray<uint8_t> in_value) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_value, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kWebBluetoothService_RemoteCharacteristicReadValue_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothError>(
      in_error, &params->error);
  typename decltype(params->value)::BaseType* value_ptr;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_value, builder.buffer(), &value_ptr, &value_validate_params,
      &serialization_context_);
  params->value.Set(value_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteCharacteristicWriteValueCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "WebBluetoothService::RemoteCharacteristicWriteValue() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      WebBluetoothError in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder);
};

void WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder::Run(
    WebBluetoothError in_error) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kWebBluetoothService_RemoteCharacteristicWriteValue_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothError>(
      in_error, &params->error);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteCharacteristicStartNotificationsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "WebBluetoothService::RemoteCharacteristicStartNotifications() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      WebBluetoothError in_error);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder);
};

void WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder::Run(
    WebBluetoothError in_error) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kWebBluetoothService_RemoteCharacteristicStartNotifications_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothError>(
      in_error, &params->error);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}
class WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder {
 public:
  static WebBluetoothService::RemoteCharacteristicStopNotificationsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder> proxy(
        new WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "WebBluetoothService::RemoteCharacteristicStopNotifications() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      );

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder);
};

void WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder::Run(
    ) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kWebBluetoothService_RemoteCharacteristicStopNotifications_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

WebBluetoothServiceStub::WebBluetoothServiceStub()
    : sink_(nullptr),
      control_message_handler_(WebBluetoothService::Version_) {
}

WebBluetoothServiceStub::~WebBluetoothServiceStub() {}

bool WebBluetoothServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWebBluetoothService_SetClient_Name: {
      internal::WebBluetoothService_SetClient_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothService_SetClient_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WebBluetoothServiceClientAssociatedPtrInfo p_client{};
      WebBluetoothService_SetClient_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_client = input_data_view.TakeClient();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::SetClient deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebBluetoothService::SetClient");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kWebBluetoothService_RequestDevice_Name: {
      break;
    }
    case internal::kWebBluetoothService_RemoteServerConnect_Name: {
      break;
    }
    case internal::kWebBluetoothService_RemoteServerDisconnect_Name: {
      internal::WebBluetoothService_RemoteServerDisconnect_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothService_RemoteServerDisconnect_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WebBluetoothDeviceIdPtr p_device_id{};
      WebBluetoothService_RemoteServerDisconnect_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteServerDisconnect deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebBluetoothService::RemoteServerDisconnect");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoteServerDisconnect(
std::move(p_device_id));
      return true;
    }
    case internal::kWebBluetoothService_RemoteServerGetPrimaryServices_Name: {
      break;
    }
    case internal::kWebBluetoothService_RemoteServiceGetCharacteristics_Name: {
      break;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicReadValue_Name: {
      break;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicWriteValue_Name: {
      break;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStartNotifications_Name: {
      break;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStopNotifications_Name: {
      break;
    }
  }
  return false;
}

bool WebBluetoothServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWebBluetoothService_SetClient_Name: {
      break;
    }
    case internal::kWebBluetoothService_RequestDevice_Name: {
      internal::WebBluetoothService_RequestDevice_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothService_RequestDevice_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WebBluetoothRequestDeviceOptionsPtr p_options{};
      WebBluetoothService_RequestDevice_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RequestDevice deserializer");
        return false;
      }
      WebBluetoothService::RequestDeviceCallback callback =
          WebBluetoothService_RequestDevice_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebBluetoothService::RequestDevice");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RequestDevice(
std::move(p_options), callback);
      return true;
    }
    case internal::kWebBluetoothService_RemoteServerConnect_Name: {
      internal::WebBluetoothService_RemoteServerConnect_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothService_RemoteServerConnect_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WebBluetoothDeviceIdPtr p_device_id{};
      WebBluetoothService_RemoteServerConnect_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteServerConnect deserializer");
        return false;
      }
      WebBluetoothService::RemoteServerConnectCallback callback =
          WebBluetoothService_RemoteServerConnect_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebBluetoothService::RemoteServerConnect");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoteServerConnect(
std::move(p_device_id), callback);
      return true;
    }
    case internal::kWebBluetoothService_RemoteServerDisconnect_Name: {
      break;
    }
    case internal::kWebBluetoothService_RemoteServerGetPrimaryServices_Name: {
      internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WebBluetoothDeviceIdPtr p_device_id{};
      WebBluetoothGATTQueryQuantity p_quantity{};
      ::device::mojom::blink::BluetoothUUIDPtr p_services_uuid{};
      WebBluetoothService_RemoteServerGetPrimaryServices_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!input_data_view.ReadQuantity(&p_quantity))
        success = false;
      if (!input_data_view.ReadServicesUuid(&p_services_uuid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteServerGetPrimaryServices deserializer");
        return false;
      }
      WebBluetoothService::RemoteServerGetPrimaryServicesCallback callback =
          WebBluetoothService_RemoteServerGetPrimaryServices_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebBluetoothService::RemoteServerGetPrimaryServices");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoteServerGetPrimaryServices(
std::move(p_device_id), 
std::move(p_quantity), 
std::move(p_services_uuid), callback);
      return true;
    }
    case internal::kWebBluetoothService_RemoteServiceGetCharacteristics_Name: {
      internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WTF::String p_service_instance_id{};
      WebBluetoothGATTQueryQuantity p_quantity{};
      ::device::mojom::blink::BluetoothUUIDPtr p_characteristics_uuid{};
      WebBluetoothService_RemoteServiceGetCharacteristics_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadServiceInstanceId(&p_service_instance_id))
        success = false;
      if (!input_data_view.ReadQuantity(&p_quantity))
        success = false;
      if (!input_data_view.ReadCharacteristicsUuid(&p_characteristics_uuid))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteServiceGetCharacteristics deserializer");
        return false;
      }
      WebBluetoothService::RemoteServiceGetCharacteristicsCallback callback =
          WebBluetoothService_RemoteServiceGetCharacteristics_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebBluetoothService::RemoteServiceGetCharacteristics");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoteServiceGetCharacteristics(
std::move(p_service_instance_id), 
std::move(p_quantity), 
std::move(p_characteristics_uuid), callback);
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicReadValue_Name: {
      internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WTF::String p_characteristic_instance_id{};
      WebBluetoothService_RemoteCharacteristicReadValue_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadCharacteristicInstanceId(&p_characteristic_instance_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteCharacteristicReadValue deserializer");
        return false;
      }
      WebBluetoothService::RemoteCharacteristicReadValueCallback callback =
          WebBluetoothService_RemoteCharacteristicReadValue_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebBluetoothService::RemoteCharacteristicReadValue");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoteCharacteristicReadValue(
std::move(p_characteristic_instance_id), callback);
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicWriteValue_Name: {
      internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WTF::String p_characteristic_instance_id{};
      mojo::WTFArray<uint8_t> p_value{};
      WebBluetoothService_RemoteCharacteristicWriteValue_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadCharacteristicInstanceId(&p_characteristic_instance_id))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteCharacteristicWriteValue deserializer");
        return false;
      }
      WebBluetoothService::RemoteCharacteristicWriteValueCallback callback =
          WebBluetoothService_RemoteCharacteristicWriteValue_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebBluetoothService::RemoteCharacteristicWriteValue");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoteCharacteristicWriteValue(
std::move(p_characteristic_instance_id), 
std::move(p_value), callback);
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStartNotifications_Name: {
      internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WTF::String p_characteristic_instance_id{};
      WebBluetoothService_RemoteCharacteristicStartNotifications_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadCharacteristicInstanceId(&p_characteristic_instance_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteCharacteristicStartNotifications deserializer");
        return false;
      }
      WebBluetoothService::RemoteCharacteristicStartNotificationsCallback callback =
          WebBluetoothService_RemoteCharacteristicStartNotifications_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebBluetoothService::RemoteCharacteristicStartNotifications");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoteCharacteristicStartNotifications(
std::move(p_characteristic_instance_id), callback);
      return true;
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStopNotifications_Name: {
      internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WTF::String p_characteristic_instance_id{};
      WebBluetoothService_RemoteCharacteristicStopNotifications_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadCharacteristicInstanceId(&p_characteristic_instance_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothService::RemoteCharacteristicStopNotifications deserializer");
        return false;
      }
      WebBluetoothService::RemoteCharacteristicStopNotificationsCallback callback =
          WebBluetoothService_RemoteCharacteristicStopNotifications_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebBluetoothService::RemoteCharacteristicStopNotifications");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoteCharacteristicStopNotifications(
std::move(p_characteristic_instance_id), callback);
      return true;
    }
  }
  return false;
}

WebBluetoothServiceRequestValidator::WebBluetoothServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WebBluetoothServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WebBluetoothService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWebBluetoothService_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RequestDevice_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RequestDevice_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteServerConnect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServerConnect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteServerDisconnect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServerDisconnect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteServerGetPrimaryServices_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServerGetPrimaryServices_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteServiceGetCharacteristics_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServiceGetCharacteristics_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteCharacteristicReadValue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicReadValue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteCharacteristicWriteValue_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicWriteValue_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStartNotifications_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicStartNotifications_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStopNotifications_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicStopNotifications_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

WebBluetoothServiceResponseValidator::WebBluetoothServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WebBluetoothServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WebBluetoothService ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kWebBluetoothService_RequestDevice_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RequestDevice_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteServerConnect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServerConnect_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteServerGetPrimaryServices_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServerGetPrimaryServices_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteServiceGetCharacteristics_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteServiceGetCharacteristics_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteCharacteristicReadValue_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicReadValue_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteCharacteristicWriteValue_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicWriteValue_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStartNotifications_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicStartNotifications_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothService_RemoteCharacteristicStopNotifications_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothService_RemoteCharacteristicStopNotifications_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}
const char WebBluetoothServiceClient::Name_[] = "blink::mojom::WebBluetoothServiceClient";
const uint32_t WebBluetoothServiceClient::Version_;

WebBluetoothServiceClientProxy::WebBluetoothServiceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void WebBluetoothServiceClientProxy::RemoteCharacteristicValueChanged(
    const WTF::String& in_characteristic_instance_id, mojo::WTFArray<uint8_t> in_value) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_characteristic_instance_id, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
      in_value, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWebBluetoothServiceClient_RemoteCharacteristicValueChanged_Name, size);

  auto params =
      ::blink::mojom::internal::WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->characteristic_instance_id)::BaseType* characteristic_instance_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_characteristic_instance_id, builder.buffer(), &characteristic_instance_id_ptr, &serialization_context_);
  params->characteristic_instance_id.Set(characteristic_instance_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->characteristic_instance_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null characteristic_instance_id in WebBluetoothServiceClient.RemoteCharacteristicValueChanged request");
  typename decltype(params->value)::BaseType* value_ptr;
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<uint8_t>>(
      in_value, builder.buffer(), &value_ptr, &value_validate_params,
      &serialization_context_);
  params->value.Set(value_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->value.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null value in WebBluetoothServiceClient.RemoteCharacteristicValueChanged request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void WebBluetoothServiceClientProxy::GattServerDisconnected(
    WebBluetoothDeviceIdPtr in_device_id) {
  size_t size = sizeof(::blink::mojom::internal::WebBluetoothServiceClient_GattServerDisconnected_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::WebBluetoothDeviceIdPtr>(
      in_device_id, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kWebBluetoothServiceClient_GattServerDisconnected_Name, size);

  auto params =
      ::blink::mojom::internal::WebBluetoothServiceClient_GattServerDisconnected_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->device_id)::BaseType* device_id_ptr;
  mojo::internal::Serialize<::blink::mojom::blink::WebBluetoothDeviceIdPtr>(
      in_device_id, builder.buffer(), &device_id_ptr, &serialization_context_);
  params->device_id.Set(device_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_id in WebBluetoothServiceClient.GattServerDisconnected request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

WebBluetoothServiceClientStub::WebBluetoothServiceClientStub()
    : sink_(nullptr),
      control_message_handler_(WebBluetoothServiceClient::Version_) {
}

WebBluetoothServiceClientStub::~WebBluetoothServiceClientStub() {}

bool WebBluetoothServiceClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kWebBluetoothServiceClient_RemoteCharacteristicValueChanged_Name: {
      internal::WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WTF::String p_characteristic_instance_id{};
      mojo::WTFArray<uint8_t> p_value{};
      WebBluetoothServiceClient_RemoteCharacteristicValueChanged_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadCharacteristicInstanceId(&p_characteristic_instance_id))
        success = false;
      if (!input_data_view.ReadValue(&p_value))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothServiceClient::RemoteCharacteristicValueChanged deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebBluetoothServiceClient::RemoteCharacteristicValueChanged");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RemoteCharacteristicValueChanged(
std::move(p_characteristic_instance_id), 
std::move(p_value));
      return true;
    }
    case internal::kWebBluetoothServiceClient_GattServerDisconnected_Name: {
      internal::WebBluetoothServiceClient_GattServerDisconnected_Params_Data* params =
          reinterpret_cast<internal::WebBluetoothServiceClient_GattServerDisconnected_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WebBluetoothDeviceIdPtr p_device_id{};
      WebBluetoothServiceClient_GattServerDisconnected_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDeviceId(&p_device_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "WebBluetoothServiceClient::GattServerDisconnected deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "WebBluetoothServiceClient::GattServerDisconnected");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GattServerDisconnected(
std::move(p_device_id));
      return true;
    }
  }
  return false;
}

bool WebBluetoothServiceClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kWebBluetoothServiceClient_RemoteCharacteristicValueChanged_Name: {
      break;
    }
    case internal::kWebBluetoothServiceClient_GattServerDisconnected_Name: {
      break;
    }
  }
  return false;
}

WebBluetoothServiceClientRequestValidator::WebBluetoothServiceClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool WebBluetoothServiceClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "WebBluetoothServiceClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kWebBluetoothServiceClient_RemoteCharacteristicValueChanged_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothServiceClient_RemoteCharacteristicValueChanged_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kWebBluetoothServiceClient_GattServerDisconnected_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::WebBluetoothServiceClient_GattServerDisconnected_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothScanFilter, ::blink::mojom::blink::WebBluetoothScanFilterPtr>::Read(
    ::blink::mojom::blink::WebBluetoothScanFilterDataView input,
    ::blink::mojom::blink::WebBluetoothScanFilterPtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothScanFilterPtr result(::blink::mojom::blink::WebBluetoothScanFilter::New());
  
      if (!input.ReadServices(&result->services))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadNamePrefix(&result->name_prefix))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothRequestDeviceOptions, ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr>::Read(
    ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsDataView input,
    ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothRequestDeviceOptionsPtr result(::blink::mojom::blink::WebBluetoothRequestDeviceOptions::New());
  
      if (!input.ReadFilters(&result->filters))
        success = false;
      if (!input.ReadOptionalServices(&result->optional_services))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothDeviceId, ::blink::mojom::blink::WebBluetoothDeviceIdPtr>::Read(
    ::blink::mojom::blink::WebBluetoothDeviceIdDataView input,
    ::blink::mojom::blink::WebBluetoothDeviceIdPtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothDeviceIdPtr result(::blink::mojom::blink::WebBluetoothDeviceId::New());
  
      if (!input.ReadDeviceId(&result->device_id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothDevice, ::blink::mojom::blink::WebBluetoothDevicePtr>::Read(
    ::blink::mojom::blink::WebBluetoothDeviceDataView input,
    ::blink::mojom::blink::WebBluetoothDevicePtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothDevicePtr result(::blink::mojom::blink::WebBluetoothDevice::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadUuids(&result->uuids))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothRemoteGATTService, ::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr>::Read(
    ::blink::mojom::blink::WebBluetoothRemoteGATTServiceDataView input,
    ::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothRemoteGATTServicePtr result(::blink::mojom::blink::WebBluetoothRemoteGATTService::New());
  
      if (!input.ReadInstanceId(&result->instance_id))
        success = false;
      if (!input.ReadUuid(&result->uuid))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristic, ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr>::Read(
    ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicDataView input,
    ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr* output) {
  bool success = true;
  ::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristicPtr result(::blink::mojom::blink::WebBluetoothRemoteGATTCharacteristic::New());
  
      if (!input.ReadInstanceId(&result->instance_id))
        success = false;
      if (!input.ReadUuid(&result->uuid))
        success = false;
      result->properties = input.properties();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif