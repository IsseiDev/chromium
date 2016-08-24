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

#include "third_party/WebKit/public/platform/modules/offscreencanvas/offscreen_canvas_surface.mojom-blink.h"

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
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"
#include "cc/ipc/surface_sequence_struct_traits.h"
#include "cc/ipc/surface_id_struct_traits.h"
#include "third_party/WebKit/Source/platform/mojo/KURLStructTraits.h"
#include "third_party/WebKit/Source/platform/mojo/SecurityOriginStructTraits.h"
namespace blink {
namespace mojom {
namespace blink {

namespace {

class OffscreenCanvasSurface_GetSurfaceId_ParamsDataView {
 public:
  OffscreenCanvasSurface_GetSurfaceId_ParamsDataView() {}

  OffscreenCanvasSurface_GetSurfaceId_ParamsDataView(
      internal::OffscreenCanvasSurface_GetSurfaceId_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::OffscreenCanvasSurface_GetSurfaceId_Params_Data* data_ = nullptr;
};



class OffscreenCanvasSurface_GetSurfaceId_ResponseParamsDataView {
 public:
  OffscreenCanvasSurface_GetSurfaceId_ResponseParamsDataView() {}

  OffscreenCanvasSurface_GetSurfaceId_ResponseParamsDataView(
      internal::OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceIdDataView(
      ::cc::mojom::blink::SurfaceIdDataView* output);

  template <typename UserType>
  bool ReadSurfaceId(UserType* output) {
    auto pointer = data_->surface_id.Get();
    return mojo::internal::Deserialize<::cc::mojom::blink::SurfaceIdPtr>(
        pointer, output, context_);
  }
 private:
  internal::OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void OffscreenCanvasSurface_GetSurfaceId_ResponseParamsDataView::GetSurfaceIdDataView(
    ::cc::mojom::blink::SurfaceIdDataView* output) {
  auto pointer = data_->surface_id.Get();
  *output = ::cc::mojom::blink::SurfaceIdDataView(pointer, context_);
}


class OffscreenCanvasSurface_RequestSurfaceCreation_ParamsDataView {
 public:
  OffscreenCanvasSurface_RequestSurfaceCreation_ParamsDataView() {}

  OffscreenCanvasSurface_RequestSurfaceCreation_ParamsDataView(
      internal::OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceIdDataView(
      ::cc::mojom::blink::SurfaceIdDataView* output);

  template <typename UserType>
  bool ReadSurfaceId(UserType* output) {
    auto pointer = data_->surface_id.Get();
    return mojo::internal::Deserialize<::cc::mojom::blink::SurfaceIdPtr>(
        pointer, output, context_);
  }
 private:
  internal::OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void OffscreenCanvasSurface_RequestSurfaceCreation_ParamsDataView::GetSurfaceIdDataView(
    ::cc::mojom::blink::SurfaceIdDataView* output) {
  auto pointer = data_->surface_id.Get();
  *output = ::cc::mojom::blink::SurfaceIdDataView(pointer, context_);
}


class OffscreenCanvasSurface_Require_ParamsDataView {
 public:
  OffscreenCanvasSurface_Require_ParamsDataView() {}

  OffscreenCanvasSurface_Require_ParamsDataView(
      internal::OffscreenCanvasSurface_Require_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSurfaceIdDataView(
      ::cc::mojom::blink::SurfaceIdDataView* output);

  template <typename UserType>
  bool ReadSurfaceId(UserType* output) {
    auto pointer = data_->surface_id.Get();
    return mojo::internal::Deserialize<::cc::mojom::blink::SurfaceIdPtr>(
        pointer, output, context_);
  }
  inline void GetSequenceDataView(
      ::cc::mojom::blink::SurfaceSequenceDataView* output);

  template <typename UserType>
  bool ReadSequence(UserType* output) {
    auto pointer = data_->sequence.Get();
    return mojo::internal::Deserialize<::cc::mojom::blink::SurfaceSequencePtr>(
        pointer, output, context_);
  }
 private:
  internal::OffscreenCanvasSurface_Require_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void OffscreenCanvasSurface_Require_ParamsDataView::GetSurfaceIdDataView(
    ::cc::mojom::blink::SurfaceIdDataView* output) {
  auto pointer = data_->surface_id.Get();
  *output = ::cc::mojom::blink::SurfaceIdDataView(pointer, context_);
}
inline void OffscreenCanvasSurface_Require_ParamsDataView::GetSequenceDataView(
    ::cc::mojom::blink::SurfaceSequenceDataView* output) {
  auto pointer = data_->sequence.Get();
  *output = ::cc::mojom::blink::SurfaceSequenceDataView(pointer, context_);
}


class OffscreenCanvasSurface_Satisfy_ParamsDataView {
 public:
  OffscreenCanvasSurface_Satisfy_ParamsDataView() {}

  OffscreenCanvasSurface_Satisfy_ParamsDataView(
      internal::OffscreenCanvasSurface_Satisfy_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetSequenceDataView(
      ::cc::mojom::blink::SurfaceSequenceDataView* output);

  template <typename UserType>
  bool ReadSequence(UserType* output) {
    auto pointer = data_->sequence.Get();
    return mojo::internal::Deserialize<::cc::mojom::blink::SurfaceSequencePtr>(
        pointer, output, context_);
  }
 private:
  internal::OffscreenCanvasSurface_Satisfy_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void OffscreenCanvasSurface_Satisfy_ParamsDataView::GetSequenceDataView(
    ::cc::mojom::blink::SurfaceSequenceDataView* output) {
  auto pointer = data_->sequence.Get();
  *output = ::cc::mojom::blink::SurfaceSequenceDataView(pointer, context_);
}


}  // namespace
const char OffscreenCanvasSurface::Name_[] = "blink::mojom::OffscreenCanvasSurface";
const uint32_t OffscreenCanvasSurface::Version_;
bool OffscreenCanvasSurface::GetSurfaceId(cc::SurfaceId* surface_id) {
  NOTREACHED();
  return false;
}
class OffscreenCanvasSurface_GetSurfaceId_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  OffscreenCanvasSurface_GetSurfaceId_HandleSyncResponse(
      scoped_refptr<mojo::AssociatedGroupController> group_controller,
      bool* result, cc::SurfaceId* out_surface_id)
      : serialization_context_(std::move(group_controller)), result_(result), out_surface_id_(out_surface_id) {
    DCHECK(!*result_);
  }
  bool Accept(mojo::Message* message) override;
 private:
  mojo::internal::SerializationContext serialization_context_;
  bool* result_;
  cc::SurfaceId* out_surface_id_;DISALLOW_COPY_AND_ASSIGN(OffscreenCanvasSurface_GetSurfaceId_HandleSyncResponse);
};
bool OffscreenCanvasSurface_GetSurfaceId_HandleSyncResponse::Accept(
    mojo::Message* message) {
  internal::OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data* params =
      reinterpret_cast<internal::OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  cc::SurfaceId p_surface_id{};
  OffscreenCanvasSurface_GetSurfaceId_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadSurfaceId(&p_surface_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "OffscreenCanvasSurface::GetSurfaceId response deserializer");
    return false;
  }
  *out_surface_id_ = std::move(p_surface_id);
  mojo::internal::SyncMessageResponseSetup::SetCurrentSyncResponseMessage(
      message);
  *result_ = true;
  return true;
}

class OffscreenCanvasSurface_GetSurfaceId_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  OffscreenCanvasSurface_GetSurfaceId_ForwardToCallback(
      const OffscreenCanvasSurface::GetSurfaceIdCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  OffscreenCanvasSurface::GetSurfaceIdCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(OffscreenCanvasSurface_GetSurfaceId_ForwardToCallback);
};
bool OffscreenCanvasSurface_GetSurfaceId_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data* params =
      reinterpret_cast<internal::OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  cc::SurfaceId p_surface_id{};
  OffscreenCanvasSurface_GetSurfaceId_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadSurfaceId(&p_surface_id))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "OffscreenCanvasSurface::GetSurfaceId response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_surface_id));
  }
  return true;
}

OffscreenCanvasSurfaceProxy::OffscreenCanvasSurfaceProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}
bool OffscreenCanvasSurfaceProxy::GetSurfaceId(
    cc::SurfaceId* param_surface_id) {
  size_t size = sizeof(::blink::mojom::internal::OffscreenCanvasSurface_GetSurfaceId_Params_Data);

  mojo::internal::RequestMessageBuilder builder(internal::kOffscreenCanvasSurface_GetSurfaceId_Name, size,
                                                mojo::Message::kFlagIsSync);

  auto params =
      ::blink::mojom::internal::OffscreenCanvasSurface_GetSurfaceId_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());

