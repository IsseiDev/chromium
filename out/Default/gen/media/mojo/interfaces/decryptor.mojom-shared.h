// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "media/mojo/interfaces/decryptor.mojom-shared-internal.h"
#include "media/mojo/interfaces/demuxer_stream.mojom-shared.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
namespace media {
namespace mojom {

enum class Decryptor_Status : int32_t {
  SUCCESS,
  NO_KEY,
  NEED_MORE_DATA,
  DECRYPTION_ERROR,
};

inline std::ostream& operator<<(std::ostream& os, Decryptor_Status value) {
  switch(value) {
    case Decryptor_Status::SUCCESS:
      return os << "Decryptor_Status::SUCCESS";
    case Decryptor_Status::NO_KEY:
      return os << "Decryptor_Status::NO_KEY";
    case Decryptor_Status::NEED_MORE_DATA:
      return os << "Decryptor_Status::NEED_MORE_DATA";
    case Decryptor_Status::DECRYPTION_ERROR:
      return os << "Decryptor_Status::DECRYPTION_ERROR";
    default:
      return os << "Unknown Decryptor_Status value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(Decryptor_Status value) {
  return internal::Decryptor_Status_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::Decryptor_Status>
    : public mojo::internal::EnumHashImpl<::media::mojom::Decryptor_Status> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::Decryptor_Status, ::media::mojom::Decryptor_Status> {
  static ::media::mojom::Decryptor_Status ToMojom(::media::mojom::Decryptor_Status input) { return input; }
  static bool FromMojom(::media::mojom::Decryptor_Status input, ::media::mojom::Decryptor_Status* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::Decryptor_Status, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::Decryptor_Status, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::Decryptor_Status>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_SHARED_H_
