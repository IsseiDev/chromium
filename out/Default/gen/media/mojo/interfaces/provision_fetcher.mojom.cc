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

#include "media/mojo/interfaces/provision_fetcher.mojom.h"

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
#include "media/mojo/common/pipeline_statistics_struct_traits.h"
#include "services/shell/public/cpp/capabilities_struct_traits.h"
#include "services/shell/public/cpp/identity_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "media/base/ipc/media_param_traits.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "url/mojo/url_gurl_struct_traits.h"
namespace media {
namespace mojom {

namespace {

class ProvisionFetcher_Retrieve_ParamsDataView {
 public:
  ProvisionFetcher_Retrieve_ParamsDataView() {}

  ProvisionFetcher_Retrieve_ParamsDataView(
      internal::ProvisionFetcher_Retrieve_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetDefaultUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDefaultUrl(UserType* output) {
    auto pointer = data_->default_url.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetRequestDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadRequestData(UserType* output) {
    auto pointer = data_->request_data.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::ProvisionFetcher_Retrieve_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ProvisionFetcher_Retrieve_ParamsDataView::GetDefaultUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->default_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void ProvisionFetcher_Retrieve_ParamsDataView::GetRequestDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->request_data.Get();
  *output = mojo::StringDataView(pointer, context_);
}

class ProvisionFetcher_Retrieve_ResponseParamsDataView {
 public:
  ProvisionFetcher_Retrieve_ResponseParamsDataView() {}

  ProvisionFetcher_Retrieve_ResponseParamsDataView(
      internal::ProvisionFetcher_Retrieve_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
  inline void GetResponseDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadResponse(UserType* output) {
    auto pointer = data_->response.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::ProvisionFetcher_Retrieve_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void ProvisionFetcher_Retrieve_ResponseParamsDataView::GetResponseDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->response.Get();
  *output = mojo::StringDataView(pointer, context_);
}


}  // namespace
const char ProvisionFetcher::Name_[] = "media::mojom::ProvisionFetcher";
const uint32_t ProvisionFetcher::Version_;

class ProvisionFetcher_Retrieve_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ProvisionFetcher_Retrieve_ForwardToCallback(
      const ProvisionFetcher::RetrieveCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  ProvisionFetcher::RetrieveCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(ProvisionFetcher_Retrieve_ForwardToCallback);
};
bool ProvisionFetcher_Retrieve_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::ProvisionFetcher_Retrieve_ResponseParams_Data* params =
      reinterpret_cast<internal::ProvisionFetcher_Retrieve_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_result{};
  mojo::String p_response{};
  ProvisionFetcher_Retrieve_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_result = input_data_view.result();
  if (!input_data_view.ReadResponse(&p_response))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "ProvisionFetcher::Retrieve response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_result), 
std::move(p_response));
  }
  return true;
}

ProvisionFetcherProxy::ProvisionFetcherProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void ProvisionFetcherProxy::Retrieve(
    const mojo::String& in_default_url, const mojo::String& in_request_data, const RetrieveCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::ProvisionFetcher_Retrieve_Params_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_default_url, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_request_data, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kProvisionFetcher_Retrieve_Name, size);

  auto params =
      ::media::mojom::internal::ProvisionFetcher_Retrieve_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->default_url)::BaseType* default_url_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_default_url, builder.buffer(), &default_url_ptr, &serialization_context_);
  params->default_url.Set(default_url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->default_url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null default_url in ProvisionFetcher.Retrieve request");
  typename decltype(params->request_data)::BaseType* request_data_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_request_data, builder.buffer(), &request_data_ptr, &serialization_context_);
  params->request_data.Set(request_data_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_data.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_data in ProvisionFetcher.Retrieve request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new ProvisionFetcher_Retrieve_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class ProvisionFetcher_Retrieve_ProxyToResponder {
 public:
  static ProvisionFetcher::RetrieveCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<ProvisionFetcher_Retrieve_ProxyToResponder> proxy(
        new ProvisionFetcher_Retrieve_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&ProvisionFetcher_Retrieve_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~ProvisionFetcher_Retrieve_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "ProvisionFetcher::Retrieve() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  ProvisionFetcher_Retrieve_ProxyToResponder(
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
      bool in_result, 
mojo::String in_response);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(ProvisionFetcher_Retrieve_ProxyToResponder);
};

void ProvisionFetcher_Retrieve_ProxyToResponder::Run(
    bool in_result, 
mojo::String in_response) {
  size_t size = sizeof(::media::mojom::internal::ProvisionFetcher_Retrieve_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_response, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kProvisionFetcher_Retrieve_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::ProvisionFetcher_Retrieve_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->result = in_result;
  typename decltype(params->response)::BaseType* response_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_response, builder.buffer(), &response_ptr, &serialization_context_);
  params->response.Set(response_ptr);
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

ProvisionFetcherStub::ProvisionFetcherStub()
    : sink_(nullptr),
      control_message_handler_(ProvisionFetcher::Version_) {
}

ProvisionFetcherStub::~ProvisionFetcherStub() {}

bool ProvisionFetcherStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kProvisionFetcher_Retrieve_Name: {
      break;
    }
  }
  return false;
}

bool ProvisionFetcherStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kProvisionFetcher_Retrieve_Name: {
      internal::ProvisionFetcher_Retrieve_Params_Data* params =
          reinterpret_cast<internal::ProvisionFetcher_Retrieve_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::String p_default_url{};
      mojo::String p_request_data{};
      ProvisionFetcher_Retrieve_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadDefaultUrl(&p_default_url))
        success = false;
      if (!input_data_view.ReadRequestData(&p_request_data))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "ProvisionFetcher::Retrieve deserializer");
        return false;
      }
      ProvisionFetcher::RetrieveCallback callback =
          ProvisionFetcher_Retrieve_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "ProvisionFetcher::Retrieve");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Retrieve(
std::move(p_default_url), 
std::move(p_request_data), callback);
      return true;
    }
  }
  return false;
}

ProvisionFetcherRequestValidator::ProvisionFetcherRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ProvisionFetcherRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ProvisionFetcher RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kProvisionFetcher_Retrieve_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProvisionFetcher_Retrieve_Params_Data>(
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

ProvisionFetcherResponseValidator::ProvisionFetcherResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool ProvisionFetcherResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "ProvisionFetcher ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kProvisionFetcher_Retrieve_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::ProvisionFetcher_Retrieve_ResponseParams_Data>(
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
}  // namespace media

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif