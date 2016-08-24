// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_ENGAGEMENT_SITE_ENGAGEMENT_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_ENGAGEMENT_SITE_ENGAGEMENT_MOJOM_H_

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
#include "chrome/browser/ui/webui/engagement/site_engagement.mojom-shared.h"
#include "url/mojo/url.mojom.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "url/gurl.h"


namespace mojom {
class SiteEngagementUIHandler;
using SiteEngagementUIHandlerPtr = mojo::InterfacePtr<SiteEngagementUIHandler>;
using SiteEngagementUIHandlerPtrInfo = mojo::InterfacePtrInfo<SiteEngagementUIHandler>;
using SiteEngagementUIHandlerRequest = mojo::InterfaceRequest<SiteEngagementUIHandler>;
using SiteEngagementUIHandlerAssociatedPtr =
    mojo::AssociatedInterfacePtr<SiteEngagementUIHandler>;
using SiteEngagementUIHandlerAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<SiteEngagementUIHandler>;
using SiteEngagementUIHandlerAssociatedRequest =
    mojo::AssociatedInterfaceRequest<SiteEngagementUIHandler>;

class SiteEngagementInfo;
class SiteEngagementInfoDataView;
using SiteEngagementInfoPtr = mojo::StructPtr<SiteEngagementInfo>;


class SiteEngagementUIHandlerProxy;
class SiteEngagementUIHandlerStub;

class SiteEngagementUIHandlerRequestValidator;
class SiteEngagementUIHandlerResponseValidator;

class  SiteEngagementUIHandler {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = SiteEngagementUIHandlerProxy;
  using Stub_ = SiteEngagementUIHandlerStub;

  using RequestValidator_ = SiteEngagementUIHandlerRequestValidator;
  using ResponseValidator_ = SiteEngagementUIHandlerResponseValidator;
  virtual ~SiteEngagementUIHandler() {}


  using GetSiteEngagementInfoCallback = base::Callback<void(mojo::Array<SiteEngagementInfoPtr>)>;
  virtual void GetSiteEngagementInfo(const GetSiteEngagementInfoCallback& callback) = 0;

  virtual void SetSiteEngagementScoreForOrigin(const GURL& origin, double score) = 0;
};

class  SiteEngagementUIHandlerProxy
    : public SiteEngagementUIHandler,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit SiteEngagementUIHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetSiteEngagementInfo(const GetSiteEngagementInfoCallback& callback) override;
  void SetSiteEngagementScoreForOrigin(const GURL& origin, double score) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  SiteEngagementUIHandlerStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  SiteEngagementUIHandlerStub();
  ~SiteEngagementUIHandlerStub() override;
  void set_sink(SiteEngagementUIHandler* sink) { sink_ = sink; }
  SiteEngagementUIHandler* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  SiteEngagementUIHandler* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  SiteEngagementUIHandlerRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit SiteEngagementUIHandlerRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  SiteEngagementUIHandlerResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit SiteEngagementUIHandlerResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};





class  SiteEngagementInfo {
 public:
  using DataView = SiteEngagementInfoDataView;
  using Data_ = internal::SiteEngagementInfo_Data;

  static SiteEngagementInfoPtr New();

  template <typename U>
  static SiteEngagementInfoPtr From(const U& u) {
    return mojo::TypeConverter<SiteEngagementInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SiteEngagementInfo>::Convert(*this);
  }

  SiteEngagementInfo();
  ~SiteEngagementInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SiteEngagementInfoPtr>
  SiteEngagementInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, SiteEngagementInfo>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        SiteEngagementInfoPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        SiteEngagementInfoPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  GURL origin;
  double score;
};

class SiteEngagementInfoDataView {
 public:
  SiteEngagementInfoDataView() {}

  SiteEngagementInfoDataView(
      internal::SiteEngagementInfo_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetOriginDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  bool ReadOrigin(UserType* output) {
    auto pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlPtr>(
        pointer, output, context_);
  }
  double score() const {
    return data_->score;
  }
 private:
  internal::SiteEngagementInfo_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojom::SiteEngagementInfoDataView> {
  using MojomType = ::mojom::SiteEngagementInfoPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojom {


template <typename StructPtrType>
SiteEngagementInfoPtr SiteEngagementInfo::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->origin = mojo::internal::Clone(origin);
  rv->score = mojo::internal::Clone(score);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, SiteEngagementInfo>::value>::type*>
bool SiteEngagementInfo::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->origin, other.origin))
    return false;
  if (!mojo::internal::Equals(this->score, other.score))
    return false;
  return true;
}

inline void SiteEngagementInfoDataView::GetOriginDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::UrlDataView(pointer, context_);
}



}  // namespace mojom

namespace mojo {


template <>
struct  StructTraits<::mojom::SiteEngagementInfo, ::mojom::SiteEngagementInfoPtr> {
  static bool IsNull(const ::mojom::SiteEngagementInfoPtr& input) { return !input; }
  static void SetToNull(::mojom::SiteEngagementInfoPtr* output) { output->reset(); }
  static decltype(::mojom::SiteEngagementInfo::origin)& origin(
      ::mojom::SiteEngagementInfoPtr& input) {
    return input->origin;
  }
  static decltype(::mojom::SiteEngagementInfo::score) score(
      const ::mojom::SiteEngagementInfoPtr& input) {
    return input->score;
  }

  static bool Read(::mojom::SiteEngagementInfoDataView input, ::mojom::SiteEngagementInfoPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::SiteEngagementInfoPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::SiteEngagementInfo, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojom::internal::SiteEngagementInfo_Data);
    decltype(CallWithContext(Traits::origin, input, custom_context)) in_origin = CallWithContext(Traits::origin, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::url::mojom::UrlPtr>(
        in_origin, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::SiteEngagementInfo_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojom::internal::SiteEngagementInfo_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::origin, input, custom_context)) in_origin = CallWithContext(Traits::origin, input, custom_context);
      typename decltype(result->origin)::BaseType* origin_ptr;
      mojo::internal::Serialize<::url::mojom::UrlPtr>(
          in_origin, buffer, &origin_ptr, context);
      result->origin.Set(origin_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->origin.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null origin in SiteEngagementInfo struct");
      result->score = CallWithContext(Traits::score, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::SiteEngagementInfo_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::SiteEngagementInfoDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_ENGAGEMENT_SITE_ENGAGEMENT_MOJOM_H_