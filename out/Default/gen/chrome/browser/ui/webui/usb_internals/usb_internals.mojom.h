// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_H_

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
#include "chrome/browser/ui/webui/usb_internals/usb_internals.mojom-shared.h"
#include "url/mojo/origin.mojom.h"
#include "url/mojo/url.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "url/gurl.h"
#include "url/origin.h"


namespace mojom {
class UsbInternalsPageHandler;
using UsbInternalsPageHandlerPtr = mojo::InterfacePtr<UsbInternalsPageHandler>;
using UsbInternalsPageHandlerPtrInfo = mojo::InterfacePtrInfo<UsbInternalsPageHandler>;
using UsbInternalsPageHandlerRequest = mojo::InterfaceRequest<UsbInternalsPageHandler>;
using UsbInternalsPageHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<UsbInternalsPageHandler>;
using UsbInternalsPageHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<UsbInternalsPageHandler>;
using UsbInternalsPageHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<UsbInternalsPageHandler>;

class TestDeviceInfo;
class TestDeviceInfoDataView;
using TestDeviceInfoPtr = mojo::StructPtr<TestDeviceInfo>;


class UsbInternalsPageHandlerProxy;
class UsbInternalsPageHandlerStub;

class UsbInternalsPageHandlerRequestValidator;
class UsbInternalsPageHandlerResponseValidator;

class  UsbInternalsPageHandler {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = UsbInternalsPageHandlerProxy;
  using Stub_ = UsbInternalsPageHandlerStub;

  using RequestValidator_ = UsbInternalsPageHandlerRequestValidator;
  using ResponseValidator_ = UsbInternalsPageHandlerResponseValidator;
  virtual ~UsbInternalsPageHandler() {}


  using AddDeviceForTestingCallback = base::Callback<void(bool, const std::string&)>;
  virtual void AddDeviceForTesting(const std::string& name, const std::string& serial_number, const std::string& landing_page, const std::string& allowed_origin, const AddDeviceForTestingCallback& callback) = 0;


  using RemoveDeviceForTestingCallback = base::Callback<void()>;
  virtual void RemoveDeviceForTesting(const std::string& guid, const RemoveDeviceForTestingCallback& callback) = 0;


  using GetTestDevicesCallback = base::Callback<void(std::vector<TestDeviceInfoPtr>)>;
  virtual void GetTestDevices(const GetTestDevicesCallback& callback) = 0;
};

class  UsbInternalsPageHandlerProxy
    : public UsbInternalsPageHandler,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit UsbInternalsPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void AddDeviceForTesting(const std::string& name, const std::string& serial_number, const std::string& landing_page, const std::string& allowed_origin, const AddDeviceForTestingCallback& callback) override;
  void RemoveDeviceForTesting(const std::string& guid, const RemoveDeviceForTestingCallback& callback) override;
  void GetTestDevices(const GetTestDevicesCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  UsbInternalsPageHandlerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  UsbInternalsPageHandlerStub();
  ~UsbInternalsPageHandlerStub() override;
  void set_sink(UsbInternalsPageHandler* sink) { sink_ = sink; }
  UsbInternalsPageHandler* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  UsbInternalsPageHandler* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  UsbInternalsPageHandlerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit UsbInternalsPageHandlerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  UsbInternalsPageHandlerResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit UsbInternalsPageHandlerResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class  TestDeviceInfo {
 public:
  using DataView = TestDeviceInfoDataView;
  using Data_ = internal::TestDeviceInfo_Data;

  static TestDeviceInfoPtr New();

  template <typename U>
  static TestDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<TestDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TestDeviceInfo>::Convert(*this);
  }

  TestDeviceInfo();
  ~TestDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TestDeviceInfoPtr>
  TestDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TestDeviceInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        TestDeviceInfoPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        TestDeviceInfoPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string guid;
  std::string name;
  std::string serial_number;
  GURL landing_page;
  url::Origin allowed_origin;
};

class TestDeviceInfoDataView {
 public:
  TestDeviceInfoDataView() {}

