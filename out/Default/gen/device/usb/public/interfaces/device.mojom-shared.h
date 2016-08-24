// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_INTERFACES_DEVICE_MOJOM_SHARED_H_
#define DEVICE_USB_PUBLIC_INTERFACES_DEVICE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "device/usb/public/interfaces/device.mojom-shared-internal.h"
namespace device {
namespace usb {

enum class OpenDeviceError : int32_t {
  OK,
  ACCESS_DENIED,
  ALREADY_OPEN,
};

inline std::ostream& operator<<(std::ostream& os, OpenDeviceError value) {
  switch(value) {
    case OpenDeviceError::OK:
      return os << "OpenDeviceError::OK";
    case OpenDeviceError::ACCESS_DENIED:
      return os << "OpenDeviceError::ACCESS_DENIED";
    case OpenDeviceError::ALREADY_OPEN:
      return os << "OpenDeviceError::ALREADY_OPEN";
    default:
      return os << "Unknown OpenDeviceError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(OpenDeviceError value) {
  return internal::OpenDeviceError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TransferDirection : int32_t {
  INBOUND,
  OUTBOUND,
};

inline std::ostream& operator<<(std::ostream& os, TransferDirection value) {
  switch(value) {
    case TransferDirection::INBOUND:
      return os << "TransferDirection::INBOUND";
    case TransferDirection::OUTBOUND:
      return os << "TransferDirection::OUTBOUND";
    default:
      return os << "Unknown TransferDirection value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TransferDirection value) {
  return internal::TransferDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ControlTransferType : int32_t {
  STANDARD,
  CLASS,
  VENDOR,
  RESERVED,
};

inline std::ostream& operator<<(std::ostream& os, ControlTransferType value) {
  switch(value) {
    case ControlTransferType::STANDARD:
      return os << "ControlTransferType::STANDARD";
    case ControlTransferType::CLASS:
      return os << "ControlTransferType::CLASS";
    case ControlTransferType::VENDOR:
      return os << "ControlTransferType::VENDOR";
    case ControlTransferType::RESERVED:
      return os << "ControlTransferType::RESERVED";
    default:
      return os << "Unknown ControlTransferType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ControlTransferType value) {
  return internal::ControlTransferType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ControlTransferRecipient : int32_t {
  DEVICE,
  INTERFACE,
  ENDPOINT,
  OTHER,
};

inline std::ostream& operator<<(std::ostream& os, ControlTransferRecipient value) {
  switch(value) {
    case ControlTransferRecipient::DEVICE:
      return os << "ControlTransferRecipient::DEVICE";
    case ControlTransferRecipient::INTERFACE:
      return os << "ControlTransferRecipient::INTERFACE";
    case ControlTransferRecipient::ENDPOINT:
      return os << "ControlTransferRecipient::ENDPOINT";
    case ControlTransferRecipient::OTHER:
      return os << "ControlTransferRecipient::OTHER";
    default:
      return os << "Unknown ControlTransferRecipient value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ControlTransferRecipient value) {
  return internal::ControlTransferRecipient_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class EndpointType : int32_t {
  BULK,
  INTERRUPT,
  ISOCHRONOUS,
};

inline std::ostream& operator<<(std::ostream& os, EndpointType value) {
  switch(value) {
    case EndpointType::BULK:
      return os << "EndpointType::BULK";
    case EndpointType::INTERRUPT:
      return os << "EndpointType::INTERRUPT";
    case EndpointType::ISOCHRONOUS:
      return os << "EndpointType::ISOCHRONOUS";
    default:
      return os << "Unknown EndpointType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(EndpointType value) {
  return internal::EndpointType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TransferStatus : int32_t {
  COMPLETED,
  TRANSFER_ERROR,
  PERMISSION_DENIED,
  TIMEOUT,
  CANCELLED,
  STALLED,
  DISCONNECT,
  BABBLE,
  SHORT_PACKET,
};

inline std::ostream& operator<<(std::ostream& os, TransferStatus value) {
  switch(value) {
    case TransferStatus::COMPLETED:
      return os << "TransferStatus::COMPLETED";
    case TransferStatus::TRANSFER_ERROR:
      return os << "TransferStatus::TRANSFER_ERROR";
    case TransferStatus::PERMISSION_DENIED:
      return os << "TransferStatus::PERMISSION_DENIED";
    case TransferStatus::TIMEOUT:
      return os << "TransferStatus::TIMEOUT";
    case TransferStatus::CANCELLED:
      return os << "TransferStatus::CANCELLED";
    case TransferStatus::STALLED:
      return os << "TransferStatus::STALLED";
    case TransferStatus::DISCONNECT:
      return os << "TransferStatus::DISCONNECT";
    case TransferStatus::BABBLE:
      return os << "TransferStatus::BABBLE";
    case TransferStatus::SHORT_PACKET:
      return os << "TransferStatus::SHORT_PACKET";
    default:
      return os << "Unknown TransferStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TransferStatus value) {
  return internal::TransferStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace usb
}  // namespace device

namespace std {

template <>
struct hash<::device::usb::OpenDeviceError>
    : public mojo::internal::EnumHashImpl<::device::usb::OpenDeviceError> {};

template <>
struct hash<::device::usb::TransferDirection>
    : public mojo::internal::EnumHashImpl<::device::usb::TransferDirection> {};

template <>
struct hash<::device::usb::ControlTransferType>
    : public mojo::internal::EnumHashImpl<::device::usb::ControlTransferType> {};

template <>
struct hash<::device::usb::ControlTransferRecipient>
    : public mojo::internal::EnumHashImpl<::device::usb::ControlTransferRecipient> {};

template <>
struct hash<::device::usb::EndpointType>
    : public mojo::internal::EnumHashImpl<::device::usb::EndpointType> {};

template <>
struct hash<::device::usb::TransferStatus>
    : public mojo::internal::EnumHashImpl<::device::usb::TransferStatus> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::usb::OpenDeviceError, ::device::usb::OpenDeviceError> {
  static ::device::usb::OpenDeviceError ToMojom(::device::usb::OpenDeviceError input) { return input; }
  static bool FromMojom(::device::usb::OpenDeviceError input, ::device::usb::OpenDeviceError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::OpenDeviceError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::usb::OpenDeviceError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::usb::OpenDeviceError>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::usb::TransferDirection, ::device::usb::TransferDirection> {
  static ::device::usb::TransferDirection ToMojom(::device::usb::TransferDirection input) { return input; }
  static bool FromMojom(::device::usb::TransferDirection input, ::device::usb::TransferDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::TransferDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::usb::TransferDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::usb::TransferDirection>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::usb::ControlTransferType, ::device::usb::ControlTransferType> {
  static ::device::usb::ControlTransferType ToMojom(::device::usb::ControlTransferType input) { return input; }
  static bool FromMojom(::device::usb::ControlTransferType input, ::device::usb::ControlTransferType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::ControlTransferType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::usb::ControlTransferType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::usb::ControlTransferType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::usb::ControlTransferRecipient, ::device::usb::ControlTransferRecipient> {
  static ::device::usb::ControlTransferRecipient ToMojom(::device::usb::ControlTransferRecipient input) { return input; }
  static bool FromMojom(::device::usb::ControlTransferRecipient input, ::device::usb::ControlTransferRecipient* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::ControlTransferRecipient, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::usb::ControlTransferRecipient, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::usb::ControlTransferRecipient>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::usb::EndpointType, ::device::usb::EndpointType> {
  static ::device::usb::EndpointType ToMojom(::device::usb::EndpointType input) { return input; }
  static bool FromMojom(::device::usb::EndpointType input, ::device::usb::EndpointType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::EndpointType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::usb::EndpointType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::usb::EndpointType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::usb::TransferStatus, ::device::usb::TransferStatus> {
  static ::device::usb::TransferStatus ToMojom(::device::usb::TransferStatus input) { return input; }
  static bool FromMojom(::device::usb::TransferStatus input, ::device::usb::TransferStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::TransferStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::usb::TransferStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::usb::TransferStatus>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // DEVICE_USB_PUBLIC_INTERFACES_DEVICE_MOJOM_SHARED_H_
