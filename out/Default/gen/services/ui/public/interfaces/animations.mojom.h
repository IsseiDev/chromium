// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_ANIMATIONS_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_ANIMATIONS_MOJOM_H_

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
#include "services/ui/public/interfaces/animations.mojom-shared.h"
#include "ui/gfx/mojo/transform.mojom.h"
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
class AnimationValue;
class AnimationValueDataView;
using AnimationValuePtr = mojo::StructPtr<AnimationValue>;

class AnimationElement;
class AnimationElementDataView;
using AnimationElementPtr = mojo::StructPtr<AnimationElement>;

class AnimationSequence;
class AnimationSequenceDataView;
using AnimationSequencePtr = mojo::StructPtr<AnimationSequence>;

class AnimationGroup;
class AnimationGroupDataView;
using AnimationGroupPtr = mojo::StructPtr<AnimationGroup>;









class  AnimationValue {
 public:
  using DataView = AnimationValueDataView;
  using Data_ = internal::AnimationValue_Data;

  static AnimationValuePtr New();

  template <typename U>
  static AnimationValuePtr From(const U& u) {
    return mojo::TypeConverter<AnimationValuePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AnimationValue>::Convert(*this);
  }

  AnimationValue();
  ~AnimationValue();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AnimationValuePtr>
  AnimationValuePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AnimationValue>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        AnimationValuePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        AnimationValuePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  float float_value;
  base::Optional<gfx::Transform> transform;
};

class AnimationValueDataView {
 public:
  AnimationValueDataView() {}

