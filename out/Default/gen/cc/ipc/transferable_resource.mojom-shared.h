// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_TRANSFERABLE_RESOURCE_MOJOM_SHARED_H_
#define CC_IPC_TRANSFERABLE_RESOURCE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "cc/ipc/transferable_resource.mojom-shared-internal.h"
#include "gpu/ipc/common/mailbox_holder.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
namespace cc {
namespace mojom {

enum class ResourceFormat : int32_t {
  RGBA_8888,
  RGBA_4444,
  BGRA_8888,
  ALPHA_8,
  LUMINANCE_8,
  RGB_565,
  ETC1,
};

inline std::ostream& operator<<(std::ostream& os, ResourceFormat value) {
  switch(value) {
    case ResourceFormat::RGBA_8888:
      return os << "ResourceFormat::RGBA_8888";
    case ResourceFormat::RGBA_4444:
      return os << "ResourceFormat::RGBA_4444";
    case ResourceFormat::BGRA_8888:
      return os << "ResourceFormat::BGRA_8888";
    case ResourceFormat::ALPHA_8:
      return os << "ResourceFormat::ALPHA_8";
    case ResourceFormat::LUMINANCE_8:
      return os << "ResourceFormat::LUMINANCE_8";
    case ResourceFormat::RGB_565:
      return os << "ResourceFormat::RGB_565";
    case ResourceFormat::ETC1:
      return os << "ResourceFormat::ETC1";
    default:
      return os << "Unknown ResourceFormat value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ResourceFormat value) {
  return internal::ResourceFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace cc

namespace std {

template <>
struct hash<::cc::mojom::ResourceFormat>
    : public mojo::internal::EnumHashImpl<::cc::mojom::ResourceFormat> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::cc::mojom::ResourceFormat, ::cc::mojom::ResourceFormat> {
  static ::cc::mojom::ResourceFormat ToMojom(::cc::mojom::ResourceFormat input) { return input; }
  static bool FromMojom(::cc::mojom::ResourceFormat input, ::cc::mojom::ResourceFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::ResourceFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::cc::mojom::ResourceFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::cc::mojom::ResourceFormat>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_TRANSFERABLE_RESOURCE_MOJOM_SHARED_H_
