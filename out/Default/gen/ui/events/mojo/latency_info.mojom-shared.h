// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_LATENCY_INFO_MOJOM_SHARED_H_
#define UI_EVENTS_MOJO_LATENCY_INFO_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <ostream>
#include <type_traits>
#include <utility>

#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization_forward.h"
#include "mojo/public/cpp/bindings/native_enum.h"
#include "ui/events/mojo/latency_info.mojom-shared-internal.h"
#include "mojo/common/common_custom_types.mojom-shared.h"
#include "ui/gfx/geometry/mojo/geometry.mojom-shared.h"
namespace ui {
namespace mojom {

enum class LatencyComponentType : int32_t {
  INPUT_EVENT_LATENCY_BEGIN_RWH_COMPONENT,
  LATENCY_BEGIN_SCROLL_LISTENER_UPDATE_MAIN_COMPONENT,
  INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL_COMPONENT,
  INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL_COMPONENT,
  INPUT_EVENT_LATENCY_ORIGINAL_COMPONENT,
  INPUT_EVENT_LATENCY_UI_COMPONENT,
  INPUT_EVENT_LATENCY_RENDERER_MAIN_COMPONENT,
  INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN_COMPONENT,
  INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL_COMPONENT,
  INPUT_EVENT_LATENCY_FORWARD_SCROLL_UPDATE_TO_MAIN_COMPONENT,
  INPUT_EVENT_LATENCY_ACK_RWH_COMPONENT,
  WINDOW_SNAPSHOT_FRAME_NUMBER_COMPONENT,
  TAB_SHOW_COMPONENT,
  INPUT_EVENT_LATENCY_RENDERER_SWAP_COMPONENT,
  INPUT_EVENT_BROWSER_RECEIVED_RENDERER_SWAP_COMPONENT,
  INPUT_EVENT_GPU_SWAP_BUFFER_COMPONENT,
  INPUT_EVENT_LATENCY_GENERATE_SCROLL_UPDATE_FROM_MOUSE_WHEEL,
  INPUT_EVENT_LATENCY_TERMINATED_MOUSE_COMPONENT,
  INPUT_EVENT_LATENCY_TERMINATED_MOUSE_WHEEL_COMPONENT,
  INPUT_EVENT_LATENCY_TERMINATED_KEYBOARD_COMPONENT,
  INPUT_EVENT_LATENCY_TERMINATED_TOUCH_COMPONENT,
  INPUT_EVENT_LATENCY_TERMINATED_GESTURE_COMPONENT,
  INPUT_EVENT_LATENCY_TERMINATED_FRAME_SWAP_COMPONENT,
  INPUT_EVENT_LATENCY_TERMINATED_COMMIT_FAILED_COMPONENT,
  INPUT_EVENT_LATENCY_TERMINATED_COMMIT_NO_UPDATE_COMPONENT,
  INPUT_EVENT_LATENCY_TERMINATED_SWAP_FAILED_COMPONENT,
  LATENCY_COMPONENT_TYPE_LAST = LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_SWAP_FAILED_COMPONENT,
};

inline std::ostream& operator<<(std::ostream& os, LatencyComponentType value) {
  switch(value) {
    case LatencyComponentType::INPUT_EVENT_LATENCY_BEGIN_RWH_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_BEGIN_RWH_COMPONENT";
    case LatencyComponentType::LATENCY_BEGIN_SCROLL_LISTENER_UPDATE_MAIN_COMPONENT:
      return os << "LatencyComponentType::LATENCY_BEGIN_SCROLL_LISTENER_UPDATE_MAIN_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_SCROLL_UPDATE_ORIGINAL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_FIRST_SCROLL_UPDATE_ORIGINAL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_ORIGINAL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_ORIGINAL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_UI_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_UI_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_RENDERER_MAIN_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_RENDERER_MAIN_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_MAIN_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_RENDERING_SCHEDULED_IMPL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_FORWARD_SCROLL_UPDATE_TO_MAIN_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_FORWARD_SCROLL_UPDATE_TO_MAIN_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_ACK_RWH_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_ACK_RWH_COMPONENT";
    case LatencyComponentType::WINDOW_SNAPSHOT_FRAME_NUMBER_COMPONENT:
      return os << "LatencyComponentType::WINDOW_SNAPSHOT_FRAME_NUMBER_COMPONENT";
    case LatencyComponentType::TAB_SHOW_COMPONENT:
      return os << "LatencyComponentType::TAB_SHOW_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_RENDERER_SWAP_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_RENDERER_SWAP_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_BROWSER_RECEIVED_RENDERER_SWAP_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_BROWSER_RECEIVED_RENDERER_SWAP_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_GPU_SWAP_BUFFER_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_GPU_SWAP_BUFFER_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_GENERATE_SCROLL_UPDATE_FROM_MOUSE_WHEEL:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_GENERATE_SCROLL_UPDATE_FROM_MOUSE_WHEEL";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_MOUSE_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_MOUSE_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_MOUSE_WHEEL_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_MOUSE_WHEEL_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_KEYBOARD_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_KEYBOARD_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_TOUCH_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_TOUCH_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_GESTURE_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_GESTURE_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_FRAME_SWAP_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_FRAME_SWAP_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_COMMIT_FAILED_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_COMMIT_FAILED_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_COMMIT_NO_UPDATE_COMPONENT:
      return os << "LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_COMMIT_NO_UPDATE_COMPONENT";
    case LatencyComponentType::INPUT_EVENT_LATENCY_TERMINATED_SWAP_FAILED_COMPONENT:
      return os << "LatencyComponentType::{INPUT_EVENT_LATENCY_TERMINATED_SWAP_FAILED_COMPONENT, LATENCY_COMPONENT_TYPE_LAST}";
    default:
      return os << "Unknown LatencyComponentType value: " << static_cast<int32_t>(value);
  }
}
inline bool IsKnownEnumValue(LatencyComponentType value) {
  return internal::LatencyComponentType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::LatencyComponentType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::LatencyComponentType> {};

}  // namespace std

namespace mojo {


template <>
struct EnumTraits<::ui::mojom::LatencyComponentType, ::ui::mojom::LatencyComponentType> {
  static ::ui::mojom::LatencyComponentType ToMojom(::ui::mojom::LatencyComponentType input) { return input; }
  static bool FromMojom(::ui::mojom::LatencyComponentType input, ::ui::mojom::LatencyComponentType* output) {
    *output = input;
    return true;
  }
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LatencyComponentType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::LatencyComponentType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(static_cast<::ui::mojom::LatencyComponentType>(input), output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // UI_EVENTS_MOJO_LATENCY_INFO_MOJOM_SHARED_H_
