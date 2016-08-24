// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "third_party/WebKit/public/platform/modules/presentation/presentation.mojom-shared-internal.h"
namespace blink {
namespace mojom {

enum class PresentationConnectionState : int32_t {
  CONNECTING,
  CONNECTED,
  CLOSED,
  TERMINATED,
};

inline std::ostream& operator<<(std::ostream& os, PresentationConnectionState value) {
  switch(value) {
    case PresentationConnectionState::CONNECTING:
      return os << "PresentationConnectionState::CONNECTING";
    case PresentationConnectionState::CONNECTED:
      return os << "PresentationConnectionState::CONNECTED";
    case PresentationConnectionState::CLOSED:
      return os << "PresentationConnectionState::CLOSED";
    case PresentationConnectionState::TERMINATED:
      return os << "PresentationConnectionState::TERMINATED";
    default:
      return os << "Unknown PresentationConnectionState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PresentationConnectionState value) {
  return internal::PresentationConnectionState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PresentationConnectionCloseReason : int32_t {
  CONNECTION_ERROR,
  CLOSED,
  WENT_AWAY,
};

inline std::ostream& operator<<(std::ostream& os, PresentationConnectionCloseReason value) {
  switch(value) {
    case PresentationConnectionCloseReason::CONNECTION_ERROR:
      return os << "PresentationConnectionCloseReason::CONNECTION_ERROR";
    case PresentationConnectionCloseReason::CLOSED:
      return os << "PresentationConnectionCloseReason::CLOSED";
    case PresentationConnectionCloseReason::WENT_AWAY:
      return os << "PresentationConnectionCloseReason::WENT_AWAY";
    default:
      return os << "Unknown PresentationConnectionCloseReason value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PresentationConnectionCloseReason value) {
  return internal::PresentationConnectionCloseReason_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PresentationErrorType : int32_t {
  NO_AVAILABLE_SCREENS,
  SESSION_REQUEST_CANCELLED,
  NO_PRESENTATION_FOUND,
  UNKNOWN,
};

inline std::ostream& operator<<(std::ostream& os, PresentationErrorType value) {
  switch(value) {
    case PresentationErrorType::NO_AVAILABLE_SCREENS:
      return os << "PresentationErrorType::NO_AVAILABLE_SCREENS";
    case PresentationErrorType::SESSION_REQUEST_CANCELLED:
      return os << "PresentationErrorType::SESSION_REQUEST_CANCELLED";
    case PresentationErrorType::NO_PRESENTATION_FOUND:
      return os << "PresentationErrorType::NO_PRESENTATION_FOUND";
    case PresentationErrorType::UNKNOWN:
      return os << "PresentationErrorType::UNKNOWN";
    default:
      return os << "Unknown PresentationErrorType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PresentationErrorType value) {
  return internal::PresentationErrorType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PresentationMessageType : int32_t {
  TEXT,
  ARRAY_BUFFER,
  BLOB,
};

inline std::ostream& operator<<(std::ostream& os, PresentationMessageType value) {
  switch(value) {
    case PresentationMessageType::TEXT:
      return os << "PresentationMessageType::TEXT";
    case PresentationMessageType::ARRAY_BUFFER:
      return os << "PresentationMessageType::ARRAY_BUFFER";
    case PresentationMessageType::BLOB:
      return os << "PresentationMessageType::BLOB";
    default:
      return os << "Unknown PresentationMessageType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PresentationMessageType value) {
  return internal::PresentationMessageType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::PresentationConnectionState>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PresentationConnectionState> {};

template <>
struct hash<::blink::mojom::PresentationConnectionCloseReason>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PresentationConnectionCloseReason> {};

template <>
struct hash<::blink::mojom::PresentationErrorType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PresentationErrorType> {};

template <>
struct hash<::blink::mojom::PresentationMessageType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PresentationMessageType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::PresentationConnectionState, ::blink::mojom::PresentationConnectionState> {
  static ::blink::mojom::PresentationConnectionState ToMojom(::blink::mojom::PresentationConnectionState input) { return input; }
  static bool FromMojom(::blink::mojom::PresentationConnectionState input, ::blink::mojom::PresentationConnectionState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationConnectionState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PresentationConnectionState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PresentationConnectionState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PresentationConnectionCloseReason, ::blink::mojom::PresentationConnectionCloseReason> {
  static ::blink::mojom::PresentationConnectionCloseReason ToMojom(::blink::mojom::PresentationConnectionCloseReason input) { return input; }
  static bool FromMojom(::blink::mojom::PresentationConnectionCloseReason input, ::blink::mojom::PresentationConnectionCloseReason* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationConnectionCloseReason, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PresentationConnectionCloseReason, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PresentationConnectionCloseReason>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PresentationErrorType, ::blink::mojom::PresentationErrorType> {
  static ::blink::mojom::PresentationErrorType ToMojom(::blink::mojom::PresentationErrorType input) { return input; }
  static bool FromMojom(::blink::mojom::PresentationErrorType input, ::blink::mojom::PresentationErrorType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationErrorType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PresentationErrorType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PresentationErrorType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::PresentationMessageType, ::blink::mojom::PresentationMessageType> {
  static ::blink::mojom::PresentationMessageType ToMojom(::blink::mojom::PresentationMessageType input) { return input; }
  static bool FromMojom(::blink::mojom::PresentationMessageType input, ::blink::mojom::PresentationMessageType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PresentationMessageType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PresentationMessageType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PresentationMessageType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PRESENTATION_PRESENTATION_MOJOM_SHARED_H_
