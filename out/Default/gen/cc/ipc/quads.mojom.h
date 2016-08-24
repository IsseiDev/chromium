// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_QUADS_MOJOM_H_
#define CC_IPC_QUADS_MOJOM_H_

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
#include "cc/ipc/quads.mojom-shared.h"
#include "cc/ipc/filter_operations.mojom.h"
#include "cc/ipc/render_pass_id.mojom.h"
#include "cc/ipc/shared_quad_state.mojom.h"
#include "cc/ipc/surface_id.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "ui/gfx/mojo/transform.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "ui/gfx/geometry/point.h"
#include "cc/output/compositor_frame.h"
#include "third_party/skia/include/core/SkImageFilter.h"
#include "gpu/command_buffer/common/sync_token.h"
#include "cc/output/filter_operation.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "ui/gfx/geometry/insets.h"
#include "base/version.h"
#include "gpu/config/gpu_info.h"
#include "base/time/time.h"
#include "cc/output/filter_operations.h"
#include "base/strings/string16.h"
#include "ui/gfx/selection_bound.h"
#include "gpu/command_buffer/common/capabilities.h"
#include "ui/gfx/geometry/size.h"
#include "base/values.h"
#include "ui/events/latency_info.h"
#include "cc/output/begin_frame_args.h"
#include "cc/output/compositor_frame_metadata.h"
#include "ui/events/event.h"
#include "cc/quads/draw_quad.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/rect_f.h"
#include "cc/quads/render_pass.h"
#include "gpu/command_buffer/common/mailbox_holder.h"
#include "cc/resources/returned_resource.h"
#include "ui/gfx/buffer_types.h"
#include "ui/gfx/geometry/point_f.h"
#include "gpu/command_buffer/common/mailbox.h"
#include "cc/input/selection.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/native_widget_types.h"
#include "cc/quads/shared_quad_state.h"
#include "cc/resources/transferable_resource.h"
#include "ui/gfx/transform.h"
#include "ui/gfx/geometry/rect.h"
#include "cc/surfaces/surface_sequence.h"
#include "cc/surfaces/surface_id.h"
#include "ui/gfx/geometry/vector2d.h"
#include "cc/quads/render_pass_id.h"


namespace cc {
namespace mojom {
class DebugBorderQuadState;
class DebugBorderQuadStateDataView;
using DebugBorderQuadStatePtr = mojo::InlinedStructPtr<DebugBorderQuadState>;

class RenderPassQuadState;
class RenderPassQuadStateDataView;
using RenderPassQuadStatePtr = mojo::StructPtr<RenderPassQuadState>;

class SolidColorQuadState;
class SolidColorQuadStateDataView;
using SolidColorQuadStatePtr = mojo::InlinedStructPtr<SolidColorQuadState>;

class StreamVideoQuadState;
class StreamVideoQuadStateDataView;
using StreamVideoQuadStatePtr = mojo::StructPtr<StreamVideoQuadState>;

class SurfaceQuadState;
class SurfaceQuadStateDataView;
using SurfaceQuadStatePtr = mojo::StructPtr<SurfaceQuadState>;

class TextureQuadState;
class TextureQuadStateDataView;
using TextureQuadStatePtr = mojo::StructPtr<TextureQuadState>;

class TileQuadState;
class TileQuadStateDataView;
using TileQuadStatePtr = mojo::StructPtr<TileQuadState>;

class YUVVideoQuadState;
class YUVVideoQuadStateDataView;
using YUVVideoQuadStatePtr = mojo::StructPtr<YUVVideoQuadState>;

class DrawQuad;
class DrawQuadDataView;
using DrawQuadPtr = mojo::StructPtr<DrawQuad>;

class DrawQuadState;
class DrawQuadStateDataView;

typedef mojo::StructPtr<DrawQuadState> DrawQuadStatePtr;



class  DebugBorderQuadState {
 public:
  using DataView = DebugBorderQuadStateDataView;
  using Data_ = internal::DebugBorderQuadState_Data;

  static DebugBorderQuadStatePtr New();

  template <typename U>
  static DebugBorderQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<DebugBorderQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DebugBorderQuadState>::Convert(*this);
  }

  DebugBorderQuadState();
  ~DebugBorderQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DebugBorderQuadStatePtr>
  DebugBorderQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DebugBorderQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        DebugBorderQuadStatePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        DebugBorderQuadStatePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t color;
  int32_t width;
};

class DebugBorderQuadStateDataView {
 public:
  DebugBorderQuadStateDataView() {}

