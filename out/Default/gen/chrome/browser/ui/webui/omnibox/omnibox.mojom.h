// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_H_

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
#include "chrome/browser/ui/webui/omnibox/omnibox.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace mojom {
class OmniboxPageHandler;
using OmniboxPageHandlerPtr = mojo::InterfacePtr<OmniboxPageHandler>;
using OmniboxPageHandlerPtrInfo = mojo::InterfacePtrInfo<OmniboxPageHandler>;
using OmniboxPageHandlerRequest = mojo::InterfaceRequest<OmniboxPageHandler>;
using OmniboxPageHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<OmniboxPageHandler>;
using OmniboxPageHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OmniboxPageHandler>;
using OmniboxPageHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OmniboxPageHandler>;

class OmniboxPage;
using OmniboxPagePtr = mojo::InterfacePtr<OmniboxPage>;
using OmniboxPagePtrInfo = mojo::InterfacePtrInfo<OmniboxPage>;
using OmniboxPageRequest = mojo::InterfaceRequest<OmniboxPage>;
using OmniboxPageAssociatedPtr =
    mojo::AssociatedInterfacePtr<OmniboxPage>;
using OmniboxPageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<OmniboxPage>;
using OmniboxPageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<OmniboxPage>;

class AutocompleteAdditionalInfo;
class AutocompleteAdditionalInfoDataView;
using AutocompleteAdditionalInfoPtr = mojo::InlinedStructPtr<AutocompleteAdditionalInfo>;

class AutocompleteMatch;
class AutocompleteMatchDataView;
using AutocompleteMatchPtr = mojo::StructPtr<AutocompleteMatch>;

class AutocompleteResultsForProvider;
class AutocompleteResultsForProviderDataView;
using AutocompleteResultsForProviderPtr = mojo::StructPtr<AutocompleteResultsForProvider>;

class OmniboxResult;
class OmniboxResultDataView;
using OmniboxResultPtr = mojo::StructPtr<OmniboxResult>;


class OmniboxPageHandlerProxy;
class OmniboxPageHandlerStub;

class OmniboxPageHandlerRequestValidator;

class  OmniboxPageHandler {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = OmniboxPageHandlerProxy;
  using Stub_ = OmniboxPageHandlerStub;

  using RequestValidator_ = OmniboxPageHandlerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~OmniboxPageHandler() {}

  virtual void SetClientPage(OmniboxPagePtr page) = 0;

  virtual void StartOmniboxQuery(const mojo::String& input_string, int32_t cursor_position, bool prevent_inline_autocomplete, bool prefer_keyword, int32_t page_classification) = 0;
};

class OmniboxPageProxy;
class OmniboxPageStub;

class OmniboxPageRequestValidator;

class  OmniboxPage {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = OmniboxPageProxy;
  using Stub_ = OmniboxPageStub;

  using RequestValidator_ = OmniboxPageRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~OmniboxPage() {}

  virtual void HandleNewAutocompleteResult(OmniboxResultPtr result) = 0;
};

class  OmniboxPageHandlerProxy
    : public OmniboxPageHandler,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit OmniboxPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void SetClientPage(OmniboxPagePtr page) override;
  void StartOmniboxQuery(const mojo::String& input_string, int32_t cursor_position, bool prevent_inline_autocomplete, bool prefer_keyword, int32_t page_classification) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  OmniboxPageProxy
    : public OmniboxPage,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit OmniboxPageProxy(mojo::MessageReceiverWithResponder* receiver);
  void HandleNewAutocompleteResult(OmniboxResultPtr result) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  OmniboxPageHandlerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  OmniboxPageHandlerStub();
  ~OmniboxPageHandlerStub() override;
  void set_sink(OmniboxPageHandler* sink) { sink_ = sink; }
  OmniboxPageHandler* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  OmniboxPageHandler* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  OmniboxPageStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  OmniboxPageStub();
  ~OmniboxPageStub() override;
  void set_sink(OmniboxPage* sink) { sink_ = sink; }
  OmniboxPage* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  OmniboxPage* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  OmniboxPageHandlerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit OmniboxPageHandlerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  OmniboxPageRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit OmniboxPageRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class  AutocompleteAdditionalInfo {
 public:
  using DataView = AutocompleteAdditionalInfoDataView;
  using Data_ = internal::AutocompleteAdditionalInfo_Data;

  static AutocompleteAdditionalInfoPtr New();

  template <typename U>
  static AutocompleteAdditionalInfoPtr From(const U& u) {
    return mojo::TypeConverter<AutocompleteAdditionalInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AutocompleteAdditionalInfo>::Convert(*this);
  }

  AutocompleteAdditionalInfo();
  ~AutocompleteAdditionalInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AutocompleteAdditionalInfoPtr>
  AutocompleteAdditionalInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AutocompleteAdditionalInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        AutocompleteAdditionalInfoPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        AutocompleteAdditionalInfoPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String key;
  mojo::String value;
};

