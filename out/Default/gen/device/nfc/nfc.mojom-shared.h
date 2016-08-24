// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_NFC_NFC_MOJOM_SHARED_H_
#define DEVICE_NFC_NFC_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "device/nfc/nfc.mojom-shared-internal.h"
namespace device {
namespace nfc {

enum class NFCErrorType : int32_t {
  SECURITY,
  NOT_SUPPORTED,
  DEVICE_DISABLED,
  NOT_FOUND,
  INVALID_MESSAGE,
  OPERATION_CANCELLED,
  TIMER_EXPIRED,
  CANNOT_CANCEL,
  IO_ERROR,
};

inline std::ostream& operator<<(std::ostream& os, NFCErrorType value) {
  switch(value) {
    case NFCErrorType::SECURITY:
      return os << "NFCErrorType::SECURITY";
    case NFCErrorType::NOT_SUPPORTED:
      return os << "NFCErrorType::NOT_SUPPORTED";
    case NFCErrorType::DEVICE_DISABLED:
      return os << "NFCErrorType::DEVICE_DISABLED";
    case NFCErrorType::NOT_FOUND:
      return os << "NFCErrorType::NOT_FOUND";
    case NFCErrorType::INVALID_MESSAGE:
      return os << "NFCErrorType::INVALID_MESSAGE";
    case NFCErrorType::OPERATION_CANCELLED:
      return os << "NFCErrorType::OPERATION_CANCELLED";
    case NFCErrorType::TIMER_EXPIRED:
      return os << "NFCErrorType::TIMER_EXPIRED";
    case NFCErrorType::CANNOT_CANCEL:
      return os << "NFCErrorType::CANNOT_CANCEL";
    case NFCErrorType::IO_ERROR:
      return os << "NFCErrorType::IO_ERROR";
    default:
      return os << "Unknown NFCErrorType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(NFCErrorType value) {
  return internal::NFCErrorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class NFCRecordType : int32_t {
  EMPTY,
  TEXT,
  URL,
  JSON,
  OPAQUE_RECORD,
};

inline std::ostream& operator<<(std::ostream& os, NFCRecordType value) {
  switch(value) {
    case NFCRecordType::EMPTY:
      return os << "NFCRecordType::EMPTY";
    case NFCRecordType::TEXT:
      return os << "NFCRecordType::TEXT";
    case NFCRecordType::URL:
      return os << "NFCRecordType::URL";
    case NFCRecordType::JSON:
      return os << "NFCRecordType::JSON";
    case NFCRecordType::OPAQUE_RECORD:
      return os << "NFCRecordType::OPAQUE_RECORD";
    default:
      return os << "Unknown NFCRecordType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(NFCRecordType value) {
  return internal::NFCRecordType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class NFCPushTarget : int32_t {
  TAG,
  PEER,
  ANY,
};

inline std::ostream& operator<<(std::ostream& os, NFCPushTarget value) {
  switch(value) {
    case NFCPushTarget::TAG:
      return os << "NFCPushTarget::TAG";
    case NFCPushTarget::PEER:
      return os << "NFCPushTarget::PEER";
    case NFCPushTarget::ANY:
      return os << "NFCPushTarget::ANY";
    default:
      return os << "Unknown NFCPushTarget value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(NFCPushTarget value) {
  return internal::NFCPushTarget_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class NFCWatchMode : int32_t {
  WEBNFC_ONLY,
  ANY,
};

inline std::ostream& operator<<(std::ostream& os, NFCWatchMode value) {
  switch(value) {
    case NFCWatchMode::WEBNFC_ONLY:
      return os << "NFCWatchMode::WEBNFC_ONLY";
    case NFCWatchMode::ANY:
      return os << "NFCWatchMode::ANY";
    default:
      return os << "Unknown NFCWatchMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(NFCWatchMode value) {
  return internal::NFCWatchMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace nfc
}  // namespace device

namespace std {

template <>
struct hash<::device::nfc::NFCErrorType>
    : public mojo::internal::EnumHashImpl<::device::nfc::NFCErrorType> {};

template <>
struct hash<::device::nfc::NFCRecordType>
    : public mojo::internal::EnumHashImpl<::device::nfc::NFCRecordType> {};

template <>
struct hash<::device::nfc::NFCPushTarget>
    : public mojo::internal::EnumHashImpl<::device::nfc::NFCPushTarget> {};

template <>
struct hash<::device::nfc::NFCWatchMode>
    : public mojo::internal::EnumHashImpl<::device::nfc::NFCWatchMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::nfc::NFCErrorType, ::device::nfc::NFCErrorType> {
  static ::device::nfc::NFCErrorType ToMojom(::device::nfc::NFCErrorType input) { return input; }
  static bool FromMojom(::device::nfc::NFCErrorType input, ::device::nfc::NFCErrorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::nfc::NFCErrorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::nfc::NFCErrorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::nfc::NFCErrorType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::nfc::NFCRecordType, ::device::nfc::NFCRecordType> {
  static ::device::nfc::NFCRecordType ToMojom(::device::nfc::NFCRecordType input) { return input; }
  static bool FromMojom(::device::nfc::NFCRecordType input, ::device::nfc::NFCRecordType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::nfc::NFCRecordType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::nfc::NFCRecordType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::nfc::NFCRecordType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::nfc::NFCPushTarget, ::device::nfc::NFCPushTarget> {
  static ::device::nfc::NFCPushTarget ToMojom(::device::nfc::NFCPushTarget input) { return input; }
  static bool FromMojom(::device::nfc::NFCPushTarget input, ::device::nfc::NFCPushTarget* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::nfc::NFCPushTarget, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::nfc::NFCPushTarget, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::nfc::NFCPushTarget>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::device::nfc::NFCWatchMode, ::device::nfc::NFCWatchMode> {
  static ::device::nfc::NFCWatchMode ToMojom(::device::nfc::NFCWatchMode input) { return input; }
  static bool FromMojom(::device::nfc::NFCWatchMode input, ::device::nfc::NFCWatchMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::nfc::NFCWatchMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::nfc::NFCWatchMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::nfc::NFCWatchMode>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // DEVICE_NFC_NFC_MOJOM_SHARED_H_
