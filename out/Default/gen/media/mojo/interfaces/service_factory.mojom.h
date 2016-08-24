// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_SERVICE_FACTORY_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_SERVICE_FACTORY_MOJOM_H_

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
#include "media/mojo/interfaces/service_factory.mojom-shared.h"
#include "media/mojo/interfaces/audio_decoder.mojom.h"
#include "media/mojo/interfaces/content_decryption_module.mojom.h"
#include "media/mojo/interfaces/renderer.mojom.h"
#include "media/mojo/interfaces/video_decoder.mojom.h"
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
class ServiceFactory;
using ServiceFactoryPtr = mojo::InterfacePtr<ServiceFactory>;
using ServiceFactoryPtrInfo = mojo::InterfacePtrInfo<ServiceFactory>;
using ServiceFactoryRequest = mojo::InterfaceRequest<ServiceFactory>;
using ServiceFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<ServiceFactory>;
using ServiceFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ServiceFactory>;
using ServiceFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ServiceFactory>;


class ServiceFactoryProxy;
class ServiceFactoryStub;

class ServiceFactoryRequestValidator;

class  ServiceFactory {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ServiceFactoryProxy;
  using Stub_ = ServiceFactoryStub;

  using RequestValidator_ = ServiceFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~ServiceFactory() {}

  virtual void CreateAudioDecoder(::media::mojom::AudioDecoderRequest audio_decoder) = 0;

  virtual void CreateVideoDecoder(::media::mojom::VideoDecoderRequest video_decoder) = 0;

  virtual void CreateRenderer(const mojo::String& audio_device_id, ::media::mojom::RendererRequest renderer) = 0;

  virtual void CreateCdm(::media::mojom::ContentDecryptionModuleRequest cdm) = 0;
};

class  ServiceFactoryProxy
    : public ServiceFactory,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ServiceFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateAudioDecoder(::media::mojom::AudioDecoderRequest audio_decoder) override;
  void CreateVideoDecoder(::media::mojom::VideoDecoderRequest video_decoder) override;
  void CreateRenderer(const mojo::String& audio_device_id, ::media::mojom::RendererRequest renderer) override;
  void CreateCdm(::media::mojom::ContentDecryptionModuleRequest cdm) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ServiceFactoryStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ServiceFactoryStub();
  ~ServiceFactoryStub() override;
  void set_sink(ServiceFactory* sink) { sink_ = sink; }
  ServiceFactory* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ServiceFactory* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ServiceFactoryRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ServiceFactoryRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_SERVICE_FACTORY_MOJOM_H_