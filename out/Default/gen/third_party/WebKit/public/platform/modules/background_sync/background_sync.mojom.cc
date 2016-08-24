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

#include "third_party/WebKit/public/platform/modules/background_sync/background_sync.mojom.h"

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
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "url/mojo/origin_struct_traits.h"
#include "content/common/bluetooth/web_bluetooth_device_id_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "url/mojo/url_gurl_struct_traits.h"
#include "device/bluetooth/public/interfaces/bluetooth_uuid_struct_traits.h"
namespace blink {
namespace mojom {

namespace {

class BackgroundSyncService_Register_ParamsDataView {
 public:
  BackgroundSyncService_Register_ParamsDataView() {}

  BackgroundSyncService_Register_ParamsDataView(
      internal::BackgroundSyncService_Register_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOptionsDataView(
      SyncRegistrationDataView* output);

  template <typename UserType>
  bool ReadOptions(UserType* output) {
    auto pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::SyncRegistrationPtr>(
        pointer, output, context_);
  }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
 private:
  internal::BackgroundSyncService_Register_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void BackgroundSyncService_Register_ParamsDataView::GetOptionsDataView(
    SyncRegistrationDataView* output) {
  auto pointer = data_->options.Get();
  *output = SyncRegistrationDataView(pointer, context_);
}

class BackgroundSyncService_Register_ResponseParamsDataView {
 public:
  BackgroundSyncService_Register_ResponseParamsDataView() {}

  BackgroundSyncService_Register_ResponseParamsDataView(
      internal::BackgroundSyncService_Register_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadErr(UserType* output) const {
    auto data_value = data_->err;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundSyncError>(
        data_value, output);
  }

  ::blink::mojom::BackgroundSyncError err() const {
    return static_cast<::blink::mojom::BackgroundSyncError>(data_->err);
  }
  inline void GetOptionsDataView(
      SyncRegistrationDataView* output);

  template <typename UserType>
  bool ReadOptions(UserType* output) {
    auto pointer = data_->options.Get();
    return mojo::internal::Deserialize<::blink::mojom::SyncRegistrationPtr>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundSyncService_Register_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void BackgroundSyncService_Register_ResponseParamsDataView::GetOptionsDataView(
    SyncRegistrationDataView* output) {
  auto pointer = data_->options.Get();
  *output = SyncRegistrationDataView(pointer, context_);
}


class BackgroundSyncService_GetRegistrations_ParamsDataView {
 public:
  BackgroundSyncService_GetRegistrations_ParamsDataView() {}

  BackgroundSyncService_GetRegistrations_ParamsDataView(
      internal::BackgroundSyncService_GetRegistrations_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int64_t service_worker_registration_id() const {
    return data_->service_worker_registration_id;
  }
 private:
  internal::BackgroundSyncService_GetRegistrations_Params_Data* data_ = nullptr;
};



class BackgroundSyncService_GetRegistrations_ResponseParamsDataView {
 public:
  BackgroundSyncService_GetRegistrations_ResponseParamsDataView() {}

  BackgroundSyncService_GetRegistrations_ResponseParamsDataView(
      internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadErr(UserType* output) const {
    auto data_value = data_->err;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundSyncError>(
        data_value, output);
  }

  ::blink::mojom::BackgroundSyncError err() const {
    return static_cast<::blink::mojom::BackgroundSyncError>(data_->err);
  }
  inline void GetRegistrationsDataView(
      mojo::ArrayDataView<SyncRegistrationDataView>* output);

  template <typename UserType>
  bool ReadRegistrations(UserType* output) {
    auto pointer = data_->registrations.Get();
    return mojo::internal::Deserialize<mojo::Array<::blink::mojom::SyncRegistrationPtr>>(
        pointer, output, context_);
  }
 private:
  internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void BackgroundSyncService_GetRegistrations_ResponseParamsDataView::GetRegistrationsDataView(
    mojo::ArrayDataView<SyncRegistrationDataView>* output) {
  auto pointer = data_->registrations.Get();
  *output = mojo::ArrayDataView<SyncRegistrationDataView>(pointer, context_);
}


class BackgroundSyncServiceClient_Sync_ParamsDataView {
 public:
  BackgroundSyncServiceClient_Sync_ParamsDataView() {}

  BackgroundSyncServiceClient_Sync_ParamsDataView(
      internal::BackgroundSyncServiceClient_Sync_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTagDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadTag(UserType* output) {
    auto pointer = data_->tag.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  template <typename UserType>
  bool ReadLastChance(UserType* output) const {
    auto data_value = data_->last_chance;
    return mojo::internal::Deserialize<::blink::mojom::BackgroundSyncEventLastChance>(
        data_value, output);
  }

  ::blink::mojom::BackgroundSyncEventLastChance last_chance() const {
    return static_cast<::blink::mojom::BackgroundSyncEventLastChance>(data_->last_chance);
  }
 private:
  internal::BackgroundSyncServiceClient_Sync_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void BackgroundSyncServiceClient_Sync_ParamsDataView::GetTagDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->tag.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class BackgroundSyncServiceClient_Sync_ResponseParamsDataView {
 public:
  BackgroundSyncServiceClient_Sync_ResponseParamsDataView() {}

  BackgroundSyncServiceClient_Sync_ResponseParamsDataView(
      internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::blink::mojom::ServiceWorkerEventStatus>(
        data_value, output);
  }

  ::blink::mojom::ServiceWorkerEventStatus status() const {
    return static_cast<::blink::mojom::ServiceWorkerEventStatus>(data_->status);
  }
 private:
  internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data* data_ = nullptr;
};




}  // namespace// static
SyncRegistrationPtr SyncRegistration::New() {
  SyncRegistrationPtr rv;
  mojo::internal::StructHelper<SyncRegistration>::Initialize(&rv);
  return rv;
}

SyncRegistration::SyncRegistration()
    : id(-1),
      tag(""),
      network_state(BackgroundSyncNetworkState::ONLINE) {
}

SyncRegistration::~SyncRegistration() {
}
const char BackgroundSyncService::Name_[] = "blink::mojom::BackgroundSyncService";
const uint32_t BackgroundSyncService::Version_;

class BackgroundSyncService_Register_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncService_Register_ForwardToCallback(
      const BackgroundSyncService::RegisterCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncService::RegisterCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_Register_ForwardToCallback);
};
bool BackgroundSyncService_Register_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::BackgroundSyncService_Register_ResponseParams_Data* params =
      reinterpret_cast<internal::BackgroundSyncService_Register_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  BackgroundSyncError p_err{};
  SyncRegistrationPtr p_options{};
  BackgroundSyncService_Register_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadErr(&p_err))
    success = false;
  if (!input_data_view.ReadOptions(&p_options))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BackgroundSyncService::Register response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_err), 
std::move(p_options));
  }
  return true;
}

class BackgroundSyncService_GetRegistrations_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncService_GetRegistrations_ForwardToCallback(
      const BackgroundSyncService::GetRegistrationsCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncService::GetRegistrationsCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_GetRegistrations_ForwardToCallback);
};
bool BackgroundSyncService_GetRegistrations_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data* params =
      reinterpret_cast<internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  BackgroundSyncError p_err{};
  mojo::Array<SyncRegistrationPtr> p_registrations{};
  BackgroundSyncService_GetRegistrations_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadErr(&p_err))
    success = false;
  if (!input_data_view.ReadRegistrations(&p_registrations))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BackgroundSyncService::GetRegistrations response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_err), 
std::move(p_registrations));
  }
  return true;
}

BackgroundSyncServiceProxy::BackgroundSyncServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void BackgroundSyncServiceProxy::Register(
    SyncRegistrationPtr in_options, int64_t in_service_worker_registration_id, const RegisterCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::BackgroundSyncService_Register_Params_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::SyncRegistrationPtr>(
      in_options, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kBackgroundSyncService_Register_Name, size);

  auto params =
      ::blink::mojom::internal::BackgroundSyncService_Register_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->options)::BaseType* options_ptr;
  mojo::internal::Serialize<::blink::mojom::SyncRegistrationPtr>(
      in_options, builder.buffer(), &options_ptr, &serialization_context_);
  params->options.Set(options_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in BackgroundSyncService.Register request");
  params->service_worker_registration_id = in_service_worker_registration_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new BackgroundSyncService_Register_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void BackgroundSyncServiceProxy::GetRegistrations(
    int64_t in_service_worker_registration_id, const GetRegistrationsCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::BackgroundSyncService_GetRegistrations_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kBackgroundSyncService_GetRegistrations_Name, size);

  auto params =
      ::blink::mojom::internal::BackgroundSyncService_GetRegistrations_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->service_worker_registration_id = in_service_worker_registration_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new BackgroundSyncService_GetRegistrations_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class BackgroundSyncService_Register_ProxyToResponder {
 public:
  static BackgroundSyncService::RegisterCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<BackgroundSyncService_Register_ProxyToResponder> proxy(
        new BackgroundSyncService_Register_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&BackgroundSyncService_Register_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~BackgroundSyncService_Register_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "BackgroundSyncService::Register() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  BackgroundSyncService_Register_ProxyToResponder(
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
      BackgroundSyncError in_err, SyncRegistrationPtr in_options);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_Register_ProxyToResponder);
};

void BackgroundSyncService_Register_ProxyToResponder::Run(
    BackgroundSyncError in_err, SyncRegistrationPtr in_options) {
  size_t size = sizeof(::blink::mojom::internal::BackgroundSyncService_Register_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::blink::mojom::SyncRegistrationPtr>(
      in_options, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kBackgroundSyncService_Register_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::BackgroundSyncService_Register_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::BackgroundSyncError>(
      in_err, &params->err);
  typename decltype(params->options)::BaseType* options_ptr;
  mojo::internal::Serialize<::blink::mojom::SyncRegistrationPtr>(
      in_options, builder.buffer(), &options_ptr, &serialization_context_);
  params->options.Set(options_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in BackgroundSyncService.Register response");
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
class BackgroundSyncService_GetRegistrations_ProxyToResponder {
 public:
  static BackgroundSyncService::GetRegistrationsCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<BackgroundSyncService_GetRegistrations_ProxyToResponder> proxy(
        new BackgroundSyncService_GetRegistrations_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&BackgroundSyncService_GetRegistrations_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~BackgroundSyncService_GetRegistrations_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "BackgroundSyncService::GetRegistrations() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  BackgroundSyncService_GetRegistrations_ProxyToResponder(
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
      BackgroundSyncError in_err, mojo::Array<SyncRegistrationPtr> in_registrations);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncService_GetRegistrations_ProxyToResponder);
};

void BackgroundSyncService_GetRegistrations_ProxyToResponder::Run(
    BackgroundSyncError in_err, mojo::Array<SyncRegistrationPtr> in_registrations) {
  size_t size = sizeof(::blink::mojom::internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::blink::mojom::SyncRegistrationPtr>>(
      in_registrations, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kBackgroundSyncService_GetRegistrations_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::BackgroundSyncError>(
      in_err, &params->err);
  typename decltype(params->registrations)::BaseType* registrations_ptr;
  const mojo::internal::ContainerValidateParams registrations_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::blink::mojom::SyncRegistrationPtr>>(
      in_registrations, builder.buffer(), &registrations_ptr, &registrations_validate_params,
      &serialization_context_);
  params->registrations.Set(registrations_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->registrations.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null registrations in BackgroundSyncService.GetRegistrations response");
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

BackgroundSyncServiceStub::BackgroundSyncServiceStub()
    : sink_(nullptr),
      control_message_handler_(BackgroundSyncService::Version_) {
}

BackgroundSyncServiceStub::~BackgroundSyncServiceStub() {}

bool BackgroundSyncServiceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      break;
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      break;
    }
  }
  return false;
}

bool BackgroundSyncServiceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      internal::BackgroundSyncService_Register_Params_Data* params =
          reinterpret_cast<internal::BackgroundSyncService_Register_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      SyncRegistrationPtr p_options{};
      int64_t p_service_worker_registration_id{};
      BackgroundSyncService_Register_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadOptions(&p_options))
        success = false;
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BackgroundSyncService::Register deserializer");
        return false;
      }
      BackgroundSyncService::RegisterCallback callback =
          BackgroundSyncService_Register_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BackgroundSyncService::Register");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Register(
std::move(p_options), 
std::move(p_service_worker_registration_id), callback);
      return true;
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      internal::BackgroundSyncService_GetRegistrations_Params_Data* params =
          reinterpret_cast<internal::BackgroundSyncService_GetRegistrations_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int64_t p_service_worker_registration_id{};
      BackgroundSyncService_GetRegistrations_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_service_worker_registration_id = input_data_view.service_worker_registration_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BackgroundSyncService::GetRegistrations deserializer");
        return false;
      }
      BackgroundSyncService::GetRegistrationsCallback callback =
          BackgroundSyncService_GetRegistrations_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BackgroundSyncService::GetRegistrations");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetRegistrations(
std::move(p_service_worker_registration_id), callback);
      return true;
    }
  }
  return false;
}

