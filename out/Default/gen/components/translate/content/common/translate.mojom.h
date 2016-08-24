// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_H_
#define COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_H_

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
#include "components/translate/content/common/translate.mojom-shared.h"
#include "mojo/common/common_custom_types.mojom.h"
#include "url/mojo/url.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "url/gurl.h"
#include "base/files/file_path.h"
#include "base/values.h"
#include "base/version.h"
#include "base/time/time.h"
#include "base/strings/string16.h"
#include "components/translate/core/common/translate_errors.h"
#include "components/translate/core/common/language_detection_details.h"


namespace translate {
namespace mojom {
class Page;
using PagePtr = mojo::InterfacePtr<Page>;
using PagePtrInfo = mojo::InterfacePtrInfo<Page>;
using PageRequest = mojo::InterfaceRequest<Page>;
using PageAssociatedPtr =
    mojo::AssociatedInterfacePtr<Page>;
using PageAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Page>;
using PageAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Page>;

class ContentTranslateDriver;
using ContentTranslateDriverPtr = mojo::InterfacePtr<ContentTranslateDriver>;
using ContentTranslateDriverPtrInfo = mojo::InterfacePtrInfo<ContentTranslateDriver>;
using ContentTranslateDriverRequest = mojo::InterfaceRequest<ContentTranslateDriver>;
using ContentTranslateDriverAssociatedPtr =
    mojo::AssociatedInterfacePtr<ContentTranslateDriver>;
using ContentTranslateDriverAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ContentTranslateDriver>;
using ContentTranslateDriverAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ContentTranslateDriver>;

class LanguageDetectionDetails;
class LanguageDetectionDetailsDataView;
using LanguageDetectionDetailsPtr = mojo::StructPtr<LanguageDetectionDetails>;


class PageProxy;
class PageStub;

class PageRequestValidator;
class PageResponseValidator;

class  Page {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = PageProxy;
  using Stub_ = PageStub;

  using RequestValidator_ = PageRequestValidator;
  using ResponseValidator_ = PageResponseValidator;
  virtual ~Page() {}


  using TranslateCallback = base::Callback<void(bool, const std::string&, const std::string&, translate::TranslateErrors::Type)>;
  virtual void Translate(const std::string& translate_script, const std::string& source_lang, const std::string& target_lang, const TranslateCallback& callback) = 0;

  virtual void RevertTranslation() = 0;
};

class ContentTranslateDriverProxy;
class ContentTranslateDriverStub;

class ContentTranslateDriverRequestValidator;

class  ContentTranslateDriver {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ContentTranslateDriverProxy;
  using Stub_ = ContentTranslateDriverStub;

  using RequestValidator_ = ContentTranslateDriverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  virtual ~ContentTranslateDriver() {}

  virtual void RegisterPage(PagePtr page, const translate::LanguageDetectionDetails& details, bool page_needs_translation) = 0;
};

class  PageProxy
    : public Page,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit PageProxy(mojo::MessageReceiverWithResponder* receiver);
  void Translate(const std::string& translate_script, const std::string& source_lang, const std::string& target_lang, const TranslateCallback& callback) override;
  void RevertTranslation() override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};

class  ContentTranslateDriverProxy
    : public ContentTranslateDriver,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ContentTranslateDriverProxy(mojo::MessageReceiverWithResponder* receiver);
  void RegisterPage(PagePtr page, const translate::LanguageDetectionDetails& details, bool page_needs_translation) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  PageStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  PageStub();
  ~PageStub() override;
  void set_sink(Page* sink) { sink_ = sink; }
  Page* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Page* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ContentTranslateDriverStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ContentTranslateDriverStub();
  ~ContentTranslateDriverStub() override;
  void set_sink(ContentTranslateDriver* sink) { sink_ = sink; }
  ContentTranslateDriver* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ContentTranslateDriver* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  PageRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PageRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ContentTranslateDriverRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ContentTranslateDriverRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  PageResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit PageResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class  LanguageDetectionDetails {
 public:
  using DataView = LanguageDetectionDetailsDataView;
  using Data_ = internal::LanguageDetectionDetails_Data;

  static LanguageDetectionDetailsPtr New();

  template <typename U>
  static LanguageDetectionDetailsPtr From(const U& u) {
    return mojo::TypeConverter<LanguageDetectionDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LanguageDetectionDetails>::Convert(*this);
  }

  LanguageDetectionDetails();
  ~LanguageDetectionDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LanguageDetectionDetailsPtr>
  LanguageDetectionDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, LanguageDetectionDetails>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        LanguageDetectionDetailsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        LanguageDetectionDetailsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  base::Time time;
  GURL url;
  std::string content_language;
  std::string cld_language;
  bool is_cld_reliable;
  bool has_notranslate;
  std::string html_root_language;
  std::string adopted_language;
  std::string contents;
};

class LanguageDetectionDetailsDataView {
 public:
  LanguageDetectionDetailsDataView() {}

