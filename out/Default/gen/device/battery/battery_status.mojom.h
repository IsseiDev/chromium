// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BATTERY_BATTERY_STATUS_MOJOM_H_
#define DEVICE_BATTERY_BATTERY_STATUS_MOJOM_H_

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
#include "device/battery/battery_status.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace device {
class BatteryStatus;
class BatteryStatusDataView;
using BatteryStatusPtr = mojo::InlinedStructPtr<BatteryStatus>;



class  BatteryStatus {
 public:
  using DataView = BatteryStatusDataView;
  using Data_ = internal::BatteryStatus_Data;

  static BatteryStatusPtr New();

  template <typename U>
  static BatteryStatusPtr From(const U& u) {
    return mojo::TypeConverter<BatteryStatusPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BatteryStatus>::Convert(*this);
  }

  BatteryStatus();
  ~BatteryStatus();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BatteryStatusPtr>
  BatteryStatusPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BatteryStatus>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        BatteryStatusPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        BatteryStatusPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  bool charging;
  double charging_time;
  double discharging_time;
  double level;
};

class BatteryStatusDataView {
 public:
  BatteryStatusDataView() {}

  BatteryStatusDataView(
      internal::BatteryStatus_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool charging() const {
    return data_->charging;
  }
  double charging_time() const {
    return data_->charging_time;
  }
  double discharging_time() const {
    return data_->discharging_time;
  }
  double level() const {
    return data_->level;
  }
 private:
  internal::BatteryStatus_Data* data_ = nullptr;
};



}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::BatteryStatusDataView> {
  using MojomType = ::device::BatteryStatusPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {





template <typename StructPtrType>
BatteryStatusPtr BatteryStatus::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->charging = mojo::internal::Clone(charging);
  rv->charging_time = mojo::internal::Clone(charging_time);
  rv->discharging_time = mojo::internal::Clone(discharging_time);
  rv->level = mojo::internal::Clone(level);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BatteryStatus>::value>::type*>
bool BatteryStatus::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->charging, other.charging))
    return false;
  if (!mojo::internal::Equals(this->charging_time, other.charging_time))
    return false;
  if (!mojo::internal::Equals(this->discharging_time, other.discharging_time))
    return false;
  if (!mojo::internal::Equals(this->level, other.level))
    return false;
  return true;
}




}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::BatteryStatus, ::device::BatteryStatusPtr> {
  static bool IsNull(const ::device::BatteryStatusPtr& input) { return !input; }
  static void SetToNull(::device::BatteryStatusPtr* output) { output->reset(); }
  static decltype(::device::BatteryStatus::charging) charging(
      const ::device::BatteryStatusPtr& input) {
    return input->charging;
  }
  static decltype(::device::BatteryStatus::charging_time) charging_time(
      const ::device::BatteryStatusPtr& input) {
    return input->charging_time;
  }
  static decltype(::device::BatteryStatus::discharging_time) discharging_time(
      const ::device::BatteryStatusPtr& input) {
    return input->discharging_time;
  }
  static decltype(::device::BatteryStatus::level) level(
      const ::device::BatteryStatusPtr& input) {
    return input->level;
  }

  static bool Read(::device::BatteryStatusDataView input, ::device::BatteryStatusPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::BatteryStatusPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::BatteryStatus, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::internal::BatteryStatus_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::internal::BatteryStatus_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::internal::BatteryStatus_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->charging = CallWithContext(Traits::charging, input, custom_context);
      result->charging_time = CallWithContext(Traits::charging_time, input, custom_context);
      result->discharging_time = CallWithContext(Traits::discharging_time, input, custom_context);
      result->level = CallWithContext(Traits::level, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::internal::BatteryStatus_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::BatteryStatusDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // DEVICE_BATTERY_BATTERY_STATUS_MOJOM_H_