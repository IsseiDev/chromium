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

#include "services/shell/public/interfaces/interface_provider.mojom.h"

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

class InterfaceProvider_GetInterface_ParamsDataView {
 public:
  InterfaceProvider_GetInterface_ParamsDataView() {}

  InterfaceProvider_GetInterface_ParamsDataView(
      internal::InterfaceProvider_GetInterface_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInterfaceNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadInterfaceName(UserType* output) {
    auto pointer = data_->interface_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  mojo::ScopedMessagePipeHandle TakePipe() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::InterfaceProvider_GetInterface_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void InterfaceProvider_GetInterface_ParamsDataView::GetInterfaceNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->interface_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}


}  // namespace
const char InterfaceProvider::Name_[] = "shell::mojom::InterfaceProvider";
const uint32_t InterfaceProvider::Version_;

InterfaceProviderProxy::InterfaceProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void InterfaceProviderProxy::GetInterface(
    const std::string& in_interface_name, mojo::ScopedMessagePipeHandle in_pipe) {
  size_t size = sizeof(::shell::mojom::internal::InterfaceProvider_GetInterface_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_interface_name, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kInterfaceProvider_GetInterface_Name, size);

  auto params =
      ::shell::mojom::internal::InterfaceProvider_GetInterface_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->interface_name)::BaseType* interface_name_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_interface_name, builder.buffer(), &interface_name_ptr, &serialization_context_);
  params->interface_name.Set(interface_name_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->interface_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null interface_name in InterfaceProvider.GetInterface request");
  mojo::internal::Serialize<mojo::ScopedMessagePipeHandle>(
      in_pipe, &params->pipe, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid pipe in InterfaceProvider.GetInterface request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

InterfaceProviderStub::InterfaceProviderStub()
    : sink_(nullptr),
      control_message_handler_(InterfaceProvider::Version_) {
}

InterfaceProviderStub::~InterfaceProviderStub() {}

bool InterfaceProviderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kInterfaceProvider_GetInterface_Name: {
      internal::InterfaceProvider_GetInterface_Params_Data* params =
          reinterpret_cast<internal::InterfaceProvider_GetInterface_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_interface_name{};
      mojo::ScopedMessagePipeHandle p_pipe{};
      InterfaceProvider_GetInterface_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadInterfaceName(&p_interface_name))
        success = false;
      p_pipe = input_data_view.TakePipe();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "InterfaceProvider::GetInterface deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "InterfaceProvider::GetInterface");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetInterface(
std::move(p_interface_name), 
std::move(p_pipe));
      return true;
    }
  }
  return false;
}

bool InterfaceProviderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kInterfaceProvider_GetInterface_Name: {
      break;
    }
  }
  return false;
}

InterfaceProviderRequestValidator::InterfaceProviderRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool InterfaceProviderRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "InterfaceProvider RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kInterfaceProvider_GetInterface_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::InterfaceProvider_GetInterface_Params_Data>(
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