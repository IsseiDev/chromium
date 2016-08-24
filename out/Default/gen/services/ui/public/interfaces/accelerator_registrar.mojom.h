// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_UI_PUBLIC_INTERFACES_ACCELERATOR_REGISTRAR_MOJOM_H_
#define SERVICES_UI_PUBLIC_INTERFACES_ACCELERATOR_REGISTRAR_MOJOM_H_

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
#include "services/ui/public/interfaces/accelerator_registrar.mojom-shared.h"
#include "services/ui/public/interfaces/event_matcher.mojom.h"
#include "ui/events/mojo/event.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "gpu/config/dx_diag_node.h"
#include "ui/gfx/geometry/point.h"
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
#include "gpu/command_buffer/common/capabilities.h"
#include "ui/gfx/geometry/size.h"
#include "base/values.h"
#include "ui/events/latency_info.h"
#include "cc/output/begin_frame_args.h"
#include "cc/output/compositor_frame_metadata.h"
#include "ui/events/event.h"
#include "cc/quads/draw_quad.h"
#include "base/files/file_path.h"
#include "ui/gfx/geometry/rect_f.h"
#include "cc/quads/render_pass.h"
#include "gpu/command_buffer/common/mailbox_holder.h"
#include "cc/resources/returned_resource.h"
#include "ui/gfx/buffer_types.h"
#include "ui/gfx/geometry/point_f.h"
#include "gpu/command_buffer/common/mailbox.h"
#include "cc/input/selection.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/gfx/native_widget_types.h"
#include "cc/quads/shared_quad_state.h"
#include "cc/resources/transferable_resource.h"
#include "ui/gfx/transform.h"
#include "ui/gfx/geometry/rect.h"
#include "cc/surfaces/surface_sequence.h"
#include "cc/surfaces/surface_id.h"
#include "ui/gfx/geometry/vector2d.h"
#include "cc/quads/render_pass_id.h"


namespace ui {
namespace mojom {
class AcceleratorHandler;
using AcceleratorHandlerPtr = mojo::InterfacePtr<AcceleratorHandler>;
using AcceleratorHandlerPtrInfo = mojo::InterfacePtrInfo<AcceleratorHandler>;
using AcceleratorHandlerRequest = mojo::InterfaceRequest<AcceleratorHandler>;
using AcceleratorHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<AcceleratorHandler>;
using AcceleratorHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AcceleratorHandler>;
using AcceleratorHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AcceleratorHandler>;

class AcceleratorRegistrar;
using AcceleratorRegistrarPtr = mojo::InterfacePtr<AcceleratorRegistrar>;
using AcceleratorRegistrarPtrInfo = mojo::InterfacePtrInfo<AcceleratorRegistrar>;
using AcceleratorRegistrarRequest = mojo::InterfaceRequest<AcceleratorRegistrar>;
using AcceleratorRegistrarAssociatedPtr =
    mojo::AssociatedInterfacePtr<AcceleratorRegistrar>;
using AcceleratorRegistrarAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<AcceleratorRegistrar>;
using AcceleratorRegistrarAssociatedRequest =
    mojo::AssociatedInterfaceRequest<AcceleratorRegistrar>;


class AcceleratorHandlerProxy;
class AcceleratorHandlerStub;

class AcceleratorHandlerRequestValidator;

class  AcceleratorHandler {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = AcceleratorHandlerProxy;
  using Stub_ = AcceleratorHandlerStub;

  using RequestValidator_ = AcceleratorHandlerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~AcceleratorHandler() {}

  virtual void OnAccelerator(uint32_t id, std::unique_ptr<ui::Event> event) = 0;
};

class AcceleratorRegistrarProxy;
class AcceleratorRegistrarStub;

class AcceleratorRegistrarRequestValidator;
class AcceleratorRegistrarResponseValidator;

class  AcceleratorRegistrar {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = AcceleratorRegistrarProxy;
  using Stub_ = AcceleratorRegistrarStub;

  using RequestValidator_ = AcceleratorRegistrarRequestValidator;
  using ResponseValidator_ = AcceleratorRegistrarResponseValidator;
  virtual ~AcceleratorRegistrar() {}

  virtual void SetHandler(AcceleratorHandlerPtr handler) = 0;


  using AddAcceleratorCallback = base::Callback<void(bool)>;
  virtual void AddAccelerator(uint32_t id, ::ui::mojom::EventMatcherPtr matcher, const AddAcceleratorCallback& callback) = 0;

  virtual void RemoveAccelerator(uint32_t id) = 0;
};

class  AcceleratorHandlerProxy
    : public AcceleratorHandler,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit AcceleratorHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void OnAccelerator(uint32_t id, std::unique_ptr<ui::Event> event) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  AcceleratorRegistrarProxy
    : public AcceleratorRegistrar,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit AcceleratorRegistrarProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetHandler(AcceleratorHandlerPtr handler) override;
  void AddAccelerator(uint32_t id, ::ui::mojom::EventMatcherPtr matcher, const AddAcceleratorCallback& callback) override;
  void RemoveAccelerator(uint32_t id) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  AcceleratorHandlerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  AcceleratorHandlerStub();
  ~AcceleratorHandlerStub() override;
  void set_sink(AcceleratorHandler* sink) { sink_ = sink; }
  AcceleratorHandler* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  AcceleratorHandler* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  AcceleratorRegistrarStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  AcceleratorRegistrarStub();
  ~AcceleratorRegistrarStub() override;
  void set_sink(AcceleratorRegistrar* sink) { sink_ = sink; }
  AcceleratorRegistrar* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  AcceleratorRegistrar* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  AcceleratorHandlerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit AcceleratorHandlerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  AcceleratorRegistrarRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit AcceleratorRegistrarRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  AcceleratorRegistrarResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit AcceleratorRegistrarResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace ui

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_UI_PUBLIC_INTERFACES_ACCELERATOR_REGISTRAR_MOJOM_H_