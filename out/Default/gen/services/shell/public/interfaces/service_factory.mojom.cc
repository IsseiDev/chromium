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

#include "services/shell/public/interfaces/service_factory.mojom.h"

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
#include "services/shell/public/cpp/capabilities_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "services/shell/public/cpp/identity_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
namespace shell {
namespace mojom {

namespace {

class ServiceFactory_CreateService_ParamsDataView {
 public:
  ServiceFactory_CreateService_ParamsDataView() {}

  ServiceFactory_CreateService_ParamsDataView(
      internal::ServiceFactory_CreateService_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::shell::mojom::ServiceRequest TakeService() {
    ::shell::mojom::ServiceRequest result;
    bool ret =
        mojo::internal::Deserialize<::shell::mojom::ServiceRequest>(
            &data_->service, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::ServiceFactory_CreateService_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ServiceFactory_CreateService_ParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


}  // namespace
const char ServiceFactory::Name_[] = "shell::mojom::ServiceFactory";
const uint32_t ServiceFactory::Version_;

ServiceFactoryProxy::ServiceFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ServiceFactoryProxy::CreateService(
    ::shell::mojom::ServiceRequest in_service, const std::string& in_name) {
  size_t size = sizeof(::shell::mojom::internal::ServiceFactory_CreateService_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_name, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kServiceFactory_CreateService_Name, size);

  auto params =
      ::shell::mojom::internal::ServiceFactory_CreateService_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::shell::mojom::ServiceRequest>(
      in_service, &params->service, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->service),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid service in ServiceFactory.CreateService request");
  typename decltype(params->name)::BaseType* name_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_name, builder.buffer(), &name_ptr, &serialization_context_);
  params->name.Set(name_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name in ServiceFactory.CreateService request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

ServiceFactoryStub::ServiceFactoryStub()
    : sink_(nullptr),
      control_message_handler_(ServiceFactory::Version_) {
}

ServiceFactoryStub::~ServiceFactoryStub() {}

bool ServiceFactoryStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kServiceFactory_CreateService_Name: {
      internal::ServiceFactory_CreateService_Params_Data* params =
          reinterpret_cast<internal::ServiceFactory_CreateService_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::shell::mojom::ServiceRequest p_service{};
      std::string p_name{};
      ServiceFactory_CreateService_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_service = input_data_view.TakeService();
      if (!input_data_view.ReadName(&p_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceFactory::CreateService deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServiceFactory::CreateService");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateService(
std::move(p_service), 
std::move(p_name));
      return true;
    }
  }
  return false;
}

bool ServiceFactoryStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kServiceFactory_CreateService_Name: {
      break;
    }
  }
  return false;
}

ServiceFactoryRequestValidator::ServiceFactoryRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ServiceFactoryRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ServiceFactory RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kServiceFactory_CreateService_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceFactory_CreateService_Params_Data>(
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

}  // namespace mojom
}  // namespace shell

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif