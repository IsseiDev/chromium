// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_EVENT_MATCHER_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_EVENT_MATCHER_MOJOM_H_

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
#include "services/ui/public/interfaces/event_matcher.mojom-shared.h"
#include "ui/events/mojo/event_constants.mojom.h"
#include "ui/events/mojo/keyboard_codes.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
class KeyEventMatcher;
class KeyEventMatcherDataView;
using KeyEventMatcherPtr = mojo::InlinedStructPtr<KeyEventMatcher>;

class PointerKindMatcher;
class PointerKindMatcherDataView;
using PointerKindMatcherPtr = mojo::InlinedStructPtr<PointerKindMatcher>;

class PointerLocationMatcher;
class PointerLocationMatcherDataView;
using PointerLocationMatcherPtr = mojo::StructPtr<PointerLocationMatcher>;

class EventTypeMatcher;
class EventTypeMatcherDataView;
using EventTypeMatcherPtr = mojo::InlinedStructPtr<EventTypeMatcher>;

class EventFlagsMatcher;
class EventFlagsMatcherDataView;
using EventFlagsMatcherPtr = mojo::InlinedStructPtr<EventFlagsMatcher>;

class EventMatcher;
class EventMatcherDataView;
using EventMatcherPtr = mojo::StructPtr<EventMatcher>;



class  KeyEventMatcher {
 public:
  using DataView = KeyEventMatcherDataView;
  using Data_ = internal::KeyEventMatcher_Data;

  static KeyEventMatcherPtr New();

  template <typename U>
  static KeyEventMatcherPtr From(const U& u) {
    return mojo::TypeConverter<KeyEventMatcherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyEventMatcher>::Convert(*this);
  }

  KeyEventMatcher();
  ~KeyEventMatcher();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyEventMatcherPtr>
  KeyEventMatcherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyEventMatcher>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        KeyEventMatcherPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        KeyEventMatcherPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  ::ui::mojom::KeyboardCode keyboard_code;
};

class KeyEventMatcherDataView {
 public:
  KeyEventMatcherDataView() {}

