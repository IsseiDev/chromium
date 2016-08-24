// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_CONSTANTS_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_CONSTANTS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "services/ui/public/interfaces/window_tree_constants.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
namespace ui {
namespace mojom {

enum class SurfaceType : int32_t {
  UNDERLAY,
  DEFAULT,
};

inline std::ostream& operator<<(std::ostream& os, SurfaceType value) {
  switch(value) {
    case SurfaceType::UNDERLAY:
      return os << "SurfaceType::UNDERLAY";
    case SurfaceType::DEFAULT:
      return os << "SurfaceType::DEFAULT";
    default:
      return os << "Unknown SurfaceType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SurfaceType value) {
  return internal::SurfaceType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class EventResult : int32_t {
  HANDLED,
  UNHANDLED,
};

inline std::ostream& operator<<(std::ostream& os, EventResult value) {
  switch(value) {
    case EventResult::HANDLED:
      return os << "EventResult::HANDLED";
    case EventResult::UNHANDLED:
      return os << "EventResult::UNHANDLED";
    default:
      return os << "Unknown EventResult value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(EventResult value) {
  return internal::EventResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::SurfaceType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::SurfaceType> {};

template <>
struct hash<::ui::mojom::EventResult>
    : public mojo::internal::EnumHashImpl<::ui::mojom::EventResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::SurfaceType, ::ui::mojom::SurfaceType> {
  static ::ui::mojom::SurfaceType ToMojom(::ui::mojom::SurfaceType input) { return input; }
  static bool FromMojom(::ui::mojom::SurfaceType input, ::ui::mojom::SurfaceType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::SurfaceType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::SurfaceType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::SurfaceType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::EventResult, ::ui::mojom::EventResult> {
  static ::ui::mojom::EventResult ToMojom(::ui::mojom::EventResult input) { return input; }
  static bool FromMojom(::ui::mojom::EventResult input, ::ui::mojom::EventResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::EventResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::EventResult>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_WINDOW_TREE_CONSTANTS_MOJOM_SHARED_H_
