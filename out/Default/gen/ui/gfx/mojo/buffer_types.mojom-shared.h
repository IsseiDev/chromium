// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJO_BUFFER_TYPES_MOJOM_SHARED_H_
#define UI_GFX_MOJO_BUFFER_TYPES_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "ui/gfx/mojo/buffer_types.mojom-shared-internal.h"
namespace gfx {
namespace mojom {

enum class BufferFormat : int32_t {
  ATC,
  ATCIA,
  DXT1,
  DXT5,
  ETC1,
  R_8,
  BGR_565,
  RGBA_4444,
  RGBX_8888,
  RGBA_8888,
  BGRX_8888,
  BGRA_8888,
  YVU_420,
  YUV_420_BIPLANAR,
  UYVY_422,
  LAST = BufferFormat::UYVY_422,
};

inline std::ostream& operator<<(std::ostream& os, BufferFormat value) {
  switch(value) {
    case BufferFormat::ATC:
      return os << "BufferFormat::ATC";
    case BufferFormat::ATCIA:
      return os << "BufferFormat::ATCIA";
    case BufferFormat::DXT1:
      return os << "BufferFormat::DXT1";
    case BufferFormat::DXT5:
      return os << "BufferFormat::DXT5";
    case BufferFormat::ETC1:
      return os << "BufferFormat::ETC1";
    case BufferFormat::R_8:
      return os << "BufferFormat::R_8";
    case BufferFormat::BGR_565:
      return os << "BufferFormat::BGR_565";
    case BufferFormat::RGBA_4444:
      return os << "BufferFormat::RGBA_4444";
    case BufferFormat::RGBX_8888:
      return os << "BufferFormat::RGBX_8888";
    case BufferFormat::RGBA_8888:
      return os << "BufferFormat::RGBA_8888";
    case BufferFormat::BGRX_8888:
      return os << "BufferFormat::BGRX_8888";
    case BufferFormat::BGRA_8888:
      return os << "BufferFormat::BGRA_8888";
    case BufferFormat::YVU_420:
      return os << "BufferFormat::YVU_420";
    case BufferFormat::YUV_420_BIPLANAR:
      return os << "BufferFormat::YUV_420_BIPLANAR";
    case BufferFormat::UYVY_422:
      return os << "BufferFormat::{UYVY_422, LAST}";
    default:
      return os << "Unknown BufferFormat value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(BufferFormat value) {
  return internal::BufferFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class BufferUsage : int32_t {
  GPU_READ,
  SCANOUT,
  GPU_READ_CPU_READ_WRITE,
  GPU_READ_CPU_READ_WRITE_PERSISTENT,
  LAST = BufferUsage::GPU_READ_CPU_READ_WRITE_PERSISTENT,
};

inline std::ostream& operator<<(std::ostream& os, BufferUsage value) {
  switch(value) {
    case BufferUsage::GPU_READ:
      return os << "BufferUsage::GPU_READ";
    case BufferUsage::SCANOUT:
      return os << "BufferUsage::SCANOUT";
    case BufferUsage::GPU_READ_CPU_READ_WRITE:
      return os << "BufferUsage::GPU_READ_CPU_READ_WRITE";
    case BufferUsage::GPU_READ_CPU_READ_WRITE_PERSISTENT:
      return os << "BufferUsage::{GPU_READ_CPU_READ_WRITE_PERSISTENT, LAST}";
    default:
      return os << "Unknown BufferUsage value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(BufferUsage value) {
  return internal::BufferUsage_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace gfx

namespace std {

template <>
struct hash<::gfx::mojom::BufferFormat>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::BufferFormat> {};

template <>
struct hash<::gfx::mojom::BufferUsage>
    : public mojo::internal::EnumHashImpl<::gfx::mojom::BufferUsage> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gfx::mojom::BufferFormat, ::gfx::mojom::BufferFormat> {
  static ::gfx::mojom::BufferFormat ToMojom(::gfx::mojom::BufferFormat input) { return input; }
  static bool FromMojom(::gfx::mojom::BufferFormat input, ::gfx::mojom::BufferFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::BufferFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::BufferFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::BufferFormat>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::gfx::mojom::BufferUsage, ::gfx::mojom::BufferUsage> {
  static ::gfx::mojom::BufferUsage ToMojom(::gfx::mojom::BufferUsage input) { return input; }
  static bool FromMojom(::gfx::mojom::BufferUsage input, ::gfx::mojom::BufferUsage* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gfx::mojom::BufferUsage, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gfx::mojom::BufferUsage, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gfx::mojom::BufferUsage>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // UI_GFX_MOJO_BUFFER_TYPES_MOJOM_SHARED_H_
