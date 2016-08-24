// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_GPU_MEMORY_BUFFER_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_GPU_MEMORY_BUFFER_MOJOM_H_

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
#include "services/ui/public/interfaces/gpu_memory_buffer.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "ui/gfx/geometry/point.h"
#include "cc/output/compositor_frame.h"
#include "third_party/skia/include/core/SkImageFilter.h"
#include "gpu/command_buffer/common/sync_token.h"
#include "cc/output/filter_operation.h"
#include "ui/display/display.h"
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


namespace ui {
namespace mojom {
class GpuMemoryBufferId;
class GpuMemoryBufferIdDataView;
using GpuMemoryBufferIdPtr = mojo::InlinedStructPtr<GpuMemoryBufferId>;

class NativePixmapHandle;
class NativePixmapHandleDataView;
using NativePixmapHandlePtr = mojo::StructPtr<NativePixmapHandle>;

class GpuMemoryBufferHandle;
class GpuMemoryBufferHandleDataView;
using GpuMemoryBufferHandlePtr = mojo::StructPtr<GpuMemoryBufferHandle>;



class  GpuMemoryBufferId {
 public:
  using DataView = GpuMemoryBufferIdDataView;
  using Data_ = internal::GpuMemoryBufferId_Data;

  static GpuMemoryBufferIdPtr New();

  template <typename U>
  static GpuMemoryBufferIdPtr From(const U& u) {
    return mojo::TypeConverter<GpuMemoryBufferIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuMemoryBufferId>::Convert(*this);
  }

  GpuMemoryBufferId();
  ~GpuMemoryBufferId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuMemoryBufferIdPtr>
  GpuMemoryBufferIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuMemoryBufferId>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        GpuMemoryBufferIdPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        GpuMemoryBufferIdPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  int32_t id;
};

class GpuMemoryBufferIdDataView {
 public:
  GpuMemoryBufferIdDataView() {}

