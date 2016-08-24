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

#include "content/common/render_frame_message_filter.mojom.h"

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
#include "cc/ipc/quads_struct_traits.h"
#include "url/mojo/origin_struct_traits.h"
#include "ui/events/mojo/event_struct_traits.h"
#include "content/common/bluetooth/web_bluetooth_device_id_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "gpu/ipc/common/mailbox_struct_traits.h"
#include "gpu/ipc/common/gpu_command_buffer_traits.h"
#include "cc/ipc/shared_quad_state_struct_traits.h"
#include "ui/gfx/mojo/accelerated_widget_struct_traits.h"
#include "cc/ipc/transferable_resource_struct_traits.h"
#include "ui/gfx/mojo/buffer_types_enum_traits.h"
#include "cc/ipc/filter_operations_struct_traits.h"
#include "gpu/ipc/common/dx_diag_node_struct_traits.h"
#include "cc/ipc/render_pass_id_struct_traits.h"
#include "services/shell/public/cpp/identity_struct_traits.h"
#include "cc/ipc/filter_operation_struct_traits.h"
#include "services/ui/public/interfaces/display/display_struct_traits.h"
#include "ipc/ipc_message_utils.h"
#include "ui/gfx/geometry/mojo/geometry_struct_traits.h"
#include "cc/ipc/render_pass_struct_traits.h"
#include "cc/ipc/compositor_frame_metadata_struct_traits.h"
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "ui/events/mojo/latency_info_struct_traits.h"
#include "ui/gfx/mojo/transform_struct_traits.h"
#include "content/common/resource_messages.h"
#include "skia/public/interfaces/bitmap_skbitmap_struct_traits.h"
#include "ui/gfx/mojo/selection_bound_struct_traits.h"
#include "url/mojo/url_gurl_struct_traits.h"
#include "device/bluetooth/public/interfaces/bluetooth_uuid_struct_traits.h"
#include "gpu/ipc/common/mailbox_holder_struct_traits.h"
#include "cc/ipc/begin_frame_args_struct_traits.h"
#include "gpu/ipc/common/gpu_info_struct_traits.h"
#include "cc/ipc/selection_struct_traits.h"
#include "services/shell/public/cpp/capabilities_struct_traits.h"
#include "gpu/ipc/common/sync_token_struct_traits.h"
#include "mojo/common/common_custom_types_struct_traits.h"
#include "skia/public/interfaces/image_filter_struct_traits.h"
#include "cc/ipc/returned_resource_struct_traits.h"
#include "cc/ipc/compositor_frame_struct_traits.h"
namespace content {
namespace mojom {

namespace {

class RenderFrameMessageFilter_SetCookie_ParamsDataView {
 public:
  RenderFrameMessageFilter_SetCookie_ParamsDataView() {}

  RenderFrameMessageFilter_SetCookie_ParamsDataView(
      internal::RenderFrameMessageFilter_SetCookie_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadUrl(UserType* output) {
    auto pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetFirstPartyForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadFirstPartyForCookies(UserType* output) {
    auto pointer = data_->first_party_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetCookieDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCookie(UserType* output) {
    auto pointer = data_->cookie.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::RenderFrameMessageFilter_SetCookie_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void RenderFrameMessageFilter_SetCookie_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RenderFrameMessageFilter_SetCookie_ParamsDataView::GetFirstPartyForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->first_party_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RenderFrameMessageFilter_SetCookie_ParamsDataView::GetCookieDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->cookie.Get();
  *output = mojo::StringDataView(pointer, context_);
}


class RenderFrameMessageFilter_GetCookies_ParamsDataView {
 public:
  RenderFrameMessageFilter_GetCookies_ParamsDataView() {}

  RenderFrameMessageFilter_GetCookies_ParamsDataView(
      internal::RenderFrameMessageFilter_GetCookies_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadUrl(UserType* output) {
    auto pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetFirstPartyForCookiesDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadFirstPartyForCookies(UserType* output) {
    auto pointer = data_->first_party_for_cookies.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
 private:
  internal::RenderFrameMessageFilter_GetCookies_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void RenderFrameMessageFilter_GetCookies_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void RenderFrameMessageFilter_GetCookies_ParamsDataView::GetFirstPartyForCookiesDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->first_party_for_cookies.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}

class RenderFrameMessageFilter_GetCookies_ResponseParamsDataView {
 public:
  RenderFrameMessageFilter_GetCookies_ResponseParamsDataView() {}

  RenderFrameMessageFilter_GetCookies_ResponseParamsDataView(
      internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetCookiesDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCookies(UserType* output) {
    auto pointer = data_->cookies.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void RenderFrameMessageFilter_GetCookies_ResponseParamsDataView::GetCookiesDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->cookies.Get();
  *output = mojo::StringDataView(pointer, context_);
}


}  // namespace
const char RenderFrameMessageFilter::Name_[] = "content::mojom::RenderFrameMessageFilter";
const uint32_t RenderFrameMessageFilter::Version_;
bool RenderFrameMessageFilter::GetCookies(int32_t render_frame_id, const GURL& url, const GURL& first_party_for_cookies, std::string* cookies) {
  NOTREACHED();
  return false;
}
class RenderFrameMessageFilter_GetCookies_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  RenderFrameMessageFilter_GetCookies_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, std::string* out_cookies)
      : serialization_context_(std::move(group_controller)), result_(result), out_cookies_(out_cookies) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  std::string* out_cookies_;DISALLOW_COPY_AND_ASSIGN(RenderFrameMessageFilter_GetCookies_HandleSyncResponse);
};
bool RenderFrameMessageFilter_GetCookies_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data* params =
      reinterpret_cast<internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  std::string p_cookies{};
  RenderFrameMessageFilter_GetCookies_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadCookies(&p_cookies))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderFrameMessageFilter::GetCookies response deserializer");
    return false;
  }
  *out_cookies_ = std::move(p_cookies);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class RenderFrameMessageFilter_GetCookies_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  RenderFrameMessageFilter_GetCookies_ForwardToCallback(
      const RenderFrameMessageFilter::GetCookiesCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  RenderFrameMessageFilter::GetCookiesCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(RenderFrameMessageFilter_GetCookies_ForwardToCallback);
};
bool RenderFrameMessageFilter_GetCookies_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data* params =
      reinterpret_cast<internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  std::string p_cookies{};
  RenderFrameMessageFilter_GetCookies_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadCookies(&p_cookies))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "RenderFrameMessageFilter::GetCookies response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_cookies));
  }
  return true;
}

RenderFrameMessageFilterProxy::RenderFrameMessageFilterProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void RenderFrameMessageFilterProxy::SetCookie(
    int32_t in_render_frame_id, const GURL& in_url, const GURL& in_first_party_for_cookies, const std::string& in_cookie) {
  size_t size = sizeof(::content::mojom::internal::RenderFrameMessageFilter_SetCookie_Params_Data);
  size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
      in_url, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
      in_first_party_for_cookies, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_cookie, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kRenderFrameMessageFilter_SetCookie_Name, size);

