// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_EVENT_MOJOM_H_
#define UI_EVENTS_MOJO_EVENT_MOJOM_H_

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
#include "ui/events/mojo/event.mojom-shared.h"
#include "ui/events/mojo/event_constants.mojom.h"
#include "ui/events/mojo/keyboard_codes.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "base/values.h"
#include "ui/gfx/geometry/vector2d.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/point.h"
#include "base/version.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "base/strings/string16.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/events/latency_info.h"
#include "base/time/time.h"
#include "ui/gfx/geometry/point_f.h"
#include "ui/gfx/geometry/insets.h"
#include "ui/events/event.h"
#include "ui/gfx/geometry/size.h"
#include "ui/gfx/geometry/rect_f.h"


namespace ui {
namespace mojom {
class KeyData;
class KeyDataDataView;
using KeyDataPtr = mojo::StructPtr<KeyData>;

class LocationData;
class LocationDataDataView;
using LocationDataPtr = mojo::InlinedStructPtr<LocationData>;

class PointerData;
class PointerDataDataView;
using PointerDataPtr = mojo::StructPtr<PointerData>;

class WheelData;
class WheelDataDataView;
using WheelDataPtr = mojo::InlinedStructPtr<WheelData>;

class BrushData;
class BrushDataDataView;
using BrushDataPtr = mojo::StructPtr<BrushData>;

class Event;
class EventDataView;
using EventPtr = mojo::StructPtr<Event>;




class  LocationData {
 public:
  using DataView = LocationDataDataView;
  using Data_ = internal::LocationData_Data;

  static LocationDataPtr New();

  template <typename U>
  static LocationDataPtr From(const U& u) {
    return mojo::TypeConverter<LocationDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LocationData>::Convert(*this);
  }

  LocationData();
  ~LocationData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LocationDataPtr>
  LocationDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LocationData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        LocationDataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        LocationDataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  float x;
  float y;
  float screen_x;
  float screen_y;
};

class LocationDataDataView {
 public:
  LocationDataDataView() {}

