// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GEOLOCATION_PUBLIC_INTERFACES_GEOLOCATION_MOJOM_SHARED_H_
#define DEVICE_GEOLOCATION_PUBLIC_INTERFACES_GEOLOCATION_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "device/geolocation/public/interfaces/geolocation.mojom-shared-internal.h"
namespace device {
namespace mojom {

enum class Geoposition_ErrorCode : int32_t {
  NONE = 0,
  PERMISSION_DENIED = 1,
  POSITION_UNAVAILABLE = 2,
  TIMEOUT = 3,
  LAST = Geoposition_ErrorCode::TIMEOUT,
};

inline std::ostream& operator<<(std::ostream& os, Geoposition_ErrorCode value) {
  switch(value) {
    case Geoposition_ErrorCode::NONE:
      return os << "Geoposition_ErrorCode::NONE";
    case Geoposition_ErrorCode::PERMISSION_DENIED:
      return os << "Geoposition_ErrorCode::PERMISSION_DENIED";
    case Geoposition_ErrorCode::POSITION_UNAVAILABLE:
      return os << "Geoposition_ErrorCode::POSITION_UNAVAILABLE";
    case Geoposition_ErrorCode::TIMEOUT:
      return os << "Geoposition_ErrorCode::{TIMEOUT, LAST}";
    default:
      return os << "Unknown Geoposition_ErrorCode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Geoposition_ErrorCode value) {
  return internal::Geoposition_ErrorCode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace device

namespace std {

template <>
struct hash<::device::mojom::Geoposition_ErrorCode>
    : public mojo::internal::EnumHashImpl<::device::mojom::Geoposition_ErrorCode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::device::mojom::Geoposition_ErrorCode, ::device::mojom::Geoposition_ErrorCode> {
  static ::device::mojom::Geoposition_ErrorCode ToMojom(::device::mojom::Geoposition_ErrorCode input) { return input; }
  static bool FromMojom(::device::mojom::Geoposition_ErrorCode input, ::device::mojom::Geoposition_ErrorCode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::Geoposition_ErrorCode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::device::mojom::Geoposition_ErrorCode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::device::mojom::Geoposition_ErrorCode>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // DEVICE_GEOLOCATION_PUBLIC_INTERFACES_GEOLOCATION_MOJOM_SHARED_H_
