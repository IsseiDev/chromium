// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_OFFSCREENCANVAS_OFFSCREEN_CANVAS_SURFACE_MOJOM_BLINK_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_OFFSCREENCANVAS_OFFSCREEN_CANVAS_SURFACE_MOJOM_BLINK_H_

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
#include "third_party/WebKit/public/platform/modules/offscreencanvas/offscreen_canvas_surface.mojom-shared.h"
#include "cc/ipc/surface_id.mojom-blink.h"
#include "cc/ipc/surface_sequence.mojom-blink.h"
#include "mojo/public/cpp/bindings/wtf_array.h"
#include "mojo/public/cpp/bindings/wtf_map.h"
#include "third_party/WebKit/Source/wtf/Optional.h"
#include "third_party/WebKit/Source/wtf/text/WTFString.h"
#include "third_party/WebKit/Source/platform/weborigin/KURL.h"
#include "cc/surfaces/surface_sequence.h"
#include "third_party/WebKit/Source/platform/weborigin/SecurityOrigin.h"
#include "cc/surfaces/surface_id.h"
#include "third_party/WebKit/public/platform/WebCommon.h"


namespace blink {
namespace mojom {
namespace blink {
class OffscreenCanvasSurface;
using OffscreenCanvasSurfacePtr = mojo::InterfacePtr<OffscreenCanvasSurface>;
using OffscreenCanvasSurfacePtrInfo = mojo::InterfacePtrInfo<OffscreenCanvasSurface>;
using OffscreenCanvasSurfaceRequest = mojo::InterfaceRequest<OffscreenCanvasSurface>;
using OffscreenCanvasSurfaceAssociatedPtr =
    mojo::AssociatedInterfacePtr<OffscreenCanvasSurface>;
using OffscreenCanvasSurfaceAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OffscreenCanvasSurface>;
using OffscreenCanvasSurfaceAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OffscreenCanvasSurface>;


class OffscreenCanvasSurfaceProxy;
class OffscreenCanvasSurfaceStub;

class OffscreenCanvasSurfaceRequestValidator;
class OffscreenCanvasSurfaceResponseValidator;

class BLINK_PLATFORM_EXPORT OffscreenCanvasSurface {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = OffscreenCanvasSurfaceProxy;
  using Stub_ = OffscreenCanvasSurfaceStub;

  using RequestValidator_ = OffscreenCanvasSurfaceRequestValidator;
  using ResponseValidator_ = OffscreenCanvasSurfaceResponseValidator;
  virtual ~OffscreenCanvasSurface() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetSurfaceId(cc::SurfaceId* surface_id);

  using GetSurfaceIdCallback = base::Callback<void(const cc::SurfaceId&)>;
  virtual void GetSurfaceId(const GetSurfaceIdCallback& callback) = 0;

  virtual void RequestSurfaceCreation(const cc::SurfaceId& surface_id) = 0;

  virtual void Require(const cc::SurfaceId& surface_id, const cc::SurfaceSequence& sequence) = 0;

  virtual void Satisfy(const cc::SurfaceSequence& sequence) = 0;
};

class BLINK_PLATFORM_EXPORT OffscreenCanvasSurfaceProxy
    : public OffscreenCanvasSurface,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit OffscreenCanvasSurfaceProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetSurfaceId(cc::SurfaceId* surface_id) override;
  void GetSurfaceId(const GetSurfaceIdCallback& callback) override;
  void RequestSurfaceCreation(const cc::SurfaceId& surface_id) override;
  void Require(const cc::SurfaceId& surface_id, const cc::SurfaceSequence& sequence) override;
  void Satisfy(const cc::SurfaceSequence& sequence) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class BLINK_PLATFORM_EXPORT OffscreenCanvasSurfaceStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  OffscreenCanvasSurfaceStub();
  ~OffscreenCanvasSurfaceStub() override;
  void set_sink(OffscreenCanvasSurface* sink) { sink_ = sink; }
  OffscreenCanvasSurface* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  OffscreenCanvasSurface* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BLINK_PLATFORM_EXPORT OffscreenCanvasSurfaceRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit OffscreenCanvasSurfaceRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT OffscreenCanvasSurfaceResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit OffscreenCanvasSurfaceResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_OFFSCREENCANVAS_OFFSCREEN_CANVAS_SURFACE_MOJOM_BLINK_H_