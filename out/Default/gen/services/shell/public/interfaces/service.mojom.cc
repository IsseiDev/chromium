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

#include "services/shell/public/interfaces/service.mojom.h"

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

class Service_OnStart_ParamsDataView {
 public:
  Service_OnStart_ParamsDataView() {}

  Service_OnStart_ParamsDataView(
      internal::Service_OnStart_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetIdentityDataView(
      ::shell::mojom::IdentityDataView* output);

  template <typename UserType>
  bool ReadIdentity(UserType* output) {
    auto pointer = data_->identity.Get();
    return mojo::internal::Deserialize<::shell::mojom::IdentityPtr>(
        pointer, output, context_);
  }
 private:
  internal::Service_OnStart_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Service_OnStart_ParamsDataView::GetIdentityDataView(
    ::shell::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::shell::mojom::IdentityDataView(pointer, context_);
}

class Service_OnStart_ResponseParamsDataView {
 public:
  Service_OnStart_ResponseParamsDataView() {}

  Service_OnStart_ResponseParamsDataView(
      internal::Service_OnStart_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ::shell::mojom::ConnectorRequest TakeConnectorRequest() {
    ::shell::mojom::ConnectorRequest result;
    bool ret =
        mojo::internal::Deserialize<::shell::mojom::ConnectorRequest>(
            &data_->connector_request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Service_OnStart_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class Service_OnConnect_ParamsDataView {
 public:
  Service_OnConnect_ParamsDataView() {}

  Service_OnConnect_ParamsDataView(
      internal::Service_OnConnect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSourceDataView(
      ::shell::mojom::IdentityDataView* output);

  template <typename UserType>
  bool ReadSource(UserType* output) {
    auto pointer = data_->source.Get();
    return mojo::internal::Deserialize<::shell::mojom::IdentityPtr>(
        pointer, output, context_);
  }
  ::shell::mojom::InterfaceProviderRequest TakeInterfaces() {
    ::shell::mojom::InterfaceProviderRequest result;
    bool ret =
        mojo::internal::Deserialize<::shell::mojom::InterfaceProviderRequest>(
            &data_->interfaces, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetAllowedCapabilitiesDataView(
      ::shell::mojom::CapabilityRequestDataView* output);

  template <typename UserType>
  bool ReadAllowedCapabilities(UserType* output) {
    auto pointer = data_->allowed_capabilities.Get();
    return mojo::internal::Deserialize<::shell::mojom::CapabilityRequestPtr>(
        pointer, output, context_);
  }
 private:
  internal::Service_OnConnect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Service_OnConnect_ParamsDataView::GetSourceDataView(
    ::shell::mojom::IdentityDataView* output) {
  auto pointer = data_->source.Get();
  *output = ::shell::mojom::IdentityDataView(pointer, context_);
}
inline void Service_OnConnect_ParamsDataView::GetAllowedCapabilitiesDataView(
    ::shell::mojom::CapabilityRequestDataView* output) {
  auto pointer = data_->allowed_capabilities.Get();
  *output = ::shell::mojom::CapabilityRequestDataView(pointer, context_);
}


}  // namespace
const char Service::Name_[] = "shell::mojom::Service";
const uint32_t Service::Version_;

class Service_OnStart_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Service_OnStart_ForwardToCallback(
      const Service::OnStartCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Service::OnStartCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Service_OnStart_ForwardToCallback);
};
bool Service_OnStart_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Service_OnStart_ResponseParams_Data* params =
      reinterpret_cast<internal::Service_OnStart_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::shell::mojom::ConnectorRequest p_connector_request{};
  Service_OnStart_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_connector_request = input_data_view.TakeConnectorRequest();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Service::OnStart response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_connector_request));
  }
  return true;
}

ServiceProxy::ServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ServiceProxy::OnStart(
    const ::shell::Identity& in_identity, const OnStartCallback& callback) {
  size_t size = sizeof(::shell::mojom::internal::Service_OnStart_Params_Data);
  size += mojo::internal::PrepareToSerialize<::shell::mojom::IdentityPtr>(
      in_identity, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kService_OnStart_Name, size);

  auto params =
      ::shell::mojom::internal::Service_OnStart_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->identity)::BaseType* identity_ptr;
  mojo::internal::Serialize<::shell::mojom::IdentityPtr>(
      in_identity, builder.buffer(), &identity_ptr, &serialization_context_);
  params->identity.Set(identity_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->identity.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null identity in Service.OnStart request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Service_OnStart_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void ServiceProxy::OnConnect(
    const ::shell::Identity& in_source, ::shell::mojom::InterfaceProviderRequest in_interfaces, const ::shell::CapabilityRequest& in_allowed_capabilities) {
  size_t size = sizeof(::shell::mojom::internal::Service_OnConnect_Params_Data);
  size += mojo::internal::PrepareToSerialize<::shell::mojom::IdentityPtr>(
      in_source, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::shell::mojom::CapabilityRequestPtr>(
      in_allowed_capabilities, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kService_OnConnect_Name, size);

  auto params =
      ::shell::mojom::internal::Service_OnConnect_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->source)::BaseType* source_ptr;
  mojo::internal::Serialize<::shell::mojom::IdentityPtr>(
      in_source, builder.buffer(), &source_ptr, &serialization_context_);
  params->source.Set(source_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->source.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null source in Service.OnConnect request");
  mojo::internal::Serialize<::shell::mojom::InterfaceProviderRequest>(
      in_interfaces, &params->interfaces, &serialization_context_);
  typename decltype(params->allowed_capabilities)::BaseType* allowed_capabilities_ptr;
  mojo::internal::Serialize<::shell::mojom::CapabilityRequestPtr>(
      in_allowed_capabilities, builder.buffer(), &allowed_capabilities_ptr, &serialization_context_);
  params->allowed_capabilities.Set(allowed_capabilities_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->allowed_capabilities.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null allowed_capabilities in Service.OnConnect request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class Service_OnStart_ProxyToResponder {
 public:
  static Service::OnStartCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Service_OnStart_ProxyToResponder> proxy(
        new Service_OnStart_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Service_OnStart_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Service_OnStart_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Service::OnStart() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Service_OnStart_ProxyToResponder(
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
      ::shell::mojom::ConnectorRequest in_connector_request);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Service_OnStart_ProxyToResponder);
};

void Service_OnStart_ProxyToResponder::Run(
    ::shell::mojom::ConnectorRequest in_connector_request) {
  size_t size = sizeof(::shell::mojom::internal::Service_OnStart_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kService_OnStart_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::shell::mojom::internal::Service_OnStart_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::shell::mojom::ConnectorRequest>(
      in_connector_request, &params->connector_request, &serialization_context_);
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

ServiceStub::ServiceStub()
    : sink_(nullptr),
      control_message_handler_(Service::Version_) {
}

ServiceStub::~ServiceStub() {}

bool ServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kService_OnStart_Name: {
      break;
    }
    case internal::kService_OnConnect_Name: {
      internal::Service_OnConnect_Params_Data* params =
          reinterpret_cast<internal::Service_OnConnect_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::shell::Identity p_source{};
      ::shell::mojom::InterfaceProviderRequest p_interfaces{};
      ::shell::CapabilityRequest p_allowed_capabilities{};
      Service_OnConnect_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSource(&p_source))
        success = false;
      p_interfaces = input_data_view.TakeInterfaces();
      if (!input_data_view.ReadAllowedCapabilities(&p_allowed_capabilities))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Service::OnConnect deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Service::OnConnect");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnConnect(
std::move(p_source), 
std::move(p_interfaces), 
std::move(p_allowed_capabilities));
      return true;
    }
  }
  return false;
}

bool ServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kService_OnStart_Name: {
      internal::Service_OnStart_Params_Data* params =
          reinterpret_cast<internal::Service_OnStart_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::shell::Identity p_identity{};
      Service_OnStart_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadIdentity(&p_identity))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Service::OnStart deserializer");
        return false;
      }
      Service::OnStartCallback callback =
          Service_OnStart_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Service::OnStart");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnStart(
std::move(p_identity), callback);
      return true;
    }
    case internal::kService_OnConnect_Name: {
      break;
    }
  }
  return false;
}

ServiceRequestValidator::ServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Service RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kService_OnStart_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Service_OnStart_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kService_OnConnect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Service_OnConnect_Params_Data>(
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

ServiceResponseValidator::ServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Service ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kService_OnStart_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Service_OnStart_ResponseParams_Data>(
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