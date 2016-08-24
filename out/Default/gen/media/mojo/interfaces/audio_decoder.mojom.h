// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_H_

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
#include "media/mojo/interfaces/audio_decoder.mojom-shared.h"
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
class AudioDecoder;
using AudioDecoderPtr = mojo::InterfacePtr<AudioDecoder>;
using AudioDecoderPtrInfo = mojo::InterfacePtrInfo<AudioDecoder>;
using AudioDecoderRequest = mojo::InterfaceRequest<AudioDecoder>;
using AudioDecoderAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioDecoder>;
using AudioDecoderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioDecoder>;
using AudioDecoderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioDecoder>;

class AudioDecoderClient;
using AudioDecoderClientPtr = mojo::InterfacePtr<AudioDecoderClient>;
using AudioDecoderClientPtrInfo = mojo::InterfacePtrInfo<AudioDecoderClient>;
using AudioDecoderClientRequest = mojo::InterfaceRequest<AudioDecoderClient>;
using AudioDecoderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<AudioDecoderClient>;
using AudioDecoderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AudioDecoderClient>;
using AudioDecoderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AudioDecoderClient>;


class AudioDecoderProxy;
class AudioDecoderStub;

class AudioDecoderRequestValidator;
class AudioDecoderResponseValidator;

class  AudioDecoder {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = AudioDecoderProxy;
  using Stub_ = AudioDecoderStub;

  using RequestValidator_ = AudioDecoderRequestValidator;
  using ResponseValidator_ = AudioDecoderResponseValidator;
  virtual ~AudioDecoder() {}


  using InitializeCallback = base::Callback<void(bool, bool)>;
  virtual void Initialize(AudioDecoderClientPtr client, ::media::mojom::AudioDecoderConfigPtr config, int32_t cdm_id, const InitializeCallback& callback) = 0;

  virtual void SetDataSource(mojo::ScopedDataPipeConsumerHandle receive_pipe) = 0;


  using DecodeCallback = base::Callback<void(::media::mojom::DecodeStatus)>;
  virtual void Decode(::media::mojom::DecoderBufferPtr buffer, const DecodeCallback& callback) = 0;


  using ResetCallback = base::Callback<void()>;
  virtual void Reset(const ResetCallback& callback) = 0;
};

class AudioDecoderClientProxy;
class AudioDecoderClientStub;

class AudioDecoderClientRequestValidator;

class  AudioDecoderClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = AudioDecoderClientProxy;
  using Stub_ = AudioDecoderClientStub;

  using RequestValidator_ = AudioDecoderClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~AudioDecoderClient() {}

  virtual void OnBufferDecoded(::media::mojom::AudioBufferPtr buffer) = 0;
};

class  AudioDecoderProxy
    : public AudioDecoder,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit AudioDecoderProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(AudioDecoderClientPtr client, ::media::mojom::AudioDecoderConfigPtr config, int32_t cdm_id, const InitializeCallback& callback) override;
  void SetDataSource(mojo::ScopedDataPipeConsumerHandle receive_pipe) override;
  void Decode(::media::mojom::DecoderBufferPtr buffer, const DecodeCallback& callback) override;
  void Reset(const ResetCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  AudioDecoderClientProxy
    : public AudioDecoderClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit AudioDecoderClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnBufferDecoded(::media::mojom::AudioBufferPtr buffer) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  AudioDecoderStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  AudioDecoderStub();
  ~AudioDecoderStub() override;
  void set_sink(AudioDecoder* sink) { sink_ = sink; }
  AudioDecoder* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  AudioDecoder* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  AudioDecoderClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  AudioDecoderClientStub();
  ~AudioDecoderClientStub() override;
  void set_sink(AudioDecoderClient* sink) { sink_ = sink; }
  AudioDecoderClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  AudioDecoderClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  AudioDecoderRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit AudioDecoderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  AudioDecoderClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit AudioDecoderClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  AudioDecoderResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit AudioDecoderResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_AUDIO_DECODER_MOJOM_H_