// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_H_

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
#include "media/mojo/interfaces/renderer.mojom-shared.h"
#include "media/mojo/interfaces/demuxer_stream.mojom.h"
#include "media/mojo/interfaces/media_types.mojom.h"
#include "mojo/common/common_custom_types.mojom.h"
#include "ui/gfx/geometry/mojo/geometry.mojom.h"
#include "url/mojo/url.mojom.h"
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
class Renderer;
using RendererPtr = mojo::InterfacePtr<Renderer>;
using RendererPtrInfo = mojo::InterfacePtrInfo<Renderer>;
using RendererRequest = mojo::InterfaceRequest<Renderer>;
using RendererAssociatedPtr =
    mojo::AssociatedInterfacePtr<Renderer>;
using RendererAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Renderer>;
using RendererAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Renderer>;

class RendererClient;
using RendererClientPtr = mojo::InterfacePtr<RendererClient>;
using RendererClientPtrInfo = mojo::InterfacePtrInfo<RendererClient>;
using RendererClientRequest = mojo::InterfaceRequest<RendererClient>;
using RendererClientAssociatedPtr =
    mojo::AssociatedInterfacePtr<RendererClient>;
using RendererClientAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<RendererClient>;
using RendererClientAssociatedRequest =
    mojo::AssociatedInterfaceRequest<RendererClient>;


class RendererProxy;
class RendererStub;

class RendererRequestValidator;
class RendererResponseValidator;

class  Renderer {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = RendererProxy;
  using Stub_ = RendererStub;

  using RequestValidator_ = RendererRequestValidator;
  using ResponseValidator_ = RendererResponseValidator;
  virtual ~Renderer() {}


  using InitializeCallback = base::Callback<void(bool)>;
  virtual void Initialize(RendererClientPtr client, ::media::mojom::DemuxerStreamPtr audio, ::media::mojom::DemuxerStreamPtr video, const base::Optional<GURL>& url, const InitializeCallback& callback) = 0;


  using FlushCallback = base::Callback<void()>;
  virtual void Flush(const FlushCallback& callback) = 0;

  virtual void StartPlayingFrom(base::TimeDelta time) = 0;

  virtual void SetPlaybackRate(double playback_rate) = 0;

  virtual void SetVolume(float volume) = 0;


  using SetCdmCallback = base::Callback<void(bool)>;
  virtual void SetCdm(int32_t cdm_id, const SetCdmCallback& callback) = 0;
};

class RendererClientProxy;
class RendererClientStub;

class RendererClientRequestValidator;

class  RendererClient {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = RendererClientProxy;
  using Stub_ = RendererClientStub;

  using RequestValidator_ = RendererClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~RendererClient() {}

  virtual void OnTimeUpdate(base::TimeDelta time, base::TimeDelta max_time) = 0;

  virtual void OnBufferingStateChange(::media::mojom::BufferingState state) = 0;

  virtual void OnEnded() = 0;

  virtual void OnError() = 0;

  virtual void OnVideoNaturalSizeChange(const gfx::Size& size) = 0;

  virtual void OnVideoOpacityChange(bool opaque) = 0;

  virtual void OnStatisticsUpdate(const media::PipelineStatistics& stats) = 0;

  virtual void OnWaitingForDecryptionKey() = 0;

  virtual void OnDurationChange(base::TimeDelta duration) = 0;
};

class  RendererProxy
    : public Renderer,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit RendererProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(RendererClientPtr client, ::media::mojom::DemuxerStreamPtr audio, ::media::mojom::DemuxerStreamPtr video, const base::Optional<GURL>& url, const InitializeCallback& callback) override;
  void Flush(const FlushCallback& callback) override;
  void StartPlayingFrom(base::TimeDelta time) override;
  void SetPlaybackRate(double playback_rate) override;
  void SetVolume(float volume) override;
  void SetCdm(int32_t cdm_id, const SetCdmCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  RendererClientProxy
    : public RendererClient,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit RendererClientProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnTimeUpdate(base::TimeDelta time, base::TimeDelta max_time) override;
  void OnBufferingStateChange(::media::mojom::BufferingState state) override;
  void OnEnded() override;
  void OnError() override;
  void OnVideoNaturalSizeChange(const gfx::Size& size) override;
  void OnVideoOpacityChange(bool opaque) override;
  void OnStatisticsUpdate(const media::PipelineStatistics& stats) override;
  void OnWaitingForDecryptionKey() override;
  void OnDurationChange(base::TimeDelta duration) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  RendererStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  RendererStub();
  ~RendererStub() override;
  void set_sink(Renderer* sink) { sink_ = sink; }
  Renderer* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Renderer* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  RendererClientStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  RendererClientStub();
  ~RendererClientStub() override;
  void set_sink(RendererClient* sink) { sink_ = sink; }
  RendererClient* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  RendererClient* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  RendererRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit RendererRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  RendererClientRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit RendererClientRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  RendererResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit RendererResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_RENDERER_MOJOM_H_