  TestDeviceInfoDataView(
      internal::TestDeviceInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadGuid(UserType* output) {
    auto pointer = data_->guid.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetSerialNumberDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSerialNumber(UserType* output) {
    auto pointer = data_->serial_number.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetLandingPageDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadLandingPage(UserType* output) {
    auto pointer = data_->landing_page.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetAllowedOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  bool ReadAllowedOrigin(UserType* output) {
    auto pointer = data_->allowed_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginPtr>(
        pointer, output, context_);
  }
 private:
  internal::TestDeviceInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojom::TestDeviceInfoDataView> {
  using MojomType = ::mojom::TestDeviceInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojom {


template <typename StructPtrType>
TestDeviceInfoPtr TestDeviceInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->guid = mojo::internal::Clone(guid);
  rv->name = mojo::internal::Clone(name);
  rv->serial_number = mojo::internal::Clone(serial_number);
  rv->landing_page = mojo::internal::Clone(landing_page);
  rv->allowed_origin = mojo::internal::Clone(allowed_origin);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TestDeviceInfo>::value>::type*>
bool TestDeviceInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->guid, other.guid))
    return false;
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->serial_number, other.serial_number))
    return false;
  if (!mojo::internal::Equals(this->landing_page, other.landing_page))
    return false;
  if (!mojo::internal::Equals(this->allowed_origin, other.allowed_origin))
    return false;
  return true;
}

inline void TestDeviceInfoDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TestDeviceInfoDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TestDeviceInfoDataView::GetSerialNumberDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->serial_number.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void TestDeviceInfoDataView::GetLandingPageDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->landing_page.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void TestDeviceInfoDataView::GetAllowedOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->allowed_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, context_);
}



}  // namespace mojom

namespace mojo {


template <>
struct  StructTraits<::mojom::TestDeviceInfo, ::mojom::TestDeviceInfoPtr> {
  static bool IsNull(const ::mojom::TestDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::mojom::TestDeviceInfoPtr* output) { output->reset(); }
  static decltype(::mojom::TestDeviceInfo::guid)& guid(
      ::mojom::TestDeviceInfoPtr& input) {
    return input->guid;
  }
  static decltype(::mojom::TestDeviceInfo::name)& name(
      ::mojom::TestDeviceInfoPtr& input) {
    return input->name;
  }
  static decltype(::mojom::TestDeviceInfo::serial_number)& serial_number(
      ::mojom::TestDeviceInfoPtr& input) {
    return input->serial_number;
  }
  static decltype(::mojom::TestDeviceInfo::landing_page)& landing_page(
      ::mojom::TestDeviceInfoPtr& input) {
    return input->landing_page;
  }
  static decltype(::mojom::TestDeviceInfo::allowed_origin)& allowed_origin(
      ::mojom::TestDeviceInfoPtr& input) {
    return input->allowed_origin;
  }

  static bool Read(::mojom::TestDeviceInfoDataView input, ::mojom::TestDeviceInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::TestDeviceInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::TestDeviceInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojom::internal::TestDeviceInfo_Data);
    decltype(CallWithContext(Traits::guid, input, custom_context)) in_guid = CallWithContext(Traits::guid, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_guid, context);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::serial_number, input, custom_context)) in_serial_number = CallWithContext(Traits::serial_number, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_serial_number, context);
    decltype(CallWithContext(Traits::landing_page, input, custom_context)) in_landing_page = CallWithContext(Traits::landing_page, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_landing_page, context);
    decltype(CallWithContext(Traits::allowed_origin, input, custom_context)) in_allowed_origin = CallWithContext(Traits::allowed_origin, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::OriginPtr>(
        in_allowed_origin, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::TestDeviceInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojom::internal::TestDeviceInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::guid, input, custom_context)) in_guid = CallWithContext(Traits::guid, input, custom_context);
      typename decltype(result->guid)::BaseType* guid_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_guid, buffer, &guid_ptr, context);
      result->guid.Set(guid_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->guid.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null guid in TestDeviceInfo struct");
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in TestDeviceInfo struct");
      decltype(CallWithContext(Traits::serial_number, input, custom_context)) in_serial_number = CallWithContext(Traits::serial_number, input, custom_context);
      typename decltype(result->serial_number)::BaseType* serial_number_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_serial_number, buffer, &serial_number_ptr, context);
      result->serial_number.Set(serial_number_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->serial_number.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null serial_number in TestDeviceInfo struct");
      decltype(CallWithContext(Traits::landing_page, input, custom_context)) in_landing_page = CallWithContext(Traits::landing_page, input, custom_context);
      typename decltype(result->landing_page)::BaseType* landing_page_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_landing_page, buffer, &landing_page_ptr, context);
      result->landing_page.Set(landing_page_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->landing_page.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null landing_page in TestDeviceInfo struct");
      decltype(CallWithContext(Traits::allowed_origin, input, custom_context)) in_allowed_origin = CallWithContext(Traits::allowed_origin, input, custom_context);
      typename decltype(result->allowed_origin)::BaseType* allowed_origin_ptr;
      mojo::internal::Serialize<::url::mojom::OriginPtr>(
          in_allowed_origin, buffer, &allowed_origin_ptr, context);
      result->allowed_origin.Set(allowed_origin_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->allowed_origin.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null allowed_origin in TestDeviceInfo struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::TestDeviceInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::TestDeviceInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_H_