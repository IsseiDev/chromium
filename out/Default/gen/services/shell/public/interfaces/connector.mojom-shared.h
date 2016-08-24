// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SHELL_PUBLIC_INTERFACES_CONNECTOR_MOJOM_SHARED_H_
#define SERVICES_SHELL_PUBLIC_INTERFACES_CONNECTOR_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "services/shell/public/interfaces/connector.mojom-shared-internal.h"
#include "services/shell/public/interfaces/interface_provider.mojom-shared.h"
namespace shell {
namespace mojom {

enum class ConnectResult : int32_t {
  SUCCEEDED,
  INVALID_ARGUMENT,
  ACCESS_DENIED,
};

inline std::ostream& operator<<(std::ostream& os, ConnectResult value) {
  switch(value) {
    case ConnectResult::SUCCEEDED:
      return os << "ConnectResult::SUCCEEDED";
    case ConnectResult::INVALID_ARGUMENT:
      return os << "ConnectResult::INVALID_ARGUMENT";
    case ConnectResult::ACCESS_DENIED:
      return os << "ConnectResult::ACCESS_DENIED";
    default:
      return os << "Unknown ConnectResult value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ConnectResult value) {
  return internal::ConnectResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace shell

namespace std {

template <>
struct hash<::shell::mojom::ConnectResult>
    : public mojo::internal::EnumHashImpl<::shell::mojom::ConnectResult> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::shell::mojom::ConnectResult, ::shell::mojom::ConnectResult> {
  static ::shell::mojom::ConnectResult ToMojom(::shell::mojom::ConnectResult input) { return input; }
  static bool FromMojom(::shell::mojom::ConnectResult input, ::shell::mojom::ConnectResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::shell::mojom::ConnectResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::shell::mojom::ConnectResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::shell::mojom::ConnectResult>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_SHELL_PUBLIC_INTERFACES_CONNECTOR_MOJOM_SHARED_H_
