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

#include "media/mojo/interfaces/demuxer_stream.mojom.h"

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

class DemuxerStream_Initialize_ParamsDataView {
 public:
  DemuxerStream_Initialize_ParamsDataView() {}

  DemuxerStream_Initialize_ParamsDataView(
      internal::DemuxerStream_Initialize_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DemuxerStream_Initialize_Params_Data* data_ = nullptr;
};



class DemuxerStream_Initialize_ResponseParamsDataView {
 public:
  DemuxerStream_Initialize_ResponseParamsDataView() {}

  DemuxerStream_Initialize_ResponseParamsDataView(
      internal::DemuxerStream_Initialize_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::media::mojom::DemuxerStream::Type>(
        data_value, output);
  }

  ::media::mojom::DemuxerStream::Type type() const {
    return static_cast<::media::mojom::DemuxerStream::Type>(data_->type);
  }
  mojo::ScopedDataPipeConsumerHandle TakePipe() {
    mojo::ScopedDataPipeConsumerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeConsumerHandle>(
            &data_->pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
  inline void GetAudioConfigDataView(
      ::media::mojom::AudioDecoderConfigDataView* output);

  template <typename UserType>
  bool ReadAudioConfig(UserType* output) {
    auto pointer = data_->audio_config.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioDecoderConfigPtr>(
        pointer, output, context_);
  }
  inline void GetVideoConfigDataView(
      ::media::mojom::VideoDecoderConfigDataView* output);

  template <typename UserType>
  bool ReadVideoConfig(UserType* output) {
    auto pointer = data_->video_config.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoDecoderConfigPtr>(
        pointer, output, context_);
  }
 private:
  internal::DemuxerStream_Initialize_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void DemuxerStream_Initialize_ResponseParamsDataView::GetAudioConfigDataView(
    ::media::mojom::AudioDecoderConfigDataView* output) {
  auto pointer = data_->audio_config.Get();
  *output = ::media::mojom::AudioDecoderConfigDataView(pointer, context_);
}
inline void DemuxerStream_Initialize_ResponseParamsDataView::GetVideoConfigDataView(
    ::media::mojom::VideoDecoderConfigDataView* output) {
  auto pointer = data_->video_config.Get();
  *output = ::media::mojom::VideoDecoderConfigDataView(pointer, context_);
}


class DemuxerStream_Read_ParamsDataView {
 public:
  DemuxerStream_Read_ParamsDataView() {}

  DemuxerStream_Read_ParamsDataView(
      internal::DemuxerStream_Read_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DemuxerStream_Read_Params_Data* data_ = nullptr;
};



class DemuxerStream_Read_ResponseParamsDataView {
 public:
  DemuxerStream_Read_ResponseParamsDataView() {}

  DemuxerStream_Read_ResponseParamsDataView(
      internal::DemuxerStream_Read_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::DemuxerStream::Status>(
        data_value, output);
  }

  ::media::mojom::DemuxerStream::Status status() const {
    return static_cast<::media::mojom::DemuxerStream::Status>(data_->status);
  }
  inline void GetBufferDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  bool ReadBuffer(UserType* output) {
    auto pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferPtr>(
        pointer, output, context_);
  }
  inline void GetAudioConfigDataView(
      ::media::mojom::AudioDecoderConfigDataView* output);

  template <typename UserType>
  bool ReadAudioConfig(UserType* output) {
    auto pointer = data_->audio_config.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioDecoderConfigPtr>(
        pointer, output, context_);
  }
  inline void GetVideoConfigDataView(
      ::media::mojom::VideoDecoderConfigDataView* output);

  template <typename UserType>
  bool ReadVideoConfig(UserType* output) {
    auto pointer = data_->video_config.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoDecoderConfigPtr>(
        pointer, output, context_);
  }
 private:
  internal::DemuxerStream_Read_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void DemuxerStream_Read_ResponseParamsDataView::GetBufferDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->buffer.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}
inline void DemuxerStream_Read_ResponseParamsDataView::GetAudioConfigDataView(
    ::media::mojom::AudioDecoderConfigDataView* output) {
  auto pointer = data_->audio_config.Get();
  *output = ::media::mojom::AudioDecoderConfigDataView(pointer, context_);
}
inline void DemuxerStream_Read_ResponseParamsDataView::GetVideoConfigDataView(
    ::media::mojom::VideoDecoderConfigDataView* output) {
  auto pointer = data_->video_config.Get();
  *output = ::media::mojom::VideoDecoderConfigDataView(pointer, context_);
}


class DemuxerStream_EnableBitstreamConverter_ParamsDataView {
 public:
  DemuxerStream_EnableBitstreamConverter_ParamsDataView() {}

  DemuxerStream_EnableBitstreamConverter_ParamsDataView(
      internal::DemuxerStream_EnableBitstreamConverter_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::DemuxerStream_EnableBitstreamConverter_Params_Data* data_ = nullptr;
};




}  // namespace
const char DemuxerStream::Name_[] = "media::mojom::DemuxerStream";
const uint32_t DemuxerStream::Version_;

class DemuxerStream_Initialize_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DemuxerStream_Initialize_ForwardToCallback(
      const DemuxerStream::InitializeCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DemuxerStream::InitializeCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(DemuxerStream_Initialize_ForwardToCallback);
};
bool DemuxerStream_Initialize_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::DemuxerStream_Initialize_ResponseParams_Data* params =
      reinterpret_cast<internal::DemuxerStream_Initialize_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  DemuxerStream::Type p_type{};
  mojo::ScopedDataPipeConsumerHandle p_pipe{};
  ::media::mojom::AudioDecoderConfigPtr p_audio_config{};
  ::media::mojom::VideoDecoderConfigPtr p_video_config{};
  DemuxerStream_Initialize_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadType(&p_type))
    success = false;
  p_pipe = input_data_view.TakePipe();
  if (!input_data_view.ReadAudioConfig(&p_audio_config))
    success = false;
  if (!input_data_view.ReadVideoConfig(&p_video_config))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DemuxerStream::Initialize response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_type), 
std::move(p_pipe), 
std::move(p_audio_config), 
std::move(p_video_config));
  }
  return true;
}

