// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_RETURNED_RESOURCE_MOJOM_H_
#define CC_IPC_RETURNED_RESOURCE_MOJOM_H_

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
#include "cc/ipc/returned_resource.mojom-shared.h"
#include "gpu/ipc/common/sync_token.mojom.h"
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
class ReturnedResource;
class ReturnedResourceDataView;
using ReturnedResourcePtr = mojo::StructPtr<ReturnedResource>;






class  ReturnedResource {
 public:
  using DataView = ReturnedResourceDataView;
  using Data_ = internal::ReturnedResource_Data;

  static ReturnedResourcePtr New();

  template <typename U>
  static ReturnedResourcePtr From(const U& u) {
    return mojo::TypeConverter<ReturnedResourcePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ReturnedResource>::Convert(*this);
  }

  ReturnedResource();
  ~ReturnedResource();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReturnedResourcePtr>
  ReturnedResourcePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ReturnedResource>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        ReturnedResourcePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        ReturnedResourcePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t id;
  ::gpu::SyncToken sync_token;
  int32_t count;
  bool lost;
};

class ReturnedResourceDataView {
 public:
  ReturnedResourceDataView() {}

  ReturnedResourceDataView(
      internal::ReturnedResource_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  bool ReadSyncToken(UserType* output) {
    auto pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenPtr>(
        pointer, output, context_);
  }
  int32_t count() const {
    return data_->count;
  }
  bool lost() const {
    return data_->lost;
  }
 private:
  internal::ReturnedResource_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::ReturnedResourceDataView> {
  using MojomType = ::cc::mojom::ReturnedResourcePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {


template <typename StructPtrType>
ReturnedResourcePtr ReturnedResource::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->id = mojo::internal::Clone(id);
  rv->sync_token = mojo::internal::Clone(sync_token);
  rv->count = mojo::internal::Clone(count);
  rv->lost = mojo::internal::Clone(lost);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ReturnedResource>::value>::type*>
bool ReturnedResource::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::Equals(this->sync_token, other.sync_token))
    return false;
  if (!mojo::internal::Equals(this->count, other.count))
    return false;
  if (!mojo::internal::Equals(this->lost, other.lost))
    return false;
  return true;
}

inline void ReturnedResourceDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace cc

namespace mojo {


template <>
struct  StructTraits<::cc::mojom::ReturnedResource, ::cc::mojom::ReturnedResourcePtr> {
  static bool IsNull(const ::cc::mojom::ReturnedResourcePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::ReturnedResourcePtr* output) { output->reset(); }
  static decltype(::cc::mojom::ReturnedResource::id) id(
      const ::cc::mojom::ReturnedResourcePtr& input) {
    return input->id;
  }
  static decltype(::cc::mojom::ReturnedResource::sync_token)& sync_token(
      ::cc::mojom::ReturnedResourcePtr& input) {
    return input->sync_token;
  }
  static decltype(::cc::mojom::ReturnedResource::count) count(
      const ::cc::mojom::ReturnedResourcePtr& input) {
    return input->count;
  }
  static decltype(::cc::mojom::ReturnedResource::lost) lost(
      const ::cc::mojom::ReturnedResourcePtr& input) {
    return input->lost;
  }

  static bool Read(::cc::mojom::ReturnedResourceDataView input, ::cc::mojom::ReturnedResourcePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::ReturnedResourcePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::ReturnedResource, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::ReturnedResource_Data);
    decltype(CallWithContext(Traits::sync_token, input, custom_context)) in_sync_token = CallWithContext(Traits::sync_token, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gpu::mojom::SyncTokenPtr>(
        in_sync_token, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::ReturnedResource_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::ReturnedResource_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->id = CallWithContext(Traits::id, input, custom_context);
      decltype(CallWithContext(Traits::sync_token, input, custom_context)) in_sync_token = CallWithContext(Traits::sync_token, input, custom_context);
      typename decltype(result->sync_token)::BaseType* sync_token_ptr;
      mojo::internal::Serialize<::gpu::mojom::SyncTokenPtr>(
          in_sync_token, buffer, &sync_token_ptr, context);
      result->sync_token.Set(sync_token_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->sync_token.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null sync_token in ReturnedResource struct");
      result->count = CallWithContext(Traits::count, input, custom_context);
      result->lost = CallWithContext(Traits::lost, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::ReturnedResource_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::ReturnedResourceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_RETURNED_RESOURCE_MOJOM_H_