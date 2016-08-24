// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_GPU_INFO_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_GPU_INFO_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "gpu/ipc/common/gpu_info.mojom-shared-internal.h"
#include "gpu/ipc/common/dx_diag_node.mojom-shared.h"
#include "mojo/common/common_custom_types.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
namespace gpu {
namespace mojom {

enum class CollectInfoResult : int32_t {
  kCollectInfoNone = 0,
  kCollectInfoSuccess = 1,
  kCollectInfoNonFatalFailure = 2,
  kCollectInfoFatalFailure = 3,
};

inline std::ostream& operator<<(std::ostream& os, CollectInfoResult value) {
  switch(value) {
    case CollectInfoResult::kCollectInfoNone:
      return os << "CollectInfoResult::kCollectInfoNone";
    case CollectInfoResult::kCollectInfoSuccess:
      return os << "CollectInfoResult::kCollectInfoSuccess";
    case CollectInfoResult::kCollectInfoNonFatalFailure:
      return os << "CollectInfoResult::kCollectInfoNonFatalFailure";
    case CollectInfoResult::kCollectInfoFatalFailure:
      return os << "CollectInfoResult::kCollectInfoFatalFailure";
    default:
      return os << "Unknown CollectInfoResult value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CollectInfoResult value) {
  return internal::CollectInfoResult_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class VideoCodecProfile : int32_t {
  VIDEO_CODEC_PROFILE_UNKNOWN = -1,
  H264PROFILE_BASELINE = 0,
  H264PROFILE_MAIN,
  H264PROFILE_EXTENDED,
  H264PROFILE_HIGH,
  H264PROFILE_HIGH10PROFILE,
  H264PROFILE_HIGH422PROFILE,
  H264PROFILE_HIGH444PREDICTIVEPROFILE,
  H264PROFILE_SCALABLEBASELINE,
  H264PROFILE_SCALABLEHIGH,
  H264PROFILE_STEREOHIGH,
  H264PROFILE_MULTIVIEWHIGH,
  VP8PROFILE_ANY,
  VP9PROFILE_PROFILE0,
  VP9PROFILE_PROFILE1,
  VP9PROFILE_PROFILE2,
  VP9PROFILE_PROFILE3,
  HEVCPROFILE_MAIN,
  HEVCPROFILE_MAIN10,
  HEVCPROFILE_MAIN_STILL_PICTURE,
};

inline std::ostream& operator<<(std::ostream& os, VideoCodecProfile value) {
  switch(value) {
    case VideoCodecProfile::VIDEO_CODEC_PROFILE_UNKNOWN:
      return os << "VideoCodecProfile::VIDEO_CODEC_PROFILE_UNKNOWN";
    case VideoCodecProfile::H264PROFILE_BASELINE:
      return os << "VideoCodecProfile::H264PROFILE_BASELINE";
    case VideoCodecProfile::H264PROFILE_MAIN:
      return os << "VideoCodecProfile::H264PROFILE_MAIN";
    case VideoCodecProfile::H264PROFILE_EXTENDED:
      return os << "VideoCodecProfile::H264PROFILE_EXTENDED";
    case VideoCodecProfile::H264PROFILE_HIGH:
      return os << "VideoCodecProfile::H264PROFILE_HIGH";
    case VideoCodecProfile::H264PROFILE_HIGH10PROFILE:
      return os << "VideoCodecProfile::H264PROFILE_HIGH10PROFILE";
    case VideoCodecProfile::H264PROFILE_HIGH422PROFILE:
      return os << "VideoCodecProfile::H264PROFILE_HIGH422PROFILE";
    case VideoCodecProfile::H264PROFILE_HIGH444PREDICTIVEPROFILE:
      return os << "VideoCodecProfile::H264PROFILE_HIGH444PREDICTIVEPROFILE";
    case VideoCodecProfile::H264PROFILE_SCALABLEBASELINE:
      return os << "VideoCodecProfile::H264PROFILE_SCALABLEBASELINE";
    case VideoCodecProfile::H264PROFILE_SCALABLEHIGH:
      return os << "VideoCodecProfile::H264PROFILE_SCALABLEHIGH";
    case VideoCodecProfile::H264PROFILE_STEREOHIGH:
      return os << "VideoCodecProfile::H264PROFILE_STEREOHIGH";
    case VideoCodecProfile::H264PROFILE_MULTIVIEWHIGH:
      return os << "VideoCodecProfile::H264PROFILE_MULTIVIEWHIGH";
    case VideoCodecProfile::VP8PROFILE_ANY:
      return os << "VideoCodecProfile::VP8PROFILE_ANY";
    case VideoCodecProfile::VP9PROFILE_PROFILE0:
      return os << "VideoCodecProfile::VP9PROFILE_PROFILE0";
    case VideoCodecProfile::VP9PROFILE_PROFILE1:
      return os << "VideoCodecProfile::VP9PROFILE_PROFILE1";
    case VideoCodecProfile::VP9PROFILE_PROFILE2:
      return os << "VideoCodecProfile::VP9PROFILE_PROFILE2";
    case VideoCodecProfile::VP9PROFILE_PROFILE3:
      return os << "VideoCodecProfile::VP9PROFILE_PROFILE3";
    case VideoCodecProfile::HEVCPROFILE_MAIN:
      return os << "VideoCodecProfile::HEVCPROFILE_MAIN";
    case VideoCodecProfile::HEVCPROFILE_MAIN10:
      return os << "VideoCodecProfile::HEVCPROFILE_MAIN10";
    case VideoCodecProfile::HEVCPROFILE_MAIN_STILL_PICTURE:
      return os << "VideoCodecProfile::HEVCPROFILE_MAIN_STILL_PICTURE";
    default:
      return os << "Unknown VideoCodecProfile value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoCodecProfile value) {
  return internal::VideoCodecProfile_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace gpu

namespace std {

template <>
struct hash<::gpu::mojom::CollectInfoResult>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::CollectInfoResult> {};

template <>
struct hash<::gpu::mojom::VideoCodecProfile>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::VideoCodecProfile> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::gpu::mojom::CollectInfoResult, ::gpu::mojom::CollectInfoResult> {
  static ::gpu::mojom::CollectInfoResult ToMojom(::gpu::mojom::CollectInfoResult input) { return input; }
  static bool FromMojom(::gpu::mojom::CollectInfoResult input, ::gpu::mojom::CollectInfoResult* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::CollectInfoResult, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::CollectInfoResult, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gpu::mojom::CollectInfoResult>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::gpu::mojom::VideoCodecProfile, ::gpu::mojom::VideoCodecProfile> {
  static ::gpu::mojom::VideoCodecProfile ToMojom(::gpu::mojom::VideoCodecProfile input) { return input; }
  static bool FromMojom(::gpu::mojom::VideoCodecProfile input, ::gpu::mojom::VideoCodecProfile* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::VideoCodecProfile, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::VideoCodecProfile, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::gpu::mojom::VideoCodecProfile>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // GPU_IPC_COMMON_GPU_INFO_MOJOM_SHARED_H_
