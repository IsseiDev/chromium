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

#include "media/mojo/interfaces/video_decoder.mojom.h"

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

class VideoDecoder_Construct_ParamsDataView {
 public:
  VideoDecoder_Construct_ParamsDataView() {}

  VideoDecoder_Construct_ParamsDataView(
      internal::VideoDecoder_Construct_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  VideoDecoderClientPtr TakeClient() {
    VideoDecoderClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::VideoDecoderClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedDataPipeConsumerHandle TakeDecoderBufferPipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->decoder_buffer_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::VideoDecoder_Construct_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class VideoDecoder_Initialize_ParamsDataView {
 public:
  VideoDecoder_Initialize_ParamsDataView() {}

  VideoDecoder_Initialize_ParamsDataView(
      internal::VideoDecoder_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      ::media::mojom::VideoDecoderConfigDataView* output);

  template <typename UserType>
  bool ReadConfig(UserType* output) {
    auto pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoDecoderConfigPtr>(
        pointer, output, context_);
  }
  bool low_delay() const {
    return data_->low_delay;
  }
 private:
  internal::VideoDecoder_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void VideoDecoder_Initialize_ParamsDataView::GetConfigDataView(
    ::media::mojom::VideoDecoderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = ::media::mojom::VideoDecoderConfigDataView(pointer, context_);
}

class VideoDecoder_Initialize_ResponseParamsDataView {
 public:
  VideoDecoder_Initialize_ResponseParamsDataView() {}

  VideoDecoder_Initialize_ResponseParamsDataView(
      internal::VideoDecoder_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::VideoDecoder_Initialize_ResponseParams_Data* data_ = nullptr;
};




class VideoDecoder_Decode_ParamsDataView {
 public:
  VideoDecoder_Decode_ParamsDataView() {}

  VideoDecoder_Decode_ParamsDataView(
      internal::VideoDecoder_Decode_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBufferDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  bool ReadBuffer(UserType* output) {
    auto pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferPtr>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoder_Decode_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void VideoDecoder_Decode_ParamsDataView::GetBufferDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->buffer.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}

class VideoDecoder_Decode_ResponseParamsDataView {
 public:
  VideoDecoder_Decode_ResponseParamsDataView() {}

  VideoDecoder_Decode_ResponseParamsDataView(
      internal::VideoDecoder_Decode_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::DecodeStatus>(
        data_value, output);
  }

  ::media::mojom::DecodeStatus status() const {
    return static_cast<::media::mojom::DecodeStatus>(data_->status);
  }
 private:
  internal::VideoDecoder_Decode_ResponseParams_Data* data_ = nullptr;
};




class VideoDecoder_Reset_ParamsDataView {
 public:
  VideoDecoder_Reset_ParamsDataView() {}

  VideoDecoder_Reset_ParamsDataView(
      internal::VideoDecoder_Reset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDecoder_Reset_Params_Data* data_ = nullptr;
};



class VideoDecoder_Reset_ResponseParamsDataView {
 public:
  VideoDecoder_Reset_ResponseParamsDataView() {}

  VideoDecoder_Reset_ResponseParamsDataView(
      internal::VideoDecoder_Reset_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::VideoDecoder_Reset_ResponseParams_Data* data_ = nullptr;
};




class VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView {
 public:
  VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView() {}

  VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView(
      internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetFrameDataView(
      ::media::mojom::VideoFrameDataView* output);

  template <typename UserType>
  bool ReadFrame(UserType* output) {
    auto pointer = data_->frame.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoFramePtr>(
        pointer, output, context_);
  }
 private:
  internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView::GetFrameDataView(
    ::media::mojom::VideoFrameDataView* output) {
  auto pointer = data_->frame.Get();
  *output = ::media::mojom::VideoFrameDataView(pointer, context_);
}


}  // namespace
const char VideoDecoder::Name_[] = "media::mojom::VideoDecoder";
const uint32_t VideoDecoder::Version_;

class VideoDecoder_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoDecoder_Initialize_ForwardToCallback(
      const VideoDecoder::InitializeCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoDecoder::InitializeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_Initialize_ForwardToCallback);
};
bool VideoDecoder_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::VideoDecoder_Initialize_ResponseParams_Data* params =
      reinterpret_cast<internal::VideoDecoder_Initialize_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  VideoDecoder_Initialize_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoDecoder::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success));
  }
  return true;
}

class VideoDecoder_Decode_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoDecoder_Decode_ForwardToCallback(
      const VideoDecoder::DecodeCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoDecoder::DecodeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_Decode_ForwardToCallback);
};
bool VideoDecoder_Decode_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::VideoDecoder_Decode_ResponseParams_Data* params =
      reinterpret_cast<internal::VideoDecoder_Decode_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::media::mojom::DecodeStatus p_status{};
  VideoDecoder_Decode_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoDecoder::Decode response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_status));
  }
  return true;
}