class DemuxerStream_Read_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  DemuxerStream_Read_ForwardToCallback(
      const DemuxerStream::ReadCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  DemuxerStream::ReadCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(DemuxerStream_Read_ForwardToCallback);
};
bool DemuxerStream_Read_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::DemuxerStream_Read_ResponseParams_Data* params =
      reinterpret_cast<internal::DemuxerStream_Read_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  DemuxerStream::Status p_status{};
  ::media::mojom::DecoderBufferPtr p_buffer{};
  ::media::mojom::AudioDecoderConfigPtr p_audio_config{};
  ::media::mojom::VideoDecoderConfigPtr p_video_config{};
  DemuxerStream_Read_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadBuffer(&p_buffer))
    success = false;
  if (!input_data_view.ReadAudioConfig(&p_audio_config))
    success = false;
  if (!input_data_view.ReadVideoConfig(&p_video_config))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "DemuxerStream::Read response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_status), 
std::move(p_buffer), 
std::move(p_audio_config), 
std::move(p_video_config));
  }
  return true;
}

DemuxerStreamProxy::DemuxerStreamProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void DemuxerStreamProxy::Initialize(
    const InitializeCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::DemuxerStream_Initialize_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDemuxerStream_Initialize_Name, size);

  auto params =
      ::media::mojom::internal::DemuxerStream_Initialize_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new DemuxerStream_Initialize_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void DemuxerStreamProxy::Read(
    const ReadCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::DemuxerStream_Read_Params_Data);
  mojo::internal::RequestMessageBuilder builder(internal::kDemuxerStream_Read_Name, size);

  auto params =
      ::media::mojom::internal::DemuxerStream_Read_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new DemuxerStream_Read_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void DemuxerStreamProxy::EnableBitstreamConverter(
    ) {
  size_t size = sizeof(::media::mojom::internal::DemuxerStream_EnableBitstreamConverter_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDemuxerStream_EnableBitstreamConverter_Name, size);

  auto params =
      ::media::mojom::internal::DemuxerStream_EnableBitstreamConverter_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class DemuxerStream_Initialize_ProxyToResponder {
 public:
  static DemuxerStream::InitializeCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<DemuxerStream_Initialize_ProxyToResponder> proxy(
        new DemuxerStream_Initialize_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&DemuxerStream_Initialize_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~DemuxerStream_Initialize_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "DemuxerStream::Initialize() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  DemuxerStream_Initialize_ProxyToResponder(
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
      DemuxerStream::Type in_type, mojo::ScopedDataPipeConsumerHandle in_pipe, ::media::mojom::AudioDecoderConfigPtr in_audio_config, ::media::mojom::VideoDecoderConfigPtr in_video_config);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(DemuxerStream_Initialize_ProxyToResponder);
};

void DemuxerStream_Initialize_ProxyToResponder::Run(
    DemuxerStream::Type in_type, mojo::ScopedDataPipeConsumerHandle in_pipe, ::media::mojom::AudioDecoderConfigPtr in_audio_config, ::media::mojom::VideoDecoderConfigPtr in_video_config) {
  size_t size = sizeof(::media::mojom::internal::DemuxerStream_Initialize_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::AudioDecoderConfigPtr>(
      in_audio_config, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::media::mojom::VideoDecoderConfigPtr>(
      in_video_config, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDemuxerStream_Initialize_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::DemuxerStream_Initialize_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::DemuxerStream::Type>(
      in_type, &params->type);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_pipe, &params->pipe, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid pipe in DemuxerStream.Initialize response");
  typename decltype(params->audio_config)::BaseType* audio_config_ptr;
  mojo::internal::Serialize<::media::mojom::AudioDecoderConfigPtr>(
      in_audio_config, builder.buffer(), &audio_config_ptr, &serialization_context_);
  params->audio_config.Set(audio_config_ptr);
  typename decltype(params->video_config)::BaseType* video_config_ptr;
  mojo::internal::Serialize<::media::mojom::VideoDecoderConfigPtr>(
      in_video_config, builder.buffer(), &video_config_ptr, &serialization_context_);
  params->video_config.Set(video_config_ptr);
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
class DemuxerStream_Read_ProxyToResponder {
 public:
  static DemuxerStream::ReadCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<DemuxerStream_Read_ProxyToResponder> proxy(
        new DemuxerStream_Read_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&DemuxerStream_Read_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~DemuxerStream_Read_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "DemuxerStream::Read() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  DemuxerStream_Read_ProxyToResponder(
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
      DemuxerStream::Status in_status, ::media::mojom::DecoderBufferPtr in_buffer, ::media::mojom::AudioDecoderConfigPtr in_audio_config, ::media::mojom::VideoDecoderConfigPtr in_video_config);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(DemuxerStream_Read_ProxyToResponder);
};

void DemuxerStream_Read_ProxyToResponder::Run(
    DemuxerStream::Status in_status, ::media::mojom::DecoderBufferPtr in_buffer, ::media::mojom::AudioDecoderConfigPtr in_audio_config, ::media::mojom::VideoDecoderConfigPtr in_video_config) {
  size_t size = sizeof(::media::mojom::internal::DemuxerStream_Read_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::DecoderBufferPtr>(
      in_buffer, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::media::mojom::AudioDecoderConfigPtr>(
      in_audio_config, &serialization_context_);
  size += mojo::internal::PrepareToSerialize<::media::mojom::VideoDecoderConfigPtr>(
      in_video_config, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDemuxerStream_Read_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::DemuxerStream_Read_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::DemuxerStream::Status>(
      in_status, &params->status);
  typename decltype(params->buffer)::BaseType* buffer_ptr;
  mojo::internal::Serialize<::media::mojom::DecoderBufferPtr>(
      in_buffer, builder.buffer(), &buffer_ptr, &serialization_context_);
  params->buffer.Set(buffer_ptr);
  typename decltype(params->audio_config)::BaseType* audio_config_ptr;
  mojo::internal::Serialize<::media::mojom::AudioDecoderConfigPtr>(
      in_audio_config, builder.buffer(), &audio_config_ptr, &serialization_context_);
  params->audio_config.Set(audio_config_ptr);
  typename decltype(params->video_config)::BaseType* video_config_ptr;
  mojo::internal::Serialize<::media::mojom::VideoDecoderConfigPtr>(
      in_video_config, builder.buffer(), &video_config_ptr, &serialization_context_);
  params->video_config.Set(video_config_ptr);
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

DemuxerStreamStub::DemuxerStreamStub()
    : sink_(nullptr),
      control_message_handler_(DemuxerStream::Version_) {
}

DemuxerStreamStub::~DemuxerStreamStub() {}

bool DemuxerStreamStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDemuxerStream_Initialize_Name: {
      break;
    }
    case internal::kDemuxerStream_Read_Name: {
      break;
    }
    case internal::kDemuxerStream_EnableBitstreamConverter_Name: {
      internal::DemuxerStream_EnableBitstreamConverter_Params_Data* params =
          reinterpret_cast<internal::DemuxerStream_EnableBitstreamConverter_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      DemuxerStream_EnableBitstreamConverter_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DemuxerStream::EnableBitstreamConverter deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DemuxerStream::EnableBitstreamConverter");
      mojo::internal::MessageDispatchContext context(message);
      sink_->EnableBitstreamConverter();
      return true;
    }
  }
  return false;
}

bool DemuxerStreamStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDemuxerStream_Initialize_Name: {
      internal::DemuxerStream_Initialize_Params_Data* params =
          reinterpret_cast<internal::DemuxerStream_Initialize_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      DemuxerStream_Initialize_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DemuxerStream::Initialize deserializer");
        return false;
      }
      DemuxerStream::InitializeCallback callback =
          DemuxerStream_Initialize_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DemuxerStream::Initialize");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Initialize(callback);
      return true;
    }
    case internal::kDemuxerStream_Read_Name: {
      internal::DemuxerStream_Read_Params_Data* params =
          reinterpret_cast<internal::DemuxerStream_Read_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      DemuxerStream_Read_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "DemuxerStream::Read deserializer");
        return false;
      }
      DemuxerStream::ReadCallback callback =
          DemuxerStream_Read_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "DemuxerStream::Read");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Read(callback);
      return true;
    }
    case internal::kDemuxerStream_EnableBitstreamConverter_Name: {
      break;
    }
  }
  return false;
}

DemuxerStreamRequestValidator::DemuxerStreamRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DemuxerStreamRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "DemuxerStream RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDemuxerStream_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DemuxerStream_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDemuxerStream_Read_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DemuxerStream_Read_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDemuxerStream_EnableBitstreamConverter_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::DemuxerStream_EnableBitstreamConverter_Params_Data>(
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

DemuxerStreamResponseValidator::DemuxerStreamResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DemuxerStreamResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "DemuxerStream ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDemuxerStream_Initialize_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DemuxerStream_Initialize_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDemuxerStream_Read_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::DemuxerStream_Read_ResponseParams_Data>(
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