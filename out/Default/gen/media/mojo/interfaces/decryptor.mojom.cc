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

#include "media/mojo/interfaces/decryptor.mojom.h"

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

class Decryptor_Initialize_ParamsDataView {
 public:
  Decryptor_Initialize_ParamsDataView() {}

  Decryptor_Initialize_ParamsDataView(
      internal::Decryptor_Initialize_Params_Data* data,
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
  mojo::ScopedDataPipeProducerHandle TakeTransmitPipe() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->transmit_pipe, &result, context_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Decryptor_Initialize_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




class Decryptor_Decrypt_ParamsDataView {
 public:
  Decryptor_Decrypt_ParamsDataView() {}

  Decryptor_Decrypt_ParamsDataView(
      internal::Decryptor_Decrypt_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStreamType(UserType* output) const {
    auto data_value = data_->stream_type;
    return mojo::internal::Deserialize<::media::mojom::DemuxerStream::Type>(
        data_value, output);
  }

  ::media::mojom::DemuxerStream::Type stream_type() const {
    return static_cast<::media::mojom::DemuxerStream::Type>(data_->stream_type);
  }
  inline void GetEncryptedDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  bool ReadEncrypted(UserType* output) {
    auto pointer = data_->encrypted.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferPtr>(
        pointer, output, context_);
  }
 private:
  internal::Decryptor_Decrypt_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Decryptor_Decrypt_ParamsDataView::GetEncryptedDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->encrypted.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}

class Decryptor_Decrypt_ResponseParamsDataView {
 public:
  Decryptor_Decrypt_ResponseParamsDataView() {}

  Decryptor_Decrypt_ResponseParamsDataView(
      internal::Decryptor_Decrypt_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::Decryptor::Status>(
        data_value, output);
  }

  ::media::mojom::Decryptor::Status status() const {
    return static_cast<::media::mojom::Decryptor::Status>(data_->status);
  }
  inline void GetBufferDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  bool ReadBuffer(UserType* output) {
    auto pointer = data_->buffer.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferPtr>(
        pointer, output, context_);
  }
 private:
  internal::Decryptor_Decrypt_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Decryptor_Decrypt_ResponseParamsDataView::GetBufferDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->buffer.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}


class Decryptor_CancelDecrypt_ParamsDataView {
 public:
  Decryptor_CancelDecrypt_ParamsDataView() {}

  Decryptor_CancelDecrypt_ParamsDataView(
      internal::Decryptor_CancelDecrypt_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStreamType(UserType* output) const {
    auto data_value = data_->stream_type;
    return mojo::internal::Deserialize<::media::mojom::DemuxerStream::Type>(
        data_value, output);
  }

  ::media::mojom::DemuxerStream::Type stream_type() const {
    return static_cast<::media::mojom::DemuxerStream::Type>(data_->stream_type);
  }
 private:
  internal::Decryptor_CancelDecrypt_Params_Data* data_ = nullptr;
};




class Decryptor_InitializeAudioDecoder_ParamsDataView {
 public:
  Decryptor_InitializeAudioDecoder_ParamsDataView() {}

  Decryptor_InitializeAudioDecoder_ParamsDataView(
      internal::Decryptor_InitializeAudioDecoder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetConfigDataView(
      ::media::mojom::AudioDecoderConfigDataView* output);

  template <typename UserType>
  bool ReadConfig(UserType* output) {
    auto pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media::mojom::AudioDecoderConfigPtr>(
        pointer, output, context_);
  }
 private:
  internal::Decryptor_InitializeAudioDecoder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Decryptor_InitializeAudioDecoder_ParamsDataView::GetConfigDataView(
    ::media::mojom::AudioDecoderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = ::media::mojom::AudioDecoderConfigDataView(pointer, context_);
}

class Decryptor_InitializeAudioDecoder_ResponseParamsDataView {
 public:
  Decryptor_InitializeAudioDecoder_ResponseParamsDataView() {}

  Decryptor_InitializeAudioDecoder_ResponseParamsDataView(
      internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data* data_ = nullptr;
};




class Decryptor_InitializeVideoDecoder_ParamsDataView {
 public:
  Decryptor_InitializeVideoDecoder_ParamsDataView() {}

  Decryptor_InitializeVideoDecoder_ParamsDataView(
      internal::Decryptor_InitializeVideoDecoder_Params_Data* data,
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
 private:
  internal::Decryptor_InitializeVideoDecoder_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Decryptor_InitializeVideoDecoder_ParamsDataView::GetConfigDataView(
    ::media::mojom::VideoDecoderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = ::media::mojom::VideoDecoderConfigDataView(pointer, context_);
}

class Decryptor_InitializeVideoDecoder_ResponseParamsDataView {
 public:
  Decryptor_InitializeVideoDecoder_ResponseParamsDataView() {}

  Decryptor_InitializeVideoDecoder_ResponseParamsDataView(
      internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data* data_ = nullptr;
};




class Decryptor_DecryptAndDecodeAudio_ParamsDataView {
 public:
  Decryptor_DecryptAndDecodeAudio_ParamsDataView() {}

  Decryptor_DecryptAndDecodeAudio_ParamsDataView(
      internal::Decryptor_DecryptAndDecodeAudio_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEncryptedDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  bool ReadEncrypted(UserType* output) {
    auto pointer = data_->encrypted.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferPtr>(
        pointer, output, context_);
  }
 private:
  internal::Decryptor_DecryptAndDecodeAudio_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Decryptor_DecryptAndDecodeAudio_ParamsDataView::GetEncryptedDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->encrypted.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}

class Decryptor_DecryptAndDecodeAudio_ResponseParamsDataView {
 public:
  Decryptor_DecryptAndDecodeAudio_ResponseParamsDataView() {}

  Decryptor_DecryptAndDecodeAudio_ResponseParamsDataView(
      internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::Decryptor::Status>(
        data_value, output);
  }

  ::media::mojom::Decryptor::Status status() const {
    return static_cast<::media::mojom::Decryptor::Status>(data_->status);
  }
  inline void GetAudioBuffersDataView(
      mojo::ArrayDataView<::media::mojom::AudioBufferDataView>* output);

  template <typename UserType>
  bool ReadAudioBuffers(UserType* output) {
    auto pointer = data_->audio_buffers.Get();
    return mojo::internal::Deserialize<mojo::Array<::media::mojom::AudioBufferPtr>>(
        pointer, output, context_);
  }
 private:
  internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Decryptor_DecryptAndDecodeAudio_ResponseParamsDataView::GetAudioBuffersDataView(
    mojo::ArrayDataView<::media::mojom::AudioBufferDataView>* output) {
  auto pointer = data_->audio_buffers.Get();
  *output = mojo::ArrayDataView<::media::mojom::AudioBufferDataView>(pointer, context_);
}


class Decryptor_DecryptAndDecodeVideo_ParamsDataView {
 public:
  Decryptor_DecryptAndDecodeVideo_ParamsDataView() {}

  Decryptor_DecryptAndDecodeVideo_ParamsDataView(
      internal::Decryptor_DecryptAndDecodeVideo_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetEncryptedDataView(
      ::media::mojom::DecoderBufferDataView* output);

  template <typename UserType>
  bool ReadEncrypted(UserType* output) {
    auto pointer = data_->encrypted.Get();
    return mojo::internal::Deserialize<::media::mojom::DecoderBufferPtr>(
        pointer, output, context_);
  }
 private:
  internal::Decryptor_DecryptAndDecodeVideo_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Decryptor_DecryptAndDecodeVideo_ParamsDataView::GetEncryptedDataView(
    ::media::mojom::DecoderBufferDataView* output) {
  auto pointer = data_->encrypted.Get();
  *output = ::media::mojom::DecoderBufferDataView(pointer, context_);
}

class Decryptor_DecryptAndDecodeVideo_ResponseParamsDataView {
 public:
  Decryptor_DecryptAndDecodeVideo_ResponseParamsDataView() {}

  Decryptor_DecryptAndDecodeVideo_ResponseParamsDataView(
      internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::Decryptor::Status>(
        data_value, output);
  }

  ::media::mojom::Decryptor::Status status() const {
    return static_cast<::media::mojom::Decryptor::Status>(data_->status);
  }
  inline void GetVideoFrameDataView(
      ::media::mojom::VideoFrameDataView* output);

  template <typename UserType>
  bool ReadVideoFrame(UserType* output) {
    auto pointer = data_->video_frame.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoFramePtr>(
        pointer, output, context_);
  }
 private:
  internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};


inline void Decryptor_DecryptAndDecodeVideo_ResponseParamsDataView::GetVideoFrameDataView(
    ::media::mojom::VideoFrameDataView* output) {
  auto pointer = data_->video_frame.Get();
  *output = ::media::mojom::VideoFrameDataView(pointer, context_);
}


class Decryptor_ResetDecoder_ParamsDataView {
 public:
  Decryptor_ResetDecoder_ParamsDataView() {}

  Decryptor_ResetDecoder_ParamsDataView(
      internal::Decryptor_ResetDecoder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStreamType(UserType* output) const {
    auto data_value = data_->stream_type;
    return mojo::internal::Deserialize<::media::mojom::DemuxerStream::Type>(
        data_value, output);
  }

  ::media::mojom::DemuxerStream::Type stream_type() const {
    return static_cast<::media::mojom::DemuxerStream::Type>(data_->stream_type);
  }
 private:
  internal::Decryptor_ResetDecoder_Params_Data* data_ = nullptr;
};




class Decryptor_DeinitializeDecoder_ParamsDataView {
 public:
  Decryptor_DeinitializeDecoder_ParamsDataView() {}

  Decryptor_DeinitializeDecoder_ParamsDataView(
      internal::Decryptor_DeinitializeDecoder_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  bool ReadStreamType(UserType* output) const {
    auto data_value = data_->stream_type;
    return mojo::internal::Deserialize<::media::mojom::DemuxerStream::Type>(
        data_value, output);
  }

  ::media::mojom::DemuxerStream::Type stream_type() const {
    return static_cast<::media::mojom::DemuxerStream::Type>(data_->stream_type);
  }
 private:
  internal::Decryptor_DeinitializeDecoder_Params_Data* data_ = nullptr;
};




class Decryptor_ReleaseSharedBuffer_ParamsDataView {
 public:
  Decryptor_ReleaseSharedBuffer_ParamsDataView() {}

  Decryptor_ReleaseSharedBuffer_ParamsDataView(
      internal::Decryptor_ReleaseSharedBuffer_Params_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  mojo::ScopedSharedBufferHandle TakeBuffer() {
    mojo::ScopedSharedBufferHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedSharedBufferHandle>(
            &data_->buffer, &result, context_);
    DCHECK(ret);
    return result;
  }
  uint64_t buffer_size() const {
    return data_->buffer_size;
  }
 private:
  internal::Decryptor_ReleaseSharedBuffer_Params_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};




}  // namespace
const char Decryptor::Name_[] = "media::mojom::Decryptor";
const uint32_t Decryptor::Version_;

class Decryptor_Decrypt_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Decryptor_Decrypt_ForwardToCallback(
      const Decryptor::DecryptCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Decryptor::DecryptCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Decryptor_Decrypt_ForwardToCallback);
};
bool Decryptor_Decrypt_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Decryptor_Decrypt_ResponseParams_Data* params =
      reinterpret_cast<internal::Decryptor_Decrypt_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  Decryptor::Status p_status{};
  ::media::mojom::DecoderBufferPtr p_buffer{};
  Decryptor_Decrypt_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadBuffer(&p_buffer))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Decryptor::Decrypt response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_status), 
std::move(p_buffer));
  }
  return true;
}

class Decryptor_InitializeAudioDecoder_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Decryptor_InitializeAudioDecoder_ForwardToCallback(
      const Decryptor::InitializeAudioDecoderCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Decryptor::InitializeAudioDecoderCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Decryptor_InitializeAudioDecoder_ForwardToCallback);
};
bool Decryptor_InitializeAudioDecoder_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data* params =
      reinterpret_cast<internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  Decryptor_InitializeAudioDecoder_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Decryptor::InitializeAudioDecoder response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success));
  }
  return true;
}

class Decryptor_InitializeVideoDecoder_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Decryptor_InitializeVideoDecoder_ForwardToCallback(
      const Decryptor::InitializeVideoDecoderCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Decryptor::InitializeVideoDecoderCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Decryptor_InitializeVideoDecoder_ForwardToCallback);
};
bool Decryptor_InitializeVideoDecoder_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data* params =
      reinterpret_cast<internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  bool p_success{};
  Decryptor_InitializeVideoDecoder_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  p_success = input_data_view.success();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Decryptor::InitializeVideoDecoder response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_success));
  }
  return true;
}

