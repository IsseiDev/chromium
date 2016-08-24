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

#include "chrome/browser/ui/webui/engagement/site_engagement.mojom.h"

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
#include "url/mojo/url_gurl_struct_traits.h"
namespace mojom {

namespace {

class SiteEngagementUIHandler_GetSiteEngagementInfo_ParamsDataView {
 public:
  SiteEngagementUIHandler_GetSiteEngagementInfo_ParamsDataView() {}

  SiteEngagementUIHandler_GetSiteEngagementInfo_ParamsDataView(
      internal::SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data* data_ = nullptr;
};



class SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParamsDataView {
 public:
  SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParamsDataView() {}

  SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParamsDataView(
      internal::SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetInfoDataView(
      mojo::ArrayDataView<SiteEngagementInfoDataView>* output);

  template <typename UserType>
  bool ReadInfo(UserType* output) {
    auto pointer = data_->info.Get();
    return mojo::internal::Deserialize<mojo::Array<::mojom::SiteEngagementInfoPtr>>(
        pointer, output, context_);
  }
 private:
  internal::SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParamsDataView::GetInfoDataView(
    mojo::ArrayDataView<SiteEngagementInfoDataView>* output) {
  auto pointer = data_->info.Get();
  *output = mojo::ArrayDataView<SiteEngagementInfoDataView>(pointer, context_);
}


class SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_ParamsDataView {
 public:
  SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_ParamsDataView() {}

  SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_ParamsDataView(
      internal::SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadOrigin(UserType* output) {
    auto pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  double score() const {
    return data_->score;
  }
 private:
  internal::SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_ParamsDataView::GetOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}


}  // namespace// static
SiteEngagementInfoPtr SiteEngagementInfo::New() {
  SiteEngagementInfoPtr rv;
  mojo::internal::StructHelper<SiteEngagementInfo>::Initialize(&rv);
  return rv;
}

SiteEngagementInfo::SiteEngagementInfo()
    : origin(),
      score() {
}

SiteEngagementInfo::~SiteEngagementInfo() {
}
const char SiteEngagementUIHandler::Name_[] = "mojom::SiteEngagementUIHandler";
const uint32_t SiteEngagementUIHandler::Version_;

class SiteEngagementUIHandler_GetSiteEngagementInfo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  SiteEngagementUIHandler_GetSiteEngagementInfo_ForwardToCallback(
      const SiteEngagementUIHandler::GetSiteEngagementInfoCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  SiteEngagementUIHandler::GetSiteEngagementInfoCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(SiteEngagementUIHandler_GetSiteEngagementInfo_ForwardToCallback);
};
bool SiteEngagementUIHandler_GetSiteEngagementInfo_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data* params =
      reinterpret_cast<internal::SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  mojo::Array<SiteEngagementInfoPtr> p_info{};
  SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadInfo(&p_info))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "SiteEngagementUIHandler::GetSiteEngagementInfo response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_info));
  }
  return true;
}

SiteEngagementUIHandlerProxy::SiteEngagementUIHandlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void SiteEngagementUIHandlerProxy::GetSiteEngagementInfo(
    const GetSiteEngagementInfoCallback& callback) {
  size_t size = sizeof(::mojom::internal::SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kSiteEngagementUIHandler_GetSiteEngagementInfo_Name, size);

  auto params =
      ::mojom::internal::SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new SiteEngagementUIHandler_GetSiteEngagementInfo_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void SiteEngagementUIHandlerProxy::SetSiteEngagementScoreForOrigin(
    const GURL& in_origin, double in_score) {
  size_t size = sizeof(::mojom::internal::SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data);
  size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
      in_origin, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kSiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Name, size);

  auto params =
      ::mojom::internal::SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->origin)::BaseType* origin_ptr;
  mojo::internal::Serialize<::url::mojom::UrlPtr>(
      in_origin, builder.buffer(), &origin_ptr, &serialization_context_);
  params->origin.Set(origin_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null origin in SiteEngagementUIHandler.SetSiteEngagementScoreForOrigin request");
  params->score = in_score;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class SiteEngagementUIHandler_GetSiteEngagementInfo_ProxyToResponder {
 public:
  static SiteEngagementUIHandler::GetSiteEngagementInfoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<SiteEngagementUIHandler_GetSiteEngagementInfo_ProxyToResponder> proxy(
        new SiteEngagementUIHandler_GetSiteEngagementInfo_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&SiteEngagementUIHandler_GetSiteEngagementInfo_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~SiteEngagementUIHandler_GetSiteEngagementInfo_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "SiteEngagementUIHandler::GetSiteEngagementInfo() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  SiteEngagementUIHandler_GetSiteEngagementInfo_ProxyToResponder(
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
      mojo::Array<SiteEngagementInfoPtr> in_info);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(SiteEngagementUIHandler_GetSiteEngagementInfo_ProxyToResponder);
};

void SiteEngagementUIHandler_GetSiteEngagementInfo_ProxyToResponder::Run(
    mojo::Array<SiteEngagementInfoPtr> in_info) {
  size_t size = sizeof(::mojom::internal::SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::mojom::SiteEngagementInfoPtr>>(
      in_info, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kSiteEngagementUIHandler_GetSiteEngagementInfo_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::mojom::internal::SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->info)::BaseType* info_ptr;
  const mojo::internal::ContainerValidateParams info_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::mojom::SiteEngagementInfoPtr>>(
      in_info, builder.buffer(), &info_ptr, &info_validate_params,
      &serialization_context_);
  params->info.Set(info_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->info.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null info in SiteEngagementUIHandler.GetSiteEngagementInfo response");
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

SiteEngagementUIHandlerStub::SiteEngagementUIHandlerStub()
    : sink_(nullptr),
      control_message_handler_(SiteEngagementUIHandler::Version_) {
}

SiteEngagementUIHandlerStub::~SiteEngagementUIHandlerStub() {}

bool SiteEngagementUIHandlerStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kSiteEngagementUIHandler_GetSiteEngagementInfo_Name: {
      break;
    }
    case internal::kSiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Name: {
      internal::SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data* params =
          reinterpret_cast<internal::SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      GURL p_origin{};
      double p_score{};
      SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadOrigin(&p_origin))
        success = false;
      p_score = input_data_view.score();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SiteEngagementUIHandler::SetSiteEngagementScoreForOrigin deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "SiteEngagementUIHandler::SetSiteEngagementScoreForOrigin");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetSiteEngagementScoreForOrigin(
std::move(p_origin), 
std::move(p_score));
      return true;
    }
  }
  return false;
}

bool SiteEngagementUIHandlerStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kSiteEngagementUIHandler_GetSiteEngagementInfo_Name: {
      internal::SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data* params =
          reinterpret_cast<internal::SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      SiteEngagementUIHandler_GetSiteEngagementInfo_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "SiteEngagementUIHandler::GetSiteEngagementInfo deserializer");
        return false;
      }
      SiteEngagementUIHandler::GetSiteEngagementInfoCallback callback =
          SiteEngagementUIHandler_GetSiteEngagementInfo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "SiteEngagementUIHandler::GetSiteEngagementInfo");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetSiteEngagementInfo(callback);
      return true;
    }
    case internal::kSiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Name: {
      break;
    }
  }
  return false;
}

SiteEngagementUIHandlerRequestValidator::SiteEngagementUIHandlerRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool SiteEngagementUIHandlerRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "SiteEngagementUIHandler RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kSiteEngagementUIHandler_GetSiteEngagementInfo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SiteEngagementUIHandler_GetSiteEngagementInfo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kSiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::SiteEngagementUIHandler_SetSiteEngagementScoreForOrigin_Params_Data>(
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

SiteEngagementUIHandlerResponseValidator::SiteEngagementUIHandlerResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool SiteEngagementUIHandlerResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "SiteEngagementUIHandler ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kSiteEngagementUIHandler_GetSiteEngagementInfo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::SiteEngagementUIHandler_GetSiteEngagementInfo_ResponseParams_Data>(
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

namespace mojo {


// static
bool StructTraits<::mojom::SiteEngagementInfo, ::mojom::SiteEngagementInfoPtr>::Read(
    ::mojom::SiteEngagementInfoDataView input,
    ::mojom::SiteEngagementInfoPtr* output) {
  bool success = true;
  ::mojom::SiteEngagementInfoPtr result(::mojom::SiteEngagementInfo::New());
  
      if (!input.ReadOrigin(&result->origin))
        success = false;
      result->score = input.score();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif