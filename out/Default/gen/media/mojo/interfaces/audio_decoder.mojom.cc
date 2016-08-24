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

#include "media/mojo/interfaces/audio_decoder.mojom.h"

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

class AudioDecoder_Initialize_ParamsDataView {
 public:
  AudioDecoder_Initialize_ParamsDataView() {}

  AudioDecoder_Initialize_ParamsDataView(
      internal::AudioDecoder_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  AudioDecoderClientPtr TakeClient() {
    AudioDecoderClientPtr result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioDecoderClientPtr>(
            &data_->client, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetConfigDataView(
      ::media::mojom::AudioDecoderConfigDataView* output);

  template <typename UserType>
  bool ReadConfig(UserType* output) {
    auto pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioDecoderConfigPtr>(
        pointer, output, context_);
  }
  int32_t cdm_id() const {
    return data_->cdm_id;
  }
 private:
  internal::AudioDecoder_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AudioDecoder_Initialize_ParamsDataView::GetConfigDataView(
    ::media::mojom::AudioDecoderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = ::media::mojom::AudioDecoderConfigDataView(pointer, context_);
}

class AudioDecoder_Initialize_ResponseParamsDataView {
 public:
  AudioDecoder_Initialize_ResponseParamsDataView() {}

  AudioDecoder_Initialize_ResponseParamsDataView(
      internal::AudioDecoder_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
  bool needs_bitstream_conversion() const {
    return data_->needs_bitstream_conversion;
  }
 private:
  internal::AudioDecoder_Initialize_ResponseParams_Data* data_ = nullptr;
};




class AudioDecoder_SetDataSource_ParamsDataView {
 public:
  AudioDecoder_SetDataSource_ParamsDataView() {}

  AudioDecoder_SetDataSource_ParamsDataView(
      internal::AudioDecoder_SetDataSource_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeConsumerHandle TakeReceivePipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->receive_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::AudioDecoder_SetDataSource_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class AudioDecoder_Decode_ParamsDataView {
 public:
  AudioDecoder_Decode_ParamsDataView() {}

  AudioDecoder_Decode_ParamsDataView(
      internal::AudioDecoder_Decode_Params_Data* data,
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
  internal::AudioDecoder_Decode_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AudioDecoder_Decode_ParamsDataView::GetBufferDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->buffer.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}

class AudioDecoder_Decode_ResponseParamsDataView {
 public:
  AudioDecoder_Decode_ResponseParamsDataView() {}

  AudioDecoder_Decode_ResponseParamsDataView(
      internal::AudioDecoder_Decode_ResponseParams_Data* data,
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
  internal::AudioDecoder_Decode_ResponseParams_Data* data_ = nullptr;
};




class AudioDecoder_Reset_ParamsDataView {
 public:
  AudioDecoder_Reset_ParamsDataView() {}

  AudioDecoder_Reset_ParamsDataView(
      internal::AudioDecoder_Reset_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioDecoder_Reset_Params_Data* data_ = nullptr;
};



class AudioDecoder_Reset_ResponseParamsDataView {
 public:
  AudioDecoder_Reset_ResponseParamsDataView() {}

  AudioDecoder_Reset_ResponseParamsDataView(
      internal::AudioDecoder_Reset_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioDecoder_Reset_ResponseParams_Data* data_ = nullptr;
};




class AudioDecoderClient_OnBufferDecoded_ParamsDataView {
 public:
  AudioDecoderClient_OnBufferDecoded_ParamsDataView() {}

  AudioDecoderClient_OnBufferDecoded_ParamsDataView(
      internal::AudioDecoderClient_OnBufferDecoded_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetBufferDataView(
      ::media::mojom::AudioBufferDataView* output);

  template <typename UserType>
  bool ReadBuffer(UserType* output) {
    auto pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioBufferPtr>(
        pointer, output, context_);
  }
 private:
  internal::AudioDecoderClient_OnBufferDecoded_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AudioDecoderClient_OnBufferDecoded_ParamsDataView::GetBufferDataView(
    ::media::mojom::AudioBufferDataView* output) {
  auto pointer = data_->buffer.Get();
  *output = ::media::mojom::AudioBufferDataView(pointer, context_);
}


}  // namespace
const char AudioDecoder::Name_[] = "media::mojom::AudioDecoder";
const uint32_t AudioDecoder::Version_;

class AudioDecoder_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AudioDecoder_Initialize_ForwardToCallback(
      const AudioDecoder::InitializeCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AudioDecoder::InitializeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(AudioDecoder_Initialize_ForwardToCallback);
};
bool AudioDecoder_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::AudioDecoder_Initialize_ResponseParams_Data* params =
      reinterpret_cast<internal::AudioDecoder_Initialize_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  bool p_needs_bitstream_conversion{};
  AudioDecoder_Initialize_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  p_needs_bitstream_conversion = input_data_view.needs_bitstream_conversion();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AudioDecoder::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success), 
std::move(p_needs_bitstream_conversion));
  }
  return true;
}

class AudioDecoder_Decode_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AudioDecoder_Decode_ForwardToCallback(
      const AudioDecoder::DecodeCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AudioDecoder::DecodeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(AudioDecoder_Decode_ForwardToCallback);
};
bool AudioDecoder_Decode_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::AudioDecoder_Decode_ResponseParams_Data* params =
      reinterpret_cast<internal::AudioDecoder_Decode_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  ::media::mojom::DecodeStatus p_status{};
  AudioDecoder_Decode_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AudioDecoder::Decode response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_status));
  }
  return true;
}

class AudioDecoder_Reset_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AudioDecoder_Reset_ForwardToCallback(
      const AudioDecoder::ResetCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AudioDecoder::ResetCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(AudioDecoder_Reset_ForwardToCallback);
};
bool AudioDecoder_Reset_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::AudioDecoder_Reset_ResponseParams_Data* params =
      reinterpret_cast<internal::AudioDecoder_Reset_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  AudioDecoder_Reset_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AudioDecoder::Reset response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run();
  }
  return true;
}

AudioDecoderProxy::AudioDecoderProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void AudioDecoderProxy::Initialize(
    AudioDecoderClientPtr in_client, ::media::mojom::AudioDecoderConfigPtr in_config, int32_t in_cdm_id, const InitializeCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::AudioDecoder_Initialize_Params_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::AudioDecoderConfigPtr>(
      in_config, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kAudioDecoder_Initialize_Name, size);

  auto params =
      ::media::mojom::internal::AudioDecoder_Initialize_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::AudioDecoderClientPtr>(
      in_client, &params->client, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->client),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid client in AudioDecoder.Initialize request");
  typename decltype(params->config)::BaseType* config_ptr;
  mojo::internal::Serialize<::media::mojom::AudioDecoderConfigPtr>(
      in_config, builder.buffer(), &config_ptr, &serialization_context_);
  params->config.Set(config_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in AudioDecoder.Initialize request");
  params->cdm_id = in_cdm_id;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new AudioDecoder_Initialize_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void AudioDecoderProxy::SetDataSource(
    mojo::ScopedDataPipeConsumerHandle in_receive_pipe) {
  size_t size = sizeof(::media::mojom::internal::AudioDecoder_SetDataSource_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kAudioDecoder_SetDataSource_Name, size);

  auto params =
      ::media::mojom::internal::AudioDecoder_SetDataSource_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_receive_pipe, &params->receive_pipe, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receive_pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receive_pipe in AudioDecoder.SetDataSource request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void AudioDecoderProxy::Decode(
    ::media::mojom::DecoderBufferPtr in_buffer, const DecodeCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::AudioDecoder_Decode_Params_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::DecoderBufferPtr>(
      in_buffer, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kAudioDecoder_Decode_Name, size);

  auto params =
      ::media::mojom::internal::AudioDecoder_Decode_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->buffer)::BaseType* buffer_ptr;
  mojo::internal::Serialize<::media::mojom::DecoderBufferPtr>(
      in_buffer, builder.buffer(), &buffer_ptr, &serialization_context_);
  params->buffer.Set(buffer_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->buffer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null buffer in AudioDecoder.Decode request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new AudioDecoder_Decode_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void AudioDecoderProxy::Reset(
    const ResetCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::AudioDecoder_Reset_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kAudioDecoder_Reset_Name, size);

  auto params =
      ::media::mojom::internal::AudioDecoder_Reset_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new AudioDecoder_Reset_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class AudioDecoder_Initialize_ProxyToResponder {
 public:
  static AudioDecoder::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<AudioDecoder_Initialize_ProxyToResponder> proxy(
        new AudioDecoder_Initialize_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&AudioDecoder_Initialize_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~AudioDecoder_Initialize_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "AudioDecoder::Initialize() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  AudioDecoder_Initialize_ProxyToResponder(
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
      bool in_success, bool in_needs_bitstream_conversion);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(AudioDecoder_Initialize_ProxyToResponder);
};

void AudioDecoder_Initialize_ProxyToResponder::Run(
    bool in_success, bool in_needs_bitstream_conversion) {
  size_t size = sizeof(::media::mojom::internal::AudioDecoder_Initialize_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kAudioDecoder_Initialize_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::AudioDecoder_Initialize_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->success = in_success;
  params->needs_bitstream_conversion = in_needs_bitstream_conversion;
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
class AudioDecoder_Decode_ProxyToResponder {
 public:
  static AudioDecoder::DecodeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<AudioDecoder_Decode_ProxyToResponder> proxy(
        new AudioDecoder_Decode_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&AudioDecoder_Decode_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~AudioDecoder_Decode_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "AudioDecoder::Decode() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  AudioDecoder_Decode_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(AudioDecoder_Decode_ProxyToResponder);
};

void AudioDecoder_Decode_ProxyToResponder::Run(
    ::media::mojom::DecodeStatus in_status) {
  size_t size = sizeof(::media::mojom::internal::AudioDecoder_Decode_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kAudioDecoder_Decode_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::AudioDecoder_Decode_ResponseParams_Data::New(builder.buffer());
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
class AudioDecoder_Reset_ProxyToResponder {
 public:
  static AudioDecoder::ResetCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<AudioDecoder_Reset_ProxyToResponder> proxy(
        new AudioDecoder_Reset_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&AudioDecoder_Reset_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~AudioDecoder_Reset_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "AudioDecoder::Reset() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  AudioDecoder_Reset_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(AudioDecoder_Reset_ProxyToResponder);
};

void AudioDecoder_Reset_ProxyToResponder::Run(
    ) {
  size_t size = sizeof(::media::mojom::internal::AudioDecoder_Reset_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kAudioDecoder_Reset_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::AudioDecoder_Reset_ResponseParams_Data::New(builder.buffer());
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

AudioDecoderStub::AudioDecoderStub()
    : sink_(nullptr),
      control_message_handler_(AudioDecoder::Version_) {
}

AudioDecoderStub::~AudioDecoderStub() {}

bool AudioDecoderStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kAudioDecoder_Initialize_Name: {
      break;
    }
    case internal::kAudioDecoder_SetDataSource_Name: {
      internal::AudioDecoder_SetDataSource_Params_Data* params =
          reinterpret_cast<internal::AudioDecoder_SetDataSource_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::ScopedDataPipeConsumerHandle p_receive_pipe{};
      AudioDecoder_SetDataSource_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_receive_pipe = input_data_view.TakeReceivePipe();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioDecoder::SetDataSource deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AudioDecoder::SetDataSource");
      mojo::internal::MessageDispatchContext context(message);
      sink_->SetDataSource(
std::move(p_receive_pipe));
      return true;
    }
    case internal::kAudioDecoder_Decode_Name: {
      break;
    }
    case internal::kAudioDecoder_Reset_Name: {
      break;
    }
  }
  return false;
}

bool AudioDecoderStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kAudioDecoder_Initialize_Name: {
      internal::AudioDecoder_Initialize_Params_Data* params =
          reinterpret_cast<internal::AudioDecoder_Initialize_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      AudioDecoderClientPtr p_client{};
      ::media::mojom::AudioDecoderConfigPtr p_config{};
      int32_t p_cdm_id{};
      AudioDecoder_Initialize_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_client = input_data_view.TakeClient();
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      p_cdm_id = input_data_view.cdm_id();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioDecoder::Initialize deserializer");
        return false;
      }
      AudioDecoder::InitializeCallback callback =
          AudioDecoder_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AudioDecoder::Initialize");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Initialize(
std::move(p_client), 
std::move(p_config), 
std::move(p_cdm_id), callback);
      return true;
    }
    case internal::kAudioDecoder_SetDataSource_Name: {
      break;
    }
    case internal::kAudioDecoder_Decode_Name: {
      internal::AudioDecoder_Decode_Params_Data* params =
          reinterpret_cast<internal::AudioDecoder_Decode_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::DecoderBufferPtr p_buffer{};
      AudioDecoder_Decode_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioDecoder::Decode deserializer");
        return false;
      }
      AudioDecoder::DecodeCallback callback =
          AudioDecoder_Decode_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AudioDecoder::Decode");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Decode(
std::move(p_buffer), callback);
      return true;
    }
    case internal::kAudioDecoder_Reset_Name: {
      internal::AudioDecoder_Reset_Params_Data* params =
          reinterpret_cast<internal::AudioDecoder_Reset_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      AudioDecoder_Reset_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioDecoder::Reset deserializer");
        return false;
      }
      AudioDecoder::ResetCallback callback =
          AudioDecoder_Reset_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AudioDecoder::Reset");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Reset(callback);
      return true;
    }
  }
  return false;
}

AudioDecoderRequestValidator::AudioDecoderRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool AudioDecoderRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "AudioDecoder RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kAudioDecoder_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioDecoder_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAudioDecoder_SetDataSource_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioDecoder_SetDataSource_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAudioDecoder_Decode_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioDecoder_Decode_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAudioDecoder_Reset_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioDecoder_Reset_Params_Data>(
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

AudioDecoderResponseValidator::AudioDecoderResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool AudioDecoderResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "AudioDecoder ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAudioDecoder_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioDecoder_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAudioDecoder_Decode_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioDecoder_Decode_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kAudioDecoder_Reset_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioDecoder_Reset_ResponseParams_Data>(
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
const char AudioDecoderClient::Name_[] = "media::mojom::AudioDecoderClient";
const uint32_t AudioDecoderClient::Version_;

AudioDecoderClientProxy::AudioDecoderClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void AudioDecoderClientProxy::OnBufferDecoded(
    ::media::mojom::AudioBufferPtr in_buffer) {
  size_t size = sizeof(::media::mojom::internal::AudioDecoderClient_OnBufferDecoded_Params_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::AudioBufferPtr>(
      in_buffer, &serialization_context_);
  mojo::internal::MessageBuilder builder(internal::kAudioDecoderClient_OnBufferDecoded_Name, size);

  auto params =
      ::media::mojom::internal::AudioDecoderClient_OnBufferDecoded_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->buffer)::BaseType* buffer_ptr;
  mojo::internal::Serialize<::media::mojom::AudioBufferPtr>(
      in_buffer, builder.buffer(), &buffer_ptr, &serialization_context_);
  params->buffer.Set(buffer_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->buffer.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null buffer in AudioDecoderClient.OnBufferDecoded request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

AudioDecoderClientStub::AudioDecoderClientStub()
    : sink_(nullptr),
      control_message_handler_(AudioDecoderClient::Version_) {
}

AudioDecoderClientStub::~AudioDecoderClientStub() {}

bool AudioDecoderClientStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kAudioDecoderClient_OnBufferDecoded_Name: {
      internal::AudioDecoderClient_OnBufferDecoded_Params_Data* params =
          reinterpret_cast<internal::AudioDecoderClient_OnBufferDecoded_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::AudioBufferPtr p_buffer{};
      AudioDecoderClient_OnBufferDecoded_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadBuffer(&p_buffer))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioDecoderClient::OnBufferDecoded deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AudioDecoderClient::OnBufferDecoded");
      mojo::internal::MessageDispatchContext context(message);
      sink_->OnBufferDecoded(
std::move(p_buffer));
      return true;
    }
  }
  return false;
}

bool AudioDecoderClientStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kAudioDecoderClient_OnBufferDecoded_Name: {
      break;
    }
  }
  return false;
}

AudioDecoderClientRequestValidator::AudioDecoderClientRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool AudioDecoderClientRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "AudioDecoderClient RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kAudioDecoderClient_OnBufferDecoded_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioDecoderClient_OnBufferDecoded_Params_Data>(
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