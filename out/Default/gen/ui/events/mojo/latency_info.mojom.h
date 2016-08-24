// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJO_LATENCY_INFO_MOJOM_H_
#define UI_EVENTS_MOJO_LATENCY_INFO_MOJOM_H_

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
#include "ui/events/mojo/latency_info.mojom-shared.h"
#include "mojo/common/common_custom_types.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
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
class LatencyComponentId;
class LatencyComponentIdDataView;
using LatencyComponentIdPtr = mojo::InlinedStructPtr<LatencyComponentId>;

class LatencyComponent;
class LatencyComponentDataView;
using LatencyComponentPtr = mojo::StructPtr<LatencyComponent>;

class LatencyComponentPair;
class LatencyComponentPairDataView;
using LatencyComponentPairPtr = mojo::StructPtr<LatencyComponentPair>;

class LatencyInfo;
class LatencyInfoDataView;
using LatencyInfoPtr = mojo::StructPtr<LatencyInfo>;



class  LatencyComponentId {
 public:
  using DataView = LatencyComponentIdDataView;
  using Data_ = internal::LatencyComponentId_Data;

  static LatencyComponentIdPtr New();

  template <typename U>
  static LatencyComponentIdPtr From(const U& u) {
    return mojo::TypeConverter<LatencyComponentIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LatencyComponentId>::Convert(*this);
  }

  LatencyComponentId();
  ~LatencyComponentId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LatencyComponentIdPtr>
  LatencyComponentIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LatencyComponentId>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        LatencyComponentIdPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        LatencyComponentIdPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  LatencyComponentType type;
  int64_t id;
};

class LatencyComponentIdDataView {
 public:
  LatencyComponentIdDataView() {}

  LatencyComponentIdDataView(
      internal::LatencyComponentId_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::ui::mojom::LatencyComponentType>(
        data_value, output);
  }