class Decryptor_DecryptAndDecodeAudio_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Decryptor_DecryptAndDecodeAudio_ForwardToCallback(
      const Decryptor::DecryptAndDecodeAudioCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Decryptor::DecryptAndDecodeAudioCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Decryptor_DecryptAndDecodeAudio_ForwardToCallback);
};
bool Decryptor_DecryptAndDecodeAudio_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data* params =
      reinterpret_cast<internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  Decryptor::Status p_status{};
  mojo::Array<::media::mojom::AudioBufferPtr> p_audio_buffers{};
  Decryptor_DecryptAndDecodeAudio_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadAudioBuffers(&p_audio_buffers))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Decryptor::DecryptAndDecodeAudio response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_status), 
std::move(p_audio_buffers));
  }
  return true;
}

class Decryptor_DecryptAndDecodeVideo_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  Decryptor_DecryptAndDecodeVideo_ForwardToCallback(
      const Decryptor::DecryptAndDecodeVideoCallback& callback,
      scoped_refptr<mojo::AssociatedGroupController> group_controller)
      : callback_(callback),
        serialization_context_(std::move(group_controller)) {
  }
  bool Accept(mojo::Message* message) override;
 private:
  Decryptor::DecryptAndDecodeVideoCallback callback_;
  mojo::internal::SerializationContext serialization_context_;
  DISALLOW_COPY_AND_ASSIGN(Decryptor_DecryptAndDecodeVideo_ForwardToCallback);
};
bool Decryptor_DecryptAndDecodeVideo_ForwardToCallback::Accept(
    mojo::Message* message) {
  internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data* params =
      reinterpret_cast<internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data*>(
          message->mutable_payload());
  
  (&serialization_context_)->handles.Swap((message)->mutable_handles());
  bool success = true;
  Decryptor::Status p_status{};
  ::media::mojom::VideoFramePtr p_video_frame{};
  Decryptor_DecryptAndDecodeVideo_ResponseParamsDataView input_data_view(params,
                                          &serialization_context_);
  
  if (!input_data_view.ReadStatus(&p_status))
    success = false;
  if (!input_data_view.ReadVideoFrame(&p_video_frame))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        "Decryptor::DecryptAndDecodeVideo response deserializer");
    return false;
  }
  if (!callback_.is_null()) {
    mojo::internal::MessageDispatchContext context(message);
    callback_.Run(
std::move(p_status), 
std::move(p_video_frame));
  }
  return true;
}

