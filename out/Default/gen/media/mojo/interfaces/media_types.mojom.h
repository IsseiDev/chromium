// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_H_

#include <stdint.h>

#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/optional.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/native_struct.h"
#include "mojo/public/cpp/bindings/native_struct_data_view.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "media/mojo/interfaces/media_types.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "mojo/common/common_custom_types.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "base/values.h"
#include "ui/gfx/geometry/vector2d.h"
#include "url/gurl.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/point.h"
#include "media/base/pipeline_status.h"
#include "base/version.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "media/base/audio_parameters.h"
#include "services/shell/public/cpp/capabilities.h"
#include "base/strings/string16.h"
#include "ui/gfx/geometry/rect.h"
#include "base/time/time.h"
#include "ui/gfx/geometry/point_f.h"
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/geometry/size.h"
#include "services/shell/public/cpp/identity.h"
#include "ui/gfx/geometry/rect_f.h"


namespace media {
namespace mojom {
class Pattern;
class PatternDataView;
using PatternPtr = mojo::InlinedStructPtr<Pattern>;

class EncryptionScheme;
class EncryptionSchemeDataView;
using EncryptionSchemePtr = mojo::StructPtr<EncryptionScheme>;

class AudioDecoderConfig;
class AudioDecoderConfigDataView;
using AudioDecoderConfigPtr = mojo::StructPtr<AudioDecoderConfig>;

class VideoDecoderConfig;
class VideoDecoderConfigDataView;
using VideoDecoderConfigPtr = mojo::StructPtr<VideoDecoderConfig>;

class SubsampleEntry;
class SubsampleEntryDataView;
using SubsampleEntryPtr = mojo::InlinedStructPtr<SubsampleEntry>;

class DecryptConfig;
class DecryptConfigDataView;
using DecryptConfigPtr = mojo::StructPtr<DecryptConfig>;

class DecoderBuffer;
class DecoderBufferDataView;
using DecoderBufferPtr = mojo::StructPtr<DecoderBuffer>;

class AudioBuffer;
class AudioBufferDataView;
using AudioBufferPtr = mojo::StructPtr<AudioBuffer>;

class VideoFrame;
class VideoFrameDataView;
using VideoFramePtr = mojo::StructPtr<VideoFrame>;

class PipelineStatistics;
class PipelineStatisticsDataView;
using PipelineStatisticsPtr = mojo::StructPtr<PipelineStatistics>;



class  Pattern {
 public:
  using DataView = PatternDataView;
  using Data_ = internal::Pattern_Data;

  static PatternPtr New();

  template <typename U>
  static PatternPtr From(const U& u) {
    return mojo::TypeConverter<PatternPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Pattern>::Convert(*this);
  }

  Pattern();
  ~Pattern();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PatternPtr>
  PatternPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Pattern>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PatternPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PatternPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t encrypt_blocks;
  uint32_t skip_blocks;
};

class PatternDataView {
 public:
  PatternDataView() {}

