// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_H_

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
#include "media/mojo/interfaces/video_decoder.mojom-shared.h"
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
class VideoDecoder;
using VideoDecoderPtr = mojo::InterfacePtr<VideoDecoder>;
using VideoDecoderPtrInfo = mojo::InterfacePtrInfo<VideoDecoder>;
using VideoDecoderRequest = mojo::InterfaceRequest<VideoDecoder>;
using VideoDecoderAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDecoder>;
using VideoDecoderAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDecoder>;
using VideoDecoderAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDecoder>;

class VideoDecoderClient;
using VideoDecoderClientPtr = mojo::InterfacePtr<VideoDecoderClient>;
using VideoDecoderClientPtrInfo = mojo::InterfacePtrInfo<VideoDecoderClient>;
using VideoDecoderClientRequest = mojo::InterfaceRequest<VideoDecoderClient>;
using VideoDecoderClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<VideoDecoderClient>;
using VideoDecoderClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<VideoDecoderClient>;
using VideoDecoderClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<VideoDecoderClient>;


class VideoDecoderProxy;
class VideoDecoderStub;

class VideoDecoderRequestValidator;
class VideoDecoderResponseValidator;

class  VideoDecoder {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = VideoDecoderProxy;
  using Stub_ = VideoDecoderStub;

  using RequestValidator_ = VideoDecoderRequestValidator;
  using ResponseValidator_ = VideoDecoderResponseValidator;
  virtual ~VideoDecoder() {}

  virtual void Construct(VideoDecoderClientPtr client, mojo::ScopedDataPipeConsumerHandle decoder_buffer_pipe) = 0;


  using InitializeCallback = base::Callback<void(bool)>;
  virtual void Initialize(::media::mojom::VideoDecoderConfigPtr config, bool low_delay, const InitializeCallback& callback) = 0;


  using DecodeCallback = base::Callback<void(::media::mojom::DecodeStatus)>;
  virtual void Decode(::media::mojom::DecoderBufferPtr buffer, const DecodeCallback& callback) = 0;


  using ResetCallback = base::Callback<void()>;
  virtual void Reset(const ResetCallback& callback) = 0;
};

class VideoDecoderClientProxy;
class VideoDecoderClientStub;

class VideoDecoderClientRequestValidator;

class  VideoDecoderClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = VideoDecoderClientProxy;
  using Stub_ = VideoDecoderClientStub;

  using RequestValidator_ = VideoDecoderClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~VideoDecoderClient() {}

  virtual void OnVideoFrameDecoded(::media::mojom::VideoFramePtr frame) = 0;
};

class  VideoDecoderProxy
    : public VideoDecoder,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit VideoDecoderProxy(mojo::MessageReceiverWithResponder* receiver);
  void Construct(VideoDecoderClientPtr client, mojo::ScopedDataPipeConsumerHandle decoder_buffer_pipe) override;
  void Initialize(::media::mojom::VideoDecoderConfigPtr config, bool low_delay, const InitializeCallback& callback) override;
  void Decode(::media::mojom::DecoderBufferPtr buffer, const DecodeCallback& callback) override;
  void Reset(const ResetCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  VideoDecoderClientProxy
    : public VideoDecoderClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit VideoDecoderClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnVideoFrameDecoded(::media::mojom::VideoFramePtr frame) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  VideoDecoderStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  VideoDecoderStub();
  ~VideoDecoderStub() override;
  void set_sink(VideoDecoder* sink) { sink_ = sink; }
  VideoDecoder* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  VideoDecoder* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  VideoDecoderClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  VideoDecoderClientStub();
  ~VideoDecoderClientStub() override;
  void set_sink(VideoDecoderClient* sink) { sink_ = sink; }
  VideoDecoderClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  VideoDecoderClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  VideoDecoderRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit VideoDecoderRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  VideoDecoderClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit VideoDecoderClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  VideoDecoderResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit VideoDecoderResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_VIDEO_DECODER_MOJOM_H_