BackgroundSyncServiceRequestValidator::BackgroundSyncServiceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool BackgroundSyncServiceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "BackgroundSyncService RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_Register_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_GetRegistrations_Params_Data>(
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

BackgroundSyncServiceResponseValidator::BackgroundSyncServiceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool BackgroundSyncServiceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "BackgroundSyncService ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBackgroundSyncService_Register_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_Register_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kBackgroundSyncService_GetRegistrations_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncService_GetRegistrations_ResponseParams_Data>(
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
const char BackgroundSyncServiceClient::Name_[] = "blink::mojom::BackgroundSyncServiceClient";
const uint32_t BackgroundSyncServiceClient::Version_;

class BackgroundSyncServiceClient_Sync_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BackgroundSyncServiceClient_Sync_ForwardToCallback(
      const BackgroundSyncServiceClient::SyncCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  BackgroundSyncServiceClient::SyncCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncServiceClient_Sync_ForwardToCallback);
};
bool BackgroundSyncServiceClient_Sync_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data* params =
      reinterpret_cast<internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::blink::mojom::ServiceWorkerEventStatus p_status{};
  BackgroundSyncServiceClient_Sync_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "BackgroundSyncServiceClient::Sync response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_status));
  }
  return true;
}

BackgroundSyncServiceClientProxy::BackgroundSyncServiceClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void BackgroundSyncServiceClientProxy::Sync(
    const mojo::String& in_tag, BackgroundSyncEventLastChance in_last_chance, const SyncCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::BackgroundSyncServiceClient_Sync_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_tag, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kBackgroundSyncServiceClient_Sync_Name, size);

  auto params =
      ::blink::mojom::internal::BackgroundSyncServiceClient_Sync_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->tag)::BaseType* tag_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_tag, builder.buffer(), &tag_ptr, &serialization_context_);
  params->tag.Set(tag_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->tag.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null tag in BackgroundSyncServiceClient.Sync request");
  mojo::internal::Serialize<::blink::mojom::BackgroundSyncEventLastChance>(
      in_last_chance, &params->last_chance);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new BackgroundSyncServiceClient_Sync_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class BackgroundSyncServiceClient_Sync_ProxyToResponder {
 public:
  static BackgroundSyncServiceClient::SyncCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<BackgroundSyncServiceClient_Sync_ProxyToResponder> proxy(
        new BackgroundSyncServiceClient_Sync_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&BackgroundSyncServiceClient_Sync_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~BackgroundSyncServiceClient_Sync_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "BackgroundSyncServiceClient::Sync() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  BackgroundSyncServiceClient_Sync_ProxyToResponder(
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
      ::blink::mojom::ServiceWorkerEventStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(BackgroundSyncServiceClient_Sync_ProxyToResponder);
};

void BackgroundSyncServiceClient_Sync_ProxyToResponder::Run(
    ::blink::mojom::ServiceWorkerEventStatus in_status) {
  size_t size = sizeof(::blink::mojom::internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kBackgroundSyncServiceClient_Sync_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerEventStatus>(
      in_status, &params->status);
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

BackgroundSyncServiceClientStub::BackgroundSyncServiceClientStub()
    : sink_(nullptr),
      control_message_handler_(BackgroundSyncServiceClient::Version_) {
}

BackgroundSyncServiceClientStub::~BackgroundSyncServiceClientStub() {}

bool BackgroundSyncServiceClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kBackgroundSyncServiceClient_Sync_Name: {
      break;
    }
  }
  return false;
}

bool BackgroundSyncServiceClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kBackgroundSyncServiceClient_Sync_Name: {
      internal::BackgroundSyncServiceClient_Sync_Params_Data* params =
          reinterpret_cast<internal::BackgroundSyncServiceClient_Sync_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_tag{};
      BackgroundSyncEventLastChance p_last_chance{};
      BackgroundSyncServiceClient_Sync_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadTag(&p_tag))
        success = false;
      if (!input_data_view.ReadLastChance(&p_last_chance))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "BackgroundSyncServiceClient::Sync deserializer");
        return false;
      }
      BackgroundSyncServiceClient::SyncCallback callback =
          BackgroundSyncServiceClient_Sync_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "BackgroundSyncServiceClient::Sync");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Sync(
std::move(p_tag), 
std::move(p_last_chance), callback);
      return true;
    }
  }
  return false;
}

BackgroundSyncServiceClientRequestValidator::BackgroundSyncServiceClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool BackgroundSyncServiceClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "BackgroundSyncServiceClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kBackgroundSyncServiceClient_Sync_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncServiceClient_Sync_Params_Data>(
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

BackgroundSyncServiceClientResponseValidator::BackgroundSyncServiceClientResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool BackgroundSyncServiceClientResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "BackgroundSyncServiceClient ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kBackgroundSyncServiceClient_Sync_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::BackgroundSyncServiceClient_Sync_ResponseParams_Data>(
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
}  // namespace blink

namespace mojo {


// static
bool StructTraits<::blink::mojom::SyncRegistration, ::blink::mojom::SyncRegistrationPtr>::Read(
    ::blink::mojom::SyncRegistrationDataView input,
    ::blink::mojom::SyncRegistrationPtr* output) {
  bool success = true;
  ::blink::mojom::SyncRegistrationPtr result(::blink::mojom::SyncRegistration::New());
  
      result->id = input.id();
      if (!input.ReadTag(&result->tag))
        success = false;
      if (!input.ReadNetworkState(&result->network_state))
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