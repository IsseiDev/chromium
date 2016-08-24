// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CC_IPC_BEGIN_FRAME_ARGS_MOJOM_H_
#define CC_IPC_BEGIN_FRAME_ARGS_MOJOM_H_

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
#include "cc/ipc/begin_frame_args.mojom-shared.h"
#include "mojo/common/common_custom_types.mojom.h"
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
class BeginFrameArgs;
class BeginFrameArgsDataView;
using BeginFrameArgsPtr = mojo::StructPtr<BeginFrameArgs>;






class  BeginFrameArgs {
 public:
  using DataView = BeginFrameArgsDataView;
  using Data_ = internal::BeginFrameArgs_Data;

  static BeginFrameArgsPtr New();

  template <typename U>
  static BeginFrameArgsPtr From(const U& u) {
    return mojo::TypeConverter<BeginFrameArgsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BeginFrameArgs>::Convert(*this);
  }

  BeginFrameArgs();
  ~BeginFrameArgs();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BeginFrameArgsPtr>
  BeginFrameArgsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BeginFrameArgs>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        BeginFrameArgsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        BeginFrameArgsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  base::TimeTicks frame_time;
  base::TimeTicks deadline;
  base::TimeDelta interval;
  BeginFrameArgsType type;
  bool on_critical_path;
};

class BeginFrameArgsDataView {
 public:
  BeginFrameArgsDataView() {}

