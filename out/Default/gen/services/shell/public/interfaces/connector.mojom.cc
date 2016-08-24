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

#include "services/shell/public/interfaces/connector.mojom.h"

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
const char* kRootUserID = "505C0EE9-3013-43C0-82B0-A84F50CF8D84";
const char* kInheritUserID = "D26290E4-4485-4EAE-81A2-66D1EEB40A9D";

namespace {

class PIDReceiver_SetPID_ParamsDataView {
 public:
  PIDReceiver_SetPID_ParamsDataView() {}

  PIDReceiver_SetPID_ParamsDataView(
      internal::PIDReceiver_SetPID_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint32_t pid() const {
    return data_->pid;
  }
 private:
  internal::PIDReceiver_SetPID_Params_Data* data_ = nullptr;
};




class Connector_Connect_ParamsDataView {
 public:
  Connector_Connect_ParamsDataView() {}

  Connector_Connect_ParamsDataView(
      internal::Connector_Connect_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTargetDataView(
      IdentityDataView* output);

  template <typename UserType>
  bool ReadTarget(UserType* output) {
    auto pointer = data_->target.Get();
    return mojo::internal::Deserialize<::shell::mojom::IdentityPtr>(
        pointer, output, context_);
  }
  ::shell::mojom::InterfaceProviderRequest TakeRemoteInterfaces() {
    ::shell::mojom::InterfaceProviderRequest result;
    bool ret =
        mojo::internal::Deserialize<::shell::mojom::InterfaceProviderRequest>(
            &data_->remote_interfaces, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetClientProcessConnectionDataView(
      ClientProcessConnectionDataView* output);

  template <typename UserType>
  bool ReadClientProcessConnection(UserType* output) {
    auto pointer = data_->client_process_connection.Get();
    return mojo::internal::Deserialize<::shell::mojom::ClientProcessConnectionPtr>(
        pointer, output, context_);
  }
 private:
  internal::Connector_Connect_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Connector_Connect_ParamsDataView::GetTargetDataView(
    IdentityDataView* output) {
  auto pointer = data_->target.Get();
  *output = IdentityDataView(pointer, context_);
}
inline void Connector_Connect_ParamsDataView::GetClientProcessConnectionDataView(
    ClientProcessConnectionDataView* output) {
  auto pointer = data_->client_process_connection.Get();
  *output = ClientProcessConnectionDataView(pointer, context_);
}

class Connector_Connect_ResponseParamsDataView {
 public:
  Connector_Connect_ResponseParamsDataView() {}

  Connector_Connect_ResponseParamsDataView(
      internal::Connector_Connect_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::shell::mojom::ConnectResult>(
        data_value, output);
  }

  ::shell::mojom::ConnectResult result() const {
    return static_cast<::shell::mojom::ConnectResult>(data_->result);
  }
  inline void GetUserIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadUserId(UserType* output) {
    auto pointer = data_->user_id.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::Connector_Connect_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Connector_Connect_ResponseParamsDataView::GetUserIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->user_id.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class Connector_Clone_ParamsDataView {
 public:
  Connector_Clone_ParamsDataView() {}

  Connector_Clone_ParamsDataView(
      internal::Connector_Clone_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  ConnectorRequest TakeRequest() {
    ConnectorRequest result;
    bool ret =
        mojo::internal::Deserialize<::shell::mojom::ConnectorRequest>(
            &data_->request, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Connector_Clone_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace// static
IdentityPtr Identity::New() {
  IdentityPtr rv;
  mojo::internal::StructHelper<Identity>::Initialize(&rv);
  return rv;
}

Identity::Identity()
    : name(),
      user_id(),
      instance() {
}

Identity::~Identity() {
}// static
ClientProcessConnectionPtr ClientProcessConnection::New() {
  ClientProcessConnectionPtr rv;
  mojo::internal::StructHelper<ClientProcessConnection>::Initialize(&rv);
  return rv;
}

ClientProcessConnection::ClientProcessConnection()
    : service(),
      pid_receiver_request() {
}

ClientProcessConnection::~ClientProcessConnection() {
}
const char PIDReceiver::Name_[] = "shell::mojom::PIDReceiver";
const uint32_t PIDReceiver::Version_;

PIDReceiverProxy::PIDReceiverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void PIDReceiverProxy::SetPID(
    uint32_t in_pid) {
  size_t size = sizeof(::shell::mojom::internal::PIDReceiver_SetPID_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kPIDReceiver_SetPID_Name, size);

  auto params =
      ::shell::mojom::internal::PIDReceiver_SetPID_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->pid = in_pid;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

PIDReceiverStub::PIDReceiverStub()
    : sink_(nullptr),
      control_message_handler_(PIDReceiver::Version_) {
}

PIDReceiverStub::~PIDReceiverStub() {}

bool PIDReceiverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kPIDReceiver_SetPID_Name: {
      internal::PIDReceiver_SetPID_Params_Data* params =
          reinterpret_cast<internal::PIDReceiver_SetPID_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      uint32_t p_pid{};
      PIDReceiver_SetPID_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_pid = input_data_view.pid();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "PIDReceiver::SetPID deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "PIDReceiver::SetPID");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetPID(
std::move(p_pid));
      return true;
    }
  }
  return false;
}

bool PIDReceiverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kPIDReceiver_SetPID_Name: {
      break;
    }
  }
  return false;
}

PIDReceiverRequestValidator::PIDReceiverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool PIDReceiverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "PIDReceiver RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kPIDReceiver_SetPID_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::PIDReceiver_SetPID_Params_Data>(
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

const char Connector::Name_[] = "shell::mojom::Connector";
const uint32_t Connector::Version_;

class Connector_Connect_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Connector_Connect_ForwardToCallback(
      const Connector::ConnectCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Connector::ConnectCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Connector_Connect_ForwardToCallback);
};
bool Connector_Connect_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Connector_Connect_ResponseParams_Data* params =
      reinterpret_cast<internal::Connector_Connect_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ConnectResult p_result{};
  std::string p_user_id{};
  Connector_Connect_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!input_data_view.ReadUserId(&p_user_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Connector::Connect response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_result), 
std::move(p_user_id));
  }
  return true;
}

ConnectorProxy::ConnectorProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ConnectorProxy::Connect(
    const ::shell::Identity& in_target, ::shell::mojom::InterfaceProviderRequest in_remote_interfaces, ClientProcessConnectionPtr in_client_process_connection, const ConnectCallback& callback) {
  size_t size = sizeof(::shell::mojom::internal::Connector_Connect_Params_Data);
  size += mojo::internal::PrepareToSerialize<::shell::mojom::IdentityPtr>(
      in_target, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::shell::mojom::ClientProcessConnectionPtr>(
      in_client_process_connection, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kConnector_Connect_Name, size);

  auto params =
      ::shell::mojom::internal::Connector_Connect_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->target)::BaseType* target_ptr;
  mojo::internal::Serialize<::shell::mojom::IdentityPtr>(
      in_target, builder.buffer(), &target_ptr, &serialization_context_);
  params->target.Set(target_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->target.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null target in Connector.Connect request");
  mojo::internal::Serialize<::shell::mojom::InterfaceProviderRequest>(
      in_remote_interfaces, &params->remote_interfaces, &serialization_context_);
  typename decltype(params->client_process_connection)::BaseType* client_process_connection_ptr;
  mojo::internal::Serialize<::shell::mojom::ClientProcessConnectionPtr>(
      in_client_process_connection, builder.buffer(), &client_process_connection_ptr, &serialization_context_);
  params->client_process_connection.Set(client_process_connection_ptr);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Connector_Connect_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void ConnectorProxy::Clone(
    ConnectorRequest in_request) {
  size_t size = sizeof(::shell::mojom::internal::Connector_Clone_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kConnector_Clone_Name, size);

  auto params =
      ::shell::mojom::internal::Connector_Clone_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::shell::mojom::ConnectorRequest>(
      in_request, &params->request, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->request),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid request in Connector.Clone request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class Connector_Connect_ProxyToResponder {
 public:
  static Connector::ConnectCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Connector_Connect_ProxyToResponder> proxy(
        new Connector_Connect_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Connector_Connect_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Connector_Connect_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Connector::Connect() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Connector_Connect_ProxyToResponder(
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
      ConnectResult in_result, const std::string& in_user_id);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Connector_Connect_ProxyToResponder);
};

void Connector_Connect_ProxyToResponder::Run(
    ConnectResult in_result, const std::string& in_user_id) {
  size_t size = sizeof(::shell::mojom::internal::Connector_Connect_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_user_id, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kConnector_Connect_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::shell::mojom::internal::Connector_Connect_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::shell::mojom::ConnectResult>(
      in_result, &params->result);
  typename decltype(params->user_id)::BaseType* user_id_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_user_id, builder.buffer(), &user_id_ptr, &serialization_context_);
  params->user_id.Set(user_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->user_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null user_id in Connector.Connect response");
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

ConnectorStub::ConnectorStub()
    : sink_(nullptr),
      control_message_handler_(Connector::Version_) {
}

ConnectorStub::~ConnectorStub() {}

bool ConnectorStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kConnector_Connect_Name: {
      break;
    }
    case internal::kConnector_Clone_Name: {
      internal::Connector_Clone_Params_Data* params =
          reinterpret_cast<internal::Connector_Clone_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ConnectorRequest p_request{};
      Connector_Clone_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_request = input_data_view.TakeRequest();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Connector::Clone deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Connector::Clone");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Clone(
std::move(p_request));
      return true;
    }
  }
  return false;
}

bool ConnectorStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kConnector_Connect_Name: {
      internal::Connector_Connect_Params_Data* params =
          reinterpret_cast<internal::Connector_Connect_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::shell::Identity p_target{};
      ::shell::mojom::InterfaceProviderRequest p_remote_interfaces{};
      ClientProcessConnectionPtr p_client_process_connection{};
      Connector_Connect_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadTarget(&p_target))
        success = false;
      p_remote_interfaces = input_data_view.TakeRemoteInterfaces();
      if (!input_data_view.ReadClientProcessConnection(&p_client_process_connection))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Connector::Connect deserializer");
        return false;
      }
      Connector::ConnectCallback callback =
          Connector_Connect_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Connector::Connect");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Connect(
std::move(p_target), 
std::move(p_remote_interfaces), 
std::move(p_client_process_connection), callback);
      return true;
    }
    case internal::kConnector_Clone_Name: {
      break;
    }
  }
  return false;
}

ConnectorRequestValidator::ConnectorRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ConnectorRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Connector RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kConnector_Connect_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_Connect_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kConnector_Clone_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_Clone_Params_Data>(
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

ConnectorResponseValidator::ConnectorResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ConnectorResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Connector ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kConnector_Connect_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Connector_Connect_ResponseParams_Data>(
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
bool StructTraits<::shell::mojom::Identity, ::shell::mojom::IdentityPtr>::Read(
    ::shell::mojom::IdentityDataView input,
    ::shell::mojom::IdentityPtr* output) {
  bool success = true;
  ::shell::mojom::IdentityPtr result(::shell::mojom::Identity::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadUserId(&result->user_id))
        success = false;
      if (!input.ReadInstance(&result->instance))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::shell::mojom::ClientProcessConnection, ::shell::mojom::ClientProcessConnectionPtr>::Read(
    ::shell::mojom::ClientProcessConnectionDataView input,
    ::shell::mojom::ClientProcessConnectionPtr* output) {
  bool success = true;
  ::shell::mojom::ClientProcessConnectionPtr result(::shell::mojom::ClientProcessConnection::New());
  
      result->service = input.TakeService();
      result->pid_receiver_request = input.TakePidReceiverRequest();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif