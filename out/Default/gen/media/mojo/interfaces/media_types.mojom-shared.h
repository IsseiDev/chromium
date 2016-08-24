// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_SHARED_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "media/mojo/interfaces/media_types.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
#include "mojo/common/common_custom_types.mojom-shared.h"
namespace media {
namespace mojom {

enum class BufferingState : int32_t {
  HAVE_NOTHING,
  HAVE_ENOUGH,
};

inline std::ostream& operator<<(std::ostream& os, BufferingState value) {
  switch(value) {
    case BufferingState::HAVE_NOTHING:
      return os << "BufferingState::HAVE_NOTHING";
    case BufferingState::HAVE_ENOUGH:
      return os << "BufferingState::HAVE_ENOUGH";
    default:
      return os << "Unknown BufferingState value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(BufferingState value) {
  return internal::BufferingState_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class DecodeStatus : int32_t {
  OK,
  ABORTED,
  DECODE_ERROR,
};

inline std::ostream& operator<<(std::ostream& os, DecodeStatus value) {
  switch(value) {
    case DecodeStatus::OK:
      return os << "DecodeStatus::OK";
    case DecodeStatus::ABORTED:
      return os << "DecodeStatus::ABORTED";
    case DecodeStatus::DECODE_ERROR:
      return os << "DecodeStatus::DECODE_ERROR";
    default:
      return os << "Unknown DecodeStatus value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(DecodeStatus value) {
  return internal::DecodeStatus_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class AudioCodec : int32_t {
  UNKNOWN = 0,
  AAC = 1,
  MP3 = 2,
  PCM = 3,
  Vorbis = 4,
  FLAC = 5,
  AMR_NB = 6,
  AMR_WB = 7,
  PCM_MULAW = 8,
  GSM_MS = 9,
  PCM_S16BE = 10,
  PCM_S24BE = 11,
  Opus = 12,
  EAC3 = 13,
  PCM_ALAW = 14,
  ALAC = 15,
  AC3 = 16,
  MAX = AudioCodec::AC3,
};

inline std::ostream& operator<<(std::ostream& os, AudioCodec value) {
  switch(value) {
    case AudioCodec::UNKNOWN:
      return os << "AudioCodec::UNKNOWN";
    case AudioCodec::AAC:
      return os << "AudioCodec::AAC";
    case AudioCodec::MP3:
      return os << "AudioCodec::MP3";
    case AudioCodec::PCM:
      return os << "AudioCodec::PCM";
    case AudioCodec::Vorbis:
      return os << "AudioCodec::Vorbis";
    case AudioCodec::FLAC:
      return os << "AudioCodec::FLAC";
    case AudioCodec::AMR_NB:
      return os << "AudioCodec::AMR_NB";
    case AudioCodec::AMR_WB:
      return os << "AudioCodec::AMR_WB";
    case AudioCodec::PCM_MULAW:
      return os << "AudioCodec::PCM_MULAW";
    case AudioCodec::GSM_MS:
      return os << "AudioCodec::GSM_MS";
    case AudioCodec::PCM_S16BE:
      return os << "AudioCodec::PCM_S16BE";
    case AudioCodec::PCM_S24BE:
      return os << "AudioCodec::PCM_S24BE";
    case AudioCodec::Opus:
      return os << "AudioCodec::Opus";
    case AudioCodec::EAC3:
      return os << "AudioCodec::EAC3";
    case AudioCodec::PCM_ALAW:
      return os << "AudioCodec::PCM_ALAW";
    case AudioCodec::ALAC:
      return os << "AudioCodec::ALAC";
    case AudioCodec::AC3:
      return os << "AudioCodec::{AC3, MAX}";
    default:
      return os << "Unknown AudioCodec value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(AudioCodec value) {
  return internal::AudioCodec_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ChannelLayout : int32_t {
  k_NONE = 0,
  k_UNSUPPORTED = 1,
  k_MONO = 2,
  k_STEREO = 3,
  k_2_1 = 4,
  k_SURROUND = 5,
  k_4_0 = 6,
  k_2_2 = 7,
  k_QUAD = 8,
  k_5_0 = 9,
  k_5_1 = 10,
  k_5_0_BACK = 11,
  k_5_1_BACK = 12,
  k_7_0 = 13,
  k_7_1 = 14,
  k_7_1_WIDE = 15,
  k_STEREO_DOWNMIX = 16,
  k_2POINT1 = 17,
  k_3_1 = 18,
  k_4_1 = 19,
  k_6_0 = 20,
  k_6_0_FRONT = 21,
  k_HEXAGONAL = 22,
  k_6_1 = 23,
  k_6_1_BACK = 24,
  k_6_1_FRONT = 25,
  k_7_0_FRONT = 26,
  k_7_1_WIDE_BACK = 27,
  k_OCTAGONAL = 28,
  k_DISCRETE = 29,
  k_STEREO_AND_KEYBOARD_MIC = 30,
  k_4_1_QUAD_SIDE = 31,
  k_MAX = ChannelLayout::k_4_1_QUAD_SIDE,
};

inline std::ostream& operator<<(std::ostream& os, ChannelLayout value) {
  switch(value) {
    case ChannelLayout::k_NONE:
      return os << "ChannelLayout::k_NONE";
    case ChannelLayout::k_UNSUPPORTED:
      return os << "ChannelLayout::k_UNSUPPORTED";
    case ChannelLayout::k_MONO:
      return os << "ChannelLayout::k_MONO";
    case ChannelLayout::k_STEREO:
      return os << "ChannelLayout::k_STEREO";
    case ChannelLayout::k_2_1:
      return os << "ChannelLayout::k_2_1";
    case ChannelLayout::k_SURROUND:
      return os << "ChannelLayout::k_SURROUND";
    case ChannelLayout::k_4_0:
      return os << "ChannelLayout::k_4_0";
    case ChannelLayout::k_2_2:
      return os << "ChannelLayout::k_2_2";
    case ChannelLayout::k_QUAD:
      return os << "ChannelLayout::k_QUAD";
    case ChannelLayout::k_5_0:
      return os << "ChannelLayout::k_5_0";
    case ChannelLayout::k_5_1:
      return os << "ChannelLayout::k_5_1";
    case ChannelLayout::k_5_0_BACK:
      return os << "ChannelLayout::k_5_0_BACK";
    case ChannelLayout::k_5_1_BACK:
      return os << "ChannelLayout::k_5_1_BACK";
    case ChannelLayout::k_7_0:
      return os << "ChannelLayout::k_7_0";
    case ChannelLayout::k_7_1:
      return os << "ChannelLayout::k_7_1";
    case ChannelLayout::k_7_1_WIDE:
      return os << "ChannelLayout::k_7_1_WIDE";
    case ChannelLayout::k_STEREO_DOWNMIX:
      return os << "ChannelLayout::k_STEREO_DOWNMIX";
    case ChannelLayout::k_2POINT1:
      return os << "ChannelLayout::k_2POINT1";
    case ChannelLayout::k_3_1:
      return os << "ChannelLayout::k_3_1";
    case ChannelLayout::k_4_1:
      return os << "ChannelLayout::k_4_1";
    case ChannelLayout::k_6_0:
      return os << "ChannelLayout::k_6_0";
    case ChannelLayout::k_6_0_FRONT:
      return os << "ChannelLayout::k_6_0_FRONT";
    case ChannelLayout::k_HEXAGONAL:
      return os << "ChannelLayout::k_HEXAGONAL";
    case ChannelLayout::k_6_1:
      return os << "ChannelLayout::k_6_1";
    case ChannelLayout::k_6_1_BACK:
      return os << "ChannelLayout::k_6_1_BACK";
    case ChannelLayout::k_6_1_FRONT:
      return os << "ChannelLayout::k_6_1_FRONT";
    case ChannelLayout::k_7_0_FRONT:
      return os << "ChannelLayout::k_7_0_FRONT";
    case ChannelLayout::k_7_1_WIDE_BACK:
      return os << "ChannelLayout::k_7_1_WIDE_BACK";
    case ChannelLayout::k_OCTAGONAL:
      return os << "ChannelLayout::k_OCTAGONAL";
    case ChannelLayout::k_DISCRETE:
      return os << "ChannelLayout::k_DISCRETE";
    case ChannelLayout::k_STEREO_AND_KEYBOARD_MIC:
      return os << "ChannelLayout::k_STEREO_AND_KEYBOARD_MIC";
    case ChannelLayout::k_4_1_QUAD_SIDE:
      return os << "ChannelLayout::{k_4_1_QUAD_SIDE, k_MAX}";
    default:
      return os << "Unknown ChannelLayout value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ChannelLayout value) {
  return internal::ChannelLayout_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class SampleFormat : int32_t {
  UNKNOWN = 0,
  U8,
  S16,
  S32,
  F32,
  PlanarS16,
  PlanarF32,
  PlanarS32,
  S24,
  Max = SampleFormat::S24,
};

inline std::ostream& operator<<(std::ostream& os, SampleFormat value) {
  switch(value) {
    case SampleFormat::UNKNOWN:
      return os << "SampleFormat::UNKNOWN";
    case SampleFormat::U8:
      return os << "SampleFormat::U8";
    case SampleFormat::S16:
      return os << "SampleFormat::S16";
    case SampleFormat::S32:
      return os << "SampleFormat::S32";
    case SampleFormat::F32:
      return os << "SampleFormat::F32";
    case SampleFormat::PlanarS16:
      return os << "SampleFormat::PlanarS16";
    case SampleFormat::PlanarF32:
      return os << "SampleFormat::PlanarF32";
    case SampleFormat::PlanarS32:
      return os << "SampleFormat::PlanarS32";
    case SampleFormat::S24:
      return os << "SampleFormat::{S24, Max}";
    default:
      return os << "Unknown SampleFormat value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(SampleFormat value) {
  return internal::SampleFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class VideoFormat : int32_t {
  UNKNOWN = 0,
  I420,
  YV12,
  YV16,
  YV12A,
  YV24,
  NV12,
  NV21,
  UYVY,
  YUY2,
  ARGB,
  XRGB,
  RGB24,
  RGB32,
  MJPEG,
  MT21,
  YUV420P9,
  YUV420P10,
  YUV422P9,
  YUV422P10,
  YUV444P9,
  YUV444P10,
  FORMAT_MAX = VideoFormat::YUV444P10,
};

inline std::ostream& operator<<(std::ostream& os, VideoFormat value) {
  switch(value) {
    case VideoFormat::UNKNOWN:
      return os << "VideoFormat::UNKNOWN";
    case VideoFormat::I420:
      return os << "VideoFormat::I420";
    case VideoFormat::YV12:
      return os << "VideoFormat::YV12";
    case VideoFormat::YV16:
      return os << "VideoFormat::YV16";
    case VideoFormat::YV12A:
      return os << "VideoFormat::YV12A";
    case VideoFormat::YV24:
      return os << "VideoFormat::YV24";
    case VideoFormat::NV12:
      return os << "VideoFormat::NV12";
    case VideoFormat::NV21:
      return os << "VideoFormat::NV21";
    case VideoFormat::UYVY:
      return os << "VideoFormat::UYVY";
    case VideoFormat::YUY2:
      return os << "VideoFormat::YUY2";
    case VideoFormat::ARGB:
      return os << "VideoFormat::ARGB";
    case VideoFormat::XRGB:
      return os << "VideoFormat::XRGB";
    case VideoFormat::RGB24:
      return os << "VideoFormat::RGB24";
    case VideoFormat::RGB32:
      return os << "VideoFormat::RGB32";
    case VideoFormat::MJPEG:
      return os << "VideoFormat::MJPEG";
    case VideoFormat::MT21:
      return os << "VideoFormat::MT21";
    case VideoFormat::YUV420P9:
      return os << "VideoFormat::YUV420P9";
    case VideoFormat::YUV420P10:
      return os << "VideoFormat::YUV420P10";
    case VideoFormat::YUV422P9:
      return os << "VideoFormat::YUV422P9";
    case VideoFormat::YUV422P10:
      return os << "VideoFormat::YUV422P10";
    case VideoFormat::YUV444P9:
      return os << "VideoFormat::YUV444P9";
    case VideoFormat::YUV444P10:
      return os << "VideoFormat::{YUV444P10, FORMAT_MAX}";
    default:
      return os << "Unknown VideoFormat value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoFormat value) {
  return internal::VideoFormat_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class ColorSpace : int32_t {
  UNSPECIFIED = 0,
  JPEG = 1,
  HD_REC709 = 2,
  SD_REC601 = 3,
  MAX = ColorSpace::SD_REC601,
};

inline std::ostream& operator<<(std::ostream& os, ColorSpace value) {
  switch(value) {
    case ColorSpace::UNSPECIFIED:
      return os << "ColorSpace::UNSPECIFIED";
    case ColorSpace::JPEG:
      return os << "ColorSpace::JPEG";
    case ColorSpace::HD_REC709:
      return os << "ColorSpace::HD_REC709";
    case ColorSpace::SD_REC601:
      return os << "ColorSpace::{SD_REC601, MAX}";
    default:
      return os << "Unknown ColorSpace value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(ColorSpace value) {
  return internal::ColorSpace_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class VideoCodec : int32_t {
  UNKNOWN = 0,
  H264,
  VC1,
  MPEG2,
  MPEG4,
  Theora,
  VP8,
  VP9,
  HEVC,
  Max = VideoCodec::HEVC,
};

inline std::ostream& operator<<(std::ostream& os, VideoCodec value) {
  switch(value) {
    case VideoCodec::UNKNOWN:
      return os << "VideoCodec::UNKNOWN";
    case VideoCodec::H264:
      return os << "VideoCodec::H264";
    case VideoCodec::VC1:
      return os << "VideoCodec::VC1";
    case VideoCodec::MPEG2:
      return os << "VideoCodec::MPEG2";
    case VideoCodec::MPEG4:
      return os << "VideoCodec::MPEG4";
    case VideoCodec::Theora:
      return os << "VideoCodec::Theora";
    case VideoCodec::VP8:
      return os << "VideoCodec::VP8";
    case VideoCodec::VP9:
      return os << "VideoCodec::VP9";
    case VideoCodec::HEVC:
      return os << "VideoCodec::{HEVC, Max}";
    default:
      return os << "Unknown VideoCodec value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoCodec value) {
  return internal::VideoCodec_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class VideoCodecProfile : int32_t {
  VIDEO_CODEC_PROFILE_UNKNOWN = -1,
  VIDEO_CODEC_PROFILE_MIN = VideoCodecProfile::VIDEO_CODEC_PROFILE_UNKNOWN,
  H264PROFILE_MIN = 0,
  H264PROFILE_BASELINE = VideoCodecProfile::H264PROFILE_MIN,
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
  H264PROFILE_MAX = VideoCodecProfile::H264PROFILE_MULTIVIEWHIGH,
  VP8PROFILE_MIN,
  VP8PROFILE_ANY = VideoCodecProfile::VP8PROFILE_MIN,
  VP8PROFILE_MAX = VideoCodecProfile::VP8PROFILE_ANY,
  VP9PROFILE_MIN,
  VP9PROFILE_PROFILE0 = VideoCodecProfile::VP9PROFILE_MIN,
  VP9PROFILE_PROFILE1,
  VP9PROFILE_PROFILE2,
  VP9PROFILE_PROFILE3,
  VP9PROFILE_MAX = VideoCodecProfile::VP9PROFILE_PROFILE3,
  HEVCPROFILE_MIN,
  HEVCPROFILE_MAIN = VideoCodecProfile::HEVCPROFILE_MIN,
  HEVCPROFILE_MAIN10,
  HEVCPROFILE_MAIN_STILL_PICTURE,
  HEVCPROFILE_MAX = VideoCodecProfile::HEVCPROFILE_MAIN_STILL_PICTURE,
  VIDEO_CODEC_PROFILE_MAX = VideoCodecProfile::HEVCPROFILE_MAX,
};

inline std::ostream& operator<<(std::ostream& os, VideoCodecProfile value) {
  switch(value) {
    case VideoCodecProfile::VIDEO_CODEC_PROFILE_UNKNOWN:
      return os << "VideoCodecProfile::{VIDEO_CODEC_PROFILE_UNKNOWN, VIDEO_CODEC_PROFILE_MIN}";
    case VideoCodecProfile::H264PROFILE_MIN:
      return os << "VideoCodecProfile::{H264PROFILE_MIN, H264PROFILE_BASELINE}";
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
      return os << "VideoCodecProfile::{H264PROFILE_MULTIVIEWHIGH, H264PROFILE_MAX}";
    case VideoCodecProfile::VP8PROFILE_MIN:
      return os << "VideoCodecProfile::{VP8PROFILE_MIN, VP8PROFILE_ANY, VP8PROFILE_MAX}";
    case VideoCodecProfile::VP9PROFILE_MIN:
      return os << "VideoCodecProfile::{VP9PROFILE_MIN, VP9PROFILE_PROFILE0}";
    case VideoCodecProfile::VP9PROFILE_PROFILE1:
      return os << "VideoCodecProfile::VP9PROFILE_PROFILE1";
    case VideoCodecProfile::VP9PROFILE_PROFILE2:
      return os << "VideoCodecProfile::VP9PROFILE_PROFILE2";
    case VideoCodecProfile::VP9PROFILE_PROFILE3:
      return os << "VideoCodecProfile::{VP9PROFILE_PROFILE3, VP9PROFILE_MAX}";
    case VideoCodecProfile::HEVCPROFILE_MIN:
      return os << "VideoCodecProfile::{HEVCPROFILE_MIN, HEVCPROFILE_MAIN}";
    case VideoCodecProfile::HEVCPROFILE_MAIN10:
      return os << "VideoCodecProfile::HEVCPROFILE_MAIN10";
    case VideoCodecProfile::HEVCPROFILE_MAIN_STILL_PICTURE:
      return os << "VideoCodecProfile::{HEVCPROFILE_MAIN_STILL_PICTURE, HEVCPROFILE_MAX, VIDEO_CODEC_PROFILE_MAX}";
    default:
      return os << "Unknown VideoCodecProfile value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(VideoCodecProfile value) {
  return internal::VideoCodecProfile_Data::IsKnownValue(
      static_cast<int32_t>(value));
}

enum class CipherMode : int32_t {
  UNENCRYPTED = 0,
  AES_CTR,
  AES_CBC,
  MAX = CipherMode::AES_CBC,
};

inline std::ostream& operator<<(std::ostream& os, CipherMode value) {
  switch(value) {
    case CipherMode::UNENCRYPTED:
      return os << "CipherMode::UNENCRYPTED";
    case CipherMode::AES_CTR:
      return os << "CipherMode::AES_CTR";
    case CipherMode::AES_CBC:
      return os << "CipherMode::{AES_CBC, MAX}";
    default:
      return os << "Unknown CipherMode value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(CipherMode value) {
  return internal::CipherMode_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace media

namespace std {

template <>
struct hash<::media::mojom::BufferingState>
    : public mojo::internal::EnumHashImpl<::media::mojom::BufferingState> {};

template <>
struct hash<::media::mojom::DecodeStatus>
    : public mojo::internal::EnumHashImpl<::media::mojom::DecodeStatus> {};

template <>
struct hash<::media::mojom::AudioCodec>
    : public mojo::internal::EnumHashImpl<::media::mojom::AudioCodec> {};

template <>
struct hash<::media::mojom::ChannelLayout>
    : public mojo::internal::EnumHashImpl<::media::mojom::ChannelLayout> {};

template <>
struct hash<::media::mojom::SampleFormat>
    : public mojo::internal::EnumHashImpl<::media::mojom::SampleFormat> {};

template <>
struct hash<::media::mojom::VideoFormat>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoFormat> {};

template <>
struct hash<::media::mojom::ColorSpace>
    : public mojo::internal::EnumHashImpl<::media::mojom::ColorSpace> {};

template <>
struct hash<::media::mojom::VideoCodec>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoCodec> {};

template <>
struct hash<::media::mojom::VideoCodecProfile>
    : public mojo::internal::EnumHashImpl<::media::mojom::VideoCodecProfile> {};

template <>
struct hash<::media::mojom::CipherMode>
    : public mojo::internal::EnumHashImpl<::media::mojom::CipherMode> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::media::mojom::BufferingState, ::media::mojom::BufferingState> {
  static ::media::mojom::BufferingState ToMojom(::media::mojom::BufferingState input) { return input; }
  static bool FromMojom(::media::mojom::BufferingState input, ::media::mojom::BufferingState* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::BufferingState, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::BufferingState, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::BufferingState>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::DecodeStatus, ::media::mojom::DecodeStatus> {
  static ::media::mojom::DecodeStatus ToMojom(::media::mojom::DecodeStatus input) { return input; }
  static bool FromMojom(::media::mojom::DecodeStatus input, ::media::mojom::DecodeStatus* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::DecodeStatus, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::DecodeStatus, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::DecodeStatus>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::AudioCodec, ::media::mojom::AudioCodec> {
  static ::media::mojom::AudioCodec ToMojom(::media::mojom::AudioCodec input) { return input; }
  static bool FromMojom(::media::mojom::AudioCodec input, ::media::mojom::AudioCodec* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::AudioCodec, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::AudioCodec, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::AudioCodec>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::ChannelLayout, ::media::mojom::ChannelLayout> {
  static ::media::mojom::ChannelLayout ToMojom(::media::mojom::ChannelLayout input) { return input; }
  static bool FromMojom(::media::mojom::ChannelLayout input, ::media::mojom::ChannelLayout* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::ChannelLayout, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::ChannelLayout, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::ChannelLayout>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::SampleFormat, ::media::mojom::SampleFormat> {
  static ::media::mojom::SampleFormat ToMojom(::media::mojom::SampleFormat input) { return input; }
  static bool FromMojom(::media::mojom::SampleFormat input, ::media::mojom::SampleFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::SampleFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::SampleFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::SampleFormat>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::VideoFormat, ::media::mojom::VideoFormat> {
  static ::media::mojom::VideoFormat ToMojom(::media::mojom::VideoFormat input) { return input; }
  static bool FromMojom(::media::mojom::VideoFormat input, ::media::mojom::VideoFormat* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoFormat, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoFormat, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoFormat>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::ColorSpace, ::media::mojom::ColorSpace> {
  static ::media::mojom::ColorSpace ToMojom(::media::mojom::ColorSpace input) { return input; }
  static bool FromMojom(::media::mojom::ColorSpace input, ::media::mojom::ColorSpace* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::ColorSpace, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::ColorSpace, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::ColorSpace>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::VideoCodec, ::media::mojom::VideoCodec> {
  static ::media::mojom::VideoCodec ToMojom(::media::mojom::VideoCodec input) { return input; }
  static bool FromMojom(::media::mojom::VideoCodec input, ::media::mojom::VideoCodec* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCodec, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoCodec, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoCodec>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::VideoCodecProfile, ::media::mojom::VideoCodecProfile> {
  static ::media::mojom::VideoCodecProfile ToMojom(::media::mojom::VideoCodecProfile input) { return input; }
  static bool FromMojom(::media::mojom::VideoCodecProfile input, ::media::mojom::VideoCodecProfile* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoCodecProfile, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::VideoCodecProfile, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::VideoCodecProfile>(input), output);
  }
};

}  // namespace internal


template <>
struct EnumTraits<::media::mojom::CipherMode, ::media::mojom::CipherMode> {
  static ::media::mojom::CipherMode ToMojom(::media::mojom::CipherMode input) { return input; }
  static bool FromMojom(::media::mojom::CipherMode input, ::media::mojom::CipherMode* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::CipherMode, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::media::mojom::CipherMode, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::media::mojom::CipherMode>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_SHARED_H_
