// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_GPU_MEMORY_BUFFER_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_GPU_MEMORY_BUFFER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "services/ui/public/interfaces/gpu_memory_buffer.mojom-shared-internal.h"
namespace ui {
namespace mojom {

enum class GpuMemoryBufferType : int32_t {
  EMPTY,
  SHARED_MEMORY,
  IO_SURFACE,
  SURFACE_TEXTURE,
  OZONE_NATIVE_PIXMAP,
  LAST = GpuMemoryBufferType::OZONE_NATIVE_PIXMAP,
};

inline std::ostream& operator<<(std::ostream& os, GpuMemoryBufferType value) {
  switch(value) {
    case GpuMemoryBufferType::EMPTY:
      return os << "GpuMemoryBufferType::EMPTY";
    case GpuMemoryBufferType::SHARED_MEMORY:
      return os << "GpuMemoryBufferType::SHARED_MEMORY";
    case GpuMemoryBufferType::IO_SURFACE:
      return os << "GpuMemoryBufferType::IO_SURFACE";
    case GpuMemoryBufferType::SURFACE_TEXTURE:
      return os << "GpuMemoryBufferType::SURFACE_TEXTURE";
    case GpuMemoryBufferType::OZONE_NATIVE_PIXMAP:
      return os << "GpuMemoryBufferType::{OZONE_NATIVE_PIXMAP, LAST}";
    default:
      return os << "Unknown GpuMemoryBufferType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(GpuMemoryBufferType value) {
  return internal::GpuMemoryBufferType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::GpuMemoryBufferType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::GpuMemoryBufferType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::GpuMemoryBufferType, ::ui::mojom::GpuMemoryBufferType> {
  static ::ui::mojom::GpuMemoryBufferType ToMojom(::ui::mojom::GpuMemoryBufferType input) { return input; }
  static bool FromMojom(::ui::mojom::GpuMemoryBufferType input, ::ui::mojom::GpuMemoryBufferType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::GpuMemoryBufferType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::GpuMemoryBufferType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::GpuMemoryBufferType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_GPU_MEMORY_BUFFER_MOJOM_SHARED_H_
