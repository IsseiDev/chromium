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

#include "services/shell/public/interfaces/service_manager.mojom.h"

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

class ServiceManagerListener_OnInit_ParamsDataView {
 public:
  ServiceManagerListener_OnInit_ParamsDataView() {}

  ServiceManagerListener_OnInit_ParamsDataView(
      internal::ServiceManagerListener_OnInit_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetRunningServicesDataView(
      mojo::ArrayDataView<ServiceInfoDataView>* output);

  template <typename UserType>
  bool ReadRunningServices(UserType* output) {
    auto pointer = data_->running_services.Get();
    return mojo::internal::Deserialize<mojo::Array<::shell::mojom::ServiceInfoPtr>>(
        pointer, output, context_);
  }
 private:
  internal::ServiceManagerListener_OnInit_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ServiceManagerListener_OnInit_ParamsDataView::GetRunningServicesDataView(
    mojo::ArrayDataView<ServiceInfoDataView>* output) {
  auto pointer = data_->running_services.Get();
  *output = mojo::ArrayDataView<ServiceInfoDataView>(pointer, context_);
}


class ServiceManagerListener_OnServiceCreated_ParamsDataView {
 public:
  ServiceManagerListener_OnServiceCreated_ParamsDataView() {}

  ServiceManagerListener_OnServiceCreated_ParamsDataView(
      internal::ServiceManagerListener_OnServiceCreated_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetServiceDataView(
      ServiceInfoDataView* output);

  template <typename UserType>
  bool ReadService(UserType* output) {
    auto pointer = data_->service.Get();
    return mojo::internal::Deserialize<::shell::mojom::ServiceInfoPtr>(
        pointer, output, context_);
  }
 private:
  internal::ServiceManagerListener_OnServiceCreated_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ServiceManagerListener_OnServiceCreated_ParamsDataView::GetServiceDataView(
    ServiceInfoDataView* output) {
  auto pointer = data_->service.Get();
  *output = ServiceInfoDataView(pointer, context_);
}


class ServiceManagerListener_OnServiceStarted_ParamsDataView {
 public:
  ServiceManagerListener_OnServiceStarted_ParamsDataView() {}

  ServiceManagerListener_OnServiceStarted_ParamsDataView(
      internal::ServiceManagerListener_OnServiceStarted_Params_Data* data,
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
  uint32_t pid() const {
    return data_->pid;
  }
 private:
  internal::ServiceManagerListener_OnServiceStarted_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ServiceManagerListener_OnServiceStarted_ParamsDataView::GetIdentityDataView(
    ::shell::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::shell::mojom::IdentityDataView(pointer, context_);
}


class ServiceManagerListener_OnServiceStopped_ParamsDataView {
 public:
  ServiceManagerListener_OnServiceStopped_ParamsDataView() {}

  ServiceManagerListener_OnServiceStopped_ParamsDataView(
      internal::ServiceManagerListener_OnServiceStopped_Params_Data* data,
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
  internal::ServiceManagerListener_OnServiceStopped_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ServiceManagerListener_OnServiceStopped_ParamsDataView::GetIdentityDataView(
    ::shell::mojom::IdentityDataView* output) {
  auto pointer = data_->identity.Get();
  *output = ::shell::mojom::IdentityDataView(pointer, context_);
}


class ServiceManager_AddListener_ParamsDataView {
 public:
  ServiceManager_AddListener_ParamsDataView() {}

  ServiceManager_AddListener_ParamsDataView(
      internal::ServiceManager_AddListener_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ServiceManagerListenerPtr TakeListener() {
    ServiceManagerListenerPtr result;
    bool ret =
        mojo::internal::Deserialize<::shell::mojom::ServiceManagerListenerPtr>(
            &data_->listener, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ServiceManager_AddListener_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace// static
ServiceInfoPtr ServiceInfo::New() {
  ServiceInfoPtr rv;
  mojo::internal::StructHelper<ServiceInfo>::Initialize(&rv);
  return rv;
}

ServiceInfo::ServiceInfo()
    : id(),
      identity(),
      pid() {
}

ServiceInfo::~ServiceInfo() {
}
const char ServiceManagerListener::Name_[] = "shell::mojom::ServiceManagerListener";
const uint32_t ServiceManagerListener::Version_;

ServiceManagerListenerProxy::ServiceManagerListenerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ServiceManagerListenerProxy::OnInit(
    std::vector<ServiceInfoPtr> in_running_services) {
  size_t size = sizeof(::shell::mojom::internal::ServiceManagerListener_OnInit_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::shell::mojom::ServiceInfoPtr>>(
      in_running_services, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kServiceManagerListener_OnInit_Name, size);

  auto params =
      ::shell::mojom::internal::ServiceManagerListener_OnInit_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->running_services)::BaseType* running_services_ptr;
  const mojo::internal::ContainerValidateParams running_services_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::shell::mojom::ServiceInfoPtr>>(
      in_running_services, builder.buffer(), &running_services_ptr, &running_services_validate_params,
      &serialization_context_);
  params->running_services.Set(running_services_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->running_services.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null running_services in ServiceManagerListener.OnInit request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ServiceManagerListenerProxy::OnServiceCreated(
    ServiceInfoPtr in_service) {
  size_t size = sizeof(::shell::mojom::internal::ServiceManagerListener_OnServiceCreated_Params_Data);
  size += mojo::internal::PrepareToSerialize<::shell::mojom::ServiceInfoPtr>(
      in_service, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kServiceManagerListener_OnServiceCreated_Name, size);

  auto params =
      ::shell::mojom::internal::ServiceManagerListener_OnServiceCreated_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->service)::BaseType* service_ptr;
  mojo::internal::Serialize<::shell::mojom::ServiceInfoPtr>(
      in_service, builder.buffer(), &service_ptr, &serialization_context_);
  params->service.Set(service_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->service.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null service in ServiceManagerListener.OnServiceCreated request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ServiceManagerListenerProxy::OnServiceStarted(
    const ::shell::Identity& in_identity, uint32_t in_pid) {
  size_t size = sizeof(::shell::mojom::internal::ServiceManagerListener_OnServiceStarted_Params_Data);
  size += mojo::internal::PrepareToSerialize<::shell::mojom::IdentityPtr>(
      in_identity, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kServiceManagerListener_OnServiceStarted_Name, size);

  auto params =
      ::shell::mojom::internal::ServiceManagerListener_OnServiceStarted_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->identity)::BaseType* identity_ptr;
  mojo::internal::Serialize<::shell::mojom::IdentityPtr>(
      in_identity, builder.buffer(), &identity_ptr, &serialization_context_);
  params->identity.Set(identity_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->identity.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null identity in ServiceManagerListener.OnServiceStarted request");
  params->pid = in_pid;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void ServiceManagerListenerProxy::OnServiceStopped(
    const ::shell::Identity& in_identity) {
  size_t size = sizeof(::shell::mojom::internal::ServiceManagerListener_OnServiceStopped_Params_Data);
  size += mojo::internal::PrepareToSerialize<::shell::mojom::IdentityPtr>(
      in_identity, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kServiceManagerListener_OnServiceStopped_Name, size);

  auto params =
      ::shell::mojom::internal::ServiceManagerListener_OnServiceStopped_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->identity)::BaseType* identity_ptr;
  mojo::internal::Serialize<::shell::mojom::IdentityPtr>(
      in_identity, builder.buffer(), &identity_ptr, &serialization_context_);
  params->identity.Set(identity_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->identity.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null identity in ServiceManagerListener.OnServiceStopped request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

ServiceManagerListenerStub::ServiceManagerListenerStub()
    : sink_(nullptr),
      control_message_handler_(ServiceManagerListener::Version_) {
}

ServiceManagerListenerStub::~ServiceManagerListenerStub() {}

bool ServiceManagerListenerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kServiceManagerListener_OnInit_Name: {
      internal::ServiceManagerListener_OnInit_Params_Data* params =
          reinterpret_cast<internal::ServiceManagerListener_OnInit_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::vector<ServiceInfoPtr> p_running_services{};
      ServiceManagerListener_OnInit_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadRunningServices(&p_running_services))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceManagerListener::OnInit deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServiceManagerListener::OnInit");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnInit(
std::move(p_running_services));
      return true;
    }
    case internal::kServiceManagerListener_OnServiceCreated_Name: {
      internal::ServiceManagerListener_OnServiceCreated_Params_Data* params =
          reinterpret_cast<internal::ServiceManagerListener_OnServiceCreated_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ServiceInfoPtr p_service{};
      ServiceManagerListener_OnServiceCreated_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadService(&p_service))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceManagerListener::OnServiceCreated deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServiceManagerListener::OnServiceCreated");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnServiceCreated(
std::move(p_service));
      return true;
    }
    case internal::kServiceManagerListener_OnServiceStarted_Name: {
      internal::ServiceManagerListener_OnServiceStarted_Params_Data* params =
          reinterpret_cast<internal::ServiceManagerListener_OnServiceStarted_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::shell::Identity p_identity{};
      uint32_t p_pid{};
      ServiceManagerListener_OnServiceStarted_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadIdentity(&p_identity))
        success = false;
      p_pid = input_data_view.pid();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceManagerListener::OnServiceStarted deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServiceManagerListener::OnServiceStarted");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnServiceStarted(
std::move(p_identity), 
std::move(p_pid));
      return true;
    }
    case internal::kServiceManagerListener_OnServiceStopped_Name: {
      internal::ServiceManagerListener_OnServiceStopped_Params_Data* params =
          reinterpret_cast<internal::ServiceManagerListener_OnServiceStopped_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::shell::Identity p_identity{};
      ServiceManagerListener_OnServiceStopped_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadIdentity(&p_identity))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceManagerListener::OnServiceStopped deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServiceManagerListener::OnServiceStopped");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnServiceStopped(
std::move(p_identity));
      return true;
    }
  }
  return false;
}

bool ServiceManagerListenerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kServiceManagerListener_OnInit_Name: {
      break;
    }
    case internal::kServiceManagerListener_OnServiceCreated_Name: {
      break;
    }
    case internal::kServiceManagerListener_OnServiceStarted_Name: {
      break;
    }
    case internal::kServiceManagerListener_OnServiceStopped_Name: {
      break;
    }
  }
  return false;
}

ServiceManagerListenerRequestValidator::ServiceManagerListenerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ServiceManagerListenerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ServiceManagerListener RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kServiceManagerListener_OnInit_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceManagerListener_OnInit_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kServiceManagerListener_OnServiceCreated_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceManagerListener_OnServiceCreated_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kServiceManagerListener_OnServiceStarted_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceManagerListener_OnServiceStarted_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kServiceManagerListener_OnServiceStopped_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceManagerListener_OnServiceStopped_Params_Data>(
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

const char ServiceManager::Name_[] = "shell::mojom::ServiceManager";
const uint32_t ServiceManager::Version_;

ServiceManagerProxy::ServiceManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ServiceManagerProxy::AddListener(
    ServiceManagerListenerPtr in_listener) {
  size_t size = sizeof(::shell::mojom::internal::ServiceManager_AddListener_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kServiceManager_AddListener_Name, size);

  auto params =
      ::shell::mojom::internal::ServiceManager_AddListener_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::shell::mojom::ServiceManagerListenerPtr>(
      in_listener, &params->listener, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->listener),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid listener in ServiceManager.AddListener request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

ServiceManagerStub::ServiceManagerStub()
    : sink_(nullptr),
      control_message_handler_(ServiceManager::Version_) {
}

ServiceManagerStub::~ServiceManagerStub() {}

bool ServiceManagerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kServiceManager_AddListener_Name: {
      internal::ServiceManager_AddListener_Params_Data* params =
          reinterpret_cast<internal::ServiceManager_AddListener_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ServiceManagerListenerPtr p_listener{};
      ServiceManager_AddListener_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_listener = input_data_view.TakeListener();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ServiceManager::AddListener deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ServiceManager::AddListener");
      mojo::internal::MessageDispatchContext context(message);
      sink_->AddListener(
std::move(p_listener));
      return true;
    }
  }
  return false;
}

bool ServiceManagerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kServiceManager_AddListener_Name: {
      break;
    }
  }
  return false;
}

ServiceManagerRequestValidator::ServiceManagerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ServiceManagerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ServiceManager RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kServiceManager_AddListener_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ServiceManager_AddListener_Params_Data>(
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


// static
bool StructTraits<::shell::mojom::ServiceInfo, ::shell::mojom::ServiceInfoPtr>::Read(
    ::shell::mojom::ServiceInfoDataView input,
    ::shell::mojom::ServiceInfoPtr* output) {
  bool success = true;
  ::shell::mojom::ServiceInfoPtr result(::shell::mojom::ServiceInfo::New());
  
      result->id = input.id();
      if (!input.ReadIdentity(&result->identity))
        success = false;
      result->pid = input.pid();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif