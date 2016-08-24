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

#include "services/shell/public/interfaces/resolver.mojom.h"

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

class Resolver_ResolveMojoName_ParamsDataView {
 public:
  Resolver_ResolveMojoName_ParamsDataView() {}

  Resolver_ResolveMojoName_ParamsDataView(
      internal::Resolver_ResolveMojoName_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetMojoNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadMojoName(UserType* output) {
    auto pointer = data_->mojo_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::Resolver_ResolveMojoName_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Resolver_ResolveMojoName_ParamsDataView::GetMojoNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mojo_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class Resolver_ResolveMojoName_ResponseParamsDataView {
 public:
  Resolver_ResolveMojoName_ResponseParamsDataView() {}

  Resolver_ResolveMojoName_ResponseParamsDataView(
      internal::Resolver_ResolveMojoName_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ResolveResultDataView* output);

  template <typename UserType>
  bool ReadResult(UserType* output) {
    auto pointer = data_->result.Get();
    return mojo::internal::Deserialize<::shell::mojom::ResolveResultPtr>(
        pointer, output, context_);
  }
 private:
  internal::Resolver_ResolveMojoName_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Resolver_ResolveMojoName_ResponseParamsDataView::GetResultDataView(
    ResolveResultDataView* output) {
  auto pointer = data_->result.Get();
  *output = ResolveResultDataView(pointer, context_);
}


}  // namespace// static
ResolveResultPtr ResolveResult::New() {
  ResolveResultPtr rv;
  mojo::internal::StructHelper<ResolveResult>::Initialize(&rv);
  return rv;
}

ResolveResult::ResolveResult()
    : name(),
      resolved_name(),
      qualifier(),
      capabilities(),
      package_path() {
}

ResolveResult::~ResolveResult() {
}
const char Resolver::Name_[] = "shell::mojom::Resolver";
const uint32_t Resolver::Version_;

class Resolver_ResolveMojoName_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Resolver_ResolveMojoName_ForwardToCallback(
      const Resolver::ResolveMojoNameCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Resolver::ResolveMojoNameCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Resolver_ResolveMojoName_ForwardToCallback);
};
bool Resolver_ResolveMojoName_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Resolver_ResolveMojoName_ResponseParams_Data* params =
      reinterpret_cast<internal::Resolver_ResolveMojoName_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ResolveResultPtr p_result{};
  Resolver_ResolveMojoName_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Resolver::ResolveMojoName response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_result));
  }
  return true;
}

ResolverProxy::ResolverProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ResolverProxy::ResolveMojoName(
    const std::string& in_mojo_name, const ResolveMojoNameCallback& callback) {
  size_t size = sizeof(::shell::mojom::internal::Resolver_ResolveMojoName_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_mojo_name, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kResolver_ResolveMojoName_Name, size);

  auto params =
      ::shell::mojom::internal::Resolver_ResolveMojoName_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->mojo_name)::BaseType* mojo_name_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_mojo_name, builder.buffer(), &mojo_name_ptr, &serialization_context_);
  params->mojo_name.Set(mojo_name_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->mojo_name.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null mojo_name in Resolver.ResolveMojoName request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Resolver_ResolveMojoName_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class Resolver_ResolveMojoName_ProxyToResponder {
 public:
  static Resolver::ResolveMojoNameCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Resolver_ResolveMojoName_ProxyToResponder> proxy(
        new Resolver_ResolveMojoName_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Resolver_ResolveMojoName_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Resolver_ResolveMojoName_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Resolver::ResolveMojoName() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Resolver_ResolveMojoName_ProxyToResponder(
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
      ResolveResultPtr in_result);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Resolver_ResolveMojoName_ProxyToResponder);
};

void Resolver_ResolveMojoName_ProxyToResponder::Run(
    ResolveResultPtr in_result) {
  size_t size = sizeof(::shell::mojom::internal::Resolver_ResolveMojoName_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::shell::mojom::ResolveResultPtr>(
      in_result, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kResolver_ResolveMojoName_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::shell::mojom::internal::Resolver_ResolveMojoName_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->result)::BaseType* result_ptr;
  mojo::internal::Serialize<::shell::mojom::ResolveResultPtr>(
      in_result, builder.buffer(), &result_ptr, &serialization_context_);
  params->result.Set(result_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in Resolver.ResolveMojoName response");
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

ResolverStub::ResolverStub()
    : sink_(nullptr),
      control_message_handler_(Resolver::Version_) {
}

ResolverStub::~ResolverStub() {}

bool ResolverStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kResolver_ResolveMojoName_Name: {
      break;
    }
  }
  return false;
}

bool ResolverStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kResolver_ResolveMojoName_Name: {
      internal::Resolver_ResolveMojoName_Params_Data* params =
          reinterpret_cast<internal::Resolver_ResolveMojoName_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      std::string p_mojo_name{};
      Resolver_ResolveMojoName_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadMojoName(&p_mojo_name))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Resolver::ResolveMojoName deserializer");
        return false;
      }
      Resolver::ResolveMojoNameCallback callback =
          Resolver_ResolveMojoName_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Resolver::ResolveMojoName");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ResolveMojoName(
std::move(p_mojo_name), callback);
      return true;
    }
  }
  return false;
}

ResolverRequestValidator::ResolverRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ResolverRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Resolver RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kResolver_ResolveMojoName_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Resolver_ResolveMojoName_Params_Data>(
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

ResolverResponseValidator::ResolverResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ResolverResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Resolver ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kResolver_ResolveMojoName_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Resolver_ResolveMojoName_ResponseParams_Data>(
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
bool StructTraits<::shell::mojom::ResolveResult, ::shell::mojom::ResolveResultPtr>::Read(
    ::shell::mojom::ResolveResultDataView input,
    ::shell::mojom::ResolveResultPtr* output) {
  bool success = true;
  ::shell::mojom::ResolveResultPtr result(::shell::mojom::ResolveResult::New());
  
      if (!input.ReadName(&result->name))
        success = false;
      if (!input.ReadResolvedName(&result->resolved_name))
        success = false;
      if (!input.ReadQualifier(&result->qualifier))
        success = false;
      if (!input.ReadCapabilities(&result->capabilities))
        success = false;
      if (!input.ReadPackagePath(&result->package_path))
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