// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_H_
#define COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "components/translate/content/common/translate.mojom-shared-internal.h"
#include "mojo/common/common_custom_types.mojom-shared.h"
#include "url/mojo/url.mojom-shared.h"
namespace translate {
namespace mojom {

enum class TranslateError : int32_t {
  NONE,
  NETWORK,
  INITIALIZATION_ERROR,
  UNKNOWN_LANGUAGE,
  UNSUPPORTED_LANGUAGE,
  IDENTICAL_LANGUAGES,
  TRANSLATION_ERROR,
  TRANSLATION_TIMEOUT,
  UNEXPECTED_SCRIPT_ERROR,
  BAD_ORIGIN,
  SCRIPT_LOAD_ERROR,
  TRANSLATE_ERROR_MAX,
};

inline std::ostream& operator<<(std::ostream& os, TranslateError value) {
  switch(value) {
    case TranslateError::NONE:
      return os << "TranslateError::NONE";
    case TranslateError::NETWORK:
      return os << "TranslateError::NETWORK";
    case TranslateError::INITIALIZATION_ERROR:
      return os << "TranslateError::INITIALIZATION_ERROR";
    case TranslateError::UNKNOWN_LANGUAGE:
      return os << "TranslateError::UNKNOWN_LANGUAGE";
    case TranslateError::UNSUPPORTED_LANGUAGE:
      return os << "TranslateError::UNSUPPORTED_LANGUAGE";
    case TranslateError::IDENTICAL_LANGUAGES:
      return os << "TranslateError::IDENTICAL_LANGUAGES";
    case TranslateError::TRANSLATION_ERROR:
      return os << "TranslateError::TRANSLATION_ERROR";
    case TranslateError::TRANSLATION_TIMEOUT:
      return os << "TranslateError::TRANSLATION_TIMEOUT";
    case TranslateError::UNEXPECTED_SCRIPT_ERROR:
      return os << "TranslateError::UNEXPECTED_SCRIPT_ERROR";
    case TranslateError::BAD_ORIGIN:
      return os << "TranslateError::BAD_ORIGIN";
    case TranslateError::SCRIPT_LOAD_ERROR:
      return os << "TranslateError::SCRIPT_LOAD_ERROR";
    case TranslateError::TRANSLATE_ERROR_MAX:
      return os << "TranslateError::TRANSLATE_ERROR_MAX";
    default:
      return os << "Unknown TranslateError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TranslateError value) {
  return internal::TranslateError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace translate

namespace std {

template <>
struct hash<::translate::mojom::TranslateError>
    : public mojo::internal::EnumHashImpl<::translate::mojom::TranslateError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::translate::mojom::TranslateError, ::translate::mojom::TranslateError> {
  static ::translate::mojom::TranslateError ToMojom(::translate::mojom::TranslateError input) { return input; }
  static bool FromMojom(::translate::mojom::TranslateError input, ::translate::mojom::TranslateError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::translate::mojom::TranslateError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::translate::mojom::TranslateError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::translate::mojom::TranslateError>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_SHARED_H_