  LocationDataDataView(
      internal::LocationData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float x() const {
    return data_->x;
  }
  float y() const {
    return data_->y;
  }
  float screen_x() const {
    return data_->screen_x;
  }
  float screen_y() const {
    return data_->screen_y;
  }
 private:
  internal::LocationData_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::LocationDataDataView> {
  using MojomType = ::ui::mojom::LocationDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {




class  WheelData {
 public:
  using DataView = WheelDataDataView;
  using Data_ = internal::WheelData_Data;

  static WheelDataPtr New();

  template <typename U>
  static WheelDataPtr From(const U& u) {
    return mojo::TypeConverter<WheelDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WheelData>::Convert(*this);
  }

  WheelData();
  ~WheelData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WheelDataPtr>
  WheelDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, WheelData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        WheelDataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        WheelDataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  ::ui::mojom::WheelMode mode;
  float delta_x;
  float delta_y;
  float delta_z;
};

class WheelDataDataView {
 public:
  WheelDataDataView() {}

  WheelDataDataView(
      internal::WheelData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadMode(UserType* output) const {
    auto data_value = data_->mode;
    return mojo::internal::Deserialize<::ui::mojom::WheelMode>(
        data_value, output);
  }

  ::ui::mojom::WheelMode mode() const {
    return static_cast<::ui::mojom::WheelMode>(data_->mode);
  }
  float delta_x() const {
    return data_->delta_x;
  }
  float delta_y() const {
    return data_->delta_y;
  }
  float delta_z() const {
    return data_->delta_z;
  }
 private:
  internal::WheelData_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::WheelDataDataView> {
  using MojomType = ::ui::mojom::WheelDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {







class  KeyData {
 public:
  using DataView = KeyDataDataView;
  using Data_ = internal::KeyData_Data;

  static KeyDataPtr New();

  template <typename U>
  static KeyDataPtr From(const U& u) {
    return mojo::TypeConverter<KeyDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, KeyData>::Convert(*this);
  }

  KeyData();
  ~KeyData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = KeyDataPtr>
  KeyDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, KeyData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        KeyDataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        KeyDataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  int32_t key_code;
  bool is_char;
  uint16_t character;
  ::ui::mojom::KeyboardCode windows_key_code;
  int32_t native_key_code;
  uint16_t text;
  uint16_t unmodified_text;
};

class KeyDataDataView {
 public:
  KeyDataDataView() {}

  KeyDataDataView(
      internal::KeyData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t key_code() const {
    return data_->key_code;
  }
  bool is_char() const {
    return data_->is_char;
  }
  uint16_t character() const {
    return data_->character;
  }
  template <typename UserType>
  bool ReadWindowsKeyCode(UserType* output) const {
    auto data_value = data_->windows_key_code;
    return mojo::internal::Deserialize<::ui::mojom::KeyboardCode>(
        data_value, output);
  }

  ::ui::mojom::KeyboardCode windows_key_code() const {
    return static_cast<::ui::mojom::KeyboardCode>(data_->windows_key_code);
  }
  int32_t native_key_code() const {
    return data_->native_key_code;
  }
  uint16_t text() const {
    return data_->text;
  }
  uint16_t unmodified_text() const {
    return data_->unmodified_text;
  }
 private:
  internal::KeyData_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::KeyDataDataView> {
  using MojomType = ::ui::mojom::KeyDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {




class  PointerData {
 public:
  using DataView = PointerDataDataView;
  using Data_ = internal::PointerData_Data;

  static PointerDataPtr New();

  template <typename U>
  static PointerDataPtr From(const U& u) {
    return mojo::TypeConverter<PointerDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PointerData>::Convert(*this);
  }

  PointerData();
  ~PointerData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PointerDataPtr>
  PointerDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PointerData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PointerDataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PointerDataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  int32_t pointer_id;
  ::ui::mojom::PointerKind kind;
  LocationDataPtr location;
  BrushDataPtr brush_data;
  WheelDataPtr wheel_data;
 private:
  DISALLOW_COPY_AND_ASSIGN(PointerData);
};

class PointerDataDataView {
 public:
  PointerDataDataView() {}

  PointerDataDataView(
      internal::PointerData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t pointer_id() const {
    return data_->pointer_id;
  }
  template <typename UserType>
  bool ReadKind(UserType* output) const {
    auto data_value = data_->kind;
    return mojo::internal::Deserialize<::ui::mojom::PointerKind>(
        data_value, output);
  }

  ::ui::mojom::PointerKind kind() const {
    return static_cast<::ui::mojom::PointerKind>(data_->kind);
  }
  inline void GetLocationDataView(
      LocationDataDataView* output);

  template <typename UserType>
  bool ReadLocation(UserType* output) {
    auto pointer = data_->location.Get();
    return mojo::internal::Deserialize<::ui::mojom::LocationDataPtr>(
        pointer, output, context_);
  }
  inline void GetBrushDataDataView(
      BrushDataDataView* output);

  template <typename UserType>
  bool ReadBrushData(UserType* output) {
    auto pointer = data_->brush_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::BrushDataPtr>(
        pointer, output, context_);
  }
  inline void GetWheelDataDataView(
      WheelDataDataView* output);

  template <typename UserType>
  bool ReadWheelData(UserType* output) {
    auto pointer = data_->wheel_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::WheelDataPtr>(
        pointer, output, context_);
  }
 private:
  internal::PointerData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::PointerDataDataView> {
  using MojomType = ::ui::mojom::PointerDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {




class  BrushData {
 public:
  using DataView = BrushDataDataView;
  using Data_ = internal::BrushData_Data;

  static BrushDataPtr New();

  template <typename U>
  static BrushDataPtr From(const U& u) {
    return mojo::TypeConverter<BrushDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BrushData>::Convert(*this);
  }

  BrushData();
  ~BrushData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BrushDataPtr>
  BrushDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BrushData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        BrushDataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        BrushDataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  float width;
  float height;
  float pressure;
  float tilt_x;
  float tilt_y;
};

class BrushDataDataView {
 public:
  BrushDataDataView() {}

  BrushDataDataView(
      internal::BrushData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  float width() const {
    return data_->width;
  }
  float height() const {
    return data_->height;
  }
  float pressure() const {
    return data_->pressure;
  }
  float tilt_x() const {
    return data_->tilt_x;
  }
  float tilt_y() const {
    return data_->tilt_y;
  }
 private:
  internal::BrushData_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::BrushDataDataView> {
  using MojomType = ::ui::mojom::BrushDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {



class  Event {
 public:
  using DataView = EventDataView;
  using Data_ = internal::Event_Data;

  static EventPtr New();

  template <typename U>
  static EventPtr From(const U& u) {
    return mojo::TypeConverter<EventPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Event>::Convert(*this);
  }

  Event();
  ~Event();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EventPtr>
  EventPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Event>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        EventPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        EventPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  ::ui::mojom::EventType action;
  int32_t flags;
  int64_t time_stamp;
  KeyDataPtr key_data;
  PointerDataPtr pointer_data;
 private:
  DISALLOW_COPY_AND_ASSIGN(Event);
};

class EventDataView {
 public:
  EventDataView() {}

  EventDataView(
      internal::Event_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadAction(UserType* output) const {
    auto data_value = data_->action;
    return mojo::internal::Deserialize<::ui::mojom::EventType>(
        data_value, output);
  }

  ::ui::mojom::EventType action() const {
    return static_cast<::ui::mojom::EventType>(data_->action);
  }
  int32_t flags() const {
    return data_->flags;
  }
  int64_t time_stamp() const {
    return data_->time_stamp;
  }
  inline void GetKeyDataDataView(
      KeyDataDataView* output);

  template <typename UserType>
  bool ReadKeyData(UserType* output) {
    auto pointer = data_->key_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::KeyDataPtr>(
        pointer, output, context_);
  }
  inline void GetPointerDataDataView(
      PointerDataDataView* output);

  template <typename UserType>
  bool ReadPointerData(UserType* output) {
    auto pointer = data_->pointer_data.Get();
    return mojo::internal::Deserialize<::ui::mojom::PointerDataPtr>(
        pointer, output, context_);
  }
 private:
  internal::Event_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::EventDataView> {
  using MojomType = ::ui::mojom::EventPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {


template <typename StructPtrType>
KeyDataPtr KeyData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->key_code = mojo::internal::Clone(key_code);
  rv->is_char = mojo::internal::Clone(is_char);
  rv->character = mojo::internal::Clone(character);
  rv->windows_key_code = mojo::internal::Clone(windows_key_code);
  rv->native_key_code = mojo::internal::Clone(native_key_code);
  rv->text = mojo::internal::Clone(text);
  rv->unmodified_text = mojo::internal::Clone(unmodified_text);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, KeyData>::value>::type*>
bool KeyData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->key_code, other.key_code))
    return false;
  if (!mojo::internal::Equals(this->is_char, other.is_char))
    return false;
  if (!mojo::internal::Equals(this->character, other.character))
    return false;
  if (!mojo::internal::Equals(this->windows_key_code, other.windows_key_code))
    return false;
  if (!mojo::internal::Equals(this->native_key_code, other.native_key_code))
    return false;
  if (!mojo::internal::Equals(this->text, other.text))
    return false;
  if (!mojo::internal::Equals(this->unmodified_text, other.unmodified_text))
    return false;
  return true;
}


template <typename StructPtrType>
LocationDataPtr LocationData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->x = mojo::internal::Clone(x);
  rv->y = mojo::internal::Clone(y);
  rv->screen_x = mojo::internal::Clone(screen_x);
  rv->screen_y = mojo::internal::Clone(screen_y);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LocationData>::value>::type*>
bool LocationData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->x, other.x))
    return false;
  if (!mojo::internal::Equals(this->y, other.y))
    return false;
  if (!mojo::internal::Equals(this->screen_x, other.screen_x))
    return false;
  if (!mojo::internal::Equals(this->screen_y, other.screen_y))
    return false;
  return true;
}


template <typename StructPtrType>
PointerDataPtr PointerData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->pointer_id = mojo::internal::Clone(pointer_id);
  rv->kind = mojo::internal::Clone(kind);
  rv->location = mojo::internal::Clone(location);
  rv->brush_data = mojo::internal::Clone(brush_data);
  rv->wheel_data = mojo::internal::Clone(wheel_data);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PointerData>::value>::type*>
bool PointerData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->pointer_id, other.pointer_id))
    return false;
  if (!mojo::internal::Equals(this->kind, other.kind))
    return false;
  if (!mojo::internal::Equals(this->location, other.location))
    return false;
  if (!mojo::internal::Equals(this->brush_data, other.brush_data))
    return false;
  if (!mojo::internal::Equals(this->wheel_data, other.wheel_data))
    return false;
  return true;
}

inline void PointerDataDataView::GetLocationDataView(
    LocationDataDataView* output) {
  auto pointer = data_->location.Get();
  *output = LocationDataDataView(pointer, context_);
}
inline void PointerDataDataView::GetBrushDataDataView(
    BrushDataDataView* output) {
  auto pointer = data_->brush_data.Get();
  *output = BrushDataDataView(pointer, context_);
}
inline void PointerDataDataView::GetWheelDataDataView(
    WheelDataDataView* output) {
  auto pointer = data_->wheel_data.Get();
  *output = WheelDataDataView(pointer, context_);
}

template <typename StructPtrType>
WheelDataPtr WheelData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->mode = mojo::internal::Clone(mode);
  rv->delta_x = mojo::internal::Clone(delta_x);
  rv->delta_y = mojo::internal::Clone(delta_y);
  rv->delta_z = mojo::internal::Clone(delta_z);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, WheelData>::value>::type*>
bool WheelData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->mode, other.mode))
    return false;
  if (!mojo::internal::Equals(this->delta_x, other.delta_x))
    return false;
  if (!mojo::internal::Equals(this->delta_y, other.delta_y))
    return false;
  if (!mojo::internal::Equals(this->delta_z, other.delta_z))
    return false;
  return true;
}


template <typename StructPtrType>
BrushDataPtr BrushData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->width = mojo::internal::Clone(width);
  rv->height = mojo::internal::Clone(height);
  rv->pressure = mojo::internal::Clone(pressure);
  rv->tilt_x = mojo::internal::Clone(tilt_x);
  rv->tilt_y = mojo::internal::Clone(tilt_y);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BrushData>::value>::type*>
bool BrushData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->width, other.width))
    return false;
  if (!mojo::internal::Equals(this->height, other.height))
    return false;
  if (!mojo::internal::Equals(this->pressure, other.pressure))
    return false;
  if (!mojo::internal::Equals(this->tilt_x, other.tilt_x))
    return false;
  if (!mojo::internal::Equals(this->tilt_y, other.tilt_y))
    return false;
  return true;
}


template <typename StructPtrType>
EventPtr Event::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->action = mojo::internal::Clone(action);
  rv->flags = mojo::internal::Clone(flags);
  rv->time_stamp = mojo::internal::Clone(time_stamp);
  rv->key_data = mojo::internal::Clone(key_data);
  rv->pointer_data = mojo::internal::Clone(pointer_data);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Event>::value>::type*>
bool Event::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->action, other.action))
    return false;
  if (!mojo::internal::Equals(this->flags, other.flags))
    return false;
  if (!mojo::internal::Equals(this->time_stamp, other.time_stamp))
    return false;
  if (!mojo::internal::Equals(this->key_data, other.key_data))
    return false;
  if (!mojo::internal::Equals(this->pointer_data, other.pointer_data))
    return false;
  return true;
}

inline void EventDataView::GetKeyDataDataView(
    KeyDataDataView* output) {
  auto pointer = data_->key_data.Get();
  *output = KeyDataDataView(pointer, context_);
}
inline void EventDataView::GetPointerDataDataView(
    PointerDataDataView* output) {
  auto pointer = data_->pointer_data.Get();
  *output = PointerDataDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::KeyData, ::ui::mojom::KeyDataPtr> {
  static bool IsNull(const ::ui::mojom::KeyDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::KeyDataPtr* output) { output->reset(); }
  static decltype(::ui::mojom::KeyData::key_code) key_code(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->key_code;
  }
  static decltype(::ui::mojom::KeyData::is_char) is_char(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->is_char;
  }
  static decltype(::ui::mojom::KeyData::character) character(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->character;
  }
  static decltype(::ui::mojom::KeyData::windows_key_code) windows_key_code(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->windows_key_code;
  }
  static decltype(::ui::mojom::KeyData::native_key_code) native_key_code(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->native_key_code;
  }
  static decltype(::ui::mojom::KeyData::text) text(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->text;
  }
  static decltype(::ui::mojom::KeyData::unmodified_text) unmodified_text(
      const ::ui::mojom::KeyDataPtr& input) {
    return input->unmodified_text;
  }

  static bool Read(::ui::mojom::KeyDataDataView input, ::ui::mojom::KeyDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::KeyDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::KeyData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::KeyData_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::KeyData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::KeyData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->key_code = CallWithContext(Traits::key_code, input, custom_context);
      result->is_char = CallWithContext(Traits::is_char, input, custom_context);
      result->character = CallWithContext(Traits::character, input, custom_context);
      mojo::internal::Serialize<::ui::mojom::KeyboardCode>(
          CallWithContext(Traits::windows_key_code, input, custom_context), &result->windows_key_code);
      result->native_key_code = CallWithContext(Traits::native_key_code, input, custom_context);
      result->text = CallWithContext(Traits::text, input, custom_context);
      result->unmodified_text = CallWithContext(Traits::unmodified_text, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::KeyData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::KeyDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::LocationData, ::ui::mojom::LocationDataPtr> {
  static bool IsNull(const ::ui::mojom::LocationDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::LocationDataPtr* output) { output->reset(); }
  static decltype(::ui::mojom::LocationData::x) x(
      const ::ui::mojom::LocationDataPtr& input) {
    return input->x;
  }
  static decltype(::ui::mojom::LocationData::y) y(
      const ::ui::mojom::LocationDataPtr& input) {
    return input->y;
  }
  static decltype(::ui::mojom::LocationData::screen_x) screen_x(
      const ::ui::mojom::LocationDataPtr& input) {
    return input->screen_x;
  }
  static decltype(::ui::mojom::LocationData::screen_y) screen_y(
      const ::ui::mojom::LocationDataPtr& input) {
    return input->screen_y;
  }

  static bool Read(::ui::mojom::LocationDataDataView input, ::ui::mojom::LocationDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LocationDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::LocationData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::LocationData_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::LocationData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::LocationData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->x = CallWithContext(Traits::x, input, custom_context);
      result->y = CallWithContext(Traits::y, input, custom_context);
      result->screen_x = CallWithContext(Traits::screen_x, input, custom_context);
      result->screen_y = CallWithContext(Traits::screen_y, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::LocationData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::LocationDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::PointerData, ::ui::mojom::PointerDataPtr> {
  static bool IsNull(const ::ui::mojom::PointerDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::PointerDataPtr* output) { output->reset(); }
  static decltype(::ui::mojom::PointerData::pointer_id) pointer_id(
      const ::ui::mojom::PointerDataPtr& input) {
    return input->pointer_id;
  }
  static decltype(::ui::mojom::PointerData::kind) kind(
      const ::ui::mojom::PointerDataPtr& input) {
    return input->kind;
  }
  static decltype(::ui::mojom::PointerData::location)& location(
      ::ui::mojom::PointerDataPtr& input) {
    return input->location;
  }
  static decltype(::ui::mojom::PointerData::brush_data)& brush_data(
      ::ui::mojom::PointerDataPtr& input) {
    return input->brush_data;
  }
  static decltype(::ui::mojom::PointerData::wheel_data)& wheel_data(
      ::ui::mojom::PointerDataPtr& input) {
    return input->wheel_data;
  }

  static bool Read(::ui::mojom::PointerDataDataView input, ::ui::mojom::PointerDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::PointerDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::PointerData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::PointerData_Data);
    decltype(CallWithContext(Traits::location, input, custom_context)) in_location = CallWithContext(Traits::location, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::LocationDataPtr>(
        in_location, context);
    decltype(CallWithContext(Traits::brush_data, input, custom_context)) in_brush_data = CallWithContext(Traits::brush_data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::BrushDataPtr>(
        in_brush_data, context);
    decltype(CallWithContext(Traits::wheel_data, input, custom_context)) in_wheel_data = CallWithContext(Traits::wheel_data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::WheelDataPtr>(
        in_wheel_data, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::PointerData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::PointerData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->pointer_id = CallWithContext(Traits::pointer_id, input, custom_context);
      mojo::internal::Serialize<::ui::mojom::PointerKind>(
          CallWithContext(Traits::kind, input, custom_context), &result->kind);
      decltype(CallWithContext(Traits::location, input, custom_context)) in_location = CallWithContext(Traits::location, input, custom_context);
      typename decltype(result->location)::BaseType* location_ptr;
      mojo::internal::Serialize<::ui::mojom::LocationDataPtr>(
          in_location, buffer, &location_ptr, context);
      result->location.Set(location_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->location.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null location in PointerData struct");
      decltype(CallWithContext(Traits::brush_data, input, custom_context)) in_brush_data = CallWithContext(Traits::brush_data, input, custom_context);
      typename decltype(result->brush_data)::BaseType* brush_data_ptr;
      mojo::internal::Serialize<::ui::mojom::BrushDataPtr>(
          in_brush_data, buffer, &brush_data_ptr, context);
      result->brush_data.Set(brush_data_ptr);
      decltype(CallWithContext(Traits::wheel_data, input, custom_context)) in_wheel_data = CallWithContext(Traits::wheel_data, input, custom_context);
      typename decltype(result->wheel_data)::BaseType* wheel_data_ptr;
      mojo::internal::Serialize<::ui::mojom::WheelDataPtr>(
          in_wheel_data, buffer, &wheel_data_ptr, context);
      result->wheel_data.Set(wheel_data_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::PointerData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::PointerDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::WheelData, ::ui::mojom::WheelDataPtr> {
  static bool IsNull(const ::ui::mojom::WheelDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::WheelDataPtr* output) { output->reset(); }
  static decltype(::ui::mojom::WheelData::mode) mode(
      const ::ui::mojom::WheelDataPtr& input) {
    return input->mode;
  }
  static decltype(::ui::mojom::WheelData::delta_x) delta_x(
      const ::ui::mojom::WheelDataPtr& input) {
    return input->delta_x;
  }
  static decltype(::ui::mojom::WheelData::delta_y) delta_y(
      const ::ui::mojom::WheelDataPtr& input) {
    return input->delta_y;
  }
  static decltype(::ui::mojom::WheelData::delta_z) delta_z(
      const ::ui::mojom::WheelDataPtr& input) {
    return input->delta_z;
  }

  static bool Read(::ui::mojom::WheelDataDataView input, ::ui::mojom::WheelDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::WheelDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::WheelData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::WheelData_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::WheelData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::WheelData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::ui::mojom::WheelMode>(
          CallWithContext(Traits::mode, input, custom_context), &result->mode);
      result->delta_x = CallWithContext(Traits::delta_x, input, custom_context);
      result->delta_y = CallWithContext(Traits::delta_y, input, custom_context);
      result->delta_z = CallWithContext(Traits::delta_z, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::WheelData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::WheelDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::BrushData, ::ui::mojom::BrushDataPtr> {
  static bool IsNull(const ::ui::mojom::BrushDataPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::BrushDataPtr* output) { output->reset(); }
  static decltype(::ui::mojom::BrushData::width) width(
      const ::ui::mojom::BrushDataPtr& input) {
    return input->width;
  }
  static decltype(::ui::mojom::BrushData::height) height(
      const ::ui::mojom::BrushDataPtr& input) {
    return input->height;
  }
  static decltype(::ui::mojom::BrushData::pressure) pressure(
      const ::ui::mojom::BrushDataPtr& input) {
    return input->pressure;
  }
  static decltype(::ui::mojom::BrushData::tilt_x) tilt_x(
      const ::ui::mojom::BrushDataPtr& input) {
    return input->tilt_x;
  }
  static decltype(::ui::mojom::BrushData::tilt_y) tilt_y(
      const ::ui::mojom::BrushDataPtr& input) {
    return input->tilt_y;
  }

  static bool Read(::ui::mojom::BrushDataDataView input, ::ui::mojom::BrushDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::BrushDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::BrushData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::BrushData_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::BrushData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::BrushData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->width = CallWithContext(Traits::width, input, custom_context);
      result->height = CallWithContext(Traits::height, input, custom_context);
      result->pressure = CallWithContext(Traits::pressure, input, custom_context);
      result->tilt_x = CallWithContext(Traits::tilt_x, input, custom_context);
      result->tilt_y = CallWithContext(Traits::tilt_y, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::BrushData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::BrushDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::Event, ::ui::mojom::EventPtr> {
  static bool IsNull(const ::ui::mojom::EventPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::EventPtr* output) { output->reset(); }
  static decltype(::ui::mojom::Event::action) action(
      const ::ui::mojom::EventPtr& input) {
    return input->action;
  }
  static decltype(::ui::mojom::Event::flags) flags(
      const ::ui::mojom::EventPtr& input) {
    return input->flags;
  }
  static decltype(::ui::mojom::Event::time_stamp) time_stamp(
      const ::ui::mojom::EventPtr& input) {
    return input->time_stamp;
  }
  static decltype(::ui::mojom::Event::key_data)& key_data(
      ::ui::mojom::EventPtr& input) {
    return input->key_data;
  }
  static decltype(::ui::mojom::Event::pointer_data)& pointer_data(
      ::ui::mojom::EventPtr& input) {
    return input->pointer_data;
  }

  static bool Read(::ui::mojom::EventDataView input, ::ui::mojom::EventPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::Event, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::Event_Data);
    decltype(CallWithContext(Traits::key_data, input, custom_context)) in_key_data = CallWithContext(Traits::key_data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::KeyDataPtr>(
        in_key_data, context);
    decltype(CallWithContext(Traits::pointer_data, input, custom_context)) in_pointer_data = CallWithContext(Traits::pointer_data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::PointerDataPtr>(
        in_pointer_data, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::Event_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::Event_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::ui::mojom::EventType>(
          CallWithContext(Traits::action, input, custom_context), &result->action);
      result->flags = CallWithContext(Traits::flags, input, custom_context);
      result->time_stamp = CallWithContext(Traits::time_stamp, input, custom_context);
      decltype(CallWithContext(Traits::key_data, input, custom_context)) in_key_data = CallWithContext(Traits::key_data, input, custom_context);
      typename decltype(result->key_data)::BaseType* key_data_ptr;
      mojo::internal::Serialize<::ui::mojom::KeyDataPtr>(
          in_key_data, buffer, &key_data_ptr, context);
      result->key_data.Set(key_data_ptr);
      decltype(CallWithContext(Traits::pointer_data, input, custom_context)) in_pointer_data = CallWithContext(Traits::pointer_data, input, custom_context);
      typename decltype(result->pointer_data)::BaseType* pointer_data_ptr;
      mojo::internal::Serialize<::ui::mojom::PointerDataPtr>(
          in_pointer_data, buffer, &pointer_data_ptr, context);
      result->pointer_data.Set(pointer_data_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::Event_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::EventDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // UI_EVENTS_MOJO_EVENT_MOJOM_H_