DecryptorProxy::DecryptorProxy(mojo::MessageReceiverWithResponder* receiver)
    : ControlMessageProxy(receiver) {
}

void DecryptorProxy::Initialize(
    mojo::ScopedDataPipeConsumerHandle in_receive_pipe, mojo::ScopedDataPipeProducerHandle in_transmit_pipe) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_Initialize_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDecryptor_Initialize_Name, size);

  auto params =
      ::media::mojom::internal::Decryptor_Initialize_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<mojo::ScopedDataPipeConsumerHandle>(
      in_receive_pipe, &params->receive_pipe, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receive_pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receive_pipe in Decryptor.Initialize request");
  mojo::internal::Serialize<mojo::ScopedDataPipeProducerHandle>(
      in_transmit_pipe, &params->transmit_pipe, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->transmit_pipe),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid transmit_pipe in Decryptor.Initialize request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void DecryptorProxy::Decrypt(
    ::media::mojom::DemuxerStream::Type in_stream_type, ::media::mojom::DecoderBufferPtr in_encrypted, const DecryptCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_Decrypt_Params_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::DecoderBufferPtr>(
      in_encrypted, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kDecryptor_Decrypt_Name, size);

  auto params =
      ::media::mojom::internal::Decryptor_Decrypt_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::DemuxerStream::Type>(
      in_stream_type, &params->stream_type);
  typename decltype(params->encrypted)::BaseType* encrypted_ptr;
  mojo::internal::Serialize<::media::mojom::DecoderBufferPtr>(
      in_encrypted, builder.buffer(), &encrypted_ptr, &serialization_context_);
  params->encrypted.Set(encrypted_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->encrypted.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null encrypted in Decryptor.Decrypt request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Decryptor_Decrypt_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void DecryptorProxy::CancelDecrypt(
    ::media::mojom::DemuxerStream::Type in_stream_type) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_CancelDecrypt_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDecryptor_CancelDecrypt_Name, size);

  auto params =
      ::media::mojom::internal::Decryptor_CancelDecrypt_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::DemuxerStream::Type>(
      in_stream_type, &params->stream_type);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void DecryptorProxy::InitializeAudioDecoder(
    ::media::mojom::AudioDecoderConfigPtr in_config, const InitializeAudioDecoderCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_InitializeAudioDecoder_Params_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::AudioDecoderConfigPtr>(
      in_config, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kDecryptor_InitializeAudioDecoder_Name, size);

  auto params =
      ::media::mojom::internal::Decryptor_InitializeAudioDecoder_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->config)::BaseType* config_ptr;
  mojo::internal::Serialize<::media::mojom::AudioDecoderConfigPtr>(
      in_config, builder.buffer(), &config_ptr, &serialization_context_);
  params->config.Set(config_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in Decryptor.InitializeAudioDecoder request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Decryptor_InitializeAudioDecoder_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void DecryptorProxy::InitializeVideoDecoder(
    ::media::mojom::VideoDecoderConfigPtr in_config, const InitializeVideoDecoderCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_InitializeVideoDecoder_Params_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::VideoDecoderConfigPtr>(
      in_config, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kDecryptor_InitializeVideoDecoder_Name, size);

  auto params =
      ::media::mojom::internal::Decryptor_InitializeVideoDecoder_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->config)::BaseType* config_ptr;
  mojo::internal::Serialize<::media::mojom::VideoDecoderConfigPtr>(
      in_config, builder.buffer(), &config_ptr, &serialization_context_);
  params->config.Set(config_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->config.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null config in Decryptor.InitializeVideoDecoder request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Decryptor_InitializeVideoDecoder_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void DecryptorProxy::DecryptAndDecodeAudio(
    ::media::mojom::DecoderBufferPtr in_encrypted, const DecryptAndDecodeAudioCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_DecryptAndDecodeAudio_Params_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::DecoderBufferPtr>(
      in_encrypted, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kDecryptor_DecryptAndDecodeAudio_Name, size);

  auto params =
      ::media::mojom::internal::Decryptor_DecryptAndDecodeAudio_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->encrypted)::BaseType* encrypted_ptr;
  mojo::internal::Serialize<::media::mojom::DecoderBufferPtr>(
      in_encrypted, builder.buffer(), &encrypted_ptr, &serialization_context_);
  params->encrypted.Set(encrypted_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->encrypted.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null encrypted in Decryptor.DecryptAndDecodeAudio request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Decryptor_DecryptAndDecodeAudio_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void DecryptorProxy::DecryptAndDecodeVideo(
    ::media::mojom::DecoderBufferPtr in_encrypted, const DecryptAndDecodeVideoCallback& callback) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_DecryptAndDecodeVideo_Params_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::DecoderBufferPtr>(
      in_encrypted, &serialization_context_);
  mojo::internal::RequestMessageBuilder builder(internal::kDecryptor_DecryptAndDecodeVideo_Name, size);

  auto params =
      ::media::mojom::internal::Decryptor_DecryptAndDecodeVideo_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  typename decltype(params->encrypted)::BaseType* encrypted_ptr;
  mojo::internal::Serialize<::media::mojom::DecoderBufferPtr>(
      in_encrypted, builder.buffer(), &encrypted_ptr, &serialization_context_);
  params->encrypted.Set(encrypted_ptr);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->encrypted.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null encrypted in Decryptor.DecryptAndDecodeVideo request");
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  mojo::MessageReceiver* responder =
      new Decryptor_DecryptAndDecodeVideo_ForwardToCallback(
          callback, serialization_context_.group_controller);
  if (!receiver_->AcceptWithResponder(builder.message(), responder))
    delete responder;
}

void DecryptorProxy::ResetDecoder(
    ::media::mojom::DemuxerStream::Type in_stream_type) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_ResetDecoder_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDecryptor_ResetDecoder_Name, size);

  auto params =
      ::media::mojom::internal::Decryptor_ResetDecoder_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::DemuxerStream::Type>(
      in_stream_type, &params->stream_type);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void DecryptorProxy::DeinitializeDecoder(
    ::media::mojom::DemuxerStream::Type in_stream_type) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_DeinitializeDecoder_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDecryptor_DeinitializeDecoder_Name, size);

  auto params =
      ::media::mojom::internal::Decryptor_DeinitializeDecoder_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::DemuxerStream::Type>(
      in_stream_type, &params->stream_type);
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}

void DecryptorProxy::ReleaseSharedBuffer(
    mojo::ScopedSharedBufferHandle in_buffer, uint64_t in_buffer_size) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_ReleaseSharedBuffer_Params_Data);
  mojo::internal::MessageBuilder builder(internal::kDecryptor_ReleaseSharedBuffer_Name, size);

  auto params =
      ::media::mojom::internal::Decryptor_ReleaseSharedBuffer_Params_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<mojo::ScopedSharedBufferHandle>(
      in_buffer, &params->buffer, &serialization_context_);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->buffer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid buffer in Decryptor.ReleaseSharedBuffer request");
  params->buffer_size = in_buffer_size;
  (&serialization_context_)->handles.Swap(
      builder.message()->mutable_handles());
  bool ok = receiver_->Accept(builder.message());
  // This return value may be ignored as !ok implies the Connector has
  // encountered an error, which will be visible through other means.
  ALLOW_UNUSED_LOCAL(ok);
}
class Decryptor_Decrypt_ProxyToResponder {
 public:
  static Decryptor::DecryptCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Decryptor_Decrypt_ProxyToResponder> proxy(
        new Decryptor_Decrypt_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Decryptor_Decrypt_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Decryptor_Decrypt_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Decryptor::Decrypt() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Decryptor_Decrypt_ProxyToResponder(
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
      Decryptor::Status in_status, ::media::mojom::DecoderBufferPtr in_buffer);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Decryptor_Decrypt_ProxyToResponder);
};

