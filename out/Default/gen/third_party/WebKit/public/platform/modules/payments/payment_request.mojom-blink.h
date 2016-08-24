// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_BLINK_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_BLINK_H_

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
#include "third_party/WebKit/public/platform/modules/payments/payment_request.mojom-shared.h"
#include "mojo/public/cpp/bindings/wtf_array.h"
#include "mojo/public/cpp/bindings/wtf_map.h"
#include "third_party/WebKit/Source/wtf/Optional.h"
#include "third_party/WebKit/Source/wtf/text/WTFString.h"
#include "third_party/WebKit/public/platform/WebCommon.h"


namespace blink {
namespace mojom {
namespace blink {
using PaymentErrorReason = PaymentErrorReason;  // Alias for definition in the parent namespace.
using PaymentComplete = PaymentComplete;  // Alias for definition in the parent namespace.
class PaymentRequestClient;
using PaymentRequestClientPtr = mojo::InterfacePtr<PaymentRequestClient>;
using PaymentRequestClientPtrInfo = mojo::InterfacePtrInfo<PaymentRequestClient>;
using PaymentRequestClientRequest = mojo::InterfaceRequest<PaymentRequestClient>;
using PaymentRequestClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<PaymentRequestClient>;
using PaymentRequestClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PaymentRequestClient>;
using PaymentRequestClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PaymentRequestClient>;

class PaymentRequest;
using PaymentRequestPtr = mojo::InterfacePtr<PaymentRequest>;
using PaymentRequestPtrInfo = mojo::InterfacePtrInfo<PaymentRequest>;
using PaymentRequestRequest = mojo::InterfaceRequest<PaymentRequest>;
using PaymentRequestAssociatedPtr =
    mojo::AssociatedInterfacePtr<PaymentRequest>;
using PaymentRequestAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<PaymentRequest>;
using PaymentRequestAssociatedRequest =
    mojo::AssociatedInterfaceRequest<PaymentRequest>;

class PaymentAddress;
class PaymentAddressDataView;
using PaymentAddressPtr = mojo::StructPtr<PaymentAddress>;

class PaymentCurrencyAmount;
class PaymentCurrencyAmountDataView;
using PaymentCurrencyAmountPtr = mojo::InlinedStructPtr<PaymentCurrencyAmount>;

class PaymentResponse;
class PaymentResponseDataView;
using PaymentResponsePtr = mojo::StructPtr<PaymentResponse>;

class PaymentItem;
class PaymentItemDataView;
using PaymentItemPtr = mojo::StructPtr<PaymentItem>;

class PaymentShippingOption;
class PaymentShippingOptionDataView;
using PaymentShippingOptionPtr = mojo::StructPtr<PaymentShippingOption>;

class PaymentDetailsModifier;
class PaymentDetailsModifierDataView;
using PaymentDetailsModifierPtr = mojo::StructPtr<PaymentDetailsModifier>;

class PaymentDetails;
class PaymentDetailsDataView;
using PaymentDetailsPtr = mojo::StructPtr<PaymentDetails>;

class PaymentOptions;
class PaymentOptionsDataView;
using PaymentOptionsPtr = mojo::InlinedStructPtr<PaymentOptions>;

class PaymentMethodData;
class PaymentMethodDataDataView;
using PaymentMethodDataPtr = mojo::StructPtr<PaymentMethodData>;


class PaymentRequestClientProxy;
class PaymentRequestClientStub;

class PaymentRequestClientRequestValidator;

class BLINK_PLATFORM_EXPORT PaymentRequestClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = PaymentRequestClientProxy;
  using Stub_ = PaymentRequestClientStub;

  using RequestValidator_ = PaymentRequestClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~PaymentRequestClient() {}

  virtual void OnShippingAddressChange(PaymentAddressPtr address) = 0;

  virtual void OnShippingOptionChange(const WTF::String& shipping_option_id) = 0;

  virtual void OnPaymentResponse(PaymentResponsePtr response) = 0;

  virtual void OnError(PaymentErrorReason error) = 0;

  virtual void OnComplete() = 0;

  virtual void OnAbort(bool aborted_successfully) = 0;
};

class PaymentRequestProxy;
class PaymentRequestStub;

class PaymentRequestRequestValidator;

class BLINK_PLATFORM_EXPORT PaymentRequest {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = PaymentRequestProxy;
  using Stub_ = PaymentRequestStub;

  using RequestValidator_ = PaymentRequestRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~PaymentRequest() {}

  virtual void SetClient(PaymentRequestClientPtr client) = 0;

  virtual void Show(mojo::WTFArray<PaymentMethodDataPtr> methodData, PaymentDetailsPtr details, PaymentOptionsPtr options) = 0;

  virtual void UpdateWith(PaymentDetailsPtr details) = 0;

  virtual void Abort() = 0;

  virtual void Complete(PaymentComplete result) = 0;
};

class BLINK_PLATFORM_EXPORT PaymentRequestClientProxy
    : public PaymentRequestClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit PaymentRequestClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnShippingAddressChange(PaymentAddressPtr address) override;
  void OnShippingOptionChange(const WTF::String& shipping_option_id) override;
  void OnPaymentResponse(PaymentResponsePtr response) override;
  void OnError(PaymentErrorReason error) override;
  void OnComplete() override;
  void OnAbort(bool aborted_successfully) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class BLINK_PLATFORM_EXPORT PaymentRequestProxy
    : public PaymentRequest,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit PaymentRequestProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClient(PaymentRequestClientPtr client) override;
  void Show(mojo::WTFArray<PaymentMethodDataPtr> methodData, PaymentDetailsPtr details, PaymentOptionsPtr options) override;
  void UpdateWith(PaymentDetailsPtr details) override;
  void Abort() override;
  void Complete(PaymentComplete result) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class BLINK_PLATFORM_EXPORT PaymentRequestClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  PaymentRequestClientStub();
  ~PaymentRequestClientStub() override;
  void set_sink(PaymentRequestClient* sink) { sink_ = sink; }
  PaymentRequestClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PaymentRequestClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BLINK_PLATFORM_EXPORT PaymentRequestStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  PaymentRequestStub();
  ~PaymentRequestStub() override;
  void set_sink(PaymentRequest* sink) { sink_ = sink; }
  PaymentRequest* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  PaymentRequest* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BLINK_PLATFORM_EXPORT PaymentRequestClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PaymentRequestClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT PaymentRequestRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PaymentRequestRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};



class BLINK_PLATFORM_EXPORT PaymentCurrencyAmount {
 public:
  using DataView = PaymentCurrencyAmountDataView;
  using Data_ = internal::PaymentCurrencyAmount_Data;

  static PaymentCurrencyAmountPtr New();

  template <typename U>
  static PaymentCurrencyAmountPtr From(const U& u) {
    return mojo::TypeConverter<PaymentCurrencyAmountPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentCurrencyAmount>::Convert(*this);
  }

  PaymentCurrencyAmount();
  ~PaymentCurrencyAmount();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentCurrencyAmountPtr>
  PaymentCurrencyAmountPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentCurrencyAmount>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PaymentCurrencyAmountPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PaymentCurrencyAmountPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  WTF::String currency;
  WTF::String value;
};

class PaymentCurrencyAmountDataView {
 public:
  PaymentCurrencyAmountDataView() {}