class VideoDecoder_Reset_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VideoDecoder_Reset_ForwardToCallback(
      const VideoDecoder::ResetCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  VideoDecoder::ResetCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_Reset_ForwardToCallback);
};
bool VideoDecoder_Reset_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::VideoDecoder_Reset_ResponseParams_Data* params =
      reinterpret_cast<internal::VideoDecoder_Reset_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  VideoDecoder_Reset_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "VideoDecoder::Reset response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run();
  }
  return true;
}

VideoDecoderProxy::VideoDecoderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void VideoDecoderProxy::Construct(
    VideoDecoderClientPtr in_client, mojo::ScopedDataPipeConsumerHandle in_decoder_buffer_pipe) {
  size_t size = sizeof(::media::mojom::internal::VideoDecoder_Construct_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kVideoDecoder_Construct_Name, size);

  auto params =
      ::media::mojom::internal::VideoDecoder_Construct_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::VideoDecoderClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in VideoDecoder.Construct request");
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_decoder_buffer_pipe, &params->decoder_buffer_pipe, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->decoder_buffer_pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid decoder_buffer_pipe in VideoDecoder.Construct request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void VideoDecoderProxy::Initialize(
    ::media::mojom::VideoDecoderConfigPtr in_config, bool in_low_delay, const InitializeCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::VideoDecoder_Initialize_Params_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::VideoDecoderConfigPtr>(
      in_config, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kVideoDecoder_Initialize_Name, size);

  auto params =
      ::media::mojom::internal::VideoDecoder_Initialize_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->config)::BaseType* config_ptr;
  mojo::internal::Serialize<::media::mojom::VideoDecoderConfigPtr>(
      in_config, builder.buffer(), &config_ptr, &serialization_context_);
  params->config.Set(config_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in VideoDecoder.Initialize request");
  params->low_delay = in_low_delay;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new VideoDecoder_Initialize_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void VideoDecoderProxy::Decode(
    ::media::mojom::DecoderBufferPtr in_buffer, const DecodeCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::VideoDecoder_Decode_Params_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::DecoderBufferPtr>(
      in_buffer, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kVideoDecoder_Decode_Name, size);

  auto params =
      ::media::mojom::internal::VideoDecoder_Decode_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->buffer)::BaseType* buffer_ptr;
  mojo::internal::Serialize<::media::mojom::DecoderBufferPtr>(
      in_buffer, builder.buffer(), &buffer_ptr, &serialization_context_);
  params->buffer.Set(buffer_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->buffer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null buffer in VideoDecoder.Decode request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new VideoDecoder_Decode_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void VideoDecoderProxy::Reset(
    const ResetCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::VideoDecoder_Reset_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kVideoDecoder_Reset_Name, size);

  auto params =
      ::media::mojom::internal::VideoDecoder_Reset_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new VideoDecoder_Reset_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class VideoDecoder_Initialize_ProxyToResponder {
 public:
  static VideoDecoder::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<VideoDecoder_Initialize_ProxyToResponder> proxy(
        new VideoDecoder_Initialize_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&VideoDecoder_Initialize_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~VideoDecoder_Initialize_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "VideoDecoder::Initialize() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  VideoDecoder_Initialize_ProxyToResponder(
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
      bool in_success);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_Initialize_ProxyToResponder);
};

void VideoDecoder_Initialize_ProxyToResponder::Run(
    bool in_success) {
  size_t size = sizeof(::media::mojom::internal::VideoDecoder_Initialize_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kVideoDecoder_Initialize_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::VideoDecoder_Initialize_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->success = in_success;
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
class VideoDecoder_Decode_ProxyToResponder {
 public:
  static VideoDecoder::DecodeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<VideoDecoder_Decode_ProxyToResponder> proxy(
        new VideoDecoder_Decode_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&VideoDecoder_Decode_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~VideoDecoder_Decode_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "VideoDecoder::Decode() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  VideoDecoder_Decode_ProxyToResponder(
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
      ::media::mojom::DecodeStatus in_status);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_Decode_ProxyToResponder);
};

void VideoDecoder_Decode_ProxyToResponder::Run(
    ::media::mojom::DecodeStatus in_status) {
  size_t size = sizeof(::media::mojom::internal::VideoDecoder_Decode_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kVideoDecoder_Decode_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::VideoDecoder_Decode_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::DecodeStatus>(
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
class VideoDecoder_Reset_ProxyToResponder {
 public:
  static VideoDecoder::ResetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<VideoDecoder_Reset_ProxyToResponder> proxy(
        new VideoDecoder_Reset_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&VideoDecoder_Reset_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~VideoDecoder_Reset_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "VideoDecoder::Reset() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  VideoDecoder_Reset_ProxyToResponder(
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
      );

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(VideoDecoder_Reset_ProxyToResponder);
};

void VideoDecoder_Reset_ProxyToResponder::Run(
    ) {
  size_t size = sizeof(::media::mojom::internal::VideoDecoder_Reset_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kVideoDecoder_Reset_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::VideoDecoder_Reset_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
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

VideoDecoderStub::VideoDecoderStub()
    : sink_(nullptr),
      control_message_handler_(VideoDecoder::Version_) {
}

VideoDecoderStub::~VideoDecoderStub() {}

bool VideoDecoderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kVideoDecoder_Construct_Name: {
      internal::VideoDecoder_Construct_Params_Data* params =
          reinterpret_cast<internal::VideoDecoder_Construct_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      VideoDecoderClientPtr p_client{};
      mojo::ScopedDataPipeConsumerHandle p_decoder_buffer_pipe{};
      VideoDecoder_Construct_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_client = input_data_view.TakeClient();
      p_decoder_buffer_pipe = input_data_view.TakeDecoderBufferPipe();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecoder::Construct deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VideoDecoder::Construct");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Construct(
std::move(p_client), 
std::move(p_decoder_buffer_pipe));
      return true;
    }
    case internal::kVideoDecoder_Initialize_Name: {
      break;
    }
    case internal::kVideoDecoder_Decode_Name: {
      break;
    }
    case internal::kVideoDecoder_Reset_Name: {
      break;
    }
  }
  return false;
}

bool VideoDecoderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kVideoDecoder_Construct_Name: {
      break;
    }
    case internal::kVideoDecoder_Initialize_Name: {
      internal::VideoDecoder_Initialize_Params_Data* params =
          reinterpret_cast<internal::VideoDecoder_Initialize_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::VideoDecoderConfigPtr p_config{};
      bool p_low_delay{};
      VideoDecoder_Initialize_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      p_low_delay = input_data_view.low_delay();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecoder::Initialize deserializer");
        return false;
      }
      VideoDecoder::InitializeCallback callback =
          VideoDecoder_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VideoDecoder::Initialize");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Initialize(
std::move(p_config), 
std::move(p_low_delay), callback);
      return true;
    }
    case internal::kVideoDecoder_Decode_Name: {
      internal::VideoDecoder_Decode_Params_Data* params =
          reinterpret_cast<internal::VideoDecoder_Decode_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::DecoderBufferPtr p_buffer{};
      VideoDecoder_Decode_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecoder::Decode deserializer");
        return false;
      }
      VideoDecoder::DecodeCallback callback =
          VideoDecoder_Decode_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VideoDecoder::Decode");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Decode(
std::move(p_buffer), callback);
      return true;
    }
    case internal::kVideoDecoder_Reset_Name: {
      internal::VideoDecoder_Reset_Params_Data* params =
          reinterpret_cast<internal::VideoDecoder_Reset_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      VideoDecoder_Reset_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecoder::Reset deserializer");
        return false;
      }
      VideoDecoder::ResetCallback callback =
          VideoDecoder_Reset_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VideoDecoder::Reset");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Reset(callback);
      return true;
    }
  }
  return false;
}