void Decryptor_Decrypt_ProxyToResponder::Run(
    Decryptor::Status in_status, ::media::mojom::DecoderBufferPtr in_buffer) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_Decrypt_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::DecoderBufferPtr>(
      in_buffer, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDecryptor_Decrypt_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::Decryptor_Decrypt_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::Decryptor::Status>(
      in_status, &params->status);
  typename decltype(params->buffer)::BaseType* buffer_ptr;
  mojo::internal::Serialize<::media::mojom::DecoderBufferPtr>(
      in_buffer, builder.buffer(), &buffer_ptr, &serialization_context_);
  params->buffer.Set(buffer_ptr);
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
class Decryptor_InitializeAudioDecoder_ProxyToResponder {
 public:
  static Decryptor::InitializeAudioDecoderCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Decryptor_InitializeAudioDecoder_ProxyToResponder> proxy(
        new Decryptor_InitializeAudioDecoder_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Decryptor_InitializeAudioDecoder_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Decryptor_InitializeAudioDecoder_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Decryptor::InitializeAudioDecoder() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Decryptor_InitializeAudioDecoder_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(Decryptor_InitializeAudioDecoder_ProxyToResponder);
};

void Decryptor_InitializeAudioDecoder_ProxyToResponder::Run(
    bool in_success) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDecryptor_InitializeAudioDecoder_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data::New(builder.buffer());
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
class Decryptor_InitializeVideoDecoder_ProxyToResponder {
 public:
  static Decryptor::InitializeVideoDecoderCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Decryptor_InitializeVideoDecoder_ProxyToResponder> proxy(
        new Decryptor_InitializeVideoDecoder_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Decryptor_InitializeVideoDecoder_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Decryptor_InitializeVideoDecoder_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Decryptor::InitializeVideoDecoder() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Decryptor_InitializeVideoDecoder_ProxyToResponder(
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

  DISALLOW_COPY_AND_ASSIGN(Decryptor_InitializeVideoDecoder_ProxyToResponder);
};

void Decryptor_InitializeVideoDecoder_ProxyToResponder::Run(
    bool in_success) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDecryptor_InitializeVideoDecoder_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data::New(builder.buffer());
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
class Decryptor_DecryptAndDecodeAudio_ProxyToResponder {
 public:
  static Decryptor::DecryptAndDecodeAudioCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Decryptor_DecryptAndDecodeAudio_ProxyToResponder> proxy(
        new Decryptor_DecryptAndDecodeAudio_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Decryptor_DecryptAndDecodeAudio_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Decryptor_DecryptAndDecodeAudio_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Decryptor::DecryptAndDecodeAudio() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Decryptor_DecryptAndDecodeAudio_ProxyToResponder(
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
      Decryptor::Status in_status, mojo::Array<::media::mojom::AudioBufferPtr> in_audio_buffers);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Decryptor_DecryptAndDecodeAudio_ProxyToResponder);
};

void Decryptor_DecryptAndDecodeAudio_ProxyToResponder::Run(
    Decryptor::Status in_status, mojo::Array<::media::mojom::AudioBufferPtr> in_audio_buffers) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<mojo::Array<::media::mojom::AudioBufferPtr>>(
      in_audio_buffers, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDecryptor_DecryptAndDecodeAudio_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::Decryptor::Status>(
      in_status, &params->status);
  typename decltype(params->audio_buffers)::BaseType* audio_buffers_ptr;
  const mojo::internal::ContainerValidateParams audio_buffers_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::Array<::media::mojom::AudioBufferPtr>>(
      in_audio_buffers, builder.buffer(), &audio_buffers_ptr, &audio_buffers_validate_params,
      &serialization_context_);
  params->audio_buffers.Set(audio_buffers_ptr);
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
class Decryptor_DecryptAndDecodeVideo_ProxyToResponder {
 public:
  static Decryptor::DecryptAndDecodeVideoCallback CreateCallback(
      uint64_t request_id,
      bool is_sync,
      mojo::MessageReceiverWithStatus* responder,
      scoped_refptr<mojo::AssociatedGroupController>
          group_controller) {
    std::unique_ptr<Decryptor_DecryptAndDecodeVideo_ProxyToResponder> proxy(
        new Decryptor_DecryptAndDecodeVideo_ProxyToResponder(
            request_id, is_sync, responder, group_controller));
    return base::Bind(&Decryptor_DecryptAndDecodeVideo_ProxyToResponder::Run,
                      base::Passed(&proxy));
  }

  ~Decryptor_DecryptAndDecodeVideo_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // Is the Mojo application destroying the callback without running it
      // and without first closing the pipe?
      responder_->DCheckInvalid("The callback passed to "
          "Decryptor::DecryptAndDecodeVideo() was never run.");
    }
#endif
    // If the Callback was dropped then deleting the responder will close
    // the pipe so the calling application knows to stop waiting for a reply.
    delete responder_;
  }

 private:
  Decryptor_DecryptAndDecodeVideo_ProxyToResponder(
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
      Decryptor::Status in_status, ::media::mojom::VideoFramePtr in_video_frame);

  uint64_t request_id_;
  bool is_sync_;
  mojo::MessageReceiverWithStatus* responder_;
  // TODO(yzshen): maybe I should use a ref to the original one?
  mojo::internal::SerializationContext serialization_context_;

  DISALLOW_COPY_AND_ASSIGN(Decryptor_DecryptAndDecodeVideo_ProxyToResponder);
};

void Decryptor_DecryptAndDecodeVideo_ProxyToResponder::Run(
    Decryptor::Status in_status, ::media::mojom::VideoFramePtr in_video_frame) {
  size_t size = sizeof(::media::mojom::internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data);
  size += mojo::internal::PrepareToSerialize<::media::mojom::VideoFramePtr>(
      in_video_frame, &serialization_context_);
  mojo::internal::ResponseMessageBuilder builder(
      internal::kDecryptor_DecryptAndDecodeVideo_Name, size, request_id_,
      is_sync_ ? mojo::Message::kFlagIsSync : 0);
  auto params =
      ::media::mojom::internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data::New(builder.buffer());
  ALLOW_UNUSED_LOCAL(params);
  mojo::internal::Serialize<::media::mojom::Decryptor::Status>(
      in_status, &params->status);
  typename decltype(params->video_frame)::BaseType* video_frame_ptr;
  mojo::internal::Serialize<::media::mojom::VideoFramePtr>(
      in_video_frame, builder.buffer(), &video_frame_ptr, &serialization_context_);
  params->video_frame.Set(video_frame_ptr);
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

DecryptorStub::DecryptorStub()
    : sink_(nullptr),
      control_message_handler_(Decryptor::Version_) {
}

DecryptorStub::~DecryptorStub() {}

bool DecryptorStub::Accept(mojo::Message* message) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.Accept(message);
  switch (message->header()->name) {
    case internal::kDecryptor_Initialize_Name: {
      internal::Decryptor_Initialize_Params_Data* params =
          reinterpret_cast<internal::Decryptor_Initialize_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::ScopedDataPipeConsumerHandle p_receive_pipe{};
      mojo::ScopedDataPipeProducerHandle p_transmit_pipe{};
      Decryptor_Initialize_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_receive_pipe = input_data_view.TakeReceivePipe();
      p_transmit_pipe = input_data_view.TakeTransmitPipe();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Decryptor::Initialize deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Decryptor::Initialize");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Initialize(
std::move(p_receive_pipe), 
std::move(p_transmit_pipe));
      return true;
    }
    case internal::kDecryptor_Decrypt_Name: {
      break;
    }
    case internal::kDecryptor_CancelDecrypt_Name: {
      internal::Decryptor_CancelDecrypt_Params_Data* params =
          reinterpret_cast<internal::Decryptor_CancelDecrypt_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::DemuxerStream::Type p_stream_type{};
      Decryptor_CancelDecrypt_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadStreamType(&p_stream_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Decryptor::CancelDecrypt deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Decryptor::CancelDecrypt");
      mojo::internal::MessageDispatchContext context(message);
      sink_->CancelDecrypt(
std::move(p_stream_type));
      return true;
    }
    case internal::kDecryptor_InitializeAudioDecoder_Name: {
      break;
    }
    case internal::kDecryptor_InitializeVideoDecoder_Name: {
      break;
    }
    case internal::kDecryptor_DecryptAndDecodeAudio_Name: {
      break;
    }
    case internal::kDecryptor_DecryptAndDecodeVideo_Name: {
      break;
    }
    case internal::kDecryptor_ResetDecoder_Name: {
      internal::Decryptor_ResetDecoder_Params_Data* params =
          reinterpret_cast<internal::Decryptor_ResetDecoder_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::DemuxerStream::Type p_stream_type{};
      Decryptor_ResetDecoder_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadStreamType(&p_stream_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Decryptor::ResetDecoder deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Decryptor::ResetDecoder");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ResetDecoder(
std::move(p_stream_type));
      return true;
    }
    case internal::kDecryptor_DeinitializeDecoder_Name: {
      internal::Decryptor_DeinitializeDecoder_Params_Data* params =
          reinterpret_cast<internal::Decryptor_DeinitializeDecoder_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::DemuxerStream::Type p_stream_type{};
      Decryptor_DeinitializeDecoder_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadStreamType(&p_stream_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Decryptor::DeinitializeDecoder deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Decryptor::DeinitializeDecoder");
      mojo::internal::MessageDispatchContext context(message);
      sink_->DeinitializeDecoder(
std::move(p_stream_type));
      return true;
    }
    case internal::kDecryptor_ReleaseSharedBuffer_Name: {
      internal::Decryptor_ReleaseSharedBuffer_Params_Data* params =
          reinterpret_cast<internal::Decryptor_ReleaseSharedBuffer_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      mojo::ScopedSharedBufferHandle p_buffer{};
      uint64_t p_buffer_size{};
      Decryptor_ReleaseSharedBuffer_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      p_buffer = input_data_view.TakeBuffer();
      p_buffer_size = input_data_view.buffer_size();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Decryptor::ReleaseSharedBuffer deserializer");
        return false;
      }
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Decryptor::ReleaseSharedBuffer");
      mojo::internal::MessageDispatchContext context(message);
      sink_->ReleaseSharedBuffer(
std::move(p_buffer), 
std::move(p_buffer_size));
      return true;
    }
  }
  return false;
}

bool DecryptorStub::AcceptWithResponder(
    mojo::Message* message, mojo::MessageReceiverWithStatus* responder) {
  if (mojo::internal::ControlMessageHandler::IsControlMessage(message))
    return control_message_handler_.AcceptWithResponder(message, responder);
  switch (message->header()->name) {
    case internal::kDecryptor_Initialize_Name: {
      break;
    }
    case internal::kDecryptor_Decrypt_Name: {
      internal::Decryptor_Decrypt_Params_Data* params =
          reinterpret_cast<internal::Decryptor_Decrypt_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::DemuxerStream::Type p_stream_type{};
      ::media::mojom::DecoderBufferPtr p_encrypted{};
      Decryptor_Decrypt_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadStreamType(&p_stream_type))
        success = false;
      if (!input_data_view.ReadEncrypted(&p_encrypted))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Decryptor::Decrypt deserializer");
        return false;
      }
      Decryptor::DecryptCallback callback =
          Decryptor_Decrypt_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Decryptor::Decrypt");
      mojo::internal::MessageDispatchContext context(message);
      sink_->Decrypt(
std::move(p_stream_type), 
std::move(p_encrypted), callback);
      return true;
    }
    case internal::kDecryptor_CancelDecrypt_Name: {
      break;
    }
    case internal::kDecryptor_InitializeAudioDecoder_Name: {
      internal::Decryptor_InitializeAudioDecoder_Params_Data* params =
          reinterpret_cast<internal::Decryptor_InitializeAudioDecoder_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::AudioDecoderConfigPtr p_config{};
      Decryptor_InitializeAudioDecoder_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Decryptor::InitializeAudioDecoder deserializer");
        return false;
      }
      Decryptor::InitializeAudioDecoderCallback callback =
          Decryptor_InitializeAudioDecoder_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Decryptor::InitializeAudioDecoder");
      mojo::internal::MessageDispatchContext context(message);
      sink_->InitializeAudioDecoder(
std::move(p_config), callback);
      return true;
    }
    case internal::kDecryptor_InitializeVideoDecoder_Name: {
      internal::Decryptor_InitializeVideoDecoder_Params_Data* params =
          reinterpret_cast<internal::Decryptor_InitializeVideoDecoder_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::VideoDecoderConfigPtr p_config{};
      Decryptor_InitializeVideoDecoder_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadConfig(&p_config))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Decryptor::InitializeVideoDecoder deserializer");
        return false;
      }
      Decryptor::InitializeVideoDecoderCallback callback =
          Decryptor_InitializeVideoDecoder_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Decryptor::InitializeVideoDecoder");
      mojo::internal::MessageDispatchContext context(message);
      sink_->InitializeVideoDecoder(
std::move(p_config), callback);
      return true;
    }
    case internal::kDecryptor_DecryptAndDecodeAudio_Name: {
      internal::Decryptor_DecryptAndDecodeAudio_Params_Data* params =
          reinterpret_cast<internal::Decryptor_DecryptAndDecodeAudio_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::DecoderBufferPtr p_encrypted{};
      Decryptor_DecryptAndDecodeAudio_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadEncrypted(&p_encrypted))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Decryptor::DecryptAndDecodeAudio deserializer");
        return false;
      }
      Decryptor::DecryptAndDecodeAudioCallback callback =
          Decryptor_DecryptAndDecodeAudio_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Decryptor::DecryptAndDecodeAudio");
      mojo::internal::MessageDispatchContext context(message);
      sink_->DecryptAndDecodeAudio(
std::move(p_encrypted), callback);
      return true;
    }
    case internal::kDecryptor_DecryptAndDecodeVideo_Name: {
      internal::Decryptor_DecryptAndDecodeVideo_Params_Data* params =
          reinterpret_cast<internal::Decryptor_DecryptAndDecodeVideo_Params_Data*>(
              message->mutable_payload());
      
      (&serialization_context_)->handles.Swap((message)->mutable_handles());
      bool success = true;
      ::media::mojom::DecoderBufferPtr p_encrypted{};
      Decryptor_DecryptAndDecodeVideo_ParamsDataView input_data_view(params,
                                              &serialization_context_);
      
      if (!input_data_view.ReadEncrypted(&p_encrypted))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            "Decryptor::DecryptAndDecodeVideo deserializer");
        return false;
      }
      Decryptor::DecryptAndDecodeVideoCallback callback =
          Decryptor_DecryptAndDecodeVideo_ProxyToResponder::CreateCallback(
              message->request_id(),
              message->has_flag(mojo::Message::kFlagIsSync),
              responder,
              serialization_context_.group_controller);
      // A null |sink_| means no implementation was bound.
      assert(sink_);
      TRACE_EVENT0("mojom", "Decryptor::DecryptAndDecodeVideo");
      mojo::internal::MessageDispatchContext context(message);
      sink_->DecryptAndDecodeVideo(
std::move(p_encrypted), callback);
      return true;
    }
    case internal::kDecryptor_ResetDecoder_Name: {
      break;
    }
    case internal::kDecryptor_DeinitializeDecoder_Name: {
      break;
    }
    case internal::kDecryptor_ReleaseSharedBuffer_Name: {
      break;
    }
  }
  return false;
}