  auto params =
      ::content::mojom::internal::RenderFrameMessageFilter_SetCookie_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->render_frame_id = in_render_frame_id;
  typename decltype(params->url)::BaseType* url_ptr;
  mojo::internal::Serialize<::url::mojom::UrlPtr>(
      in_url, builder.buffer(), &url_ptr, &serialization_context_);
  params->url.Set(url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RenderFrameMessageFilter.SetCookie request");
  typename decltype(params->first_party_for_cookies)::BaseType* first_party_for_cookies_ptr;
  mojo::internal::Serialize<::url::mojom::UrlPtr>(
      in_first_party_for_cookies, builder.buffer(), &first_party_for_cookies_ptr, &serialization_context_);
  params->first_party_for_cookies.Set(first_party_for_cookies_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->first_party_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null first_party_for_cookies in RenderFrameMessageFilter.SetCookie request");
  typename decltype(params->cookie)::BaseType* cookie_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_cookie, builder.buffer(), &cookie_ptr, &serialization_context_);
  params->cookie.Set(cookie_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookie.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookie in RenderFrameMessageFilter.SetCookie request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
bool RenderFrameMessageFilterProxy::GetCookies(
    int32_t param_render_frame_id, const GURL& param_url, const GURL& param_first_party_for_cookies, std::string* param_cookies) {
  size_t size = sizeof(::content::mojom::internal::RenderFrameMessageFilter_GetCookies_Params_Data);
  size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
      param_url, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
      param_first_party_for_cookies, &serialization_context_);

  mojo::internal::RequestMessageBuilder builder(internal::kRenderFrameMessageFilter_GetCookies_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::content::mojom::internal::RenderFrameMessageFilter_GetCookies_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->render_frame_id = param_render_frame_id;
  typename decltype(params->url)::BaseType* url_ptr;
  mojo::internal::Serialize<::url::mojom::UrlPtr>(
      param_url, builder.buffer(), &url_ptr, &serialization_context_);
  params->url.Set(url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RenderFrameMessageFilter.GetCookies request");
  typename decltype(params->first_party_for_cookies)::BaseType* first_party_for_cookies_ptr;
  mojo::internal::Serialize<::url::mojom::UrlPtr>(
      param_first_party_for_cookies, builder.buffer(), &first_party_for_cookies_ptr, &serialization_context_);
  params->first_party_for_cookies.Set(first_party_for_cookies_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->first_party_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null first_party_for_cookies in RenderFrameMessageFilter.GetCookies request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new RenderFrameMessageFilter_GetCookies_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_cookies);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void RenderFrameMessageFilterProxy::GetCookies(
    int32_t in_render_frame_id, const GURL& in_url, const GURL& in_first_party_for_cookies, const GetCookiesCallback& callback) {
  size_t size = sizeof(::content::mojom::internal::RenderFrameMessageFilter_GetCookies_Params_Data);
  size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
      in_url, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
      in_first_party_for_cookies, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kRenderFrameMessageFilter_GetCookies_Name, size);

  auto params =
      ::content::mojom::internal::RenderFrameMessageFilter_GetCookies_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->render_frame_id = in_render_frame_id;
  typename decltype(params->url)::BaseType* url_ptr;
  mojo::internal::Serialize<::url::mojom::UrlPtr>(
      in_url, builder.buffer(), &url_ptr, &serialization_context_);
  params->url.Set(url_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in RenderFrameMessageFilter.GetCookies request");
  typename decltype(params->first_party_for_cookies)::BaseType* first_party_for_cookies_ptr;
  mojo::internal::Serialize<::url::mojom::UrlPtr>(
      in_first_party_for_cookies, builder.buffer(), &first_party_for_cookies_ptr, &serialization_context_);
  params->first_party_for_cookies.Set(first_party_for_cookies_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->first_party_for_cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null first_party_for_cookies in RenderFrameMessageFilter.GetCookies request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new RenderFrameMessageFilter_GetCookies_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class RenderFrameMessageFilter_GetCookies_ProxyToResponder {
 public:
  static RenderFrameMessageFilter::GetCookiesCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<RenderFrameMessageFilter_GetCookies_ProxyToResponder> proxy(
        new RenderFrameMessageFilter_GetCookies_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&RenderFrameMessageFilter_GetCookies_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~RenderFrameMessageFilter_GetCookies_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "RenderFrameMessageFilter::GetCookies() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  RenderFrameMessageFilter_GetCookies_ProxyToResponder(
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
      const std::string& in_cookies);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(RenderFrameMessageFilter_GetCookies_ProxyToResponder);
};

void RenderFrameMessageFilter_GetCookies_ProxyToResponder::Run(
    const std::string& in_cookies) {
  size_t size = sizeof(::content::mojom::internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::String>(
      in_cookies, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kRenderFrameMessageFilter_GetCookies_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::content::mojom::internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->cookies)::BaseType* cookies_ptr;
  mojo::internal::Serialize<mojo::String>(
      in_cookies, builder.buffer(), &cookies_ptr, &serialization_context_);
  params->cookies.Set(cookies_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cookies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cookies in RenderFrameMessageFilter.GetCookies response");
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

RenderFrameMessageFilterStub::RenderFrameMessageFilterStub()
    : sink_(nullptr),
      control_message_handler_(RenderFrameMessageFilter::Version_) {
}

RenderFrameMessageFilterStub::~RenderFrameMessageFilterStub() {}

bool RenderFrameMessageFilterStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kRenderFrameMessageFilter_SetCookie_Name: {
      internal::RenderFrameMessageFilter_SetCookie_Params_Data* params =
          reinterpret_cast<internal::RenderFrameMessageFilter_SetCookie_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int32_t p_render_frame_id{};
      GURL p_url{};
      GURL p_first_party_for_cookies{};
      std::string p_cookie{};
      RenderFrameMessageFilter_SetCookie_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_render_frame_id = input_data_view.render_frame_id();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadFirstPartyForCookies(&p_first_party_for_cookies))
        success = false;
      if (!input_data_view.ReadCookie(&p_cookie))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderFrameMessageFilter::SetCookie deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "RenderFrameMessageFilter::SetCookie");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetCookie(
std::move(p_render_frame_id), 
std::move(p_url), 
std::move(p_first_party_for_cookies), 
std::move(p_cookie));
      return true;
    }
    case internal::kRenderFrameMessageFilter_GetCookies_Name: {
      break;
    }
  }
  return false;
}

bool RenderFrameMessageFilterStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kRenderFrameMessageFilter_SetCookie_Name: {
      break;
    }
    case internal::kRenderFrameMessageFilter_GetCookies_Name: {
      internal::RenderFrameMessageFilter_GetCookies_Params_Data* params =
          reinterpret_cast<internal::RenderFrameMessageFilter_GetCookies_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int32_t p_render_frame_id{};
      GURL p_url{};
      GURL p_first_party_for_cookies{};
      RenderFrameMessageFilter_GetCookies_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_render_frame_id = input_data_view.render_frame_id();
      if (!input_data_view.ReadUrl(&p_url))
        success = false;
      if (!input_data_view.ReadFirstPartyForCookies(&p_first_party_for_cookies))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "RenderFrameMessageFilter::GetCookies deserializer");
        return false;
      }
      RenderFrameMessageFilter::GetCookiesCallback callback =
          RenderFrameMessageFilter_GetCookies_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "RenderFrameMessageFilter::GetCookies");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetCookies(
std::move(p_render_frame_id), 
std::move(p_url), 
std::move(p_first_party_for_cookies), callback);
      return true;
    }
  }
  return false;
}

RenderFrameMessageFilterRequestValidator::RenderFrameMessageFilterRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool RenderFrameMessageFilterRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "RenderFrameMessageFilter RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kRenderFrameMessageFilter_SetCookie_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderFrameMessageFilter_SetCookie_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kRenderFrameMessageFilter_GetCookies_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderFrameMessageFilter_GetCookies_Params_Data>(
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

RenderFrameMessageFilterResponseValidator::RenderFrameMessageFilterResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool RenderFrameMessageFilterResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "RenderFrameMessageFilter ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kRenderFrameMessageFilter_GetCookies_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::RenderFrameMessageFilter_GetCookies_ResponseParams_Data>(
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
}  // namespace content

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif