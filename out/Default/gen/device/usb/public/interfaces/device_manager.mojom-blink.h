// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_USB_PUBLIC_INTERFACES_DEVICE_MANAGER_MOJOM_BLINK_H_
#define DEVICE_USB_PUBLIC_INTERFACES_DEVICE_MANAGER_MOJOM_BLINK_H_

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
#include "device/usb/public/interfaces/device_manager.mojom-shared.h"
#include "device/usb/public/interfaces/device.mojom-blink.h"
#include "mojo/public/cpp/bindings/wtf_array.h"
#include "mojo/public/cpp/bindings/wtf_map.h"
#include "third_party/WebKit/Source/wtf/Optional.h"
#include "third_party/WebKit/Source/wtf/text/WTFString.h"


namespace device {
namespace usb {
namespace blink {
class DeviceManager;
using DeviceManagerPtr = mojo::InterfacePtr<DeviceManager>;
using DeviceManagerPtrInfo = mojo::InterfacePtrInfo<DeviceManager>;
using DeviceManagerRequest = mojo::InterfaceRequest<DeviceManager>;
using DeviceManagerAssociatedPtr =
    mojo::AssociatedInterfacePtr<DeviceManager>;
using DeviceManagerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DeviceManager>;
using DeviceManagerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DeviceManager>;

class DeviceManagerClient;
using DeviceManagerClientPtr = mojo::InterfacePtr<DeviceManagerClient>;
using DeviceManagerClientPtrInfo = mojo::InterfacePtrInfo<DeviceManagerClient>;
using DeviceManagerClientRequest = mojo::InterfaceRequest<DeviceManagerClient>;
using DeviceManagerClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<DeviceManagerClient>;
using DeviceManagerClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DeviceManagerClient>;
using DeviceManagerClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DeviceManagerClient>;

class DeviceFilter;
class DeviceFilterDataView;
using DeviceFilterPtr = mojo::StructPtr<DeviceFilter>;

class EnumerationOptions;
class EnumerationOptionsDataView;
using EnumerationOptionsPtr = mojo::StructPtr<EnumerationOptions>;


class DeviceManagerProxy;
class DeviceManagerStub;

class DeviceManagerRequestValidator;
class DeviceManagerResponseValidator;

class  DeviceManager {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = DeviceManagerProxy;
  using Stub_ = DeviceManagerStub;

  using RequestValidator_ = DeviceManagerRequestValidator;
  using ResponseValidator_ = DeviceManagerResponseValidator;
  virtual ~DeviceManager() {}


  using GetDevicesCallback = base::Callback<void(WTF::Vector<::device::usb::blink::DeviceInfoPtr>)>;
  virtual void GetDevices(EnumerationOptionsPtr options, const GetDevicesCallback& callback) = 0;

  virtual void GetDevice(const WTF::String& guid, ::device::usb::blink::DeviceRequest device_request) = 0;

  virtual void SetClient(DeviceManagerClientPtr client) = 0;
};

class DeviceManagerClientProxy;
class DeviceManagerClientStub;

class DeviceManagerClientRequestValidator;

class  DeviceManagerClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = DeviceManagerClientProxy;
  using Stub_ = DeviceManagerClientStub;

  using RequestValidator_ = DeviceManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~DeviceManagerClient() {}

  virtual void OnDeviceAdded(::device::usb::blink::DeviceInfoPtr device_info) = 0;

  virtual void OnDeviceRemoved(::device::usb::blink::DeviceInfoPtr device_info) = 0;
};

class  DeviceManagerProxy
    : public DeviceManager,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit DeviceManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetDevices(EnumerationOptionsPtr options, const GetDevicesCallback& callback) override;
  void GetDevice(const WTF::String& guid, ::device::usb::blink::DeviceRequest device_request) override;
  void SetClient(DeviceManagerClientPtr client) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  DeviceManagerClientProxy
    : public DeviceManagerClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit DeviceManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnDeviceAdded(::device::usb::blink::DeviceInfoPtr device_info) override;
  void OnDeviceRemoved(::device::usb::blink::DeviceInfoPtr device_info) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  DeviceManagerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  DeviceManagerStub();
  ~DeviceManagerStub() override;
  void set_sink(DeviceManager* sink) { sink_ = sink; }
  DeviceManager* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  DeviceManager* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  DeviceManagerClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  DeviceManagerClientStub();
  ~DeviceManagerClientStub() override;
  void set_sink(DeviceManagerClient* sink) { sink_ = sink; }
  DeviceManagerClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  DeviceManagerClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  DeviceManagerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DeviceManagerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  DeviceManagerClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DeviceManagerClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  DeviceManagerResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DeviceManagerResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};






class  DeviceFilter {
 public:
  using DataView = DeviceFilterDataView;
  using Data_ = internal::DeviceFilter_Data;

  static DeviceFilterPtr New();

  template <typename U>
  static DeviceFilterPtr From(const U& u) {
    return mojo::TypeConverter<DeviceFilterPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DeviceFilter>::Convert(*this);
  }

  DeviceFilter();
  ~DeviceFilter();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DeviceFilterPtr>
  DeviceFilterPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, DeviceFilter>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        DeviceFilterPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        DeviceFilterPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  bool has_vendor_id;
  uint16_t vendor_id;
  bool has_product_id;
  uint16_t product_id;
  bool has_class_code;
  uint8_t class_code;
  bool has_subclass_code;
  uint8_t subclass_code;
  bool has_protocol_code;
  uint8_t protocol_code;
};

class DeviceFilterDataView {
 public:
  DeviceFilterDataView() {}