  BeginFrameArgsDataView(
      internal::BeginFrameArgs_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameTimeDataView(
      ::mojo::common::mojom::TimeTicksDataView* output);

  template <typename UserType>
  bool ReadFrameTime(UserType* output) {
    auto pointer = data_->frame_time.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeTicksPtr>(
        pointer, output, context_);
  }
  inline void GetDeadlineDataView(
      ::mojo::common::mojom::TimeTicksDataView* output);

  template <typename UserType>
  bool ReadDeadline(UserType* output) {
    auto pointer = data_->deadline.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeTicksPtr>(
        pointer, output, context_);
  }
  inline void GetIntervalDataView(
      ::mojo::common::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  bool ReadInterval(UserType* output) {
    auto pointer = data_->interval.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeDeltaPtr>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::cc::mojom::BeginFrameArgsType>(
        data_value, output);
  }

  ::cc::mojom::BeginFrameArgsType type() const {
    return static_cast<::cc::mojom::BeginFrameArgsType>(data_->type);
  }
  bool on_critical_path() const {
    return data_->on_critical_path;
  }
 private:
  internal::BeginFrameArgs_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace cc

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::cc::mojom::BeginFrameArgsDataView> {
  using MojomType = ::cc::mojom::BeginFrameArgsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace cc {
namespace mojom {


template <typename StructPtrType>
BeginFrameArgsPtr BeginFrameArgs::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->frame_time = mojo::internal::Clone(frame_time);
  rv->deadline = mojo::internal::Clone(deadline);
  rv->interval = mojo::internal::Clone(interval);
  rv->type = mojo::internal::Clone(type);
  rv->on_critical_path = mojo::internal::Clone(on_critical_path);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BeginFrameArgs>::value>::type*>
bool BeginFrameArgs::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->frame_time, other.frame_time))
    return false;
  if (!mojo::internal::Equals(this->deadline, other.deadline))
    return false;
  if (!mojo::internal::Equals(this->interval, other.interval))
    return false;
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->on_critical_path, other.on_critical_path))
    return false;
  return true;
}

inline void BeginFrameArgsDataView::GetFrameTimeDataView(
    ::mojo::common::mojom::TimeTicksDataView* output) {
  auto pointer = data_->frame_time.Get();
  *output = ::mojo::common::mojom::TimeTicksDataView(pointer, context_);
}
inline void BeginFrameArgsDataView::GetDeadlineDataView(
    ::mojo::common::mojom::TimeTicksDataView* output) {
  auto pointer = data_->deadline.Get();
  *output = ::mojo::common::mojom::TimeTicksDataView(pointer, context_);
}
inline void BeginFrameArgsDataView::GetIntervalDataView(
    ::mojo::common::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->interval.Get();
  *output = ::mojo::common::mojom::TimeDeltaDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace cc

namespace mojo {


template <>
struct  StructTraits<::cc::mojom::BeginFrameArgs, ::cc::mojom::BeginFrameArgsPtr> {
  static bool IsNull(const ::cc::mojom::BeginFrameArgsPtr& input) { return !input; }
  static void SetToNull(::cc::mojom::BeginFrameArgsPtr* output) { output->reset(); }
  static decltype(::cc::mojom::BeginFrameArgs::frame_time)& frame_time(
      ::cc::mojom::BeginFrameArgsPtr& input) {
    return input->frame_time;
  }
  static decltype(::cc::mojom::BeginFrameArgs::deadline)& deadline(
      ::cc::mojom::BeginFrameArgsPtr& input) {
    return input->deadline;
  }
  static decltype(::cc::mojom::BeginFrameArgs::interval)& interval(
      ::cc::mojom::BeginFrameArgsPtr& input) {
    return input->interval;
  }
  static decltype(::cc::mojom::BeginFrameArgs::type) type(
      const ::cc::mojom::BeginFrameArgsPtr& input) {
    return input->type;
  }
  static decltype(::cc::mojom::BeginFrameArgs::on_critical_path) on_critical_path(
      const ::cc::mojom::BeginFrameArgsPtr& input) {
    return input->on_critical_path;
  }

  static bool Read(::cc::mojom::BeginFrameArgsDataView input, ::cc::mojom::BeginFrameArgsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::cc::mojom::BeginFrameArgsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::cc::mojom::BeginFrameArgs, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::cc::mojom::internal::BeginFrameArgs_Data);
    decltype(CallWithContext(Traits::frame_time, input, custom_context)) in_frame_time = CallWithContext(Traits::frame_time, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeTicksPtr>(
        in_frame_time, context);
    decltype(CallWithContext(Traits::deadline, input, custom_context)) in_deadline = CallWithContext(Traits::deadline, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeTicksPtr>(
        in_deadline, context);
    decltype(CallWithContext(Traits::interval, input, custom_context)) in_interval = CallWithContext(Traits::interval, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeDeltaPtr>(
        in_interval, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::cc::mojom::internal::BeginFrameArgs_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::cc::mojom::internal::BeginFrameArgs_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::frame_time, input, custom_context)) in_frame_time = CallWithContext(Traits::frame_time, input, custom_context);
      typename decltype(result->frame_time)::BaseType* frame_time_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeTicksPtr>(
          in_frame_time, buffer, &frame_time_ptr, context);
      result->frame_time.Set(frame_time_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->frame_time.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null frame_time in BeginFrameArgs struct");
      decltype(CallWithContext(Traits::deadline, input, custom_context)) in_deadline = CallWithContext(Traits::deadline, input, custom_context);
      typename decltype(result->deadline)::BaseType* deadline_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeTicksPtr>(
          in_deadline, buffer, &deadline_ptr, context);
      result->deadline.Set(deadline_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->deadline.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null deadline in BeginFrameArgs struct");
      decltype(CallWithContext(Traits::interval, input, custom_context)) in_interval = CallWithContext(Traits::interval, input, custom_context);
      typename decltype(result->interval)::BaseType* interval_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeDeltaPtr>(
          in_interval, buffer, &interval_ptr, context);
      result->interval.Set(interval_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->interval.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null interval in BeginFrameArgs struct");
      mojo::internal::Serialize<::cc::mojom::BeginFrameArgsType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      result->on_critical_path = CallWithContext(Traits::on_critical_path, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::cc::mojom::internal::BeginFrameArgs_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::cc::mojom::BeginFrameArgsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CC_IPC_BEGIN_FRAME_ARGS_MOJOM_H_