  AnimationValueDataView(
      internal::AnimationValue_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  float float_value() const {
    return data_->float_value;
  }
  inline void GetTransformDataView(
      ::gfx::mojom::TransformDataView* output);

  template <typename UserType>
  bool ReadTransform(UserType* output) {
    auto pointer = data_->transform.Get();
    return mojo::internal::Deserialize<::gfx::mojom::TransformPtr>(
        pointer, output, context_);
  }
 private:
  internal::AnimationValue_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::AnimationValueDataView> {
  using MojomType = ::ui::mojom::AnimationValuePtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {



class  AnimationElement {
 public:
  using DataView = AnimationElementDataView;
  using Data_ = internal::AnimationElement_Data;

  static AnimationElementPtr New();

  template <typename U>
  static AnimationElementPtr From(const U& u) {
    return mojo::TypeConverter<AnimationElementPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AnimationElement>::Convert(*this);
  }

  AnimationElement();
  ~AnimationElement();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AnimationElementPtr>
  AnimationElementPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AnimationElement>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        AnimationElementPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        AnimationElementPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  AnimationProperty property;
  int64_t duration;
  AnimationTweenType tween_type;
  AnimationValuePtr start_value;
  AnimationValuePtr target_value;
 private:
  DISALLOW_COPY_AND_ASSIGN(AnimationElement);
};

class AnimationElementDataView {
 public:
  AnimationElementDataView() {}

  AnimationElementDataView(
      internal::AnimationElement_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadProperty(UserType* output) const {
    auto data_value = data_->property;
    return mojo::internal::Deserialize<::ui::mojom::AnimationProperty>(
        data_value, output);
  }

  ::ui::mojom::AnimationProperty property() const {
    return static_cast<::ui::mojom::AnimationProperty>(data_->property);
  }
  int64_t duration() const {
    return data_->duration;
  }
  template <typename UserType>
  bool ReadTweenType(UserType* output) const {
    auto data_value = data_->tween_type;
    return mojo::internal::Deserialize<::ui::mojom::AnimationTweenType>(
        data_value, output);
  }

  ::ui::mojom::AnimationTweenType tween_type() const {
    return static_cast<::ui::mojom::AnimationTweenType>(data_->tween_type);
  }
  inline void GetStartValueDataView(
      AnimationValueDataView* output);

  template <typename UserType>
  bool ReadStartValue(UserType* output) {
    auto pointer = data_->start_value.Get();
    return mojo::internal::Deserialize<::ui::mojom::AnimationValuePtr>(
        pointer, output, context_);
  }
  inline void GetTargetValueDataView(
      AnimationValueDataView* output);

  template <typename UserType>
  bool ReadTargetValue(UserType* output) {
    auto pointer = data_->target_value.Get();
    return mojo::internal::Deserialize<::ui::mojom::AnimationValuePtr>(
        pointer, output, context_);
  }
 private:
  internal::AnimationElement_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::AnimationElementDataView> {
  using MojomType = ::ui::mojom::AnimationElementPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {



class  AnimationSequence {
 public:
  using DataView = AnimationSequenceDataView;
  using Data_ = internal::AnimationSequence_Data;

  static AnimationSequencePtr New();

  template <typename U>
  static AnimationSequencePtr From(const U& u) {
    return mojo::TypeConverter<AnimationSequencePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AnimationSequence>::Convert(*this);
  }

  AnimationSequence();
  ~AnimationSequence();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AnimationSequencePtr>
  AnimationSequencePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AnimationSequence>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        AnimationSequencePtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        AnimationSequencePtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t cycle_count;
  mojo::Array<AnimationElementPtr> elements;
 private:
  DISALLOW_COPY_AND_ASSIGN(AnimationSequence);
};

class AnimationSequenceDataView {
 public:
  AnimationSequenceDataView() {}

  AnimationSequenceDataView(
      internal::AnimationSequence_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t cycle_count() const {
    return data_->cycle_count;
  }
  inline void GetElementsDataView(
      mojo::ArrayDataView<AnimationElementDataView>* output);

  template <typename UserType>
  bool ReadElements(UserType* output) {
    auto pointer = data_->elements.Get();
    return mojo::internal::Deserialize<mojo::Array<::ui::mojom::AnimationElementPtr>>(
        pointer, output, context_);
  }
 private:
  internal::AnimationSequence_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::AnimationSequenceDataView> {
  using MojomType = ::ui::mojom::AnimationSequencePtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {



class  AnimationGroup {
 public:
  using DataView = AnimationGroupDataView;
  using Data_ = internal::AnimationGroup_Data;

  static AnimationGroupPtr New();

  template <typename U>
  static AnimationGroupPtr From(const U& u) {
    return mojo::TypeConverter<AnimationGroupPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AnimationGroup>::Convert(*this);
  }

  AnimationGroup();
  ~AnimationGroup();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AnimationGroupPtr>
  AnimationGroupPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AnimationGroup>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        AnimationGroupPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        AnimationGroupPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint32_t window_id;
  mojo::Array<AnimationSequencePtr> sequences;
 private:
  DISALLOW_COPY_AND_ASSIGN(AnimationGroup);
};

class AnimationGroupDataView {
 public:
  AnimationGroupDataView() {}

  AnimationGroupDataView(
      internal::AnimationGroup_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  uint32_t window_id() const {
    return data_->window_id;
  }
  inline void GetSequencesDataView(
      mojo::ArrayDataView<AnimationSequenceDataView>* output);

  template <typename UserType>
  bool ReadSequences(UserType* output) {
    auto pointer = data_->sequences.Get();
    return mojo::internal::Deserialize<mojo::Array<::ui::mojom::AnimationSequencePtr>>(
        pointer, output, context_);
  }
 private:
  internal::AnimationGroup_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::AnimationGroupDataView> {
  using MojomType = ::ui::mojom::AnimationGroupPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {


template <typename StructPtrType>
AnimationValuePtr AnimationValue::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->float_value = mojo::internal::Clone(float_value);
  rv->transform = mojo::internal::Clone(transform);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AnimationValue>::value>::type*>
bool AnimationValue::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->float_value, other.float_value))
    return false;
  if (!mojo::internal::Equals(this->transform, other.transform))
    return false;
  return true;
}

inline void AnimationValueDataView::GetTransformDataView(
    ::gfx::mojom::TransformDataView* output) {
  auto pointer = data_->transform.Get();
  *output = ::gfx::mojom::TransformDataView(pointer, context_);
}

template <typename StructPtrType>
AnimationElementPtr AnimationElement::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->property = mojo::internal::Clone(property);
  rv->duration = mojo::internal::Clone(duration);
  rv->tween_type = mojo::internal::Clone(tween_type);
  rv->start_value = mojo::internal::Clone(start_value);
  rv->target_value = mojo::internal::Clone(target_value);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AnimationElement>::value>::type*>
bool AnimationElement::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->property, other.property))
    return false;
  if (!mojo::internal::Equals(this->duration, other.duration))
    return false;
  if (!mojo::internal::Equals(this->tween_type, other.tween_type))
    return false;
  if (!mojo::internal::Equals(this->start_value, other.start_value))
    return false;
  if (!mojo::internal::Equals(this->target_value, other.target_value))
    return false;
  return true;
}

inline void AnimationElementDataView::GetStartValueDataView(
    AnimationValueDataView* output) {
  auto pointer = data_->start_value.Get();
  *output = AnimationValueDataView(pointer, context_);
}
inline void AnimationElementDataView::GetTargetValueDataView(
    AnimationValueDataView* output) {
  auto pointer = data_->target_value.Get();
  *output = AnimationValueDataView(pointer, context_);
}

template <typename StructPtrType>
AnimationSequencePtr AnimationSequence::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->cycle_count = mojo::internal::Clone(cycle_count);
  rv->elements = mojo::internal::Clone(elements);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AnimationSequence>::value>::type*>
bool AnimationSequence::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->cycle_count, other.cycle_count))
    return false;
  if (!mojo::internal::Equals(this->elements, other.elements))
    return false;
  return true;
}

inline void AnimationSequenceDataView::GetElementsDataView(
    mojo::ArrayDataView<AnimationElementDataView>* output) {
  auto pointer = data_->elements.Get();
  *output = mojo::ArrayDataView<AnimationElementDataView>(pointer, context_);
}

template <typename StructPtrType>
AnimationGroupPtr AnimationGroup::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->window_id = mojo::internal::Clone(window_id);
  rv->sequences = mojo::internal::Clone(sequences);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AnimationGroup>::value>::type*>
bool AnimationGroup::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->window_id, other.window_id))
    return false;
  if (!mojo::internal::Equals(this->sequences, other.sequences))
    return false;
  return true;
}

inline void AnimationGroupDataView::GetSequencesDataView(
    mojo::ArrayDataView<AnimationSequenceDataView>* output) {
  auto pointer = data_->sequences.Get();
  *output = mojo::ArrayDataView<AnimationSequenceDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::AnimationValue, ::ui::mojom::AnimationValuePtr> {
  static bool IsNull(const ::ui::mojom::AnimationValuePtr& input) { return !input; }
  static void SetToNull(::ui::mojom::AnimationValuePtr* output) { output->reset(); }
  static decltype(::ui::mojom::AnimationValue::float_value) float_value(
      const ::ui::mojom::AnimationValuePtr& input) {
    return input->float_value;
  }
  static decltype(::ui::mojom::AnimationValue::transform)& transform(
      ::ui::mojom::AnimationValuePtr& input) {
    return input->transform;
  }

  static bool Read(::ui::mojom::AnimationValueDataView input, ::ui::mojom::AnimationValuePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::AnimationValuePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::AnimationValue, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::AnimationValue_Data);
    decltype(CallWithContext(Traits::transform, input, custom_context)) in_transform = CallWithContext(Traits::transform, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::TransformPtr>(
        in_transform, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::AnimationValue_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::AnimationValue_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->float_value = CallWithContext(Traits::float_value, input, custom_context);
      decltype(CallWithContext(Traits::transform, input, custom_context)) in_transform = CallWithContext(Traits::transform, input, custom_context);
      typename decltype(result->transform)::BaseType* transform_ptr;
      mojo::internal::Serialize<::gfx::mojom::TransformPtr>(
          in_transform, buffer, &transform_ptr, context);
      result->transform.Set(transform_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::AnimationValue_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::AnimationValueDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::AnimationElement, ::ui::mojom::AnimationElementPtr> {
  static bool IsNull(const ::ui::mojom::AnimationElementPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::AnimationElementPtr* output) { output->reset(); }
  static decltype(::ui::mojom::AnimationElement::property) property(
      const ::ui::mojom::AnimationElementPtr& input) {
    return input->property;
  }
  static decltype(::ui::mojom::AnimationElement::duration) duration(
      const ::ui::mojom::AnimationElementPtr& input) {
    return input->duration;
  }
  static decltype(::ui::mojom::AnimationElement::tween_type) tween_type(
      const ::ui::mojom::AnimationElementPtr& input) {
    return input->tween_type;
  }
  static decltype(::ui::mojom::AnimationElement::start_value)& start_value(
      ::ui::mojom::AnimationElementPtr& input) {
    return input->start_value;
  }
  static decltype(::ui::mojom::AnimationElement::target_value)& target_value(
      ::ui::mojom::AnimationElementPtr& input) {
    return input->target_value;
  }

  static bool Read(::ui::mojom::AnimationElementDataView input, ::ui::mojom::AnimationElementPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::AnimationElementPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::AnimationElement, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::AnimationElement_Data);
    decltype(CallWithContext(Traits::start_value, input, custom_context)) in_start_value = CallWithContext(Traits::start_value, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::AnimationValuePtr>(
        in_start_value, context);
    decltype(CallWithContext(Traits::target_value, input, custom_context)) in_target_value = CallWithContext(Traits::target_value, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::AnimationValuePtr>(
        in_target_value, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::AnimationElement_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::AnimationElement_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::ui::mojom::AnimationProperty>(
          CallWithContext(Traits::property, input, custom_context), &result->property);
      result->duration = CallWithContext(Traits::duration, input, custom_context);
      mojo::internal::Serialize<::ui::mojom::AnimationTweenType>(
          CallWithContext(Traits::tween_type, input, custom_context), &result->tween_type);
      decltype(CallWithContext(Traits::start_value, input, custom_context)) in_start_value = CallWithContext(Traits::start_value, input, custom_context);
      typename decltype(result->start_value)::BaseType* start_value_ptr;
      mojo::internal::Serialize<::ui::mojom::AnimationValuePtr>(
          in_start_value, buffer, &start_value_ptr, context);
      result->start_value.Set(start_value_ptr);
      decltype(CallWithContext(Traits::target_value, input, custom_context)) in_target_value = CallWithContext(Traits::target_value, input, custom_context);
      typename decltype(result->target_value)::BaseType* target_value_ptr;
      mojo::internal::Serialize<::ui::mojom::AnimationValuePtr>(
          in_target_value, buffer, &target_value_ptr, context);
      result->target_value.Set(target_value_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::AnimationElement_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::AnimationElementDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::AnimationSequence, ::ui::mojom::AnimationSequencePtr> {
  static bool IsNull(const ::ui::mojom::AnimationSequencePtr& input) { return !input; }
  static void SetToNull(::ui::mojom::AnimationSequencePtr* output) { output->reset(); }
  static decltype(::ui::mojom::AnimationSequence::cycle_count) cycle_count(
      const ::ui::mojom::AnimationSequencePtr& input) {
    return input->cycle_count;
  }
  static decltype(::ui::mojom::AnimationSequence::elements)& elements(
      ::ui::mojom::AnimationSequencePtr& input) {
    return input->elements;
  }

  static bool Read(::ui::mojom::AnimationSequenceDataView input, ::ui::mojom::AnimationSequencePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::AnimationSequencePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::AnimationSequence, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::AnimationSequence_Data);
    decltype(CallWithContext(Traits::elements, input, custom_context)) in_elements = CallWithContext(Traits::elements, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::ui::mojom::AnimationElementPtr>>(
        in_elements, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::AnimationSequence_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::AnimationSequence_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->cycle_count = CallWithContext(Traits::cycle_count, input, custom_context);
      decltype(CallWithContext(Traits::elements, input, custom_context)) in_elements = CallWithContext(Traits::elements, input, custom_context);
      typename decltype(result->elements)::BaseType* elements_ptr;
      const mojo::internal::ContainerValidateParams elements_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::ui::mojom::AnimationElementPtr>>(
          in_elements, buffer, &elements_ptr, &elements_validate_params,
          context);
      result->elements.Set(elements_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->elements.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null elements in AnimationSequence struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::AnimationSequence_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::AnimationSequenceDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::AnimationGroup, ::ui::mojom::AnimationGroupPtr> {
  static bool IsNull(const ::ui::mojom::AnimationGroupPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::AnimationGroupPtr* output) { output->reset(); }
  static decltype(::ui::mojom::AnimationGroup::window_id) window_id(
      const ::ui::mojom::AnimationGroupPtr& input) {
    return input->window_id;
  }
  static decltype(::ui::mojom::AnimationGroup::sequences)& sequences(
      ::ui::mojom::AnimationGroupPtr& input) {
    return input->sequences;
  }

  static bool Read(::ui::mojom::AnimationGroupDataView input, ::ui::mojom::AnimationGroupPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::AnimationGroupPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::AnimationGroup, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::AnimationGroup_Data);
    decltype(CallWithContext(Traits::sequences, input, custom_context)) in_sequences = CallWithContext(Traits::sequences, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::ui::mojom::AnimationSequencePtr>>(
        in_sequences, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::AnimationGroup_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::AnimationGroup_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->window_id = CallWithContext(Traits::window_id, input, custom_context);
      decltype(CallWithContext(Traits::sequences, input, custom_context)) in_sequences = CallWithContext(Traits::sequences, input, custom_context);
      typename decltype(result->sequences)::BaseType* sequences_ptr;
      const mojo::internal::ContainerValidateParams sequences_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::ui::mojom::AnimationSequencePtr>>(
          in_sequences, buffer, &sequences_ptr, &sequences_validate_params,
          context);
      result->sequences.Set(sequences_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->sequences.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null sequences in AnimationGroup struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::AnimationGroup_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::AnimationGroupDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_ANIMATIONS_MOJOM_H_