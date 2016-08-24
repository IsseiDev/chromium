// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "media/mojo/interfaces/content_decryption_module.mojom-shared-internal.h"
#include "media/mojo/interfaces/decryptor.mojom-shared.h"
#include "url/mojo/url.mojom-shared.h"
namespace media {
namespace mojom {

enum class CdmException : int32_t {
  NOT_SUPPORTED_ERROR,
  INVALID_STATE_ERROR,
  INVALID_ACCESS_ERROR,
  QUOTA_EXCEEDED_ERROR,
  UNKNOWN_ERROR,
  CLIENT_ERROR,
  OUTPUT_ERROR,
};

inline std::ostream& operator<<(std::ostream& os, CdmException value) {
  switch(value) {
    case CdmException::NOT_SUPPORTED_ERROR:
      return os << "CdmException::NOT_SUPPORTED_ERROR";
    case CdmException::INVALID_STATE_ERROR:
      return os << "CdmException::INVALID_STATE_ERROR";
    case CdmException::INVALID_ACCESS_ERROR:
      return os << "CdmException::INVALID_ACCESS_ERROR";
    case CdmException::QUOTA_EXCEEDED_ERROR:
      return os << "CdmException::QUOTA_EXCEEDED_ERROR";
    case CdmException::UNKNOWN_ERROR:
      return os << "CdmException::UNKNOWN_ERROR";
    case CdmException::CLIENT_ERROR:
      return os << "CdmException::CLIENT_ERROR";
    case CdmException::OUTPUT_ERROR:
      return os << "CdmException::OUTPUT_ERROR";
    default:
      return os << "Unknown CdmException value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CdmException value) {
  return internal::CdmException_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CdmKeyStatus : int32_t {
  USABLE,
  INTERNAL_ERROR,
  EXPIRED,
  OUTPUT_RESTRICTED,
  OUTPUT_DOWNSCALED,
  KEY_STATUS_PENDING,
};

inline std::ostream& operator<<(std::ostream& os, CdmKeyStatus value) {
  switch(value) {
    case CdmKeyStatus::USABLE:
      return os << "CdmKeyStatus::USABLE";
    case CdmKeyStatus::INTERNAL_ERROR:
      return os << "CdmKeyStatus::INTERNAL_ERROR";
    case CdmKeyStatus::EXPIRED:
      return os << "CdmKeyStatus::EXPIRED";
    case CdmKeyStatus::OUTPUT_RESTRICTED:
      return os << "CdmKeyStatus::OUTPUT_RESTRICTED";
    case CdmKeyStatus::OUTPUT_DOWNSCALED:
      return os << "CdmKeyStatus::OUTPUT_DOWNSCALED";
    case CdmKeyStatus::KEY_STATUS_PENDING:
      return os << "CdmKeyStatus::KEY_STATUS_PENDING";
    default:
      return os << "Unknown CdmKeyStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CdmKeyStatus value) {
  return internal::CdmKeyStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CdmMessageType : int32_t {
  LICENSE_REQUEST,
  LICENSE_RENEWAL,
  LICENSE_RELEASE,
};

inline std::ostream& operator<<(std::ostream& os, CdmMessageType value) {
  switch(value) {
    case CdmMessageType::LICENSE_REQUEST:
      return os << "CdmMessageType::LICENSE_REQUEST";
    case CdmMessageType::LICENSE_RENEWAL:
      return os << "CdmMessageType::LICENSE_RENEWAL";
    case CdmMessageType::LICENSE_RELEASE:
      return os << "CdmMessageType::LICENSE_RELEASE";
    default:
      return os << "Unknown CdmMessageType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CdmMessageType value) {
  return internal::CdmMessageType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ContentDecryptionModule_SessionType : int32_t {
  TEMPORARY_SESSION,
  PERSISTENT_LICENSE_SESSION,
  PERSISTENT_RELEASE_MESSAGE_SESSION,
};

inline std::ostream& operator<<(std::ostream& os, ContentDecryptionModule_SessionType value) {
  switch(value) {
    case ContentDecryptionModule_SessionType::TEMPORARY_SESSION:
      return os << "ContentDecryptionModule_SessionType::TEMPORARY_SESSION";
    case ContentDecryptionModule_SessionType::PERSISTENT_LICENSE_SESSION:
      return os << "ContentDecryptionModule_SessionType::PERSISTENT_LICENSE_SESSION";
    case ContentDecryptionModule_SessionType::PERSISTENT_RELEASE_MESSAGE_SESSION:
      return os << "ContentDecryptionModule_SessionType::PERSISTENT_RELEASE_MESSAGE_SESSION";
    default:
      return os << "Unknown ContentDecryptionModule_SessionType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ContentDecryptionModule_SessionType value) {
  return internal::ContentDecryptionModule_SessionType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ContentDecryptionModule_InitDataType : int32_t {
  UNKNOWN,
  WEBM,
  CENC,
  KEYIDS,
};

inline std::ostream& operator<<(std::ostream& os, ContentDecryptionModule_InitDataType value) {
  switch(value) {
    case ContentDecryptionModule_InitDataType::UNKNOWN:
      return os << "ContentDecryptionModule_InitDataType::UNKNOWN";
    case ContentDecryptionModule_InitDataType::WEBM:
      return os << "ContentDecryptionModule_InitDataType::WEBM";
    case ContentDecryptionModule_InitDataType::CENC:
      return os << "ContentDecryptionModule_InitDataType::CENC";
    case ContentDecryptionModule_InitDataType::KEYIDS:
      return os << "ContentDecryptionModule_InitDataType::KEYIDS";
    default:
      return os << "Unknown ContentDecryptionModule_InitDataType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ContentDecryptionModule_InitDataType value) {
  return internal::ContentDecryptionModule_InitDataType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::CdmException>
    : public mojo::internal::EnumHashImpl<::media::mojom::CdmException> {};

template <>
struct hash<::media::mojom::CdmKeyStatus>
    : public mojo::internal::EnumHashImpl<::media::mojom::CdmKeyStatus> {};

template <>
struct hash<::media::mojom::CdmMessageType>
    : public mojo::internal::EnumHashImpl<::media::mojom::CdmMessageType> {};

template <>
struct hash<::media::mojom::ContentDecryptionModule_SessionType>
    : public mojo::internal::EnumHashImpl<::media::mojom::ContentDecryptionModule_SessionType> {};

template <>
struct hash<::media::mojom::ContentDecryptionModule_InitDataType>
    : public mojo::internal::EnumHashImpl<::media::mojom::ContentDecryptionModule_InitDataType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::CdmException, ::media::mojom::CdmException> {
  static ::media::mojom::CdmException ToMojom(::media::mojom::CdmException input) { return input; }
  static bool FromMojom(::media::mojom::CdmException input, ::media::mojom::CdmException* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmException, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::CdmException, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::CdmException>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::CdmKeyStatus, ::media::mojom::CdmKeyStatus> {
  static ::media::mojom::CdmKeyStatus ToMojom(::media::mojom::CdmKeyStatus input) { return input; }
  static bool FromMojom(::media::mojom::CdmKeyStatus input, ::media::mojom::CdmKeyStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmKeyStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::CdmKeyStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::CdmKeyStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::CdmMessageType, ::media::mojom::CdmMessageType> {
  static ::media::mojom::CdmMessageType ToMojom(::media::mojom::CdmMessageType input) { return input; }
  static bool FromMojom(::media::mojom::CdmMessageType input, ::media::mojom::CdmMessageType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CdmMessageType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::CdmMessageType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::CdmMessageType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::ContentDecryptionModule_SessionType, ::media::mojom::ContentDecryptionModule_SessionType> {
  static ::media::mojom::ContentDecryptionModule_SessionType ToMojom(::media::mojom::ContentDecryptionModule_SessionType input) { return input; }
  static bool FromMojom(::media::mojom::ContentDecryptionModule_SessionType input, ::media::mojom::ContentDecryptionModule_SessionType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::ContentDecryptionModule_SessionType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::ContentDecryptionModule_SessionType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::ContentDecryptionModule_SessionType>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::ContentDecryptionModule_InitDataType, ::media::mojom::ContentDecryptionModule_InitDataType> {
  static ::media::mojom::ContentDecryptionModule_InitDataType ToMojom(::media::mojom::ContentDecryptionModule_InitDataType input) { return input; }
  static bool FromMojom(::media::mojom::ContentDecryptionModule_InitDataType input, ::media::mojom::ContentDecryptionModule_InitDataType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::ContentDecryptionModule_InitDataType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::ContentDecryptionModule_InitDataType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::ContentDecryptionModule_InitDataType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_CONTENT_DECRYPTION_MODULE_MOJOM_SHARED_H_
