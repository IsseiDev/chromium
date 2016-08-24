// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "services/ui/public/interfaces/clipboard.mojom-shared-internal.h"
namespace ui {
namespace mojom {

enum class Clipboard_Type : int32_t {
  COPY_PASTE = 0,
  SELECTION = 1,
  DRAG = 2,
};

inline std::ostream& operator<<(std::ostream& os, Clipboard_Type value) {
  switch(value) {
    case Clipboard_Type::COPY_PASTE:
      return os << "Clipboard_Type::COPY_PASTE";
    case Clipboard_Type::SELECTION:
      return os << "Clipboard_Type::SELECTION";
    case Clipboard_Type::DRAG:
      return os << "Clipboard_Type::DRAG";
    default:
      return os << "Unknown Clipboard_Type value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Clipboard_Type value) {
  return internal::Clipboard_Type_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::Clipboard_Type>
    : public mojo::internal::EnumHashImpl<::ui::mojom::Clipboard_Type> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::Clipboard_Type, ::ui::mojom::Clipboard_Type> {
  static ::ui::mojom::Clipboard_Type ToMojom(::ui::mojom::Clipboard_Type input) { return input; }
  static bool FromMojom(::ui::mojom::Clipboard_Type input, ::ui::mojom::Clipboard_Type* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::Clipboard_Type, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::Clipboard_Type, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::Clipboard_Type>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_CLIPBOARD_MOJOM_SHARED_H_