  GpuMemoryBufferIdDataView(
      internal::GpuMemoryBufferId_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t id() const {
    return data_->id;
  }
 private:
  internal::GpuMemoryBufferId_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::GpuMemoryBufferIdDataView> {
  using MojomType = ::ui::mojom::GpuMemoryBufferIdPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {








class  NativePixmapHandle {
 public:
  using DataView = NativePixmapHandleDataView;
  using Data_ = internal::NativePixmapHandle_Data;

  static NativePixmapHandlePtr New();

  template <typename U>
  static NativePixmapHandlePtr From(const U& u) {
    return mojo::TypeConverter<NativePixmapHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, NativePixmapHandle>::Convert(*this);
  }

  NativePixmapHandle();
  ~NativePixmapHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = NativePixmapHandlePtr>
  NativePixmapHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, NativePixmapHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        NativePixmapHandlePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        NativePixmapHandlePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::ScopedHandle fd;
  int32_t stride;
 private:
  DISALLOW_COPY_AND_ASSIGN(NativePixmapHandle);
};

class NativePixmapHandleDataView {
 public:
  NativePixmapHandleDataView() {}

  NativePixmapHandleDataView(
      internal::NativePixmapHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedHandle TakeFd() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->fd, &result, context_);
    DCHECK(ret);
    return result;
  }
  int32_t stride() const {
    return data_->stride;
  }
 private:
  internal::NativePixmapHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::NativePixmapHandleDataView> {
  using MojomType = ::ui::mojom::NativePixmapHandlePtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {



class  GpuMemoryBufferHandle {
 public:
  using DataView = GpuMemoryBufferHandleDataView;
  using Data_ = internal::GpuMemoryBufferHandle_Data;

  static GpuMemoryBufferHandlePtr New();

  template <typename U>
  static GpuMemoryBufferHandlePtr From(const U& u) {
    return mojo::TypeConverter<GpuMemoryBufferHandlePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GpuMemoryBufferHandle>::Convert(*this);
  }

  GpuMemoryBufferHandle();
  ~GpuMemoryBufferHandle();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GpuMemoryBufferHandlePtr>
  GpuMemoryBufferHandlePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, GpuMemoryBufferHandle>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        GpuMemoryBufferHandlePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        GpuMemoryBufferHandlePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  GpuMemoryBufferType type;
  GpuMemoryBufferIdPtr id;
  mojo::ScopedHandle buffer_handle;
  uint32_t offset;
  int32_t stride;
  NativePixmapHandlePtr native_pixmap_handle;
 private:
  DISALLOW_COPY_AND_ASSIGN(GpuMemoryBufferHandle);
};

class GpuMemoryBufferHandleDataView {
 public:
  GpuMemoryBufferHandleDataView() {}

  GpuMemoryBufferHandleDataView(
      internal::GpuMemoryBufferHandle_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::GpuMemoryBufferType>(
        data_value, output);
  }

  ::ui::mojom::GpuMemoryBufferType type() const {
    return static_cast<::ui::mojom::GpuMemoryBufferType>(data_->type);
  }
  inline void GetIdDataView(
      GpuMemoryBufferIdDataView* output);

  template <typename UserType>
  bool ReadId(UserType* output) {
    auto pointer = data_->id.Get();
    return mojo::internal::Deserialize<::ui::mojom::GpuMemoryBufferIdPtr>(
        pointer, output, context_);
  }
  mojo::ScopedHandle TakeBufferHandle() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->buffer_handle, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint32_t offset() const {
    return data_->offset;
  }
  int32_t stride() const {
    return data_->stride;
  }
  inline void GetNativePixmapHandleDataView(
      NativePixmapHandleDataView* output);

  template <typename UserType>
  bool ReadNativePixmapHandle(UserType* output) {
    auto pointer = data_->native_pixmap_handle.Get();
    return mojo::internal::Deserialize<::ui::mojom::NativePixmapHandlePtr>(
        pointer, output, context_);
  }
 private:
  internal::GpuMemoryBufferHandle_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::GpuMemoryBufferHandleDataView> {
  using MojomType = ::ui::mojom::GpuMemoryBufferHandlePtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {


template <typename StructPtrType>
GpuMemoryBufferIdPtr GpuMemoryBufferId::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->id = mojo::internal::Clone(id);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuMemoryBufferId>::value>::type*>
bool GpuMemoryBufferId::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  return true;
}


template <typename StructPtrType>
NativePixmapHandlePtr NativePixmapHandle::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->fd = mojo::internal::Clone(fd);
  rv->stride = mojo::internal::Clone(stride);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, NativePixmapHandle>::value>::type*>
bool NativePixmapHandle::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->fd, other.fd))
    return false;
  if (!mojo::internal::Equals(this->stride, other.stride))
    return false;
  return true;
}


template <typename StructPtrType>
GpuMemoryBufferHandlePtr GpuMemoryBufferHandle::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->id = mojo::internal::Clone(id);
  rv->buffer_handle = mojo::internal::Clone(buffer_handle);
  rv->offset = mojo::internal::Clone(offset);
  rv->stride = mojo::internal::Clone(stride);
  rv->native_pixmap_handle = mojo::internal::Clone(native_pixmap_handle);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, GpuMemoryBufferHandle>::value>::type*>
bool GpuMemoryBufferHandle::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::Equals(this->buffer_handle, other.buffer_handle))
    return false;
  if (!mojo::internal::Equals(this->offset, other.offset))
    return false;
  if (!mojo::internal::Equals(this->stride, other.stride))
    return false;
  if (!mojo::internal::Equals(this->native_pixmap_handle, other.native_pixmap_handle))
    return false;
  return true;
}

inline void GpuMemoryBufferHandleDataView::GetIdDataView(
    GpuMemoryBufferIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = GpuMemoryBufferIdDataView(pointer, context_);
}
inline void GpuMemoryBufferHandleDataView::GetNativePixmapHandleDataView(
    NativePixmapHandleDataView* output) {
  auto pointer = data_->native_pixmap_handle.Get();
  *output = NativePixmapHandleDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::GpuMemoryBufferId, ::ui::mojom::GpuMemoryBufferIdPtr> {
  static bool IsNull(const ::ui::mojom::GpuMemoryBufferIdPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::GpuMemoryBufferIdPtr* output) { output->reset(); }
  static decltype(::ui::mojom::GpuMemoryBufferId::id) id(
      const ::ui::mojom::GpuMemoryBufferIdPtr& input) {
    return input->id;
  }

  static bool Read(::ui::mojom::GpuMemoryBufferIdDataView input, ::ui::mojom::GpuMemoryBufferIdPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::GpuMemoryBufferIdPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::GpuMemoryBufferId, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::GpuMemoryBufferId_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::GpuMemoryBufferId_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::GpuMemoryBufferId_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->id = CallWithContext(Traits::id, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::GpuMemoryBufferId_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::GpuMemoryBufferIdDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::NativePixmapHandle, ::ui::mojom::NativePixmapHandlePtr> {
  static bool IsNull(const ::ui::mojom::NativePixmapHandlePtr& input) { return !input; }
  static void SetToNull(::ui::mojom::NativePixmapHandlePtr* output) { output->reset(); }
  static decltype(::ui::mojom::NativePixmapHandle::fd)& fd(
      ::ui::mojom::NativePixmapHandlePtr& input) {
    return input->fd;
  }
  static decltype(::ui::mojom::NativePixmapHandle::stride) stride(
      const ::ui::mojom::NativePixmapHandlePtr& input) {
    return input->stride;
  }

  static bool Read(::ui::mojom::NativePixmapHandleDataView input, ::ui::mojom::NativePixmapHandlePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::NativePixmapHandlePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::NativePixmapHandle, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::NativePixmapHandle_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::NativePixmapHandle_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::NativePixmapHandle_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::fd, input, custom_context)) in_fd = CallWithContext(Traits::fd, input, custom_context);
      mojo::internal::Serialize<mojo::ScopedHandle>(
          in_fd, &result->fd, context);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          !mojo::internal::IsHandleOrInterfaceValid(result->fd),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
          "invalid fd in NativePixmapHandle struct");
      result->stride = CallWithContext(Traits::stride, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::NativePixmapHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::NativePixmapHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::GpuMemoryBufferHandle, ::ui::mojom::GpuMemoryBufferHandlePtr> {
  static bool IsNull(const ::ui::mojom::GpuMemoryBufferHandlePtr& input) { return !input; }
  static void SetToNull(::ui::mojom::GpuMemoryBufferHandlePtr* output) { output->reset(); }
  static decltype(::ui::mojom::GpuMemoryBufferHandle::type) type(
      const ::ui::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->type;
  }
  static decltype(::ui::mojom::GpuMemoryBufferHandle::id)& id(
      ::ui::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->id;
  }
  static decltype(::ui::mojom::GpuMemoryBufferHandle::buffer_handle)& buffer_handle(
      ::ui::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->buffer_handle;
  }
  static decltype(::ui::mojom::GpuMemoryBufferHandle::offset) offset(
      const ::ui::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->offset;
  }
  static decltype(::ui::mojom::GpuMemoryBufferHandle::stride) stride(
      const ::ui::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->stride;
  }
  static decltype(::ui::mojom::GpuMemoryBufferHandle::native_pixmap_handle)& native_pixmap_handle(
      ::ui::mojom::GpuMemoryBufferHandlePtr& input) {
    return input->native_pixmap_handle;
  }

  static bool Read(::ui::mojom::GpuMemoryBufferHandleDataView input, ::ui::mojom::GpuMemoryBufferHandlePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::GpuMemoryBufferHandlePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::GpuMemoryBufferHandle, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::GpuMemoryBufferHandle_Data);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::GpuMemoryBufferIdPtr>(
        in_id, context);
    decltype(CallWithContext(Traits::native_pixmap_handle, input, custom_context)) in_native_pixmap_handle = CallWithContext(Traits::native_pixmap_handle, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::NativePixmapHandlePtr>(
        in_native_pixmap_handle, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::GpuMemoryBufferHandle_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::GpuMemoryBufferHandle_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::ui::mojom::GpuMemoryBufferType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
      typename decltype(result->id)::BaseType* id_ptr;
      mojo::internal::Serialize<::ui::mojom::GpuMemoryBufferIdPtr>(
          in_id, buffer, &id_ptr, context);
      result->id.Set(id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null id in GpuMemoryBufferHandle struct");
      decltype(CallWithContext(Traits::buffer_handle, input, custom_context)) in_buffer_handle = CallWithContext(Traits::buffer_handle, input, custom_context);
      mojo::internal::Serialize<mojo::ScopedHandle>(
          in_buffer_handle, &result->buffer_handle, context);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          !mojo::internal::IsHandleOrInterfaceValid(result->buffer_handle),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
          "invalid buffer_handle in GpuMemoryBufferHandle struct");
      result->offset = CallWithContext(Traits::offset, input, custom_context);
      result->stride = CallWithContext(Traits::stride, input, custom_context);
      decltype(CallWithContext(Traits::native_pixmap_handle, input, custom_context)) in_native_pixmap_handle = CallWithContext(Traits::native_pixmap_handle, input, custom_context);
      typename decltype(result->native_pixmap_handle)::BaseType* native_pixmap_handle_ptr;
      mojo::internal::Serialize<::ui::mojom::NativePixmapHandlePtr>(
          in_native_pixmap_handle, buffer, &native_pixmap_handle_ptr, context);
      result->native_pixmap_handle.Set(native_pixmap_handle_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::GpuMemoryBufferHandle_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::GpuMemoryBufferHandleDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_GPU_MEMORY_BUFFER_MOJOM_H_