// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_SELECTION_BOUND_MOJOM_SHARED_H_
#define UI_GFX_MOJO_SELECTION_BOUND_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "ui/gfx/mojo/selection_bound.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
namespace gfx {
namespace mojom {

enum class SelectionBoundType : int32_t {
  LEFT,
  RIGHT,
  CENTER,
  EMPTY,
  LAST = SelectionBoundType::EMPTY,
};

inline std::ostream& operator<<(std::ostream& os, SelectionBoundType value) {
  switch(value) {
    case SelectionBoundType::LEFT:
      return os << "SelectionBoundType::LEFT";
    case SelectionBoundType::RIGHT:
      return os << "SelectionBoundType::RIGHT";
    case SelectionBoundType::CENTER:
      return os << "SelectionBoundType::CENTER";
    case SelectionBoundType::EMPTY:
      return os << "SelectionBoundType::{EMPTY, LAST}";
    default:
      return os << "Unknown SelectionBoundType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SelectionBoundType value) {
  return internal::SelectionBoundType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace gfx

namespace std {

template <>
struct hash<::gfx::mojom::SelectionBoundType>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::SelectionBoundType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gfx::mojom::SelectionBoundType, ::gfx::mojom::SelectionBoundType> {
  static ::gfx::mojom::SelectionBoundType ToMojom(::gfx::mojom::SelectionBoundType input) { return input; }
  static bool FromMojom(::gfx::mojom::SelectionBoundType input, ::gfx::mojom::SelectionBoundType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::SelectionBoundType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::SelectionBoundType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::SelectionBoundType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // UI_GFX_MOJO_SELECTION_BOUND_MOJOM_SHARED_H_
