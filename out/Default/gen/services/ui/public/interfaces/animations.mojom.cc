// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "services/ui/public/interfaces/animations.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "cc/ipc/quads_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "gpu/ipc/common/gpu_command_buffer_traits.h"
#include "cc/ipc/shared_quad_state_struct_traits.h"
#include "ui/gfx/mojo/accelerated_widget_struct_traits.h"
#include "cc/ipc/transferable_resource_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_enum_traits.h"
#include "cc/ipc/filter_operations_struct_traits.h"
#include "gpu/ipc/common/dx_diag_node_struct_traits.h"
#include "cc/ipc/render_pass_id_struct_traits.h"
#include "cc/ipc/filter_operation_struct_traits.h"
#include "services/ui/public/interfaces/display/display_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "cc/ipc/render_pass_struct_traits.h"
#include "cc/ipc/compositor_frame_metadata_struct_traits.h"
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "ui/events/mojo/latency_info_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "ui/gfx/mojo/selection_bound_struct_traits.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "cc/ipc/begin_frame_args_struct_traits.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "cc/ipc/selection_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
#include "skia/public/interfaces/image_filter_struct_traits.h"
#include "cc/ipc/returned_resource_struct_traits.h"
#include "cc/ipc/compositor_frame_struct_traits.h"
namespace ui {
namespace mojom {

namespace {

}  // namespace// static
AnimationValuePtr AnimationValue::New() {
  AnimationValuePtr rv;
  mojo::internal::StructHelper<AnimationValue>::Initialize(&rv);
  return rv;
}

AnimationValue::AnimationValue()
    : float_value(),
      transform() {
}

AnimationValue::~AnimationValue() {
}// static
AnimationElementPtr AnimationElement::New() {
  AnimationElementPtr rv;
  mojo::internal::StructHelper<AnimationElement>::Initialize(&rv);
  return rv;
}

AnimationElement::AnimationElement()
    : property(),
      duration(),
      tween_type(),
      start_value(),
      target_value() {
}

AnimationElement::~AnimationElement() {
}// static
AnimationSequencePtr AnimationSequence::New() {
  AnimationSequencePtr rv;
  mojo::internal::StructHelper<AnimationSequence>::Initialize(&rv);
  return rv;
}

AnimationSequence::AnimationSequence()
    : cycle_count(),
      elements(nullptr) {
}

AnimationSequence::~AnimationSequence() {
}// static
AnimationGroupPtr AnimationGroup::New() {
  AnimationGroupPtr rv;
  mojo::internal::StructHelper<AnimationGroup>::Initialize(&rv);
  return rv;
}

AnimationGroup::AnimationGroup()
    : window_id(),
      sequences(nullptr) {
}

AnimationGroup::~AnimationGroup() {
}
}  // namespace mojom
}  // namespace ui

namespace mojo {


// static
bool StructTraits<::ui::mojom::AnimationValue, ::ui::mojom::AnimationValuePtr>::Read(
    ::ui::mojom::AnimationValueDataView input,
    ::ui::mojom::AnimationValuePtr* output) {
  bool success = true;
  ::ui::mojom::AnimationValuePtr result(::ui::mojom::AnimationValue::New());
  
      result->float_value = input.float_value();
      if (!input.ReadTransform(&result->transform))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::AnimationElement, ::ui::mojom::AnimationElementPtr>::Read(
    ::ui::mojom::AnimationElementDataView input,
    ::ui::mojom::AnimationElementPtr* output) {
  bool success = true;
  ::ui::mojom::AnimationElementPtr result(::ui::mojom::AnimationElement::New());
  
      if (!input.ReadProperty(&result->property))
        success = false;
      result->duration = input.duration();
      if (!input.ReadTweenType(&result->tween_type))
        success = false;
      if (!input.ReadStartValue(&result->start_value))
        success = false;
      if (!input.ReadTargetValue(&result->target_value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::AnimationSequence, ::ui::mojom::AnimationSequencePtr>::Read(
    ::ui::mojom::AnimationSequenceDataView input,
    ::ui::mojom::AnimationSequencePtr* output) {
  bool success = true;
  ::ui::mojom::AnimationSequencePtr result(::ui::mojom::AnimationSequence::New());
  
      result->cycle_count = input.cycle_count();
      if (!input.ReadElements(&result->elements))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::ui::mojom::AnimationGroup, ::ui::mojom::AnimationGroupPtr>::Read(
    ::ui::mojom::AnimationGroupDataView input,
    ::ui::mojom::AnimationGroupPtr* output) {
  bool success = true;
  ::ui::mojom::AnimationGroupPtr result(::ui::mojom::AnimationGroup::New());
  
      result->window_id = input.window_id();
      if (!input.ReadSequences(&result->sequences))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif