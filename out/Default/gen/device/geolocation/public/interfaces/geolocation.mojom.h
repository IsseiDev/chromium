// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GEOLOCATION_PUBLIC_INTERFACES_GEOLOCATION_MOJOM_H_
#define DEVICE_GEOLOCATION_PUBLIC_INTERFACES_GEOLOCATION_MOJOM_H_

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
#include "device/geolocation/public/interfaces/geolocation.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace device {
namespace mojom {
class GeolocationService;
using GeolocationServicePtr = mojo::InterfacePtr<GeolocationService>;
using GeolocationServicePtrInfo = mojo::InterfacePtrInfo<GeolocationService>;
using GeolocationServiceRequest = mojo::InterfaceRequest<GeolocationService>;
using GeolocationServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<GeolocationService>;
using GeolocationServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<GeolocationService>;
using GeolocationServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<GeolocationService>;

class Geoposition;
class GeopositionDataView;
using GeopositionPtr = mojo::StructPtr<Geoposition>;


class GeolocationServiceProxy;
class GeolocationServiceStub;

class GeolocationServiceRequestValidator;
class GeolocationServiceResponseValidator;

class  GeolocationService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = GeolocationServiceProxy;
  using Stub_ = GeolocationServiceStub;

  using RequestValidator_ = GeolocationServiceRequestValidator;
  using ResponseValidator_ = GeolocationServiceResponseValidator;
  virtual ~GeolocationService() {}

  virtual void SetHighAccuracy(bool high_accuracy) = 0;


  using QueryNextPositionCallback = base::Callback<void(GeopositionPtr)>;
  virtual void QueryNextPosition(const QueryNextPositionCallback& callback) = 0;
};

