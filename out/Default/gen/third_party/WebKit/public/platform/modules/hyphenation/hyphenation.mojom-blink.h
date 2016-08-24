// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_HYPHENATION_HYPHENATION_MOJOM_BLINK_H_
#define THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_HYPHENATION_HYPHENATION_MOJOM_BLINK_H_

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
#include "third_party/WebKit/public/platform/modules/hyphenation/hyphenation.mojom-shared.h"
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
class Hyphenation;
using HyphenationPtr = mojo::InterfacePtr<Hyphenation>;
using HyphenationPtrInfo = mojo::InterfacePtrInfo<Hyphenation>;
using HyphenationRequest = mojo::InterfaceRequest<Hyphenation>;
using HyphenationAssociatedPtr =
    mojo::AssociatedInterfacePtr<Hyphenation>;
using HyphenationAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Hyphenation>;
using HyphenationAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Hyphenation>;


class HyphenationProxy;
class HyphenationStub;

class HyphenationRequestValidator;
class HyphenationResponseValidator;

class BLINK_PLATFORM_EXPORT Hyphenation {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = HyphenationProxy;
  using Stub_ = HyphenationStub;

  using RequestValidator_ = HyphenationRequestValidator;
  using ResponseValidator_ = HyphenationResponseValidator;
  virtual ~Hyphenation() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool OpenDictionary(const WTF::String& locale, mojo::ScopedHandle* hyphenation_dictionary_handle);

  using OpenDictionaryCallback = base::Callback<void(mojo::ScopedHandle)>;
  virtual void OpenDictionary(const WTF::String& locale, const OpenDictionaryCallback& callback) = 0;
};

class BLINK_PLATFORM_EXPORT HyphenationProxy
    : public Hyphenation,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit HyphenationProxy(mojo::MessageReceiverWithResponder* receiver);
  bool OpenDictionary(const WTF::String& locale, mojo::ScopedHandle* hyphenation_dictionary_handle) override;
  void OpenDictionary(const WTF::String& locale, const OpenDictionaryCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class BLINK_PLATFORM_EXPORT HyphenationStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  HyphenationStub();
  ~HyphenationStub() override;
  void set_sink(Hyphenation* sink) { sink_ = sink; }
  Hyphenation* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Hyphenation* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class BLINK_PLATFORM_EXPORT HyphenationRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit HyphenationRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT HyphenationResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit HyphenationResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_WEBKIT_PUBLIC_PLATFORM_MODULES_HYPHENATION_HYPHENATION_MOJOM_BLINK_H_