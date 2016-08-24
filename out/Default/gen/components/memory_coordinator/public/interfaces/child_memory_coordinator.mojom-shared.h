// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_MEMORY_COORDINATOR_PUBLIC_INTERFACES_CHILD_MEMORY_COORDINATOR_MOJOM_SHARED_H_
#define COMPONENTS_MEMORY_COORDINATOR_PUBLIC_INTERFACES_CHILD_MEMORY_COORDINATOR_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "components/memory_coordinator/public/interfaces/child_memory_coordinator.mojom-shared-internal.h"
namespace memory_coordinator {
namespace mojom {

enum class MemoryState : int32_t {
  UNKNOWN = -1,
  NORMAL = 0,
  THROTTLED = 1,
  SUSPENDED = 2,
};

inline std::ostream& operator<<(std::ostream& os, MemoryState value) {
  switch(value) {
    case MemoryState::UNKNOWN:
      return os << "MemoryState::UNKNOWN";
    case MemoryState::NORMAL:
      return os << "MemoryState::NORMAL";
    case MemoryState::THROTTLED:
      return os << "MemoryState::THROTTLED";
    case MemoryState::SUSPENDED:
      return os << "MemoryState::SUSPENDED";
    default:
      return os << "Unknown MemoryState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(MemoryState value) {
  return internal::MemoryState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace memory_coordinator

namespace std {

template <>
struct hash<::memory_coordinator::mojom::MemoryState>
    : public mojo::internal::EnumHashImpl<::memory_coordinator::mojom::MemoryState> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::memory_coordinator::mojom::MemoryState, ::memory_coordinator::mojom::MemoryState> {
  static ::memory_coordinator::mojom::MemoryState ToMojom(::memory_coordinator::mojom::MemoryState input) { return input; }
  static bool FromMojom(::memory_coordinator::mojom::MemoryState input, ::memory_coordinator::mojom::MemoryState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::memory_coordinator::mojom::MemoryState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::memory_coordinator::mojom::MemoryState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::memory_coordinator::mojom::MemoryState>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // COMPONENTS_MEMORY_COORDINATOR_PUBLIC_INTERFACES_CHILD_MEMORY_COORDINATOR_MOJOM_SHARED_H_
