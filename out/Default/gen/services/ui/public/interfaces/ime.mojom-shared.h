// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_IME_MOJOM_SHARED_H_
#define SERVICES_UI_PUBLIC_INTERFACES_IME_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "services/ui/public/interfaces/ime.mojom-shared-internal.h"
#include "ui/events/mojo/event.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
namespace ui {
namespace mojom {

enum class CompositionEventType : int32_t {
  UPDATE,
  CONFIRM,
  CLEAR,
  INSERT_CHAR,
  INSERT_TEXT,
};

inline std::ostream& operator<<(std::ostream& os, CompositionEventType value) {
  switch(value) {
    case CompositionEventType::UPDATE:
      return os << "CompositionEventType::UPDATE";
    case CompositionEventType::CONFIRM:
      return os << "CompositionEventType::CONFIRM";
    case CompositionEventType::CLEAR:
      return os << "CompositionEventType::CLEAR";
    case CompositionEventType::INSERT_CHAR:
      return os << "CompositionEventType::INSERT_CHAR";
    case CompositionEventType::INSERT_TEXT:
      return os << "CompositionEventType::INSERT_TEXT";
    default:
      return os << "Unknown CompositionEventType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CompositionEventType value) {
  return internal::CompositionEventType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TextInputType : int32_t {
  NONE,
  TEXT,
  PASSWORD,
  SEARCH,
  EMAIL,
  NUMBER,
  TELEPHONE,
  URL,
  DATE,
  TIME,
  DATETIME,
};

inline std::ostream& operator<<(std::ostream& os, TextInputType value) {
  switch(value) {
    case TextInputType::NONE:
      return os << "TextInputType::NONE";
    case TextInputType::TEXT:
      return os << "TextInputType::TEXT";
    case TextInputType::PASSWORD:
      return os << "TextInputType::PASSWORD";
    case TextInputType::SEARCH:
      return os << "TextInputType::SEARCH";
    case TextInputType::EMAIL:
      return os << "TextInputType::EMAIL";
    case TextInputType::NUMBER:
      return os << "TextInputType::NUMBER";
    case TextInputType::TELEPHONE:
      return os << "TextInputType::TELEPHONE";
    case TextInputType::URL:
      return os << "TextInputType::URL";
    case TextInputType::DATE:
      return os << "TextInputType::DATE";
    case TextInputType::TIME:
      return os << "TextInputType::TIME";
    case TextInputType::DATETIME:
      return os << "TextInputType::DATETIME";
    default:
      return os << "Unknown TextInputType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TextInputType value) {
  return internal::TextInputType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TextInputMode : int32_t {
  DEFAULT,
  VERBATIM,
  LATIN,
  LATIN_NAME,
  LATIN_PROSE,
  FULL_WIDTH_LATIN,
  KANA,
  KATAKANA,
  NUMERIC,
  TEL,
  EMAIL,
  URL,
};

inline std::ostream& operator<<(std::ostream& os, TextInputMode value) {
  switch(value) {
    case TextInputMode::DEFAULT:
      return os << "TextInputMode::DEFAULT";
    case TextInputMode::VERBATIM:
      return os << "TextInputMode::VERBATIM";
    case TextInputMode::LATIN:
      return os << "TextInputMode::LATIN";
    case TextInputMode::LATIN_NAME:
      return os << "TextInputMode::LATIN_NAME";
    case TextInputMode::LATIN_PROSE:
      return os << "TextInputMode::LATIN_PROSE";
    case TextInputMode::FULL_WIDTH_LATIN:
      return os << "TextInputMode::FULL_WIDTH_LATIN";
    case TextInputMode::KANA:
      return os << "TextInputMode::KANA";
    case TextInputMode::KATAKANA:
      return os << "TextInputMode::KATAKANA";
    case TextInputMode::NUMERIC:
      return os << "TextInputMode::NUMERIC";
    case TextInputMode::TEL:
      return os << "TextInputMode::TEL";
    case TextInputMode::EMAIL:
      return os << "TextInputMode::EMAIL";
    case TextInputMode::URL:
      return os << "TextInputMode::URL";
    default:
      return os << "Unknown TextInputMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TextInputMode value) {
  return internal::TextInputMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::CompositionEventType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::CompositionEventType> {};

template <>
struct hash<::ui::mojom::TextInputType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::TextInputType> {};

template <>
struct hash<::ui::mojom::TextInputMode>
    : public mojo::internal::EnumHashImpl<::ui::mojom::TextInputMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::CompositionEventType, ::ui::mojom::CompositionEventType> {
  static ::ui::mojom::CompositionEventType ToMojom(::ui::mojom::CompositionEventType input) { return input; }
  static bool FromMojom(::ui::mojom::CompositionEventType input, ::ui::mojom::CompositionEventType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::CompositionEventType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::CompositionEventType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::CompositionEventType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::TextInputType, ::ui::mojom::TextInputType> {
  static ::ui::mojom::TextInputType ToMojom(::ui::mojom::TextInputType input) { return input; }
  static bool FromMojom(::ui::mojom::TextInputType input, ::ui::mojom::TextInputType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TextInputType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::TextInputType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::TextInputType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::ui::mojom::TextInputMode, ::ui::mojom::TextInputMode> {
  static ::ui::mojom::TextInputMode ToMojom(::ui::mojom::TextInputMode input) { return input; }
  static bool FromMojom(::ui::mojom::TextInputMode input, ::ui::mojom::TextInputMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::TextInputMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::TextInputMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::TextInputMode>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_IME_MOJOM_SHARED_H_
