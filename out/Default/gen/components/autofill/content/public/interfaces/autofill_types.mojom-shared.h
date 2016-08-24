// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_PUBLIC_INTERFACES_AUTOFILL_TYPES_MOJOM_SHARED_H_
#define COMPONENTS_AUTOFILL_CONTENT_PUBLIC_INTERFACES_AUTOFILL_TYPES_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "components/autofill/content/public/interfaces/autofill_types.mojom-shared-internal.h"
#include "mojo/common/common_custom_types.mojom-shared.h"
#include "url/mojo/origin.mojom-shared.h"
#include "url/mojo/url.mojom-shared.h"
namespace autofill {
namespace mojom {

enum class CheckStatus : int32_t {
  NOT_CHECKABLE,
  CHECKABLE_BUT_UNCHECKED,
  CHECKED,
};

inline std::ostream& operator<<(std::ostream& os, CheckStatus value) {
  switch(value) {
    case CheckStatus::NOT_CHECKABLE:
      return os << "CheckStatus::NOT_CHECKABLE";
    case CheckStatus::CHECKABLE_BUT_UNCHECKED:
      return os << "CheckStatus::CHECKABLE_BUT_UNCHECKED";
    case CheckStatus::CHECKED:
      return os << "CheckStatus::CHECKED";
    default:
      return os << "Unknown CheckStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CheckStatus value) {
  return internal::CheckStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class RoleAttribute : int32_t {
  ROLE_ATTRIBUTE_PRESENTATION,
  ROLE_ATTRIBUTE_OTHER,
};

inline std::ostream& operator<<(std::ostream& os, RoleAttribute value) {
  switch(value) {
    case RoleAttribute::ROLE_ATTRIBUTE_PRESENTATION:
      return os << "RoleAttribute::ROLE_ATTRIBUTE_PRESENTATION";
    case RoleAttribute::ROLE_ATTRIBUTE_OTHER:
      return os << "RoleAttribute::ROLE_ATTRIBUTE_OTHER";
    default:
      return os << "Unknown RoleAttribute value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(RoleAttribute value) {
  return internal::RoleAttribute_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class TextDirection : int32_t {
  UNKNOWN_DIRECTION = 0,
  RIGHT_TO_LEFT = 1,
  LEFT_TO_RIGHT = 2,
  TEXT_DIRECTION_NUM_DIRECTIONS = 3,
};

inline std::ostream& operator<<(std::ostream& os, TextDirection value) {
  switch(value) {
    case TextDirection::UNKNOWN_DIRECTION:
      return os << "TextDirection::UNKNOWN_DIRECTION";
    case TextDirection::RIGHT_TO_LEFT:
      return os << "TextDirection::RIGHT_TO_LEFT";
    case TextDirection::LEFT_TO_RIGHT:
      return os << "TextDirection::LEFT_TO_RIGHT";
    case TextDirection::TEXT_DIRECTION_NUM_DIRECTIONS:
      return os << "TextDirection::TEXT_DIRECTION_NUM_DIRECTIONS";
    default:
      return os << "Unknown TextDirection value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(TextDirection value) {
  return internal::TextDirection_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class GenerationUploadStatus : int32_t {
  NO_SIGNAL_SENT,
  POSITIVE_SIGNAL_SENT,
  NEGATIVE_SIGNAL_SENT,
  UNKNOWN_STATUS = 10,
};

inline std::ostream& operator<<(std::ostream& os, GenerationUploadStatus value) {
  switch(value) {
    case GenerationUploadStatus::NO_SIGNAL_SENT:
      return os << "GenerationUploadStatus::NO_SIGNAL_SENT";
    case GenerationUploadStatus::POSITIVE_SIGNAL_SENT:
      return os << "GenerationUploadStatus::POSITIVE_SIGNAL_SENT";
    case GenerationUploadStatus::NEGATIVE_SIGNAL_SENT:
      return os << "GenerationUploadStatus::NEGATIVE_SIGNAL_SENT";
    case GenerationUploadStatus::UNKNOWN_STATUS:
      return os << "GenerationUploadStatus::UNKNOWN_STATUS";
    default:
      return os << "Unknown GenerationUploadStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(GenerationUploadStatus value) {
  return internal::GenerationUploadStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PasswordFormLayout : int32_t {
  LAYOUT_OTHER,
  LAYOUT_LOGIN_AND_SIGNUP,
};

inline std::ostream& operator<<(std::ostream& os, PasswordFormLayout value) {
  switch(value) {
    case PasswordFormLayout::LAYOUT_OTHER:
      return os << "PasswordFormLayout::LAYOUT_OTHER";
    case PasswordFormLayout::LAYOUT_LOGIN_AND_SIGNUP:
      return os << "PasswordFormLayout::LAYOUT_LOGIN_AND_SIGNUP";
    default:
      return os << "Unknown PasswordFormLayout value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PasswordFormLayout value) {
  return internal::PasswordFormLayout_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PasswordFormType : int32_t {
  TYPE_MANUAL,
  TYPE_GENERATED,
  TYPE_API,
};

inline std::ostream& operator<<(std::ostream& os, PasswordFormType value) {
  switch(value) {
    case PasswordFormType::TYPE_MANUAL:
      return os << "PasswordFormType::TYPE_MANUAL";
    case PasswordFormType::TYPE_GENERATED:
      return os << "PasswordFormType::TYPE_GENERATED";
    case PasswordFormType::TYPE_API:
      return os << "PasswordFormType::TYPE_API";
    default:
      return os << "Unknown PasswordFormType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PasswordFormType value) {
  return internal::PasswordFormType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PasswordFormScheme : int32_t {
  SCHEME_HTML,
  SCHEME_BASIC,
  SCHEME_DIGEST,
  SCHEME_OTHER,
  SCHEME_USERNAME_ONLY,
};

inline std::ostream& operator<<(std::ostream& os, PasswordFormScheme value) {
  switch(value) {
    case PasswordFormScheme::SCHEME_HTML:
      return os << "PasswordFormScheme::SCHEME_HTML";
    case PasswordFormScheme::SCHEME_BASIC:
      return os << "PasswordFormScheme::SCHEME_BASIC";
    case PasswordFormScheme::SCHEME_DIGEST:
      return os << "PasswordFormScheme::SCHEME_DIGEST";
    case PasswordFormScheme::SCHEME_OTHER:
      return os << "PasswordFormScheme::SCHEME_OTHER";
    case PasswordFormScheme::SCHEME_USERNAME_ONLY:
      return os << "PasswordFormScheme::SCHEME_USERNAME_ONLY";
    default:
      return os << "Unknown PasswordFormScheme value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PasswordFormScheme value) {
  return internal::PasswordFormScheme_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class PasswordFormFieldPredictionType : int32_t {
  PREDICTION_USERNAME,
  PREDICTION_CURRENT_PASSWORD,
  PREDICTION_NEW_PASSWORD,
  PREDICTION_NOT_PASSWORD,
};

inline std::ostream& operator<<(std::ostream& os, PasswordFormFieldPredictionType value) {
  switch(value) {
    case PasswordFormFieldPredictionType::PREDICTION_USERNAME:
      return os << "PasswordFormFieldPredictionType::PREDICTION_USERNAME";
    case PasswordFormFieldPredictionType::PREDICTION_CURRENT_PASSWORD:
      return os << "PasswordFormFieldPredictionType::PREDICTION_CURRENT_PASSWORD";
    case PasswordFormFieldPredictionType::PREDICTION_NEW_PASSWORD:
      return os << "PasswordFormFieldPredictionType::PREDICTION_NEW_PASSWORD";
    case PasswordFormFieldPredictionType::PREDICTION_NOT_PASSWORD:
      return os << "PasswordFormFieldPredictionType::PREDICTION_NOT_PASSWORD";
    default:
      return os << "Unknown PasswordFormFieldPredictionType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(PasswordFormFieldPredictionType value) {
  return internal::PasswordFormFieldPredictionType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace autofill

namespace std {

template <>
struct hash<::autofill::mojom::CheckStatus>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::CheckStatus> {};

template <>
struct hash<::autofill::mojom::RoleAttribute>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::RoleAttribute> {};

template <>
struct hash<::autofill::mojom::TextDirection>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::TextDirection> {};

template <>
struct hash<::autofill::mojom::GenerationUploadStatus>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::GenerationUploadStatus> {};

template <>
struct hash<::autofill::mojom::PasswordFormLayout>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::PasswordFormLayout> {};

template <>
struct hash<::autofill::mojom::PasswordFormType>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::PasswordFormType> {};

template <>
struct hash<::autofill::mojom::PasswordFormScheme>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::PasswordFormScheme> {};

template <>
struct hash<::autofill::mojom::PasswordFormFieldPredictionType>
    : public mojo::internal::EnumHashImpl<::autofill::mojom::PasswordFormFieldPredictionType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::autofill::mojom::CheckStatus, ::autofill::mojom::CheckStatus> {
  static ::autofill::mojom::CheckStatus ToMojom(::autofill::mojom::CheckStatus input) { return input; }
  static bool FromMojom(::autofill::mojom::CheckStatus input, ::autofill::mojom::CheckStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::CheckStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::CheckStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::CheckStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::RoleAttribute, ::autofill::mojom::RoleAttribute> {
  static ::autofill::mojom::RoleAttribute ToMojom(::autofill::mojom::RoleAttribute input) { return input; }
  static bool FromMojom(::autofill::mojom::RoleAttribute input, ::autofill::mojom::RoleAttribute* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::RoleAttribute, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::RoleAttribute, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::RoleAttribute>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::TextDirection, ::autofill::mojom::TextDirection> {
  static ::autofill::mojom::TextDirection ToMojom(::autofill::mojom::TextDirection input) { return input; }
  static bool FromMojom(::autofill::mojom::TextDirection input, ::autofill::mojom::TextDirection* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::TextDirection, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::TextDirection, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::TextDirection>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::GenerationUploadStatus, ::autofill::mojom::GenerationUploadStatus> {
  static ::autofill::mojom::GenerationUploadStatus ToMojom(::autofill::mojom::GenerationUploadStatus input) { return input; }
  static bool FromMojom(::autofill::mojom::GenerationUploadStatus input, ::autofill::mojom::GenerationUploadStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::GenerationUploadStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::GenerationUploadStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::GenerationUploadStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::PasswordFormLayout, ::autofill::mojom::PasswordFormLayout> {
  static ::autofill::mojom::PasswordFormLayout ToMojom(::autofill::mojom::PasswordFormLayout input) { return input; }
  static bool FromMojom(::autofill::mojom::PasswordFormLayout input, ::autofill::mojom::PasswordFormLayout* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormLayout, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::PasswordFormLayout, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::PasswordFormLayout>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::PasswordFormType, ::autofill::mojom::PasswordFormType> {
  static ::autofill::mojom::PasswordFormType ToMojom(::autofill::mojom::PasswordFormType input) { return input; }
  static bool FromMojom(::autofill::mojom::PasswordFormType input, ::autofill::mojom::PasswordFormType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::PasswordFormType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::PasswordFormType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::PasswordFormScheme, ::autofill::mojom::PasswordFormScheme> {
  static ::autofill::mojom::PasswordFormScheme ToMojom(::autofill::mojom::PasswordFormScheme input) { return input; }
  static bool FromMojom(::autofill::mojom::PasswordFormScheme input, ::autofill::mojom::PasswordFormScheme* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormScheme, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::PasswordFormScheme, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::PasswordFormScheme>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::autofill::mojom::PasswordFormFieldPredictionType, ::autofill::mojom::PasswordFormFieldPredictionType> {
  static ::autofill::mojom::PasswordFormFieldPredictionType ToMojom(::autofill::mojom::PasswordFormFieldPredictionType input) { return input; }
  static bool FromMojom(::autofill::mojom::PasswordFormFieldPredictionType input, ::autofill::mojom::PasswordFormFieldPredictionType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::autofill::mojom::PasswordFormFieldPredictionType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::autofill::mojom::PasswordFormFieldPredictionType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::autofill::mojom::PasswordFormFieldPredictionType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // COMPONENTS_AUTOFILL_CONTENT_PUBLIC_INTERFACES_AUTOFILL_TYPES_MOJOM_SHARED_H_
