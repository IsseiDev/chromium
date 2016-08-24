// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_H_
#define MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_H_

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
#include "media/mojo/interfaces/provision_fetcher.mojom-shared.h"
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
class ProvisionFetcher;
using ProvisionFetcherPtr = mojo::InterfacePtr<ProvisionFetcher>;
using ProvisionFetcherPtrInfo = mojo::InterfacePtrInfo<ProvisionFetcher>;
using ProvisionFetcherRequest = mojo::InterfaceRequest<ProvisionFetcher>;
using ProvisionFetcherAssociatedPtr =
    mojo::AssociatedInterfacePtr<ProvisionFetcher>;
using ProvisionFetcherAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ProvisionFetcher>;
using ProvisionFetcherAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ProvisionFetcher>;


class ProvisionFetcherProxy;
class ProvisionFetcherStub;

class ProvisionFetcherRequestValidator;
class ProvisionFetcherResponseValidator;

class  ProvisionFetcher {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ProvisionFetcherProxy;
  using Stub_ = ProvisionFetcherStub;

  using RequestValidator_ = ProvisionFetcherRequestValidator;
  using ResponseValidator_ = ProvisionFetcherResponseValidator;
  virtual ~ProvisionFetcher() {}


  using RetrieveCallback = base::Callback<void(bool, mojo::String)>;
  virtual void Retrieve(const mojo::String& default_url, const mojo::String& request_data, const RetrieveCallback& callback) = 0;
};

class  ProvisionFetcherProxy
    : public ProvisionFetcher,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ProvisionFetcherProxy(mojo::MessageReceiverWithResponder* receiver);
  void Retrieve(const mojo::String& default_url, const mojo::String& request_data, const RetrieveCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ProvisionFetcherStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ProvisionFetcherStub();
  ~ProvisionFetcherStub() override;
  void set_sink(ProvisionFetcher* sink) { sink_ = sink; }
  ProvisionFetcher* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ProvisionFetcher* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ProvisionFetcherRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ProvisionFetcherRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ProvisionFetcherResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ProvisionFetcherResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_MOJO_INTERFACES_PROVISION_FETCHER_MOJOM_H_