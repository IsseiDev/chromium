// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IPC_IPC_MOJOM_SHARED_H_
#define IPC_IPC_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "ipc/ipc.mojom-shared-internal.h"
namespace IPC {
namespace mojom {

enum class SerializedHandle_Type : int32_t {
  MOJO_HANDLE,
  PLATFORM_FILE,
  WIN_HANDLE,
  MACH_PORT,
};

inline std::ostream& operator<<(std::ostream& os, SerializedHandle_Type value) {
  switch(value) {
    case SerializedHandle_Type::MOJO_HANDLE:
      return os << "SerializedHandle_Type::MOJO_HANDLE";
    case SerializedHandle_Type::PLATFORM_FILE:
      return os << "SerializedHandle_Type::PLATFORM_FILE";
    case SerializedHandle_Type::WIN_HANDLE:
      return os << "SerializedHandle_Type::WIN_HANDLE";
    case SerializedHandle_Type::MACH_PORT:
      return os << "SerializedHandle_Type::MACH_PORT";
    default:
      return os << "Unknown SerializedHandle_Type value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SerializedHandle_Type value) {
  return internal::SerializedHandle_Type_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace IPC

namespace std {

template <>
struct hash<::IPC::mojom::SerializedHandle_Type>
    : public mojo::internal::EnumHashImpl<::IPC::mojom::SerializedHandle_Type> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::IPC::mojom::SerializedHandle_Type, ::IPC::mojom::SerializedHandle_Type> {
  static ::IPC::mojom::SerializedHandle_Type ToMojom(::IPC::mojom::SerializedHandle_Type input) { return input; }
  static bool FromMojom(::IPC::mojom::SerializedHandle_Type input, ::IPC::mojom::SerializedHandle_Type* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::IPC::mojom::SerializedHandle_Type, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::IPC::mojom::SerializedHandle_Type, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::IPC::mojom::SerializedHandle_Type>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // IPC_IPC_MOJOM_SHARED_H_