  bool result = false;
  mojo::MessageReceiver* responder =
      new OffscreenCanvasSurface_GetSurfaceId_HandleSyncResponse(
          serialization_context_.group_controller, &result, param_surface_id);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
  return result;
}

void OffscreenCanvasSurfaceProxy::GetSurfaceId(
    const GetSurfaceIdCallback& callback) {
  size_t size = sizeof(::blink::mojom::internal::OffscreenCanvasSurface_GetSurfaceId_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kOffscreenCanvasSurface_GetSurfaceId_Name, size);

  auto params =
      ::blink::mojom::internal::OffscreenCanvasSurface_GetSurfaceId_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new OffscreenCanvasSurface_GetSurfaceId_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void OffscreenCanvasSurfaceProxy::RequestSurfaceCreation(
    const cc::SurfaceId& in_surface_id) {
  size_t size = sizeof(::blink::mojom::internal::OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data);
  size += mojo::internal::PrepareToSerialize<::cc::mojom::blink::SurfaceIdPtr>(
      in_surface_id, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kOffscreenCanvasSurface_RequestSurfaceCreation_Name, size);

  auto params =
      ::blink::mojom::internal::OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->surface_id)::BaseType* surface_id_ptr;
  mojo::internal::Serialize<::cc::mojom::blink::SurfaceIdPtr>(
      in_surface_id, builder.buffer(), &surface_id_ptr, &serialization_context_);
  params->surface_id.Set(surface_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_id in OffscreenCanvasSurface.RequestSurfaceCreation request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void OffscreenCanvasSurfaceProxy::Require(
    const cc::SurfaceId& in_surface_id, const cc::SurfaceSequence& in_sequence) {
  size_t size = sizeof(::blink::mojom::internal::OffscreenCanvasSurface_Require_Params_Data);
  size += mojo::internal::PrepareToSerialize<::cc::mojom::blink::SurfaceIdPtr>(
      in_surface_id, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::cc::mojom::blink::SurfaceSequencePtr>(
      in_sequence, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kOffscreenCanvasSurface_Require_Name, size);

  auto params =
      ::blink::mojom::internal::OffscreenCanvasSurface_Require_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->surface_id)::BaseType* surface_id_ptr;
  mojo::internal::Serialize<::cc::mojom::blink::SurfaceIdPtr>(
      in_surface_id, builder.buffer(), &surface_id_ptr, &serialization_context_);
  params->surface_id.Set(surface_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_id in OffscreenCanvasSurface.Require request");
  typename decltype(params->sequence)::BaseType* sequence_ptr;
  mojo::internal::Serialize<::cc::mojom::blink::SurfaceSequencePtr>(
      in_sequence, builder.buffer(), &sequence_ptr, &serialization_context_);
  params->sequence.Set(sequence_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sequence.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sequence in OffscreenCanvasSurface.Require request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void OffscreenCanvasSurfaceProxy::Satisfy(
    const cc::SurfaceSequence& in_sequence) {
  size_t size = sizeof(::blink::mojom::internal::OffscreenCanvasSurface_Satisfy_Params_Data);
  size += mojo::internal::PrepareToSerialize<::cc::mojom::blink::SurfaceSequencePtr>(
      in_sequence, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kOffscreenCanvasSurface_Satisfy_Name, size);

  auto params =
      ::blink::mojom::internal::OffscreenCanvasSurface_Satisfy_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->sequence)::BaseType* sequence_ptr;
  mojo::internal::Serialize<::cc::mojom::blink::SurfaceSequencePtr>(
      in_sequence, builder.buffer(), &sequence_ptr, &serialization_context_);
  params->sequence.Set(sequence_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->sequence.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null sequence in OffscreenCanvasSurface.Satisfy request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class OffscreenCanvasSurface_GetSurfaceId_ProxyToResponder {
 public:
  static OffscreenCanvasSurface::GetSurfaceIdCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<OffscreenCanvasSurface_GetSurfaceId_ProxyToResponder> proxy(
        new OffscreenCanvasSurface_GetSurfaceId_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&OffscreenCanvasSurface_GetSurfaceId_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~OffscreenCanvasSurface_GetSurfaceId_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "OffscreenCanvasSurface::GetSurfaceId() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  OffscreenCanvasSurface_GetSurfaceId_ProxyToResponder(
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
      const cc::SurfaceId& in_surface_id);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(OffscreenCanvasSurface_GetSurfaceId_ProxyToResponder);
};

void OffscreenCanvasSurface_GetSurfaceId_ProxyToResponder::Run(
    const cc::SurfaceId& in_surface_id) {
  size_t size = sizeof(::blink::mojom::internal::OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::cc::mojom::blink::SurfaceIdPtr>(
      in_surface_id, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kOffscreenCanvasSurface_GetSurfaceId_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::blink::mojom::internal::OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->surface_id)::BaseType* surface_id_ptr;
  mojo::internal::Serialize<::cc::mojom::blink::SurfaceIdPtr>(
      in_surface_id, builder.buffer(), &surface_id_ptr, &serialization_context_);
  params->surface_id.Set(surface_id_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->surface_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null surface_id in OffscreenCanvasSurface.GetSurfaceId response");
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

OffscreenCanvasSurfaceStub::OffscreenCanvasSurfaceStub()
    : sink_(nullptr),
      control_message_handler_(OffscreenCanvasSurface::Version_) {
}

OffscreenCanvasSurfaceStub::~OffscreenCanvasSurfaceStub() {}

bool OffscreenCanvasSurfaceStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kOffscreenCanvasSurface_GetSurfaceId_Name: {
      break;
    }
    case internal::kOffscreenCanvasSurface_RequestSurfaceCreation_Name: {
      internal::OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data* params =
          reinterpret_cast<internal::OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      cc::SurfaceId p_surface_id{};
      OffscreenCanvasSurface_RequestSurfaceCreation_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSurfaceId(&p_surface_id))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OffscreenCanvasSurface::RequestSurfaceCreation deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OffscreenCanvasSurface::RequestSurfaceCreation");
      mojo::internal::MessageDispatchContext context(message);
      sink_->RequestSurfaceCreation(
std::move(p_surface_id));
      return true;
    }
    case internal::kOffscreenCanvasSurface_Require_Name: {
      internal::OffscreenCanvasSurface_Require_Params_Data* params =
          reinterpret_cast<internal::OffscreenCanvasSurface_Require_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      cc::SurfaceId p_surface_id{};
      cc::SurfaceSequence p_sequence{};
      OffscreenCanvasSurface_Require_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSurfaceId(&p_surface_id))
        success = false;
      if (!input_data_view.ReadSequence(&p_sequence))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OffscreenCanvasSurface::Require deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OffscreenCanvasSurface::Require");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Require(
std::move(p_surface_id), 
std::move(p_sequence));
      return true;
    }
    case internal::kOffscreenCanvasSurface_Satisfy_Name: {
      internal::OffscreenCanvasSurface_Satisfy_Params_Data* params =
          reinterpret_cast<internal::OffscreenCanvasSurface_Satisfy_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      cc::SurfaceSequence p_sequence{};
      OffscreenCanvasSurface_Satisfy_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadSequence(&p_sequence))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OffscreenCanvasSurface::Satisfy deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OffscreenCanvasSurface::Satisfy");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Satisfy(
std::move(p_sequence));
      return true;
    }
  }
  return false;
}

bool OffscreenCanvasSurfaceStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kOffscreenCanvasSurface_GetSurfaceId_Name: {
      internal::OffscreenCanvasSurface_GetSurfaceId_Params_Data* params =
          reinterpret_cast<internal::OffscreenCanvasSurface_GetSurfaceId_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      OffscreenCanvasSurface_GetSurfaceId_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "OffscreenCanvasSurface::GetSurfaceId deserializer");
        return false;
      }
      OffscreenCanvasSurface::GetSurfaceIdCallback callback =
          OffscreenCanvasSurface_GetSurfaceId_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "OffscreenCanvasSurface::GetSurfaceId");
      mojo::internal::MessageDispatchContext context(message);
      sink_->GetSurfaceId(callback);
      return true;
    }
    case internal::kOffscreenCanvasSurface_RequestSurfaceCreation_Name: {
      break;
    }
    case internal::kOffscreenCanvasSurface_Require_Name: {
      break;
    }
    case internal::kOffscreenCanvasSurface_Satisfy_Name: {
      break;
    }
  }
  return false;
}

OffscreenCanvasSurfaceRequestValidator::OffscreenCanvasSurfaceRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool OffscreenCanvasSurfaceRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "OffscreenCanvasSurface RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kOffscreenCanvasSurface_GetSurfaceId_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OffscreenCanvasSurface_GetSurfaceId_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kOffscreenCanvasSurface_RequestSurfaceCreation_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OffscreenCanvasSurface_RequestSurfaceCreation_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kOffscreenCanvasSurface_Require_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OffscreenCanvasSurface_Require_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kOffscreenCanvasSurface_Satisfy_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::OffscreenCanvasSurface_Satisfy_Params_Data>(
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

OffscreenCanvasSurfaceResponseValidator::OffscreenCanvasSurfaceResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool OffscreenCanvasSurfaceResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "OffscreenCanvasSurface ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kOffscreenCanvasSurface_GetSurfaceId_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::OffscreenCanvasSurface_GetSurfaceId_ResponseParams_Data>(
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
}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#elif defined(_MSC_VER)
#pragma warning(pop)
#endif