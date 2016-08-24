// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_ANIMATIONS_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_ANIMATIONS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "services/ui/public/interfaces/animations.mojom-shared-internal.h"
#include "ui/gfx/mojo/transform.mojom-shared.h"
namespace ui {
namespace mojom {

enum class AnimationTweenType : int32_t {
  LINEAR,
  EASE_IN,
  EASE_OUT,
  EASE_IN_OUT,
};

inline std::ostream& operator<<(std::ostream& os, AnimationTweenType value) {
  switch(value) {
    case AnimationTweenType::LINEAR:
      return os << "AnimationTweenType::LINEAR";
    case AnimationTweenType::EASE_IN:
      return os << "AnimationTweenType::EASE_IN";
    case AnimationTweenType::EASE_OUT:
      return os << "AnimationTweenType::EASE_OUT";
    case AnimationTweenType::EASE_IN_OUT:
      return os << "AnimationTweenType::EASE_IN_OUT";
    default:
      return os << "Unknown AnimationTweenType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AnimationTweenType value) {
  return internal::AnimationTweenType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class AnimationProperty : int32_t {
  NONE,
  OPACITY,
  TRANSFORM,
};

inline std::ostream& operator<<(std::ostream& os, AnimationProperty value) {
  switch(value) {
    case AnimationProperty::NONE:
      return os << "AnimationProperty::NONE";
    case AnimationProperty::OPACITY:
      return os << "AnimationProperty::OPACITY";
    case AnimationProperty::TRANSFORM:
      return os << "AnimationProperty::TRANSFORM";
    default:
      return os << "Unknown AnimationProperty value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AnimationProperty value) {
  return internal::AnimationProperty_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::AnimationTweenType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::AnimationTweenType> {};

template <>
struct hash<::ui::mojom::AnimationProperty>
    : public mojo::internal::EnumHashImpl<::ui::mojom::AnimationProperty> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::AnimationTweenType, ::ui::mojom::AnimationTweenType> {
  static ::ui::mojom::AnimationTweenType ToMojom(::ui::mojom::AnimationTweenType input) { return input; }
  static bool FromMojom(::ui::mojom::AnimationTweenType input, ::ui::mojom::AnimationTweenType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::AnimationTweenType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::AnimationTweenType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::AnimationTweenType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::AnimationProperty, ::ui::mojom::AnimationProperty> {
  static ::ui::mojom::AnimationProperty ToMojom(::ui::mojom::AnimationProperty input) { return input; }
  static bool FromMojom(::ui::mojom::AnimationProperty input, ::ui::mojom::AnimationProperty* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::AnimationProperty, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::AnimationProperty, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::AnimationProperty>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_ANIMATIONS_MOJOM_SHARED_H_