  ::ui::mojom::LatencyComponentType type() const {
    return static_cast<::ui::mojom::LatencyComponentType>(data_->type);
  }
  int64_t id() const {
    return data_->id;
  }
 private:
  internal::LatencyComponentId_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::LatencyComponentIdDataView> {
  using MojomType = ::ui::mojom::LatencyComponentIdPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {









class  LatencyComponent {
 public:
  using DataView = LatencyComponentDataView;
  using Data_ = internal::LatencyComponent_Data;

  static LatencyComponentPtr New();

  template <typename U>
  static LatencyComponentPtr From(const U& u) {
    return mojo::TypeConverter<LatencyComponentPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LatencyComponent>::Convert(*this);
  }

  LatencyComponent();
  ~LatencyComponent();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LatencyComponentPtr>
  LatencyComponentPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LatencyComponent>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        LatencyComponentPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        LatencyComponentPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  int64_t sequence_number;
  base::TimeTicks event_time;
  uint32_t event_count;
};

class LatencyComponentDataView {
 public:
  LatencyComponentDataView() {}

  LatencyComponentDataView(
      internal::LatencyComponent_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int64_t sequence_number() const {
    return data_->sequence_number;
  }
  inline void GetEventTimeDataView(
      ::mojo::common::mojom::TimeTicksDataView* output);

  template <typename UserType>
  bool ReadEventTime(UserType* output) {
    auto pointer = data_->event_time.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimeTicksPtr>(
        pointer, output, context_);
  }
  uint32_t event_count() const {
    return data_->event_count;
  }
 private:
  internal::LatencyComponent_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::LatencyComponentDataView> {
  using MojomType = ::ui::mojom::LatencyComponentPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {



class  LatencyComponentPair {
 public:
  using DataView = LatencyComponentPairDataView;
  using Data_ = internal::LatencyComponentPair_Data;

  static LatencyComponentPairPtr New();

  template <typename U>
  static LatencyComponentPairPtr From(const U& u) {
    return mojo::TypeConverter<LatencyComponentPairPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LatencyComponentPair>::Convert(*this);
  }

  LatencyComponentPair();
  ~LatencyComponentPair();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LatencyComponentPairPtr>
  LatencyComponentPairPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LatencyComponentPair>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        LatencyComponentPairPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        LatencyComponentPairPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::pair<ui::LatencyComponentType, int64_t> key;
  ui::LatencyInfo::LatencyComponent value;
};

class LatencyComponentPairDataView {
 public:
  LatencyComponentPairDataView() {}

  LatencyComponentPairDataView(
      internal::LatencyComponentPair_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      LatencyComponentIdDataView* output);

  template <typename UserType>
  bool ReadKey(UserType* output) {
    auto pointer = data_->key.Get();
    return mojo::internal::Deserialize<::ui::mojom::LatencyComponentIdPtr>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      LatencyComponentDataView* output);

  template <typename UserType>
  bool ReadValue(UserType* output) {
    auto pointer = data_->value.Get();
    return mojo::internal::Deserialize<::ui::mojom::LatencyComponentPtr>(
        pointer, output, context_);
  }
 private:
  internal::LatencyComponentPair_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::LatencyComponentPairDataView> {
  using MojomType = ::ui::mojom::LatencyComponentPairPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {



class  LatencyInfo {
 public:
  using DataView = LatencyInfoDataView;
  using Data_ = internal::LatencyInfo_Data;

  static LatencyInfoPtr New();

  template <typename U>
  static LatencyInfoPtr From(const U& u) {
    return mojo::TypeConverter<LatencyInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LatencyInfo>::Convert(*this);
  }

  LatencyInfo();
  ~LatencyInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LatencyInfoPtr>
  LatencyInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LatencyInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        LatencyInfoPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        LatencyInfoPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String trace_name;
  mojo::Array<LatencyComponentPairPtr> latency_components;
  mojo::Array<gfx::PointF> input_coordinates;
  int64_t trace_id;
  bool coalesced;
  bool terminated;
 private:
  DISALLOW_COPY_AND_ASSIGN(LatencyInfo);
};

class LatencyInfoDataView {
 public:
  LatencyInfoDataView() {}

  LatencyInfoDataView(
      internal::LatencyInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTraceNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadTraceName(UserType* output) {
    auto pointer = data_->trace_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetLatencyComponentsDataView(
      mojo::ArrayDataView<LatencyComponentPairDataView>* output);

  template <typename UserType>
  bool ReadLatencyComponents(UserType* output) {
    auto pointer = data_->latency_components.Get();
    return mojo::internal::Deserialize<mojo::Array<::ui::mojom::LatencyComponentPairPtr>>(
        pointer, output, context_);
  }
  inline void GetInputCoordinatesDataView(
      mojo::ArrayDataView<::gfx::mojom::PointFDataView>* output);

  template <typename UserType>
  bool ReadInputCoordinates(UserType* output) {
    auto pointer = data_->input_coordinates.Get();
    return mojo::internal::Deserialize<mojo::Array<::gfx::mojom::PointFPtr>>(
        pointer, output, context_);
  }
  int64_t trace_id() const {
    return data_->trace_id;
  }
  bool coalesced() const {
    return data_->coalesced;
  }
  bool terminated() const {
    return data_->terminated;
  }
 private:
  internal::LatencyInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::ui::mojom::LatencyInfoDataView> {
  using MojomType = ::ui::mojom::LatencyInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace ui {
namespace mojom {


template <typename StructPtrType>
LatencyComponentIdPtr LatencyComponentId::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->type = mojo::internal::Clone(type);
  rv->id = mojo::internal::Clone(id);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LatencyComponentId>::value>::type*>
bool LatencyComponentId::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  return true;
}


template <typename StructPtrType>
LatencyComponentPtr LatencyComponent::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->sequence_number = mojo::internal::Clone(sequence_number);
  rv->event_time = mojo::internal::Clone(event_time);
  rv->event_count = mojo::internal::Clone(event_count);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LatencyComponent>::value>::type*>
bool LatencyComponent::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->sequence_number, other.sequence_number))
    return false;
  if (!mojo::internal::Equals(this->event_time, other.event_time))
    return false;
  if (!mojo::internal::Equals(this->event_count, other.event_count))
    return false;
  return true;
}

inline void LatencyComponentDataView::GetEventTimeDataView(
    ::mojo::common::mojom::TimeTicksDataView* output) {
  auto pointer = data_->event_time.Get();
  *output = ::mojo::common::mojom::TimeTicksDataView(pointer, context_);
}

template <typename StructPtrType>
LatencyComponentPairPtr LatencyComponentPair::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->key = mojo::internal::Clone(key);
  rv->value = mojo::internal::Clone(value);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LatencyComponentPair>::value>::type*>
bool LatencyComponentPair::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->key, other.key))
    return false;
  if (!mojo::internal::Equals(this->value, other.value))
    return false;
  return true;
}

inline void LatencyComponentPairDataView::GetKeyDataView(
    LatencyComponentIdDataView* output) {
  auto pointer = data_->key.Get();
  *output = LatencyComponentIdDataView(pointer, context_);
}
inline void LatencyComponentPairDataView::GetValueDataView(
    LatencyComponentDataView* output) {
  auto pointer = data_->value.Get();
  *output = LatencyComponentDataView(pointer, context_);
}

template <typename StructPtrType>
LatencyInfoPtr LatencyInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->trace_name = mojo::internal::Clone(trace_name);
  rv->latency_components = mojo::internal::Clone(latency_components);
  rv->input_coordinates = mojo::internal::Clone(input_coordinates);
  rv->trace_id = mojo::internal::Clone(trace_id);
  rv->coalesced = mojo::internal::Clone(coalesced);
  rv->terminated = mojo::internal::Clone(terminated);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LatencyInfo>::value>::type*>
bool LatencyInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->trace_name, other.trace_name))
    return false;
  if (!mojo::internal::Equals(this->latency_components, other.latency_components))
    return false;
  if (!mojo::internal::Equals(this->input_coordinates, other.input_coordinates))
    return false;
  if (!mojo::internal::Equals(this->trace_id, other.trace_id))
    return false;
  if (!mojo::internal::Equals(this->coalesced, other.coalesced))
    return false;
  if (!mojo::internal::Equals(this->terminated, other.terminated))
    return false;
  return true;
}

inline void LatencyInfoDataView::GetTraceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->trace_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LatencyInfoDataView::GetLatencyComponentsDataView(
    mojo::ArrayDataView<LatencyComponentPairDataView>* output) {
  auto pointer = data_->latency_components.Get();
  *output = mojo::ArrayDataView<LatencyComponentPairDataView>(pointer, context_);
}
inline void LatencyInfoDataView::GetInputCoordinatesDataView(
    mojo::ArrayDataView<::gfx::mojom::PointFDataView>* output) {
  auto pointer = data_->input_coordinates.Get();
  *output = mojo::ArrayDataView<::gfx::mojom::PointFDataView>(pointer, context_);
}



}  // namespace mojom
}  // namespace ui

namespace mojo {


template <>
struct  StructTraits<::ui::mojom::LatencyComponentId, ::ui::mojom::LatencyComponentIdPtr> {
  static bool IsNull(const ::ui::mojom::LatencyComponentIdPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::LatencyComponentIdPtr* output) { output->reset(); }
  static decltype(::ui::mojom::LatencyComponentId::type) type(
      const ::ui::mojom::LatencyComponentIdPtr& input) {
    return input->type;
  }
  static decltype(::ui::mojom::LatencyComponentId::id) id(
      const ::ui::mojom::LatencyComponentIdPtr& input) {
    return input->id;
  }

  static bool Read(::ui::mojom::LatencyComponentIdDataView input, ::ui::mojom::LatencyComponentIdPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LatencyComponentIdPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::LatencyComponentId, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::LatencyComponentId_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::LatencyComponentId_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::LatencyComponentId_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      mojo::internal::Serialize<::ui::mojom::LatencyComponentType>(
          CallWithContext(Traits::type, input, custom_context), &result->type);
      result->id = CallWithContext(Traits::id, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::LatencyComponentId_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::LatencyComponentIdDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::LatencyComponent, ::ui::mojom::LatencyComponentPtr> {
  static bool IsNull(const ::ui::mojom::LatencyComponentPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::LatencyComponentPtr* output) { output->reset(); }
  static decltype(::ui::mojom::LatencyComponent::sequence_number) sequence_number(
      const ::ui::mojom::LatencyComponentPtr& input) {
    return input->sequence_number;
  }
  static decltype(::ui::mojom::LatencyComponent::event_time)& event_time(
      ::ui::mojom::LatencyComponentPtr& input) {
    return input->event_time;
  }
  static decltype(::ui::mojom::LatencyComponent::event_count) event_count(
      const ::ui::mojom::LatencyComponentPtr& input) {
    return input->event_count;
  }

  static bool Read(::ui::mojom::LatencyComponentDataView input, ::ui::mojom::LatencyComponentPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LatencyComponentPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::LatencyComponent, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::LatencyComponent_Data);
    decltype(CallWithContext(Traits::event_time, input, custom_context)) in_event_time = CallWithContext(Traits::event_time, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimeTicksPtr>(
        in_event_time, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::LatencyComponent_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::LatencyComponent_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->sequence_number = CallWithContext(Traits::sequence_number, input, custom_context);
      decltype(CallWithContext(Traits::event_time, input, custom_context)) in_event_time = CallWithContext(Traits::event_time, input, custom_context);
      typename decltype(result->event_time)::BaseType* event_time_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimeTicksPtr>(
          in_event_time, buffer, &event_time_ptr, context);
      result->event_time.Set(event_time_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->event_time.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null event_time in LatencyComponent struct");
      result->event_count = CallWithContext(Traits::event_count, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::LatencyComponent_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::LatencyComponentDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::LatencyComponentPair, ::ui::mojom::LatencyComponentPairPtr> {
  static bool IsNull(const ::ui::mojom::LatencyComponentPairPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::LatencyComponentPairPtr* output) { output->reset(); }
  static decltype(::ui::mojom::LatencyComponentPair::key)& key(
      ::ui::mojom::LatencyComponentPairPtr& input) {
    return input->key;
  }
  static decltype(::ui::mojom::LatencyComponentPair::value)& value(
      ::ui::mojom::LatencyComponentPairPtr& input) {
    return input->value;
  }

  static bool Read(::ui::mojom::LatencyComponentPairDataView input, ::ui::mojom::LatencyComponentPairPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LatencyComponentPairPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::LatencyComponentPair, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::LatencyComponentPair_Data);
    decltype(CallWithContext(Traits::key, input, custom_context)) in_key = CallWithContext(Traits::key, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::LatencyComponentIdPtr>(
        in_key, context);
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::ui::mojom::LatencyComponentPtr>(
        in_value, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::LatencyComponentPair_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::LatencyComponentPair_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::key, input, custom_context)) in_key = CallWithContext(Traits::key, input, custom_context);
      typename decltype(result->key)::BaseType* key_ptr;
      mojo::internal::Serialize<::ui::mojom::LatencyComponentIdPtr>(
          in_key, buffer, &key_ptr, context);
      result->key.Set(key_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->key.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null key in LatencyComponentPair struct");
      decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
      typename decltype(result->value)::BaseType* value_ptr;
      mojo::internal::Serialize<::ui::mojom::LatencyComponentPtr>(
          in_value, buffer, &value_ptr, context);
      result->value.Set(value_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->value.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null value in LatencyComponentPair struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::LatencyComponentPair_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::LatencyComponentPairDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::ui::mojom::LatencyInfo, ::ui::mojom::LatencyInfoPtr> {
  static bool IsNull(const ::ui::mojom::LatencyInfoPtr& input) { return !input; }
  static void SetToNull(::ui::mojom::LatencyInfoPtr* output) { output->reset(); }
  static decltype(::ui::mojom::LatencyInfo::trace_name)& trace_name(
      ::ui::mojom::LatencyInfoPtr& input) {
    return input->trace_name;
  }
  static decltype(::ui::mojom::LatencyInfo::latency_components)& latency_components(
      ::ui::mojom::LatencyInfoPtr& input) {
    return input->latency_components;
  }
  static decltype(::ui::mojom::LatencyInfo::input_coordinates)& input_coordinates(
      ::ui::mojom::LatencyInfoPtr& input) {
    return input->input_coordinates;
  }
  static decltype(::ui::mojom::LatencyInfo::trace_id) trace_id(
      const ::ui::mojom::LatencyInfoPtr& input) {
    return input->trace_id;
  }
  static decltype(::ui::mojom::LatencyInfo::coalesced) coalesced(
      const ::ui::mojom::LatencyInfoPtr& input) {
    return input->coalesced;
  }
  static decltype(::ui::mojom::LatencyInfo::terminated) terminated(
      const ::ui::mojom::LatencyInfoPtr& input) {
    return input->terminated;
  }

  static bool Read(::ui::mojom::LatencyInfoDataView input, ::ui::mojom::LatencyInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::LatencyInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ui::mojom::LatencyInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::ui::mojom::internal::LatencyInfo_Data);
    decltype(CallWithContext(Traits::trace_name, input, custom_context)) in_trace_name = CallWithContext(Traits::trace_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_trace_name, context);
    decltype(CallWithContext(Traits::latency_components, input, custom_context)) in_latency_components = CallWithContext(Traits::latency_components, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::ui::mojom::LatencyComponentPairPtr>>(
        in_latency_components, context);
    decltype(CallWithContext(Traits::input_coordinates, input, custom_context)) in_input_coordinates = CallWithContext(Traits::input_coordinates, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::gfx::mojom::PointFPtr>>(
        in_input_coordinates, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::ui::mojom::internal::LatencyInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::ui::mojom::internal::LatencyInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::trace_name, input, custom_context)) in_trace_name = CallWithContext(Traits::trace_name, input, custom_context);
      typename decltype(result->trace_name)::BaseType* trace_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_trace_name, buffer, &trace_name_ptr, context);
      result->trace_name.Set(trace_name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->trace_name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null trace_name in LatencyInfo struct");
      decltype(CallWithContext(Traits::latency_components, input, custom_context)) in_latency_components = CallWithContext(Traits::latency_components, input, custom_context);
      typename decltype(result->latency_components)::BaseType* latency_components_ptr;
      const mojo::internal::ContainerValidateParams latency_components_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::ui::mojom::LatencyComponentPairPtr>>(
          in_latency_components, buffer, &latency_components_ptr, &latency_components_validate_params,
          context);
      result->latency_components.Set(latency_components_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->latency_components.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null latency_components in LatencyInfo struct");
      decltype(CallWithContext(Traits::input_coordinates, input, custom_context)) in_input_coordinates = CallWithContext(Traits::input_coordinates, input, custom_context);
      typename decltype(result->input_coordinates)::BaseType* input_coordinates_ptr;
      const mojo::internal::ContainerValidateParams input_coordinates_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::gfx::mojom::PointFPtr>>(
          in_input_coordinates, buffer, &input_coordinates_ptr, &input_coordinates_validate_params,
          context);
      result->input_coordinates.Set(input_coordinates_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->input_coordinates.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null input_coordinates in LatencyInfo struct");
      result->trace_id = CallWithContext(Traits::trace_id, input, custom_context);
      result->coalesced = CallWithContext(Traits::coalesced, input, custom_context);
      result->terminated = CallWithContext(Traits::terminated, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::ui::mojom::internal::LatencyInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ui::mojom::LatencyInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // UI_EVENTS_MOJO_LATENCY_INFO_MOJOM_H_