  DebugBorderQuadStateDataView(
      internal::DebugBorderQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t color() const {
    return data_->color;
  }
  int32_t width() const {
    return data_->width;
  }
 private:
  internal::DebugBorderQuadState_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::DebugBorderQuadStateDataView> {
  using MojomType = ::cc::mojom::DebugBorderQuadStatePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {




class  SolidColorQuadState {
 public:
  using DataView = SolidColorQuadStateDataView;
  using Data_ = internal::SolidColorQuadState_Data;

  static SolidColorQuadStatePtr New();

  template <typename U>
  static SolidColorQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<SolidColorQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SolidColorQuadState>::Convert(*this);
  }

  SolidColorQuadState();
  ~SolidColorQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SolidColorQuadStatePtr>
  SolidColorQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SolidColorQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SolidColorQuadStatePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SolidColorQuadStatePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t color;
  bool force_anti_aliasing_off;
};

class SolidColorQuadStateDataView {
 public:
  SolidColorQuadStateDataView() {}

  SolidColorQuadStateDataView(
      internal::SolidColorQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t color() const {
    return data_->color;
  }
  bool force_anti_aliasing_off() const {
    return data_->force_anti_aliasing_off;
  }
 private:
  internal::SolidColorQuadState_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::SolidColorQuadStateDataView> {
  using MojomType = ::cc::mojom::SolidColorQuadStatePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {









class  DrawQuadState {
 public:
  using DataView = DrawQuadStateDataView;
  using Data_ = internal::DrawQuadState_Data;
  using Tag = Data_::DrawQuadState_Tag;

  static DrawQuadStatePtr New();

  template <typename U>
  static DrawQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<DrawQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DrawQuadState>::Convert(*this);
  }

  DrawQuadState();
  ~DrawQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = DrawQuadStatePtr>
  DrawQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DrawQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  Tag which() const {
    return tag_;
  }


  bool is_debug_border_quad_state() const { return tag_ == Tag::DEBUG_BORDER_QUAD_STATE; }

  DebugBorderQuadStatePtr& get_debug_border_quad_state() const {
    DCHECK(tag_ == Tag::DEBUG_BORDER_QUAD_STATE);
    return *(data_.debug_border_quad_state);
  }

  void set_debug_border_quad_state(DebugBorderQuadStatePtr debug_border_quad_state);
  bool is_render_pass_quad_state() const { return tag_ == Tag::RENDER_PASS_QUAD_STATE; }

  RenderPassQuadStatePtr& get_render_pass_quad_state() const {
    DCHECK(tag_ == Tag::RENDER_PASS_QUAD_STATE);
    return *(data_.render_pass_quad_state);
  }

  void set_render_pass_quad_state(RenderPassQuadStatePtr render_pass_quad_state);
  bool is_solid_color_quad_state() const { return tag_ == Tag::SOLID_COLOR_QUAD_STATE; }

  SolidColorQuadStatePtr& get_solid_color_quad_state() const {
    DCHECK(tag_ == Tag::SOLID_COLOR_QUAD_STATE);
    return *(data_.solid_color_quad_state);
  }

  void set_solid_color_quad_state(SolidColorQuadStatePtr solid_color_quad_state);
  bool is_stream_video_quad_state() const { return tag_ == Tag::STREAM_VIDEO_QUAD_STATE; }

  StreamVideoQuadStatePtr& get_stream_video_quad_state() const {
    DCHECK(tag_ == Tag::STREAM_VIDEO_QUAD_STATE);
    return *(data_.stream_video_quad_state);
  }

  void set_stream_video_quad_state(StreamVideoQuadStatePtr stream_video_quad_state);
  bool is_surface_quad_state() const { return tag_ == Tag::SURFACE_QUAD_STATE; }

  SurfaceQuadStatePtr& get_surface_quad_state() const {
    DCHECK(tag_ == Tag::SURFACE_QUAD_STATE);
    return *(data_.surface_quad_state);
  }

  void set_surface_quad_state(SurfaceQuadStatePtr surface_quad_state);
  bool is_texture_quad_state() const { return tag_ == Tag::TEXTURE_QUAD_STATE; }

  TextureQuadStatePtr& get_texture_quad_state() const {
    DCHECK(tag_ == Tag::TEXTURE_QUAD_STATE);
    return *(data_.texture_quad_state);
  }

  void set_texture_quad_state(TextureQuadStatePtr texture_quad_state);
  bool is_tile_quad_state() const { return tag_ == Tag::TILE_QUAD_STATE; }

  TileQuadStatePtr& get_tile_quad_state() const {
    DCHECK(tag_ == Tag::TILE_QUAD_STATE);
    return *(data_.tile_quad_state);
  }

  void set_tile_quad_state(TileQuadStatePtr tile_quad_state);
  bool is_yuv_video_quad_state() const { return tag_ == Tag::YUV_VIDEO_QUAD_STATE; }

  YUVVideoQuadStatePtr& get_yuv_video_quad_state() const {
    DCHECK(tag_ == Tag::YUV_VIDEO_QUAD_STATE);
    return *(data_.yuv_video_quad_state);
  }

  void set_yuv_video_quad_state(YUVVideoQuadStatePtr yuv_video_quad_state);

 private:
  friend class mojo::internal::UnionAccessor<DrawQuadState>;
  union Union_ {
    Union_() {}
    ~Union_() {}
    DebugBorderQuadStatePtr* debug_border_quad_state;
    RenderPassQuadStatePtr* render_pass_quad_state;
    SolidColorQuadStatePtr* solid_color_quad_state;
    StreamVideoQuadStatePtr* stream_video_quad_state;
    SurfaceQuadStatePtr* surface_quad_state;
    TextureQuadStatePtr* texture_quad_state;
    TileQuadStatePtr* tile_quad_state;
    YUVVideoQuadStatePtr* yuv_video_quad_state;
  };
  void SwitchActive(Tag new_active);
  void SetActive(Tag new_active);
  void DestroyActive();
  Tag tag_;
  Union_ data_;
};
class DrawQuadStateDataView {
 public:
  using Tag = internal::DrawQuadState_Data::DrawQuadState_Tag;

  DrawQuadStateDataView() {}

  DrawQuadStateDataView(
      internal::DrawQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_debug_border_quad_state() const { return data_->tag == Tag::DEBUG_BORDER_QUAD_STATE; }
  inline void GetDebugBorderQuadStateDataView(
      DebugBorderQuadStateDataView* output);

  template <typename UserType>
  bool ReadDebugBorderQuadState(UserType* output) {
    DCHECK(is_debug_border_quad_state());
    return mojo::internal::Deserialize<::cc::mojom::DebugBorderQuadStatePtr>(
        data_->data.f_debug_border_quad_state.Get(), output, context_);
  }
  bool is_render_pass_quad_state() const { return data_->tag == Tag::RENDER_PASS_QUAD_STATE; }
  inline void GetRenderPassQuadStateDataView(
      RenderPassQuadStateDataView* output);

  template <typename UserType>
  bool ReadRenderPassQuadState(UserType* output) {
    DCHECK(is_render_pass_quad_state());
    return mojo::internal::Deserialize<::cc::mojom::RenderPassQuadStatePtr>(
        data_->data.f_render_pass_quad_state.Get(), output, context_);
  }
  bool is_solid_color_quad_state() const { return data_->tag == Tag::SOLID_COLOR_QUAD_STATE; }
  inline void GetSolidColorQuadStateDataView(
      SolidColorQuadStateDataView* output);

  template <typename UserType>
  bool ReadSolidColorQuadState(UserType* output) {
    DCHECK(is_solid_color_quad_state());
    return mojo::internal::Deserialize<::cc::mojom::SolidColorQuadStatePtr>(
        data_->data.f_solid_color_quad_state.Get(), output, context_);
  }
  bool is_stream_video_quad_state() const { return data_->tag == Tag::STREAM_VIDEO_QUAD_STATE; }
  inline void GetStreamVideoQuadStateDataView(
      StreamVideoQuadStateDataView* output);

  template <typename UserType>
  bool ReadStreamVideoQuadState(UserType* output) {
    DCHECK(is_stream_video_quad_state());
    return mojo::internal::Deserialize<::cc::mojom::StreamVideoQuadStatePtr>(
        data_->data.f_stream_video_quad_state.Get(), output, context_);
  }
  bool is_surface_quad_state() const { return data_->tag == Tag::SURFACE_QUAD_STATE; }
  inline void GetSurfaceQuadStateDataView(
      SurfaceQuadStateDataView* output);

  template <typename UserType>
  bool ReadSurfaceQuadState(UserType* output) {
    DCHECK(is_surface_quad_state());
    return mojo::internal::Deserialize<::cc::mojom::SurfaceQuadStatePtr>(
        data_->data.f_surface_quad_state.Get(), output, context_);
  }
  bool is_texture_quad_state() const { return data_->tag == Tag::TEXTURE_QUAD_STATE; }
  inline void GetTextureQuadStateDataView(
      TextureQuadStateDataView* output);

  template <typename UserType>
  bool ReadTextureQuadState(UserType* output) {
    DCHECK(is_texture_quad_state());
    return mojo::internal::Deserialize<::cc::mojom::TextureQuadStatePtr>(
        data_->data.f_texture_quad_state.Get(), output, context_);
  }
  bool is_tile_quad_state() const { return data_->tag == Tag::TILE_QUAD_STATE; }
  inline void GetTileQuadStateDataView(
      TileQuadStateDataView* output);

  template <typename UserType>
  bool ReadTileQuadState(UserType* output) {
    DCHECK(is_tile_quad_state());
    return mojo::internal::Deserialize<::cc::mojom::TileQuadStatePtr>(
        data_->data.f_tile_quad_state.Get(), output, context_);
  }
  bool is_yuv_video_quad_state() const { return data_->tag == Tag::YUV_VIDEO_QUAD_STATE; }
  inline void GetYuvVideoQuadStateDataView(
      YUVVideoQuadStateDataView* output);

  template <typename UserType>
  bool ReadYuvVideoQuadState(UserType* output) {
    DCHECK(is_yuv_video_quad_state());
    return mojo::internal::Deserialize<::cc::mojom::YUVVideoQuadStatePtr>(
        data_->data.f_yuv_video_quad_state.Get(), output, context_);
  }

 private:
  internal::DrawQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::DrawQuadStateDataView> {
  using MojomType = ::cc::mojom::DrawQuadStatePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {



class  RenderPassQuadState {
 public:
  using DataView = RenderPassQuadStateDataView;
  using Data_ = internal::RenderPassQuadState_Data;

  static RenderPassQuadStatePtr New();

  template <typename U>
  static RenderPassQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<RenderPassQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RenderPassQuadState>::Convert(*this);
  }

  RenderPassQuadState();
  ~RenderPassQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RenderPassQuadStatePtr>
  RenderPassQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, RenderPassQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        RenderPassQuadStatePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        RenderPassQuadStatePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  cc::RenderPassId render_pass_id;
  uint32_t mask_resource_id;
  gfx::Vector2dF mask_uv_scale;
  gfx::Size mask_texture_size;
  cc::FilterOperations filters;
  gfx::Vector2dF filters_scale;
  cc::FilterOperations background_filters;
};

class RenderPassQuadStateDataView {
 public:
  RenderPassQuadStateDataView() {}

  RenderPassQuadStateDataView(
      internal::RenderPassQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRenderPassIdDataView(
      ::cc::mojom::RenderPassIdDataView* output);

  template <typename UserType>
  bool ReadRenderPassId(UserType* output) {
    auto pointer = data_->render_pass_id.Get();
    return mojo::internal::Deserialize<::cc::mojom::RenderPassIdPtr>(
        pointer, output, context_);
  }
  uint32_t mask_resource_id() const {
    return data_->mask_resource_id;
  }
  inline void GetMaskUvScaleDataView(
      ::gfx::mojom::Vector2dFDataView* output);

  template <typename UserType>
  bool ReadMaskUvScale(UserType* output) {
    auto pointer = data_->mask_uv_scale.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dFPtr>(
        pointer, output, context_);
  }
  inline void GetMaskTextureSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadMaskTextureSize(UserType* output) {
    auto pointer = data_->mask_texture_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  inline void GetFiltersDataView(
      ::cc::mojom::FilterOperationsDataView* output);

  template <typename UserType>
  bool ReadFilters(UserType* output) {
    auto pointer = data_->filters.Get();
    return mojo::internal::Deserialize<::cc::mojom::FilterOperationsPtr>(
        pointer, output, context_);
  }
  inline void GetFiltersScaleDataView(
      ::gfx::mojom::Vector2dFDataView* output);

  template <typename UserType>
  bool ReadFiltersScale(UserType* output) {
    auto pointer = data_->filters_scale.Get();
    return mojo::internal::Deserialize<::gfx::mojom::Vector2dFPtr>(
        pointer, output, context_);
  }
  inline void GetBackgroundFiltersDataView(
      ::cc::mojom::FilterOperationsDataView* output);

  template <typename UserType>
  bool ReadBackgroundFilters(UserType* output) {
    auto pointer = data_->background_filters.Get();
    return mojo::internal::Deserialize<::cc::mojom::FilterOperationsPtr>(
        pointer, output, context_);
  }
 private:
  internal::RenderPassQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::RenderPassQuadStateDataView> {
  using MojomType = ::cc::mojom::RenderPassQuadStatePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {




class  StreamVideoQuadState {
 public:
  using DataView = StreamVideoQuadStateDataView;
  using Data_ = internal::StreamVideoQuadState_Data;

  static StreamVideoQuadStatePtr New();

  template <typename U>
  static StreamVideoQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<StreamVideoQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, StreamVideoQuadState>::Convert(*this);
  }

  StreamVideoQuadState();
  ~StreamVideoQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StreamVideoQuadStatePtr>
  StreamVideoQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, StreamVideoQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        StreamVideoQuadStatePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        StreamVideoQuadStatePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t resource_id;
  gfx::Size resource_size_in_pixels;
  gfx::Transform matrix;
};

class StreamVideoQuadStateDataView {
 public:
  StreamVideoQuadStateDataView() {}

  StreamVideoQuadStateDataView(
      internal::StreamVideoQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t resource_id() const {
    return data_->resource_id;
  }
  inline void GetResourceSizeInPixelsDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadResourceSizeInPixels(UserType* output) {
    auto pointer = data_->resource_size_in_pixels.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  inline void GetMatrixDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  bool ReadMatrix(UserType* output) {
    auto pointer = data_->matrix.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformPtr>(
        pointer, output, context_);
  }
 private:
  internal::StreamVideoQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::StreamVideoQuadStateDataView> {
  using MojomType = ::cc::mojom::StreamVideoQuadStatePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {



class  SurfaceQuadState {
 public:
  using DataView = SurfaceQuadStateDataView;
  using Data_ = internal::SurfaceQuadState_Data;

  static SurfaceQuadStatePtr New();

  template <typename U>
  static SurfaceQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<SurfaceQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SurfaceQuadState>::Convert(*this);
  }

  SurfaceQuadState();
  ~SurfaceQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SurfaceQuadStatePtr>
  SurfaceQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SurfaceQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SurfaceQuadStatePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SurfaceQuadStatePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  cc::SurfaceId surface;
};

class SurfaceQuadStateDataView {
 public:
  SurfaceQuadStateDataView() {}

  SurfaceQuadStateDataView(
      internal::SurfaceQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceDataView(
      ::cc::mojom::SurfaceIdDataView* output);

  template <typename UserType>
  bool ReadSurface(UserType* output) {
    auto pointer = data_->surface.Get();
    return mojo::internal::Deserialize<::cc::mojom::SurfaceIdPtr>(
        pointer, output, context_);
  }
 private:
  internal::SurfaceQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::SurfaceQuadStateDataView> {
  using MojomType = ::cc::mojom::SurfaceQuadStatePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {



class  TextureQuadState {
 public:
  using DataView = TextureQuadStateDataView;
  using Data_ = internal::TextureQuadState_Data;

  static TextureQuadStatePtr New();

  template <typename U>
  static TextureQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<TextureQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TextureQuadState>::Convert(*this);
  }

  TextureQuadState();
  ~TextureQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TextureQuadStatePtr>
  TextureQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TextureQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        TextureQuadStatePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        TextureQuadStatePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t resource_id;
  bool premultiplied_alpha;
  gfx::PointF uv_top_left;
  gfx::PointF uv_bottom_right;
  uint32_t background_color;
  std::vector<float> vertex_opacity;
  bool y_flipped;
  bool nearest_neighbor;
  bool secure_output_only;
};

class TextureQuadStateDataView {
 public:
  TextureQuadStateDataView() {}

  TextureQuadStateDataView(
      internal::TextureQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t resource_id() const {
    return data_->resource_id;
  }
  bool premultiplied_alpha() const {
    return data_->premultiplied_alpha;
  }
  inline void GetUvTopLeftDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  bool ReadUvTopLeft(UserType* output) {
    auto pointer = data_->uv_top_left.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFPtr>(
        pointer, output, context_);
  }
  inline void GetUvBottomRightDataView(
      ::gfx::mojom::PointFDataView* output);

  template <typename UserType>
  bool ReadUvBottomRight(UserType* output) {
    auto pointer = data_->uv_bottom_right.Get();
    return mojo::internal::Deserialize<::gfx::mojom::PointFPtr>(
        pointer, output, context_);
  }
  uint32_t background_color() const {
    return data_->background_color;
  }
  inline void GetVertexOpacityDataView(
      mojo::ArrayDataView<float>* output);

  template <typename UserType>
  bool ReadVertexOpacity(UserType* output) {
    auto pointer = data_->vertex_opacity.Get();
    return mojo::internal::Deserialize<mojo::Array<float>>(
        pointer, output, context_);
  }
  bool y_flipped() const {
    return data_->y_flipped;
  }
  bool nearest_neighbor() const {
    return data_->nearest_neighbor;
  }
  bool secure_output_only() const {
    return data_->secure_output_only;
  }
 private:
  internal::TextureQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::TextureQuadStateDataView> {
  using MojomType = ::cc::mojom::TextureQuadStatePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {



class  TileQuadState {
 public:
  using DataView = TileQuadStateDataView;
  using Data_ = internal::TileQuadState_Data;

  static TileQuadStatePtr New();

  template <typename U>
  static TileQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<TileQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TileQuadState>::Convert(*this);
  }

  TileQuadState();
  ~TileQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TileQuadStatePtr>
  TileQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TileQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        TileQuadStatePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        TileQuadStatePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  gfx::RectF tex_coord_rect;
  gfx::Size texture_size;
  bool swizzle_contents;
  uint32_t resource_id;
  bool nearest_neighbor;
};

class TileQuadStateDataView {
 public:
  TileQuadStateDataView() {}

  TileQuadStateDataView(
      internal::TileQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTexCoordRectDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  bool ReadTexCoordRect(UserType* output) {
    auto pointer = data_->tex_coord_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFPtr>(
        pointer, output, context_);
  }
  inline void GetTextureSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadTextureSize(UserType* output) {
    auto pointer = data_->texture_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  bool swizzle_contents() const {
    return data_->swizzle_contents;
  }
  uint32_t resource_id() const {
    return data_->resource_id;
  }
  bool nearest_neighbor() const {
    return data_->nearest_neighbor;
  }
 private:
  internal::TileQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::TileQuadStateDataView> {
  using MojomType = ::cc::mojom::TileQuadStatePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {



class  YUVVideoQuadState {
 public:
  using DataView = YUVVideoQuadStateDataView;
  using Data_ = internal::YUVVideoQuadState_Data;

  static YUVVideoQuadStatePtr New();

  template <typename U>
  static YUVVideoQuadStatePtr From(const U& u) {
    return mojo::TypeConverter<YUVVideoQuadStatePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, YUVVideoQuadState>::Convert(*this);
  }

  YUVVideoQuadState();
  ~YUVVideoQuadState();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = YUVVideoQuadStatePtr>
  YUVVideoQuadStatePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, YUVVideoQuadState>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        YUVVideoQuadStatePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        YUVVideoQuadStatePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  gfx::RectF ya_tex_coord_rect;
  gfx::RectF uv_tex_coord_rect;
  gfx::Size ya_tex_size;
  gfx::Size uv_tex_size;
  uint32_t y_plane_resource_id;
  uint32_t u_plane_resource_id;
  uint32_t v_plane_resource_id;
  uint32_t a_plane_resource_id;
  YUVColorSpace color_space;
  float resource_offset;
  float resource_multiplier;
  uint32_t bits_per_channel;
};

class YUVVideoQuadStateDataView {
 public:
  YUVVideoQuadStateDataView() {}

  YUVVideoQuadStateDataView(
      internal::YUVVideoQuadState_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetYaTexCoordRectDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  bool ReadYaTexCoordRect(UserType* output) {
    auto pointer = data_->ya_tex_coord_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFPtr>(
        pointer, output, context_);
  }
  inline void GetUvTexCoordRectDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  bool ReadUvTexCoordRect(UserType* output) {
    auto pointer = data_->uv_tex_coord_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFPtr>(
        pointer, output, context_);
  }
  inline void GetYaTexSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadYaTexSize(UserType* output) {
    auto pointer = data_->ya_tex_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  inline void GetUvTexSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadUvTexSize(UserType* output) {
    auto pointer = data_->uv_tex_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  uint32_t y_plane_resource_id() const {
    return data_->y_plane_resource_id;
  }
  uint32_t u_plane_resource_id() const {
    return data_->u_plane_resource_id;
  }
  uint32_t v_plane_resource_id() const {
    return data_->v_plane_resource_id;
  }
  uint32_t a_plane_resource_id() const {
    return data_->a_plane_resource_id;
  }
  template <typename UserType>
  bool ReadColorSpace(UserType* output) const {
    auto data_value = data_->color_space;
    return mojo::internal::Deserialize<::cc::mojom::YUVColorSpace>(
        data_value, output);
  }

  ::cc::mojom::YUVColorSpace color_space() const {
    return static_cast<::cc::mojom::YUVColorSpace>(data_->color_space);
  }
  float resource_offset() const {
    return data_->resource_offset;
  }
  float resource_multiplier() const {
    return data_->resource_multiplier;
  }
  uint32_t bits_per_channel() const {
    return data_->bits_per_channel;
  }
 private:
  internal::YUVVideoQuadState_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::YUVVideoQuadStateDataView> {
  using MojomType = ::cc::mojom::YUVVideoQuadStatePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {



class  DrawQuad {
 public:
  using DataView = DrawQuadDataView;
  using Data_ = internal::DrawQuad_Data;

  static DrawQuadPtr New();

  template <typename U>
  static DrawQuadPtr From(const U& u) {
    return mojo::TypeConverter<DrawQuadPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DrawQuad>::Convert(*this);
  }

  DrawQuad();
  ~DrawQuad();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DrawQuadPtr>
  DrawQuadPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DrawQuad>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        DrawQuadPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        DrawQuadPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  gfx::Rect rect;
  gfx::Rect opaque_rect;
  gfx::Rect visible_rect;
  bool needs_blending;
  base::Optional<cc::SharedQuadState> sqs;
  DrawQuadStatePtr draw_quad_state;
 private:
  DISALLOW_COPY_AND_ASSIGN(DrawQuad);
};

class DrawQuadDataView {
 public:
  DrawQuadDataView() {}

  DrawQuadDataView(
      internal::DrawQuad_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  bool ReadRect(UserType* output) {
    auto pointer = data_->rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectPtr>(
        pointer, output, context_);
  }
  inline void GetOpaqueRectDataView(
      ::gfx::mojom::RectDataView* output);

  template <typename UserType>
  bool ReadOpaqueRect(UserType* output) {
    auto pointer = data_->opaque_rect.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectPtr>(
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
  bool needs_blending() const {
    return data_->needs_blending;
  }
  inline void GetSqsDataView(
      ::cc::mojom::SharedQuadStateDataView* output);

  template <typename UserType>
  bool ReadSqs(UserType* output) {
    auto pointer = data_->sqs.Get();
    return mojo::internal::Deserialize<::cc::mojom::SharedQuadStatePtr>(
        pointer, output, context_);
  }
  inline void GetDrawQuadStateDataView(
      DrawQuadStateDataView* output);

  template <typename UserType>
  bool ReadDrawQuadState(UserType* output) {
    auto pointer = &data_->draw_quad_state;
    return mojo::internal::Deserialize<::cc::mojom::DrawQuadStatePtr>(
        pointer, output, context_);
  }
 private:
  internal::DrawQuad_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::DrawQuadDataView> {
  using MojomType = ::cc::mojom::DrawQuadPtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {


template <typename UnionPtrType>
DrawQuadStatePtr DrawQuadState::Clone() const {
  // Use UnionPtrType to prevent the compiler from trying to compile this
  // without being asked.
  UnionPtrType rv(New());
  switch (tag_) {
    case Tag::DEBUG_BORDER_QUAD_STATE:
      rv->set_debug_border_quad_state(mojo::internal::Clone(*data_.debug_border_quad_state));
      break;
    case Tag::RENDER_PASS_QUAD_STATE:
      rv->set_render_pass_quad_state(mojo::internal::Clone(*data_.render_pass_quad_state));
      break;
    case Tag::SOLID_COLOR_QUAD_STATE:
      rv->set_solid_color_quad_state(mojo::internal::Clone(*data_.solid_color_quad_state));
      break;
    case Tag::STREAM_VIDEO_QUAD_STATE:
      rv->set_stream_video_quad_state(mojo::internal::Clone(*data_.stream_video_quad_state));
      break;
    case Tag::SURFACE_QUAD_STATE:
      rv->set_surface_quad_state(mojo::internal::Clone(*data_.surface_quad_state));
      break;
    case Tag::TEXTURE_QUAD_STATE:
      rv->set_texture_quad_state(mojo::internal::Clone(*data_.texture_quad_state));
      break;
    case Tag::TILE_QUAD_STATE:
      rv->set_tile_quad_state(mojo::internal::Clone(*data_.tile_quad_state));
      break;
    case Tag::YUV_VIDEO_QUAD_STATE:
      rv->set_yuv_video_quad_state(mojo::internal::Clone(*data_.yuv_video_quad_state));
      break;
  };
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DrawQuadState>::value>::type*>
bool DrawQuadState::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::DEBUG_BORDER_QUAD_STATE:
      return mojo::internal::Equals(*(data_.debug_border_quad_state), *(other.data_.debug_border_quad_state));
    case Tag::RENDER_PASS_QUAD_STATE:
      return mojo::internal::Equals(*(data_.render_pass_quad_state), *(other.data_.render_pass_quad_state));
    case Tag::SOLID_COLOR_QUAD_STATE:
      return mojo::internal::Equals(*(data_.solid_color_quad_state), *(other.data_.solid_color_quad_state));
    case Tag::STREAM_VIDEO_QUAD_STATE:
      return mojo::internal::Equals(*(data_.stream_video_quad_state), *(other.data_.stream_video_quad_state));
    case Tag::SURFACE_QUAD_STATE:
      return mojo::internal::Equals(*(data_.surface_quad_state), *(other.data_.surface_quad_state));
    case Tag::TEXTURE_QUAD_STATE:
      return mojo::internal::Equals(*(data_.texture_quad_state), *(other.data_.texture_quad_state));
    case Tag::TILE_QUAD_STATE:
      return mojo::internal::Equals(*(data_.tile_quad_state), *(other.data_.tile_quad_state));
    case Tag::YUV_VIDEO_QUAD_STATE:
      return mojo::internal::Equals(*(data_.yuv_video_quad_state), *(other.data_.yuv_video_quad_state));
  };

  return false;
}

inline void DrawQuadStateDataView::GetDebugBorderQuadStateDataView(
    DebugBorderQuadStateDataView* output) {
  DCHECK(is_debug_border_quad_state());
  *output = DebugBorderQuadStateDataView(data_->data.f_debug_border_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetRenderPassQuadStateDataView(
    RenderPassQuadStateDataView* output) {
  DCHECK(is_render_pass_quad_state());
  *output = RenderPassQuadStateDataView(data_->data.f_render_pass_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetSolidColorQuadStateDataView(
    SolidColorQuadStateDataView* output) {
  DCHECK(is_solid_color_quad_state());
  *output = SolidColorQuadStateDataView(data_->data.f_solid_color_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetStreamVideoQuadStateDataView(
    StreamVideoQuadStateDataView* output) {
  DCHECK(is_stream_video_quad_state());
  *output = StreamVideoQuadStateDataView(data_->data.f_stream_video_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetSurfaceQuadStateDataView(
    SurfaceQuadStateDataView* output) {
  DCHECK(is_surface_quad_state());
  *output = SurfaceQuadStateDataView(data_->data.f_surface_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetTextureQuadStateDataView(
    TextureQuadStateDataView* output) {
  DCHECK(is_texture_quad_state());
  *output = TextureQuadStateDataView(data_->data.f_texture_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetTileQuadStateDataView(
    TileQuadStateDataView* output) {
  DCHECK(is_tile_quad_state());
  *output = TileQuadStateDataView(data_->data.f_tile_quad_state.Get(), context_);
}
inline void DrawQuadStateDataView::GetYuvVideoQuadStateDataView(
    YUVVideoQuadStateDataView* output) {
  DCHECK(is_yuv_video_quad_state());
  *output = YUVVideoQuadStateDataView(data_->data.f_yuv_video_quad_state.Get(), context_);
}
template <typename StructPtrType>
DebugBorderQuadStatePtr DebugBorderQuadState::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->color = mojo::internal::Clone(color);
  rv->width = mojo::internal::Clone(width);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DebugBorderQuadState>::value>::type*>
bool DebugBorderQuadState::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->color, other.color))
    return false;
  if (!mojo::internal::Equals(this->width, other.width))
    return false;
  return true;
}


template <typename StructPtrType>
RenderPassQuadStatePtr RenderPassQuadState::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->render_pass_id = mojo::internal::Clone(render_pass_id);
  rv->mask_resource_id = mojo::internal::Clone(mask_resource_id);
  rv->mask_uv_scale = mojo::internal::Clone(mask_uv_scale);
  rv->mask_texture_size = mojo::internal::Clone(mask_texture_size);
  rv->filters = mojo::internal::Clone(filters);
  rv->filters_scale = mojo::internal::Clone(filters_scale);
  rv->background_filters = mojo::internal::Clone(background_filters);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, RenderPassQuadState>::value>::type*>
bool RenderPassQuadState::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->render_pass_id, other.render_pass_id))
    return false;
  if (!mojo::internal::Equals(this->mask_resource_id, other.mask_resource_id))
    return false;
  if (!mojo::internal::Equals(this->mask_uv_scale, other.mask_uv_scale))
    return false;
  if (!mojo::internal::Equals(this->mask_texture_size, other.mask_texture_size))
    return false;
  if (!mojo::internal::Equals(this->filters, other.filters))
    return false;
  if (!mojo::internal::Equals(this->filters_scale, other.filters_scale))
    return false;
  if (!mojo::internal::Equals(this->background_filters, other.background_filters))
    return false;
  return true;
}

inline void RenderPassQuadStateDataView::GetRenderPassIdDataView(
    ::cc::mojom::RenderPassIdDataView* output) {
  auto pointer = data_->render_pass_id.Get();
  *output = ::cc::mojom::RenderPassIdDataView(pointer, context_);
}
inline void RenderPassQuadStateDataView::GetMaskUvScaleDataView(
    ::gfx::mojom::Vector2dFDataView* output) {
  auto pointer = data_->mask_uv_scale.Get();
  *output = ::gfx::mojom::Vector2dFDataView(pointer, context_);
}
inline void RenderPassQuadStateDataView::GetMaskTextureSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->mask_texture_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void RenderPassQuadStateDataView::GetFiltersDataView(
    ::cc::mojom::FilterOperationsDataView* output) {
  auto pointer = data_->filters.Get();
  *output = ::cc::mojom::FilterOperationsDataView(pointer, context_);
}
inline void RenderPassQuadStateDataView::GetFiltersScaleDataView(
    ::gfx::mojom::Vector2dFDataView* output) {
  auto pointer = data_->filters_scale.Get();
  *output = ::gfx::mojom::Vector2dFDataView(pointer, context_);
}
inline void RenderPassQuadStateDataView::GetBackgroundFiltersDataView(
    ::cc::mojom::FilterOperationsDataView* output) {
  auto pointer = data_->background_filters.Get();
  *output = ::cc::mojom::FilterOperationsDataView(pointer, context_);
}

template <typename StructPtrType>
SolidColorQuadStatePtr SolidColorQuadState::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->color = mojo::internal::Clone(color);
  rv->force_anti_aliasing_off = mojo::internal::Clone(force_anti_aliasing_off);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SolidColorQuadState>::value>::type*>
bool SolidColorQuadState::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->color, other.color))
    return false;
  if (!mojo::internal::Equals(this->force_anti_aliasing_off, other.force_anti_aliasing_off))
    return false;
  return true;
}


template <typename StructPtrType>
StreamVideoQuadStatePtr StreamVideoQuadState::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->resource_id = mojo::internal::Clone(resource_id);
  rv->resource_size_in_pixels = mojo::internal::Clone(resource_size_in_pixels);
  rv->matrix = mojo::internal::Clone(matrix);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, StreamVideoQuadState>::value>::type*>
bool StreamVideoQuadState::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->resource_id, other.resource_id))
    return false;
  if (!mojo::internal::Equals(this->resource_size_in_pixels, other.resource_size_in_pixels))
    return false;
  if (!mojo::internal::Equals(this->matrix, other.matrix))
    return false;
  return true;
}

inline void StreamVideoQuadStateDataView::GetResourceSizeInPixelsDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->resource_size_in_pixels.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void StreamVideoQuadStateDataView::GetMatrixDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->matrix.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}

template <typename StructPtrType>
SurfaceQuadStatePtr SurfaceQuadState::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->surface = mojo::internal::Clone(surface);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SurfaceQuadState>::value>::type*>
bool SurfaceQuadState::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->surface, other.surface))
    return false;
  return true;
}

inline void SurfaceQuadStateDataView::GetSurfaceDataView(
    ::cc::mojom::SurfaceIdDataView* output) {
  auto pointer = data_->surface.Get();
  *output = ::cc::mojom::SurfaceIdDataView(pointer, context_);
}

template <typename StructPtrType>
TextureQuadStatePtr TextureQuadState::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->resource_id = mojo::internal::Clone(resource_id);
  rv->premultiplied_alpha = mojo::internal::Clone(premultiplied_alpha);
  rv->uv_top_left = mojo::internal::Clone(uv_top_left);
  rv->uv_bottom_right = mojo::internal::Clone(uv_bottom_right);
  rv->background_color = mojo::internal::Clone(background_color);
  rv->vertex_opacity = mojo::internal::Clone(vertex_opacity);
  rv->y_flipped = mojo::internal::Clone(y_flipped);
  rv->nearest_neighbor = mojo::internal::Clone(nearest_neighbor);
  rv->secure_output_only = mojo::internal::Clone(secure_output_only);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TextureQuadState>::value>::type*>
bool TextureQuadState::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->resource_id, other.resource_id))
    return false;
  if (!mojo::internal::Equals(this->premultiplied_alpha, other.premultiplied_alpha))
    return false;
  if (!mojo::internal::Equals(this->uv_top_left, other.uv_top_left))
    return false;
  if (!mojo::internal::Equals(this->uv_bottom_right, other.uv_bottom_right))
    return false;
  if (!mojo::internal::Equals(this->background_color, other.background_color))
    return false;
  if (!mojo::internal::Equals(this->vertex_opacity, other.vertex_opacity))
    return false;
  if (!mojo::internal::Equals(this->y_flipped, other.y_flipped))
    return false;
  if (!mojo::internal::Equals(this->nearest_neighbor, other.nearest_neighbor))
    return false;
  if (!mojo::internal::Equals(this->secure_output_only, other.secure_output_only))
    return false;
  return true;
}

inline void TextureQuadStateDataView::GetUvTopLeftDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->uv_top_left.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void TextureQuadStateDataView::GetUvBottomRightDataView(
    ::gfx::mojom::PointFDataView* output) {
  auto pointer = data_->uv_bottom_right.Get();
  *output = ::gfx::mojom::PointFDataView(pointer, context_);
}
inline void TextureQuadStateDataView::GetVertexOpacityDataView(
    mojo::ArrayDataView<float>* output) {
  auto pointer = data_->vertex_opacity.Get();
  *output = mojo::ArrayDataView<float>(pointer, context_);
}

template <typename StructPtrType>
TileQuadStatePtr TileQuadState::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->tex_coord_rect = mojo::internal::Clone(tex_coord_rect);
  rv->texture_size = mojo::internal::Clone(texture_size);
  rv->swizzle_contents = mojo::internal::Clone(swizzle_contents);
  rv->resource_id = mojo::internal::Clone(resource_id);
  rv->nearest_neighbor = mojo::internal::Clone(nearest_neighbor);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TileQuadState>::value>::type*>
bool TileQuadState::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->tex_coord_rect, other.tex_coord_rect))
    return false;
  if (!mojo::internal::Equals(this->texture_size, other.texture_size))
    return false;
  if (!mojo::internal::Equals(this->swizzle_contents, other.swizzle_contents))
    return false;
  if (!mojo::internal::Equals(this->resource_id, other.resource_id))
    return false;
  if (!mojo::internal::Equals(this->nearest_neighbor, other.nearest_neighbor))
    return false;
  return true;
}

inline void TileQuadStateDataView::GetTexCoordRectDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->tex_coord_rect.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void TileQuadStateDataView::GetTextureSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->texture_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}

template <typename StructPtrType>
YUVVideoQuadStatePtr YUVVideoQuadState::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->ya_tex_coord_rect = mojo::internal::Clone(ya_tex_coord_rect);
  rv->uv_tex_coord_rect = mojo::internal::Clone(uv_tex_coord_rect);
  rv->ya_tex_size = mojo::internal::Clone(ya_tex_size);
  rv->uv_tex_size = mojo::internal::Clone(uv_tex_size);
  rv->y_plane_resource_id = mojo::internal::Clone(y_plane_resource_id);
  rv->u_plane_resource_id = mojo::internal::Clone(u_plane_resource_id);
  rv->v_plane_resource_id = mojo::internal::Clone(v_plane_resource_id);
  rv->a_plane_resource_id = mojo::internal::Clone(a_plane_resource_id);
  rv->color_space = mojo::internal::Clone(color_space);
  rv->resource_offset = mojo::internal::Clone(resource_offset);
  rv->resource_multiplier = mojo::internal::Clone(resource_multiplier);
  rv->bits_per_channel = mojo::internal::Clone(bits_per_channel);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, YUVVideoQuadState>::value>::type*>
bool YUVVideoQuadState::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->ya_tex_coord_rect, other.ya_tex_coord_rect))
    return false;
  if (!mojo::internal::Equals(this->uv_tex_coord_rect, other.uv_tex_coord_rect))
    return false;
  if (!mojo::internal::Equals(this->ya_tex_size, other.ya_tex_size))
    return false;
  if (!mojo::internal::Equals(this->uv_tex_size, other.uv_tex_size))
    return false;
  if (!mojo::internal::Equals(this->y_plane_resource_id, other.y_plane_resource_id))
    return false;
  if (!mojo::internal::Equals(this->u_plane_resource_id, other.u_plane_resource_id))
    return false;
  if (!mojo::internal::Equals(this->v_plane_resource_id, other.v_plane_resource_id))
    return false;
  if (!mojo::internal::Equals(this->a_plane_resource_id, other.a_plane_resource_id))
    return false;
  if (!mojo::internal::Equals(this->color_space, other.color_space))
    return false;
  if (!mojo::internal::Equals(this->resource_offset, other.resource_offset))
    return false;
  if (!mojo::internal::Equals(this->resource_multiplier, other.resource_multiplier))
    return false;
  if (!mojo::internal::Equals(this->bits_per_channel, other.bits_per_channel))
    return false;
  return true;
}

inline void YUVVideoQuadStateDataView::GetYaTexCoordRectDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->ya_tex_coord_rect.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void YUVVideoQuadStateDataView::GetUvTexCoordRectDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->uv_tex_coord_rect.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}
inline void YUVVideoQuadStateDataView::GetYaTexSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->ya_tex_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void YUVVideoQuadStateDataView::GetUvTexSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->uv_tex_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}

template <typename StructPtrType>
DrawQuadPtr DrawQuad::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->rect = mojo::internal::Clone(rect);
  rv->opaque_rect = mojo::internal::Clone(opaque_rect);
  rv->visible_rect = mojo::internal::Clone(visible_rect);
  rv->needs_blending = mojo::internal::Clone(needs_blending);
  rv->sqs = mojo::internal::Clone(sqs);
  rv->draw_quad_state = mojo::internal::Clone(draw_quad_state);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DrawQuad>::value>::type*>
bool DrawQuad::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->rect, other.rect))
    return false;
  if (!mojo::internal::Equals(this->opaque_rect, other.opaque_rect))
    return false;
  if (!mojo::internal::Equals(this->visible_rect, other.visible_rect))
    return false;
  if (!mojo::internal::Equals(this->needs_blending, other.needs_blending))
    return false;
  if (!mojo::internal::Equals(this->sqs, other.sqs))
    return false;
  if (!mojo::internal::Equals(this->draw_quad_state, other.draw_quad_state))
    return false;
  return true;
}

inline void DrawQuadDataView::GetRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void DrawQuadDataView::GetOpaqueRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->opaque_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void DrawQuadDataView::GetVisibleRectDataView(
    ::gfx::mojom::RectDataView* output) {
  auto pointer = data_->visible_rect.Get();
  *output = ::gfx::mojom::RectDataView(pointer, context_);
}
inline void DrawQuadDataView::GetSqsDataView(
    ::cc::mojom::SharedQuadStateDataView* output) {
  auto pointer = data_->sqs.Get();
  *output = ::cc::mojom::SharedQuadStateDataView(pointer, context_);
}
inline void DrawQuadDataView::GetDrawQuadStateDataView(
    DrawQuadStateDataView* output) {
  auto pointer = &data_->draw_quad_state;
  *output = DrawQuadStateDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace cc

namespace mojo {


template <>
struct  StructTraits<::cc::mojom::DebugBorderQuadState, ::cc::mojom::DebugBorderQuadStatePtr> {
  static bool IsNull(const ::cc::mojom::DebugBorderQuadStatePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::DebugBorderQuadStatePtr* output) { output->reset(); }
  static decltype(::cc::mojom::DebugBorderQuadState::color) color(
      const ::cc::mojom::DebugBorderQuadStatePtr& input) {
    return input->color;
  }
  static decltype(::cc::mojom::DebugBorderQuadState::width) width(
      const ::cc::mojom::DebugBorderQuadStatePtr& input) {
    return input->width;
  }

  static bool Read(::cc::mojom::DebugBorderQuadStateDataView input, ::cc::mojom::DebugBorderQuadStatePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::DebugBorderQuadStatePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::DebugBorderQuadState, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::DebugBorderQuadState_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::DebugBorderQuadState_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::DebugBorderQuadState_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->color = CallWithContext(Traits::color, input, custom_context);
      result->width = CallWithContext(Traits::width, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::DebugBorderQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::DebugBorderQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::cc::mojom::RenderPassQuadState, ::cc::mojom::RenderPassQuadStatePtr> {
  static bool IsNull(const ::cc::mojom::RenderPassQuadStatePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::RenderPassQuadStatePtr* output) { output->reset(); }
  static decltype(::cc::mojom::RenderPassQuadState::render_pass_id)& render_pass_id(
      ::cc::mojom::RenderPassQuadStatePtr& input) {
    return input->render_pass_id;
  }
  static decltype(::cc::mojom::RenderPassQuadState::mask_resource_id) mask_resource_id(
      const ::cc::mojom::RenderPassQuadStatePtr& input) {
    return input->mask_resource_id;
  }
  static decltype(::cc::mojom::RenderPassQuadState::mask_uv_scale)& mask_uv_scale(
      ::cc::mojom::RenderPassQuadStatePtr& input) {
    return input->mask_uv_scale;
  }
  static decltype(::cc::mojom::RenderPassQuadState::mask_texture_size)& mask_texture_size(
      ::cc::mojom::RenderPassQuadStatePtr& input) {
    return input->mask_texture_size;
  }
  static decltype(::cc::mojom::RenderPassQuadState::filters)& filters(
      ::cc::mojom::RenderPassQuadStatePtr& input) {
    return input->filters;
  }
  static decltype(::cc::mojom::RenderPassQuadState::filters_scale)& filters_scale(
      ::cc::mojom::RenderPassQuadStatePtr& input) {
    return input->filters_scale;
  }
  static decltype(::cc::mojom::RenderPassQuadState::background_filters)& background_filters(
      ::cc::mojom::RenderPassQuadStatePtr& input) {
    return input->background_filters;
  }

  static bool Read(::cc::mojom::RenderPassQuadStateDataView input, ::cc::mojom::RenderPassQuadStatePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::RenderPassQuadStatePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::RenderPassQuadState, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::RenderPassQuadState_Data);
    decltype(CallWithContext(Traits::render_pass_id, input, custom_context)) in_render_pass_id = CallWithContext(Traits::render_pass_id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::cc::mojom::RenderPassIdPtr>(
        in_render_pass_id, context);
    decltype(CallWithContext(Traits::mask_uv_scale, input, custom_context)) in_mask_uv_scale = CallWithContext(Traits::mask_uv_scale, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::Vector2dFPtr>(
        in_mask_uv_scale, context);
    decltype(CallWithContext(Traits::mask_texture_size, input, custom_context)) in_mask_texture_size = CallWithContext(Traits::mask_texture_size, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_mask_texture_size, context);
    decltype(CallWithContext(Traits::filters, input, custom_context)) in_filters = CallWithContext(Traits::filters, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::cc::mojom::FilterOperationsPtr>(
        in_filters, context);
    decltype(CallWithContext(Traits::filters_scale, input, custom_context)) in_filters_scale = CallWithContext(Traits::filters_scale, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::Vector2dFPtr>(
        in_filters_scale, context);
    decltype(CallWithContext(Traits::background_filters, input, custom_context)) in_background_filters = CallWithContext(Traits::background_filters, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::cc::mojom::FilterOperationsPtr>(
        in_background_filters, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::RenderPassQuadState_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::RenderPassQuadState_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::render_pass_id, input, custom_context)) in_render_pass_id = CallWithContext(Traits::render_pass_id, input, custom_context);
      typename decltype(result->render_pass_id)::BaseType* render_pass_id_ptr;
      mojo::internal::Serialize<::cc::mojom::RenderPassIdPtr>(
          in_render_pass_id, buffer, &render_pass_id_ptr, context);
      result->render_pass_id.Set(render_pass_id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->render_pass_id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null render_pass_id in RenderPassQuadState struct");
      result->mask_resource_id = CallWithContext(Traits::mask_resource_id, input, custom_context);
      decltype(CallWithContext(Traits::mask_uv_scale, input, custom_context)) in_mask_uv_scale = CallWithContext(Traits::mask_uv_scale, input, custom_context);
      typename decltype(result->mask_uv_scale)::BaseType* mask_uv_scale_ptr;
      mojo::internal::Serialize<::gfx::mojom::Vector2dFPtr>(
          in_mask_uv_scale, buffer, &mask_uv_scale_ptr, context);
      result->mask_uv_scale.Set(mask_uv_scale_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->mask_uv_scale.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null mask_uv_scale in RenderPassQuadState struct");
      decltype(CallWithContext(Traits::mask_texture_size, input, custom_context)) in_mask_texture_size = CallWithContext(Traits::mask_texture_size, input, custom_context);
      typename decltype(result->mask_texture_size)::BaseType* mask_texture_size_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_mask_texture_size, buffer, &mask_texture_size_ptr, context);
      result->mask_texture_size.Set(mask_texture_size_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->mask_texture_size.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null mask_texture_size in RenderPassQuadState struct");
      decltype(CallWithContext(Traits::filters, input, custom_context)) in_filters = CallWithContext(Traits::filters, input, custom_context);
      typename decltype(result->filters)::BaseType* filters_ptr;
      mojo::internal::Serialize<::cc::mojom::FilterOperationsPtr>(
          in_filters, buffer, &filters_ptr, context);
      result->filters.Set(filters_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->filters.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null filters in RenderPassQuadState struct");
      decltype(CallWithContext(Traits::filters_scale, input, custom_context)) in_filters_scale = CallWithContext(Traits::filters_scale, input, custom_context);
      typename decltype(result->filters_scale)::BaseType* filters_scale_ptr;
      mojo::internal::Serialize<::gfx::mojom::Vector2dFPtr>(
          in_filters_scale, buffer, &filters_scale_ptr, context);
      result->filters_scale.Set(filters_scale_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->filters_scale.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null filters_scale in RenderPassQuadState struct");
      decltype(CallWithContext(Traits::background_filters, input, custom_context)) in_background_filters = CallWithContext(Traits::background_filters, input, custom_context);
      typename decltype(result->background_filters)::BaseType* background_filters_ptr;
      mojo::internal::Serialize<::cc::mojom::FilterOperationsPtr>(
          in_background_filters, buffer, &background_filters_ptr, context);
      result->background_filters.Set(background_filters_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->background_filters.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null background_filters in RenderPassQuadState struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::RenderPassQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::RenderPassQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::cc::mojom::SolidColorQuadState, ::cc::mojom::SolidColorQuadStatePtr> {
  static bool IsNull(const ::cc::mojom::SolidColorQuadStatePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::SolidColorQuadStatePtr* output) { output->reset(); }
  static decltype(::cc::mojom::SolidColorQuadState::color) color(
      const ::cc::mojom::SolidColorQuadStatePtr& input) {
    return input->color;
  }
  static decltype(::cc::mojom::SolidColorQuadState::force_anti_aliasing_off) force_anti_aliasing_off(
      const ::cc::mojom::SolidColorQuadStatePtr& input) {
    return input->force_anti_aliasing_off;
  }

  static bool Read(::cc::mojom::SolidColorQuadStateDataView input, ::cc::mojom::SolidColorQuadStatePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::SolidColorQuadStatePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::SolidColorQuadState, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::SolidColorQuadState_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::SolidColorQuadState_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::SolidColorQuadState_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->color = CallWithContext(Traits::color, input, custom_context);
      result->force_anti_aliasing_off = CallWithContext(Traits::force_anti_aliasing_off, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::SolidColorQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::SolidColorQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::cc::mojom::StreamVideoQuadState, ::cc::mojom::StreamVideoQuadStatePtr> {
  static bool IsNull(const ::cc::mojom::StreamVideoQuadStatePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::StreamVideoQuadStatePtr* output) { output->reset(); }
  static decltype(::cc::mojom::StreamVideoQuadState::resource_id) resource_id(
      const ::cc::mojom::StreamVideoQuadStatePtr& input) {
    return input->resource_id;
  }
  static decltype(::cc::mojom::StreamVideoQuadState::resource_size_in_pixels)& resource_size_in_pixels(
      ::cc::mojom::StreamVideoQuadStatePtr& input) {
    return input->resource_size_in_pixels;
  }
  static decltype(::cc::mojom::StreamVideoQuadState::matrix)& matrix(
      ::cc::mojom::StreamVideoQuadStatePtr& input) {
    return input->matrix;
  }

  static bool Read(::cc::mojom::StreamVideoQuadStateDataView input, ::cc::mojom::StreamVideoQuadStatePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::StreamVideoQuadStatePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::StreamVideoQuadState, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::StreamVideoQuadState_Data);
    decltype(CallWithContext(Traits::resource_size_in_pixels, input, custom_context)) in_resource_size_in_pixels = CallWithContext(Traits::resource_size_in_pixels, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_resource_size_in_pixels, context);
    decltype(CallWithContext(Traits::matrix, input, custom_context)) in_matrix = CallWithContext(Traits::matrix, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::TransformPtr>(
        in_matrix, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::StreamVideoQuadState_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::StreamVideoQuadState_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->resource_id = CallWithContext(Traits::resource_id, input, custom_context);
      decltype(CallWithContext(Traits::resource_size_in_pixels, input, custom_context)) in_resource_size_in_pixels = CallWithContext(Traits::resource_size_in_pixels, input, custom_context);
      typename decltype(result->resource_size_in_pixels)::BaseType* resource_size_in_pixels_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_resource_size_in_pixels, buffer, &resource_size_in_pixels_ptr, context);
      result->resource_size_in_pixels.Set(resource_size_in_pixels_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->resource_size_in_pixels.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null resource_size_in_pixels in StreamVideoQuadState struct");
      decltype(CallWithContext(Traits::matrix, input, custom_context)) in_matrix = CallWithContext(Traits::matrix, input, custom_context);
      typename decltype(result->matrix)::BaseType* matrix_ptr;
      mojo::internal::Serialize<::gfx::mojom::TransformPtr>(
          in_matrix, buffer, &matrix_ptr, context);
      result->matrix.Set(matrix_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->matrix.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null matrix in StreamVideoQuadState struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::StreamVideoQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::StreamVideoQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::cc::mojom::SurfaceQuadState, ::cc::mojom::SurfaceQuadStatePtr> {
  static bool IsNull(const ::cc::mojom::SurfaceQuadStatePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::SurfaceQuadStatePtr* output) { output->reset(); }
  static decltype(::cc::mojom::SurfaceQuadState::surface)& surface(
      ::cc::mojom::SurfaceQuadStatePtr& input) {
    return input->surface;
  }

  static bool Read(::cc::mojom::SurfaceQuadStateDataView input, ::cc::mojom::SurfaceQuadStatePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::SurfaceQuadStatePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::SurfaceQuadState, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::SurfaceQuadState_Data);
    decltype(CallWithContext(Traits::surface, input, custom_context)) in_surface = CallWithContext(Traits::surface, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::cc::mojom::SurfaceIdPtr>(
        in_surface, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::SurfaceQuadState_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::SurfaceQuadState_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::surface, input, custom_context)) in_surface = CallWithContext(Traits::surface, input, custom_context);
      typename decltype(result->surface)::BaseType* surface_ptr;
      mojo::internal::Serialize<::cc::mojom::SurfaceIdPtr>(
          in_surface, buffer, &surface_ptr, context);
      result->surface.Set(surface_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->surface.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null surface in SurfaceQuadState struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::SurfaceQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::SurfaceQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::cc::mojom::TextureQuadState, ::cc::mojom::TextureQuadStatePtr> {
  static bool IsNull(const ::cc::mojom::TextureQuadStatePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::TextureQuadStatePtr* output) { output->reset(); }
  static decltype(::cc::mojom::TextureQuadState::resource_id) resource_id(
      const ::cc::mojom::TextureQuadStatePtr& input) {
    return input->resource_id;
  }
  static decltype(::cc::mojom::TextureQuadState::premultiplied_alpha) premultiplied_alpha(
      const ::cc::mojom::TextureQuadStatePtr& input) {
    return input->premultiplied_alpha;
  }
  static decltype(::cc::mojom::TextureQuadState::uv_top_left)& uv_top_left(
      ::cc::mojom::TextureQuadStatePtr& input) {
    return input->uv_top_left;
  }
  static decltype(::cc::mojom::TextureQuadState::uv_bottom_right)& uv_bottom_right(
      ::cc::mojom::TextureQuadStatePtr& input) {
    return input->uv_bottom_right;
  }
  static decltype(::cc::mojom::TextureQuadState::background_color) background_color(
      const ::cc::mojom::TextureQuadStatePtr& input) {
    return input->background_color;
  }
  static decltype(::cc::mojom::TextureQuadState::vertex_opacity)& vertex_opacity(
      ::cc::mojom::TextureQuadStatePtr& input) {
    return input->vertex_opacity;
  }
  static decltype(::cc::mojom::TextureQuadState::y_flipped) y_flipped(
      const ::cc::mojom::TextureQuadStatePtr& input) {
    return input->y_flipped;
  }
  static decltype(::cc::mojom::TextureQuadState::nearest_neighbor) nearest_neighbor(
      const ::cc::mojom::TextureQuadStatePtr& input) {
    return input->nearest_neighbor;
  }
  static decltype(::cc::mojom::TextureQuadState::secure_output_only) secure_output_only(
      const ::cc::mojom::TextureQuadStatePtr& input) {
    return input->secure_output_only;
  }

  static bool Read(::cc::mojom::TextureQuadStateDataView input, ::cc::mojom::TextureQuadStatePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::TextureQuadStatePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::TextureQuadState, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::TextureQuadState_Data);
    decltype(CallWithContext(Traits::uv_top_left, input, custom_context)) in_uv_top_left = CallWithContext(Traits::uv_top_left, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::PointFPtr>(
        in_uv_top_left, context);
    decltype(CallWithContext(Traits::uv_bottom_right, input, custom_context)) in_uv_bottom_right = CallWithContext(Traits::uv_bottom_right, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::PointFPtr>(
        in_uv_bottom_right, context);
    decltype(CallWithContext(Traits::vertex_opacity, input, custom_context)) in_vertex_opacity = CallWithContext(Traits::vertex_opacity, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<float>>(
        in_vertex_opacity, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::TextureQuadState_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::TextureQuadState_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->resource_id = CallWithContext(Traits::resource_id, input, custom_context);
      result->premultiplied_alpha = CallWithContext(Traits::premultiplied_alpha, input, custom_context);
      decltype(CallWithContext(Traits::uv_top_left, input, custom_context)) in_uv_top_left = CallWithContext(Traits::uv_top_left, input, custom_context);
      typename decltype(result->uv_top_left)::BaseType* uv_top_left_ptr;
      mojo::internal::Serialize<::gfx::mojom::PointFPtr>(
          in_uv_top_left, buffer, &uv_top_left_ptr, context);
      result->uv_top_left.Set(uv_top_left_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->uv_top_left.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null uv_top_left in TextureQuadState struct");
      decltype(CallWithContext(Traits::uv_bottom_right, input, custom_context)) in_uv_bottom_right = CallWithContext(Traits::uv_bottom_right, input, custom_context);
      typename decltype(result->uv_bottom_right)::BaseType* uv_bottom_right_ptr;
      mojo::internal::Serialize<::gfx::mojom::PointFPtr>(
          in_uv_bottom_right, buffer, &uv_bottom_right_ptr, context);
      result->uv_bottom_right.Set(uv_bottom_right_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->uv_bottom_right.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null uv_bottom_right in TextureQuadState struct");
      result->background_color = CallWithContext(Traits::background_color, input, custom_context);
      decltype(CallWithContext(Traits::vertex_opacity, input, custom_context)) in_vertex_opacity = CallWithContext(Traits::vertex_opacity, input, custom_context);
      typename decltype(result->vertex_opacity)::BaseType* vertex_opacity_ptr;
      const mojo::internal::ContainerValidateParams vertex_opacity_validate_params(
          4, false, nullptr);
      mojo::internal::Serialize<mojo::Array<float>>(
          in_vertex_opacity, buffer, &vertex_opacity_ptr, &vertex_opacity_validate_params,
          context);
      result->vertex_opacity.Set(vertex_opacity_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->vertex_opacity.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null vertex_opacity in TextureQuadState struct");
      result->y_flipped = CallWithContext(Traits::y_flipped, input, custom_context);
      result->nearest_neighbor = CallWithContext(Traits::nearest_neighbor, input, custom_context);
      result->secure_output_only = CallWithContext(Traits::secure_output_only, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::TextureQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::TextureQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::cc::mojom::TileQuadState, ::cc::mojom::TileQuadStatePtr> {
  static bool IsNull(const ::cc::mojom::TileQuadStatePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::TileQuadStatePtr* output) { output->reset(); }
  static decltype(::cc::mojom::TileQuadState::tex_coord_rect)& tex_coord_rect(
      ::cc::mojom::TileQuadStatePtr& input) {
    return input->tex_coord_rect;
  }
  static decltype(::cc::mojom::TileQuadState::texture_size)& texture_size(
      ::cc::mojom::TileQuadStatePtr& input) {
    return input->texture_size;
  }
  static decltype(::cc::mojom::TileQuadState::swizzle_contents) swizzle_contents(
      const ::cc::mojom::TileQuadStatePtr& input) {
    return input->swizzle_contents;
  }
  static decltype(::cc::mojom::TileQuadState::resource_id) resource_id(
      const ::cc::mojom::TileQuadStatePtr& input) {
    return input->resource_id;
  }
  static decltype(::cc::mojom::TileQuadState::nearest_neighbor) nearest_neighbor(
      const ::cc::mojom::TileQuadStatePtr& input) {
    return input->nearest_neighbor;
  }

  static bool Read(::cc::mojom::TileQuadStateDataView input, ::cc::mojom::TileQuadStatePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::TileQuadStatePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::TileQuadState, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::TileQuadState_Data);
    decltype(CallWithContext(Traits::tex_coord_rect, input, custom_context)) in_tex_coord_rect = CallWithContext(Traits::tex_coord_rect, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectFPtr>(
        in_tex_coord_rect, context);
    decltype(CallWithContext(Traits::texture_size, input, custom_context)) in_texture_size = CallWithContext(Traits::texture_size, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_texture_size, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::TileQuadState_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::TileQuadState_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::tex_coord_rect, input, custom_context)) in_tex_coord_rect = CallWithContext(Traits::tex_coord_rect, input, custom_context);
      typename decltype(result->tex_coord_rect)::BaseType* tex_coord_rect_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectFPtr>(
          in_tex_coord_rect, buffer, &tex_coord_rect_ptr, context);
      result->tex_coord_rect.Set(tex_coord_rect_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->tex_coord_rect.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null tex_coord_rect in TileQuadState struct");
      decltype(CallWithContext(Traits::texture_size, input, custom_context)) in_texture_size = CallWithContext(Traits::texture_size, input, custom_context);
      typename decltype(result->texture_size)::BaseType* texture_size_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_texture_size, buffer, &texture_size_ptr, context);
      result->texture_size.Set(texture_size_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->texture_size.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null texture_size in TileQuadState struct");
      result->swizzle_contents = CallWithContext(Traits::swizzle_contents, input, custom_context);
      result->resource_id = CallWithContext(Traits::resource_id, input, custom_context);
      result->nearest_neighbor = CallWithContext(Traits::nearest_neighbor, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::TileQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::TileQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::cc::mojom::YUVVideoQuadState, ::cc::mojom::YUVVideoQuadStatePtr> {
  static bool IsNull(const ::cc::mojom::YUVVideoQuadStatePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::YUVVideoQuadStatePtr* output) { output->reset(); }
  static decltype(::cc::mojom::YUVVideoQuadState::ya_tex_coord_rect)& ya_tex_coord_rect(
      ::cc::mojom::YUVVideoQuadStatePtr& input) {
    return input->ya_tex_coord_rect;
  }
  static decltype(::cc::mojom::YUVVideoQuadState::uv_tex_coord_rect)& uv_tex_coord_rect(
      ::cc::mojom::YUVVideoQuadStatePtr& input) {
    return input->uv_tex_coord_rect;
  }
  static decltype(::cc::mojom::YUVVideoQuadState::ya_tex_size)& ya_tex_size(
      ::cc::mojom::YUVVideoQuadStatePtr& input) {
    return input->ya_tex_size;
  }
  static decltype(::cc::mojom::YUVVideoQuadState::uv_tex_size)& uv_tex_size(
      ::cc::mojom::YUVVideoQuadStatePtr& input) {
    return input->uv_tex_size;
  }
  static decltype(::cc::mojom::YUVVideoQuadState::y_plane_resource_id) y_plane_resource_id(
      const ::cc::mojom::YUVVideoQuadStatePtr& input) {
    return input->y_plane_resource_id;
  }
  static decltype(::cc::mojom::YUVVideoQuadState::u_plane_resource_id) u_plane_resource_id(
      const ::cc::mojom::YUVVideoQuadStatePtr& input) {
    return input->u_plane_resource_id;
  }
  static decltype(::cc::mojom::YUVVideoQuadState::v_plane_resource_id) v_plane_resource_id(
      const ::cc::mojom::YUVVideoQuadStatePtr& input) {
    return input->v_plane_resource_id;
  }
  static decltype(::cc::mojom::YUVVideoQuadState::a_plane_resource_id) a_plane_resource_id(
      const ::cc::mojom::YUVVideoQuadStatePtr& input) {
    return input->a_plane_resource_id;
  }
  static decltype(::cc::mojom::YUVVideoQuadState::color_space) color_space(
      const ::cc::mojom::YUVVideoQuadStatePtr& input) {
    return input->color_space;
  }
  static decltype(::cc::mojom::YUVVideoQuadState::resource_offset) resource_offset(
      const ::cc::mojom::YUVVideoQuadStatePtr& input) {
    return input->resource_offset;
  }
  static decltype(::cc::mojom::YUVVideoQuadState::resource_multiplier) resource_multiplier(
      const ::cc::mojom::YUVVideoQuadStatePtr& input) {
    return input->resource_multiplier;
  }
  static decltype(::cc::mojom::YUVVideoQuadState::bits_per_channel) bits_per_channel(
      const ::cc::mojom::YUVVideoQuadStatePtr& input) {
    return input->bits_per_channel;
  }

  static bool Read(::cc::mojom::YUVVideoQuadStateDataView input, ::cc::mojom::YUVVideoQuadStatePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::YUVVideoQuadStatePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::YUVVideoQuadState, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::YUVVideoQuadState_Data);
    decltype(CallWithContext(Traits::ya_tex_coord_rect, input, custom_context)) in_ya_tex_coord_rect = CallWithContext(Traits::ya_tex_coord_rect, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectFPtr>(
        in_ya_tex_coord_rect, context);
    decltype(CallWithContext(Traits::uv_tex_coord_rect, input, custom_context)) in_uv_tex_coord_rect = CallWithContext(Traits::uv_tex_coord_rect, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectFPtr>(
        in_uv_tex_coord_rect, context);
    decltype(CallWithContext(Traits::ya_tex_size, input, custom_context)) in_ya_tex_size = CallWithContext(Traits::ya_tex_size, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_ya_tex_size, context);
    decltype(CallWithContext(Traits::uv_tex_size, input, custom_context)) in_uv_tex_size = CallWithContext(Traits::uv_tex_size, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_uv_tex_size, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::YUVVideoQuadState_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::YUVVideoQuadState_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::ya_tex_coord_rect, input, custom_context)) in_ya_tex_coord_rect = CallWithContext(Traits::ya_tex_coord_rect, input, custom_context);
      typename decltype(result->ya_tex_coord_rect)::BaseType* ya_tex_coord_rect_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectFPtr>(
          in_ya_tex_coord_rect, buffer, &ya_tex_coord_rect_ptr, context);
      result->ya_tex_coord_rect.Set(ya_tex_coord_rect_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->ya_tex_coord_rect.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null ya_tex_coord_rect in YUVVideoQuadState struct");
      decltype(CallWithContext(Traits::uv_tex_coord_rect, input, custom_context)) in_uv_tex_coord_rect = CallWithContext(Traits::uv_tex_coord_rect, input, custom_context);
      typename decltype(result->uv_tex_coord_rect)::BaseType* uv_tex_coord_rect_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectFPtr>(
          in_uv_tex_coord_rect, buffer, &uv_tex_coord_rect_ptr, context);
      result->uv_tex_coord_rect.Set(uv_tex_coord_rect_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->uv_tex_coord_rect.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null uv_tex_coord_rect in YUVVideoQuadState struct");
      decltype(CallWithContext(Traits::ya_tex_size, input, custom_context)) in_ya_tex_size = CallWithContext(Traits::ya_tex_size, input, custom_context);
      typename decltype(result->ya_tex_size)::BaseType* ya_tex_size_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_ya_tex_size, buffer, &ya_tex_size_ptr, context);
      result->ya_tex_size.Set(ya_tex_size_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->ya_tex_size.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null ya_tex_size in YUVVideoQuadState struct");
      decltype(CallWithContext(Traits::uv_tex_size, input, custom_context)) in_uv_tex_size = CallWithContext(Traits::uv_tex_size, input, custom_context);
      typename decltype(result->uv_tex_size)::BaseType* uv_tex_size_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_uv_tex_size, buffer, &uv_tex_size_ptr, context);
      result->uv_tex_size.Set(uv_tex_size_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->uv_tex_size.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null uv_tex_size in YUVVideoQuadState struct");
      result->y_plane_resource_id = CallWithContext(Traits::y_plane_resource_id, input, custom_context);
      result->u_plane_resource_id = CallWithContext(Traits::u_plane_resource_id, input, custom_context);
      result->v_plane_resource_id = CallWithContext(Traits::v_plane_resource_id, input, custom_context);
      result->a_plane_resource_id = CallWithContext(Traits::a_plane_resource_id, input, custom_context);
      mojo::internal::Serialize<::cc::mojom::YUVColorSpace>(
          CallWithContext(Traits::color_space, input, custom_context), &result->color_space);
      result->resource_offset = CallWithContext(Traits::resource_offset, input, custom_context);
      result->resource_multiplier = CallWithContext(Traits::resource_multiplier, input, custom_context);
      result->bits_per_channel = CallWithContext(Traits::bits_per_channel, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::YUVVideoQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::YUVVideoQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::cc::mojom::DrawQuad, ::cc::mojom::DrawQuadPtr> {
  static bool IsNull(const ::cc::mojom::DrawQuadPtr& input) { return !input; }
  static void SetToNull(::cc::mojom::DrawQuadPtr* output) { output->reset(); }
  static decltype(::cc::mojom::DrawQuad::rect)& rect(
      ::cc::mojom::DrawQuadPtr& input) {
    return input->rect;
  }
  static decltype(::cc::mojom::DrawQuad::opaque_rect)& opaque_rect(
      ::cc::mojom::DrawQuadPtr& input) {
    return input->opaque_rect;
  }
  static decltype(::cc::mojom::DrawQuad::visible_rect)& visible_rect(
      ::cc::mojom::DrawQuadPtr& input) {
    return input->visible_rect;
  }
  static decltype(::cc::mojom::DrawQuad::needs_blending) needs_blending(
      const ::cc::mojom::DrawQuadPtr& input) {
    return input->needs_blending;
  }
  static decltype(::cc::mojom::DrawQuad::sqs)& sqs(
      ::cc::mojom::DrawQuadPtr& input) {
    return input->sqs;
  }
  static decltype(::cc::mojom::DrawQuad::draw_quad_state)& draw_quad_state(
      ::cc::mojom::DrawQuadPtr& input) {
    return input->draw_quad_state;
  }

  static bool Read(::cc::mojom::DrawQuadDataView input, ::cc::mojom::DrawQuadPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::DrawQuadPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::DrawQuad, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::DrawQuad_Data);
    decltype(CallWithContext(Traits::rect, input, custom_context)) in_rect = CallWithContext(Traits::rect, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
        in_rect, context);
    decltype(CallWithContext(Traits::opaque_rect, input, custom_context)) in_opaque_rect = CallWithContext(Traits::opaque_rect, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
        in_opaque_rect, context);
    decltype(CallWithContext(Traits::visible_rect, input, custom_context)) in_visible_rect = CallWithContext(Traits::visible_rect, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectPtr>(
        in_visible_rect, context);
    decltype(CallWithContext(Traits::sqs, input, custom_context)) in_sqs = CallWithContext(Traits::sqs, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::cc::mojom::SharedQuadStatePtr>(
        in_sqs, context);
    decltype(CallWithContext(Traits::draw_quad_state, input, custom_context)) in_draw_quad_state = CallWithContext(Traits::draw_quad_state, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::cc::mojom::DrawQuadStatePtr>(
        in_draw_quad_state, true, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::DrawQuad_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::DrawQuad_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::rect, input, custom_context)) in_rect = CallWithContext(Traits::rect, input, custom_context);
      typename decltype(result->rect)::BaseType* rect_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectPtr>(
          in_rect, buffer, &rect_ptr, context);
      result->rect.Set(rect_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->rect.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null rect in DrawQuad struct");
      decltype(CallWithContext(Traits::opaque_rect, input, custom_context)) in_opaque_rect = CallWithContext(Traits::opaque_rect, input, custom_context);
      typename decltype(result->opaque_rect)::BaseType* opaque_rect_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectPtr>(
          in_opaque_rect, buffer, &opaque_rect_ptr, context);
      result->opaque_rect.Set(opaque_rect_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->opaque_rect.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null opaque_rect in DrawQuad struct");
      decltype(CallWithContext(Traits::visible_rect, input, custom_context)) in_visible_rect = CallWithContext(Traits::visible_rect, input, custom_context);
      typename decltype(result->visible_rect)::BaseType* visible_rect_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectPtr>(
          in_visible_rect, buffer, &visible_rect_ptr, context);
      result->visible_rect.Set(visible_rect_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->visible_rect.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null visible_rect in DrawQuad struct");
      result->needs_blending = CallWithContext(Traits::needs_blending, input, custom_context);
      decltype(CallWithContext(Traits::sqs, input, custom_context)) in_sqs = CallWithContext(Traits::sqs, input, custom_context);
      typename decltype(result->sqs)::BaseType* sqs_ptr;
      mojo::internal::Serialize<::cc::mojom::SharedQuadStatePtr>(
          in_sqs, buffer, &sqs_ptr, context);
      result->sqs.Set(sqs_ptr);
      decltype(CallWithContext(Traits::draw_quad_state, input, custom_context)) in_draw_quad_state = CallWithContext(Traits::draw_quad_state, input, custom_context);
      auto draw_quad_state_ptr = &result->draw_quad_state;
      mojo::internal::Serialize<::cc::mojom::DrawQuadStatePtr>(
          in_draw_quad_state, buffer, &draw_quad_state_ptr, true, context);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->draw_quad_state.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null draw_quad_state in DrawQuad struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::DrawQuad_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::DrawQuadDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  UnionTraits<::cc::mojom::DrawQuadState, ::cc::mojom::DrawQuadStatePtr> {
  static bool IsNull(const ::cc::mojom::DrawQuadStatePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::DrawQuadStatePtr* output) { output->reset(); }

  static ::cc::mojom::DrawQuadState::Tag GetTag(const ::cc::mojom::DrawQuadStatePtr& input) {
    return input->which();
  }
  static decltype(std::declval<::cc::mojom::DrawQuadState>().get_debug_border_quad_state())
      debug_border_quad_state(::cc::mojom::DrawQuadStatePtr& input) {
    return input->get_debug_border_quad_state();
  }
  static decltype(std::declval<::cc::mojom::DrawQuadState>().get_render_pass_quad_state())
      render_pass_quad_state(::cc::mojom::DrawQuadStatePtr& input) {
    return input->get_render_pass_quad_state();
  }
  static decltype(std::declval<::cc::mojom::DrawQuadState>().get_solid_color_quad_state())
      solid_color_quad_state(::cc::mojom::DrawQuadStatePtr& input) {
    return input->get_solid_color_quad_state();
  }
  static decltype(std::declval<::cc::mojom::DrawQuadState>().get_stream_video_quad_state())
      stream_video_quad_state(::cc::mojom::DrawQuadStatePtr& input) {
    return input->get_stream_video_quad_state();
  }
  static decltype(std::declval<::cc::mojom::DrawQuadState>().get_surface_quad_state())
      surface_quad_state(::cc::mojom::DrawQuadStatePtr& input) {
    return input->get_surface_quad_state();
  }
  static decltype(std::declval<::cc::mojom::DrawQuadState>().get_texture_quad_state())
      texture_quad_state(::cc::mojom::DrawQuadStatePtr& input) {
    return input->get_texture_quad_state();
  }
  static decltype(std::declval<::cc::mojom::DrawQuadState>().get_tile_quad_state())
      tile_quad_state(::cc::mojom::DrawQuadStatePtr& input) {
    return input->get_tile_quad_state();
  }
  static decltype(std::declval<::cc::mojom::DrawQuadState>().get_yuv_video_quad_state())
      yuv_video_quad_state(::cc::mojom::DrawQuadStatePtr& input) {
    return input->get_yuv_video_quad_state();
  }

  static bool Read(::cc::mojom::DrawQuadStateDataView input, ::cc::mojom::DrawQuadStatePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::DrawQuadStatePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::cc::mojom::DrawQuadState, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   bool inlined,
                                   SerializationContext* context) {
    size_t size = inlined ? 0 : sizeof(::cc::mojom::internal::DrawQuadState_Data);

    if (CallIsNullIfExists<Traits>(input))
      return size;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    switch (CallWithContext(Traits::GetTag, input, custom_context)) {
      case ::cc::mojom::DrawQuadState::Tag::DEBUG_BORDER_QUAD_STATE: {
        decltype(CallWithContext(Traits::debug_border_quad_state, input, custom_context))
            in_debug_border_quad_state = CallWithContext(Traits::debug_border_quad_state, input,
                                          custom_context);
        size += mojo::internal::PrepareToSerialize<::cc::mojom::DebugBorderQuadStatePtr>(
            in_debug_border_quad_state, context);
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::RENDER_PASS_QUAD_STATE: {
        decltype(CallWithContext(Traits::render_pass_quad_state, input, custom_context))
            in_render_pass_quad_state = CallWithContext(Traits::render_pass_quad_state, input,
                                          custom_context);
        size += mojo::internal::PrepareToSerialize<::cc::mojom::RenderPassQuadStatePtr>(
            in_render_pass_quad_state, context);
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::SOLID_COLOR_QUAD_STATE: {
        decltype(CallWithContext(Traits::solid_color_quad_state, input, custom_context))
            in_solid_color_quad_state = CallWithContext(Traits::solid_color_quad_state, input,
                                          custom_context);
        size += mojo::internal::PrepareToSerialize<::cc::mojom::SolidColorQuadStatePtr>(
            in_solid_color_quad_state, context);
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::STREAM_VIDEO_QUAD_STATE: {
        decltype(CallWithContext(Traits::stream_video_quad_state, input, custom_context))
            in_stream_video_quad_state = CallWithContext(Traits::stream_video_quad_state, input,
                                          custom_context);
        size += mojo::internal::PrepareToSerialize<::cc::mojom::StreamVideoQuadStatePtr>(
            in_stream_video_quad_state, context);
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::SURFACE_QUAD_STATE: {
        decltype(CallWithContext(Traits::surface_quad_state, input, custom_context))
            in_surface_quad_state = CallWithContext(Traits::surface_quad_state, input,
                                          custom_context);
        size += mojo::internal::PrepareToSerialize<::cc::mojom::SurfaceQuadStatePtr>(
            in_surface_quad_state, context);
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::TEXTURE_QUAD_STATE: {
        decltype(CallWithContext(Traits::texture_quad_state, input, custom_context))
            in_texture_quad_state = CallWithContext(Traits::texture_quad_state, input,
                                          custom_context);
        size += mojo::internal::PrepareToSerialize<::cc::mojom::TextureQuadStatePtr>(
            in_texture_quad_state, context);
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::TILE_QUAD_STATE: {
        decltype(CallWithContext(Traits::tile_quad_state, input, custom_context))
            in_tile_quad_state = CallWithContext(Traits::tile_quad_state, input,
                                          custom_context);
        size += mojo::internal::PrepareToSerialize<::cc::mojom::TileQuadStatePtr>(
            in_tile_quad_state, context);
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::YUV_VIDEO_QUAD_STATE: {
        decltype(CallWithContext(Traits::yuv_video_quad_state, input, custom_context))
            in_yuv_video_quad_state = CallWithContext(Traits::yuv_video_quad_state, input,
                                          custom_context);
        size += mojo::internal::PrepareToSerialize<::cc::mojom::YUVVideoQuadStatePtr>(
            in_yuv_video_quad_state, context);
        break;
      }
    }
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::DrawQuadState_Data** output,
                        bool inlined,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      if (inlined)
        (*output)->set_null();
      else
        *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    if (!inlined)
      *output = ::cc::mojom::internal::DrawQuadState_Data::New(buffer);

    ::cc::mojom::internal::DrawQuadState_Data* result = *output;
    ALLOW_UNUSED_LOCAL(result);
    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    result->size = kUnionDataSize;
    result->tag = CallWithContext(Traits::GetTag, input, custom_context);
    switch (result->tag) {
      case ::cc::mojom::DrawQuadState::Tag::DEBUG_BORDER_QUAD_STATE: {
        decltype(CallWithContext(Traits::debug_border_quad_state, input, custom_context))
            in_debug_border_quad_state = CallWithContext(Traits::debug_border_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_debug_border_quad_state)::BaseType* ptr;
        mojo::internal::Serialize<::cc::mojom::DebugBorderQuadStatePtr>(
            in_debug_border_quad_state, buffer, &ptr, context);
        result->data.f_debug_border_quad_state.Set(ptr);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !ptr, mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null debug_border_quad_state in DrawQuadState union");
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::RENDER_PASS_QUAD_STATE: {
        decltype(CallWithContext(Traits::render_pass_quad_state, input, custom_context))
            in_render_pass_quad_state = CallWithContext(Traits::render_pass_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_render_pass_quad_state)::BaseType* ptr;
        mojo::internal::Serialize<::cc::mojom::RenderPassQuadStatePtr>(
            in_render_pass_quad_state, buffer, &ptr, context);
        result->data.f_render_pass_quad_state.Set(ptr);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !ptr, mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null render_pass_quad_state in DrawQuadState union");
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::SOLID_COLOR_QUAD_STATE: {
        decltype(CallWithContext(Traits::solid_color_quad_state, input, custom_context))
            in_solid_color_quad_state = CallWithContext(Traits::solid_color_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_solid_color_quad_state)::BaseType* ptr;
        mojo::internal::Serialize<::cc::mojom::SolidColorQuadStatePtr>(
            in_solid_color_quad_state, buffer, &ptr, context);
        result->data.f_solid_color_quad_state.Set(ptr);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !ptr, mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null solid_color_quad_state in DrawQuadState union");
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::STREAM_VIDEO_QUAD_STATE: {
        decltype(CallWithContext(Traits::stream_video_quad_state, input, custom_context))
            in_stream_video_quad_state = CallWithContext(Traits::stream_video_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_stream_video_quad_state)::BaseType* ptr;
        mojo::internal::Serialize<::cc::mojom::StreamVideoQuadStatePtr>(
            in_stream_video_quad_state, buffer, &ptr, context);
        result->data.f_stream_video_quad_state.Set(ptr);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !ptr, mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null stream_video_quad_state in DrawQuadState union");
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::SURFACE_QUAD_STATE: {
        decltype(CallWithContext(Traits::surface_quad_state, input, custom_context))
            in_surface_quad_state = CallWithContext(Traits::surface_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_surface_quad_state)::BaseType* ptr;
        mojo::internal::Serialize<::cc::mojom::SurfaceQuadStatePtr>(
            in_surface_quad_state, buffer, &ptr, context);
        result->data.f_surface_quad_state.Set(ptr);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !ptr, mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null surface_quad_state in DrawQuadState union");
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::TEXTURE_QUAD_STATE: {
        decltype(CallWithContext(Traits::texture_quad_state, input, custom_context))
            in_texture_quad_state = CallWithContext(Traits::texture_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_texture_quad_state)::BaseType* ptr;
        mojo::internal::Serialize<::cc::mojom::TextureQuadStatePtr>(
            in_texture_quad_state, buffer, &ptr, context);
        result->data.f_texture_quad_state.Set(ptr);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !ptr, mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null texture_quad_state in DrawQuadState union");
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::TILE_QUAD_STATE: {
        decltype(CallWithContext(Traits::tile_quad_state, input, custom_context))
            in_tile_quad_state = CallWithContext(Traits::tile_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_tile_quad_state)::BaseType* ptr;
        mojo::internal::Serialize<::cc::mojom::TileQuadStatePtr>(
            in_tile_quad_state, buffer, &ptr, context);
        result->data.f_tile_quad_state.Set(ptr);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !ptr, mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null tile_quad_state in DrawQuadState union");
        break;
      }
      case ::cc::mojom::DrawQuadState::Tag::YUV_VIDEO_QUAD_STATE: {
        decltype(CallWithContext(Traits::yuv_video_quad_state, input, custom_context))
            in_yuv_video_quad_state = CallWithContext(Traits::yuv_video_quad_state, input,
                                          custom_context);
        typename decltype(result->data.f_yuv_video_quad_state)::BaseType* ptr;
        mojo::internal::Serialize<::cc::mojom::YUVVideoQuadStatePtr>(
            in_yuv_video_quad_state, buffer, &ptr, context);
        result->data.f_yuv_video_quad_state.Set(ptr);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            !ptr, mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null yuv_video_quad_state in DrawQuadState union");
        break;
      }
    }

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::DrawQuadState_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::DrawQuadStateDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_QUADS_MOJOM_H_