DecryptorRequestValidator::DecryptorRequestValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DecryptorRequestValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Decryptor RequestValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlRequest(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  switch (message->header()->name) {
    case internal::kDecryptor_Initialize_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_Initialize_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_Decrypt_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_Decrypt_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_CancelDecrypt_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_CancelDecrypt_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_InitializeAudioDecoder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_InitializeAudioDecoder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_InitializeVideoDecoder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_InitializeVideoDecoder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_DecryptAndDecodeAudio_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_DecryptAndDecodeAudio_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_DecryptAndDecodeVideo_Name: {
      if (!mojo::internal::ValidateMessageIsRequestExpectingResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_DecryptAndDecodeVideo_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_ResetDecoder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_ResetDecoder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_DeinitializeDecoder_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_DeinitializeDecoder_Params_Data>(
                  message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_ReleaseSharedBuffer_Name: {
      if (!mojo::internal::ValidateMessageIsRequestWithoutResponse(
              message, &validation_context)) {
        return false;
      }
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_ReleaseSharedBuffer_Params_Data>(
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

DecryptorResponseValidator::DecryptorResponseValidator(
    mojo::MessageReceiver* sink) : MessageFilter(sink) {
}

bool DecryptorResponseValidator::Accept(mojo::Message* message) {
  assert(sink_);

  mojo::internal::ValidationContext validation_context(
    message->data(), message->data_num_bytes(), message->handles()->size(),
    message, "Decryptor ResponseValidator");

  if (mojo::internal::ControlMessageHandler::IsControlMessage(message)) {
    if (!mojo::internal::ValidateControlResponse(message, &validation_context))
      return false;
    return sink_->Accept(message);
  }

  if (!mojo::internal::ValidateMessageIsResponse(message, &validation_context))
    return false;
  switch (message->header()->name) {
    case internal::kDecryptor_Decrypt_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_Decrypt_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_InitializeAudioDecoder_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_InitializeAudioDecoder_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_InitializeVideoDecoder_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_InitializeVideoDecoder_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_DecryptAndDecodeAudio_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_DecryptAndDecodeAudio_ResponseParams_Data>(
                    message, &validation_context)) {
        return false;
      }
      return sink_->Accept(message);
    }
    case internal::kDecryptor_DecryptAndDecodeVideo_Name: {
      if (!mojo::internal::ValidateMessagePayload<
               internal::Decryptor_DecryptAndDecodeVideo_ResponseParams_Data>(
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