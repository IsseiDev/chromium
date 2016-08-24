// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "gpu/ipc/common/sync_token.mojom-shared-internal.h"
namespace gpu {
namespace mojom {

enum class CommandBufferNamespace : int32_t {
  INVALID = -1,
  GPU_IO,
  IN_PROCESS,
  MOJO,
  MOJO_LOCAL,
  NUM_COMMAND_BUFFER_NAMESPACES,
};

inline std::ostream& operator<<(std::ostream& os, CommandBufferNamespace value) {
  switch(value) {
    case CommandBufferNamespace::INVALID:
      return os << "CommandBufferNamespace::INVALID";
    case CommandBufferNamespace::GPU_IO:
      return os << "CommandBufferNamespace::GPU_IO";
    case CommandBufferNamespace::IN_PROCESS:
      return os << "CommandBufferNamespace::IN_PROCESS";
    case CommandBufferNamespace::MOJO:
      return os << "CommandBufferNamespace::MOJO";
    case CommandBufferNamespace::MOJO_LOCAL:
      return os << "CommandBufferNamespace::MOJO_LOCAL";
    case CommandBufferNamespace::NUM_COMMAND_BUFFER_NAMESPACES:
      return os << "CommandBufferNamespace::NUM_COMMAND_BUFFER_NAMESPACES";
    default:
      return os << "Unknown CommandBufferNamespace value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CommandBufferNamespace value) {
  return internal::CommandBufferNamespace_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace gpu

namespace std {

template <>
struct hash<::gpu::mojom::CommandBufferNamespace>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::CommandBufferNamespace> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gpu::mojom::CommandBufferNamespace, ::gpu::mojom::CommandBufferNamespace> {
  static ::gpu::mojom::CommandBufferNamespace ToMojom(::gpu::mojom::CommandBufferNamespace input) { return input; }
  static bool FromMojom(::gpu::mojom::CommandBufferNamespace input, ::gpu::mojom::CommandBufferNamespace* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::CommandBufferNamespace, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::CommandBufferNamespace, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gpu::mojom::CommandBufferNamespace>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_SHARED_H_
