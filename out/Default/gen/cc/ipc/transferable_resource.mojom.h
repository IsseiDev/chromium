// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_TRANSFERABLE_RESOURCE_MOJOM_H_
#define CC_IPC_TRANSFERABLE_RESOURCE_MOJOM_H_

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
#include "cc/ipc/transferable_resource.mojom-shared.h"
#include "gpu/ipc/common/mailbox_holder.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
class TransferableResource;
class TransferableResourceDataView;
using TransferableResourcePtr = mojo::StructPtr<TransferableResource>;






class  TransferableResource {
 public:
  using DataView = TransferableResourceDataView;
  using Data_ = internal::TransferableResource_Data;

  static TransferableResourcePtr New();

  template <typename U>
  static TransferableResourcePtr From(const U& u) {
    return mojo::TypeConverter<TransferableResourcePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TransferableResource>::Convert(*this);
  }

  TransferableResource();
  ~TransferableResource();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TransferableResourcePtr>
  TransferableResourcePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TransferableResource>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        TransferableResourcePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        TransferableResourcePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t id;
  ResourceFormat format;
  uint32_t filter;
  gfx::Size size;
  ::gpu::MailboxHolder mailbox_holder;
  bool read_lock_fences_enabled;
  bool is_software;
  bool is_overlay_candidate;
};

class TransferableResourceDataView {
 public:
  TransferableResourceDataView() {}

  TransferableResourceDataView(
      internal::TransferableResource_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t id() const {
    return data_->id;
  }
  template <typename UserType>
  bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::cc::mojom::ResourceFormat>(
        data_value, output);
  }

  ::cc::mojom::ResourceFormat format() const {
    return static_cast<::cc::mojom::ResourceFormat>(data_->format);
  }
  uint32_t filter() const {
    return data_->filter;
  }
  inline void GetSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  bool ReadSize(UserType* output) {
    auto pointer = data_->size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizePtr>(
        pointer, output, context_);
  }
  inline void GetMailboxHolderDataView(
      ::gpu::mojom::MailboxHolderDataView* output);

