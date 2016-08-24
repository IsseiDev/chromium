// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "services/ui/public/interfaces/display/display.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
namespace display {
namespace mojom {

enum class Rotation : int32_t {
  VALUE_0,
  VALUE_90,
  VALUE_180,
  VALUE_270,
};

inline std::ostream& operator<<(std::ostream& os, Rotation value) {
  switch(value) {
    case Rotation::VALUE_0:
      return os << "Rotation::VALUE_0";
    case Rotation::VALUE_90:
      return os << "Rotation::VALUE_90";
    case Rotation::VALUE_180:
      return os << "Rotation::VALUE_180";
    case Rotation::VALUE_270:
      return os << "Rotation::VALUE_270";
    default:
      return os << "Unknown Rotation value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Rotation value) {
  return internal::Rotation_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TouchSupport : int32_t {
  UNKNOWN,
  AVAILABLE,
  UNAVAILABLE,
};

inline std::ostream& operator<<(std::ostream& os, TouchSupport value) {
  switch(value) {
    case TouchSupport::UNKNOWN:
      return os << "TouchSupport::UNKNOWN";
    case TouchSupport::AVAILABLE:
      return os << "TouchSupport::AVAILABLE";
    case TouchSupport::UNAVAILABLE:
      return os << "TouchSupport::UNAVAILABLE";
    default:
      return os << "Unknown TouchSupport value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TouchSupport value) {
  return internal::TouchSupport_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace display

namespace std {

template <>
struct hash<::display::mojom::Rotation>
    : public mojo::internal::EnumHashImpl<::display::mojom::Rotation> {};

template <>
struct hash<::display::mojom::TouchSupport>
    : public mojo::internal::EnumHashImpl<::display::mojom::TouchSupport> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::display::mojom::Rotation, ::display::mojom::Rotation> {
  static ::display::mojom::Rotation ToMojom(::display::mojom::Rotation input) { return input; }
  static bool FromMojom(::display::mojom::Rotation input, ::display::mojom::Rotation* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::Rotation, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::display::mojom::Rotation, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::display::mojom::Rotation>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::display::mojom::TouchSupport, ::display::mojom::TouchSupport> {
  static ::display::mojom::TouchSupport ToMojom(::display::mojom::TouchSupport input) { return input; }
  static bool FromMojom(::display::mojom::TouchSupport input, ::display::mojom::TouchSupport* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::display::mojom::TouchSupport, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::display::mojom::TouchSupport, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::display::mojom::TouchSupport>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_DISPLAY_DISPLAY_MOJOM_SHARED_H_