VideoDecoderRequestValidator::VideoDecoderRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool VideoDecoderRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "VideoDecoder RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kVideoDecoder_Construct_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Construct_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kVideoDecoder_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kVideoDecoder_Decode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Decode_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kVideoDecoder_Reset_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Reset_Params_Data>(
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

VideoDecoderResponseValidator::VideoDecoderResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool VideoDecoderResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "VideoDecoder ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kVideoDecoder_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kVideoDecoder_Decode_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Decode_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kVideoDecoder_Reset_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoder_Reset_ResponseParams_Data>(
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
const char VideoDecoderClient::Name_[] = "media::mojom::VideoDecoderClient";
const uint32_t VideoDecoderClient::Version_;

VideoDecoderClientProxy::VideoDecoderClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void VideoDecoderClientProxy::OnVideoFrameDecoded(
    ::media::mojom::VideoFramePtr in_frame) {
  size_t size = sizeof(::media::mojom::internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::VideoFramePtr>(
      in_frame, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kVideoDecoderClient_OnVideoFrameDecoded_Name, size);

  auto params =
      ::media::mojom::internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->frame)::BaseType* frame_ptr;
  mojo::internal::Serialize<::media::mojom::VideoFramePtr>(
      in_frame, builder.buffer(), &frame_ptr, &serialization_context_);
  params->frame.Set(frame_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->frame.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null frame in VideoDecoderClient.OnVideoFrameDecoded request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

VideoDecoderClientStub::VideoDecoderClientStub()
    : sink_(nullptr),
      control_message_handler_(VideoDecoderClient::Version_) {
}

VideoDecoderClientStub::~VideoDecoderClientStub() {}

bool VideoDecoderClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kVideoDecoderClient_OnVideoFrameDecoded_Name: {
      internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data* params =
          reinterpret_cast<internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::VideoFramePtr p_frame{};
      VideoDecoderClient_OnVideoFrameDecoded_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadFrame(&p_frame))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "VideoDecoderClient::OnVideoFrameDecoded deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "VideoDecoderClient::OnVideoFrameDecoded");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnVideoFrameDecoded(
std::move(p_frame));
      return true;
    }
  }
  return false;
}

bool VideoDecoderClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kVideoDecoderClient_OnVideoFrameDecoded_Name: {
      break;
    }
  }
  return false;
}

VideoDecoderClientRequestValidator::VideoDecoderClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool VideoDecoderClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "VideoDecoderClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kVideoDecoderClient_OnVideoFrameDecoded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::VideoDecoderClient_OnVideoFrameDecoded_Params_Data>(
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