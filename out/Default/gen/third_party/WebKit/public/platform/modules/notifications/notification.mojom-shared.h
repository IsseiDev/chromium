// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_MOJOM_SHARED_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "third_party/WebKit/public/platform/modules/notifications/notification.mojom-shared-internal.h"
namespace blink {
namespace mojom {

enum class NotificationActionType : int32_t {
  BUTTON,
  TEXT,
};

inline std::ostream& operator<<(std::ostream& os, NotificationActionType value) {
  switch(value) {
    case NotificationActionType::BUTTON:
      return os << "NotificationActionType::BUTTON";
    case NotificationActionType::TEXT:
      return os << "NotificationActionType::TEXT";
    default:
      return os << "Unknown NotificationActionType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(NotificationActionType value) {
  return internal::NotificationActionType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class NotificationDirection : int32_t {
  LEFT_TO_RIGHT,
  RIGHT_TO_LEFT,
  AUTO,
};

inline std::ostream& operator<<(std::ostream& os, NotificationDirection value) {
  switch(value) {
    case NotificationDirection::LEFT_TO_RIGHT:
      return os << "NotificationDirection::LEFT_TO_RIGHT";
    case NotificationDirection::RIGHT_TO_LEFT:
      return os << "NotificationDirection::RIGHT_TO_LEFT";
    case NotificationDirection::AUTO:
      return os << "NotificationDirection::AUTO";
    default:
      return os << "Unknown NotificationDirection value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(NotificationDirection value) {
  return internal::NotificationDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::NotificationActionType>
    : public mojo::internal::EnumHashImpl<::blink::mojom::NotificationActionType> {};

template <>
struct hash<::blink::mojom::NotificationDirection>
    : public mojo::internal::EnumHashImpl<::blink::mojom::NotificationDirection> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::NotificationActionType, ::blink::mojom::NotificationActionType> {
  static ::blink::mojom::NotificationActionType ToMojom(::blink::mojom::NotificationActionType input) { return input; }
  static bool FromMojom(::blink::mojom::NotificationActionType input, ::blink::mojom::NotificationActionType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::NotificationActionType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::NotificationActionType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::NotificationActionType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::blink::mojom::NotificationDirection, ::blink::mojom::NotificationDirection> {
  static ::blink::mojom::NotificationDirection ToMojom(::blink::mojom::NotificationDirection input) { return input; }
  static bool FromMojom(::blink::mojom::NotificationDirection input, ::blink::mojom::NotificationDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::NotificationDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::NotificationDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::NotificationDirection>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_NOTIFICATIONS_NOTIFICATION_MOJOM_SHARED_H_