class  GeolocationServiceProxy
    : public GeolocationService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit GeolocationServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetHighAccuracy(bool high_accuracy) override;
  void QueryNextPosition(const QueryNextPositionCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  GeolocationServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  GeolocationServiceStub();
  ~GeolocationServiceStub() override;
  void set_sink(GeolocationService* sink) { sink_ = sink; }
  GeolocationService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  GeolocationService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  GeolocationServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit GeolocationServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  GeolocationServiceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit GeolocationServiceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class  Geoposition {
 public:
  using DataView = GeopositionDataView;
  using Data_ = internal::Geoposition_Data;using ErrorCode = Geoposition_ErrorCode;

  static GeopositionPtr New();

  template <typename U>
  static GeopositionPtr From(const U& u) {
    return mojo::TypeConverter<GeopositionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Geoposition>::Convert(*this);
  }

  Geoposition();
  ~Geoposition();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GeopositionPtr>
  GeopositionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Geoposition>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        GeopositionPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        GeopositionPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  bool valid;
  double latitude;
  double longitude;
  double altitude;
  double accuracy;
  double altitude_accuracy;
  double heading;
  double speed;
  double timestamp;
  Geoposition::ErrorCode error_code;
  std::string error_message;
};

class GeopositionDataView {
 public:
  GeopositionDataView() {}

  GeopositionDataView(
      internal::Geoposition_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool valid() const {
    return data_->valid;
  }
  double latitude() const {
    return data_->latitude;
  }
  double longitude() const {
    return data_->longitude;
  }
  double altitude() const {
    return data_->altitude;
  }
  double accuracy() const {
    return data_->accuracy;
  }
  double altitude_accuracy() const {
    return data_->altitude_accuracy;
  }
  double heading() const {
    return data_->heading;
  }
  double speed() const {
    return data_->speed;
  }
  double timestamp() const {
    return data_->timestamp;
  }
  template <typename UserType>
  bool ReadErrorCode(UserType* output) const {
    auto data_value = data_->error_code;
    return mojo::internal::Deserialize<::device::mojom::Geoposition::ErrorCode>(
        data_value, output);
  }

  ::device::mojom::Geoposition::ErrorCode error_code() const {
    return static_cast<::device::mojom::Geoposition::ErrorCode>(data_->error_code);
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadErrorMessage(UserType* output) {
    auto pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::Geoposition_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::mojom::GeopositionDataView> {
  using MojomType = ::device::mojom::GeopositionPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace mojom {


template <typename StructPtrType>
GeopositionPtr Geoposition::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->valid = mojo::internal::Clone(valid);
  rv->latitude = mojo::internal::Clone(latitude);
  rv->longitude = mojo::internal::Clone(longitude);
  rv->altitude = mojo::internal::Clone(altitude);
  rv->accuracy = mojo::internal::Clone(accuracy);
  rv->altitude_accuracy = mojo::internal::Clone(altitude_accuracy);
  rv->heading = mojo::internal::Clone(heading);
  rv->speed = mojo::internal::Clone(speed);
  rv->timestamp = mojo::internal::Clone(timestamp);
  rv->error_code = mojo::internal::Clone(error_code);
  rv->error_message = mojo::internal::Clone(error_message);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Geoposition>::value>::type*>
bool Geoposition::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->valid, other.valid))
    return false;
  if (!mojo::internal::Equals(this->latitude, other.latitude))
    return false;
  if (!mojo::internal::Equals(this->longitude, other.longitude))
    return false;
  if (!mojo::internal::Equals(this->altitude, other.altitude))
    return false;
  if (!mojo::internal::Equals(this->accuracy, other.accuracy))
    return false;
  if (!mojo::internal::Equals(this->altitude_accuracy, other.altitude_accuracy))
    return false;
  if (!mojo::internal::Equals(this->heading, other.heading))
    return false;
  if (!mojo::internal::Equals(this->speed, other.speed))
    return false;
  if (!mojo::internal::Equals(this->timestamp, other.timestamp))
    return false;
  if (!mojo::internal::Equals(this->error_code, other.error_code))
    return false;
  if (!mojo::internal::Equals(this->error_message, other.error_message))
    return false;
  return true;
}

inline void GeopositionDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::Geoposition, ::device::mojom::GeopositionPtr> {
  static bool IsNull(const ::device::mojom::GeopositionPtr& input) { return !input; }
  static void SetToNull(::device::mojom::GeopositionPtr* output) { output->reset(); }
  static decltype(::device::mojom::Geoposition::valid) valid(
      const ::device::mojom::GeopositionPtr& input) {
    return input->valid;
  }
  static decltype(::device::mojom::Geoposition::latitude) latitude(
      const ::device::mojom::GeopositionPtr& input) {
    return input->latitude;
  }
  static decltype(::device::mojom::Geoposition::longitude) longitude(
      const ::device::mojom::GeopositionPtr& input) {
    return input->longitude;
  }
  static decltype(::device::mojom::Geoposition::altitude) altitude(
      const ::device::mojom::GeopositionPtr& input) {
    return input->altitude;
  }
  static decltype(::device::mojom::Geoposition::accuracy) accuracy(
      const ::device::mojom::GeopositionPtr& input) {
    return input->accuracy;
  }
  static decltype(::device::mojom::Geoposition::altitude_accuracy) altitude_accuracy(
      const ::device::mojom::GeopositionPtr& input) {
    return input->altitude_accuracy;
  }
  static decltype(::device::mojom::Geoposition::heading) heading(
      const ::device::mojom::GeopositionPtr& input) {
    return input->heading;
  }
  static decltype(::device::mojom::Geoposition::speed) speed(
      const ::device::mojom::GeopositionPtr& input) {
    return input->speed;
  }
  static decltype(::device::mojom::Geoposition::timestamp) timestamp(
      const ::device::mojom::GeopositionPtr& input) {
    return input->timestamp;
  }
  static decltype(::device::mojom::Geoposition::error_code) error_code(
      const ::device::mojom::GeopositionPtr& input) {
    return input->error_code;
  }
  static decltype(::device::mojom::Geoposition::error_message)& error_message(
      ::device::mojom::GeopositionPtr& input) {
    return input->error_message;
  }

  static bool Read(::device::mojom::GeopositionDataView input, ::device::mojom::GeopositionPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::mojom::GeopositionPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::mojom::Geoposition, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::mojom::internal::Geoposition_Data);
    decltype(CallWithContext(Traits::error_message, input, custom_context)) in_error_message = CallWithContext(Traits::error_message, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_error_message, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::mojom::internal::Geoposition_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::mojom::internal::Geoposition_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->valid = CallWithContext(Traits::valid, input, custom_context);
      result->latitude = CallWithContext(Traits::latitude, input, custom_context);
      result->longitude = CallWithContext(Traits::longitude, input, custom_context);
      result->altitude = CallWithContext(Traits::altitude, input, custom_context);
      result->accuracy = CallWithContext(Traits::accuracy, input, custom_context);
      result->altitude_accuracy = CallWithContext(Traits::altitude_accuracy, input, custom_context);
      result->heading = CallWithContext(Traits::heading, input, custom_context);
      result->speed = CallWithContext(Traits::speed, input, custom_context);
      result->timestamp = CallWithContext(Traits::timestamp, input, custom_context);
      mojo::internal::Serialize<::device::mojom::Geoposition::ErrorCode>(
          CallWithContext(Traits::error_code, input, custom_context), &result->error_code);
      decltype(CallWithContext(Traits::error_message, input, custom_context)) in_error_message = CallWithContext(Traits::error_message, input, custom_context);
      typename decltype(result->error_message)::BaseType* error_message_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_error_message, buffer, &error_message_ptr, context);
      result->error_message.Set(error_message_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->error_message.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null error_message in Geoposition struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::mojom::internal::Geoposition_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::mojom::GeopositionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // DEVICE_GEOLOCATION_PUBLIC_INTERFACES_GEOLOCATION_MOJOM_H_