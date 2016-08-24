// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "third_party/WebKit/public/platform/modules/bluetooth/web_bluetooth.mojom-shared-internal.h"
#include "device/bluetooth/public/interfaces/bluetooth_uuid.mojom-shared.h"
namespace blink {
namespace mojom {

enum class WebBluetoothError : int32_t {
  SUCCESS,
  GATT_INVALID_ATTRIBUTE_LENGTH,
  SERVICE_NO_LONGER_EXISTS,
  CHARACTERISTIC_NO_LONGER_EXISTS,
  CONNECT_ALREADY_IN_PROGRESS,
  CONNECT_ATTRIBUTE_LENGTH_INVALID,
  CONNECT_AUTH_CANCELED,
  CONNECT_AUTH_FAILED,
  CONNECT_AUTH_REJECTED,
  CONNECT_AUTH_TIMEOUT,
  CONNECT_CONNECTION_CONGESTED,
  CONNECT_INSUFFICIENT_ENCRYPTION,
  CONNECT_OFFSET_INVALID,
  CONNECT_READ_NOT_PERMITTED,
  CONNECT_REQUEST_NOT_SUPPORTED,
  CONNECT_UNKNOWN_ERROR,
  CONNECT_UNKNOWN_FAILURE,
  CONNECT_UNSUPPORTED_DEVICE,
  CONNECT_WRITE_NOT_PERMITTED,
  DEVICE_NO_LONGER_IN_RANGE,
  GATT_NOT_PAIRED,
  GATT_OPERATION_IN_PROGRESS,
  UNTRANSLATED_CONNECT_ERROR_CODE,
  NO_BLUETOOTH_ADAPTER,
  CHOSEN_DEVICE_VANISHED,
  CHOOSER_CANCELLED,
  CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED,
  CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED,
  CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN,
  SERVICE_NOT_FOUND,
  NO_SERVICES_FOUND,
  CHARACTERISTIC_NOT_FOUND,
  NO_CHARACTERISTICS_FOUND,
  WEB_BLUETOOTH_NOT_SUPPORTED,
  GATT_UNKNOWN_ERROR,
  GATT_UNKNOWN_FAILURE,
  GATT_NOT_PERMITTED,
  GATT_NOT_SUPPORTED,
  GATT_UNTRANSLATED_ERROR_CODE,
  GATT_NOT_AUTHORIZED,
  BLACKLISTED_CHARACTERISTIC_UUID,
  BLACKLISTED_READ,
  BLACKLISTED_WRITE,
  NOT_ALLOWED_TO_ACCESS_SERVICE,
  REQUEST_DEVICE_WITH_BLACKLISTED_UUID,
  REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME,
  REQUEST_DEVICE_WITHOUT_FRAME,
  ENUM_MAX_VALUE = WebBluetoothError::REQUEST_DEVICE_WITHOUT_FRAME,
};

inline std::ostream& operator<<(std::ostream& os, WebBluetoothError value) {
  switch(value) {
    case WebBluetoothError::SUCCESS:
      return os << "WebBluetoothError::SUCCESS";
    case WebBluetoothError::GATT_INVALID_ATTRIBUTE_LENGTH:
      return os << "WebBluetoothError::GATT_INVALID_ATTRIBUTE_LENGTH";
    case WebBluetoothError::SERVICE_NO_LONGER_EXISTS:
      return os << "WebBluetoothError::SERVICE_NO_LONGER_EXISTS";
    case WebBluetoothError::CHARACTERISTIC_NO_LONGER_EXISTS:
      return os << "WebBluetoothError::CHARACTERISTIC_NO_LONGER_EXISTS";
    case WebBluetoothError::CONNECT_ALREADY_IN_PROGRESS:
      return os << "WebBluetoothError::CONNECT_ALREADY_IN_PROGRESS";
    case WebBluetoothError::CONNECT_ATTRIBUTE_LENGTH_INVALID:
      return os << "WebBluetoothError::CONNECT_ATTRIBUTE_LENGTH_INVALID";
    case WebBluetoothError::CONNECT_AUTH_CANCELED:
      return os << "WebBluetoothError::CONNECT_AUTH_CANCELED";
    case WebBluetoothError::CONNECT_AUTH_FAILED:
      return os << "WebBluetoothError::CONNECT_AUTH_FAILED";
    case WebBluetoothError::CONNECT_AUTH_REJECTED:
      return os << "WebBluetoothError::CONNECT_AUTH_REJECTED";
    case WebBluetoothError::CONNECT_AUTH_TIMEOUT:
      return os << "WebBluetoothError::CONNECT_AUTH_TIMEOUT";
    case WebBluetoothError::CONNECT_CONNECTION_CONGESTED:
      return os << "WebBluetoothError::CONNECT_CONNECTION_CONGESTED";
    case WebBluetoothError::CONNECT_INSUFFICIENT_ENCRYPTION:
      return os << "WebBluetoothError::CONNECT_INSUFFICIENT_ENCRYPTION";
    case WebBluetoothError::CONNECT_OFFSET_INVALID:
      return os << "WebBluetoothError::CONNECT_OFFSET_INVALID";
    case WebBluetoothError::CONNECT_READ_NOT_PERMITTED:
      return os << "WebBluetoothError::CONNECT_READ_NOT_PERMITTED";
    case WebBluetoothError::CONNECT_REQUEST_NOT_SUPPORTED:
      return os << "WebBluetoothError::CONNECT_REQUEST_NOT_SUPPORTED";
    case WebBluetoothError::CONNECT_UNKNOWN_ERROR:
      return os << "WebBluetoothError::CONNECT_UNKNOWN_ERROR";
    case WebBluetoothError::CONNECT_UNKNOWN_FAILURE:
      return os << "WebBluetoothError::CONNECT_UNKNOWN_FAILURE";
    case WebBluetoothError::CONNECT_UNSUPPORTED_DEVICE:
      return os << "WebBluetoothError::CONNECT_UNSUPPORTED_DEVICE";
    case WebBluetoothError::CONNECT_WRITE_NOT_PERMITTED:
      return os << "WebBluetoothError::CONNECT_WRITE_NOT_PERMITTED";
    case WebBluetoothError::DEVICE_NO_LONGER_IN_RANGE:
      return os << "WebBluetoothError::DEVICE_NO_LONGER_IN_RANGE";
    case WebBluetoothError::GATT_NOT_PAIRED:
      return os << "WebBluetoothError::GATT_NOT_PAIRED";
    case WebBluetoothError::GATT_OPERATION_IN_PROGRESS:
      return os << "WebBluetoothError::GATT_OPERATION_IN_PROGRESS";
    case WebBluetoothError::UNTRANSLATED_CONNECT_ERROR_CODE:
      return os << "WebBluetoothError::UNTRANSLATED_CONNECT_ERROR_CODE";
    case WebBluetoothError::NO_BLUETOOTH_ADAPTER:
      return os << "WebBluetoothError::NO_BLUETOOTH_ADAPTER";
    case WebBluetoothError::CHOSEN_DEVICE_VANISHED:
      return os << "WebBluetoothError::CHOSEN_DEVICE_VANISHED";
    case WebBluetoothError::CHOOSER_CANCELLED:
      return os << "WebBluetoothError::CHOOSER_CANCELLED";
    case WebBluetoothError::CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED:
      return os << "WebBluetoothError::CHOOSER_NOT_SHOWN_API_GLOBALLY_DISABLED";
    case WebBluetoothError::CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED:
      return os << "WebBluetoothError::CHOOSER_NOT_SHOWN_API_LOCALLY_DISABLED";
    case WebBluetoothError::CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN:
      return os << "WebBluetoothError::CHOOSER_NOT_SHOWN_USER_DENIED_PERMISSION_TO_SCAN";
    case WebBluetoothError::SERVICE_NOT_FOUND:
      return os << "WebBluetoothError::SERVICE_NOT_FOUND";
    case WebBluetoothError::NO_SERVICES_FOUND:
      return os << "WebBluetoothError::NO_SERVICES_FOUND";
    case WebBluetoothError::CHARACTERISTIC_NOT_FOUND:
      return os << "WebBluetoothError::CHARACTERISTIC_NOT_FOUND";
    case WebBluetoothError::NO_CHARACTERISTICS_FOUND:
      return os << "WebBluetoothError::NO_CHARACTERISTICS_FOUND";
    case WebBluetoothError::WEB_BLUETOOTH_NOT_SUPPORTED:
      return os << "WebBluetoothError::WEB_BLUETOOTH_NOT_SUPPORTED";
    case WebBluetoothError::GATT_UNKNOWN_ERROR:
      return os << "WebBluetoothError::GATT_UNKNOWN_ERROR";
    case WebBluetoothError::GATT_UNKNOWN_FAILURE:
      return os << "WebBluetoothError::GATT_UNKNOWN_FAILURE";
    case WebBluetoothError::GATT_NOT_PERMITTED:
      return os << "WebBluetoothError::GATT_NOT_PERMITTED";
    case WebBluetoothError::GATT_NOT_SUPPORTED:
      return os << "WebBluetoothError::GATT_NOT_SUPPORTED";
    case WebBluetoothError::GATT_UNTRANSLATED_ERROR_CODE:
      return os << "WebBluetoothError::GATT_UNTRANSLATED_ERROR_CODE";
    case WebBluetoothError::GATT_NOT_AUTHORIZED:
      return os << "WebBluetoothError::GATT_NOT_AUTHORIZED";
    case WebBluetoothError::BLACKLISTED_CHARACTERISTIC_UUID:
      return os << "WebBluetoothError::BLACKLISTED_CHARACTERISTIC_UUID";
    case WebBluetoothError::BLACKLISTED_READ:
      return os << "WebBluetoothError::BLACKLISTED_READ";
    case WebBluetoothError::BLACKLISTED_WRITE:
      return os << "WebBluetoothError::BLACKLISTED_WRITE";
    case WebBluetoothError::NOT_ALLOWED_TO_ACCESS_SERVICE:
      return os << "WebBluetoothError::NOT_ALLOWED_TO_ACCESS_SERVICE";
    case WebBluetoothError::REQUEST_DEVICE_WITH_BLACKLISTED_UUID:
      return os << "WebBluetoothError::REQUEST_DEVICE_WITH_BLACKLISTED_UUID";
    case WebBluetoothError::REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME:
      return os << "WebBluetoothError::REQUEST_DEVICE_FROM_CROSS_ORIGIN_IFRAME";
    case WebBluetoothError::REQUEST_DEVICE_WITHOUT_FRAME:
      return os << "WebBluetoothError::{REQUEST_DEVICE_WITHOUT_FRAME, ENUM_MAX_VALUE}";
    default:
      return os << "Unknown WebBluetoothError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WebBluetoothError value) {
  return internal::WebBluetoothError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class WebBluetoothGATTQueryQuantity : int32_t {
  SINGLE,
  MULTIPLE,
};

inline std::ostream& operator<<(std::ostream& os, WebBluetoothGATTQueryQuantity value) {
  switch(value) {
    case WebBluetoothGATTQueryQuantity::SINGLE:
      return os << "WebBluetoothGATTQueryQuantity::SINGLE";
    case WebBluetoothGATTQueryQuantity::MULTIPLE:
      return os << "WebBluetoothGATTQueryQuantity::MULTIPLE";
    default:
      return os << "Unknown WebBluetoothGATTQueryQuantity value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(WebBluetoothGATTQueryQuantity value) {
  return internal::WebBluetoothGATTQueryQuantity_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::WebBluetoothError>
    : public mojo::internal::EnumHashImpl<::blink::mojom::WebBluetoothError> {};

template <>
struct hash<::blink::mojom::WebBluetoothGATTQueryQuantity>
    : public mojo::internal::EnumHashImpl<::blink::mojom::WebBluetoothGATTQueryQuantity> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::WebBluetoothError, ::blink::mojom::WebBluetoothError> {
  static ::blink::mojom::WebBluetoothError ToMojom(::blink::mojom::WebBluetoothError input) { return input; }
  static bool FromMojom(::blink::mojom::WebBluetoothError input, ::blink::mojom::WebBluetoothError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::WebBluetoothError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::WebBluetoothError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::WebBluetoothGATTQueryQuantity, ::blink::mojom::WebBluetoothGATTQueryQuantity> {
  static ::blink::mojom::WebBluetoothGATTQueryQuantity ToMojom(::blink::mojom::WebBluetoothGATTQueryQuantity input) { return input; }
  static bool FromMojom(::blink::mojom::WebBluetoothGATTQueryQuantity input, ::blink::mojom::WebBluetoothGATTQueryQuantity* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::WebBluetoothGATTQueryQuantity, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::WebBluetoothGATTQueryQuantity, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::WebBluetoothGATTQueryQuantity>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_BLUETOOTH_WEB_BLUETOOTH_MOJOM_SHARED_H_
