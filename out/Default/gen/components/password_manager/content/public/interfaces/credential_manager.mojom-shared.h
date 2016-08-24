// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PASSWORD_MANAGER_CONTENT_PUBLIC_INTERFACES_CREDENTIAL_MANAGER_MOJOM_SHARED_H_
#define COMPONENTS_PASSWORD_MANAGER_CONTENT_PUBLIC_INTERFACES_CREDENTIAL_MANAGER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "components/password_manager/content/public/interfaces/credential_manager.mojom-shared-internal.h"
#include "url/mojo/origin.mojom-shared.h"
#include "url/mojo/url.mojom-shared.h"
namespace password_manager {
namespace mojom {

enum class CredentialType : int32_t {
  EMPTY,
  PASSWORD,
  FEDERATED,
};

inline std::ostream& operator<<(std::ostream& os, CredentialType value) {
  switch(value) {
    case CredentialType::EMPTY:
      return os << "CredentialType::EMPTY";
    case CredentialType::PASSWORD:
      return os << "CredentialType::PASSWORD";
    case CredentialType::FEDERATED:
      return os << "CredentialType::FEDERATED";
    default:
      return os << "Unknown CredentialType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CredentialType value) {
  return internal::CredentialType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CredentialManagerError : int32_t {
  SUCCESS,
  DISABLED,
  PENDINGREQUEST,
  PASSWORDSTOREUNAVAILABLE,
  UNKNOWN,
};

inline std::ostream& operator<<(std::ostream& os, CredentialManagerError value) {
  switch(value) {
    case CredentialManagerError::SUCCESS:
      return os << "CredentialManagerError::SUCCESS";
    case CredentialManagerError::DISABLED:
      return os << "CredentialManagerError::DISABLED";
    case CredentialManagerError::PENDINGREQUEST:
      return os << "CredentialManagerError::PENDINGREQUEST";
    case CredentialManagerError::PASSWORDSTOREUNAVAILABLE:
      return os << "CredentialManagerError::PASSWORDSTOREUNAVAILABLE";
    case CredentialManagerError::UNKNOWN:
      return os << "CredentialManagerError::UNKNOWN";
    default:
      return os << "Unknown CredentialManagerError value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CredentialManagerError value) {
  return internal::CredentialManagerError_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace password_manager

namespace std {

template <>
struct hash<::password_manager::mojom::CredentialType>
    : public mojo::internal::EnumHashImpl<::password_manager::mojom::CredentialType> {};

template <>
struct hash<::password_manager::mojom::CredentialManagerError>
    : public mojo::internal::EnumHashImpl<::password_manager::mojom::CredentialManagerError> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::password_manager::mojom::CredentialType, ::password_manager::mojom::CredentialType> {
  static ::password_manager::mojom::CredentialType ToMojom(::password_manager::mojom::CredentialType input) { return input; }
  static bool FromMojom(::password_manager::mojom::CredentialType input, ::password_manager::mojom::CredentialType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::password_manager::mojom::CredentialType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::password_manager::mojom::CredentialType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::password_manager::mojom::CredentialType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::password_manager::mojom::CredentialManagerError, ::password_manager::mojom::CredentialManagerError> {
  static ::password_manager::mojom::CredentialManagerError ToMojom(::password_manager::mojom::CredentialManagerError input) { return input; }
  static bool FromMojom(::password_manager::mojom::CredentialManagerError input, ::password_manager::mojom::CredentialManagerError* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::password_manager::mojom::CredentialManagerError, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::password_manager::mojom::CredentialManagerError, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::password_manager::mojom::CredentialManagerError>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // COMPONENTS_PASSWORD_MANAGER_CONTENT_PUBLIC_INTERFACES_CREDENTIAL_MANAGER_MOJOM_SHARED_H_
