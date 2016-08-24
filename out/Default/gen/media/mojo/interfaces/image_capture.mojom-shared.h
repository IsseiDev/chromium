// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_IMAGE_CAPTURE_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_IMAGE_CAPTURE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "media/mojo/interfaces/image_capture.mojom-shared-internal.h"
namespace media {
namespace mojom {

enum class FocusMode : int32_t {
  UNAVAILABLE,
  MANUAL,
  SINGLE_SHOT,
  CONTINUOUS,
};

inline std::ostream& operator<<(std::ostream& os, FocusMode value) {
  switch(value) {
    case FocusMode::UNAVAILABLE:
      return os << "FocusMode::UNAVAILABLE";
    case FocusMode::MANUAL:
      return os << "FocusMode::MANUAL";
    case FocusMode::SINGLE_SHOT:
      return os << "FocusMode::SINGLE_SHOT";
    case FocusMode::CONTINUOUS:
      return os << "FocusMode::CONTINUOUS";
    default:
      return os << "Unknown FocusMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(FocusMode value) {
  return internal::FocusMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::FocusMode>
    : public mojo::internal::EnumHashImpl<::media::mojom::FocusMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::FocusMode, ::media::mojom::FocusMode> {
  static ::media::mojom::FocusMode ToMojom(::media::mojom::FocusMode input) { return input; }
  static bool FromMojom(::media::mojom::FocusMode input, ::media::mojom::FocusMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::FocusMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::FocusMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::FocusMode>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_IMAGE_CAPTURE_MOJOM_SHARED_H_