  PatternDataView(
      internal::Pattern_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t encrypt_blocks() const {
    return data_->encrypt_blocks;
  }
  uint32_t skip_blocks() const {
    return data_->skip_blocks;
  }
 private:
  internal::Pattern_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::PatternDataView> {
  using MojomType = ::media::mojom::PatternPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {






class  SubsampleEntry {
 public:
  using DataView = SubsampleEntryDataView;
  using Data_ = internal::SubsampleEntry_Data;

  static SubsampleEntryPtr New();

  template <typename U>
  static SubsampleEntryPtr From(const U& u) {
    return mojo::TypeConverter<SubsampleEntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SubsampleEntry>::Convert(*this);
  }

  SubsampleEntry();
  ~SubsampleEntry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SubsampleEntryPtr>
  SubsampleEntryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SubsampleEntry>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SubsampleEntryPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SubsampleEntryPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t clear_bytes;
  uint32_t cypher_bytes;
};

class SubsampleEntryDataView {
 public:
  SubsampleEntryDataView() {}

  SubsampleEntryDataView(
      internal::SubsampleEntry_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t clear_bytes() const {
    return data_->clear_bytes;
  }
  uint32_t cypher_bytes() const {
    return data_->cypher_bytes;
  }
 private:
  internal::SubsampleEntry_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::SubsampleEntryDataView> {
  using MojomType = ::media::mojom::SubsampleEntryPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {











class  EncryptionScheme {
 public:
  using DataView = EncryptionSchemeDataView;
  using Data_ = internal::EncryptionScheme_Data;

  static EncryptionSchemePtr New();

  template <typename U>
  static EncryptionSchemePtr From(const U& u) {
    return mojo::TypeConverter<EncryptionSchemePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EncryptionScheme>::Convert(*this);
  }

  EncryptionScheme();
  ~EncryptionScheme();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EncryptionSchemePtr>
  EncryptionSchemePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EncryptionScheme>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        EncryptionSchemePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        EncryptionSchemePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  CipherMode mode;
  PatternPtr pattern;
 private:
  DISALLOW_COPY_AND_ASSIGN(EncryptionScheme);
};

class EncryptionSchemeDataView {
 public:
  EncryptionSchemeDataView() {}

  EncryptionSchemeDataView(
      internal::EncryptionScheme_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::media::mojom::CipherMode>(
        data_value, output);
  }

  ::media::mojom::CipherMode mode() const {
    return static_cast<::media::mojom::CipherMode>(data_->mode);
  }
  inline void GetPatternDataView(
      PatternDataView* output);

  template <typename UserType>
  bool ReadPattern(UserType* output) {
    auto pointer = data_->pattern.Get();
    return mojo::internal::Deserialize<::media::mojom::PatternPtr>(
        pointer, output, context_);
  }
 private:
  internal::EncryptionScheme_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::EncryptionSchemeDataView> {
  using MojomType = ::media::mojom::EncryptionSchemePtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {



class  AudioDecoderConfig {
 public:
  using DataView = AudioDecoderConfigDataView;
  using Data_ = internal::AudioDecoderConfig_Data;

  static AudioDecoderConfigPtr New();

  template <typename U>
  static AudioDecoderConfigPtr From(const U& u) {
    return mojo::TypeConverter<AudioDecoderConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AudioDecoderConfig>::Convert(*this);
  }

  AudioDecoderConfig();
  ~AudioDecoderConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AudioDecoderConfigPtr>
  AudioDecoderConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AudioDecoderConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        AudioDecoderConfigPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        AudioDecoderConfigPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  AudioCodec codec;
  SampleFormat sample_format;
  ChannelLayout channel_layout;
  int32_t samples_per_second;
  mojo::Array<uint8_t> extra_data;
  base::TimeDelta seek_preroll;
  int32_t codec_delay;
  EncryptionSchemePtr encryption_scheme;
 private:
  DISALLOW_COPY_AND_ASSIGN(AudioDecoderConfig);
};

class AudioDecoderConfigDataView {
 public:
  AudioDecoderConfigDataView() {}

  AudioDecoderConfigDataView(
      internal::AudioDecoderConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadCodec(UserType* output) const {
    auto data_value = data_->codec;
    return mojo::internal::Deserialize<::media::mojom::AudioCodec>(
        data_value, output);
  }

  ::media::mojom::AudioCodec codec() const {
    return static_cast<::media::mojom::AudioCodec>(data_->codec);
  }
  template <typename UserType>
  bool ReadSampleFormat(UserType* output) const {
    auto data_value = data_->sample_format;
    return mojo::internal::Deserialize<::media::mojom::SampleFormat>(
        data_value, output);
  }

  ::media::mojom::SampleFormat sample_format() const {
    return static_cast<::media::mojom::SampleFormat>(data_->sample_format);
  }
  template <typename UserType>
  bool ReadChannelLayout(UserType* output) const {
    auto data_value = data_->channel_layout;
    return mojo::internal::Deserialize<::media::mojom::ChannelLayout>(
        data_value, output);
  }

  ::media::mojom::ChannelLayout channel_layout() const {
    return static_cast<::media::mojom::ChannelLayout>(data_->channel_layout);
  }
  int32_t samples_per_second() const {
    return data_->samples_per_second;
  }
  inline void GetExtraDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadExtraData(UserType* output) {
    auto pointer = data_->extra_data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetSeekPrerollDataView(
      ::mojo::common::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  bool ReadSeekPreroll(UserType* output) {
    auto pointer = data_->seek_preroll.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeDeltaPtr>(
        pointer, output, context_);
  }
  int32_t codec_delay() const {
    return data_->codec_delay;
  }
  inline void GetEncryptionSchemeDataView(
      EncryptionSchemeDataView* output);

  template <typename UserType>
  bool ReadEncryptionScheme(UserType* output) {
    auto pointer = data_->encryption_scheme.Get();
    return mojo::internal::Deserialize<::media::mojom::EncryptionSchemePtr>(
        pointer, output, context_);
  }
 private:
  internal::AudioDecoderConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::AudioDecoderConfigDataView> {
  using MojomType = ::media::mojom::AudioDecoderConfigPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {



class  VideoDecoderConfig {
 public:
  using DataView = VideoDecoderConfigDataView;
  using Data_ = internal::VideoDecoderConfig_Data;

  static VideoDecoderConfigPtr New();

  template <typename U>
  static VideoDecoderConfigPtr From(const U& u) {
    return mojo::TypeConverter<VideoDecoderConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoDecoderConfig>::Convert(*this);
  }

  VideoDecoderConfig();
  ~VideoDecoderConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoDecoderConfigPtr>
  VideoDecoderConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoDecoderConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        VideoDecoderConfigPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        VideoDecoderConfigPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  VideoCodec codec;
  VideoCodecProfile profile;
  VideoFormat format;
  ColorSpace color_space;
  gfx::Size coded_size;
  gfx::Rect visible_rect;
  gfx::Size natural_size;
  mojo::Array<uint8_t> extra_data;
  EncryptionSchemePtr encryption_scheme;
 private:
  DISALLOW_COPY_AND_ASSIGN(VideoDecoderConfig);
};

class VideoDecoderConfigDataView {
 public:
  VideoDecoderConfigDataView() {}

  VideoDecoderConfigDataView(
      internal::VideoDecoderConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadCodec(UserType* output) const {
    auto data_value = data_->codec;
    return mojo::internal::Deserialize<::media::mojom::VideoCodec>(
        data_value, output);
  }

  ::media::mojom::VideoCodec codec() const {
    return static_cast<::media::mojom::VideoCodec>(data_->codec);
  }
  template <typename UserType>
  bool ReadProfile(UserType* output) const {
    auto data_value = data_->profile;
    return mojo::internal::Deserialize<::media::mojom::VideoCodecProfile>(
        data_value, output);
  }

  ::media::mojom::VideoCodecProfile profile() const {
    return static_cast<::media::mojom::VideoCodecProfile>(data_->profile);
  }
  template <typename UserType>
  bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::media::mojom::VideoFormat>(
        data_value, output);
  }

  ::media::mojom::VideoFormat format() const {
    return static_cast<::media::mojom::VideoFormat>(data_->format);
  }
  template <typename UserType>
  bool ReadColorSpace(UserType* output) const {
    auto data_value = data_->color_space;
    return mojo::internal::Deserialize<::media::mojom::ColorSpace>(
        data_value, output);
  }

  ::media::mojom::ColorSpace color_space() const {
    return static_cast<::media::mojom::ColorSpace>(data_->color_space);
  }
  inline void GetCodedSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadCodedSize(UserType* output) {
    auto pointer = data_->coded_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  inline void GetVisibleRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  bool ReadVisibleRect(UserType* output) {
    auto pointer = data_->visible_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectPtr>(
        pointer, output, context_);
  }
  inline void GetNaturalSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadNaturalSize(UserType* output) {
    auto pointer = data_->natural_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  inline void GetExtraDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadExtraData(UserType* output) {
    auto pointer = data_->extra_data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetEncryptionSchemeDataView(
      EncryptionSchemeDataView* output);

  template <typename UserType>
  bool ReadEncryptionScheme(UserType* output) {
    auto pointer = data_->encryption_scheme.Get();
    return mojo::internal::Deserialize<::media::mojom::EncryptionSchemePtr>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoderConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::VideoDecoderConfigDataView> {
  using MojomType = ::media::mojom::VideoDecoderConfigPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {




class  DecryptConfig {
 public:
  using DataView = DecryptConfigDataView;
  using Data_ = internal::DecryptConfig_Data;

  static DecryptConfigPtr New();

  template <typename U>
  static DecryptConfigPtr From(const U& u) {
    return mojo::TypeConverter<DecryptConfigPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DecryptConfig>::Convert(*this);
  }

  DecryptConfig();
  ~DecryptConfig();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DecryptConfigPtr>
  DecryptConfigPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DecryptConfig>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        DecryptConfigPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        DecryptConfigPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String key_id;
  mojo::String iv;
  mojo::Array<SubsampleEntryPtr> subsamples;
 private:
  DISALLOW_COPY_AND_ASSIGN(DecryptConfig);
};

class DecryptConfigDataView {
 public:
  DecryptConfigDataView() {}

  DecryptConfigDataView(
      internal::DecryptConfig_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadKeyId(UserType* output) {
    auto pointer = data_->key_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetIvDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadIv(UserType* output) {
    auto pointer = data_->iv.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetSubsamplesDataView(
      mojo::ArrayDataView<SubsampleEntryDataView>* output);

  template <typename UserType>
  bool ReadSubsamples(UserType* output) {
    auto pointer = data_->subsamples.Get();
    return mojo::internal::Deserialize<mojo::Array<::media::mojom::SubsampleEntryPtr>>(
        pointer, output, context_);
  }
 private:
  internal::DecryptConfig_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::DecryptConfigDataView> {
  using MojomType = ::media::mojom::DecryptConfigPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {



class  DecoderBuffer {
 public:
  using DataView = DecoderBufferDataView;
  using Data_ = internal::DecoderBuffer_Data;

  static DecoderBufferPtr New();

  template <typename U>
  static DecoderBufferPtr From(const U& u) {
    return mojo::TypeConverter<DecoderBufferPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DecoderBuffer>::Convert(*this);
  }

  DecoderBuffer();
  ~DecoderBuffer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DecoderBufferPtr>
  DecoderBufferPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DecoderBuffer>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        DecoderBufferPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        DecoderBufferPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  base::TimeDelta timestamp;
  base::TimeDelta duration;
  uint32_t data_size;
  bool is_key_frame;
  mojo::Array<uint8_t> side_data;
  DecryptConfigPtr decrypt_config;
  base::TimeDelta front_discard;
  base::TimeDelta back_discard;
  base::TimeDelta splice_timestamp;
 private:
  DISALLOW_COPY_AND_ASSIGN(DecoderBuffer);
};

class DecoderBufferDataView {
 public:
  DecoderBufferDataView() {}

  DecoderBufferDataView(
      internal::DecoderBuffer_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimestampDataView(
      ::mojo::common::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  bool ReadTimestamp(UserType* output) {
    auto pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeDeltaPtr>(
        pointer, output, context_);
  }
  inline void GetDurationDataView(
      ::mojo::common::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  bool ReadDuration(UserType* output) {
    auto pointer = data_->duration.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeDeltaPtr>(
        pointer, output, context_);
  }
  uint32_t data_size() const {
    return data_->data_size;
  }
  bool is_key_frame() const {
    return data_->is_key_frame;
  }
  inline void GetSideDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadSideData(UserType* output) {
    auto pointer = data_->side_data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
  inline void GetDecryptConfigDataView(
      DecryptConfigDataView* output);

  template <typename UserType>
  bool ReadDecryptConfig(UserType* output) {
    auto pointer = data_->decrypt_config.Get();
    return mojo::internal::Deserialize<::media::mojom::DecryptConfigPtr>(
        pointer, output, context_);
  }
  inline void GetFrontDiscardDataView(
      ::mojo::common::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  bool ReadFrontDiscard(UserType* output) {
    auto pointer = data_->front_discard.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeDeltaPtr>(
        pointer, output, context_);
  }
  inline void GetBackDiscardDataView(
      ::mojo::common::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  bool ReadBackDiscard(UserType* output) {
    auto pointer = data_->back_discard.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeDeltaPtr>(
        pointer, output, context_);
  }
  inline void GetSpliceTimestampDataView(
      ::mojo::common::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  bool ReadSpliceTimestamp(UserType* output) {
    auto pointer = data_->splice_timestamp.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeDeltaPtr>(
        pointer, output, context_);
  }
 private:
  internal::DecoderBuffer_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::DecoderBufferDataView> {
  using MojomType = ::media::mojom::DecoderBufferPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {



class  AudioBuffer {
 public:
  using DataView = AudioBufferDataView;
  using Data_ = internal::AudioBuffer_Data;

  static AudioBufferPtr New();

  template <typename U>
  static AudioBufferPtr From(const U& u) {
    return mojo::TypeConverter<AudioBufferPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AudioBuffer>::Convert(*this);
  }

  AudioBuffer();
  ~AudioBuffer();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AudioBufferPtr>
  AudioBufferPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AudioBuffer>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        AudioBufferPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        AudioBufferPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  SampleFormat sample_format;
  ChannelLayout channel_layout;
  int32_t channel_count;
  int32_t sample_rate;
  int32_t frame_count;
  bool end_of_stream;
  base::TimeDelta timestamp;
  mojo::Array<uint8_t> data;
 private:
  DISALLOW_COPY_AND_ASSIGN(AudioBuffer);
};

class AudioBufferDataView {
 public:
  AudioBufferDataView() {}

  AudioBufferDataView(
      internal::AudioBuffer_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadSampleFormat(UserType* output) const {
    auto data_value = data_->sample_format;
    return mojo::internal::Deserialize<::media::mojom::SampleFormat>(
        data_value, output);
  }

  ::media::mojom::SampleFormat sample_format() const {
    return static_cast<::media::mojom::SampleFormat>(data_->sample_format);
  }
  template <typename UserType>
  bool ReadChannelLayout(UserType* output) const {
    auto data_value = data_->channel_layout;
    return mojo::internal::Deserialize<::media::mojom::ChannelLayout>(
        data_value, output);
  }

  ::media::mojom::ChannelLayout channel_layout() const {
    return static_cast<::media::mojom::ChannelLayout>(data_->channel_layout);
  }
  int32_t channel_count() const {
    return data_->channel_count;
  }
  int32_t sample_rate() const {
    return data_->sample_rate;
  }
  int32_t frame_count() const {
    return data_->frame_count;
  }
  bool end_of_stream() const {
    return data_->end_of_stream;
  }
  inline void GetTimestampDataView(
      ::mojo::common::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  bool ReadTimestamp(UserType* output) {
    auto pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeDeltaPtr>(
        pointer, output, context_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  bool ReadData(UserType* output) {
    auto pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::Array<uint8_t>>(
        pointer, output, context_);
  }
 private:
  internal::AudioBuffer_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::AudioBufferDataView> {
  using MojomType = ::media::mojom::AudioBufferPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {



class  VideoFrame {
 public:
  using DataView = VideoFrameDataView;
  using Data_ = internal::VideoFrame_Data;

  static VideoFramePtr New();

  template <typename U>
  static VideoFramePtr From(const U& u) {
    return mojo::TypeConverter<VideoFramePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, VideoFrame>::Convert(*this);
  }

  VideoFrame();
  ~VideoFrame();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = VideoFramePtr>
  VideoFramePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, VideoFrame>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        VideoFramePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        VideoFramePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  VideoFormat format;
  gfx::Size coded_size;
  gfx::Rect visible_rect;
  gfx::Size natural_size;
  bool end_of_stream;
  base::TimeDelta timestamp;
  mojo::ScopedSharedBufferHandle frame_data;
  uint64_t frame_data_size;
  int32_t y_stride;
  int32_t u_stride;
  int32_t v_stride;
  uint64_t y_offset;
  uint64_t u_offset;
  uint64_t v_offset;
 private:
  DISALLOW_COPY_AND_ASSIGN(VideoFrame);
};

class VideoFrameDataView {
 public:
  VideoFrameDataView() {}

  VideoFrameDataView(
      internal::VideoFrame_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::media::mojom::VideoFormat>(
        data_value, output);
  }

  ::media::mojom::VideoFormat format() const {
    return static_cast<::media::mojom::VideoFormat>(data_->format);
  }
  inline void GetCodedSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadCodedSize(UserType* output) {
    auto pointer = data_->coded_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  inline void GetVisibleRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  bool ReadVisibleRect(UserType* output) {
    auto pointer = data_->visible_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectPtr>(
        pointer, output, context_);
  }
  inline void GetNaturalSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadNaturalSize(UserType* output) {
    auto pointer = data_->natural_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  bool end_of_stream() const {
    return data_->end_of_stream;
  }
  inline void GetTimestampDataView(
      ::mojo::common::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  bool ReadTimestamp(UserType* output) {
    auto pointer = data_->timestamp.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeDeltaPtr>(
        pointer, output, context_);
  }
  mojo::ScopedSharedBufferHandle TakeFrameData() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->frame_data, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint64_t frame_data_size() const {
    return data_->frame_data_size;
  }
  int32_t y_stride() const {
    return data_->y_stride;
  }
  int32_t u_stride() const {
    return data_->u_stride;
  }
  int32_t v_stride() const {
    return data_->v_stride;
  }
  uint64_t y_offset() const {
    return data_->y_offset;
  }
  uint64_t u_offset() const {
    return data_->u_offset;
  }
  uint64_t v_offset() const {
    return data_->v_offset;
  }
 private:
  internal::VideoFrame_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::VideoFrameDataView> {
  using MojomType = ::media::mojom::VideoFramePtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {



class  PipelineStatistics {
 public:
  using DataView = PipelineStatisticsDataView;
  using Data_ = internal::PipelineStatistics_Data;

  static PipelineStatisticsPtr New();

  template <typename U>
  static PipelineStatisticsPtr From(const U& u) {
    return mojo::TypeConverter<PipelineStatisticsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PipelineStatistics>::Convert(*this);
  }

  PipelineStatistics();
  ~PipelineStatistics();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PipelineStatisticsPtr>
  PipelineStatisticsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PipelineStatistics>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PipelineStatisticsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PipelineStatisticsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint64_t audio_bytes_decoded;
  uint64_t video_bytes_decoded;
  uint32_t video_frames_decoded;
  uint32_t video_frames_dropped;
  int64_t audio_memory_usage;
  int64_t video_memory_usage;
};

class PipelineStatisticsDataView {
 public:
  PipelineStatisticsDataView() {}

  PipelineStatisticsDataView(
      internal::PipelineStatistics_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t audio_bytes_decoded() const {
    return data_->audio_bytes_decoded;
  }
  uint64_t video_bytes_decoded() const {
    return data_->video_bytes_decoded;
  }
  uint32_t video_frames_decoded() const {
    return data_->video_frames_decoded;
  }
  uint32_t video_frames_dropped() const {
    return data_->video_frames_dropped;
  }
  int64_t audio_memory_usage() const {
    return data_->audio_memory_usage;
  }
  int64_t video_memory_usage() const {
    return data_->video_memory_usage;
  }
 private:
  internal::PipelineStatistics_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace media

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::media::mojom::PipelineStatisticsDataView> {
  using MojomType = ::media::mojom::PipelineStatisticsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace media {
namespace mojom {


template <typename StructPtrType>
PatternPtr Pattern::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->encrypt_blocks = mojo::internal::Clone(encrypt_blocks);
  rv->skip_blocks = mojo::internal::Clone(skip_blocks);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Pattern>::value>::type*>
bool Pattern::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->encrypt_blocks, other.encrypt_blocks))
    return false;
  if (!mojo::internal::Equals(this->skip_blocks, other.skip_blocks))
    return false;
  return true;
}


template <typename StructPtrType>
EncryptionSchemePtr EncryptionScheme::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->mode = mojo::internal::Clone(mode);
  rv->pattern = mojo::internal::Clone(pattern);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EncryptionScheme>::value>::type*>
bool EncryptionScheme::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->mode, other.mode))
    return false;
  if (!mojo::internal::Equals(this->pattern, other.pattern))
    return false;
  return true;
}

inline void EncryptionSchemeDataView::GetPatternDataView(
    PatternDataView* output) {
  auto pointer = data_->pattern.Get();
  *output = PatternDataView(pointer, context_);
}

template <typename StructPtrType>
AudioDecoderConfigPtr AudioDecoderConfig::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->codec = mojo::internal::Clone(codec);
  rv->sample_format = mojo::internal::Clone(sample_format);
  rv->channel_layout = mojo::internal::Clone(channel_layout);
  rv->samples_per_second = mojo::internal::Clone(samples_per_second);
  rv->extra_data = mojo::internal::Clone(extra_data);
  rv->seek_preroll = mojo::internal::Clone(seek_preroll);
  rv->codec_delay = mojo::internal::Clone(codec_delay);
  rv->encryption_scheme = mojo::internal::Clone(encryption_scheme);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AudioDecoderConfig>::value>::type*>
bool AudioDecoderConfig::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->codec, other.codec))
    return false;
  if (!mojo::internal::Equals(this->sample_format, other.sample_format))
    return false;
  if (!mojo::internal::Equals(this->channel_layout, other.channel_layout))
    return false;
  if (!mojo::internal::Equals(this->samples_per_second, other.samples_per_second))
    return false;
  if (!mojo::internal::Equals(this->extra_data, other.extra_data))
    return false;
  if (!mojo::internal::Equals(this->seek_preroll, other.seek_preroll))
    return false;
  if (!mojo::internal::Equals(this->codec_delay, other.codec_delay))
    return false;
  if (!mojo::internal::Equals(this->encryption_scheme, other.encryption_scheme))
    return false;
  return true;
}

inline void AudioDecoderConfigDataView::GetExtraDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->extra_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void AudioDecoderConfigDataView::GetSeekPrerollDataView(
    ::mojo::common::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->seek_preroll.Get();
  *output = ::mojo::common::mojom::TimeDeltaDataView(pointer, context_);
}
inline void AudioDecoderConfigDataView::GetEncryptionSchemeDataView(
    EncryptionSchemeDataView* output) {
  auto pointer = data_->encryption_scheme.Get();
  *output = EncryptionSchemeDataView(pointer, context_);
}

template <typename StructPtrType>
VideoDecoderConfigPtr VideoDecoderConfig::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->codec = mojo::internal::Clone(codec);
  rv->profile = mojo::internal::Clone(profile);
  rv->format = mojo::internal::Clone(format);
  rv->color_space = mojo::internal::Clone(color_space);
  rv->coded_size = mojo::internal::Clone(coded_size);
  rv->visible_rect = mojo::internal::Clone(visible_rect);
  rv->natural_size = mojo::internal::Clone(natural_size);
  rv->extra_data = mojo::internal::Clone(extra_data);
  rv->encryption_scheme = mojo::internal::Clone(encryption_scheme);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoDecoderConfig>::value>::type*>
bool VideoDecoderConfig::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->codec, other.codec))
    return false;
  if (!mojo::internal::Equals(this->profile, other.profile))
    return false;
  if (!mojo::internal::Equals(this->format, other.format))
    return false;
  if (!mojo::internal::Equals(this->color_space, other.color_space))
    return false;
  if (!mojo::internal::Equals(this->coded_size, other.coded_size))
    return false;
  if (!mojo::internal::Equals(this->visible_rect, other.visible_rect))
    return false;
  if (!mojo::internal::Equals(this->natural_size, other.natural_size))
    return false;
  if (!mojo::internal::Equals(this->extra_data, other.extra_data))
    return false;
  if (!mojo::internal::Equals(this->encryption_scheme, other.encryption_scheme))
    return false;
  return true;
}

inline void VideoDecoderConfigDataView::GetCodedSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->coded_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VideoDecoderConfigDataView::GetVisibleRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->visible_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void VideoDecoderConfigDataView::GetNaturalSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->natural_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VideoDecoderConfigDataView::GetExtraDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->extra_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void VideoDecoderConfigDataView::GetEncryptionSchemeDataView(
    EncryptionSchemeDataView* output) {
  auto pointer = data_->encryption_scheme.Get();
  *output = EncryptionSchemeDataView(pointer, context_);
}

template <typename StructPtrType>
SubsampleEntryPtr SubsampleEntry::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->clear_bytes = mojo::internal::Clone(clear_bytes);
  rv->cypher_bytes = mojo::internal::Clone(cypher_bytes);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SubsampleEntry>::value>::type*>
bool SubsampleEntry::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->clear_bytes, other.clear_bytes))
    return false;
  if (!mojo::internal::Equals(this->cypher_bytes, other.cypher_bytes))
    return false;
  return true;
}


template <typename StructPtrType>
DecryptConfigPtr DecryptConfig::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->key_id = mojo::internal::Clone(key_id);
  rv->iv = mojo::internal::Clone(iv);
  rv->subsamples = mojo::internal::Clone(subsamples);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DecryptConfig>::value>::type*>
bool DecryptConfig::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->key_id, other.key_id))
    return false;
  if (!mojo::internal::Equals(this->iv, other.iv))
    return false;
  if (!mojo::internal::Equals(this->subsamples, other.subsamples))
    return false;
  return true;
}

inline void DecryptConfigDataView::GetKeyIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DecryptConfigDataView::GetIvDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->iv.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void DecryptConfigDataView::GetSubsamplesDataView(
    mojo::ArrayDataView<SubsampleEntryDataView>* output) {
  auto pointer = data_->subsamples.Get();
  *output = mojo::ArrayDataView<SubsampleEntryDataView>(pointer, context_);
}

template <typename StructPtrType>
DecoderBufferPtr DecoderBuffer::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->timestamp = mojo::internal::Clone(timestamp);
  rv->duration = mojo::internal::Clone(duration);
  rv->data_size = mojo::internal::Clone(data_size);
  rv->is_key_frame = mojo::internal::Clone(is_key_frame);
  rv->side_data = mojo::internal::Clone(side_data);
  rv->decrypt_config = mojo::internal::Clone(decrypt_config);
  rv->front_discard = mojo::internal::Clone(front_discard);
  rv->back_discard = mojo::internal::Clone(back_discard);
  rv->splice_timestamp = mojo::internal::Clone(splice_timestamp);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DecoderBuffer>::value>::type*>
bool DecoderBuffer::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->timestamp, other.timestamp))
    return false;
  if (!mojo::internal::Equals(this->duration, other.duration))
    return false;
  if (!mojo::internal::Equals(this->data_size, other.data_size))
    return false;
  if (!mojo::internal::Equals(this->is_key_frame, other.is_key_frame))
    return false;
  if (!mojo::internal::Equals(this->side_data, other.side_data))
    return false;
  if (!mojo::internal::Equals(this->decrypt_config, other.decrypt_config))
    return false;
  if (!mojo::internal::Equals(this->front_discard, other.front_discard))
    return false;
  if (!mojo::internal::Equals(this->back_discard, other.back_discard))
    return false;
  if (!mojo::internal::Equals(this->splice_timestamp, other.splice_timestamp))
    return false;
  return true;
}

inline void DecoderBufferDataView::GetTimestampDataView(
    ::mojo::common::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo::common::mojom::TimeDeltaDataView(pointer, context_);
}
inline void DecoderBufferDataView::GetDurationDataView(
    ::mojo::common::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->duration.Get();
  *output = ::mojo::common::mojom::TimeDeltaDataView(pointer, context_);
}
inline void DecoderBufferDataView::GetSideDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->side_data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}
inline void DecoderBufferDataView::GetDecryptConfigDataView(
    DecryptConfigDataView* output) {
  auto pointer = data_->decrypt_config.Get();
  *output = DecryptConfigDataView(pointer, context_);
}
inline void DecoderBufferDataView::GetFrontDiscardDataView(
    ::mojo::common::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->front_discard.Get();
  *output = ::mojo::common::mojom::TimeDeltaDataView(pointer, context_);
}
inline void DecoderBufferDataView::GetBackDiscardDataView(
    ::mojo::common::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->back_discard.Get();
  *output = ::mojo::common::mojom::TimeDeltaDataView(pointer, context_);
}
inline void DecoderBufferDataView::GetSpliceTimestampDataView(
    ::mojo::common::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->splice_timestamp.Get();
  *output = ::mojo::common::mojom::TimeDeltaDataView(pointer, context_);
}

template <typename StructPtrType>
AudioBufferPtr AudioBuffer::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->sample_format = mojo::internal::Clone(sample_format);
  rv->channel_layout = mojo::internal::Clone(channel_layout);
  rv->channel_count = mojo::internal::Clone(channel_count);
  rv->sample_rate = mojo::internal::Clone(sample_rate);
  rv->frame_count = mojo::internal::Clone(frame_count);
  rv->end_of_stream = mojo::internal::Clone(end_of_stream);
  rv->timestamp = mojo::internal::Clone(timestamp);
  rv->data = mojo::internal::Clone(data);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AudioBuffer>::value>::type*>
bool AudioBuffer::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->sample_format, other.sample_format))
    return false;
  if (!mojo::internal::Equals(this->channel_layout, other.channel_layout))
    return false;
  if (!mojo::internal::Equals(this->channel_count, other.channel_count))
    return false;
  if (!mojo::internal::Equals(this->sample_rate, other.sample_rate))
    return false;
  if (!mojo::internal::Equals(this->frame_count, other.frame_count))
    return false;
  if (!mojo::internal::Equals(this->end_of_stream, other.end_of_stream))
    return false;
  if (!mojo::internal::Equals(this->timestamp, other.timestamp))
    return false;
  if (!mojo::internal::Equals(this->data, other.data))
    return false;
  return true;
}

inline void AudioBufferDataView::GetTimestampDataView(
    ::mojo::common::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo::common::mojom::TimeDeltaDataView(pointer, context_);
}
inline void AudioBufferDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, context_);
}

template <typename StructPtrType>
VideoFramePtr VideoFrame::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->format = mojo::internal::Clone(format);
  rv->coded_size = mojo::internal::Clone(coded_size);
  rv->visible_rect = mojo::internal::Clone(visible_rect);
  rv->natural_size = mojo::internal::Clone(natural_size);
  rv->end_of_stream = mojo::internal::Clone(end_of_stream);
  rv->timestamp = mojo::internal::Clone(timestamp);
  rv->frame_data = mojo::internal::Clone(frame_data);
  rv->frame_data_size = mojo::internal::Clone(frame_data_size);
  rv->y_stride = mojo::internal::Clone(y_stride);
  rv->u_stride = mojo::internal::Clone(u_stride);
  rv->v_stride = mojo::internal::Clone(v_stride);
  rv->y_offset = mojo::internal::Clone(y_offset);
  rv->u_offset = mojo::internal::Clone(u_offset);
  rv->v_offset = mojo::internal::Clone(v_offset);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, VideoFrame>::value>::type*>
bool VideoFrame::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->format, other.format))
    return false;
  if (!mojo::internal::Equals(this->coded_size, other.coded_size))
    return false;
  if (!mojo::internal::Equals(this->visible_rect, other.visible_rect))
    return false;
  if (!mojo::internal::Equals(this->natural_size, other.natural_size))
    return false;
  if (!mojo::internal::Equals(this->end_of_stream, other.end_of_stream))
    return false;
  if (!mojo::internal::Equals(this->timestamp, other.timestamp))
    return false;
  if (!mojo::internal::Equals(this->frame_data, other.frame_data))
    return false;
  if (!mojo::internal::Equals(this->frame_data_size, other.frame_data_size))
    return false;
  if (!mojo::internal::Equals(this->y_stride, other.y_stride))
    return false;
  if (!mojo::internal::Equals(this->u_stride, other.u_stride))
    return false;
  if (!mojo::internal::Equals(this->v_stride, other.v_stride))
    return false;
  if (!mojo::internal::Equals(this->y_offset, other.y_offset))
    return false;
  if (!mojo::internal::Equals(this->u_offset, other.u_offset))
    return false;
  if (!mojo::internal::Equals(this->v_offset, other.v_offset))
    return false;
  return true;
}

inline void VideoFrameDataView::GetCodedSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->coded_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VideoFrameDataView::GetVisibleRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->visible_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void VideoFrameDataView::GetNaturalSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->natural_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void VideoFrameDataView::GetTimestampDataView(
    ::mojo::common::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->timestamp.Get();
  *output = ::mojo::common::mojom::TimeDeltaDataView(pointer, context_);
}

template <typename StructPtrType>
PipelineStatisticsPtr PipelineStatistics::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->audio_bytes_decoded = mojo::internal::Clone(audio_bytes_decoded);
  rv->video_bytes_decoded = mojo::internal::Clone(video_bytes_decoded);
  rv->video_frames_decoded = mojo::internal::Clone(video_frames_decoded);
  rv->video_frames_dropped = mojo::internal::Clone(video_frames_dropped);
  rv->audio_memory_usage = mojo::internal::Clone(audio_memory_usage);
  rv->video_memory_usage = mojo::internal::Clone(video_memory_usage);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PipelineStatistics>::value>::type*>
bool PipelineStatistics::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->audio_bytes_decoded, other.audio_bytes_decoded))
    return false;
  if (!mojo::internal::Equals(this->video_bytes_decoded, other.video_bytes_decoded))
    return false;
  if (!mojo::internal::Equals(this->video_frames_decoded, other.video_frames_decoded))
    return false;
  if (!mojo::internal::Equals(this->video_frames_dropped, other.video_frames_dropped))
    return false;
  if (!mojo::internal::Equals(this->audio_memory_usage, other.audio_memory_usage))
    return false;
  if (!mojo::internal::Equals(this->video_memory_usage, other.video_memory_usage))
    return false;
  return true;
}




}  // namespace mojom
}  // namespace media

namespace mojo {


template <>
struct  StructTraits<::media::mojom::Pattern, ::media::mojom::PatternPtr> {
  static bool IsNull(const ::media::mojom::PatternPtr& input) { return !input; }
  static void SetToNull(::media::mojom::PatternPtr* output) { output->reset(); }
  static decltype(::media::mojom::Pattern::encrypt_blocks) encrypt_blocks(
      const ::media::mojom::PatternPtr& input) {
    return input->encrypt_blocks;
  }
  static decltype(::media::mojom::Pattern::skip_blocks) skip_blocks(
      const ::media::mojom::PatternPtr& input) {
    return input->skip_blocks;
  }

  static bool Read(::media::mojom::PatternDataView input, ::media::mojom::PatternPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PatternPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::Pattern, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::Pattern_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::Pattern_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::Pattern_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->encrypt_blocks = CallWithContext(Traits::encrypt_blocks, input, custom_context);
      result->skip_blocks = CallWithContext(Traits::skip_blocks, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::Pattern_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::PatternDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::EncryptionScheme, ::media::mojom::EncryptionSchemePtr> {
  static bool IsNull(const ::media::mojom::EncryptionSchemePtr& input) { return !input; }
  static void SetToNull(::media::mojom::EncryptionSchemePtr* output) { output->reset(); }
  static decltype(::media::mojom::EncryptionScheme::mode) mode(
      const ::media::mojom::EncryptionSchemePtr& input) {
    return input->mode;
  }
  static decltype(::media::mojom::EncryptionScheme::pattern)& pattern(
      ::media::mojom::EncryptionSchemePtr& input) {
    return input->pattern;
  }

  static bool Read(::media::mojom::EncryptionSchemeDataView input, ::media::mojom::EncryptionSchemePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::EncryptionSchemePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::EncryptionScheme, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::EncryptionScheme_Data);
    decltype(CallWithContext(Traits::pattern, input, custom_context)) in_pattern = CallWithContext(Traits::pattern, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::media::mojom::PatternPtr>(
        in_pattern, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::EncryptionScheme_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::EncryptionScheme_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::media::mojom::CipherMode>(
          CallWithContext(Traits::mode, input, custom_context), &result->mode);
      decltype(CallWithContext(Traits::pattern, input, custom_context)) in_pattern = CallWithContext(Traits::pattern, input, custom_context);
      typename decltype(result->pattern)::BaseType* pattern_ptr;
      mojo::internal::Serialize<::media::mojom::PatternPtr>(
          in_pattern, buffer, &pattern_ptr, context);
      result->pattern.Set(pattern_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->pattern.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null pattern in EncryptionScheme struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::EncryptionScheme_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::EncryptionSchemeDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::AudioDecoderConfig, ::media::mojom::AudioDecoderConfigPtr> {
  static bool IsNull(const ::media::mojom::AudioDecoderConfigPtr& input) { return !input; }
  static void SetToNull(::media::mojom::AudioDecoderConfigPtr* output) { output->reset(); }
  static decltype(::media::mojom::AudioDecoderConfig::codec) codec(
      const ::media::mojom::AudioDecoderConfigPtr& input) {
    return input->codec;
  }
  static decltype(::media::mojom::AudioDecoderConfig::sample_format) sample_format(
      const ::media::mojom::AudioDecoderConfigPtr& input) {
    return input->sample_format;
  }
  static decltype(::media::mojom::AudioDecoderConfig::channel_layout) channel_layout(
      const ::media::mojom::AudioDecoderConfigPtr& input) {
    return input->channel_layout;
  }
  static decltype(::media::mojom::AudioDecoderConfig::samples_per_second) samples_per_second(
      const ::media::mojom::AudioDecoderConfigPtr& input) {
    return input->samples_per_second;
  }
  static decltype(::media::mojom::AudioDecoderConfig::extra_data)& extra_data(
      ::media::mojom::AudioDecoderConfigPtr& input) {
    return input->extra_data;
  }
  static decltype(::media::mojom::AudioDecoderConfig::seek_preroll)& seek_preroll(
      ::media::mojom::AudioDecoderConfigPtr& input) {
    return input->seek_preroll;
  }
  static decltype(::media::mojom::AudioDecoderConfig::codec_delay) codec_delay(
      const ::media::mojom::AudioDecoderConfigPtr& input) {
    return input->codec_delay;
  }
  static decltype(::media::mojom::AudioDecoderConfig::encryption_scheme)& encryption_scheme(
      ::media::mojom::AudioDecoderConfigPtr& input) {
    return input->encryption_scheme;
  }

  static bool Read(::media::mojom::AudioDecoderConfigDataView input, ::media::mojom::AudioDecoderConfigPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::AudioDecoderConfigPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::AudioDecoderConfig, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::AudioDecoderConfig_Data);
    decltype(CallWithContext(Traits::extra_data, input, custom_context)) in_extra_data = CallWithContext(Traits::extra_data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
        in_extra_data, context);
    decltype(CallWithContext(Traits::seek_preroll, input, custom_context)) in_seek_preroll = CallWithContext(Traits::seek_preroll, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeDeltaPtr>(
        in_seek_preroll, context);
    decltype(CallWithContext(Traits::encryption_scheme, input, custom_context)) in_encryption_scheme = CallWithContext(Traits::encryption_scheme, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::media::mojom::EncryptionSchemePtr>(
        in_encryption_scheme, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::AudioDecoderConfig_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::AudioDecoderConfig_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::media::mojom::AudioCodec>(
          CallWithContext(Traits::codec, input, custom_context), &result->codec);
      mojo::internal::Serialize<::media::mojom::SampleFormat>(
          CallWithContext(Traits::sample_format, input, custom_context), &result->sample_format);
      mojo::internal::Serialize<::media::mojom::ChannelLayout>(
          CallWithContext(Traits::channel_layout, input, custom_context), &result->channel_layout);
      result->samples_per_second = CallWithContext(Traits::samples_per_second, input, custom_context);
      decltype(CallWithContext(Traits::extra_data, input, custom_context)) in_extra_data = CallWithContext(Traits::extra_data, input, custom_context);
      typename decltype(result->extra_data)::BaseType* extra_data_ptr;
      const mojo::internal::ContainerValidateParams extra_data_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint8_t>>(
          in_extra_data, buffer, &extra_data_ptr, &extra_data_validate_params,
          context);
      result->extra_data.Set(extra_data_ptr);
      decltype(CallWithContext(Traits::seek_preroll, input, custom_context)) in_seek_preroll = CallWithContext(Traits::seek_preroll, input, custom_context);
      typename decltype(result->seek_preroll)::BaseType* seek_preroll_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeDeltaPtr>(
          in_seek_preroll, buffer, &seek_preroll_ptr, context);
      result->seek_preroll.Set(seek_preroll_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->seek_preroll.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null seek_preroll in AudioDecoderConfig struct");
      result->codec_delay = CallWithContext(Traits::codec_delay, input, custom_context);
      decltype(CallWithContext(Traits::encryption_scheme, input, custom_context)) in_encryption_scheme = CallWithContext(Traits::encryption_scheme, input, custom_context);
      typename decltype(result->encryption_scheme)::BaseType* encryption_scheme_ptr;
      mojo::internal::Serialize<::media::mojom::EncryptionSchemePtr>(
          in_encryption_scheme, buffer, &encryption_scheme_ptr, context);
      result->encryption_scheme.Set(encryption_scheme_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->encryption_scheme.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null encryption_scheme in AudioDecoderConfig struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::AudioDecoderConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::AudioDecoderConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::VideoDecoderConfig, ::media::mojom::VideoDecoderConfigPtr> {
  static bool IsNull(const ::media::mojom::VideoDecoderConfigPtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoDecoderConfigPtr* output) { output->reset(); }
  static decltype(::media::mojom::VideoDecoderConfig::codec) codec(
      const ::media::mojom::VideoDecoderConfigPtr& input) {
    return input->codec;
  }
  static decltype(::media::mojom::VideoDecoderConfig::profile) profile(
      const ::media::mojom::VideoDecoderConfigPtr& input) {
    return input->profile;
  }
  static decltype(::media::mojom::VideoDecoderConfig::format) format(
      const ::media::mojom::VideoDecoderConfigPtr& input) {
    return input->format;
  }
  static decltype(::media::mojom::VideoDecoderConfig::color_space) color_space(
      const ::media::mojom::VideoDecoderConfigPtr& input) {
    return input->color_space;
  }
  static decltype(::media::mojom::VideoDecoderConfig::coded_size)& coded_size(
      ::media::mojom::VideoDecoderConfigPtr& input) {
    return input->coded_size;
  }
  static decltype(::media::mojom::VideoDecoderConfig::visible_rect)& visible_rect(
      ::media::mojom::VideoDecoderConfigPtr& input) {
    return input->visible_rect;
  }
  static decltype(::media::mojom::VideoDecoderConfig::natural_size)& natural_size(
      ::media::mojom::VideoDecoderConfigPtr& input) {
    return input->natural_size;
  }
  static decltype(::media::mojom::VideoDecoderConfig::extra_data)& extra_data(
      ::media::mojom::VideoDecoderConfigPtr& input) {
    return input->extra_data;
  }
  static decltype(::media::mojom::VideoDecoderConfig::encryption_scheme)& encryption_scheme(
      ::media::mojom::VideoDecoderConfigPtr& input) {
    return input->encryption_scheme;
  }

  static bool Read(::media::mojom::VideoDecoderConfigDataView input, ::media::mojom::VideoDecoderConfigPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoDecoderConfigPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoDecoderConfig, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::VideoDecoderConfig_Data);
    decltype(CallWithContext(Traits::coded_size, input, custom_context)) in_coded_size = CallWithContext(Traits::coded_size, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_coded_size, context);
    decltype(CallWithContext(Traits::visible_rect, input, custom_context)) in_visible_rect = CallWithContext(Traits::visible_rect, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
        in_visible_rect, context);
    decltype(CallWithContext(Traits::natural_size, input, custom_context)) in_natural_size = CallWithContext(Traits::natural_size, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_natural_size, context);
    decltype(CallWithContext(Traits::extra_data, input, custom_context)) in_extra_data = CallWithContext(Traits::extra_data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
        in_extra_data, context);
    decltype(CallWithContext(Traits::encryption_scheme, input, custom_context)) in_encryption_scheme = CallWithContext(Traits::encryption_scheme, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::media::mojom::EncryptionSchemePtr>(
        in_encryption_scheme, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoDecoderConfig_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::VideoDecoderConfig_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::media::mojom::VideoCodec>(
          CallWithContext(Traits::codec, input, custom_context), &result->codec);
      mojo::internal::Serialize<::media::mojom::VideoCodecProfile>(
          CallWithContext(Traits::profile, input, custom_context), &result->profile);
      mojo::internal::Serialize<::media::mojom::VideoFormat>(
          CallWithContext(Traits::format, input, custom_context), &result->format);
      mojo::internal::Serialize<::media::mojom::ColorSpace>(
          CallWithContext(Traits::color_space, input, custom_context), &result->color_space);
      decltype(CallWithContext(Traits::coded_size, input, custom_context)) in_coded_size = CallWithContext(Traits::coded_size, input, custom_context);
      typename decltype(result->coded_size)::BaseType* coded_size_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_coded_size, buffer, &coded_size_ptr, context);
      result->coded_size.Set(coded_size_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->coded_size.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null coded_size in VideoDecoderConfig struct");
      decltype(CallWithContext(Traits::visible_rect, input, custom_context)) in_visible_rect = CallWithContext(Traits::visible_rect, input, custom_context);
      typename decltype(result->visible_rect)::BaseType* visible_rect_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectPtr>(
          in_visible_rect, buffer, &visible_rect_ptr, context);
      result->visible_rect.Set(visible_rect_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->visible_rect.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null visible_rect in VideoDecoderConfig struct");
      decltype(CallWithContext(Traits::natural_size, input, custom_context)) in_natural_size = CallWithContext(Traits::natural_size, input, custom_context);
      typename decltype(result->natural_size)::BaseType* natural_size_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_natural_size, buffer, &natural_size_ptr, context);
      result->natural_size.Set(natural_size_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->natural_size.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null natural_size in VideoDecoderConfig struct");
      decltype(CallWithContext(Traits::extra_data, input, custom_context)) in_extra_data = CallWithContext(Traits::extra_data, input, custom_context);
      typename decltype(result->extra_data)::BaseType* extra_data_ptr;
      const mojo::internal::ContainerValidateParams extra_data_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint8_t>>(
          in_extra_data, buffer, &extra_data_ptr, &extra_data_validate_params,
          context);
      result->extra_data.Set(extra_data_ptr);
      decltype(CallWithContext(Traits::encryption_scheme, input, custom_context)) in_encryption_scheme = CallWithContext(Traits::encryption_scheme, input, custom_context);
      typename decltype(result->encryption_scheme)::BaseType* encryption_scheme_ptr;
      mojo::internal::Serialize<::media::mojom::EncryptionSchemePtr>(
          in_encryption_scheme, buffer, &encryption_scheme_ptr, context);
      result->encryption_scheme.Set(encryption_scheme_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->encryption_scheme.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null encryption_scheme in VideoDecoderConfig struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::VideoDecoderConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoDecoderConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::SubsampleEntry, ::media::mojom::SubsampleEntryPtr> {
  static bool IsNull(const ::media::mojom::SubsampleEntryPtr& input) { return !input; }
  static void SetToNull(::media::mojom::SubsampleEntryPtr* output) { output->reset(); }
  static decltype(::media::mojom::SubsampleEntry::clear_bytes) clear_bytes(
      const ::media::mojom::SubsampleEntryPtr& input) {
    return input->clear_bytes;
  }
  static decltype(::media::mojom::SubsampleEntry::cypher_bytes) cypher_bytes(
      const ::media::mojom::SubsampleEntryPtr& input) {
    return input->cypher_bytes;
  }

  static bool Read(::media::mojom::SubsampleEntryDataView input, ::media::mojom::SubsampleEntryPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::SubsampleEntryPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::SubsampleEntry, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::SubsampleEntry_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::SubsampleEntry_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::SubsampleEntry_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->clear_bytes = CallWithContext(Traits::clear_bytes, input, custom_context);
      result->cypher_bytes = CallWithContext(Traits::cypher_bytes, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::SubsampleEntry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::SubsampleEntryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::DecryptConfig, ::media::mojom::DecryptConfigPtr> {
  static bool IsNull(const ::media::mojom::DecryptConfigPtr& input) { return !input; }
  static void SetToNull(::media::mojom::DecryptConfigPtr* output) { output->reset(); }
  static decltype(::media::mojom::DecryptConfig::key_id)& key_id(
      ::media::mojom::DecryptConfigPtr& input) {
    return input->key_id;
  }
  static decltype(::media::mojom::DecryptConfig::iv)& iv(
      ::media::mojom::DecryptConfigPtr& input) {
    return input->iv;
  }
  static decltype(::media::mojom::DecryptConfig::subsamples)& subsamples(
      ::media::mojom::DecryptConfigPtr& input) {
    return input->subsamples;
  }

  static bool Read(::media::mojom::DecryptConfigDataView input, ::media::mojom::DecryptConfigPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::DecryptConfigPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::DecryptConfig, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::DecryptConfig_Data);
    decltype(CallWithContext(Traits::key_id, input, custom_context)) in_key_id = CallWithContext(Traits::key_id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_key_id, context);
    decltype(CallWithContext(Traits::iv, input, custom_context)) in_iv = CallWithContext(Traits::iv, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_iv, context);
    decltype(CallWithContext(Traits::subsamples, input, custom_context)) in_subsamples = CallWithContext(Traits::subsamples, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::media::mojom::SubsampleEntryPtr>>(
        in_subsamples, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::DecryptConfig_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::DecryptConfig_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::key_id, input, custom_context)) in_key_id = CallWithContext(Traits::key_id, input, custom_context);
      typename decltype(result->key_id)::BaseType* key_id_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_key_id, buffer, &key_id_ptr, context);
      result->key_id.Set(key_id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->key_id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null key_id in DecryptConfig struct");
      decltype(CallWithContext(Traits::iv, input, custom_context)) in_iv = CallWithContext(Traits::iv, input, custom_context);
      typename decltype(result->iv)::BaseType* iv_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_iv, buffer, &iv_ptr, context);
      result->iv.Set(iv_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->iv.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null iv in DecryptConfig struct");
      decltype(CallWithContext(Traits::subsamples, input, custom_context)) in_subsamples = CallWithContext(Traits::subsamples, input, custom_context);
      typename decltype(result->subsamples)::BaseType* subsamples_ptr;
      const mojo::internal::ContainerValidateParams subsamples_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::media::mojom::SubsampleEntryPtr>>(
          in_subsamples, buffer, &subsamples_ptr, &subsamples_validate_params,
          context);
      result->subsamples.Set(subsamples_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->subsamples.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null subsamples in DecryptConfig struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::DecryptConfig_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::DecryptConfigDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::DecoderBuffer, ::media::mojom::DecoderBufferPtr> {
  static bool IsNull(const ::media::mojom::DecoderBufferPtr& input) { return !input; }
  static void SetToNull(::media::mojom::DecoderBufferPtr* output) { output->reset(); }
  static decltype(::media::mojom::DecoderBuffer::timestamp)& timestamp(
      ::media::mojom::DecoderBufferPtr& input) {
    return input->timestamp;
  }
  static decltype(::media::mojom::DecoderBuffer::duration)& duration(
      ::media::mojom::DecoderBufferPtr& input) {
    return input->duration;
  }
  static decltype(::media::mojom::DecoderBuffer::data_size) data_size(
      const ::media::mojom::DecoderBufferPtr& input) {
    return input->data_size;
  }
  static decltype(::media::mojom::DecoderBuffer::is_key_frame) is_key_frame(
      const ::media::mojom::DecoderBufferPtr& input) {
    return input->is_key_frame;
  }
  static decltype(::media::mojom::DecoderBuffer::side_data)& side_data(
      ::media::mojom::DecoderBufferPtr& input) {
    return input->side_data;
  }
  static decltype(::media::mojom::DecoderBuffer::decrypt_config)& decrypt_config(
      ::media::mojom::DecoderBufferPtr& input) {
    return input->decrypt_config;
  }
  static decltype(::media::mojom::DecoderBuffer::front_discard)& front_discard(
      ::media::mojom::DecoderBufferPtr& input) {
    return input->front_discard;
  }
  static decltype(::media::mojom::DecoderBuffer::back_discard)& back_discard(
      ::media::mojom::DecoderBufferPtr& input) {
    return input->back_discard;
  }
  static decltype(::media::mojom::DecoderBuffer::splice_timestamp)& splice_timestamp(
      ::media::mojom::DecoderBufferPtr& input) {
    return input->splice_timestamp;
  }

  static bool Read(::media::mojom::DecoderBufferDataView input, ::media::mojom::DecoderBufferPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::DecoderBufferPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::DecoderBuffer, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::DecoderBuffer_Data);
    decltype(CallWithContext(Traits::timestamp, input, custom_context)) in_timestamp = CallWithContext(Traits::timestamp, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeDeltaPtr>(
        in_timestamp, context);
    decltype(CallWithContext(Traits::duration, input, custom_context)) in_duration = CallWithContext(Traits::duration, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeDeltaPtr>(
        in_duration, context);
    decltype(CallWithContext(Traits::side_data, input, custom_context)) in_side_data = CallWithContext(Traits::side_data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
        in_side_data, context);
    decltype(CallWithContext(Traits::decrypt_config, input, custom_context)) in_decrypt_config = CallWithContext(Traits::decrypt_config, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::media::mojom::DecryptConfigPtr>(
        in_decrypt_config, context);
    decltype(CallWithContext(Traits::front_discard, input, custom_context)) in_front_discard = CallWithContext(Traits::front_discard, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeDeltaPtr>(
        in_front_discard, context);
    decltype(CallWithContext(Traits::back_discard, input, custom_context)) in_back_discard = CallWithContext(Traits::back_discard, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeDeltaPtr>(
        in_back_discard, context);
    decltype(CallWithContext(Traits::splice_timestamp, input, custom_context)) in_splice_timestamp = CallWithContext(Traits::splice_timestamp, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeDeltaPtr>(
        in_splice_timestamp, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::DecoderBuffer_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::DecoderBuffer_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::timestamp, input, custom_context)) in_timestamp = CallWithContext(Traits::timestamp, input, custom_context);
      typename decltype(result->timestamp)::BaseType* timestamp_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeDeltaPtr>(
          in_timestamp, buffer, &timestamp_ptr, context);
      result->timestamp.Set(timestamp_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->timestamp.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null timestamp in DecoderBuffer struct");
      decltype(CallWithContext(Traits::duration, input, custom_context)) in_duration = CallWithContext(Traits::duration, input, custom_context);
      typename decltype(result->duration)::BaseType* duration_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeDeltaPtr>(
          in_duration, buffer, &duration_ptr, context);
      result->duration.Set(duration_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->duration.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null duration in DecoderBuffer struct");
      result->data_size = CallWithContext(Traits::data_size, input, custom_context);
      result->is_key_frame = CallWithContext(Traits::is_key_frame, input, custom_context);
      decltype(CallWithContext(Traits::side_data, input, custom_context)) in_side_data = CallWithContext(Traits::side_data, input, custom_context);
      typename decltype(result->side_data)::BaseType* side_data_ptr;
      const mojo::internal::ContainerValidateParams side_data_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint8_t>>(
          in_side_data, buffer, &side_data_ptr, &side_data_validate_params,
          context);
      result->side_data.Set(side_data_ptr);
      decltype(CallWithContext(Traits::decrypt_config, input, custom_context)) in_decrypt_config = CallWithContext(Traits::decrypt_config, input, custom_context);
      typename decltype(result->decrypt_config)::BaseType* decrypt_config_ptr;
      mojo::internal::Serialize<::media::mojom::DecryptConfigPtr>(
          in_decrypt_config, buffer, &decrypt_config_ptr, context);
      result->decrypt_config.Set(decrypt_config_ptr);
      decltype(CallWithContext(Traits::front_discard, input, custom_context)) in_front_discard = CallWithContext(Traits::front_discard, input, custom_context);
      typename decltype(result->front_discard)::BaseType* front_discard_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeDeltaPtr>(
          in_front_discard, buffer, &front_discard_ptr, context);
      result->front_discard.Set(front_discard_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->front_discard.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null front_discard in DecoderBuffer struct");
      decltype(CallWithContext(Traits::back_discard, input, custom_context)) in_back_discard = CallWithContext(Traits::back_discard, input, custom_context);
      typename decltype(result->back_discard)::BaseType* back_discard_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeDeltaPtr>(
          in_back_discard, buffer, &back_discard_ptr, context);
      result->back_discard.Set(back_discard_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->back_discard.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null back_discard in DecoderBuffer struct");
      decltype(CallWithContext(Traits::splice_timestamp, input, custom_context)) in_splice_timestamp = CallWithContext(Traits::splice_timestamp, input, custom_context);
      typename decltype(result->splice_timestamp)::BaseType* splice_timestamp_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeDeltaPtr>(
          in_splice_timestamp, buffer, &splice_timestamp_ptr, context);
      result->splice_timestamp.Set(splice_timestamp_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->splice_timestamp.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null splice_timestamp in DecoderBuffer struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::DecoderBuffer_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::DecoderBufferDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::AudioBuffer, ::media::mojom::AudioBufferPtr> {
  static bool IsNull(const ::media::mojom::AudioBufferPtr& input) { return !input; }
  static void SetToNull(::media::mojom::AudioBufferPtr* output) { output->reset(); }
  static decltype(::media::mojom::AudioBuffer::sample_format) sample_format(
      const ::media::mojom::AudioBufferPtr& input) {
    return input->sample_format;
  }
  static decltype(::media::mojom::AudioBuffer::channel_layout) channel_layout(
      const ::media::mojom::AudioBufferPtr& input) {
    return input->channel_layout;
  }
  static decltype(::media::mojom::AudioBuffer::channel_count) channel_count(
      const ::media::mojom::AudioBufferPtr& input) {
    return input->channel_count;
  }
  static decltype(::media::mojom::AudioBuffer::sample_rate) sample_rate(
      const ::media::mojom::AudioBufferPtr& input) {
    return input->sample_rate;
  }
  static decltype(::media::mojom::AudioBuffer::frame_count) frame_count(
      const ::media::mojom::AudioBufferPtr& input) {
    return input->frame_count;
  }
  static decltype(::media::mojom::AudioBuffer::end_of_stream) end_of_stream(
      const ::media::mojom::AudioBufferPtr& input) {
    return input->end_of_stream;
  }
  static decltype(::media::mojom::AudioBuffer::timestamp)& timestamp(
      ::media::mojom::AudioBufferPtr& input) {
    return input->timestamp;
  }
  static decltype(::media::mojom::AudioBuffer::data)& data(
      ::media::mojom::AudioBufferPtr& input) {
    return input->data;
  }

  static bool Read(::media::mojom::AudioBufferDataView input, ::media::mojom::AudioBufferPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::AudioBufferPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::AudioBuffer, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::AudioBuffer_Data);
    decltype(CallWithContext(Traits::timestamp, input, custom_context)) in_timestamp = CallWithContext(Traits::timestamp, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeDeltaPtr>(
        in_timestamp, context);
    decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<uint8_t>>(
        in_data, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::AudioBuffer_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::AudioBuffer_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::media::mojom::SampleFormat>(
          CallWithContext(Traits::sample_format, input, custom_context), &result->sample_format);
      mojo::internal::Serialize<::media::mojom::ChannelLayout>(
          CallWithContext(Traits::channel_layout, input, custom_context), &result->channel_layout);
      result->channel_count = CallWithContext(Traits::channel_count, input, custom_context);
      result->sample_rate = CallWithContext(Traits::sample_rate, input, custom_context);
      result->frame_count = CallWithContext(Traits::frame_count, input, custom_context);
      result->end_of_stream = CallWithContext(Traits::end_of_stream, input, custom_context);
      decltype(CallWithContext(Traits::timestamp, input, custom_context)) in_timestamp = CallWithContext(Traits::timestamp, input, custom_context);
      typename decltype(result->timestamp)::BaseType* timestamp_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeDeltaPtr>(
          in_timestamp, buffer, &timestamp_ptr, context);
      result->timestamp.Set(timestamp_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->timestamp.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null timestamp in AudioBuffer struct");
      decltype(CallWithContext(Traits::data, input, custom_context)) in_data = CallWithContext(Traits::data, input, custom_context);
      typename decltype(result->data)::BaseType* data_ptr;
      const mojo::internal::ContainerValidateParams data_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<uint8_t>>(
          in_data, buffer, &data_ptr, &data_validate_params,
          context);
      result->data.Set(data_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::AudioBuffer_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::AudioBufferDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::VideoFrame, ::media::mojom::VideoFramePtr> {
  static bool IsNull(const ::media::mojom::VideoFramePtr& input) { return !input; }
  static void SetToNull(::media::mojom::VideoFramePtr* output) { output->reset(); }
  static decltype(::media::mojom::VideoFrame::format) format(
      const ::media::mojom::VideoFramePtr& input) {
    return input->format;
  }
  static decltype(::media::mojom::VideoFrame::coded_size)& coded_size(
      ::media::mojom::VideoFramePtr& input) {
    return input->coded_size;
  }
  static decltype(::media::mojom::VideoFrame::visible_rect)& visible_rect(
      ::media::mojom::VideoFramePtr& input) {
    return input->visible_rect;
  }
  static decltype(::media::mojom::VideoFrame::natural_size)& natural_size(
      ::media::mojom::VideoFramePtr& input) {
    return input->natural_size;
  }
  static decltype(::media::mojom::VideoFrame::end_of_stream) end_of_stream(
      const ::media::mojom::VideoFramePtr& input) {
    return input->end_of_stream;
  }
  static decltype(::media::mojom::VideoFrame::timestamp)& timestamp(
      ::media::mojom::VideoFramePtr& input) {
    return input->timestamp;
  }
  static decltype(::media::mojom::VideoFrame::frame_data)& frame_data(
      ::media::mojom::VideoFramePtr& input) {
    return input->frame_data;
  }
  static decltype(::media::mojom::VideoFrame::frame_data_size) frame_data_size(
      const ::media::mojom::VideoFramePtr& input) {
    return input->frame_data_size;
  }
  static decltype(::media::mojom::VideoFrame::y_stride) y_stride(
      const ::media::mojom::VideoFramePtr& input) {
    return input->y_stride;
  }
  static decltype(::media::mojom::VideoFrame::u_stride) u_stride(
      const ::media::mojom::VideoFramePtr& input) {
    return input->u_stride;
  }
  static decltype(::media::mojom::VideoFrame::v_stride) v_stride(
      const ::media::mojom::VideoFramePtr& input) {
    return input->v_stride;
  }
  static decltype(::media::mojom::VideoFrame::y_offset) y_offset(
      const ::media::mojom::VideoFramePtr& input) {
    return input->y_offset;
  }
  static decltype(::media::mojom::VideoFrame::u_offset) u_offset(
      const ::media::mojom::VideoFramePtr& input) {
    return input->u_offset;
  }
  static decltype(::media::mojom::VideoFrame::v_offset) v_offset(
      const ::media::mojom::VideoFramePtr& input) {
    return input->v_offset;
  }

  static bool Read(::media::mojom::VideoFrameDataView input, ::media::mojom::VideoFramePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::VideoFramePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::VideoFrame, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::VideoFrame_Data);
    decltype(CallWithContext(Traits::coded_size, input, custom_context)) in_coded_size = CallWithContext(Traits::coded_size, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_coded_size, context);
    decltype(CallWithContext(Traits::visible_rect, input, custom_context)) in_visible_rect = CallWithContext(Traits::visible_rect, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
        in_visible_rect, context);
    decltype(CallWithContext(Traits::natural_size, input, custom_context)) in_natural_size = CallWithContext(Traits::natural_size, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_natural_size, context);
    decltype(CallWithContext(Traits::timestamp, input, custom_context)) in_timestamp = CallWithContext(Traits::timestamp, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeDeltaPtr>(
        in_timestamp, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::VideoFrame_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::VideoFrame_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::media::mojom::VideoFormat>(
          CallWithContext(Traits::format, input, custom_context), &result->format);
      decltype(CallWithContext(Traits::coded_size, input, custom_context)) in_coded_size = CallWithContext(Traits::coded_size, input, custom_context);
      typename decltype(result->coded_size)::BaseType* coded_size_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_coded_size, buffer, &coded_size_ptr, context);
      result->coded_size.Set(coded_size_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->coded_size.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null coded_size in VideoFrame struct");
      decltype(CallWithContext(Traits::visible_rect, input, custom_context)) in_visible_rect = CallWithContext(Traits::visible_rect, input, custom_context);
      typename decltype(result->visible_rect)::BaseType* visible_rect_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectPtr>(
          in_visible_rect, buffer, &visible_rect_ptr, context);
      result->visible_rect.Set(visible_rect_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->visible_rect.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null visible_rect in VideoFrame struct");
      decltype(CallWithContext(Traits::natural_size, input, custom_context)) in_natural_size = CallWithContext(Traits::natural_size, input, custom_context);
      typename decltype(result->natural_size)::BaseType* natural_size_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_natural_size, buffer, &natural_size_ptr, context);
      result->natural_size.Set(natural_size_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->natural_size.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null natural_size in VideoFrame struct");
      result->end_of_stream = CallWithContext(Traits::end_of_stream, input, custom_context);
      decltype(CallWithContext(Traits::timestamp, input, custom_context)) in_timestamp = CallWithContext(Traits::timestamp, input, custom_context);
      typename decltype(result->timestamp)::BaseType* timestamp_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeDeltaPtr>(
          in_timestamp, buffer, &timestamp_ptr, context);
      result->timestamp.Set(timestamp_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->timestamp.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null timestamp in VideoFrame struct");
      decltype(CallWithContext(Traits::frame_data, input, custom_context)) in_frame_data = CallWithContext(Traits::frame_data, input, custom_context);
      mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
          in_frame_data, &result->frame_data, context);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          !mojo::internal::IsHandleOrInterfaceValid(result->frame_data),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
          "invalid frame_data in VideoFrame struct");
      result->frame_data_size = CallWithContext(Traits::frame_data_size, input, custom_context);
      result->y_stride = CallWithContext(Traits::y_stride, input, custom_context);
      result->u_stride = CallWithContext(Traits::u_stride, input, custom_context);
      result->v_stride = CallWithContext(Traits::v_stride, input, custom_context);
      result->y_offset = CallWithContext(Traits::y_offset, input, custom_context);
      result->u_offset = CallWithContext(Traits::u_offset, input, custom_context);
      result->v_offset = CallWithContext(Traits::v_offset, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::VideoFrame_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::VideoFrameDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::media::mojom::PipelineStatistics, ::media::mojom::PipelineStatisticsPtr> {
  static bool IsNull(const ::media::mojom::PipelineStatisticsPtr& input) { return !input; }
  static void SetToNull(::media::mojom::PipelineStatisticsPtr* output) { output->reset(); }
  static decltype(::media::mojom::PipelineStatistics::audio_bytes_decoded) audio_bytes_decoded(
      const ::media::mojom::PipelineStatisticsPtr& input) {
    return input->audio_bytes_decoded;
  }
  static decltype(::media::mojom::PipelineStatistics::video_bytes_decoded) video_bytes_decoded(
      const ::media::mojom::PipelineStatisticsPtr& input) {
    return input->video_bytes_decoded;
  }
  static decltype(::media::mojom::PipelineStatistics::video_frames_decoded) video_frames_decoded(
      const ::media::mojom::PipelineStatisticsPtr& input) {
    return input->video_frames_decoded;
  }
  static decltype(::media::mojom::PipelineStatistics::video_frames_dropped) video_frames_dropped(
      const ::media::mojom::PipelineStatisticsPtr& input) {
    return input->video_frames_dropped;
  }
  static decltype(::media::mojom::PipelineStatistics::audio_memory_usage) audio_memory_usage(
      const ::media::mojom::PipelineStatisticsPtr& input) {
    return input->audio_memory_usage;
  }
  static decltype(::media::mojom::PipelineStatistics::video_memory_usage) video_memory_usage(
      const ::media::mojom::PipelineStatisticsPtr& input) {
    return input->video_memory_usage;
  }

  static bool Read(::media::mojom::PipelineStatisticsDataView input, ::media::mojom::PipelineStatisticsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::media::mojom::PipelineStatisticsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::media::mojom::PipelineStatistics, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::media::mojom::internal::PipelineStatistics_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::media::mojom::internal::PipelineStatistics_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::media::mojom::internal::PipelineStatistics_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->audio_bytes_decoded = CallWithContext(Traits::audio_bytes_decoded, input, custom_context);
      result->video_bytes_decoded = CallWithContext(Traits::video_bytes_decoded, input, custom_context);
      result->video_frames_decoded = CallWithContext(Traits::video_frames_decoded, input, custom_context);
      result->video_frames_dropped = CallWithContext(Traits::video_frames_dropped, input, custom_context);
      result->audio_memory_usage = CallWithContext(Traits::audio_memory_usage, input, custom_context);
      result->video_memory_usage = CallWithContext(Traits::video_memory_usage, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::media::mojom::internal::PipelineStatistics_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::media::mojom::PipelineStatisticsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_TYPES_MOJOM_H_