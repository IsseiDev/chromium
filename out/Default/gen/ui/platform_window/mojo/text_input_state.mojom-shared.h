// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_SHARED_H_
#define UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "ui/platform_window/mojo/text_input_state.mojom-shared-internal.h"
namespace mojo {

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
  DATE_TIME,
  DATE_TIME_LOCAL,
  MONTH,
  TIME,
  WEEK,
  TEXT_AREA,
  LAST = TextInputType::TEXT_AREA,
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
    case TextInputType::DATE_TIME:
      return os << "TextInputType::DATE_TIME";
    case TextInputType::DATE_TIME_LOCAL:
      return os << "TextInputType::DATE_TIME_LOCAL";
    case TextInputType::MONTH:
      return os << "TextInputType::MONTH";
    case TextInputType::TIME:
      return os << "TextInputType::TIME";
    case TextInputType::WEEK:
      return os << "TextInputType::WEEK";
    case TextInputType::TEXT_AREA:
      return os << "TextInputType::{TEXT_AREA, LAST}";
    default:
      return os << "Unknown TextInputType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TextInputType value) {
  return internal::TextInputType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TextInputFlag : int32_t {
  NONE,
  AUTOCOMPLETE_ON = 0x001,
  AUTOCOMPLETE_OFF = 0x002,
  AUTOCORRECT_ON = 0x004,
  AUTOCORRECT_OFF = 0x008,
  SPELLCHECK_ON = 0x010,
  SPELLCHECK_OFF = 0x020,
  AUTOCAPITALIZE_NONE = 0x040,
  AUTOCAPITALIZE_CHARACTERS = 0x080,
  AUTOCAPITALIZE_WORDS = 0x100,
  AUTOCAPITALIZE_SENTENCES = 0x200,
  ALL = 0x3FF,
};

inline std::ostream& operator<<(std::ostream& os, TextInputFlag value) {
  switch(value) {
    case TextInputFlag::NONE:
      return os << "TextInputFlag::NONE";
    case TextInputFlag::AUTOCOMPLETE_ON:
      return os << "TextInputFlag::AUTOCOMPLETE_ON";
    case TextInputFlag::AUTOCOMPLETE_OFF:
      return os << "TextInputFlag::AUTOCOMPLETE_OFF";
    case TextInputFlag::AUTOCORRECT_ON:
      return os << "TextInputFlag::AUTOCORRECT_ON";
    case TextInputFlag::AUTOCORRECT_OFF:
      return os << "TextInputFlag::AUTOCORRECT_OFF";
    case TextInputFlag::SPELLCHECK_ON:
      return os << "TextInputFlag::SPELLCHECK_ON";
    case TextInputFlag::SPELLCHECK_OFF:
      return os << "TextInputFlag::SPELLCHECK_OFF";
    case TextInputFlag::AUTOCAPITALIZE_NONE:
      return os << "TextInputFlag::AUTOCAPITALIZE_NONE";
    case TextInputFlag::AUTOCAPITALIZE_CHARACTERS:
      return os << "TextInputFlag::AUTOCAPITALIZE_CHARACTERS";
    case TextInputFlag::AUTOCAPITALIZE_WORDS:
      return os << "TextInputFlag::AUTOCAPITALIZE_WORDS";
    case TextInputFlag::AUTOCAPITALIZE_SENTENCES:
      return os << "TextInputFlag::AUTOCAPITALIZE_SENTENCES";
    case TextInputFlag::ALL:
      return os << "TextInputFlag::ALL";
    default:
      return os << "Unknown TextInputFlag value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TextInputFlag value) {
  return internal::TextInputFlag_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojo

namespace std {

template <>
struct hash<::mojo::TextInputType>
    : public mojo::internal::EnumHashImpl<::mojo::TextInputType> {};

template <>
struct hash<::mojo::TextInputFlag>
    : public mojo::internal::EnumHashImpl<::mojo::TextInputFlag> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::mojo::TextInputType, ::mojo::TextInputType> {
  static ::mojo::TextInputType ToMojom(::mojo::TextInputType input) { return input; }
  static bool FromMojom(::mojo::TextInputType input, ::mojo::TextInputType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::TextInputType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::TextInputType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::TextInputType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::mojo::TextInputFlag, ::mojo::TextInputFlag> {
  static ::mojo::TextInputFlag ToMojom(::mojo::TextInputFlag input) { return input; }
  static bool FromMojom(::mojo::TextInputFlag input, ::mojo::TextInputFlag* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojo::TextInputFlag, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::mojo::TextInputFlag, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::mojo::TextInputFlag>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // UI_PLATFORM_WINDOW_MOJO_TEXT_INPUT_STATE_MOJOM_SHARED_H_
