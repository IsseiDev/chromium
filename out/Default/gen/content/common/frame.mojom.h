// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FRAME_MOJOM_H_
#define CONTENT_COMMON_FRAME_MOJOM_H_

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
#include "content/common/frame.mojom-shared.h"
#include "services/shell/public/interfaces/interface_provider.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "base/values.h"
#include "cc/output/compositor_frame.h"
#include "third_party/skia/include/core/SkImageFilter.h"
#include "gpu/command_buffer/common/sync_token.h"
#include "cc/output/filter_operation.h"
#include "ui/display/display.h"
#include "ui/gfx/geometry/vector2d_f.h"
#include "ui/gfx/geometry/insets.h"
#include "base/version.h"
#include "gpu/config/gpu_info.h"
#include "base/time/time.h"
#include "cc/output/filter_operations.h"
#include "base/strings/string16.h"
#include "ui/gfx/selection_bound.h"
#include "content/common/bluetooth/web_bluetooth_device_id.h"
#include "ui/gfx/geometry/size.h"
#include "base/optional.h"
#include "content/common/resource_request_completion_status.h"
#include "services/shell/public/cpp/capabilities.h"
#include "ui/gfx/geometry/point.h"
#include "ui/events/latency_info.h"
#include "content/public/common/resource_response.h"
#include "cc/output/begin_frame_args.h"
#include "cc/surfaces/surface_sequence.h"
#include "cc/output/compositor_frame_metadata.h"
#include "ui/events/event.h"
#include "cc/quads/draw_quad.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/rect_f.h"
#include "cc/quads/render_pass.h"
#include "gpu/command_buffer/common/mailbox_holder.h"
#include "cc/resources/returned_resource.h"
#include "ui/gfx/buffer_types.h"
#include "url/origin.h"
#include "ui/gfx/geometry/point_f.h"
#include "gpu/command_buffer/common/mailbox.h"
#include "cc/input/selection.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/native_widget_types.h"
#include "url/gurl.h"
#include "cc/quads/shared_quad_state.h"
#include "cc/resources/transferable_resource.h"
#include "ui/gfx/transform.h"
#include "device/bluetooth/bluetooth_uuid.h"
#include "services/shell/public/cpp/identity.h"
#include "content/common/resource_request.h"
#include "ui/gfx/geometry/rect.h"
#include "gpu/command_buffer/common/capabilities.h"
#include "cc/surfaces/surface_id.h"
#include "ui/gfx/geometry/vector2d.h"
#include "cc/quads/render_pass_id.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {
class Frame;
using FramePtr = mojo::InterfacePtr<Frame>;
using FramePtrInfo = mojo::InterfacePtrInfo<Frame>;
using FrameRequest = mojo::InterfaceRequest<Frame>;
using FrameAssociatedPtr =
    mojo::AssociatedInterfacePtr<Frame>;
using FrameAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Frame>;
using FrameAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Frame>;

class FrameHost;
using FrameHostPtr = mojo::InterfacePtr<FrameHost>;
using FrameHostPtrInfo = mojo::InterfacePtrInfo<FrameHost>;
using FrameHostRequest = mojo::InterfaceRequest<FrameHost>;
using FrameHostAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameHost>;
using FrameHostAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameHost>;
using FrameHostAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameHost>;

class FrameFactory;
using FrameFactoryPtr = mojo::InterfacePtr<FrameFactory>;
using FrameFactoryPtrInfo = mojo::InterfacePtrInfo<FrameFactory>;
using FrameFactoryRequest = mojo::InterfaceRequest<FrameFactory>;
using FrameFactoryAssociatedPtr =
    mojo::AssociatedInterfacePtr<FrameFactory>;
using FrameFactoryAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<FrameFactory>;
using FrameFactoryAssociatedRequest =
    mojo::AssociatedInterfaceRequest<FrameFactory>;


class FrameProxy;
class FrameStub;

class FrameRequestValidator;

class CONTENT_EXPORT Frame {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = FrameProxy;
  using Stub_ = FrameStub;

  using RequestValidator_ = FrameRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~Frame() {}

  virtual void GetInterfaceProvider(::shell::mojom::InterfaceProviderRequest interfaces) = 0;
};

class FrameHostProxy;
class FrameHostStub;

class FrameHostRequestValidator;

class CONTENT_EXPORT FrameHost {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = FrameHostProxy;
  using Stub_ = FrameHostStub;

  using RequestValidator_ = FrameHostRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~FrameHost() {}

  virtual void GetInterfaceProvider(::shell::mojom::InterfaceProviderRequest interfaces) = 0;
};

class FrameFactoryProxy;
class FrameFactoryStub;

class FrameFactoryRequestValidator;

class CONTENT_EXPORT FrameFactory {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = FrameFactoryProxy;
  using Stub_ = FrameFactoryStub;

  using RequestValidator_ = FrameFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~FrameFactory() {}

  virtual void CreateFrame(int32_t frame_routing_id, FrameRequest frame, FrameHostPtr host) = 0;
};

class CONTENT_EXPORT FrameProxy
    : public Frame,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit FrameProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetInterfaceProvider(::shell::mojom::InterfaceProviderRequest interfaces) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class CONTENT_EXPORT FrameHostProxy
    : public FrameHost,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit FrameHostProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetInterfaceProvider(::shell::mojom::InterfaceProviderRequest interfaces) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class CONTENT_EXPORT FrameFactoryProxy
    : public FrameFactory,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit FrameFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  void CreateFrame(int32_t frame_routing_id, FrameRequest frame, FrameHostPtr host) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class CONTENT_EXPORT FrameStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  FrameStub();
  ~FrameStub() override;
  void set_sink(Frame* sink) { sink_ = sink; }
  Frame* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Frame* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT FrameHostStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  FrameHostStub();
  ~FrameHostStub() override;
  void set_sink(FrameHost* sink) { sink_ = sink; }
  FrameHost* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  FrameHost* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT FrameFactoryStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  FrameFactoryStub();
  ~FrameFactoryStub() override;
  void set_sink(FrameFactory* sink) { sink_ = sink; }
  FrameFactory* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  FrameFactory* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class CONTENT_EXPORT FrameRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit FrameRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT FrameHostRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit FrameHostRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class CONTENT_EXPORT FrameFactoryRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit FrameFactoryRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_FRAME_MOJOM_H_