  DeviceFilterDataView(
      internal::DeviceFilter_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool has_vendor_id() const {
    return data_->has_vendor_id;
  }
  uint16_t vendor_id() const {
    return data_->vendor_id;
  }
  bool has_product_id() const {
    return data_->has_product_id;
  }
  uint16_t product_id() const {
    return data_->product_id;
  }
  bool has_class_code() const {
    return data_->has_class_code;
  }
  uint8_t class_code() const {
    return data_->class_code;
  }
  bool has_subclass_code() const {
    return data_->has_subclass_code;
  }
  uint8_t subclass_code() const {
    return data_->subclass_code;
  }
  bool has_protocol_code() const {
    return data_->has_protocol_code;
  }
  uint8_t protocol_code() const {
    return data_->protocol_code;
  }
 private:
  internal::DeviceFilter_Data* data_ = nullptr;
};



}  // namespace blink
}  // namespace usb
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::usb::blink::DeviceFilterDataView> {
  using MojomType = ::device::usb::blink::DeviceFilterPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace usb {
namespace blink {



class  EnumerationOptions {
 public:
  using DataView = EnumerationOptionsDataView;
  using Data_ = internal::EnumerationOptions_Data;

  static EnumerationOptionsPtr New();

  template <typename U>
  static EnumerationOptionsPtr From(const U& u) {
    return mojo::TypeConverter<EnumerationOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, EnumerationOptions>::Convert(*this);
  }

  EnumerationOptions();
  ~EnumerationOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EnumerationOptionsPtr>
  EnumerationOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, EnumerationOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        EnumerationOptionsPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        EnumerationOptionsPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  WTF::Optional<WTF::Vector<DeviceFilterPtr>> filters;
 private:
  DISALLOW_COPY_AND_ASSIGN(EnumerationOptions);
};

class EnumerationOptionsDataView {
 public:
  EnumerationOptionsDataView() {}

  EnumerationOptionsDataView(
      internal::EnumerationOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFiltersDataView(
      mojo::ArrayDataView<DeviceFilterDataView>* output);

  template <typename UserType>
  bool ReadFilters(UserType* output) {
    auto pointer = data_->filters.Get();
    return mojo::internal::Deserialize<mojo::Array<::device::usb::blink::DeviceFilterPtr>>(
        pointer, output, context_);
  }
 private:
  internal::EnumerationOptions_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace usb
}  // namespace device

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::device::usb::blink::EnumerationOptionsDataView> {
  using MojomType = ::device::usb::blink::EnumerationOptionsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace device {
namespace usb {
namespace blink {


template <typename StructPtrType>
DeviceFilterPtr DeviceFilter::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->has_vendor_id = mojo::internal::Clone(has_vendor_id);
  rv->vendor_id = mojo::internal::Clone(vendor_id);
  rv->has_product_id = mojo::internal::Clone(has_product_id);
  rv->product_id = mojo::internal::Clone(product_id);
  rv->has_class_code = mojo::internal::Clone(has_class_code);
  rv->class_code = mojo::internal::Clone(class_code);
  rv->has_subclass_code = mojo::internal::Clone(has_subclass_code);
  rv->subclass_code = mojo::internal::Clone(subclass_code);
  rv->has_protocol_code = mojo::internal::Clone(has_protocol_code);
  rv->protocol_code = mojo::internal::Clone(protocol_code);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, DeviceFilter>::value>::type*>
bool DeviceFilter::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->has_vendor_id, other.has_vendor_id))
    return false;
  if (!mojo::internal::Equals(this->vendor_id, other.vendor_id))
    return false;
  if (!mojo::internal::Equals(this->has_product_id, other.has_product_id))
    return false;
  if (!mojo::internal::Equals(this->product_id, other.product_id))
    return false;
  if (!mojo::internal::Equals(this->has_class_code, other.has_class_code))
    return false;
  if (!mojo::internal::Equals(this->class_code, other.class_code))
    return false;
  if (!mojo::internal::Equals(this->has_subclass_code, other.has_subclass_code))
    return false;
  if (!mojo::internal::Equals(this->subclass_code, other.subclass_code))
    return false;
  if (!mojo::internal::Equals(this->has_protocol_code, other.has_protocol_code))
    return false;
  if (!mojo::internal::Equals(this->protocol_code, other.protocol_code))
    return false;
  return true;
}


template <typename StructPtrType>
EnumerationOptionsPtr EnumerationOptions::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->filters = mojo::internal::Clone(filters);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, EnumerationOptions>::value>::type*>
bool EnumerationOptions::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->filters, other.filters))
    return false;
  return true;
}

inline void EnumerationOptionsDataView::GetFiltersDataView(
    mojo::ArrayDataView<DeviceFilterDataView>* output) {
  auto pointer = data_->filters.Get();
  *output = mojo::ArrayDataView<DeviceFilterDataView>(pointer, context_);
}



}  // namespace blink
}  // namespace usb
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::usb::blink::DeviceFilter, ::device::usb::blink::DeviceFilterPtr> {
  static bool IsNull(const ::device::usb::blink::DeviceFilterPtr& input) { return !input; }
  static void SetToNull(::device::usb::blink::DeviceFilterPtr* output) { output->reset(); }
  static decltype(::device::usb::blink::DeviceFilter::has_vendor_id) has_vendor_id(
      const ::device::usb::blink::DeviceFilterPtr& input) {
    return input->has_vendor_id;
  }
  static decltype(::device::usb::blink::DeviceFilter::vendor_id) vendor_id(
      const ::device::usb::blink::DeviceFilterPtr& input) {
    return input->vendor_id;
  }
  static decltype(::device::usb::blink::DeviceFilter::has_product_id) has_product_id(
      const ::device::usb::blink::DeviceFilterPtr& input) {
    return input->has_product_id;
  }
  static decltype(::device::usb::blink::DeviceFilter::product_id) product_id(
      const ::device::usb::blink::DeviceFilterPtr& input) {
    return input->product_id;
  }
  static decltype(::device::usb::blink::DeviceFilter::has_class_code) has_class_code(
      const ::device::usb::blink::DeviceFilterPtr& input) {
    return input->has_class_code;
  }
  static decltype(::device::usb::blink::DeviceFilter::class_code) class_code(
      const ::device::usb::blink::DeviceFilterPtr& input) {
    return input->class_code;
  }
  static decltype(::device::usb::blink::DeviceFilter::has_subclass_code) has_subclass_code(
      const ::device::usb::blink::DeviceFilterPtr& input) {
    return input->has_subclass_code;
  }
  static decltype(::device::usb::blink::DeviceFilter::subclass_code) subclass_code(
      const ::device::usb::blink::DeviceFilterPtr& input) {
    return input->subclass_code;
  }
  static decltype(::device::usb::blink::DeviceFilter::has_protocol_code) has_protocol_code(
      const ::device::usb::blink::DeviceFilterPtr& input) {
    return input->has_protocol_code;
  }
  static decltype(::device::usb::blink::DeviceFilter::protocol_code) protocol_code(
      const ::device::usb::blink::DeviceFilterPtr& input) {
    return input->protocol_code;
  }

  static bool Read(::device::usb::blink::DeviceFilterDataView input, ::device::usb::blink::DeviceFilterPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::blink::DeviceFilterPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::usb::blink::DeviceFilter, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::usb::internal::DeviceFilter_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::usb::internal::DeviceFilter_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::usb::internal::DeviceFilter_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->has_vendor_id = CallWithContext(Traits::has_vendor_id, input, custom_context);
      result->vendor_id = CallWithContext(Traits::vendor_id, input, custom_context);
      result->has_product_id = CallWithContext(Traits::has_product_id, input, custom_context);
      result->product_id = CallWithContext(Traits::product_id, input, custom_context);
      result->has_class_code = CallWithContext(Traits::has_class_code, input, custom_context);
      result->class_code = CallWithContext(Traits::class_code, input, custom_context);
      result->has_subclass_code = CallWithContext(Traits::has_subclass_code, input, custom_context);
      result->subclass_code = CallWithContext(Traits::subclass_code, input, custom_context);
      result->has_protocol_code = CallWithContext(Traits::has_protocol_code, input, custom_context);
      result->protocol_code = CallWithContext(Traits::protocol_code, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::usb::internal::DeviceFilter_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::usb::blink::DeviceFilterDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::device::usb::blink::EnumerationOptions, ::device::usb::blink::EnumerationOptionsPtr> {
  static bool IsNull(const ::device::usb::blink::EnumerationOptionsPtr& input) { return !input; }
  static void SetToNull(::device::usb::blink::EnumerationOptionsPtr* output) { output->reset(); }
  static decltype(::device::usb::blink::EnumerationOptions::filters)& filters(
      ::device::usb::blink::EnumerationOptionsPtr& input) {
    return input->filters;
  }

  static bool Read(::device::usb::blink::EnumerationOptionsDataView input, ::device::usb::blink::EnumerationOptionsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::device::usb::blink::EnumerationOptionsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::device::usb::blink::EnumerationOptions, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::device::usb::internal::EnumerationOptions_Data);
    decltype(CallWithContext(Traits::filters, input, custom_context)) in_filters = CallWithContext(Traits::filters, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::device::usb::blink::DeviceFilterPtr>>(
        in_filters, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::device::usb::internal::EnumerationOptions_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::device::usb::internal::EnumerationOptions_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::filters, input, custom_context)) in_filters = CallWithContext(Traits::filters, input, custom_context);
      typename decltype(result->filters)::BaseType* filters_ptr;
      const mojo::internal::ContainerValidateParams filters_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::device::usb::blink::DeviceFilterPtr>>(
          in_filters, buffer, &filters_ptr, &filters_validate_params,
          context);
      result->filters.Set(filters_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::device::usb::internal::EnumerationOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::device::usb::blink::EnumerationOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // DEVICE_USB_PUBLIC_INTERFACES_DEVICE_MANAGER_MOJOM_BLINK_H_