  KeyEventMatcherDataView(
      internal::KeyEventMatcher_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadKeyboardCode(UserType* output) const {
    auto data_value = data_->keyboard_code;
    return mojo::internal::Deserialize<::ui::mojom::KeyboardCode>(
        data_value, output);
  }

  ::ui::mojom::KeyboardCode keyboard_code() const {
    return static_cast<::ui::mojom::KeyboardCode>(data_->keyboard_code);
  }
 private:
  internal::KeyEventMatcher_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::KeyEventMatcherDataView> {
  using MojomType = ::ui::mojom::KeyEventMatcherPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {



class  PointerKindMatcher {
 public:
  using DataView = PointerKindMatcherDataView;
  using Data_ = internal::PointerKindMatcher_Data;

  static PointerKindMatcherPtr New();

  template <typename U>
  static PointerKindMatcherPtr From(const U& u) {
    return mojo::TypeConverter<PointerKindMatcherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointerKindMatcher>::Convert(*this);
  }

  PointerKindMatcher();
  ~PointerKindMatcher();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PointerKindMatcherPtr>
  PointerKindMatcherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PointerKindMatcher>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PointerKindMatcherPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PointerKindMatcherPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  ::ui::mojom::PointerKind pointer_kind;
};

class PointerKindMatcherDataView {
 public:
  PointerKindMatcherDataView() {}

  PointerKindMatcherDataView(
      internal::PointerKindMatcher_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadPointerKind(UserType* output) const {
    auto data_value = data_->pointer_kind;
    return mojo::internal::Deserialize<::ui::mojom::PointerKind>(
        data_value, output);
  }

  ::ui::mojom::PointerKind pointer_kind() const {
    return static_cast<::ui::mojom::PointerKind>(data_->pointer_kind);
  }
 private:
  internal::PointerKindMatcher_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::PointerKindMatcherDataView> {
  using MojomType = ::ui::mojom::PointerKindMatcherPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {




class  EventTypeMatcher {
 public:
  using DataView = EventTypeMatcherDataView;
  using Data_ = internal::EventTypeMatcher_Data;

  static EventTypeMatcherPtr New();

  template <typename U>
  static EventTypeMatcherPtr From(const U& u) {
    return mojo::TypeConverter<EventTypeMatcherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EventTypeMatcher>::Convert(*this);
  }

  EventTypeMatcher();
  ~EventTypeMatcher();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EventTypeMatcherPtr>
  EventTypeMatcherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EventTypeMatcher>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        EventTypeMatcherPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        EventTypeMatcherPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  ::ui::mojom::EventType type;
};

class EventTypeMatcherDataView {
 public:
  EventTypeMatcherDataView() {}

  EventTypeMatcherDataView(
      internal::EventTypeMatcher_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::EventType>(
        data_value, output);
  }

  ::ui::mojom::EventType type() const {
    return static_cast<::ui::mojom::EventType>(data_->type);
  }
 private:
  internal::EventTypeMatcher_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::EventTypeMatcherDataView> {
  using MojomType = ::ui::mojom::EventTypeMatcherPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {



class  EventFlagsMatcher {
 public:
  using DataView = EventFlagsMatcherDataView;
  using Data_ = internal::EventFlagsMatcher_Data;

  static EventFlagsMatcherPtr New();

  template <typename U>
  static EventFlagsMatcherPtr From(const U& u) {
    return mojo::TypeConverter<EventFlagsMatcherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EventFlagsMatcher>::Convert(*this);
  }

  EventFlagsMatcher();
  ~EventFlagsMatcher();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EventFlagsMatcherPtr>
  EventFlagsMatcherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EventFlagsMatcher>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        EventFlagsMatcherPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        EventFlagsMatcherPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  int32_t flags;
};

class EventFlagsMatcherDataView {
 public:
  EventFlagsMatcherDataView() {}

  EventFlagsMatcherDataView(
      internal::EventFlagsMatcher_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t flags() const {
    return data_->flags;
  }
 private:
  internal::EventFlagsMatcher_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::EventFlagsMatcherDataView> {
  using MojomType = ::ui::mojom::EventFlagsMatcherPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {








class  PointerLocationMatcher {
 public:
  using DataView = PointerLocationMatcherDataView;
  using Data_ = internal::PointerLocationMatcher_Data;

  static PointerLocationMatcherPtr New();

  template <typename U>
  static PointerLocationMatcherPtr From(const U& u) {
    return mojo::TypeConverter<PointerLocationMatcherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointerLocationMatcher>::Convert(*this);
  }

  PointerLocationMatcher();
  ~PointerLocationMatcher();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PointerLocationMatcherPtr>
  PointerLocationMatcherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PointerLocationMatcher>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PointerLocationMatcherPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PointerLocationMatcherPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  gfx::RectF region;
};

class PointerLocationMatcherDataView {
 public:
  PointerLocationMatcherDataView() {}

  PointerLocationMatcherDataView(
      internal::PointerLocationMatcher_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRegionDataView(
      ::gfx::mojom::RectFDataView* output);

  template <typename UserType>
  bool ReadRegion(UserType* output) {
    auto pointer = data_->region.Get();
    return mojo::internal::Deserialize<::gfx::mojom::RectFPtr>(
        pointer, output, context_);
  }
 private:
  internal::PointerLocationMatcher_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::PointerLocationMatcherDataView> {
  using MojomType = ::ui::mojom::PointerLocationMatcherPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {





class  EventMatcher {
 public:
  using DataView = EventMatcherDataView;
  using Data_ = internal::EventMatcher_Data;

  static EventMatcherPtr New();

  template <typename U>
  static EventMatcherPtr From(const U& u) {
    return mojo::TypeConverter<EventMatcherPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EventMatcher>::Convert(*this);
  }

  EventMatcher();
  ~EventMatcher();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EventMatcherPtr>
  EventMatcherPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EventMatcher>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        EventMatcherPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        EventMatcherPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  ::ui::mojom::AcceleratorPhase accelerator_phase;
  EventTypeMatcherPtr type_matcher;
  EventFlagsMatcherPtr flags_matcher;
  EventFlagsMatcherPtr ignore_flags_matcher;
  KeyEventMatcherPtr key_matcher;
  PointerKindMatcherPtr pointer_kind_matcher;
  PointerLocationMatcherPtr pointer_location_matcher;
 private:
  DISALLOW_COPY_AND_ASSIGN(EventMatcher);
};

class EventMatcherDataView {
 public:
  EventMatcherDataView() {}

  EventMatcherDataView(
      internal::EventMatcher_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadAcceleratorPhase(UserType* output) const {
    auto data_value = data_->accelerator_phase;
    return mojo::internal::Deserialize<::ui::mojom::AcceleratorPhase>(
        data_value, output);
  }

  ::ui::mojom::AcceleratorPhase accelerator_phase() const {
    return static_cast<::ui::mojom::AcceleratorPhase>(data_->accelerator_phase);
  }
  inline void GetTypeMatcherDataView(
      EventTypeMatcherDataView* output);

  template <typename UserType>
  bool ReadTypeMatcher(UserType* output) {
    auto pointer = data_->type_matcher.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventTypeMatcherPtr>(
        pointer, output, context_);
  }
  inline void GetFlagsMatcherDataView(
      EventFlagsMatcherDataView* output);

  template <typename UserType>
  bool ReadFlagsMatcher(UserType* output) {
    auto pointer = data_->flags_matcher.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventFlagsMatcherPtr>(
        pointer, output, context_);
  }
  inline void GetIgnoreFlagsMatcherDataView(
      EventFlagsMatcherDataView* output);

  template <typename UserType>
  bool ReadIgnoreFlagsMatcher(UserType* output) {
    auto pointer = data_->ignore_flags_matcher.Get();
    return mojo::internal::Deserialize<::ui::mojom::EventFlagsMatcherPtr>(
        pointer, output, context_);
  }
  inline void GetKeyMatcherDataView(
      KeyEventMatcherDataView* output);

  template <typename UserType>
  bool ReadKeyMatcher(UserType* output) {
    auto pointer = data_->key_matcher.Get();
    return mojo::internal::Deserialize<::ui::mojom::KeyEventMatcherPtr>(
        pointer, output, context_);
  }
  inline void GetPointerKindMatcherDataView(
      PointerKindMatcherDataView* output);

  template <typename UserType>
  bool ReadPointerKindMatcher(UserType* output) {
    auto pointer = data_->pointer_kind_matcher.Get();
    return mojo::internal::Deserialize<::ui::mojom::PointerKindMatcherPtr>(
        pointer, output, context_);
  }
  inline void GetPointerLocationMatcherDataView(
      PointerLocationMatcherDataView* output);

  template <typename UserType>
  bool ReadPointerLocationMatcher(UserType* output) {
    auto pointer = data_->pointer_location_matcher.Get();
    return mojo::internal::Deserialize<::ui::mojom::PointerLocationMatcherPtr>(
        pointer, output, context_);
  }
 private:
  internal::EventMatcher_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::EventMatcherDataView> {
  using MojomType = ::ui::mojom::EventMatcherPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {


template <typename StructPtrType>
KeyEventMatcherPtr KeyEventMatcher::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->keyboard_code = mojo::internal::Clone(keyboard_code);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyEventMatcher>::value>::type*>
bool KeyEventMatcher::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->keyboard_code, other.keyboard_code))
    return false;
  return true;
}


template <typename StructPtrType>
PointerKindMatcherPtr PointerKindMatcher::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->pointer_kind = mojo::internal::Clone(pointer_kind);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PointerKindMatcher>::value>::type*>
bool PointerKindMatcher::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->pointer_kind, other.pointer_kind))
    return false;
  return true;
}


template <typename StructPtrType>
PointerLocationMatcherPtr PointerLocationMatcher::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->region = mojo::internal::Clone(region);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PointerLocationMatcher>::value>::type*>
bool PointerLocationMatcher::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->region, other.region))
    return false;
  return true;
}

inline void PointerLocationMatcherDataView::GetRegionDataView(
    ::gfx::mojom::RectFDataView* output) {
  auto pointer = data_->region.Get();
  *output = ::gfx::mojom::RectFDataView(pointer, context_);
}

template <typename StructPtrType>
EventTypeMatcherPtr EventTypeMatcher::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EventTypeMatcher>::value>::type*>
bool EventTypeMatcher::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  return true;
}


template <typename StructPtrType>
EventFlagsMatcherPtr EventFlagsMatcher::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->flags = mojo::internal::Clone(flags);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EventFlagsMatcher>::value>::type*>
bool EventFlagsMatcher::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->flags, other.flags))
    return false;
  return true;
}


template <typename StructPtrType>
EventMatcherPtr EventMatcher::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->accelerator_phase = mojo::internal::Clone(accelerator_phase);
  rv->type_matcher = mojo::internal::Clone(type_matcher);
  rv->flags_matcher = mojo::internal::Clone(flags_matcher);
  rv->ignore_flags_matcher = mojo::internal::Clone(ignore_flags_matcher);
  rv->key_matcher = mojo::internal::Clone(key_matcher);
  rv->pointer_kind_matcher = mojo::internal::Clone(pointer_kind_matcher);
  rv->pointer_location_matcher = mojo::internal::Clone(pointer_location_matcher);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EventMatcher>::value>::type*>
bool EventMatcher::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->accelerator_phase, other.accelerator_phase))
    return false;
  if (!mojo::internal::Equals(this->type_matcher, other.type_matcher))
    return false;
  if (!mojo::internal::Equals(this->flags_matcher, other.flags_matcher))
    return false;
  if (!mojo::internal::Equals(this->ignore_flags_matcher, other.ignore_flags_matcher))
    return false;
  if (!mojo::internal::Equals(this->key_matcher, other.key_matcher))
    return false;
  if (!mojo::internal::Equals(this->pointer_kind_matcher, other.pointer_kind_matcher))
    return false;
  if (!mojo::internal::Equals(this->pointer_location_matcher, other.pointer_location_matcher))
    return false;
  return true;
}

inline void EventMatcherDataView::GetTypeMatcherDataView(
    EventTypeMatcherDataView* output) {
  auto pointer = data_->type_matcher.Get();
  *output = EventTypeMatcherDataView(pointer, context_);
}
inline void EventMatcherDataView::GetFlagsMatcherDataView(
    EventFlagsMatcherDataView* output) {
  auto pointer = data_->flags_matcher.Get();
  *output = EventFlagsMatcherDataView(pointer, context_);
}
inline void EventMatcherDataView::GetIgnoreFlagsMatcherDataView(
    EventFlagsMatcherDataView* output) {
  auto pointer = data_->ignore_flags_matcher.Get();
  *output = EventFlagsMatcherDataView(pointer, context_);
}
inline void EventMatcherDataView::GetKeyMatcherDataView(
    KeyEventMatcherDataView* output) {
  auto pointer = data_->key_matcher.Get();
  *output = KeyEventMatcherDataView(pointer, context_);
}
inline void EventMatcherDataView::GetPointerKindMatcherDataView(
    PointerKindMatcherDataView* output) {
  auto pointer = data_->pointer_kind_matcher.Get();
  *output = PointerKindMatcherDataView(pointer, context_);
}
inline void EventMatcherDataView::GetPointerLocationMatcherDataView(
    PointerLocationMatcherDataView* output) {
  auto pointer = data_->pointer_location_matcher.Get();
  *output = PointerLocationMatcherDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::KeyEventMatcher, ::ui::mojom::KeyEventMatcherPtr> {
  static bool IsNull(const ::ui::mojom::KeyEventMatcherPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::KeyEventMatcherPtr* output) { output->reset(); }
  static decltype(::ui::mojom::KeyEventMatcher::keyboard_code) keyboard_code(
      const ::ui::mojom::KeyEventMatcherPtr& input) {
    return input->keyboard_code;
  }

  static bool Read(::ui::mojom::KeyEventMatcherDataView input, ::ui::mojom::KeyEventMatcherPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::KeyEventMatcherPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::KeyEventMatcher, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::KeyEventMatcher_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::KeyEventMatcher_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::KeyEventMatcher_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::ui::mojom::KeyboardCode>(
          CallWithContext(Traits::keyboard_code, input, custom_context), &result->keyboard_code);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::KeyEventMatcher_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::KeyEventMatcherDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::PointerKindMatcher, ::ui::mojom::PointerKindMatcherPtr> {
  static bool IsNull(const ::ui::mojom::PointerKindMatcherPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::PointerKindMatcherPtr* output) { output->reset(); }
  static decltype(::ui::mojom::PointerKindMatcher::pointer_kind) pointer_kind(
      const ::ui::mojom::PointerKindMatcherPtr& input) {
    return input->pointer_kind;
  }

  static bool Read(::ui::mojom::PointerKindMatcherDataView input, ::ui::mojom::PointerKindMatcherPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::PointerKindMatcherPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::PointerKindMatcher, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::PointerKindMatcher_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::PointerKindMatcher_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::PointerKindMatcher_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::ui::mojom::PointerKind>(
          CallWithContext(Traits::pointer_kind, input, custom_context), &result->pointer_kind);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::PointerKindMatcher_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::PointerKindMatcherDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::PointerLocationMatcher, ::ui::mojom::PointerLocationMatcherPtr> {
  static bool IsNull(const ::ui::mojom::PointerLocationMatcherPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::PointerLocationMatcherPtr* output) { output->reset(); }
  static decltype(::ui::mojom::PointerLocationMatcher::region)& region(
      ::ui::mojom::PointerLocationMatcherPtr& input) {
    return input->region;
  }

  static bool Read(::ui::mojom::PointerLocationMatcherDataView input, ::ui::mojom::PointerLocationMatcherPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::PointerLocationMatcherPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::PointerLocationMatcher, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::PointerLocationMatcher_Data);
    decltype(CallWithContext(Traits::region, input, custom_context)) in_region = CallWithContext(Traits::region, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::gfx::mojom::RectFPtr>(
        in_region, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::PointerLocationMatcher_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::PointerLocationMatcher_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::region, input, custom_context)) in_region = CallWithContext(Traits::region, input, custom_context);
      typename decltype(result->region)::BaseType* region_ptr;
      mojo::internal::Serialize<::gfx::mojom::RectFPtr>(
          in_region, buffer, &region_ptr, context);
      result->region.Set(region_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->region.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null region in PointerLocationMatcher struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::PointerLocationMatcher_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::PointerLocationMatcherDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::EventTypeMatcher, ::ui::mojom::EventTypeMatcherPtr> {
  static bool IsNull(const ::ui::mojom::EventTypeMatcherPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::EventTypeMatcherPtr* output) { output->reset(); }
  static decltype(::ui::mojom::EventTypeMatcher::type) type(
      const ::ui::mojom::EventTypeMatcherPtr& input) {
    return input->type;
  }

  static bool Read(::ui::mojom::EventTypeMatcherDataView input, ::ui::mojom::EventTypeMatcherPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventTypeMatcherPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::EventTypeMatcher, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::EventTypeMatcher_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::EventTypeMatcher_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::EventTypeMatcher_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::ui::mojom::EventType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::EventTypeMatcher_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::EventTypeMatcherDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::EventFlagsMatcher, ::ui::mojom::EventFlagsMatcherPtr> {
  static bool IsNull(const ::ui::mojom::EventFlagsMatcherPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::EventFlagsMatcherPtr* output) { output->reset(); }
  static decltype(::ui::mojom::EventFlagsMatcher::flags) flags(
      const ::ui::mojom::EventFlagsMatcherPtr& input) {
    return input->flags;
  }

  static bool Read(::ui::mojom::EventFlagsMatcherDataView input, ::ui::mojom::EventFlagsMatcherPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventFlagsMatcherPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::EventFlagsMatcher, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::EventFlagsMatcher_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::EventFlagsMatcher_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::EventFlagsMatcher_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->flags = CallWithContext(Traits::flags, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::EventFlagsMatcher_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::EventFlagsMatcherDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::EventMatcher, ::ui::mojom::EventMatcherPtr> {
  static bool IsNull(const ::ui::mojom::EventMatcherPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::EventMatcherPtr* output) { output->reset(); }
  static decltype(::ui::mojom::EventMatcher::accelerator_phase) accelerator_phase(
      const ::ui::mojom::EventMatcherPtr& input) {
    return input->accelerator_phase;
  }
  static decltype(::ui::mojom::EventMatcher::type_matcher)& type_matcher(
      ::ui::mojom::EventMatcherPtr& input) {
    return input->type_matcher;
  }
  static decltype(::ui::mojom::EventMatcher::flags_matcher)& flags_matcher(
      ::ui::mojom::EventMatcherPtr& input) {
    return input->flags_matcher;
  }
  static decltype(::ui::mojom::EventMatcher::ignore_flags_matcher)& ignore_flags_matcher(
      ::ui::mojom::EventMatcherPtr& input) {
    return input->ignore_flags_matcher;
  }
  static decltype(::ui::mojom::EventMatcher::key_matcher)& key_matcher(
      ::ui::mojom::EventMatcherPtr& input) {
    return input->key_matcher;
  }
  static decltype(::ui::mojom::EventMatcher::pointer_kind_matcher)& pointer_kind_matcher(
      ::ui::mojom::EventMatcherPtr& input) {
    return input->pointer_kind_matcher;
  }
  static decltype(::ui::mojom::EventMatcher::pointer_location_matcher)& pointer_location_matcher(
      ::ui::mojom::EventMatcherPtr& input) {
    return input->pointer_location_matcher;
  }

  static bool Read(::ui::mojom::EventMatcherDataView input, ::ui::mojom::EventMatcherPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventMatcherPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::EventMatcher, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::EventMatcher_Data);
    decltype(CallWithContext(Traits::type_matcher, input, custom_context)) in_type_matcher = CallWithContext(Traits::type_matcher, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::EventTypeMatcherPtr>(
        in_type_matcher, context);
    decltype(CallWithContext(Traits::flags_matcher, input, custom_context)) in_flags_matcher = CallWithContext(Traits::flags_matcher, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::EventFlagsMatcherPtr>(
        in_flags_matcher, context);
    decltype(CallWithContext(Traits::ignore_flags_matcher, input, custom_context)) in_ignore_flags_matcher = CallWithContext(Traits::ignore_flags_matcher, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::EventFlagsMatcherPtr>(
        in_ignore_flags_matcher, context);
    decltype(CallWithContext(Traits::key_matcher, input, custom_context)) in_key_matcher = CallWithContext(Traits::key_matcher, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::KeyEventMatcherPtr>(
        in_key_matcher, context);
    decltype(CallWithContext(Traits::pointer_kind_matcher, input, custom_context)) in_pointer_kind_matcher = CallWithContext(Traits::pointer_kind_matcher, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::PointerKindMatcherPtr>(
        in_pointer_kind_matcher, context);
    decltype(CallWithContext(Traits::pointer_location_matcher, input, custom_context)) in_pointer_location_matcher = CallWithContext(Traits::pointer_location_matcher, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::PointerLocationMatcherPtr>(
        in_pointer_location_matcher, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::EventMatcher_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::EventMatcher_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::ui::mojom::AcceleratorPhase>(
          CallWithContext(Traits::accelerator_phase, input, custom_context), &result->accelerator_phase);
      decltype(CallWithContext(Traits::type_matcher, input, custom_context)) in_type_matcher = CallWithContext(Traits::type_matcher, input, custom_context);
      typename decltype(result->type_matcher)::BaseType* type_matcher_ptr;
      mojo::internal::Serialize<::ui::mojom::EventTypeMatcherPtr>(
          in_type_matcher, buffer, &type_matcher_ptr, context);
      result->type_matcher.Set(type_matcher_ptr);
      decltype(CallWithContext(Traits::flags_matcher, input, custom_context)) in_flags_matcher = CallWithContext(Traits::flags_matcher, input, custom_context);
      typename decltype(result->flags_matcher)::BaseType* flags_matcher_ptr;
      mojo::internal::Serialize<::ui::mojom::EventFlagsMatcherPtr>(
          in_flags_matcher, buffer, &flags_matcher_ptr, context);
      result->flags_matcher.Set(flags_matcher_ptr);
      decltype(CallWithContext(Traits::ignore_flags_matcher, input, custom_context)) in_ignore_flags_matcher = CallWithContext(Traits::ignore_flags_matcher, input, custom_context);
      typename decltype(result->ignore_flags_matcher)::BaseType* ignore_flags_matcher_ptr;
      mojo::internal::Serialize<::ui::mojom::EventFlagsMatcherPtr>(
          in_ignore_flags_matcher, buffer, &ignore_flags_matcher_ptr, context);
      result->ignore_flags_matcher.Set(ignore_flags_matcher_ptr);
      decltype(CallWithContext(Traits::key_matcher, input, custom_context)) in_key_matcher = CallWithContext(Traits::key_matcher, input, custom_context);
      typename decltype(result->key_matcher)::BaseType* key_matcher_ptr;
      mojo::internal::Serialize<::ui::mojom::KeyEventMatcherPtr>(
          in_key_matcher, buffer, &key_matcher_ptr, context);
      result->key_matcher.Set(key_matcher_ptr);
      decltype(CallWithContext(Traits::pointer_kind_matcher, input, custom_context)) in_pointer_kind_matcher = CallWithContext(Traits::pointer_kind_matcher, input, custom_context);
      typename decltype(result->pointer_kind_matcher)::BaseType* pointer_kind_matcher_ptr;
      mojo::internal::Serialize<::ui::mojom::PointerKindMatcherPtr>(
          in_pointer_kind_matcher, buffer, &pointer_kind_matcher_ptr, context);
      result->pointer_kind_matcher.Set(pointer_kind_matcher_ptr);
      decltype(CallWithContext(Traits::pointer_location_matcher, input, custom_context)) in_pointer_location_matcher = CallWithContext(Traits::pointer_location_matcher, input, custom_context);
      typename decltype(result->pointer_location_matcher)::BaseType* pointer_location_matcher_ptr;
      mojo::internal::Serialize<::ui::mojom::PointerLocationMatcherPtr>(
          in_pointer_location_matcher, buffer, &pointer_location_matcher_ptr, context);
      result->pointer_location_matcher.Set(pointer_location_matcher_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::EventMatcher_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::EventMatcherDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_EVENT_MATCHER_MOJOM_H_