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

#include "device/usb/public/interfaces/chooser_service.mojom-blink.h"

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
namespace device {
namespace usb {
namespace blink {

namespace {

class ChooserService_GetPermission_ParamsDataView {
 public:
  ChooserService_GetPermission_ParamsDataView() {}

  ChooserService_GetPermission_ParamsDataView(
      internal::ChooserService_GetPermission_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceFiltersDataView(
      mojo::ArrayDataView<::device::usb::blink::DeviceFilterDataView>* output);

  template <typename UserType>
  bool ReadDeviceFilters(UserType* output) {
    auto pointer = data_->device_filters.Get();
    return mojo::internal::Deserialize<mojo::Array<::device::usb::blink::DeviceFilterPtr>>(
        pointer, output, context_);
  }
 private:
  internal::ChooserService_GetPermission_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ChooserService_GetPermission_ParamsDataView::GetDeviceFiltersDataView(
    mojo::ArrayDataView<::device::usb::blink::DeviceFilterDataView>* output) {
  auto pointer = data_->device_filters.Get();
  *output = mojo::ArrayDataView<::device::usb::blink::DeviceFilterDataView>(pointer, context_);
}

class ChooserService_GetPermission_ResponseParamsDataView {
 public:
  ChooserService_GetPermission_ResponseParamsDataView() {}

  ChooserService_GetPermission_ResponseParamsDataView(
      internal::ChooserService_GetPermission_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::device::usb::blink::DeviceInfoDataView* output);

  template <typename UserType>
  bool ReadResult(UserType* output) {
    auto pointer = data_->result.Get();
    return mojo::internal::Deserialize<::device::usb::blink::DeviceInfoPtr>(
        pointer, output, context_);
  }
 private:
  internal::ChooserService_GetPermission_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ChooserService_GetPermission_ResponseParamsDataView::GetResultDataView(
    ::device::usb::blink::DeviceInfoDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::device::usb::blink::DeviceInfoDataView(pointer, context_);
}


}  // namespace
const char ChooserService::Name_[] = "device::usb::ChooserService";
const uint32_t ChooserService::Version_;

class ChooserService_GetPermission_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ChooserService_GetPermission_ForwardToCallback(
      const ChooserService::GetPermissionCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ChooserService::GetPermissionCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ChooserService_GetPermission_ForwardToCallback);
};
bool ChooserService_GetPermission_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ChooserService_GetPermission_ResponseParams_Data* params =
      reinterpret_cast<internal::ChooserService_GetPermission_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::device::usb::blink::DeviceInfoPtr p_result{};
  ChooserService_GetPermission_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ChooserService::GetPermission response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_result));
  }
  return true;
}

ChooserServiceProxy::ChooserServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ChooserServiceProxy::GetPermission(
    WTF::Vector<::device::usb::blink::DeviceFilterPtr> in_device_filters, const GetPermissionCallback& callback) {
  size_t size = sizeof(::device::usb::internal::ChooserService_GetPermission_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::device::usb::blink::DeviceFilterPtr>>(
      in_device_filters, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kChooserService_GetPermission_Name, size);

  auto params =
      ::device::usb::internal::ChooserService_GetPermission_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->device_filters)::BaseType* device_filters_ptr;
  const mojo::internal::ContainerValidateParams device_filters_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::device::usb::blink::DeviceFilterPtr>>(
      in_device_filters, builder.buffer(), &device_filters_ptr, &device_filters_validate_params,
      &serialization_context_);
  params->device_filters.Set(device_filters_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->device_filters.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null device_filters in ChooserService.GetPermission request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ChooserService_GetPermission_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ChooserService_GetPermission_ProxyToResponder {
 public:
  static ChooserService::GetPermissionCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ChooserService_GetPermission_ProxyToResponder> proxy(
        new ChooserService_GetPermission_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ChooserService_GetPermission_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ChooserService_GetPermission_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ChooserService::GetPermission() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ChooserService_GetPermission_ProxyToResponder(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : request_id_(request_id),
        is_sync_(is_sync),
        responder_(responder),
        serialization_context_(std::move(group_controller)) {
  }

  void Run(
      ::device::usb::blink::DeviceInfoPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ChooserService_GetPermission_ProxyToResponder);
};

void ChooserService_GetPermission_ProxyToResponder::Run(
    ::device::usb::blink::DeviceInfoPtr in_result) {
  size_t size = sizeof(::device::usb::internal::ChooserService_GetPermission_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::device::usb::blink::DeviceInfoPtr>(
      in_result, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kChooserService_GetPermission_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::device::usb::internal::ChooserService_GetPermission_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->result)::BaseType* result_ptr;
  mojo::internal::Serialize<::device::usb::blink::DeviceInfoPtr>(
      in_result, builder.buffer(), &result_ptr, &serialization_context_);
  params->result.Set(result_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = responder_->Accept(builder.message());
  ALLOW_UNUSED_LOCAL(ok);
  // TODO(darin): !ok returned here indicates a malformed message, and that may
  // be good reason to close the connection. However, we don't have a way to do
  // that from here. We should add a way.
  delete responder_;
  responder_ = nullptr;
}

ChooserServiceStub::ChooserServiceStub()
    : sink_(nullptr),
      control_message_handler_(ChooserService::Version_) {
}

ChooserServiceStub::~ChooserServiceStub() {}

bool ChooserServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kChooserService_GetPermission_Name: {
      break;
    }
  }
  return false;
}

bool ChooserServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kChooserService_GetPermission_Name: {
      internal::ChooserService_GetPermission_Params_Data* params =
          reinterpret_cast<internal::ChooserService_GetPermission_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      WTF::Vector<::device::usb::blink::DeviceFilterPtr> p_device_filters{};
      ChooserService_GetPermission_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDeviceFilters(&p_device_filters))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ChooserService::GetPermission deserializer");
        return false;
      }
      ChooserService::GetPermissionCallback callback =
          ChooserService_GetPermission_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ChooserService::GetPermission");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetPermission(
std::move(p_device_filters), callback);
      return true;
    }
  }
  return false;
}

ChooserServiceRequestValidator::ChooserServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ChooserServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ChooserService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kChooserService_GetPermission_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChooserService_GetPermission_Params_Data>(
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

ChooserServiceResponseValidator::ChooserServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ChooserServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ChooserService ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kChooserService_GetPermission_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ChooserService_GetPermission_ResponseParams_Data>(
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
}  // namespace usb
}  // namespace device

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif