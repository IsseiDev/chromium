// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_IMAGE_DECODER_MOJOM_SHARED_H_
#define CHROME_COMMON_IMAGE_DECODER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "chrome/common/image_decoder.mojom-shared-internal.h"
#include "skia/public/interfaces/bitmap.mojom-shared.h"
namespace mojom {

enum class ImageCodec : int32_t {
  DEFAULT,
  ROBUST_JPEG,
  ROBUST_PNG,
};

inline std::ostream& operator<<(std::ostream& os, ImageCodec value) {
  switch(value) {
    case ImageCodec::DEFAULT:
      return os << "ImageCodec::DEFAULT";
    case ImageCodec::ROBUST_JPEG:
      return os << "ImageCodec::ROBUST_JPEG";
    case ImageCodec::ROBUST_PNG:
      return os << "ImageCodec::ROBUST_PNG";
    default:
      return os << "Unknown ImageCodec value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ImageCodec value) {
  return internal::ImageCodec_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom

namespace std {

template <>
struct hash<::mojom::ImageCodec>
    : public mojo::internal::EnumHashImpl<::mojom::ImageCodec> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mojom::ImageCodec, ::mojom::ImageCodec> {
  static ::mojom::ImageCodec ToMojom(::mojom::ImageCodec input) { return input; }
  static bool FromMojom(::mojom::ImageCodec input, ::mojom::ImageCodec* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::ImageCodec, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojom::ImageCodec, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojom::ImageCodec>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CHROME_COMMON_IMAGE_DECODER_MOJOM_SHARED_H_
