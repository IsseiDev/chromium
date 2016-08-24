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

#include "media/mojo/interfaces/audio_output.mojom.h"

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

class AudioOutputStream_Close_ParamsDataView {
 public:
  AudioOutputStream_Close_ParamsDataView() {}

  AudioOutputStream_Close_ParamsDataView(
      internal::AudioOutputStream_Close_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AudioOutputStream_Close_Params_Data* data_ = nullptr;
};




class AudioOutput_CreateStream_ParamsDataView {
 public:
  AudioOutput_CreateStream_ParamsDataView() {}

  AudioOutput_CreateStream_ParamsDataView(
      internal::AudioOutput_CreateStream_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t stream_id() const {
    return data_->stream_id;
  }
  inline void GetParamsDataView(
      ::media::mojom::AudioParametersDataView* output);

  template <typename UserType>
  bool ReadParams(UserType* output) {
    auto pointer = data_->params.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioParametersPtr>(
        pointer, output, context_);
  }
 private:
  internal::AudioOutput_CreateStream_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void AudioOutput_CreateStream_ParamsDataView::GetParamsDataView(
    ::media::mojom::AudioParametersDataView* output) {
  auto pointer = data_->params.Get();
  *output = ::media::mojom::AudioParametersDataView(pointer, context_);
}

class AudioOutput_CreateStream_ResponseParamsDataView {
 public:
  AudioOutput_CreateStream_ResponseParamsDataView() {}

  AudioOutput_CreateStream_ResponseParamsDataView(
      internal::AudioOutput_CreateStream_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  int32_t stream_id() const {
    return data_->stream_id;
  }
  AudioOutputStreamPtr TakeStream() {
    AudioOutputStreamPtr result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::AudioOutputStreamPtr>(
            &data_->stream, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedSharedBufferHandle TakeSharedBuffer() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->shared_buffer, &result, context_);
    DCHECK(ret);
    return result;
  }
  mojo::ScopedHandle TakeSocketDescriptor() {
    mojo::ScopedHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedHandle>(
            &data_->socket_descriptor, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::AudioOutput_CreateStream_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace
const char AudioOutputStream::Name_[] = "media::mojom::AudioOutputStream";
const uint32_t AudioOutputStream::Version_;

AudioOutputStreamProxy::AudioOutputStreamProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void AudioOutputStreamProxy::Close(
    ) {
  size_t size = sizeof(::media::mojom::internal::AudioOutputStream_Close_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kAudioOutputStream_Close_Name, size);

  auto params =
      ::media::mojom::internal::AudioOutputStream_Close_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

AudioOutputStreamStub::AudioOutputStreamStub()
    : sink_(nullptr),
      control_message_handler_(AudioOutputStream::Version_) {
}

AudioOutputStreamStub::~AudioOutputStreamStub() {}

bool AudioOutputStreamStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kAudioOutputStream_Close_Name: {
      internal::AudioOutputStream_Close_Params_Data* params =
          reinterpret_cast<internal::AudioOutputStream_Close_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      AudioOutputStream_Close_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioOutputStream::Close deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AudioOutputStream::Close");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Close();
      return true;
    }
  }
  return false;
}

bool AudioOutputStreamStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kAudioOutputStream_Close_Name: {
      break;
    }
  }
  return false;
}

AudioOutputStreamRequestValidator::AudioOutputStreamRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool AudioOutputStreamRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "AudioOutputStream RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kAudioOutputStream_Close_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutputStream_Close_Params_Data>(
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

const char AudioOutput::Name_[] = "media::mojom::AudioOutput";
const uint32_t AudioOutput::Version_;

class AudioOutput_CreateStream_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AudioOutput_CreateStream_ForwardToCallback(
      const AudioOutput::CreateStreamCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  AudioOutput::CreateStreamCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(AudioOutput_CreateStream_ForwardToCallback);
};
bool AudioOutput_CreateStream_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::AudioOutput_CreateStream_ResponseParams_Data* params =
      reinterpret_cast<internal::AudioOutput_CreateStream_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  int32_t p_stream_id{};
  AudioOutputStreamPtr p_stream{};
  mojo::ScopedSharedBufferHandle p_shared_buffer{};
  mojo::ScopedHandle p_socket_descriptor{};
  AudioOutput_CreateStream_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_stream_id = input_data_view.stream_id();
  p_stream = input_data_view.TakeStream();
  p_shared_buffer = input_data_view.TakeSharedBuffer();
  p_socket_descriptor = input_data_view.TakeSocketDescriptor();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "AudioOutput::CreateStream response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_stream_id), 
std::move(p_stream), 
std::move(p_shared_buffer), 
std::move(p_socket_descriptor));
  }
  return true;
}

AudioOutputProxy::AudioOutputProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void AudioOutputProxy::CreateStream(
    int32_t in_stream_id, const media::AudioParameters& in_params, const CreateStreamCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::AudioOutput_CreateStream_Params_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::AudioParametersPtr>(
      in_params, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kAudioOutput_CreateStream_Name, size);

  auto params =
      ::media::mojom::internal::AudioOutput_CreateStream_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->stream_id = in_stream_id;
  typename decltype(params->params)::BaseType* params_ptr;
  mojo::internal::Serialize<::media::mojom::AudioParametersPtr>(
      in_params, builder.buffer(), &params_ptr, &serialization_context_);
  params->params.Set(params_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->params.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null params in AudioOutput.CreateStream request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new AudioOutput_CreateStream_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}
class AudioOutput_CreateStream_ProxyToResponder {
 public:
  static AudioOutput::CreateStreamCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<AudioOutput_CreateStream_ProxyToResponder> proxy(
        new AudioOutput_CreateStream_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&AudioOutput_CreateStream_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~AudioOutput_CreateStream_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "AudioOutput::CreateStream() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  AudioOutput_CreateStream_ProxyToResponder(
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
      int32_t in_stream_id, AudioOutputStreamPtr in_stream, mojo::ScopedSharedBufferHandle in_shared_buffer, mojo::ScopedHandle in_socket_descriptor);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(AudioOutput_CreateStream_ProxyToResponder);
};

void AudioOutput_CreateStream_ProxyToResponder::Run(
    int32_t in_stream_id, AudioOutputStreamPtr in_stream, mojo::ScopedSharedBufferHandle in_shared_buffer, mojo::ScopedHandle in_socket_descriptor) {
  size_t size = sizeof(::media::mojom::internal::AudioOutput_CreateStream_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kAudioOutput_CreateStream_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::AudioOutput_CreateStream_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  params->stream_id = in_stream_id;
  mojo::internal::Serialize<::media::mojom::AudioOutputStreamPtr>(
      in_stream, &params->stream, &serialization_context_);
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_shared_buffer, &params->shared_buffer, &serialization_context_);
  mojo::internal::Serialize<mojo::ScopedHandle>(
      in_socket_descriptor, &params->socket_descriptor, &serialization_context_);
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

AudioOutputStub::AudioOutputStub()
    : sink_(nullptr),
      control_message_handler_(AudioOutput::Version_) {
}

AudioOutputStub::~AudioOutputStub() {}

bool AudioOutputStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kAudioOutput_CreateStream_Name: {
      break;
    }
  }
  return false;
}

bool AudioOutputStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kAudioOutput_CreateStream_Name: {
      internal::AudioOutput_CreateStream_Params_Data* params =
          reinterpret_cast<internal::AudioOutput_CreateStream_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      int32_t p_stream_id{};
      media::AudioParameters p_params{};
      AudioOutput_CreateStream_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_stream_id = input_data_view.stream_id();
      if (!input_data_view.ReadParams(&p_params))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "AudioOutput::CreateStream deserializer");
        return false;
      }
      AudioOutput::CreateStreamCallback callback =
          AudioOutput_CreateStream_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "AudioOutput::CreateStream");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CreateStream(
std::move(p_stream_id), 
std::move(p_params), callback);
      return true;
    }
  }
  return false;
}

AudioOutputRequestValidator::AudioOutputRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool AudioOutputRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "AudioOutput RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kAudioOutput_CreateStream_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutput_CreateStream_Params_Data>(
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

AudioOutputResponseValidator::AudioOutputResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool AudioOutputResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "AudioOutput ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kAudioOutput_CreateStream_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::AudioOutput_CreateStream_ResponseParams_Data>(
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