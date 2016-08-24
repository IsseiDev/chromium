// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_QUADS_MOJOM_SHARED_H_
#define CC_IPC_QUADS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "cc/ipc/quads.mojom-shared-internal.h"
#include "cc/ipc/filter_operations.mojom-shared.h"
#include "cc/ipc/render_pass_id.mojom-shared.h"
#include "cc/ipc/shared_quad_state.mojom-shared.h"
#include "cc/ipc/surface_id.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "ui/gfx/mojo/transform.mojom-shared.h"
namespace cc {
namespace mojom {

enum class YUVColorSpace : int32_t {
  REC_601,
  REC_709,
  JPEG,
};

inline std::ostream& operator<<(std::ostream& os, YUVColorSpace value) {
  switch(value) {
    case YUVColorSpace::REC_601:
      return os << "YUVColorSpace::REC_601";
    case YUVColorSpace::REC_709:
      return os << "YUVColorSpace::REC_709";
    case YUVColorSpace::JPEG:
      return os << "YUVColorSpace::JPEG";
    default:
      return os << "Unknown YUVColorSpace value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(YUVColorSpace value) {
  return internal::YUVColorSpace_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace cc

namespace std {

template <>
struct hash<::cc::mojom::YUVColorSpace>
    : public mojo::internal::EnumHashImpl<::cc::mojom::YUVColorSpace> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::cc::mojom::YUVColorSpace, ::cc::mojom::YUVColorSpace> {
  static ::cc::mojom::YUVColorSpace ToMojom(::cc::mojom::YUVColorSpace input) { return input; }
  static bool FromMojom(::cc::mojom::YUVColorSpace input, ::cc::mojom::YUVColorSpace* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::YUVColorSpace, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::cc::mojom::YUVColorSpace, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::cc::mojom::YUVColorSpace>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_QUADS_MOJOM_SHARED_H_