class AutocompleteAdditionalInfoDataView {
 public:
  AutocompleteAdditionalInfoDataView() {}

  AutocompleteAdditionalInfoDataView(
      internal::AutocompleteAdditionalInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetKeyDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadKey(UserType* output) {
    auto pointer = data_->key.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetValueDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadValue(UserType* output) {
    auto pointer = data_->value.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::AutocompleteAdditionalInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojom::AutocompleteAdditionalInfoDataView> {
  using MojomType = ::mojom::AutocompleteAdditionalInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojom {









class  AutocompleteMatch {
 public:
  using DataView = AutocompleteMatchDataView;
  using Data_ = internal::AutocompleteMatch_Data;

  static AutocompleteMatchPtr New();

  template <typename U>
  static AutocompleteMatchPtr From(const U& u) {
    return mojo::TypeConverter<AutocompleteMatchPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AutocompleteMatch>::Convert(*this);
  }

  AutocompleteMatch();
  ~AutocompleteMatch();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AutocompleteMatchPtr>
  AutocompleteMatchPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AutocompleteMatch>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        AutocompleteMatchPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        AutocompleteMatchPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String provider_name;
  bool provider_done;
  int32_t relevance;
  bool deletable;
  mojo::String fill_into_edit;
  mojo::String inline_autocompletion;
  mojo::String destination_url;
  mojo::String contents;
  mojo::String description;
  int32_t transition;
  bool allowed_to_be_default_match;
  mojo::String type;
  mojo::String associated_keyword;
  mojo::String keyword;
  bool starred;
  int32_t duplicates;
  bool from_previous;
  mojo::Array<AutocompleteAdditionalInfoPtr> additional_info;
 private:
  DISALLOW_COPY_AND_ASSIGN(AutocompleteMatch);
};

class AutocompleteMatchDataView {
 public:
  AutocompleteMatchDataView() {}

  AutocompleteMatchDataView(
      internal::AutocompleteMatch_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProviderNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadProviderName(UserType* output) {
    auto pointer = data_->provider_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  bool provider_done() const {
    return data_->provider_done;
  }
  int32_t relevance() const {
    return data_->relevance;
  }
  bool deletable() const {
    return data_->deletable;
  }
  inline void GetFillIntoEditDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadFillIntoEdit(UserType* output) {
    auto pointer = data_->fill_into_edit.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetInlineAutocompletionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadInlineAutocompletion(UserType* output) {
    auto pointer = data_->inline_autocompletion.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetDestinationUrlDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDestinationUrl(UserType* output) {
    auto pointer = data_->destination_url.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetContentsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadContents(UserType* output) {
    auto pointer = data_->contents.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDescription(UserType* output) {
    auto pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  int32_t transition() const {
    return data_->transition;
  }
  bool allowed_to_be_default_match() const {
    return data_->allowed_to_be_default_match;
  }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadType(UserType* output) {
    auto pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetAssociatedKeywordDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadAssociatedKeyword(UserType* output) {
    auto pointer = data_->associated_keyword.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetKeywordDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadKeyword(UserType* output) {
    auto pointer = data_->keyword.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  bool starred() const {
    return data_->starred;
  }
  int32_t duplicates() const {
    return data_->duplicates;
  }
  bool from_previous() const {
    return data_->from_previous;
  }
  inline void GetAdditionalInfoDataView(
      mojo::ArrayDataView<AutocompleteAdditionalInfoDataView>* output);

  template <typename UserType>
  bool ReadAdditionalInfo(UserType* output) {
    auto pointer = data_->additional_info.Get();
    return mojo::internal::Deserialize<mojo::Array<::mojom::AutocompleteAdditionalInfoPtr>>(
        pointer, output, context_);
  }
 private:
  internal::AutocompleteMatch_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojom::AutocompleteMatchDataView> {
  using MojomType = ::mojom::AutocompleteMatchPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojom {



class  AutocompleteResultsForProvider {
 public:
  using DataView = AutocompleteResultsForProviderDataView;
  using Data_ = internal::AutocompleteResultsForProvider_Data;

  static AutocompleteResultsForProviderPtr New();

  template <typename U>
  static AutocompleteResultsForProviderPtr From(const U& u) {
    return mojo::TypeConverter<AutocompleteResultsForProviderPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AutocompleteResultsForProvider>::Convert(*this);
  }

  AutocompleteResultsForProvider();
  ~AutocompleteResultsForProvider();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AutocompleteResultsForProviderPtr>
  AutocompleteResultsForProviderPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, AutocompleteResultsForProvider>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        AutocompleteResultsForProviderPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        AutocompleteResultsForProviderPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  mojo::String provider_name;
  mojo::Array<AutocompleteMatchPtr> results;
 private:
  DISALLOW_COPY_AND_ASSIGN(AutocompleteResultsForProvider);
};

class AutocompleteResultsForProviderDataView {
 public:
  AutocompleteResultsForProviderDataView() {}

  AutocompleteResultsForProviderDataView(
      internal::AutocompleteResultsForProvider_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetProviderNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadProviderName(UserType* output) {
    auto pointer = data_->provider_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetResultsDataView(
      mojo::ArrayDataView<AutocompleteMatchDataView>* output);

  template <typename UserType>
  bool ReadResults(UserType* output) {
    auto pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::Array<::mojom::AutocompleteMatchPtr>>(
        pointer, output, context_);
  }
 private:
  internal::AutocompleteResultsForProvider_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojom::AutocompleteResultsForProviderDataView> {
  using MojomType = ::mojom::AutocompleteResultsForProviderPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojom {



class  OmniboxResult {
 public:
  using DataView = OmniboxResultDataView;
  using Data_ = internal::OmniboxResult_Data;

  static OmniboxResultPtr New();

  template <typename U>
  static OmniboxResultPtr From(const U& u) {
    return mojo::TypeConverter<OmniboxResultPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, OmniboxResult>::Convert(*this);
  }

  OmniboxResult();
  ~OmniboxResult();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = OmniboxResultPtr>
  OmniboxResultPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, OmniboxResult>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        OmniboxResultPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        OmniboxResultPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  bool done;
  int32_t time_since_omnibox_started_ms;
  mojo::String host;
  bool is_typed_host;
  mojo::Array<AutocompleteMatchPtr> combined_results;
  mojo::Array<AutocompleteResultsForProviderPtr> results_by_provider;
 private:
  DISALLOW_COPY_AND_ASSIGN(OmniboxResult);
};

class OmniboxResultDataView {
 public:
  OmniboxResultDataView() {}

  OmniboxResultDataView(
      internal::OmniboxResult_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool done() const {
    return data_->done;
  }
  int32_t time_since_omnibox_started_ms() const {
    return data_->time_since_omnibox_started_ms;
  }
  inline void GetHostDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadHost(UserType* output) {
    auto pointer = data_->host.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  bool is_typed_host() const {
    return data_->is_typed_host;
  }
  inline void GetCombinedResultsDataView(
      mojo::ArrayDataView<AutocompleteMatchDataView>* output);

  template <typename UserType>
  bool ReadCombinedResults(UserType* output) {
    auto pointer = data_->combined_results.Get();
    return mojo::internal::Deserialize<mojo::Array<::mojom::AutocompleteMatchPtr>>(
        pointer, output, context_);
  }
  inline void GetResultsByProviderDataView(
      mojo::ArrayDataView<AutocompleteResultsForProviderDataView>* output);

  template <typename UserType>
  bool ReadResultsByProvider(UserType* output) {
    auto pointer = data_->results_by_provider.Get();
    return mojo::internal::Deserialize<mojo::Array<::mojom::AutocompleteResultsForProviderPtr>>(
        pointer, output, context_);
  }
 private:
  internal::OmniboxResult_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojom::OmniboxResultDataView> {
  using MojomType = ::mojom::OmniboxResultPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojom {


template <typename StructPtrType>
AutocompleteAdditionalInfoPtr AutocompleteAdditionalInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->key = mojo::internal::Clone(key);
  rv->value = mojo::internal::Clone(value);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AutocompleteAdditionalInfo>::value>::type*>
bool AutocompleteAdditionalInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->key, other.key))
    return false;
  if (!mojo::internal::Equals(this->value, other.value))
    return false;
  return true;
}

inline void AutocompleteAdditionalInfoDataView::GetKeyDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->key.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteAdditionalInfoDataView::GetValueDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->value.Get();
  *output = mojo::StringDataView(pointer, context_);
}

template <typename StructPtrType>
AutocompleteMatchPtr AutocompleteMatch::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->provider_name = mojo::internal::Clone(provider_name);
  rv->provider_done = mojo::internal::Clone(provider_done);
  rv->relevance = mojo::internal::Clone(relevance);
  rv->deletable = mojo::internal::Clone(deletable);
  rv->fill_into_edit = mojo::internal::Clone(fill_into_edit);
  rv->inline_autocompletion = mojo::internal::Clone(inline_autocompletion);
  rv->destination_url = mojo::internal::Clone(destination_url);
  rv->contents = mojo::internal::Clone(contents);
  rv->description = mojo::internal::Clone(description);
  rv->transition = mojo::internal::Clone(transition);
  rv->allowed_to_be_default_match = mojo::internal::Clone(allowed_to_be_default_match);
  rv->type = mojo::internal::Clone(type);
  rv->associated_keyword = mojo::internal::Clone(associated_keyword);
  rv->keyword = mojo::internal::Clone(keyword);
  rv->starred = mojo::internal::Clone(starred);
  rv->duplicates = mojo::internal::Clone(duplicates);
  rv->from_previous = mojo::internal::Clone(from_previous);
  rv->additional_info = mojo::internal::Clone(additional_info);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AutocompleteMatch>::value>::type*>
bool AutocompleteMatch::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->provider_name, other.provider_name))
    return false;
  if (!mojo::internal::Equals(this->provider_done, other.provider_done))
    return false;
  if (!mojo::internal::Equals(this->relevance, other.relevance))
    return false;
  if (!mojo::internal::Equals(this->deletable, other.deletable))
    return false;
  if (!mojo::internal::Equals(this->fill_into_edit, other.fill_into_edit))
    return false;
  if (!mojo::internal::Equals(this->inline_autocompletion, other.inline_autocompletion))
    return false;
  if (!mojo::internal::Equals(this->destination_url, other.destination_url))
    return false;
  if (!mojo::internal::Equals(this->contents, other.contents))
    return false;
  if (!mojo::internal::Equals(this->description, other.description))
    return false;
  if (!mojo::internal::Equals(this->transition, other.transition))
    return false;
  if (!mojo::internal::Equals(this->allowed_to_be_default_match, other.allowed_to_be_default_match))
    return false;
  if (!mojo::internal::Equals(this->type, other.type))
    return false;
  if (!mojo::internal::Equals(this->associated_keyword, other.associated_keyword))
    return false;
  if (!mojo::internal::Equals(this->keyword, other.keyword))
    return false;
  if (!mojo::internal::Equals(this->starred, other.starred))
    return false;
  if (!mojo::internal::Equals(this->duplicates, other.duplicates))
    return false;
  if (!mojo::internal::Equals(this->from_previous, other.from_previous))
    return false;
  if (!mojo::internal::Equals(this->additional_info, other.additional_info))
    return false;
  return true;
}

inline void AutocompleteMatchDataView::GetProviderNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->provider_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetFillIntoEditDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->fill_into_edit.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetInlineAutocompletionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->inline_autocompletion.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetDestinationUrlDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->destination_url.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetContentsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->contents.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetAssociatedKeywordDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->associated_keyword.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetKeywordDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->keyword.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteMatchDataView::GetAdditionalInfoDataView(
    mojo::ArrayDataView<AutocompleteAdditionalInfoDataView>* output) {
  auto pointer = data_->additional_info.Get();
  *output = mojo::ArrayDataView<AutocompleteAdditionalInfoDataView>(pointer, context_);
}

template <typename StructPtrType>
AutocompleteResultsForProviderPtr AutocompleteResultsForProvider::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->provider_name = mojo::internal::Clone(provider_name);
  rv->results = mojo::internal::Clone(results);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, AutocompleteResultsForProvider>::value>::type*>
bool AutocompleteResultsForProvider::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->provider_name, other.provider_name))
    return false;
  if (!mojo::internal::Equals(this->results, other.results))
    return false;
  return true;
}

inline void AutocompleteResultsForProviderDataView::GetProviderNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->provider_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void AutocompleteResultsForProviderDataView::GetResultsDataView(
    mojo::ArrayDataView<AutocompleteMatchDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<AutocompleteMatchDataView>(pointer, context_);
}

template <typename StructPtrType>
OmniboxResultPtr OmniboxResult::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->done = mojo::internal::Clone(done);
  rv->time_since_omnibox_started_ms = mojo::internal::Clone(time_since_omnibox_started_ms);
  rv->host = mojo::internal::Clone(host);
  rv->is_typed_host = mojo::internal::Clone(is_typed_host);
  rv->combined_results = mojo::internal::Clone(combined_results);
  rv->results_by_provider = mojo::internal::Clone(results_by_provider);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, OmniboxResult>::value>::type*>
bool OmniboxResult::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->done, other.done))
    return false;
  if (!mojo::internal::Equals(this->time_since_omnibox_started_ms, other.time_since_omnibox_started_ms))
    return false;
  if (!mojo::internal::Equals(this->host, other.host))
    return false;
  if (!mojo::internal::Equals(this->is_typed_host, other.is_typed_host))
    return false;
  if (!mojo::internal::Equals(this->combined_results, other.combined_results))
    return false;
  if (!mojo::internal::Equals(this->results_by_provider, other.results_by_provider))
    return false;
  return true;
}

inline void OmniboxResultDataView::GetHostDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->host.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void OmniboxResultDataView::GetCombinedResultsDataView(
    mojo::ArrayDataView<AutocompleteMatchDataView>* output) {
  auto pointer = data_->combined_results.Get();
  *output = mojo::ArrayDataView<AutocompleteMatchDataView>(pointer, context_);
}
inline void OmniboxResultDataView::GetResultsByProviderDataView(
    mojo::ArrayDataView<AutocompleteResultsForProviderDataView>* output) {
  auto pointer = data_->results_by_provider.Get();
  *output = mojo::ArrayDataView<AutocompleteResultsForProviderDataView>(pointer, context_);
}



}  // namespace mojom

namespace mojo {


template <>
struct  StructTraits<::mojom::AutocompleteAdditionalInfo, ::mojom::AutocompleteAdditionalInfoPtr> {
  static bool IsNull(const ::mojom::AutocompleteAdditionalInfoPtr& input) { return !input; }
  static void SetToNull(::mojom::AutocompleteAdditionalInfoPtr* output) { output->reset(); }
  static decltype(::mojom::AutocompleteAdditionalInfo::key)& key(
      ::mojom::AutocompleteAdditionalInfoPtr& input) {
    return input->key;
  }
  static decltype(::mojom::AutocompleteAdditionalInfo::value)& value(
      ::mojom::AutocompleteAdditionalInfoPtr& input) {
    return input->value;
  }

  static bool Read(::mojom::AutocompleteAdditionalInfoDataView input, ::mojom::AutocompleteAdditionalInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::AutocompleteAdditionalInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::AutocompleteAdditionalInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojom::internal::AutocompleteAdditionalInfo_Data);
    decltype(CallWithContext(Traits::key, input, custom_context)) in_key = CallWithContext(Traits::key, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_key, context);
    decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_value, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::AutocompleteAdditionalInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojom::internal::AutocompleteAdditionalInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::key, input, custom_context)) in_key = CallWithContext(Traits::key, input, custom_context);
      typename decltype(result->key)::BaseType* key_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_key, buffer, &key_ptr, context);
      result->key.Set(key_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->key.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null key in AutocompleteAdditionalInfo struct");
      decltype(CallWithContext(Traits::value, input, custom_context)) in_value = CallWithContext(Traits::value, input, custom_context);
      typename decltype(result->value)::BaseType* value_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_value, buffer, &value_ptr, context);
      result->value.Set(value_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->value.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null value in AutocompleteAdditionalInfo struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::AutocompleteAdditionalInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::AutocompleteAdditionalInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojom::AutocompleteMatch, ::mojom::AutocompleteMatchPtr> {
  static bool IsNull(const ::mojom::AutocompleteMatchPtr& input) { return !input; }
  static void SetToNull(::mojom::AutocompleteMatchPtr* output) { output->reset(); }
  static decltype(::mojom::AutocompleteMatch::provider_name)& provider_name(
      ::mojom::AutocompleteMatchPtr& input) {
    return input->provider_name;
  }
  static decltype(::mojom::AutocompleteMatch::provider_done) provider_done(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->provider_done;
  }
  static decltype(::mojom::AutocompleteMatch::relevance) relevance(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->relevance;
  }
  static decltype(::mojom::AutocompleteMatch::deletable) deletable(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->deletable;
  }
  static decltype(::mojom::AutocompleteMatch::fill_into_edit)& fill_into_edit(
      ::mojom::AutocompleteMatchPtr& input) {
    return input->fill_into_edit;
  }
  static decltype(::mojom::AutocompleteMatch::inline_autocompletion)& inline_autocompletion(
      ::mojom::AutocompleteMatchPtr& input) {
    return input->inline_autocompletion;
  }
  static decltype(::mojom::AutocompleteMatch::destination_url)& destination_url(
      ::mojom::AutocompleteMatchPtr& input) {
    return input->destination_url;
  }
  static decltype(::mojom::AutocompleteMatch::contents)& contents(
      ::mojom::AutocompleteMatchPtr& input) {
    return input->contents;
  }
  static decltype(::mojom::AutocompleteMatch::description)& description(
      ::mojom::AutocompleteMatchPtr& input) {
    return input->description;
  }
  static decltype(::mojom::AutocompleteMatch::transition) transition(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->transition;
  }
  static decltype(::mojom::AutocompleteMatch::allowed_to_be_default_match) allowed_to_be_default_match(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->allowed_to_be_default_match;
  }
  static decltype(::mojom::AutocompleteMatch::type)& type(
      ::mojom::AutocompleteMatchPtr& input) {
    return input->type;
  }
  static decltype(::mojom::AutocompleteMatch::associated_keyword)& associated_keyword(
      ::mojom::AutocompleteMatchPtr& input) {
    return input->associated_keyword;
  }
  static decltype(::mojom::AutocompleteMatch::keyword)& keyword(
      ::mojom::AutocompleteMatchPtr& input) {
    return input->keyword;
  }
  static decltype(::mojom::AutocompleteMatch::starred) starred(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->starred;
  }
  static decltype(::mojom::AutocompleteMatch::duplicates) duplicates(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->duplicates;
  }
  static decltype(::mojom::AutocompleteMatch::from_previous) from_previous(
      const ::mojom::AutocompleteMatchPtr& input) {
    return input->from_previous;
  }
  static decltype(::mojom::AutocompleteMatch::additional_info)& additional_info(
      ::mojom::AutocompleteMatchPtr& input) {
    return input->additional_info;
  }

  static bool Read(::mojom::AutocompleteMatchDataView input, ::mojom::AutocompleteMatchPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::AutocompleteMatchPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::AutocompleteMatch, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojom::internal::AutocompleteMatch_Data);
    decltype(CallWithContext(Traits::provider_name, input, custom_context)) in_provider_name = CallWithContext(Traits::provider_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_provider_name, context);
    decltype(CallWithContext(Traits::fill_into_edit, input, custom_context)) in_fill_into_edit = CallWithContext(Traits::fill_into_edit, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_fill_into_edit, context);
    decltype(CallWithContext(Traits::inline_autocompletion, input, custom_context)) in_inline_autocompletion = CallWithContext(Traits::inline_autocompletion, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_inline_autocompletion, context);
    decltype(CallWithContext(Traits::destination_url, input, custom_context)) in_destination_url = CallWithContext(Traits::destination_url, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_destination_url, context);
    decltype(CallWithContext(Traits::contents, input, custom_context)) in_contents = CallWithContext(Traits::contents, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_contents, context);
    decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_description, context);
    decltype(CallWithContext(Traits::type, input, custom_context)) in_type = CallWithContext(Traits::type, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_type, context);
    decltype(CallWithContext(Traits::associated_keyword, input, custom_context)) in_associated_keyword = CallWithContext(Traits::associated_keyword, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_associated_keyword, context);
    decltype(CallWithContext(Traits::keyword, input, custom_context)) in_keyword = CallWithContext(Traits::keyword, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_keyword, context);
    decltype(CallWithContext(Traits::additional_info, input, custom_context)) in_additional_info = CallWithContext(Traits::additional_info, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::mojom::AutocompleteAdditionalInfoPtr>>(
        in_additional_info, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::AutocompleteMatch_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojom::internal::AutocompleteMatch_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::provider_name, input, custom_context)) in_provider_name = CallWithContext(Traits::provider_name, input, custom_context);
      typename decltype(result->provider_name)::BaseType* provider_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_provider_name, buffer, &provider_name_ptr, context);
      result->provider_name.Set(provider_name_ptr);
      result->provider_done = CallWithContext(Traits::provider_done, input, custom_context);
      result->relevance = CallWithContext(Traits::relevance, input, custom_context);
      result->deletable = CallWithContext(Traits::deletable, input, custom_context);
      decltype(CallWithContext(Traits::fill_into_edit, input, custom_context)) in_fill_into_edit = CallWithContext(Traits::fill_into_edit, input, custom_context);
      typename decltype(result->fill_into_edit)::BaseType* fill_into_edit_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_fill_into_edit, buffer, &fill_into_edit_ptr, context);
      result->fill_into_edit.Set(fill_into_edit_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->fill_into_edit.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null fill_into_edit in AutocompleteMatch struct");
      decltype(CallWithContext(Traits::inline_autocompletion, input, custom_context)) in_inline_autocompletion = CallWithContext(Traits::inline_autocompletion, input, custom_context);
      typename decltype(result->inline_autocompletion)::BaseType* inline_autocompletion_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_inline_autocompletion, buffer, &inline_autocompletion_ptr, context);
      result->inline_autocompletion.Set(inline_autocompletion_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->inline_autocompletion.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null inline_autocompletion in AutocompleteMatch struct");
      decltype(CallWithContext(Traits::destination_url, input, custom_context)) in_destination_url = CallWithContext(Traits::destination_url, input, custom_context);
      typename decltype(result->destination_url)::BaseType* destination_url_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_destination_url, buffer, &destination_url_ptr, context);
      result->destination_url.Set(destination_url_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->destination_url.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null destination_url in AutocompleteMatch struct");
      decltype(CallWithContext(Traits::contents, input, custom_context)) in_contents = CallWithContext(Traits::contents, input, custom_context);
      typename decltype(result->contents)::BaseType* contents_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_contents, buffer, &contents_ptr, context);
      result->contents.Set(contents_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->contents.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null contents in AutocompleteMatch struct");
      decltype(CallWithContext(Traits::description, input, custom_context)) in_description = CallWithContext(Traits::description, input, custom_context);
      typename decltype(result->description)::BaseType* description_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_description, buffer, &description_ptr, context);
      result->description.Set(description_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->description.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null description in AutocompleteMatch struct");
      result->transition = CallWithContext(Traits::transition, input, custom_context);
      result->allowed_to_be_default_match = CallWithContext(Traits::allowed_to_be_default_match, input, custom_context);
      decltype(CallWithContext(Traits::type, input, custom_context)) in_type = CallWithContext(Traits::type, input, custom_context);
      typename decltype(result->type)::BaseType* type_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_type, buffer, &type_ptr, context);
      result->type.Set(type_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->type.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null type in AutocompleteMatch struct");
      decltype(CallWithContext(Traits::associated_keyword, input, custom_context)) in_associated_keyword = CallWithContext(Traits::associated_keyword, input, custom_context);
      typename decltype(result->associated_keyword)::BaseType* associated_keyword_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_associated_keyword, buffer, &associated_keyword_ptr, context);
      result->associated_keyword.Set(associated_keyword_ptr);
      decltype(CallWithContext(Traits::keyword, input, custom_context)) in_keyword = CallWithContext(Traits::keyword, input, custom_context);
      typename decltype(result->keyword)::BaseType* keyword_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_keyword, buffer, &keyword_ptr, context);
      result->keyword.Set(keyword_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->keyword.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null keyword in AutocompleteMatch struct");
      result->starred = CallWithContext(Traits::starred, input, custom_context);
      result->duplicates = CallWithContext(Traits::duplicates, input, custom_context);
      result->from_previous = CallWithContext(Traits::from_previous, input, custom_context);
      decltype(CallWithContext(Traits::additional_info, input, custom_context)) in_additional_info = CallWithContext(Traits::additional_info, input, custom_context);
      typename decltype(result->additional_info)::BaseType* additional_info_ptr;
      const mojo::internal::ContainerValidateParams additional_info_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::mojom::AutocompleteAdditionalInfoPtr>>(
          in_additional_info, buffer, &additional_info_ptr, &additional_info_validate_params,
          context);
      result->additional_info.Set(additional_info_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->additional_info.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null additional_info in AutocompleteMatch struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::AutocompleteMatch_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::AutocompleteMatchDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojom::AutocompleteResultsForProvider, ::mojom::AutocompleteResultsForProviderPtr> {
  static bool IsNull(const ::mojom::AutocompleteResultsForProviderPtr& input) { return !input; }
  static void SetToNull(::mojom::AutocompleteResultsForProviderPtr* output) { output->reset(); }
  static decltype(::mojom::AutocompleteResultsForProvider::provider_name)& provider_name(
      ::mojom::AutocompleteResultsForProviderPtr& input) {
    return input->provider_name;
  }
  static decltype(::mojom::AutocompleteResultsForProvider::results)& results(
      ::mojom::AutocompleteResultsForProviderPtr& input) {
    return input->results;
  }

  static bool Read(::mojom::AutocompleteResultsForProviderDataView input, ::mojom::AutocompleteResultsForProviderPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::AutocompleteResultsForProviderPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::AutocompleteResultsForProvider, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojom::internal::AutocompleteResultsForProvider_Data);
    decltype(CallWithContext(Traits::provider_name, input, custom_context)) in_provider_name = CallWithContext(Traits::provider_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_provider_name, context);
    decltype(CallWithContext(Traits::results, input, custom_context)) in_results = CallWithContext(Traits::results, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::mojom::AutocompleteMatchPtr>>(
        in_results, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::AutocompleteResultsForProvider_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojom::internal::AutocompleteResultsForProvider_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::provider_name, input, custom_context)) in_provider_name = CallWithContext(Traits::provider_name, input, custom_context);
      typename decltype(result->provider_name)::BaseType* provider_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_provider_name, buffer, &provider_name_ptr, context);
      result->provider_name.Set(provider_name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->provider_name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null provider_name in AutocompleteResultsForProvider struct");
      decltype(CallWithContext(Traits::results, input, custom_context)) in_results = CallWithContext(Traits::results, input, custom_context);
      typename decltype(result->results)::BaseType* results_ptr;
      const mojo::internal::ContainerValidateParams results_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::mojom::AutocompleteMatchPtr>>(
          in_results, buffer, &results_ptr, &results_validate_params,
          context);
      result->results.Set(results_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->results.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null results in AutocompleteResultsForProvider struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::AutocompleteResultsForProvider_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::AutocompleteResultsForProviderDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojom::OmniboxResult, ::mojom::OmniboxResultPtr> {
  static bool IsNull(const ::mojom::OmniboxResultPtr& input) { return !input; }
  static void SetToNull(::mojom::OmniboxResultPtr* output) { output->reset(); }
  static decltype(::mojom::OmniboxResult::done) done(
      const ::mojom::OmniboxResultPtr& input) {
    return input->done;
  }
  static decltype(::mojom::OmniboxResult::time_since_omnibox_started_ms) time_since_omnibox_started_ms(
      const ::mojom::OmniboxResultPtr& input) {
    return input->time_since_omnibox_started_ms;
  }
  static decltype(::mojom::OmniboxResult::host)& host(
      ::mojom::OmniboxResultPtr& input) {
    return input->host;
  }
  static decltype(::mojom::OmniboxResult::is_typed_host) is_typed_host(
      const ::mojom::OmniboxResultPtr& input) {
    return input->is_typed_host;
  }
  static decltype(::mojom::OmniboxResult::combined_results)& combined_results(
      ::mojom::OmniboxResultPtr& input) {
    return input->combined_results;
  }
  static decltype(::mojom::OmniboxResult::results_by_provider)& results_by_provider(
      ::mojom::OmniboxResultPtr& input) {
    return input->results_by_provider;
  }

  static bool Read(::mojom::OmniboxResultDataView input, ::mojom::OmniboxResultPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::OmniboxResultPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::OmniboxResult, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojom::internal::OmniboxResult_Data);
    decltype(CallWithContext(Traits::host, input, custom_context)) in_host = CallWithContext(Traits::host, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_host, context);
    decltype(CallWithContext(Traits::combined_results, input, custom_context)) in_combined_results = CallWithContext(Traits::combined_results, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::mojom::AutocompleteMatchPtr>>(
        in_combined_results, context);
    decltype(CallWithContext(Traits::results_by_provider, input, custom_context)) in_results_by_provider = CallWithContext(Traits::results_by_provider, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::Array<::mojom::AutocompleteResultsForProviderPtr>>(
        in_results_by_provider, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::OmniboxResult_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojom::internal::OmniboxResult_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->done = CallWithContext(Traits::done, input, custom_context);
      result->time_since_omnibox_started_ms = CallWithContext(Traits::time_since_omnibox_started_ms, input, custom_context);
      decltype(CallWithContext(Traits::host, input, custom_context)) in_host = CallWithContext(Traits::host, input, custom_context);
      typename decltype(result->host)::BaseType* host_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_host, buffer, &host_ptr, context);
      result->host.Set(host_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->host.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null host in OmniboxResult struct");
      result->is_typed_host = CallWithContext(Traits::is_typed_host, input, custom_context);
      decltype(CallWithContext(Traits::combined_results, input, custom_context)) in_combined_results = CallWithContext(Traits::combined_results, input, custom_context);
      typename decltype(result->combined_results)::BaseType* combined_results_ptr;
      const mojo::internal::ContainerValidateParams combined_results_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::mojom::AutocompleteMatchPtr>>(
          in_combined_results, buffer, &combined_results_ptr, &combined_results_validate_params,
          context);
      result->combined_results.Set(combined_results_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->combined_results.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null combined_results in OmniboxResult struct");
      decltype(CallWithContext(Traits::results_by_provider, input, custom_context)) in_results_by_provider = CallWithContext(Traits::results_by_provider, input, custom_context);
      typename decltype(result->results_by_provider)::BaseType* results_by_provider_ptr;
      const mojo::internal::ContainerValidateParams results_by_provider_validate_params(
          0, false, nullptr);
      mojo::internal::Serialize<mojo::Array<::mojom::AutocompleteResultsForProviderPtr>>(
          in_results_by_provider, buffer, &results_by_provider_ptr, &results_by_provider_validate_params,
          context);
      result->results_by_provider.Set(results_by_provider_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->results_by_provider.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null results_by_provider in OmniboxResult struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::OmniboxResult_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::OmniboxResultDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_H_