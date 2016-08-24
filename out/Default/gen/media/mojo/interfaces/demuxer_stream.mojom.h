// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_H_

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
#include "media/mojo/interfaces/demuxer_stream.mojom-shared.h"
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
class DemuxerStream;
using DemuxerStreamPtr = mojo::InterfacePtr<DemuxerStream>;
using DemuxerStreamPtrInfo = mojo::InterfacePtrInfo<DemuxerStream>;
using DemuxerStreamRequest = mojo::InterfaceRequest<DemuxerStream>;
using DemuxerStreamAssociatedPtr =
    mojo::AssociatedInterfacePtr<DemuxerStream>;
using DemuxerStreamAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<DemuxerStream>;
using DemuxerStreamAssociatedRequest =
    mojo::AssociatedInterfaceRequest<DemuxerStream>;


class DemuxerStreamProxy;
class DemuxerStreamStub;

class DemuxerStreamRequestValidator;
class DemuxerStreamResponseValidator;

class  DemuxerStream {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = DemuxerStreamProxy;
  using Stub_ = DemuxerStreamStub;

  using RequestValidator_ = DemuxerStreamRequestValidator;
  using ResponseValidator_ = DemuxerStreamResponseValidator;
  using Type = DemuxerStream_Type;
  using Status = DemuxerStream_Status;
  virtual ~DemuxerStream() {}


  using InitializeCallback = base::Callback<void(DemuxerStream::Type, mojo::ScopedDataPipeConsumerHandle, ::media::mojom::AudioDecoderConfigPtr, ::media::mojom::VideoDecoderConfigPtr)>;
  virtual void Initialize(const InitializeCallback& callback) = 0;


  using ReadCallback = base::Callback<void(DemuxerStream::Status, ::media::mojom::DecoderBufferPtr, ::media::mojom::AudioDecoderConfigPtr, ::media::mojom::VideoDecoderConfigPtr)>;
  virtual void Read(const ReadCallback& callback) = 0;

  virtual void EnableBitstreamConverter() = 0;
};

class  DemuxerStreamProxy
    : public DemuxerStream,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit DemuxerStreamProxy(mojo::MessageReceiverWithResponder* receiver);
  void Initialize(const InitializeCallback& callback) override;
  void Read(const ReadCallback& callback) override;
  void EnableBitstreamConverter() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  DemuxerStreamStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  DemuxerStreamStub();
  ~DemuxerStreamStub() override;
  void set_sink(DemuxerStream* sink) { sink_ = sink; }
  DemuxerStream* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  DemuxerStream* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  DemuxerStreamRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DemuxerStreamRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  DemuxerStreamResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit DemuxerStreamResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_DEMUXER_STREAM_MOJOM_H_