  PaymentCurrencyAmountDataView(
      internal::PaymentCurrencyAmount_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCurrencyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCurrency(UserType* output) {
    auto pointer = data_->currency.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadValue(UserType* output) {
    auto pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PaymentCurrencyAmount_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::PaymentCurrencyAmountDataView> {
  using MojomType = ::blink::mojom::blink::PaymentCurrencyAmountPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {








class BLINK_PLATFORM_EXPORT PaymentOptions {
 public:
  using DataView = PaymentOptionsDataView;
  using Data_ = internal::PaymentOptions_Data;

  static PaymentOptionsPtr New();

  template <typename U>
  static PaymentOptionsPtr From(const U& u) {
    return mojo::TypeConverter<PaymentOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentOptions>::Convert(*this);
  }

  PaymentOptions();
  ~PaymentOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentOptionsPtr>
  PaymentOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentOptions>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PaymentOptionsPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PaymentOptionsPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  bool request_payer_email;
  bool request_payer_phone;
  bool request_shipping;
};

class PaymentOptionsDataView {
 public:
  PaymentOptionsDataView() {}

  PaymentOptionsDataView(
      internal::PaymentOptions_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool request_payer_email() const {
    return data_->request_payer_email;
  }
  bool request_payer_phone() const {
    return data_->request_payer_phone;
  }
  bool request_shipping() const {
    return data_->request_shipping;
  }
 private:
  internal::PaymentOptions_Data* data_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::PaymentOptionsDataView> {
  using MojomType = ::blink::mojom::blink::PaymentOptionsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {






class BLINK_PLATFORM_EXPORT PaymentAddress {
 public:
  using DataView = PaymentAddressDataView;
  using Data_ = internal::PaymentAddress_Data;

  static PaymentAddressPtr New();

  template <typename U>
  static PaymentAddressPtr From(const U& u) {
    return mojo::TypeConverter<PaymentAddressPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentAddress>::Convert(*this);
  }

  PaymentAddress();
  ~PaymentAddress();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentAddressPtr>
  PaymentAddressPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentAddress>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PaymentAddressPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PaymentAddressPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  WTF::String country;
  mojo::WTFArray<WTF::String> address_line;
  WTF::String region;
  WTF::String city;
  WTF::String dependent_locality;
  WTF::String postal_code;
  WTF::String sorting_code;
  WTF::String language_code;
  WTF::String script_code;
  WTF::String organization;
  WTF::String recipient;
  WTF::String careOf;
  WTF::String phone;
 private:
  DISALLOW_COPY_AND_ASSIGN(PaymentAddress);
};

class PaymentAddressDataView {
 public:
  PaymentAddressDataView() {}

  PaymentAddressDataView(
      internal::PaymentAddress_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCountryDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCountry(UserType* output) {
    auto pointer = data_->country.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetAddressLineDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadAddressLine(UserType* output) {
    auto pointer = data_->address_line.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::String>>(
        pointer, output, context_);
  }
  inline void GetRegionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadRegion(UserType* output) {
    auto pointer = data_->region.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetCityDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCity(UserType* output) {
    auto pointer = data_->city.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetDependentLocalityDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDependentLocality(UserType* output) {
    auto pointer = data_->dependent_locality.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPostalCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPostalCode(UserType* output) {
    auto pointer = data_->postal_code.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetSortingCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadSortingCode(UserType* output) {
    auto pointer = data_->sorting_code.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetLanguageCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadLanguageCode(UserType* output) {
    auto pointer = data_->language_code.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetScriptCodeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadScriptCode(UserType* output) {
    auto pointer = data_->script_code.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetOrganizationDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadOrganization(UserType* output) {
    auto pointer = data_->organization.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetRecipientDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadRecipient(UserType* output) {
    auto pointer = data_->recipient.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetCareofDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCareof(UserType* output) {
    auto pointer = data_->careOf.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPhoneDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPhone(UserType* output) {
    auto pointer = data_->phone.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PaymentAddress_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::PaymentAddressDataView> {
  using MojomType = ::blink::mojom::blink::PaymentAddressPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {




class BLINK_PLATFORM_EXPORT PaymentResponse {
 public:
  using DataView = PaymentResponseDataView;
  using Data_ = internal::PaymentResponse_Data;

  static PaymentResponsePtr New();

  template <typename U>
  static PaymentResponsePtr From(const U& u) {
    return mojo::TypeConverter<PaymentResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentResponse>::Convert(*this);
  }

  PaymentResponse();
  ~PaymentResponse();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentResponsePtr>
  PaymentResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentResponse>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PaymentResponsePtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PaymentResponsePtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  WTF::String method_name;
  WTF::String stringified_details;
  PaymentAddressPtr shipping_address;
  WTF::String shipping_option;
  WTF::String payer_email;
  WTF::String payer_phone;
 private:
  DISALLOW_COPY_AND_ASSIGN(PaymentResponse);
};

class PaymentResponseDataView {
 public:
  PaymentResponseDataView() {}

  PaymentResponseDataView(
      internal::PaymentResponse_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMethodNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMethodName(UserType* output) {
    auto pointer = data_->method_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetStringifiedDetailsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadStringifiedDetails(UserType* output) {
    auto pointer = data_->stringified_details.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetShippingAddressDataView(
      PaymentAddressDataView* output);

  template <typename UserType>
  bool ReadShippingAddress(UserType* output) {
    auto pointer = data_->shipping_address.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::PaymentAddressPtr>(
        pointer, output, context_);
  }
  inline void GetShippingOptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadShippingOption(UserType* output) {
    auto pointer = data_->shipping_option.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPayerEmailDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPayerEmail(UserType* output) {
    auto pointer = data_->payer_email.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetPayerPhoneDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadPayerPhone(UserType* output) {
    auto pointer = data_->payer_phone.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PaymentResponse_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::PaymentResponseDataView> {
  using MojomType = ::blink::mojom::blink::PaymentResponsePtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {



class BLINK_PLATFORM_EXPORT PaymentItem {
 public:
  using DataView = PaymentItemDataView;
  using Data_ = internal::PaymentItem_Data;

  static PaymentItemPtr New();

  template <typename U>
  static PaymentItemPtr From(const U& u) {
    return mojo::TypeConverter<PaymentItemPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentItem>::Convert(*this);
  }

  PaymentItem();
  ~PaymentItem();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentItemPtr>
  PaymentItemPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentItem>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PaymentItemPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PaymentItemPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  WTF::String label;
  PaymentCurrencyAmountPtr amount;
 private:
  DISALLOW_COPY_AND_ASSIGN(PaymentItem);
};

class PaymentItemDataView {
 public:
  PaymentItemDataView() {}

  PaymentItemDataView(
      internal::PaymentItem_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadLabel(UserType* output) {
    auto pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetAmountDataView(
      PaymentCurrencyAmountDataView* output);

  template <typename UserType>
  bool ReadAmount(UserType* output) {
    auto pointer = data_->amount.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::PaymentCurrencyAmountPtr>(
        pointer, output, context_);
  }
 private:
  internal::PaymentItem_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::PaymentItemDataView> {
  using MojomType = ::blink::mojom::blink::PaymentItemPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {



class BLINK_PLATFORM_EXPORT PaymentShippingOption {
 public:
  using DataView = PaymentShippingOptionDataView;
  using Data_ = internal::PaymentShippingOption_Data;

  static PaymentShippingOptionPtr New();

  template <typename U>
  static PaymentShippingOptionPtr From(const U& u) {
    return mojo::TypeConverter<PaymentShippingOptionPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentShippingOption>::Convert(*this);
  }

  PaymentShippingOption();
  ~PaymentShippingOption();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentShippingOptionPtr>
  PaymentShippingOptionPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentShippingOption>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PaymentShippingOptionPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PaymentShippingOptionPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  WTF::String id;
  WTF::String label;
  PaymentCurrencyAmountPtr amount;
  bool selected;
 private:
  DISALLOW_COPY_AND_ASSIGN(PaymentShippingOption);
};

class PaymentShippingOptionDataView {
 public:
  PaymentShippingOptionDataView() {}

  PaymentShippingOptionDataView(
      internal::PaymentShippingOption_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadId(UserType* output) {
    auto pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetLabelDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadLabel(UserType* output) {
    auto pointer = data_->label.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetAmountDataView(
      PaymentCurrencyAmountDataView* output);

  template <typename UserType>
  bool ReadAmount(UserType* output) {
    auto pointer = data_->amount.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::PaymentCurrencyAmountPtr>(
        pointer, output, context_);
  }
  bool selected() const {
    return data_->selected;
  }
 private:
  internal::PaymentShippingOption_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::PaymentShippingOptionDataView> {
  using MojomType = ::blink::mojom::blink::PaymentShippingOptionPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {



class BLINK_PLATFORM_EXPORT PaymentDetailsModifier {
 public:
  using DataView = PaymentDetailsModifierDataView;
  using Data_ = internal::PaymentDetailsModifier_Data;

  static PaymentDetailsModifierPtr New();

  template <typename U>
  static PaymentDetailsModifierPtr From(const U& u) {
    return mojo::TypeConverter<PaymentDetailsModifierPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentDetailsModifier>::Convert(*this);
  }

  PaymentDetailsModifier();
  ~PaymentDetailsModifier();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentDetailsModifierPtr>
  PaymentDetailsModifierPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentDetailsModifier>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PaymentDetailsModifierPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PaymentDetailsModifierPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  mojo::WTFArray<WTF::String> supported_methods;
  PaymentItemPtr total;
  mojo::WTFArray<PaymentItemPtr> additional_display_items;
 private:
  DISALLOW_COPY_AND_ASSIGN(PaymentDetailsModifier);
};

class PaymentDetailsModifierDataView {
 public:
  PaymentDetailsModifierDataView() {}

  PaymentDetailsModifierDataView(
      internal::PaymentDetailsModifier_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSupportedMethodsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadSupportedMethods(UserType* output) {
    auto pointer = data_->supported_methods.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::String>>(
        pointer, output, context_);
  }
  inline void GetTotalDataView(
      PaymentItemDataView* output);

  template <typename UserType>
  bool ReadTotal(UserType* output) {
    auto pointer = data_->total.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::PaymentItemPtr>(
        pointer, output, context_);
  }
  inline void GetAdditionalDisplayItemsDataView(
      mojo::ArrayDataView<PaymentItemDataView>* output);

  template <typename UserType>
  bool ReadAdditionalDisplayItems(UserType* output) {
    auto pointer = data_->additional_display_items.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::blink::PaymentItemPtr>>(
        pointer, output, context_);
  }
 private:
  internal::PaymentDetailsModifier_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::PaymentDetailsModifierDataView> {
  using MojomType = ::blink::mojom::blink::PaymentDetailsModifierPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {



class BLINK_PLATFORM_EXPORT PaymentDetails {
 public:
  using DataView = PaymentDetailsDataView;
  using Data_ = internal::PaymentDetails_Data;

  static PaymentDetailsPtr New();

  template <typename U>
  static PaymentDetailsPtr From(const U& u) {
    return mojo::TypeConverter<PaymentDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentDetails>::Convert(*this);
  }

  PaymentDetails();
  ~PaymentDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentDetailsPtr>
  PaymentDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PaymentDetailsPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PaymentDetailsPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  PaymentItemPtr total;
  mojo::WTFArray<PaymentItemPtr> display_items;
  mojo::WTFArray<PaymentShippingOptionPtr> shipping_options;
  mojo::WTFArray<PaymentDetailsModifierPtr> modifiers;
 private:
  DISALLOW_COPY_AND_ASSIGN(PaymentDetails);
};

class PaymentDetailsDataView {
 public:
  PaymentDetailsDataView() {}

  PaymentDetailsDataView(
      internal::PaymentDetails_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTotalDataView(
      PaymentItemDataView* output);

  template <typename UserType>
  bool ReadTotal(UserType* output) {
    auto pointer = data_->total.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::PaymentItemPtr>(
        pointer, output, context_);
  }
  inline void GetDisplayItemsDataView(
      mojo::ArrayDataView<PaymentItemDataView>* output);

  template <typename UserType>
  bool ReadDisplayItems(UserType* output) {
    auto pointer = data_->display_items.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::blink::PaymentItemPtr>>(
        pointer, output, context_);
  }
  inline void GetShippingOptionsDataView(
      mojo::ArrayDataView<PaymentShippingOptionDataView>* output);

  template <typename UserType>
  bool ReadShippingOptions(UserType* output) {
    auto pointer = data_->shipping_options.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::blink::PaymentShippingOptionPtr>>(
        pointer, output, context_);
  }
  inline void GetModifiersDataView(
      mojo::ArrayDataView<PaymentDetailsModifierDataView>* output);

  template <typename UserType>
  bool ReadModifiers(UserType* output) {
    auto pointer = data_->modifiers.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::blink::PaymentDetailsModifierPtr>>(
        pointer, output, context_);
  }
 private:
  internal::PaymentDetails_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::PaymentDetailsDataView> {
  using MojomType = ::blink::mojom::blink::PaymentDetailsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {




class BLINK_PLATFORM_EXPORT PaymentMethodData {
 public:
  using DataView = PaymentMethodDataDataView;
  using Data_ = internal::PaymentMethodData_Data;

  static PaymentMethodDataPtr New();

  template <typename U>
  static PaymentMethodDataPtr From(const U& u) {
    return mojo::TypeConverter<PaymentMethodDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PaymentMethodData>::Convert(*this);
  }

  PaymentMethodData();
  ~PaymentMethodData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PaymentMethodDataPtr>
  PaymentMethodDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, PaymentMethodData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::WTFArray<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        PaymentMethodDataPtr, mojo::WTFArray<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::WTFArray<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        PaymentMethodDataPtr, mojo::WTFArray<uint8_t>>(
            input, output);
  }

  mojo::WTFArray<WTF::String> supported_methods;
  WTF::String stringified_data;
 private:
  DISALLOW_COPY_AND_ASSIGN(PaymentMethodData);
};

class PaymentMethodDataDataView {
 public:
  PaymentMethodDataDataView() {}

  PaymentMethodDataDataView(
      internal::PaymentMethodData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSupportedMethodsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  bool ReadSupportedMethods(UserType* output) {
    auto pointer = data_->supported_methods.Get();
    return mojo::internal::Deserialize<mojo::Array<mojo::String>>(
        pointer, output, context_);
  }
  inline void GetStringifiedDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadStringifiedData(UserType* output) {
    auto pointer = data_->stringified_data.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PaymentMethodData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::blink::mojom::blink::PaymentMethodDataDataView> {
  using MojomType = ::blink::mojom::blink::PaymentMethodDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace blink {
namespace mojom {
namespace blink {


template <typename StructPtrType>
PaymentAddressPtr PaymentAddress::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->country = mojo::internal::Clone(country);
  rv->address_line = mojo::internal::Clone(address_line);
  rv->region = mojo::internal::Clone(region);
  rv->city = mojo::internal::Clone(city);
  rv->dependent_locality = mojo::internal::Clone(dependent_locality);
  rv->postal_code = mojo::internal::Clone(postal_code);
  rv->sorting_code = mojo::internal::Clone(sorting_code);
  rv->language_code = mojo::internal::Clone(language_code);
  rv->script_code = mojo::internal::Clone(script_code);
  rv->organization = mojo::internal::Clone(organization);
  rv->recipient = mojo::internal::Clone(recipient);
  rv->careOf = mojo::internal::Clone(careOf);
  rv->phone = mojo::internal::Clone(phone);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentAddress>::value>::type*>
bool PaymentAddress::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->country, other.country))
    return false;
  if (!mojo::internal::Equals(this->address_line, other.address_line))
    return false;
  if (!mojo::internal::Equals(this->region, other.region))
    return false;
  if (!mojo::internal::Equals(this->city, other.city))
    return false;
  if (!mojo::internal::Equals(this->dependent_locality, other.dependent_locality))
    return false;
  if (!mojo::internal::Equals(this->postal_code, other.postal_code))
    return false;
  if (!mojo::internal::Equals(this->sorting_code, other.sorting_code))
    return false;
  if (!mojo::internal::Equals(this->language_code, other.language_code))
    return false;
  if (!mojo::internal::Equals(this->script_code, other.script_code))
    return false;
  if (!mojo::internal::Equals(this->organization, other.organization))
    return false;
  if (!mojo::internal::Equals(this->recipient, other.recipient))
    return false;
  if (!mojo::internal::Equals(this->careOf, other.careOf))
    return false;
  if (!mojo::internal::Equals(this->phone, other.phone))
    return false;
  return true;
}

inline void PaymentAddressDataView::GetCountryDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->country.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetAddressLineDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->address_line.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void PaymentAddressDataView::GetRegionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->region.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetCityDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->city.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetDependentLocalityDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->dependent_locality.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetPostalCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->postal_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetSortingCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sorting_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetLanguageCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->language_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetScriptCodeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->script_code.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetOrganizationDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->organization.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetRecipientDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->recipient.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetCareofDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->careOf.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentAddressDataView::GetPhoneDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->phone.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
PaymentCurrencyAmountPtr PaymentCurrencyAmount::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->currency = mojo::internal::Clone(currency);
  rv->value = mojo::internal::Clone(value);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentCurrencyAmount>::value>::type*>
bool PaymentCurrencyAmount::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->currency, other.currency))
    return false;
  if (!mojo::internal::Equals(this->value, other.value))
    return false;
  return true;
}

inline void PaymentCurrencyAmountDataView::GetCurrencyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->currency.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentCurrencyAmountDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
PaymentResponsePtr PaymentResponse::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->method_name = mojo::internal::Clone(method_name);
  rv->stringified_details = mojo::internal::Clone(stringified_details);
  rv->shipping_address = mojo::internal::Clone(shipping_address);
  rv->shipping_option = mojo::internal::Clone(shipping_option);
  rv->payer_email = mojo::internal::Clone(payer_email);
  rv->payer_phone = mojo::internal::Clone(payer_phone);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentResponse>::value>::type*>
bool PaymentResponse::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->method_name, other.method_name))
    return false;
  if (!mojo::internal::Equals(this->stringified_details, other.stringified_details))
    return false;
  if (!mojo::internal::Equals(this->shipping_address, other.shipping_address))
    return false;
  if (!mojo::internal::Equals(this->shipping_option, other.shipping_option))
    return false;
  if (!mojo::internal::Equals(this->payer_email, other.payer_email))
    return false;
  if (!mojo::internal::Equals(this->payer_phone, other.payer_phone))
    return false;
  return true;
}

inline void PaymentResponseDataView::GetMethodNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentResponseDataView::GetStringifiedDetailsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_details.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentResponseDataView::GetShippingAddressDataView(
    PaymentAddressDataView* output) {
  auto pointer = data_->shipping_address.Get();
  *output = PaymentAddressDataView(pointer, context_);
}
inline void PaymentResponseDataView::GetShippingOptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->shipping_option.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentResponseDataView::GetPayerEmailDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->payer_email.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentResponseDataView::GetPayerPhoneDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->payer_phone.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
PaymentItemPtr PaymentItem::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->label = mojo::internal::Clone(label);
  rv->amount = mojo::internal::Clone(amount);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentItem>::value>::type*>
bool PaymentItem::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->label, other.label))
    return false;
  if (!mojo::internal::Equals(this->amount, other.amount))
    return false;
  return true;
}

inline void PaymentItemDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentItemDataView::GetAmountDataView(
    PaymentCurrencyAmountDataView* output) {
  auto pointer = data_->amount.Get();
  *output = PaymentCurrencyAmountDataView(pointer, context_);
}

template <typename StructPtrType>
PaymentShippingOptionPtr PaymentShippingOption::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->id = mojo::internal::Clone(id);
  rv->label = mojo::internal::Clone(label);
  rv->amount = mojo::internal::Clone(amount);
  rv->selected = mojo::internal::Clone(selected);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentShippingOption>::value>::type*>
bool PaymentShippingOption::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->id, other.id))
    return false;
  if (!mojo::internal::Equals(this->label, other.label))
    return false;
  if (!mojo::internal::Equals(this->amount, other.amount))
    return false;
  if (!mojo::internal::Equals(this->selected, other.selected))
    return false;
  return true;
}

inline void PaymentShippingOptionDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentShippingOptionDataView::GetLabelDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->label.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void PaymentShippingOptionDataView::GetAmountDataView(
    PaymentCurrencyAmountDataView* output) {
  auto pointer = data_->amount.Get();
  *output = PaymentCurrencyAmountDataView(pointer, context_);
}

template <typename StructPtrType>
PaymentDetailsModifierPtr PaymentDetailsModifier::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->supported_methods = mojo::internal::Clone(supported_methods);
  rv->total = mojo::internal::Clone(total);
  rv->additional_display_items = mojo::internal::Clone(additional_display_items);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentDetailsModifier>::value>::type*>
bool PaymentDetailsModifier::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->supported_methods, other.supported_methods))
    return false;
  if (!mojo::internal::Equals(this->total, other.total))
    return false;
  if (!mojo::internal::Equals(this->additional_display_items, other.additional_display_items))
    return false;
  return true;
}

inline void PaymentDetailsModifierDataView::GetSupportedMethodsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->supported_methods.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void PaymentDetailsModifierDataView::GetTotalDataView(
    PaymentItemDataView* output) {
  auto pointer = data_->total.Get();
  *output = PaymentItemDataView(pointer, context_);
}
inline void PaymentDetailsModifierDataView::GetAdditionalDisplayItemsDataView(
    mojo::ArrayDataView<PaymentItemDataView>* output) {
  auto pointer = data_->additional_display_items.Get();
  *output = mojo::ArrayDataView<PaymentItemDataView>(pointer, context_);
}

template <typename StructPtrType>
PaymentDetailsPtr PaymentDetails::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->total = mojo::internal::Clone(total);
  rv->display_items = mojo::internal::Clone(display_items);
  rv->shipping_options = mojo::internal::Clone(shipping_options);
  rv->modifiers = mojo::internal::Clone(modifiers);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentDetails>::value>::type*>
bool PaymentDetails::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->total, other.total))
    return false;
  if (!mojo::internal::Equals(this->display_items, other.display_items))
    return false;
  if (!mojo::internal::Equals(this->shipping_options, other.shipping_options))
    return false;
  if (!mojo::internal::Equals(this->modifiers, other.modifiers))
    return false;
  return true;
}

inline void PaymentDetailsDataView::GetTotalDataView(
    PaymentItemDataView* output) {
  auto pointer = data_->total.Get();
  *output = PaymentItemDataView(pointer, context_);
}
inline void PaymentDetailsDataView::GetDisplayItemsDataView(
    mojo::ArrayDataView<PaymentItemDataView>* output) {
  auto pointer = data_->display_items.Get();
  *output = mojo::ArrayDataView<PaymentItemDataView>(pointer, context_);
}
inline void PaymentDetailsDataView::GetShippingOptionsDataView(
    mojo::ArrayDataView<PaymentShippingOptionDataView>* output) {
  auto pointer = data_->shipping_options.Get();
  *output = mojo::ArrayDataView<PaymentShippingOptionDataView>(pointer, context_);
}
inline void PaymentDetailsDataView::GetModifiersDataView(
    mojo::ArrayDataView<PaymentDetailsModifierDataView>* output) {
  auto pointer = data_->modifiers.Get();
  *output = mojo::ArrayDataView<PaymentDetailsModifierDataView>(pointer, context_);
}

template <typename StructPtrType>
PaymentOptionsPtr PaymentOptions::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->request_payer_email = mojo::internal::Clone(request_payer_email);
  rv->request_payer_phone = mojo::internal::Clone(request_payer_phone);
  rv->request_shipping = mojo::internal::Clone(request_shipping);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentOptions>::value>::type*>
bool PaymentOptions::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->request_payer_email, other.request_payer_email))
    return false;
  if (!mojo::internal::Equals(this->request_payer_phone, other.request_payer_phone))
    return false;
  if (!mojo::internal::Equals(this->request_shipping, other.request_shipping))
    return false;
  return true;
}


template <typename StructPtrType>
PaymentMethodDataPtr PaymentMethodData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->supported_methods = mojo::internal::Clone(supported_methods);
  rv->stringified_data = mojo::internal::Clone(stringified_data);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, PaymentMethodData>::value>::type*>
bool PaymentMethodData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->supported_methods, other.supported_methods))
    return false;
  if (!mojo::internal::Equals(this->stringified_data, other.stringified_data))
    return false;
  return true;
}

inline void PaymentMethodDataDataView::GetSupportedMethodsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->supported_methods.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, context_);
}
inline void PaymentMethodDataDataView::GetStringifiedDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_data.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PaymentAddress, ::blink::mojom::blink::PaymentAddressPtr> {
  static bool IsNull(const ::blink::mojom::blink::PaymentAddressPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PaymentAddressPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::PaymentAddress::country)& country(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->country;
  }
  static decltype(::blink::mojom::blink::PaymentAddress::address_line)& address_line(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->address_line;
  }
  static decltype(::blink::mojom::blink::PaymentAddress::region)& region(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->region;
  }
  static decltype(::blink::mojom::blink::PaymentAddress::city)& city(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->city;
  }
  static decltype(::blink::mojom::blink::PaymentAddress::dependent_locality)& dependent_locality(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->dependent_locality;
  }
  static decltype(::blink::mojom::blink::PaymentAddress::postal_code)& postal_code(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->postal_code;
  }
  static decltype(::blink::mojom::blink::PaymentAddress::sorting_code)& sorting_code(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->sorting_code;
  }
  static decltype(::blink::mojom::blink::PaymentAddress::language_code)& language_code(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->language_code;
  }
  static decltype(::blink::mojom::blink::PaymentAddress::script_code)& script_code(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->script_code;
  }
  static decltype(::blink::mojom::blink::PaymentAddress::organization)& organization(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->organization;
  }
  static decltype(::blink::mojom::blink::PaymentAddress::recipient)& recipient(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->recipient;
  }
  static decltype(::blink::mojom::blink::PaymentAddress::careOf)& careOf(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->careOf;
  }
  static decltype(::blink::mojom::blink::PaymentAddress::phone)& phone(
      ::blink::mojom::blink::PaymentAddressPtr& input) {
    return input->phone;
  }

  static bool Read(::blink::mojom::blink::PaymentAddressDataView input, ::blink::mojom::blink::PaymentAddressPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::PaymentAddressPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::PaymentAddress, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::PaymentAddress_Data);
    decltype(CallWithContext(Traits::country, input, custom_context)) in_country = CallWithContext(Traits::country, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_country, context);
    decltype(CallWithContext(Traits::address_line, input, custom_context)) in_address_line = CallWithContext(Traits::address_line, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
        in_address_line, context);
    decltype(CallWithContext(Traits::region, input, custom_context)) in_region = CallWithContext(Traits::region, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_region, context);
    decltype(CallWithContext(Traits::city, input, custom_context)) in_city = CallWithContext(Traits::city, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_city, context);
    decltype(CallWithContext(Traits::dependent_locality, input, custom_context)) in_dependent_locality = CallWithContext(Traits::dependent_locality, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_dependent_locality, context);
    decltype(CallWithContext(Traits::postal_code, input, custom_context)) in_postal_code = CallWithContext(Traits::postal_code, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_postal_code, context);
    decltype(CallWithContext(Traits::sorting_code, input, custom_context)) in_sorting_code = CallWithContext(Traits::sorting_code, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_sorting_code, context);
    decltype(CallWithContext(Traits::language_code, input, custom_context)) in_language_code = CallWithContext(Traits::language_code, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_language_code, context);
    decltype(CallWithContext(Traits::script_code, input, custom_context)) in_script_code = CallWithContext(Traits::script_code, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_script_code, context);
    decltype(CallWithContext(Traits::organization, input, custom_context)) in_organization = CallWithContext(Traits::organization, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_organization, context);
    decltype(CallWithContext(Traits::recipient, input, custom_context)) in_recipient = CallWithContext(Traits::recipient, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_recipient, context);
    decltype(CallWithContext(Traits::careOf, input, custom_context)) in_careOf = CallWithContext(Traits::careOf, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_careOf, context);
    decltype(CallWithContext(Traits::phone, input, custom_context)) in_phone = CallWithContext(Traits::phone, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_phone, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PaymentAddress_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::PaymentAddress_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::country, input, custom_context)) in_country = CallWithContext(Traits::country, input, custom_context);
      typename decltype(result->country)::BaseType* country_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_country, buffer, &country_ptr, context);
      result->country.Set(country_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->country.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null country in PaymentAddress struct");
      decltype(CallWithContext(Traits::address_line, input, custom_context)) in_address_line = CallWithContext(Traits::address_line, input, custom_context);
      typename decltype(result->address_line)::BaseType* address_line_ptr;
      const mojo::internal::ContainerValidateParams address_line_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Array<mojo::String>>(
          in_address_line, buffer, &address_line_ptr, &address_line_validate_params,
          context);
      result->address_line.Set(address_line_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->address_line.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null address_line in PaymentAddress struct");
      decltype(CallWithContext(Traits::region, input, custom_context)) in_region = CallWithContext(Traits::region, input, custom_context);
      typename decltype(result->region)::BaseType* region_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_region, buffer, &region_ptr, context);
      result->region.Set(region_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->region.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null region in PaymentAddress struct");
      decltype(CallWithContext(Traits::city, input, custom_context)) in_city = CallWithContext(Traits::city, input, custom_context);
      typename decltype(result->city)::BaseType* city_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_city, buffer, &city_ptr, context);
      result->city.Set(city_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->city.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null city in PaymentAddress struct");
      decltype(CallWithContext(Traits::dependent_locality, input, custom_context)) in_dependent_locality = CallWithContext(Traits::dependent_locality, input, custom_context);
      typename decltype(result->dependent_locality)::BaseType* dependent_locality_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_dependent_locality, buffer, &dependent_locality_ptr, context);
      result->dependent_locality.Set(dependent_locality_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->dependent_locality.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null dependent_locality in PaymentAddress struct");
      decltype(CallWithContext(Traits::postal_code, input, custom_context)) in_postal_code = CallWithContext(Traits::postal_code, input, custom_context);
      typename decltype(result->postal_code)::BaseType* postal_code_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_postal_code, buffer, &postal_code_ptr, context);
      result->postal_code.Set(postal_code_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->postal_code.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null postal_code in PaymentAddress struct");
      decltype(CallWithContext(Traits::sorting_code, input, custom_context)) in_sorting_code = CallWithContext(Traits::sorting_code, input, custom_context);
      typename decltype(result->sorting_code)::BaseType* sorting_code_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_sorting_code, buffer, &sorting_code_ptr, context);
      result->sorting_code.Set(sorting_code_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->sorting_code.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null sorting_code in PaymentAddress struct");
      decltype(CallWithContext(Traits::language_code, input, custom_context)) in_language_code = CallWithContext(Traits::language_code, input, custom_context);
      typename decltype(result->language_code)::BaseType* language_code_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_language_code, buffer, &language_code_ptr, context);
      result->language_code.Set(language_code_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->language_code.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null language_code in PaymentAddress struct");
      decltype(CallWithContext(Traits::script_code, input, custom_context)) in_script_code = CallWithContext(Traits::script_code, input, custom_context);
      typename decltype(result->script_code)::BaseType* script_code_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_script_code, buffer, &script_code_ptr, context);
      result->script_code.Set(script_code_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->script_code.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null script_code in PaymentAddress struct");
      decltype(CallWithContext(Traits::organization, input, custom_context)) in_organization = CallWithContext(Traits::organization, input, custom_context);
      typename decltype(result->organization)::BaseType* organization_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_organization, buffer, &organization_ptr, context);
      result->organization.Set(organization_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->organization.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null organization in PaymentAddress struct");
      decltype(CallWithContext(Traits::recipient, input, custom_context)) in_recipient = CallWithContext(Traits::recipient, input, custom_context);
      typename decltype(result->recipient)::BaseType* recipient_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_recipient, buffer, &recipient_ptr, context);
      result->recipient.Set(recipient_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->recipient.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null recipient in PaymentAddress struct");
      decltype(CallWithContext(Traits::careOf, input, custom_context)) in_careOf = CallWithContext(Traits::careOf, input, custom_context);
      typename decltype(result->careOf)::BaseType* careOf_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_careOf, buffer, &careOf_ptr, context);
      result->careOf.Set(careOf_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->careOf.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null careOf in PaymentAddress struct");
      decltype(CallWithContext(Traits::phone, input, custom_context)) in_phone = CallWithContext(Traits::phone, input, custom_context);
      typename decltype(result->phone)::BaseType* phone_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_phone, buffer, &phone_ptr, context);
      result->phone.Set(phone_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->phone.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null phone in PaymentAddress struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PaymentAddress_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::PaymentAddressDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PaymentCurrencyAmount, ::blink::mojom::blink::PaymentCurrencyAmountPtr> {
  static bool IsNull(const ::blink::mojom::blink::PaymentCurrencyAmountPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PaymentCurrencyAmountPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::PaymentCurrencyAmount::currency)& currency(
      ::blink::mojom::blink::PaymentCurrencyAmountPtr& input) {
    return input->currency;
  }
  static decltype(::blink::mojom::blink::PaymentCurrencyAmount::value)& value(
      ::blink::mojom::blink::PaymentCurrencyAmountPtr& input) {
    return input->value;
  }

  static bool Read(::blink::mojom::blink::PaymentCurrencyAmountDataView input, ::blink::mojom::blink::PaymentCurrencyAmountPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::PaymentCurrencyAmountPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::PaymentCurrencyAmount, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::PaymentCurrencyAmount_Data);
    decltype(CallWithContext(Traits::currency, input, custom_context)) in_currency = CallWithContext(Traits::currency, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_currency, context);
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_value, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PaymentCurrencyAmount_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::PaymentCurrencyAmount_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::currency, input, custom_context)) in_currency = CallWithContext(Traits::currency, input, custom_context);
      typename decltype(result->currency)::BaseType* currency_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_currency, buffer, &currency_ptr, context);
      result->currency.Set(currency_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->currency.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null currency in PaymentCurrencyAmount struct");
      decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
      typename decltype(result->value)::BaseType* value_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_value, buffer, &value_ptr, context);
      result->value.Set(value_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->value.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null value in PaymentCurrencyAmount struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PaymentCurrencyAmount_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::PaymentCurrencyAmountDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PaymentResponse, ::blink::mojom::blink::PaymentResponsePtr> {
  static bool IsNull(const ::blink::mojom::blink::PaymentResponsePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PaymentResponsePtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::PaymentResponse::method_name)& method_name(
      ::blink::mojom::blink::PaymentResponsePtr& input) {
    return input->method_name;
  }
  static decltype(::blink::mojom::blink::PaymentResponse::stringified_details)& stringified_details(
      ::blink::mojom::blink::PaymentResponsePtr& input) {
    return input->stringified_details;
  }
  static decltype(::blink::mojom::blink::PaymentResponse::shipping_address)& shipping_address(
      ::blink::mojom::blink::PaymentResponsePtr& input) {
    return input->shipping_address;
  }
  static decltype(::blink::mojom::blink::PaymentResponse::shipping_option)& shipping_option(
      ::blink::mojom::blink::PaymentResponsePtr& input) {
    return input->shipping_option;
  }
  static decltype(::blink::mojom::blink::PaymentResponse::payer_email)& payer_email(
      ::blink::mojom::blink::PaymentResponsePtr& input) {
    return input->payer_email;
  }
  static decltype(::blink::mojom::blink::PaymentResponse::payer_phone)& payer_phone(
      ::blink::mojom::blink::PaymentResponsePtr& input) {
    return input->payer_phone;
  }

  static bool Read(::blink::mojom::blink::PaymentResponseDataView input, ::blink::mojom::blink::PaymentResponsePtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::PaymentResponsePtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::PaymentResponse, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::PaymentResponse_Data);
    decltype(CallWithContext(Traits::method_name, input, custom_context)) in_method_name = CallWithContext(Traits::method_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_method_name, context);
    decltype(CallWithContext(Traits::stringified_details, input, custom_context)) in_stringified_details = CallWithContext(Traits::stringified_details, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_stringified_details, context);
    decltype(CallWithContext(Traits::shipping_address, input, custom_context)) in_shipping_address = CallWithContext(Traits::shipping_address, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::PaymentAddressPtr>(
        in_shipping_address, context);
    decltype(CallWithContext(Traits::shipping_option, input, custom_context)) in_shipping_option = CallWithContext(Traits::shipping_option, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_shipping_option, context);
    decltype(CallWithContext(Traits::payer_email, input, custom_context)) in_payer_email = CallWithContext(Traits::payer_email, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_payer_email, context);
    decltype(CallWithContext(Traits::payer_phone, input, custom_context)) in_payer_phone = CallWithContext(Traits::payer_phone, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_payer_phone, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PaymentResponse_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::PaymentResponse_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::method_name, input, custom_context)) in_method_name = CallWithContext(Traits::method_name, input, custom_context);
      typename decltype(result->method_name)::BaseType* method_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_method_name, buffer, &method_name_ptr, context);
      result->method_name.Set(method_name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->method_name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null method_name in PaymentResponse struct");
      decltype(CallWithContext(Traits::stringified_details, input, custom_context)) in_stringified_details = CallWithContext(Traits::stringified_details, input, custom_context);
      typename decltype(result->stringified_details)::BaseType* stringified_details_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_stringified_details, buffer, &stringified_details_ptr, context);
      result->stringified_details.Set(stringified_details_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->stringified_details.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null stringified_details in PaymentResponse struct");
      decltype(CallWithContext(Traits::shipping_address, input, custom_context)) in_shipping_address = CallWithContext(Traits::shipping_address, input, custom_context);
      typename decltype(result->shipping_address)::BaseType* shipping_address_ptr;
      mojo::internal::Serialize<::blink::mojom::blink::PaymentAddressPtr>(
          in_shipping_address, buffer, &shipping_address_ptr, context);
      result->shipping_address.Set(shipping_address_ptr);
      decltype(CallWithContext(Traits::shipping_option, input, custom_context)) in_shipping_option = CallWithContext(Traits::shipping_option, input, custom_context);
      typename decltype(result->shipping_option)::BaseType* shipping_option_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_shipping_option, buffer, &shipping_option_ptr, context);
      result->shipping_option.Set(shipping_option_ptr);
      decltype(CallWithContext(Traits::payer_email, input, custom_context)) in_payer_email = CallWithContext(Traits::payer_email, input, custom_context);
      typename decltype(result->payer_email)::BaseType* payer_email_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_payer_email, buffer, &payer_email_ptr, context);
      result->payer_email.Set(payer_email_ptr);
      decltype(CallWithContext(Traits::payer_phone, input, custom_context)) in_payer_phone = CallWithContext(Traits::payer_phone, input, custom_context);
      typename decltype(result->payer_phone)::BaseType* payer_phone_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_payer_phone, buffer, &payer_phone_ptr, context);
      result->payer_phone.Set(payer_phone_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PaymentResponse_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::PaymentResponseDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PaymentItem, ::blink::mojom::blink::PaymentItemPtr> {
  static bool IsNull(const ::blink::mojom::blink::PaymentItemPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PaymentItemPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::PaymentItem::label)& label(
      ::blink::mojom::blink::PaymentItemPtr& input) {
    return input->label;
  }
  static decltype(::blink::mojom::blink::PaymentItem::amount)& amount(
      ::blink::mojom::blink::PaymentItemPtr& input) {
    return input->amount;
  }

  static bool Read(::blink::mojom::blink::PaymentItemDataView input, ::blink::mojom::blink::PaymentItemPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::PaymentItemPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::PaymentItem, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::PaymentItem_Data);
    decltype(CallWithContext(Traits::label, input, custom_context)) in_label = CallWithContext(Traits::label, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_label, context);
    decltype(CallWithContext(Traits::amount, input, custom_context)) in_amount = CallWithContext(Traits::amount, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::PaymentCurrencyAmountPtr>(
        in_amount, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PaymentItem_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::PaymentItem_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::label, input, custom_context)) in_label = CallWithContext(Traits::label, input, custom_context);
      typename decltype(result->label)::BaseType* label_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_label, buffer, &label_ptr, context);
      result->label.Set(label_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->label.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null label in PaymentItem struct");
      decltype(CallWithContext(Traits::amount, input, custom_context)) in_amount = CallWithContext(Traits::amount, input, custom_context);
      typename decltype(result->amount)::BaseType* amount_ptr;
      mojo::internal::Serialize<::blink::mojom::blink::PaymentCurrencyAmountPtr>(
          in_amount, buffer, &amount_ptr, context);
      result->amount.Set(amount_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->amount.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null amount in PaymentItem struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PaymentItem_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::PaymentItemDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PaymentShippingOption, ::blink::mojom::blink::PaymentShippingOptionPtr> {
  static bool IsNull(const ::blink::mojom::blink::PaymentShippingOptionPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PaymentShippingOptionPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::PaymentShippingOption::id)& id(
      ::blink::mojom::blink::PaymentShippingOptionPtr& input) {
    return input->id;
  }
  static decltype(::blink::mojom::blink::PaymentShippingOption::label)& label(
      ::blink::mojom::blink::PaymentShippingOptionPtr& input) {
    return input->label;
  }
  static decltype(::blink::mojom::blink::PaymentShippingOption::amount)& amount(
      ::blink::mojom::blink::PaymentShippingOptionPtr& input) {
    return input->amount;
  }
  static decltype(::blink::mojom::blink::PaymentShippingOption::selected) selected(
      const ::blink::mojom::blink::PaymentShippingOptionPtr& input) {
    return input->selected;
  }

  static bool Read(::blink::mojom::blink::PaymentShippingOptionDataView input, ::blink::mojom::blink::PaymentShippingOptionPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::PaymentShippingOptionPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::PaymentShippingOption, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::PaymentShippingOption_Data);
    decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_id, context);
    decltype(CallWithContext(Traits::label, input, custom_context)) in_label = CallWithContext(Traits::label, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_label, context);
    decltype(CallWithContext(Traits::amount, input, custom_context)) in_amount = CallWithContext(Traits::amount, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::PaymentCurrencyAmountPtr>(
        in_amount, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PaymentShippingOption_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::PaymentShippingOption_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::id, input, custom_context)) in_id = CallWithContext(Traits::id, input, custom_context);
      typename decltype(result->id)::BaseType* id_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_id, buffer, &id_ptr, context);
      result->id.Set(id_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->id.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null id in PaymentShippingOption struct");
      decltype(CallWithContext(Traits::label, input, custom_context)) in_label = CallWithContext(Traits::label, input, custom_context);
      typename decltype(result->label)::BaseType* label_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_label, buffer, &label_ptr, context);
      result->label.Set(label_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->label.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null label in PaymentShippingOption struct");
      decltype(CallWithContext(Traits::amount, input, custom_context)) in_amount = CallWithContext(Traits::amount, input, custom_context);
      typename decltype(result->amount)::BaseType* amount_ptr;
      mojo::internal::Serialize<::blink::mojom::blink::PaymentCurrencyAmountPtr>(
          in_amount, buffer, &amount_ptr, context);
      result->amount.Set(amount_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->amount.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null amount in PaymentShippingOption struct");
      result->selected = CallWithContext(Traits::selected, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PaymentShippingOption_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::PaymentShippingOptionDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PaymentDetailsModifier, ::blink::mojom::blink::PaymentDetailsModifierPtr> {
  static bool IsNull(const ::blink::mojom::blink::PaymentDetailsModifierPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PaymentDetailsModifierPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::PaymentDetailsModifier::supported_methods)& supported_methods(
      ::blink::mojom::blink::PaymentDetailsModifierPtr& input) {
    return input->supported_methods;
  }
  static decltype(::blink::mojom::blink::PaymentDetailsModifier::total)& total(
      ::blink::mojom::blink::PaymentDetailsModifierPtr& input) {
    return input->total;
  }
  static decltype(::blink::mojom::blink::PaymentDetailsModifier::additional_display_items)& additional_display_items(
      ::blink::mojom::blink::PaymentDetailsModifierPtr& input) {
    return input->additional_display_items;
  }

  static bool Read(::blink::mojom::blink::PaymentDetailsModifierDataView input, ::blink::mojom::blink::PaymentDetailsModifierPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::PaymentDetailsModifierPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::PaymentDetailsModifier, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::PaymentDetailsModifier_Data);
    decltype(CallWithContext(Traits::supported_methods, input, custom_context)) in_supported_methods = CallWithContext(Traits::supported_methods, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
        in_supported_methods, context);
    decltype(CallWithContext(Traits::total, input, custom_context)) in_total = CallWithContext(Traits::total, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::PaymentItemPtr>(
        in_total, context);
    decltype(CallWithContext(Traits::additional_display_items, input, custom_context)) in_additional_display_items = CallWithContext(Traits::additional_display_items, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::blink::PaymentItemPtr>>(
        in_additional_display_items, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PaymentDetailsModifier_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::PaymentDetailsModifier_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::supported_methods, input, custom_context)) in_supported_methods = CallWithContext(Traits::supported_methods, input, custom_context);
      typename decltype(result->supported_methods)::BaseType* supported_methods_ptr;
      const mojo::internal::ContainerValidateParams supported_methods_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Array<mojo::String>>(
          in_supported_methods, buffer, &supported_methods_ptr, &supported_methods_validate_params,
          context);
      result->supported_methods.Set(supported_methods_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->supported_methods.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null supported_methods in PaymentDetailsModifier struct");
      decltype(CallWithContext(Traits::total, input, custom_context)) in_total = CallWithContext(Traits::total, input, custom_context);
      typename decltype(result->total)::BaseType* total_ptr;
      mojo::internal::Serialize<::blink::mojom::blink::PaymentItemPtr>(
          in_total, buffer, &total_ptr, context);
      result->total.Set(total_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->total.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null total in PaymentDetailsModifier struct");
      decltype(CallWithContext(Traits::additional_display_items, input, custom_context)) in_additional_display_items = CallWithContext(Traits::additional_display_items, input, custom_context);
      typename decltype(result->additional_display_items)::BaseType* additional_display_items_ptr;
      const mojo::internal::ContainerValidateParams additional_display_items_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::blink::mojom::blink::PaymentItemPtr>>(
          in_additional_display_items, buffer, &additional_display_items_ptr, &additional_display_items_validate_params,
          context);
      result->additional_display_items.Set(additional_display_items_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->additional_display_items.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null additional_display_items in PaymentDetailsModifier struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PaymentDetailsModifier_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::PaymentDetailsModifierDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PaymentDetails, ::blink::mojom::blink::PaymentDetailsPtr> {
  static bool IsNull(const ::blink::mojom::blink::PaymentDetailsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PaymentDetailsPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::PaymentDetails::total)& total(
      ::blink::mojom::blink::PaymentDetailsPtr& input) {
    return input->total;
  }
  static decltype(::blink::mojom::blink::PaymentDetails::display_items)& display_items(
      ::blink::mojom::blink::PaymentDetailsPtr& input) {
    return input->display_items;
  }
  static decltype(::blink::mojom::blink::PaymentDetails::shipping_options)& shipping_options(
      ::blink::mojom::blink::PaymentDetailsPtr& input) {
    return input->shipping_options;
  }
  static decltype(::blink::mojom::blink::PaymentDetails::modifiers)& modifiers(
      ::blink::mojom::blink::PaymentDetailsPtr& input) {
    return input->modifiers;
  }

  static bool Read(::blink::mojom::blink::PaymentDetailsDataView input, ::blink::mojom::blink::PaymentDetailsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::PaymentDetailsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::PaymentDetails, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::PaymentDetails_Data);
    decltype(CallWithContext(Traits::total, input, custom_context)) in_total = CallWithContext(Traits::total, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::PaymentItemPtr>(
        in_total, context);
    decltype(CallWithContext(Traits::display_items, input, custom_context)) in_display_items = CallWithContext(Traits::display_items, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::blink::PaymentItemPtr>>(
        in_display_items, context);
    decltype(CallWithContext(Traits::shipping_options, input, custom_context)) in_shipping_options = CallWithContext(Traits::shipping_options, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::blink::PaymentShippingOptionPtr>>(
        in_shipping_options, context);
    decltype(CallWithContext(Traits::modifiers, input, custom_context)) in_modifiers = CallWithContext(Traits::modifiers, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::blink::PaymentDetailsModifierPtr>>(
        in_modifiers, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PaymentDetails_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::PaymentDetails_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::total, input, custom_context)) in_total = CallWithContext(Traits::total, input, custom_context);
      typename decltype(result->total)::BaseType* total_ptr;
      mojo::internal::Serialize<::blink::mojom::blink::PaymentItemPtr>(
          in_total, buffer, &total_ptr, context);
      result->total.Set(total_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->total.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null total in PaymentDetails struct");
      decltype(CallWithContext(Traits::display_items, input, custom_context)) in_display_items = CallWithContext(Traits::display_items, input, custom_context);
      typename decltype(result->display_items)::BaseType* display_items_ptr;
      const mojo::internal::ContainerValidateParams display_items_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::blink::mojom::blink::PaymentItemPtr>>(
          in_display_items, buffer, &display_items_ptr, &display_items_validate_params,
          context);
      result->display_items.Set(display_items_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->display_items.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null display_items in PaymentDetails struct");
      decltype(CallWithContext(Traits::shipping_options, input, custom_context)) in_shipping_options = CallWithContext(Traits::shipping_options, input, custom_context);
      typename decltype(result->shipping_options)::BaseType* shipping_options_ptr;
      const mojo::internal::ContainerValidateParams shipping_options_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::blink::mojom::blink::PaymentShippingOptionPtr>>(
          in_shipping_options, buffer, &shipping_options_ptr, &shipping_options_validate_params,
          context);
      result->shipping_options.Set(shipping_options_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->shipping_options.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null shipping_options in PaymentDetails struct");
      decltype(CallWithContext(Traits::modifiers, input, custom_context)) in_modifiers = CallWithContext(Traits::modifiers, input, custom_context);
      typename decltype(result->modifiers)::BaseType* modifiers_ptr;
      const mojo::internal::ContainerValidateParams modifiers_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::blink::mojom::blink::PaymentDetailsModifierPtr>>(
          in_modifiers, buffer, &modifiers_ptr, &modifiers_validate_params,
          context);
      result->modifiers.Set(modifiers_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->modifiers.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null modifiers in PaymentDetails struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PaymentDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::PaymentDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PaymentOptions, ::blink::mojom::blink::PaymentOptionsPtr> {
  static bool IsNull(const ::blink::mojom::blink::PaymentOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PaymentOptionsPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::PaymentOptions::request_payer_email) request_payer_email(
      const ::blink::mojom::blink::PaymentOptionsPtr& input) {
    return input->request_payer_email;
  }
  static decltype(::blink::mojom::blink::PaymentOptions::request_payer_phone) request_payer_phone(
      const ::blink::mojom::blink::PaymentOptionsPtr& input) {
    return input->request_payer_phone;
  }
  static decltype(::blink::mojom::blink::PaymentOptions::request_shipping) request_shipping(
      const ::blink::mojom::blink::PaymentOptionsPtr& input) {
    return input->request_shipping;
  }

  static bool Read(::blink::mojom::blink::PaymentOptionsDataView input, ::blink::mojom::blink::PaymentOptionsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::PaymentOptionsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::PaymentOptions, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::PaymentOptions_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PaymentOptions_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::PaymentOptions_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->request_payer_email = CallWithContext(Traits::request_payer_email, input, custom_context);
      result->request_payer_phone = CallWithContext(Traits::request_payer_phone, input, custom_context);
      result->request_shipping = CallWithContext(Traits::request_shipping, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PaymentOptions_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::PaymentOptionsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PaymentMethodData, ::blink::mojom::blink::PaymentMethodDataPtr> {
  static bool IsNull(const ::blink::mojom::blink::PaymentMethodDataPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PaymentMethodDataPtr* output) { output->reset(); }
  static decltype(::blink::mojom::blink::PaymentMethodData::supported_methods)& supported_methods(
      ::blink::mojom::blink::PaymentMethodDataPtr& input) {
    return input->supported_methods;
  }
  static decltype(::blink::mojom::blink::PaymentMethodData::stringified_data)& stringified_data(
      ::blink::mojom::blink::PaymentMethodDataPtr& input) {
    return input->stringified_data;
  }

  static bool Read(::blink::mojom::blink::PaymentMethodDataDataView input, ::blink::mojom::blink::PaymentMethodDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::blink::PaymentMethodDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::blink::PaymentMethodData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::blink::mojom::internal::PaymentMethodData_Data);
    decltype(CallWithContext(Traits::supported_methods, input, custom_context)) in_supported_methods = CallWithContext(Traits::supported_methods, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<mojo::String>>(
        in_supported_methods, context);
    decltype(CallWithContext(Traits::stringified_data, input, custom_context)) in_stringified_data = CallWithContext(Traits::stringified_data, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_stringified_data, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::blink::mojom::internal::PaymentMethodData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::blink::mojom::internal::PaymentMethodData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::supported_methods, input, custom_context)) in_supported_methods = CallWithContext(Traits::supported_methods, input, custom_context);
      typename decltype(result->supported_methods)::BaseType* supported_methods_ptr;
      const mojo::internal::ContainerValidateParams supported_methods_validate_params(
          0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
      mojo::internal::Serialize<mojo::Array<mojo::String>>(
          in_supported_methods, buffer, &supported_methods_ptr, &supported_methods_validate_params,
          context);
      result->supported_methods.Set(supported_methods_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->supported_methods.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null supported_methods in PaymentMethodData struct");
      decltype(CallWithContext(Traits::stringified_data, input, custom_context)) in_stringified_data = CallWithContext(Traits::stringified_data, input, custom_context);
      typename decltype(result->stringified_data)::BaseType* stringified_data_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_stringified_data, buffer, &stringified_data_ptr, context);
      result->stringified_data.Set(stringified_data_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->stringified_data.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null stringified_data in PaymentMethodData struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::blink::mojom::internal::PaymentMethodData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::blink::PaymentMethodDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_PAYMENTS_PAYMENT_REQUEST_MOJOM_BLINK_H_