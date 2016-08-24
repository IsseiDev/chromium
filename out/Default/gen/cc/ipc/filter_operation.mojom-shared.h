// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_FILTER_OPERATION_MOJOM_SHARED_H_
#define CC_IPC_FILTER_OPERATION_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "cc/ipc/filter_operation.mojom-shared-internal.h"
#include "skia/public/interfaces/image_filter.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
namespace cc {
namespace mojom {

enum class FilterType : int32_t {
  GRAYSCALE,
  SEPIA,
  SATURATE,
  HUE_ROTATE,
  INVERT,
  BRIGHTNESS,
  CONTRAST,
  OPACITY,
  BLUR,
  DROP_SHADOW,
  COLOR_MATRIX,
  ZOOM,
  REFERENCE,
  SATURATING_BRIGHTNESS,
  ALPHA_THRESHOLD,
  FILTER_TYPE_LAST = FilterType::ALPHA_THRESHOLD,
};

inline std::ostream& operator<<(std::ostream& os, FilterType value) {
  switch(value) {
    case FilterType::GRAYSCALE:
      return os << "FilterType::GRAYSCALE";
    case FilterType::SEPIA:
      return os << "FilterType::SEPIA";
    case FilterType::SATURATE:
      return os << "FilterType::SATURATE";
    case FilterType::HUE_ROTATE:
      return os << "FilterType::HUE_ROTATE";
    case FilterType::INVERT:
      return os << "FilterType::INVERT";
    case FilterType::BRIGHTNESS:
      return os << "FilterType::BRIGHTNESS";
    case FilterType::CONTRAST:
      return os << "FilterType::CONTRAST";
    case FilterType::OPACITY:
      return os << "FilterType::OPACITY";
    case FilterType::BLUR:
      return os << "FilterType::BLUR";
    case FilterType::DROP_SHADOW:
      return os << "FilterType::DROP_SHADOW";
    case FilterType::COLOR_MATRIX:
      return os << "FilterType::COLOR_MATRIX";
    case FilterType::ZOOM:
      return os << "FilterType::ZOOM";
    case FilterType::REFERENCE:
      return os << "FilterType::REFERENCE";
    case FilterType::SATURATING_BRIGHTNESS:
      return os << "FilterType::SATURATING_BRIGHTNESS";
    case FilterType::ALPHA_THRESHOLD:
      return os << "FilterType::{ALPHA_THRESHOLD, FILTER_TYPE_LAST}";
    default:
      return os << "Unknown FilterType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(FilterType value) {
  return internal::FilterType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace cc

namespace std {

template <>
struct hash<::cc::mojom::FilterType>
    : public mojo::internal::EnumHashImpl<::cc::mojom::FilterType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::cc::mojom::FilterType, ::cc::mojom::FilterType> {
  static ::cc::mojom::FilterType ToMojom(::cc::mojom::FilterType input) { return input; }
  static bool FromMojom(::cc::mojom::FilterType input, ::cc::mojom::FilterType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::FilterType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::cc::mojom::FilterType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::cc::mojom::FilterType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_FILTER_OPERATION_MOJOM_SHARED_H_
