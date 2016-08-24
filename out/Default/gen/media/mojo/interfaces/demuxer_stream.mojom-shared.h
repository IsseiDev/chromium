// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "media/mojo/interfaces/demuxer_stream.mojom-shared-internal.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
namespace media {
namespace mojom {

enum class DemuxerStream_Type : int32_t {
  UNKNOWN,
  AUDIO,
  VIDEO,
  LAST_TYPE = DemuxerStream_Type::VIDEO,
};

inline std::ostream& operator<<(std::ostream& os, DemuxerStream_Type value) {
  switch(value) {
    case DemuxerStream_Type::UNKNOWN:
      return os << "DemuxerStream_Type::UNKNOWN";
    case DemuxerStream_Type::AUDIO:
      return os << "DemuxerStream_Type::AUDIO";
    case DemuxerStream_Type::VIDEO:
      return os << "DemuxerStream_Type::{VIDEO, LAST_TYPE}";
    default:
      return os << "Unknown DemuxerStream_Type value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DemuxerStream_Type value) {
  return internal::DemuxerStream_Type_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class DemuxerStream_Status : int32_t {
  OK = 0,
  ABORTED,
  CONFIG_CHANGED,
};

inline std::ostream& operator<<(std::ostream& os, DemuxerStream_Status value) {
  switch(value) {
    case DemuxerStream_Status::OK:
      return os << "DemuxerStream_Status::OK";
    case DemuxerStream_Status::ABORTED:
      return os << "DemuxerStream_Status::ABORTED";
    case DemuxerStream_Status::CONFIG_CHANGED:
      return os << "DemuxerStream_Status::CONFIG_CHANGED";
    default:
      return os << "Unknown DemuxerStream_Status value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DemuxerStream_Status value) {
  return internal::DemuxerStream_Status_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::DemuxerStream_Type>
    : public mojo::internal::EnumHashImpl<::media::mojom::DemuxerStream_Type> {};

template <>
struct hash<::media::mojom::DemuxerStream_Status>
    : public mojo::internal::EnumHashImpl<::media::mojom::DemuxerStream_Status> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::DemuxerStream_Type, ::media::mojom::DemuxerStream_Type> {
  static ::media::mojom::DemuxerStream_Type ToMojom(::media::mojom::DemuxerStream_Type input) { return input; }
  static bool FromMojom(::media::mojom::DemuxerStream_Type input, ::media::mojom::DemuxerStream_Type* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::DemuxerStream_Type, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::DemuxerStream_Type, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::DemuxerStream_Type>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::DemuxerStream_Status, ::media::mojom::DemuxerStream_Status> {
  static ::media::mojom::DemuxerStream_Status ToMojom(::media::mojom::DemuxerStream_Status input) { return input; }
  static bool FromMojom(::media::mojom::DemuxerStream_Status input, ::media::mojom::DemuxerStream_Status* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::DemuxerStream_Status, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::DemuxerStream_Status, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::DemuxerStream_Status>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_SHARED_H_
