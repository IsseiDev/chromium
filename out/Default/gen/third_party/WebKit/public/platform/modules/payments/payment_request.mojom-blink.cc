// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#elif defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4056)
#pragma warning(disable:4065)
#pragma warning(disable:4756)
#endif

#include "third_party/WebKit/public/platform/modules/payments/payment_request.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/logging.h"
#include "base/trace_event/trace_event.h"
#include "mojo/public/cpp/bindings/lib/message_builder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_context.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
namespace blink {
namespace mojom {
namespace blink {

namespace {

class PaymentRequestClient_OnShippingAddressChange_ParamsDataView {
 public:
  PaymentRequestClient_OnShippingAddressChange_ParamsDataView() {}

  PaymentRequestClient_OnShippingAddressChange_ParamsDataView(
      internal::PaymentRequestClient_OnShippingAddressChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetAddressDataView(
      PaymentAddressDataView* output);

  template <typename UserType>
  bool ReadAddress(UserType* output) {
    auto pointer = data_->address.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::PaymentAddressPtr>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequestClient_OnShippingAddressChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PaymentRequestClient_OnShippingAddressChange_ParamsDataView::GetAddressDataView(
    PaymentAddressDataView* output) {
  auto pointer = data_->address.Get();
  *output = PaymentAddressDataView(pointer, context_);
}


class PaymentRequestClient_OnShippingOptionChange_ParamsDataView {
 public:
  PaymentRequestClient_OnShippingOptionChange_ParamsDataView() {}

  PaymentRequestClient_OnShippingOptionChange_ParamsDataView(
      internal::PaymentRequestClient_OnShippingOptionChange_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetShippingOptionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadShippingOptionId(UserType* output) {
    auto pointer = data_->shipping_option_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequestClient_OnShippingOptionChange_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PaymentRequestClient_OnShippingOptionChange_ParamsDataView::GetShippingOptionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->shipping_option_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class PaymentRequestClient_OnPaymentResponse_ParamsDataView {
 public:
  PaymentRequestClient_OnPaymentResponse_ParamsDataView() {}

  PaymentRequestClient_OnPaymentResponse_ParamsDataView(
      internal::PaymentRequestClient_OnPaymentResponse_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      PaymentResponseDataView* output);

  template <typename UserType>
  bool ReadResponse(UserType* output) {
    auto pointer = data_->response.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::PaymentResponsePtr>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequestClient_OnPaymentResponse_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PaymentRequestClient_OnPaymentResponse_ParamsDataView::GetResponseDataView(
    PaymentResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = PaymentResponseDataView(pointer, context_);
}


class PaymentRequestClient_OnError_ParamsDataView {
 public:
  PaymentRequestClient_OnError_ParamsDataView() {}

  PaymentRequestClient_OnError_ParamsDataView(
      internal::PaymentRequestClient_OnError_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::blink::mojom::blink::PaymentErrorReason>(
        data_value, output);
  }

  ::blink::mojom::blink::PaymentErrorReason error() const {
    return static_cast<::blink::mojom::blink::PaymentErrorReason>(data_->error);
  }
 private:
  internal::PaymentRequestClient_OnError_Params_Data* data_ = nullptr;
};




class PaymentRequestClient_OnComplete_ParamsDataView {
 public:
  PaymentRequestClient_OnComplete_ParamsDataView() {}

  PaymentRequestClient_OnComplete_ParamsDataView(
      internal::PaymentRequestClient_OnComplete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentRequestClient_OnComplete_Params_Data* data_ = nullptr;
};




class PaymentRequestClient_OnAbort_ParamsDataView {
 public:
  PaymentRequestClient_OnAbort_ParamsDataView() {}

  PaymentRequestClient_OnAbort_ParamsDataView(
      internal::PaymentRequestClient_OnAbort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool aborted_successfully() const {
    return data_->aborted_successfully;
  }
 private:
  internal::PaymentRequestClient_OnAbort_Params_Data* data_ = nullptr;
};




class PaymentRequest_SetClient_ParamsDataView {
 public:
  PaymentRequest_SetClient_ParamsDataView() {}

  PaymentRequest_SetClient_ParamsDataView(
      internal::PaymentRequest_SetClient_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  PaymentRequestClientPtr TakeClient() {
    PaymentRequestClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::blink::mojom::blink::PaymentRequestClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PaymentRequest_SetClient_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class PaymentRequest_Show_ParamsDataView {
 public:
  PaymentRequest_Show_ParamsDataView() {}

  PaymentRequest_Show_ParamsDataView(
      internal::PaymentRequest_Show_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMethoddataDataView(
      mojo::ArrayDataView<PaymentMethodDataDataView>* output);

  template <typename UserType>
  bool ReadMethoddata(UserType* output) {
    auto pointer = data_->methodData.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::blink::PaymentMethodDataPtr>>(
        pointer, output, context_);
  }
  inline void GetDetailsDataView(
      PaymentDetailsDataView* output);

  template <typename UserType>
  bool ReadDetails(UserType* output) {
    auto pointer = data_->details.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::PaymentDetailsPtr>(
        pointer, output, context_);
  }
  inline void GetOptionsDataView(
      PaymentOptionsDataView* output);

  template <typename UserType>
  bool ReadOptions(UserType* output) {
    auto pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::PaymentOptionsPtr>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequest_Show_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PaymentRequest_Show_ParamsDataView::GetMethoddataDataView(
    mojo::ArrayDataView<PaymentMethodDataDataView>* output) {
  auto pointer = data_->methodData.Get();
  *output = mojo::ArrayDataView<PaymentMethodDataDataView>(pointer, context_);
}
inline void PaymentRequest_Show_ParamsDataView::GetDetailsDataView(
    PaymentDetailsDataView* output) {
  auto pointer = data_->details.Get();
  *output = PaymentDetailsDataView(pointer, context_);
}
inline void PaymentRequest_Show_ParamsDataView::GetOptionsDataView(
    PaymentOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PaymentOptionsDataView(pointer, context_);
}


class PaymentRequest_UpdateWith_ParamsDataView {
 public:
  PaymentRequest_UpdateWith_ParamsDataView() {}

  PaymentRequest_UpdateWith_ParamsDataView(
      internal::PaymentRequest_UpdateWith_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDetailsDataView(
      PaymentDetailsDataView* output);

  template <typename UserType>
  bool ReadDetails(UserType* output) {
    auto pointer = data_->details.Get();
    return mojo::internal::Deserialize<::blink::mojom::blink::PaymentDetailsPtr>(
        pointer, output, context_);
  }
 private:
  internal::PaymentRequest_UpdateWith_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void PaymentRequest_UpdateWith_ParamsDataView::GetDetailsDataView(
    PaymentDetailsDataView* output) {
  auto pointer = data_->details.Get();
  *output = PaymentDetailsDataView(pointer, context_);
}


class PaymentRequest_Abort_ParamsDataView {
 public:
  PaymentRequest_Abort_ParamsDataView() {}

  PaymentRequest_Abort_ParamsDataView(
      internal::PaymentRequest_Abort_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentRequest_Abort_Params_Data* data_ = nullptr;
};




class PaymentRequest_Complete_ParamsDataView {
 public:
  PaymentRequest_Complete_ParamsDataView() {}

  PaymentRequest_Complete_ParamsDataView(
      internal::PaymentRequest_Complete_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::blink::mojom::blink::PaymentComplete>(
        data_value, output);
  }

  ::blink::mojom::blink::PaymentComplete result() const {
    return static_cast<::blink::mojom::blink::PaymentComplete>(data_->result);
  }
 private:
  internal::PaymentRequest_Complete_Params_Data* data_ = nullptr;
};




}  // namespace// static
PaymentAddressPtr PaymentAddress::New() {
  PaymentAddressPtr rv;
  mojo::internal::StructHelper<PaymentAddress>::Initialize(&rv);
  return rv;
}

PaymentAddress::PaymentAddress()
    : country(),
      address_line(nullptr),
      region(),
      city(),
      dependent_locality(),
      postal_code(),
      sorting_code(),
      language_code(),
      script_code(),
      organization(),
      recipient(),
      careOf(),
      phone() {
}

PaymentAddress::~PaymentAddress() {
}// static
PaymentCurrencyAmountPtr PaymentCurrencyAmount::New() {
  PaymentCurrencyAmountPtr rv;
  mojo::internal::StructHelper<PaymentCurrencyAmount>::Initialize(&rv);
  return rv;
}

PaymentCurrencyAmount::PaymentCurrencyAmount()
    : currency(),
      value() {
}

PaymentCurrencyAmount::~PaymentCurrencyAmount() {
}// static
PaymentResponsePtr PaymentResponse::New() {
  PaymentResponsePtr rv;
  mojo::internal::StructHelper<PaymentResponse>::Initialize(&rv);
  return rv;
}

PaymentResponse::PaymentResponse()
    : method_name(),
      stringified_details(),
      shipping_address(),
      shipping_option(),
      payer_email(),
      payer_phone() {
}

PaymentResponse::~PaymentResponse() {
}// static
PaymentItemPtr PaymentItem::New() {
  PaymentItemPtr rv;
  mojo::internal::StructHelper<PaymentItem>::Initialize(&rv);
  return rv;
}

PaymentItem::PaymentItem()
    : label(),
      amount() {
}

PaymentItem::~PaymentItem() {
}// static
PaymentShippingOptionPtr PaymentShippingOption::New() {
  PaymentShippingOptionPtr rv;
  mojo::internal::StructHelper<PaymentShippingOption>::Initialize(&rv);
  return rv;
}

PaymentShippingOption::PaymentShippingOption()
    : id(),
      label(),
      amount(),
      selected() {
}

PaymentShippingOption::~PaymentShippingOption() {
}// static
PaymentDetailsModifierPtr PaymentDetailsModifier::New() {
  PaymentDetailsModifierPtr rv;
  mojo::internal::StructHelper<PaymentDetailsModifier>::Initialize(&rv);
  return rv;
}

PaymentDetailsModifier::PaymentDetailsModifier()
    : supported_methods(nullptr),
      total(),
      additional_display_items(nullptr) {
}

PaymentDetailsModifier::~PaymentDetailsModifier() {
}// static
PaymentDetailsPtr PaymentDetails::New() {
  PaymentDetailsPtr rv;
  mojo::internal::StructHelper<PaymentDetails>::Initialize(&rv);
  return rv;
}

PaymentDetails::PaymentDetails()
    : total(),
      display_items(nullptr),
      shipping_options(nullptr),
      modifiers(nullptr) {
}

PaymentDetails::~PaymentDetails() {
}// static
PaymentOptionsPtr PaymentOptions::New() {
  PaymentOptionsPtr rv;
  mojo::internal::StructHelper<PaymentOptions>::Initialize(&rv);
  return rv;
}

PaymentOptions::PaymentOptions()
    : request_payer_email(),
      request_payer_phone(),
      request_shipping() {
}

PaymentOptions::~PaymentOptions() {
}// static
PaymentMethodDataPtr PaymentMethodData::New() {
  PaymentMethodDataPtr rv;
  mojo::internal::StructHelper<PaymentMethodData>::Initialize(&rv);
  return rv;
}

PaymentMethodData::PaymentMethodData()
    : supported_methods(nullptr),
      stringified_data() {
}

PaymentMethodData::~PaymentMethodData() {
}
const char PaymentRequestClient::Name_[] = "blink::mojom::PaymentRequestClient";
const uint32_t PaymentRequestClient::Version_;

PaymentRequestClientProxy::PaymentRequestClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void PaymentRequestClientProxy::OnShippingAddressChange(
    PaymentAddressPtr in_address) {
  size_t size = sizeof(::blink::mojom::internal::PaymentRequestClient_OnShippingAddressChange_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::PaymentAddressPtr>(
      in_address, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPaymentRequestClient_OnShippingAddressChange_Name, size);

  auto params =
      ::blink::mojom::internal::PaymentRequestClient_OnShippingAddressChange_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->address)::BaseType* address_ptr;
  mojo::internal::Serialize<::blink::mojom::blink::PaymentAddressPtr>(
      in_address, builder.buffer(), &address_ptr, &serialization_context_);
  params->address.Set(address_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->address.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null address in PaymentRequestClient.OnShippingAddressChange request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PaymentRequestClientProxy::OnShippingOptionChange(
    const WTF::String& in_shipping_option_id) {
  size_t size = sizeof(::blink::mojom::internal::PaymentRequestClient_OnShippingOptionChange_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_shipping_option_id, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPaymentRequestClient_OnShippingOptionChange_Name, size);

  auto params =
      ::blink::mojom::internal::PaymentRequestClient_OnShippingOptionChange_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->shipping_option_id)::BaseType* shipping_option_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_shipping_option_id, builder.buffer(), &shipping_option_id_ptr, &serialization_context_);
  params->shipping_option_id.Set(shipping_option_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->shipping_option_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null shipping_option_id in PaymentRequestClient.OnShippingOptionChange request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PaymentRequestClientProxy::OnPaymentResponse(
    PaymentResponsePtr in_response) {
  size_t size = sizeof(::blink::mojom::internal::PaymentRequestClient_OnPaymentResponse_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::PaymentResponsePtr>(
      in_response, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPaymentRequestClient_OnPaymentResponse_Name, size);

  auto params =
      ::blink::mojom::internal::PaymentRequestClient_OnPaymentResponse_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->response)::BaseType* response_ptr;
  mojo::internal::Serialize<::blink::mojom::blink::PaymentResponsePtr>(
      in_response, builder.buffer(), &response_ptr, &serialization_context_);
  params->response.Set(response_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->response.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null response in PaymentRequestClient.OnPaymentResponse request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PaymentRequestClientProxy::OnError(
    PaymentErrorReason in_error) {
  size_t size = sizeof(::blink::mojom::internal::PaymentRequestClient_OnError_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPaymentRequestClient_OnError_Name, size);

  auto params =
      ::blink::mojom::internal::PaymentRequestClient_OnError_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::PaymentErrorReason>(
      in_error, &params->error);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PaymentRequestClientProxy::OnComplete(
    ) {
  size_t size = sizeof(::blink::mojom::internal::PaymentRequestClient_OnComplete_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPaymentRequestClient_OnComplete_Name, size);

  auto params =
      ::blink::mojom::internal::PaymentRequestClient_OnComplete_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PaymentRequestClientProxy::OnAbort(
    bool in_aborted_successfully) {
  size_t size = sizeof(::blink::mojom::internal::PaymentRequestClient_OnAbort_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPaymentRequestClient_OnAbort_Name, size);

  auto params =
      ::blink::mojom::internal::PaymentRequestClient_OnAbort_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->aborted_successfully = in_aborted_successfully;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

PaymentRequestClientStub::PaymentRequestClientStub()
    : sink_(nullptr),
      control_message_handler_(PaymentRequestClient::Version_) {
}

PaymentRequestClientStub::~PaymentRequestClientStub() {}

bool PaymentRequestClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPaymentRequestClient_OnShippingAddressChange_Name: {
      internal::PaymentRequestClient_OnShippingAddressChange_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnShippingAddressChange_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PaymentAddressPtr p_address{};
      PaymentRequestClient_OnShippingAddressChange_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadAddress(&p_address))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnShippingAddressChange deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PaymentRequestClient::OnShippingAddressChange");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnShippingAddressChange(
std::move(p_address));
      return true;
    }
    case internal::kPaymentRequestClient_OnShippingOptionChange_Name: {
      internal::PaymentRequestClient_OnShippingOptionChange_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnShippingOptionChange_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WTF::String p_shipping_option_id{};
      PaymentRequestClient_OnShippingOptionChange_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadShippingOptionId(&p_shipping_option_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnShippingOptionChange deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PaymentRequestClient::OnShippingOptionChange");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnShippingOptionChange(
std::move(p_shipping_option_id));
      return true;
    }
    case internal::kPaymentRequestClient_OnPaymentResponse_Name: {
      internal::PaymentRequestClient_OnPaymentResponse_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnPaymentResponse_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PaymentResponsePtr p_response{};
      PaymentRequestClient_OnPaymentResponse_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadResponse(&p_response))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnPaymentResponse deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PaymentRequestClient::OnPaymentResponse");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnPaymentResponse(
std::move(p_response));
      return true;
    }
    case internal::kPaymentRequestClient_OnError_Name: {
      internal::PaymentRequestClient_OnError_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnError_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PaymentErrorReason p_error{};
      PaymentRequestClient_OnError_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnError deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PaymentRequestClient::OnError");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnError(
std::move(p_error));
      return true;
    }
    case internal::kPaymentRequestClient_OnComplete_Name: {
      internal::PaymentRequestClient_OnComplete_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnComplete_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PaymentRequestClient_OnComplete_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnComplete deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PaymentRequestClient::OnComplete");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnComplete();
      return true;
    }
    case internal::kPaymentRequestClient_OnAbort_Name: {
      internal::PaymentRequestClient_OnAbort_Params_Data* params =
          reinterpret_cast<internal::PaymentRequestClient_OnAbort_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      bool p_aborted_successfully{};
      PaymentRequestClient_OnAbort_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_aborted_successfully = input_data_view.aborted_successfully();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequestClient::OnAbort deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PaymentRequestClient::OnAbort");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnAbort(
std::move(p_aborted_successfully));
      return true;
    }
  }
  return false;
}

bool PaymentRequestClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPaymentRequestClient_OnShippingAddressChange_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnShippingOptionChange_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnPaymentResponse_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnError_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnComplete_Name: {
      break;
    }
    case internal::kPaymentRequestClient_OnAbort_Name: {
      break;
    }
  }
  return false;
}

PaymentRequestClientRequestValidator::PaymentRequestClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PaymentRequestClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "PaymentRequestClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPaymentRequestClient_OnShippingAddressChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnShippingAddressChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPaymentRequestClient_OnShippingOptionChange_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnShippingOptionChange_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPaymentRequestClient_OnPaymentResponse_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnPaymentResponse_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPaymentRequestClient_OnError_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnError_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPaymentRequestClient_OnComplete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnComplete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPaymentRequestClient_OnAbort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequestClient_OnAbort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

const char PaymentRequest::Name_[] = "blink::mojom::PaymentRequest";
const uint32_t PaymentRequest::Version_;

PaymentRequestProxy::PaymentRequestProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void PaymentRequestProxy::SetClient(
    PaymentRequestClientPtr in_client) {
  size_t size = sizeof(::blink::mojom::internal::PaymentRequest_SetClient_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPaymentRequest_SetClient_Name, size);

  auto params =
      ::blink::mojom::internal::PaymentRequest_SetClient_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::PaymentRequestClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in PaymentRequest.SetClient request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PaymentRequestProxy::Show(
    mojo::WTFArray<PaymentMethodDataPtr> in_methodData, PaymentDetailsPtr in_details, PaymentOptionsPtr in_options) {
  size_t size = sizeof(::blink::mojom::internal::PaymentRequest_Show_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::blink::PaymentMethodDataPtr>>(
      in_methodData, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::PaymentDetailsPtr>(
      in_details, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::PaymentOptionsPtr>(
      in_options, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPaymentRequest_Show_Name, size);

  auto params =
      ::blink::mojom::internal::PaymentRequest_Show_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->methodData)::BaseType* methodData_ptr;
  const mojo::internal::ContainerValidateParams methodData_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::blink::mojom::blink::PaymentMethodDataPtr>>(
      in_methodData, builder.buffer(), &methodData_ptr, &methodData_validate_params,
      &serialization_context_);
  params->methodData.Set(methodData_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->methodData.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null methodData in PaymentRequest.Show request");
  typename decltype(params->details)::BaseType* details_ptr;
  mojo::internal::Serialize<::blink::mojom::blink::PaymentDetailsPtr>(
      in_details, builder.buffer(), &details_ptr, &serialization_context_);
  params->details.Set(details_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null details in PaymentRequest.Show request");
  typename decltype(params->options)::BaseType* options_ptr;
  mojo::internal::Serialize<::blink::mojom::blink::PaymentOptionsPtr>(
      in_options, builder.buffer(), &options_ptr, &serialization_context_);
  params->options.Set(options_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in PaymentRequest.Show request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PaymentRequestProxy::UpdateWith(
    PaymentDetailsPtr in_details) {
  size_t size = sizeof(::blink::mojom::internal::PaymentRequest_UpdateWith_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::blink::PaymentDetailsPtr>(
      in_details, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kPaymentRequest_UpdateWith_Name, size);

  auto params =
      ::blink::mojom::internal::PaymentRequest_UpdateWith_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->details)::BaseType* details_ptr;
  mojo::internal::Serialize<::blink::mojom::blink::PaymentDetailsPtr>(
      in_details, builder.buffer(), &details_ptr, &serialization_context_);
  params->details.Set(details_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->details.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null details in PaymentRequest.UpdateWith request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PaymentRequestProxy::Abort(
    ) {
  size_t size = sizeof(::blink::mojom::internal::PaymentRequest_Abort_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPaymentRequest_Abort_Name, size);

  auto params =
      ::blink::mojom::internal::PaymentRequest_Abort_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void PaymentRequestProxy::Complete(
    PaymentComplete in_result) {
  size_t size = sizeof(::blink::mojom::internal::PaymentRequest_Complete_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPaymentRequest_Complete_Name, size);

  auto params =
      ::blink::mojom::internal::PaymentRequest_Complete_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::blink::PaymentComplete>(
      in_result, &params->result);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

PaymentRequestStub::PaymentRequestStub()
    : sink_(nullptr),
      control_message_handler_(PaymentRequest::Version_) {
}

PaymentRequestStub::~PaymentRequestStub() {}

bool PaymentRequestStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPaymentRequest_SetClient_Name: {
      internal::PaymentRequest_SetClient_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_SetClient_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PaymentRequestClientPtr p_client{};
      PaymentRequest_SetClient_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_client = input_data_view.TakeClient();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequest::SetClient deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PaymentRequest::SetClient");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetClient(
std::move(p_client));
      return true;
    }
    case internal::kPaymentRequest_Show_Name: {
      internal::PaymentRequest_Show_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_Show_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::WTFArray<PaymentMethodDataPtr> p_methodData{};
      PaymentDetailsPtr p_details{};
      PaymentOptionsPtr p_options{};
      PaymentRequest_Show_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadMethoddata(&p_methodData))
        success = false;
      if (!input_data_view.ReadDetails(&p_details))
        success = false;
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequest::Show deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PaymentRequest::Show");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Show(
std::move(p_methodData), 
std::move(p_details), 
std::move(p_options));
      return true;
    }
    case internal::kPaymentRequest_UpdateWith_Name: {
      internal::PaymentRequest_UpdateWith_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_UpdateWith_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PaymentDetailsPtr p_details{};
      PaymentRequest_UpdateWith_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDetails(&p_details))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequest::UpdateWith deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PaymentRequest::UpdateWith");
      mojo::internal::MessageDispatchContext context(message);
      sink_->UpdateWith(
std::move(p_details));
      return true;
    }
    case internal::kPaymentRequest_Abort_Name: {
      internal::PaymentRequest_Abort_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_Abort_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PaymentRequest_Abort_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequest::Abort deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PaymentRequest::Abort");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Abort();
      return true;
    }
    case internal::kPaymentRequest_Complete_Name: {
      internal::PaymentRequest_Complete_Params_Data* params =
          reinterpret_cast<internal::PaymentRequest_Complete_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      PaymentComplete p_result{};
      PaymentRequest_Complete_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadResult(&p_result))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PaymentRequest::Complete deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PaymentRequest::Complete");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Complete(
std::move(p_result));
      return true;
    }
  }
  return false;
}

bool PaymentRequestStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPaymentRequest_SetClient_Name: {
      break;
    }
    case internal::kPaymentRequest_Show_Name: {
      break;
    }
    case internal::kPaymentRequest_UpdateWith_Name: {
      break;
    }
    case internal::kPaymentRequest_Abort_Name: {
      break;
    }
    case internal::kPaymentRequest_Complete_Name: {
      break;
    }
  }
  return false;
}

PaymentRequestRequestValidator::PaymentRequestRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PaymentRequestRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "PaymentRequest RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPaymentRequest_SetClient_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_SetClient_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPaymentRequest_Show_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_Show_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPaymentRequest_UpdateWith_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_UpdateWith_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPaymentRequest_Abort_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_Abort_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kPaymentRequest_Complete_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PaymentRequest_Complete_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    default:
      break;
  }

  // Unrecognized message.
  ReportValidationError(
      &validation_context,
      mojo::internal::VALIDATION_ERROR_MESSAGE_HEADER_UNKNOWN_METHOD);
  return false;
}

}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::PaymentAddress, ::blink::mojom::blink::PaymentAddressPtr>::Read(
    ::blink::mojom::blink::PaymentAddressDataView input,
    ::blink::mojom::blink::PaymentAddressPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PaymentAddressPtr result(::blink::mojom::blink::PaymentAddress::New());
  
      if (!input.ReadCountry(&result->country))
        success = false;
      if (!input.ReadAddressLine(&result->address_line))
        success = false;
      if (!input.ReadRegion(&result->region))
        success = false;
      if (!input.ReadCity(&result->city))
        success = false;
      if (!input.ReadDependentLocality(&result->dependent_locality))
        success = false;
      if (!input.ReadPostalCode(&result->postal_code))
        success = false;
      if (!input.ReadSortingCode(&result->sorting_code))
        success = false;
      if (!input.ReadLanguageCode(&result->language_code))
        success = false;
      if (!input.ReadScriptCode(&result->script_code))
        success = false;
      if (!input.ReadOrganization(&result->organization))
        success = false;
      if (!input.ReadRecipient(&result->recipient))
        success = false;
      if (!input.ReadCareof(&result->careOf))
        success = false;
      if (!input.ReadPhone(&result->phone))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PaymentCurrencyAmount, ::blink::mojom::blink::PaymentCurrencyAmountPtr>::Read(
    ::blink::mojom::blink::PaymentCurrencyAmountDataView input,
    ::blink::mojom::blink::PaymentCurrencyAmountPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PaymentCurrencyAmountPtr result(::blink::mojom::blink::PaymentCurrencyAmount::New());
  
      if (!input.ReadCurrency(&result->currency))
        success = false;
      if (!input.ReadValue(&result->value))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PaymentResponse, ::blink::mojom::blink::PaymentResponsePtr>::Read(
    ::blink::mojom::blink::PaymentResponseDataView input,
    ::blink::mojom::blink::PaymentResponsePtr* output) {
  bool success = true;
  ::blink::mojom::blink::PaymentResponsePtr result(::blink::mojom::blink::PaymentResponse::New());
  
      if (!input.ReadMethodName(&result->method_name))
        success = false;
      if (!input.ReadStringifiedDetails(&result->stringified_details))
        success = false;
      if (!input.ReadShippingAddress(&result->shipping_address))
        success = false;
      if (!input.ReadShippingOption(&result->shipping_option))
        success = false;
      if (!input.ReadPayerEmail(&result->payer_email))
        success = false;
      if (!input.ReadPayerPhone(&result->payer_phone))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PaymentItem, ::blink::mojom::blink::PaymentItemPtr>::Read(
    ::blink::mojom::blink::PaymentItemDataView input,
    ::blink::mojom::blink::PaymentItemPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PaymentItemPtr result(::blink::mojom::blink::PaymentItem::New());
  
      if (!input.ReadLabel(&result->label))
        success = false;
      if (!input.ReadAmount(&result->amount))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PaymentShippingOption, ::blink::mojom::blink::PaymentShippingOptionPtr>::Read(
    ::blink::mojom::blink::PaymentShippingOptionDataView input,
    ::blink::mojom::blink::PaymentShippingOptionPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PaymentShippingOptionPtr result(::blink::mojom::blink::PaymentShippingOption::New());
  
      if (!input.ReadId(&result->id))
        success = false;
      if (!input.ReadLabel(&result->label))
        success = false;
      if (!input.ReadAmount(&result->amount))
        success = false;
      result->selected = input.selected();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PaymentDetailsModifier, ::blink::mojom::blink::PaymentDetailsModifierPtr>::Read(
    ::blink::mojom::blink::PaymentDetailsModifierDataView input,
    ::blink::mojom::blink::PaymentDetailsModifierPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PaymentDetailsModifierPtr result(::blink::mojom::blink::PaymentDetailsModifier::New());
  
      if (!input.ReadSupportedMethods(&result->supported_methods))
        success = false;
      if (!input.ReadTotal(&result->total))
        success = false;
      if (!input.ReadAdditionalDisplayItems(&result->additional_display_items))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PaymentDetails, ::blink::mojom::blink::PaymentDetailsPtr>::Read(
    ::blink::mojom::blink::PaymentDetailsDataView input,
    ::blink::mojom::blink::PaymentDetailsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PaymentDetailsPtr result(::blink::mojom::blink::PaymentDetails::New());
  
      if (!input.ReadTotal(&result->total))
        success = false;
      if (!input.ReadDisplayItems(&result->display_items))
        success = false;
      if (!input.ReadShippingOptions(&result->shipping_options))
        success = false;
      if (!input.ReadModifiers(&result->modifiers))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PaymentOptions, ::blink::mojom::blink::PaymentOptionsPtr>::Read(
    ::blink::mojom::blink::PaymentOptionsDataView input,
    ::blink::mojom::blink::PaymentOptionsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PaymentOptionsPtr result(::blink::mojom::blink::PaymentOptions::New());
  
      result->request_payer_email = input.request_payer_email();
      result->request_payer_phone = input.request_payer_phone();
      result->request_shipping = input.request_shipping();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PaymentMethodData, ::blink::mojom::blink::PaymentMethodDataPtr>::Read(
    ::blink::mojom::blink::PaymentMethodDataDataView input,
    ::blink::mojom::blink::PaymentMethodDataPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PaymentMethodDataPtr result(::blink::mojom::blink::PaymentMethodData::New());
  
      if (!input.ReadSupportedMethods(&result->supported_methods))
        success = false;
      if (!input.ReadStringifiedData(&result->stringified_data))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif