// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_MOJOM_SHARED_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "third_party/WebKit/public/platform/modules/permissions/permission.mojom-shared-internal.h"
#include "third_party/WebKit/public/platform/modules/permissions/permission_status.mojom-shared.h"
#include "url/mojo/origin.mojom-shared.h"
namespace blink {
namespace mojom {

enum class PermissionName : int32_t {
  GEOLOCATION,
  NOTIFICATIONS,
  PUSH_NOTIFICATIONS,
  MIDI,
  MIDI_SYSEX,
  PROTECTED_MEDIA_IDENTIFIER,
  DURABLE_STORAGE,
  AUDIO_CAPTURE,
  VIDEO_CAPTURE,
  BACKGROUND_SYNC,
};

inline std::ostream& operator<<(std::ostream& os, PermissionName value) {
  switch(value) {
    case PermissionName::GEOLOCATION:
      return os << "PermissionName::GEOLOCATION";
    case PermissionName::NOTIFICATIONS:
      return os << "PermissionName::NOTIFICATIONS";
    case PermissionName::PUSH_NOTIFICATIONS:
      return os << "PermissionName::PUSH_NOTIFICATIONS";
    case PermissionName::MIDI:
      return os << "PermissionName::MIDI";
    case PermissionName::MIDI_SYSEX:
      return os << "PermissionName::MIDI_SYSEX";
    case PermissionName::PROTECTED_MEDIA_IDENTIFIER:
      return os << "PermissionName::PROTECTED_MEDIA_IDENTIFIER";
    case PermissionName::DURABLE_STORAGE:
      return os << "PermissionName::DURABLE_STORAGE";
    case PermissionName::AUDIO_CAPTURE:
      return os << "PermissionName::AUDIO_CAPTURE";
    case PermissionName::VIDEO_CAPTURE:
      return os << "PermissionName::VIDEO_CAPTURE";
    case PermissionName::BACKGROUND_SYNC:
      return os << "PermissionName::BACKGROUND_SYNC";
    default:
      return os << "Unknown PermissionName value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PermissionName value) {
  return internal::PermissionName_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::PermissionName>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PermissionName> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::blink::mojom::PermissionName, ::blink::mojom::PermissionName> {
  static ::blink::mojom::PermissionName ToMojom(::blink::mojom::PermissionName input) { return input; }
  static bool FromMojom(::blink::mojom::PermissionName input, ::blink::mojom::PermissionName* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PermissionName, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PermissionName, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::blink::mojom::PermissionName>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PERMISSIONS_PERMISSION_MOJOM_SHARED_H_
