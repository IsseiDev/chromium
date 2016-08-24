// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SAFE_JSON_PUBLIC_INTERFACES_SAFE_JSON_MOJOM_H_
#define COMPONENTS_SAFE_JSON_PUBLIC_INTERFACES_SAFE_JSON_MOJOM_H_

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
#include "components/safe_json/public/interfaces/safe_json.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "base/values.h"


namespace safe_json {
namespace mojom {
class SafeJsonParser;
using SafeJsonParserPtr = mojo::InterfacePtr<SafeJsonParser>;
using SafeJsonParserPtrInfo = mojo::InterfacePtrInfo<SafeJsonParser>;
using SafeJsonParserRequest = mojo::InterfaceRequest<SafeJsonParser>;
using SafeJsonParserAssociatedPtr =
    mojo::AssociatedInterfacePtr<SafeJsonParser>;
using SafeJsonParserAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SafeJsonParser>;
using SafeJsonParserAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SafeJsonParser>;

using ListValue = mojo::NativeStruct;
using ListValueDataView = mojo::NativeStructDataView;
using ListValuePtr = mojo::NativeStructPtr;


class SafeJsonParserProxy;
class SafeJsonParserStub;

class SafeJsonParserRequestValidator;
class SafeJsonParserResponseValidator;

class  SafeJsonParser {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = SafeJsonParserProxy;
  using Stub_ = SafeJsonParserStub;

  using RequestValidator_ = SafeJsonParserRequestValidator;
  using ResponseValidator_ = SafeJsonParserResponseValidator;
  virtual ~SafeJsonParser() {}


  using ParseCallback = base::Callback<void(const base::ListValue&, mojo::String)>;
  virtual void Parse(const mojo::String& json, const ParseCallback& callback) = 0;
};

class  SafeJsonParserProxy
    : public SafeJsonParser,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit SafeJsonParserProxy(mojo::MessageReceiverWithResponder* receiver);
  void Parse(const mojo::String& json, const ParseCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  SafeJsonParserStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  SafeJsonParserStub();
  ~SafeJsonParserStub() override;
  void set_sink(SafeJsonParser* sink) { sink_ = sink; }
  SafeJsonParser* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  SafeJsonParser* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  SafeJsonParserRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit SafeJsonParserRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  SafeJsonParserResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit SafeJsonParserResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};







}  // namespace mojom
}  // namespace safe_json

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_SAFE_JSON_PUBLIC_INTERFACES_SAFE_JSON_MOJOM_H_