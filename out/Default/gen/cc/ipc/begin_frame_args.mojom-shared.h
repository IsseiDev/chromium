// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_BEGIN_FRAME_ARGS_MOJOM_SHARED_H_
#define CC_IPC_BEGIN_FRAME_ARGS_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "cc/ipc/begin_frame_args.mojom-shared-internal.h"
#include "mojo/common/common_custom_types.mojom-shared.h"
namespace cc {
namespace mojom {

enum class BeginFrameArgsType : int32_t {
  INVALID,
  NORMAL,
  MISSED,
  BEGIN_FRAME_ARGS_TYPE_MAX,
};

inline std::ostream& operator<<(std::ostream& os, BeginFrameArgsType value) {
  switch(value) {
    case BeginFrameArgsType::INVALID:
      return os << "BeginFrameArgsType::INVALID";
    case BeginFrameArgsType::NORMAL:
      return os << "BeginFrameArgsType::NORMAL";
    case BeginFrameArgsType::MISSED:
      return os << "BeginFrameArgsType::MISSED";
    case BeginFrameArgsType::BEGIN_FRAME_ARGS_TYPE_MAX:
      return os << "BeginFrameArgsType::BEGIN_FRAME_ARGS_TYPE_MAX";
    default:
      return os << "Unknown BeginFrameArgsType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(BeginFrameArgsType value) {
  return internal::BeginFrameArgsType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace cc

namespace std {

template <>
struct hash<::cc::mojom::BeginFrameArgsType>
    : public mojo::internal::EnumHashImpl<::cc::mojom::BeginFrameArgsType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::cc::mojom::BeginFrameArgsType, ::cc::mojom::BeginFrameArgsType> {
  static ::cc::mojom::BeginFrameArgsType ToMojom(::cc::mojom::BeginFrameArgsType input) { return input; }
  static bool FromMojom(::cc::mojom::BeginFrameArgsType input, ::cc::mojom::BeginFrameArgsType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::BeginFrameArgsType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::cc::mojom::BeginFrameArgsType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::cc::mojom::BeginFrameArgsType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_BEGIN_FRAME_ARGS_MOJOM_SHARED_H_