  template <typename UserType>
  bool ReadMailboxHolder(UserType* output) {
    auto pointer = data_->mailbox_holder.Get();
    return mojo::internal::Deserialize<::gpu::mojom::MailboxHolderPtr>(
        pointer, output, context_);
  }
  bool read_lock_fences_enabled() const {
    return data_->read_lock_fences_enabled;
  }
  bool is_software() const {
    return data_->is_software;
  }
  bool is_overlay_candidate() const {
    return data_->is_overlay_candidate;
  }
 private:
  internal::TransferableResource_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::TransferableResourceDataView> {
  using MojomType = ::cc::mojom::TransferableResourcePtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {


template <typename StructPtrType>
TransferableResourcePtr TransferableResource::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->id = mojo::internal::Clone(id);
  rv->format = mojo::internal::Clone(format);
  rv->filter = mojo::internal::Clone(filter);
  rv->size = mojo::internal::Clone(size);
  rv->mailbox_holder = mojo::internal::Clone(mailbox_holder);
  rv->read_lock_fences_enabled = mojo::internal::Clone(read_lock_fences_enabled);
  rv->is_software = mojo::internal::Clone(is_software);
  rv->is_overlay_candidate = mojo::internal::Clone(is_overlay_candidate);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TransferableResource>::value>::type*>
bool TransferableResource::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::Equals(this->format, other.format))
    return false;
  if (!mojo::internal::Equals(this->filter, other.filter))
    return false;
  if (!mojo::internal::Equals(this->size, other.size))
    return false;
  if (!mojo::internal::Equals(this->mailbox_holder, other.mailbox_holder))
    return false;
  if (!mojo::internal::Equals(this->read_lock_fences_enabled, other.read_lock_fences_enabled))
    return false;
  if (!mojo::internal::Equals(this->is_software, other.is_software))
    return false;
  if (!mojo::internal::Equals(this->is_overlay_candidate, other.is_overlay_candidate))
    return false;
  return true;
}

inline void TransferableResourceDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, context_);
}
inline void TransferableResourceDataView::GetMailboxHolderDataView(
    ::gpu::mojom::MailboxHolderDataView* output) {
  auto pointer = data_->mailbox_holder.Get();
  *output = ::gpu::mojom::MailboxHolderDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace cc

namespace mojo {


template <>
struct  StructTraits<::cc::mojom::TransferableResource, ::cc::mojom::TransferableResourcePtr> {
  static bool IsNull(const ::cc::mojom::TransferableResourcePtr& input) { return !input; }
  static void SetToNull(::cc::mojom::TransferableResourcePtr* output) { output->reset(); }
  static decltype(::cc::mojom::TransferableResource::id) id(
      const ::cc::mojom::TransferableResourcePtr& input) {
    return input->id;
  }
  static decltype(::cc::mojom::TransferableResource::format) format(
      const ::cc::mojom::TransferableResourcePtr& input) {
    return input->format;
  }
  static decltype(::cc::mojom::TransferableResource::filter) filter(
      const ::cc::mojom::TransferableResourcePtr& input) {
    return input->filter;
  }
  static decltype(::cc::mojom::TransferableResource::size)& size(
      ::cc::mojom::TransferableResourcePtr& input) {
    return input->size;
  }
  static decltype(::cc::mojom::TransferableResource::mailbox_holder)& mailbox_holder(
      ::cc::mojom::TransferableResourcePtr& input) {
    return input->mailbox_holder;
  }
  static decltype(::cc::mojom::TransferableResource::read_lock_fences_enabled) read_lock_fences_enabled(
      const ::cc::mojom::TransferableResourcePtr& input) {
    return input->read_lock_fences_enabled;
  }
  static decltype(::cc::mojom::TransferableResource::is_software) is_software(
      const ::cc::mojom::TransferableResourcePtr& input) {
    return input->is_software;
  }
  static decltype(::cc::mojom::TransferableResource::is_overlay_candidate) is_overlay_candidate(
      const ::cc::mojom::TransferableResourcePtr& input) {
    return input->is_overlay_candidate;
  }

  static bool Read(::cc::mojom::TransferableResourceDataView input, ::cc::mojom::TransferableResourcePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::TransferableResourcePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::TransferableResource, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::TransferableResource_Data);
    decltype(CallWithContext(Traits::size, input, custom_context)) in_size = CallWithContext(Traits::size, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::SizePtr>(
        in_size, context);
    decltype(CallWithContext(Traits::mailbox_holder, input, custom_context)) in_mailbox_holder = CallWithContext(Traits::mailbox_holder, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gpu::mojom::MailboxHolderPtr>(
        in_mailbox_holder, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::TransferableResource_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::TransferableResource_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->id = CallWithContext(Traits::id, input, custom_context);
      mojo::internal::Serialize<::cc::mojom::ResourceFormat>(
          CallWithContext(Traits::format, input, custom_context), &result->format);
      result->filter = CallWithContext(Traits::filter, input, custom_context);
      decltype(CallWithContext(Traits::size, input, custom_context)) in_size = CallWithContext(Traits::size, input, custom_context);
      typename decltype(result->size)::BaseType* size_ptr;
      mojo::internal::Serialize<::gfx::mojom::SizePtr>(
          in_size, buffer, &size_ptr, context);
      result->size.Set(size_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->size.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null size in TransferableResource struct");
      decltype(CallWithContext(Traits::mailbox_holder, input, custom_context)) in_mailbox_holder = CallWithContext(Traits::mailbox_holder, input, custom_context);
      typename decltype(result->mailbox_holder)::BaseType* mailbox_holder_ptr;
      mojo::internal::Serialize<::gpu::mojom::MailboxHolderPtr>(
          in_mailbox_holder, buffer, &mailbox_holder_ptr, context);
      result->mailbox_holder.Set(mailbox_holder_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->mailbox_holder.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null mailbox_holder in TransferableResource struct");
      result->read_lock_fences_enabled = CallWithContext(Traits::read_lock_fences_enabled, input, custom_context);
      result->is_software = CallWithContext(Traits::is_software, input, custom_context);
      result->is_overlay_candidate = CallWithContext(Traits::is_overlay_candidate, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::TransferableResource_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::TransferableResourceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_TRANSFERABLE_RESOURCE_MOJOM_H_