  LanguageDetectionDetailsDataView(
      internal::LanguageDetectionDetails_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetTimeDataView(
      ::mojo::common::mojom::TimeDataView* output);

  template <typename UserType>
  bool ReadTime(UserType* output) {
    auto pointer = data_->time.Get();
    return mojo::internal::Deserialize<::mojo::common::mojom::TimePtr>(
        pointer, output, context_);
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadUrl(UserType* output) {
    auto pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  inline void GetContentLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadContentLanguage(UserType* output) {
    auto pointer = data_->content_language.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetCldLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadCldLanguage(UserType* output) {
    auto pointer = data_->cld_language.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  bool is_cld_reliable() const {
    return data_->is_cld_reliable;
  }
  bool has_notranslate() const {
    return data_->has_notranslate;
  }
  inline void GetHtmlRootLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadHtmlRootLanguage(UserType* output) {
    auto pointer = data_->html_root_language.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetAdoptedLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadAdoptedLanguage(UserType* output) {
    auto pointer = data_->adopted_language.Get();
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
 private:
  internal::LanguageDetectionDetails_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace translate

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::translate::mojom::LanguageDetectionDetailsDataView> {
  using MojomType = ::translate::mojom::LanguageDetectionDetailsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace translate {
namespace mojom {


template <typename StructPtrType>
LanguageDetectionDetailsPtr LanguageDetectionDetails::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->time = mojo::internal::Clone(time);
  rv->url = mojo::internal::Clone(url);
  rv->content_language = mojo::internal::Clone(content_language);
  rv->cld_language = mojo::internal::Clone(cld_language);
  rv->is_cld_reliable = mojo::internal::Clone(is_cld_reliable);
  rv->has_notranslate = mojo::internal::Clone(has_notranslate);
  rv->html_root_language = mojo::internal::Clone(html_root_language);
  rv->adopted_language = mojo::internal::Clone(adopted_language);
  rv->contents = mojo::internal::Clone(contents);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, LanguageDetectionDetails>::value>::type*>
bool LanguageDetectionDetails::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->time, other.time))
    return false;
  if (!mojo::internal::Equals(this->url, other.url))
    return false;
  if (!mojo::internal::Equals(this->content_language, other.content_language))
    return false;
  if (!mojo::internal::Equals(this->cld_language, other.cld_language))
    return false;
  if (!mojo::internal::Equals(this->is_cld_reliable, other.is_cld_reliable))
    return false;
  if (!mojo::internal::Equals(this->has_notranslate, other.has_notranslate))
    return false;
  if (!mojo::internal::Equals(this->html_root_language, other.html_root_language))
    return false;
  if (!mojo::internal::Equals(this->adopted_language, other.adopted_language))
    return false;
  if (!mojo::internal::Equals(this->contents, other.contents))
    return false;
  return true;
}

inline void LanguageDetectionDetailsDataView::GetTimeDataView(
    ::mojo::common::mojom::TimeDataView* output) {
  auto pointer = data_->time.Get();
  *output = ::mojo::common::mojom::TimeDataView(pointer, context_);
}
inline void LanguageDetectionDetailsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}
inline void LanguageDetectionDetailsDataView::GetContentLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->content_language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LanguageDetectionDetailsDataView::GetCldLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->cld_language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LanguageDetectionDetailsDataView::GetHtmlRootLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->html_root_language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LanguageDetectionDetailsDataView::GetAdoptedLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->adopted_language.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void LanguageDetectionDetailsDataView::GetContentsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->contents.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace translate

namespace mojo {


template <>
struct  StructTraits<::translate::mojom::LanguageDetectionDetails, ::translate::mojom::LanguageDetectionDetailsPtr> {
  static bool IsNull(const ::translate::mojom::LanguageDetectionDetailsPtr& input) { return !input; }
  static void SetToNull(::translate::mojom::LanguageDetectionDetailsPtr* output) { output->reset(); }
  static decltype(::translate::mojom::LanguageDetectionDetails::time)& time(
      ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->time;
  }
  static decltype(::translate::mojom::LanguageDetectionDetails::url)& url(
      ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->url;
  }
  static decltype(::translate::mojom::LanguageDetectionDetails::content_language)& content_language(
      ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->content_language;
  }
  static decltype(::translate::mojom::LanguageDetectionDetails::cld_language)& cld_language(
      ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->cld_language;
  }
  static decltype(::translate::mojom::LanguageDetectionDetails::is_cld_reliable) is_cld_reliable(
      const ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->is_cld_reliable;
  }
  static decltype(::translate::mojom::LanguageDetectionDetails::has_notranslate) has_notranslate(
      const ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->has_notranslate;
  }
  static decltype(::translate::mojom::LanguageDetectionDetails::html_root_language)& html_root_language(
      ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->html_root_language;
  }
  static decltype(::translate::mojom::LanguageDetectionDetails::adopted_language)& adopted_language(
      ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->adopted_language;
  }
  static decltype(::translate::mojom::LanguageDetectionDetails::contents)& contents(
      ::translate::mojom::LanguageDetectionDetailsPtr& input) {
    return input->contents;
  }

  static bool Read(::translate::mojom::LanguageDetectionDetailsDataView input, ::translate::mojom::LanguageDetectionDetailsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::translate::mojom::LanguageDetectionDetailsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::translate::mojom::LanguageDetectionDetails, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::translate::mojom::internal::LanguageDetectionDetails_Data);
    decltype(CallWithContext(Traits::time, input, custom_context)) in_time = CallWithContext(Traits::time, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojo::common::mojom::TimePtr>(
        in_time, context);
    decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_url, context);
    decltype(CallWithContext(Traits::content_language, input, custom_context)) in_content_language = CallWithContext(Traits::content_language, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_content_language, context);
    decltype(CallWithContext(Traits::cld_language, input, custom_context)) in_cld_language = CallWithContext(Traits::cld_language, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_cld_language, context);
    decltype(CallWithContext(Traits::html_root_language, input, custom_context)) in_html_root_language = CallWithContext(Traits::html_root_language, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_html_root_language, context);
    decltype(CallWithContext(Traits::adopted_language, input, custom_context)) in_adopted_language = CallWithContext(Traits::adopted_language, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_adopted_language, context);
    decltype(CallWithContext(Traits::contents, input, custom_context)) in_contents = CallWithContext(Traits::contents, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_contents, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::translate::mojom::internal::LanguageDetectionDetails_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::translate::mojom::internal::LanguageDetectionDetails_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::time, input, custom_context)) in_time = CallWithContext(Traits::time, input, custom_context);
      typename decltype(result->time)::BaseType* time_ptr;
      mojo::internal::Serialize<::mojo::common::mojom::TimePtr>(
          in_time, buffer, &time_ptr, context);
      result->time.Set(time_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->time.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null time in LanguageDetectionDetails struct");
      decltype(CallWithContext(Traits::url, input, custom_context)) in_url = CallWithContext(Traits::url, input, custom_context);
      typename decltype(result->url)::BaseType* url_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_url, buffer, &url_ptr, context);
      result->url.Set(url_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->url.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null url in LanguageDetectionDetails struct");
      decltype(CallWithContext(Traits::content_language, input, custom_context)) in_content_language = CallWithContext(Traits::content_language, input, custom_context);
      typename decltype(result->content_language)::BaseType* content_language_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_content_language, buffer, &content_language_ptr, context);
      result->content_language.Set(content_language_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->content_language.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null content_language in LanguageDetectionDetails struct");
      decltype(CallWithContext(Traits::cld_language, input, custom_context)) in_cld_language = CallWithContext(Traits::cld_language, input, custom_context);
      typename decltype(result->cld_language)::BaseType* cld_language_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_cld_language, buffer, &cld_language_ptr, context);
      result->cld_language.Set(cld_language_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->cld_language.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null cld_language in LanguageDetectionDetails struct");
      result->is_cld_reliable = CallWithContext(Traits::is_cld_reliable, input, custom_context);
      result->has_notranslate = CallWithContext(Traits::has_notranslate, input, custom_context);
      decltype(CallWithContext(Traits::html_root_language, input, custom_context)) in_html_root_language = CallWithContext(Traits::html_root_language, input, custom_context);
      typename decltype(result->html_root_language)::BaseType* html_root_language_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_html_root_language, buffer, &html_root_language_ptr, context);
      result->html_root_language.Set(html_root_language_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->html_root_language.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null html_root_language in LanguageDetectionDetails struct");
      decltype(CallWithContext(Traits::adopted_language, input, custom_context)) in_adopted_language = CallWithContext(Traits::adopted_language, input, custom_context);
      typename decltype(result->adopted_language)::BaseType* adopted_language_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_adopted_language, buffer, &adopted_language_ptr, context);
      result->adopted_language.Set(adopted_language_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->adopted_language.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null adopted_language in LanguageDetectionDetails struct");
      decltype(CallWithContext(Traits::contents, input, custom_context)) in_contents = CallWithContext(Traits::contents, input, custom_context);
      typename decltype(result->contents)::BaseType* contents_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_contents, buffer, &contents_ptr, context);
      result->contents.Set(contents_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->contents.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null contents in LanguageDetectionDetails struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::translate::mojom::internal::LanguageDetectionDetails_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::translate::mojom::LanguageDetectionDetailsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // COMPONENTS_TRANSLATE_CONTENT_COMMON_TRANSLATE_MOJOM_H_