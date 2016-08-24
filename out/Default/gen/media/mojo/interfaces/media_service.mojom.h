// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_H_

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
#include "media/mojo/interfaces/media_service.mojom-shared.h"
#include "media/mojo/interfaces/service_factory.mojom.h"
#include "services/shell/public/interfaces/interface_provider.mojom.h"
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
class MediaService;
using MediaServicePtr = mojo::InterfacePtr<MediaService>;
using MediaServicePtrInfo = mojo::InterfacePtrInfo<MediaService>;
using MediaServiceRequest = mojo::InterfaceRequest<MediaService>;
using MediaServiceAssociatedPtr =
    mojo::AssociatedInterfacePtr<MediaService>;
using MediaServiceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<MediaService>;
using MediaServiceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<MediaService>;


class MediaServiceProxy;
class MediaServiceStub;

class MediaServiceRequestValidator;

class  MediaService {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = MediaServiceProxy;
  using Stub_ = MediaServiceStub;

  using RequestValidator_ = MediaServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~MediaService() {}

  virtual void CreateServiceFactory(::media::mojom::ServiceFactoryRequest factory, ::shell::mojom::InterfaceProviderPtr frame_interfaces) = 0;
};

class  MediaServiceProxy
    : public MediaService,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit MediaServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateServiceFactory(::media::mojom::ServiceFactoryRequest factory, ::shell::mojom::InterfaceProviderPtr frame_interfaces) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  MediaServiceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  MediaServiceStub();
  ~MediaServiceStub() override;
  void set_sink(MediaService* sink) { sink_ = sink; }
  MediaService* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  MediaService* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  MediaServiceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit MediaServiceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_MEDIA_SERVICE_MOJOM_H_