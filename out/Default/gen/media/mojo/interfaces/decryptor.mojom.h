// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_H_

#include <stdint.h>

#include <type_traits>
#include <utility>

#include "base/callback.h"
#include "base/optional.h"
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr.h"
#include "mojo/public/cpp/bindings/associated_interface_ptr_info.h"
#include "mojo/public/cpp/bindings/associated_interface_request.h"
#include "mojo/public/cpp/bindings/interface_ptr.h"
#include "mojo/public/cpp/bindings/interface_request.h"
#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/lib/control_message_proxy.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/lib/union_accessor.h"
#include "mojo/public/cpp/bindings/map.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/message_filter.h"
#include "mojo/public/cpp/bindings/native_struct.h"
#include "mojo/public/cpp/bindings/native_struct_data_view.h"
#include "mojo/public/cpp/bindings/no_interface.h"
#include "mojo/public/cpp/bindings/string_data_view.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"
#include "media/mojo/interfaces/decryptor.mojom-shared.h"
#include "media/mojo/interfaces/demuxer_stream.mojom.h"
#include "media/mojo/interfaces/media_types.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "base/values.h"
#include "ui/gfx/geometry/vector2d.h"
#include "url/gurl.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/point.h"
#include "media/base/pipeline_status.h"
#include "base/version.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "media/base/audio_parameters.h"
#include "services/shell/public/cpp/capabilities.h"
#include "base/strings/string16.h"
#include "ui/gfx/geometry/rect.h"
#include "base/time/time.h"
#include "ui/gfx/geometry/point_f.h"
#include "ui/gfx/geometry/insets.h"
#include "ui/gfx/geometry/size.h"
#include "services/shell/public/cpp/identity.h"
#include "ui/gfx/geometry/rect_f.h"


namespace media {
namespace mojom {
class Decryptor;
using DecryptorPtr = mojo::InterfacePtr<Decryptor>;
using DecryptorPtrInfo = mojo::InterfacePtrInfo<Decryptor>;
using DecryptorRequest = mojo::InterfaceRequest<Decryptor>;
using DecryptorAssociatedPtr =
    mojo::AssociatedInterfacePtr<Decryptor>;
using DecryptorAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Decryptor>;
using DecryptorAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Decryptor>;


class DecryptorProxy;
class DecryptorStub;

class DecryptorRequestValidator;
class DecryptorResponseValidator;

class  Decryptor {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = DecryptorProxy;
  using Stub_ = DecryptorStub;

  using RequestValidator_ = DecryptorRequestValidator;
  using ResponseValidator_ = DecryptorResponseValidator;
  using Status = Decryptor_Status;
  virtual ~Decryptor() {}

  virtual void Initialize(mojo::ScopedDataPipeConsumerHandle receive_pipe, mojo::ScopedDataPipeProducerHandle transmit_pipe) = 0;


  using DecryptCallback = base::Callback<void(Decryptor::Status, ::media::mojom::DecoderBufferPtr)>;
  virtual void Decrypt(::media::mojom::DemuxerStream::Type stream_type, ::media::mojom::DecoderBufferPtr encrypted, const DecryptCallback& callback) = 0;

  virtual void CancelDecrypt(::media::mojom::DemuxerStream::Type stream_type) = 0;


  using InitializeAudioDecoderCallback = base::Callback<void(bool)>;
  virtual void InitializeAudioDecoder(::media::mojom::AudioDecoderConfigPtr config, const InitializeAudioDecoderCallback& callback) = 0;


  using InitializeVideoDecoderCallback = base::Callback<void(bool)>;
  virtual void InitializeVideoDecoder(::media::mojom::VideoDecoderConfigPtr config, const InitializeVideoDecoderCallback& callback) = 0;


  using DecryptAndDecodeAudioCallback = base::Callback<void(Decryptor::Status, mojo::Array<::media::mojom::AudioBufferPtr>)>;
  virtual void DecryptAndDecodeAudio(::media::mojom::DecoderBufferPtr encrypted, const DecryptAndDecodeAudioCallback& callback) = 0;


  using DecryptAndDecodeVideoCallback = base::Callback<void(Decryptor::Status, ::media::mojom::VideoFramePtr)>;
  virtual void DecryptAndDecodeVideo(::media::mojom::DecoderBufferPtr encrypted, const DecryptAndDecodeVideoCallback& callback) = 0;

  virtual void ResetDecoder(::media::mojom::DemuxerStream::Type stream_type) = 0;

  virtual void DeinitializeDecoder(::media::mojom::DemuxerStream::Type stream_type) = 0;

  virtual void ReleaseSharedBuffer(mojo::ScopedSharedBufferHandle buffer, uint64_t buffer_size) = 0;
};

class  DecryptorProxy
    : public Decryptor,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit DecryptorProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(mojo::ScopedDataPipeConsumerHandle receive_pipe, mojo::ScopedDataPipeProducerHandle transmit_pipe) override;
  void Decrypt(::media::mojom::DemuxerStream::Type stream_type, ::media::mojom::DecoderBufferPtr encrypted, const DecryptCallback& callback) override;
  void CancelDecrypt(::media::mojom::DemuxerStream::Type stream_type) override;
  void InitializeAudioDecoder(::media::mojom::AudioDecoderConfigPtr config, const InitializeAudioDecoderCallback& callback) override;
  void InitializeVideoDecoder(::media::mojom::VideoDecoderConfigPtr config, const InitializeVideoDecoderCallback& callback) override;
  void DecryptAndDecodeAudio(::media::mojom::DecoderBufferPtr encrypted, const DecryptAndDecodeAudioCallback& callback) override;
  void DecryptAndDecodeVideo(::media::mojom::DecoderBufferPtr encrypted, const DecryptAndDecodeVideoCallback& callback) override;
  void ResetDecoder(::media::mojom::DemuxerStream::Type stream_type) override;
  void DeinitializeDecoder(::media::mojom::DemuxerStream::Type stream_type) override;
  void ReleaseSharedBuffer(mojo::ScopedSharedBufferHandle buffer, uint64_t buffer_size) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  DecryptorStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  DecryptorStub();
  ~DecryptorStub() override;
  void set_sink(Decryptor* sink) { sink_ = sink; }
  Decryptor* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Decryptor* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  DecryptorRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DecryptorRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  DecryptorResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DecryptorResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_DECRYPTOR_MOJOM_H_