// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_BLUETOOTH_PUBLIC_INTERFACES_BLUETOOTH_UUID_MOJOM_H_
#define DEVICE_BLUETOOTH_PUBLIC_INTERFACES_BLUETOOTH_UUID_MOJOM_H_

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
#include "device/bluetooth/public/interfaces/bluetooth_uuid.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "device/bluetooth/bluetooth_uuid.h"
#include "base/optional.h"


namespace device {
namespace mojom {
class BluetoothUUID;
class BluetoothUUIDDataView;
using BluetoothUUIDPtr = mojo::InlinedStructPtr<BluetoothUUID>;



class  BluetoothUUID {
 public:
  using DataView = BluetoothUUIDDataView;
  using Data_ = internal::BluetoothUUID_Data;

  static BluetoothUUIDPtr New();

  template <typename U>
  static BluetoothUUIDPtr From(const U& u) {
    return mojo::TypeConverter<BluetoothUUIDPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BluetoothUUID>::Convert(*this);
  }

  BluetoothUUID();
  ~BluetoothUUID();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BluetoothUUIDPtr>
  BluetoothUUIDPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, BluetoothUUID>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        BluetoothUUIDPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        BluetoothUUIDPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String uuid;
};

class BluetoothUUIDDataView {
 public:
  BluetoothUUIDDataView() {}

  BluetoothUUIDDataView(
      internal::BluetoothUUID_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetUuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUuid(UserType* output) {
    auto pointer = data_->uuid.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::BluetoothUUID_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::mojom::BluetoothUUIDDataView> {
  using MojomType = ::device::mojom::BluetoothUUIDPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace mojom {





template <typename StructPtrType>
BluetoothUUIDPtr BluetoothUUID::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->uuid = mojo::internal::Clone(uuid);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, BluetoothUUID>::value>::type*>
bool BluetoothUUID::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->uuid, other.uuid))
    return false;
  return true;
}

inline void BluetoothUUIDDataView::GetUuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->uuid.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::BluetoothUUID, ::device::mojom::BluetoothUUIDPtr> {
  static bool IsNull(const ::device::mojom::BluetoothUUIDPtr& input) { return !input; }
  static void SetToNull(::device::mojom::BluetoothUUIDPtr* output) { output->reset(); }
  static decltype(::device::mojom::BluetoothUUID::uuid)& uuid(
      ::device::mojom::BluetoothUUIDPtr& input) {
    return input->uuid;
  }

  static bool Read(::device::mojom::BluetoothUUIDDataView input, ::device::mojom::BluetoothUUIDPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::BluetoothUUIDPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::BluetoothUUID, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::mojom::internal::BluetoothUUID_Data);
    decltype(CallWithContext(Traits::uuid, input, custom_context)) in_uuid = CallWithContext(Traits::uuid, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_uuid, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::BluetoothUUID_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::mojom::internal::BluetoothUUID_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::uuid, input, custom_context)) in_uuid = CallWithContext(Traits::uuid, input, custom_context);
      typename decltype(result->uuid)::BaseType* uuid_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_uuid, buffer, &uuid_ptr, context);
      result->uuid.Set(uuid_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->uuid.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null uuid in BluetoothUUID struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::BluetoothUUID_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::BluetoothUUIDDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // DEVICE_BLUETOOTH_PUBLIC_INTERFACES_BLUETOOTH_UUID_MOJOM_H_