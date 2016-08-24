// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_H_
#define CHROME_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_H_

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
#include "chrome/common/resource_usage_reporter.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "third_party/skia/include/core/SkImageFilter.h"


namespace mojom {
class ResourceUsageReporter;
using ResourceUsageReporterPtr = mojo::InterfacePtr<ResourceUsageReporter>;
using ResourceUsageReporterPtrInfo = mojo::InterfacePtrInfo<ResourceUsageReporter>;
using ResourceUsageReporterRequest = mojo::InterfaceRequest<ResourceUsageReporter>;
using ResourceUsageReporterAssociatedPtr =
    mojo::AssociatedInterfacePtr<ResourceUsageReporter>;
using ResourceUsageReporterAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<ResourceUsageReporter>;
using ResourceUsageReporterAssociatedRequest =
    mojo::AssociatedInterfaceRequest<ResourceUsageReporter>;

class ResourceTypeStat;
class ResourceTypeStatDataView;
using ResourceTypeStatPtr = mojo::InlinedStructPtr<ResourceTypeStat>;

class ResourceTypeStats;
class ResourceTypeStatsDataView;
using ResourceTypeStatsPtr = mojo::StructPtr<ResourceTypeStats>;

class ResourceUsageData;
class ResourceUsageDataDataView;
using ResourceUsageDataPtr = mojo::StructPtr<ResourceUsageData>;


class ResourceUsageReporterProxy;
class ResourceUsageReporterStub;

class ResourceUsageReporterRequestValidator;
class ResourceUsageReporterResponseValidator;

class  ResourceUsageReporter {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = false;

  using Proxy_ = ResourceUsageReporterProxy;
  using Stub_ = ResourceUsageReporterStub;

  using RequestValidator_ = ResourceUsageReporterRequestValidator;
  using ResponseValidator_ = ResourceUsageReporterResponseValidator;
  virtual ~ResourceUsageReporter() {}


  using GetUsageDataCallback = base::Callback<void(ResourceUsageDataPtr)>;
  virtual void GetUsageData(const GetUsageDataCallback& callback) = 0;
};

class  ResourceUsageReporterProxy
    : public ResourceUsageReporter,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit ResourceUsageReporterProxy(mojo::MessageReceiverWithResponder* receiver);
  void GetUsageData(const GetUsageDataCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  ResourceUsageReporterStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  ResourceUsageReporterStub();
  ~ResourceUsageReporterStub() override;
  void set_sink(ResourceUsageReporter* sink) { sink_ = sink; }
  ResourceUsageReporter* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  ResourceUsageReporter* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  ResourceUsageReporterRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ResourceUsageReporterRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  ResourceUsageReporterResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit ResourceUsageReporterResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class  ResourceTypeStat {
 public:
  using DataView = ResourceTypeStatDataView;
  using Data_ = internal::ResourceTypeStat_Data;

  static ResourceTypeStatPtr New();

  template <typename U>
  static ResourceTypeStatPtr From(const U& u) {
    return mojo::TypeConverter<ResourceTypeStatPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResourceTypeStat>::Convert(*this);
  }

  ResourceTypeStat();
  ~ResourceTypeStat();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResourceTypeStatPtr>
  ResourceTypeStatPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ResourceTypeStat>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        ResourceTypeStatPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        ResourceTypeStatPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  uint64_t count;
  uint64_t size;
  uint64_t live_size;
  uint64_t decoded_size;
};

class ResourceTypeStatDataView {
 public:
  ResourceTypeStatDataView() {}

  ResourceTypeStatDataView(
      internal::ResourceTypeStat_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data) {}

  bool is_null() const { return !data_; }
  uint64_t count() const {
    return data_->count;
  }
  uint64_t size() const {
    return data_->size;
  }
  uint64_t live_size() const {
    return data_->live_size;
  }
  uint64_t decoded_size() const {
    return data_->decoded_size;
  }
 private:
  internal::ResourceTypeStat_Data* data_ = nullptr;
};



}  // namespace mojom

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojom::ResourceTypeStatDataView> {
  using MojomType = ::mojom::ResourceTypeStatPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojom {








class  ResourceTypeStats {
 public:
  using DataView = ResourceTypeStatsDataView;
  using Data_ = internal::ResourceTypeStats_Data;

  static ResourceTypeStatsPtr New();

  template <typename U>
  static ResourceTypeStatsPtr From(const U& u) {
    return mojo::TypeConverter<ResourceTypeStatsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResourceTypeStats>::Convert(*this);
  }

  ResourceTypeStats();
  ~ResourceTypeStats();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResourceTypeStatsPtr>
  ResourceTypeStatsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ResourceTypeStats>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        ResourceTypeStatsPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        ResourceTypeStatsPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  ResourceTypeStatPtr images;
  ResourceTypeStatPtr css_style_sheets;
  ResourceTypeStatPtr scripts;
  ResourceTypeStatPtr xsl_style_sheets;
  ResourceTypeStatPtr fonts;
  ResourceTypeStatPtr other;
 private:
  DISALLOW_COPY_AND_ASSIGN(ResourceTypeStats);
};

class ResourceTypeStatsDataView {
 public:
  ResourceTypeStatsDataView() {}

  ResourceTypeStatsDataView(
      internal::ResourceTypeStats_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetImagesDataView(
      ResourceTypeStatDataView* output);

  template <typename UserType>
  bool ReadImages(UserType* output) {
    auto pointer = data_->images.Get();
    return mojo::internal::Deserialize<::mojom::ResourceTypeStatPtr>(
        pointer, output, context_);
  }
  inline void GetCssStyleSheetsDataView(
      ResourceTypeStatDataView* output);

  template <typename UserType>
  bool ReadCssStyleSheets(UserType* output) {
    auto pointer = data_->css_style_sheets.Get();
    return mojo::internal::Deserialize<::mojom::ResourceTypeStatPtr>(
        pointer, output, context_);
  }
  inline void GetScriptsDataView(
      ResourceTypeStatDataView* output);

  template <typename UserType>
  bool ReadScripts(UserType* output) {
    auto pointer = data_->scripts.Get();
    return mojo::internal::Deserialize<::mojom::ResourceTypeStatPtr>(
        pointer, output, context_);
  }
  inline void GetXslStyleSheetsDataView(
      ResourceTypeStatDataView* output);

  template <typename UserType>
  bool ReadXslStyleSheets(UserType* output) {
    auto pointer = data_->xsl_style_sheets.Get();
    return mojo::internal::Deserialize<::mojom::ResourceTypeStatPtr>(
        pointer, output, context_);
  }
  inline void GetFontsDataView(
      ResourceTypeStatDataView* output);

  template <typename UserType>
  bool ReadFonts(UserType* output) {
    auto pointer = data_->fonts.Get();
    return mojo::internal::Deserialize<::mojom::ResourceTypeStatPtr>(
        pointer, output, context_);
  }
  inline void GetOtherDataView(
      ResourceTypeStatDataView* output);

  template <typename UserType>
  bool ReadOther(UserType* output) {
    auto pointer = data_->other.Get();
    return mojo::internal::Deserialize<::mojom::ResourceTypeStatPtr>(
        pointer, output, context_);
  }
 private:
  internal::ResourceTypeStats_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojom::ResourceTypeStatsDataView> {
  using MojomType = ::mojom::ResourceTypeStatsPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojom {



class  ResourceUsageData {
 public:
  using DataView = ResourceUsageDataDataView;
  using Data_ = internal::ResourceUsageData_Data;

  static ResourceUsageDataPtr New();

  template <typename U>
  static ResourceUsageDataPtr From(const U& u) {
    return mojo::TypeConverter<ResourceUsageDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResourceUsageData>::Convert(*this);
  }

  ResourceUsageData();
  ~ResourceUsageData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResourceUsageDataPtr>
  ResourceUsageDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, ResourceUsageData>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        ResourceUsageDataPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        ResourceUsageDataPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  bool reports_v8_stats;
  uint64_t v8_bytes_allocated;
  uint64_t v8_bytes_used;
  ResourceTypeStatsPtr web_cache_stats;
 private:
  DISALLOW_COPY_AND_ASSIGN(ResourceUsageData);
};

class ResourceUsageDataDataView {
 public:
  ResourceUsageDataDataView() {}

  ResourceUsageDataDataView(
      internal::ResourceUsageData_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  bool reports_v8_stats() const {
    return data_->reports_v8_stats;
  }
  uint64_t v8_bytes_allocated() const {
    return data_->v8_bytes_allocated;
  }
  uint64_t v8_bytes_used() const {
    return data_->v8_bytes_used;
  }
  inline void GetWebCacheStatsDataView(
      ResourceTypeStatsDataView* output);

  template <typename UserType>
  bool ReadWebCacheStats(UserType* output) {
    auto pointer = data_->web_cache_stats.Get();
    return mojo::internal::Deserialize<::mojom::ResourceTypeStatsPtr>(
        pointer, output, context_);
  }
 private:
  internal::ResourceUsageData_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::mojom::ResourceUsageDataDataView> {
  using MojomType = ::mojom::ResourceUsageDataPtr;
};
}  // namespace internal
}  // namespace mojo

namespace mojom {


template <typename StructPtrType>
ResourceTypeStatPtr ResourceTypeStat::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->count = mojo::internal::Clone(count);
  rv->size = mojo::internal::Clone(size);
  rv->live_size = mojo::internal::Clone(live_size);
  rv->decoded_size = mojo::internal::Clone(decoded_size);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ResourceTypeStat>::value>::type*>
bool ResourceTypeStat::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->count, other.count))
    return false;
  if (!mojo::internal::Equals(this->size, other.size))
    return false;
  if (!mojo::internal::Equals(this->live_size, other.live_size))
    return false;
  if (!mojo::internal::Equals(this->decoded_size, other.decoded_size))
    return false;
  return true;
}


template <typename StructPtrType>
ResourceTypeStatsPtr ResourceTypeStats::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->images = mojo::internal::Clone(images);
  rv->css_style_sheets = mojo::internal::Clone(css_style_sheets);
  rv->scripts = mojo::internal::Clone(scripts);
  rv->xsl_style_sheets = mojo::internal::Clone(xsl_style_sheets);
  rv->fonts = mojo::internal::Clone(fonts);
  rv->other = mojo::internal::Clone(other);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ResourceTypeStats>::value>::type*>
bool ResourceTypeStats::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->images, other.images))
    return false;
  if (!mojo::internal::Equals(this->css_style_sheets, other.css_style_sheets))
    return false;
  if (!mojo::internal::Equals(this->scripts, other.scripts))
    return false;
  if (!mojo::internal::Equals(this->xsl_style_sheets, other.xsl_style_sheets))
    return false;
  if (!mojo::internal::Equals(this->fonts, other.fonts))
    return false;
  if (!mojo::internal::Equals(this->other, other.other))
    return false;
  return true;
}

inline void ResourceTypeStatsDataView::GetImagesDataView(
    ResourceTypeStatDataView* output) {
  auto pointer = data_->images.Get();
  *output = ResourceTypeStatDataView(pointer, context_);
}
inline void ResourceTypeStatsDataView::GetCssStyleSheetsDataView(
    ResourceTypeStatDataView* output) {
  auto pointer = data_->css_style_sheets.Get();
  *output = ResourceTypeStatDataView(pointer, context_);
}
inline void ResourceTypeStatsDataView::GetScriptsDataView(
    ResourceTypeStatDataView* output) {
  auto pointer = data_->scripts.Get();
  *output = ResourceTypeStatDataView(pointer, context_);
}
inline void ResourceTypeStatsDataView::GetXslStyleSheetsDataView(
    ResourceTypeStatDataView* output) {
  auto pointer = data_->xsl_style_sheets.Get();
  *output = ResourceTypeStatDataView(pointer, context_);
}
inline void ResourceTypeStatsDataView::GetFontsDataView(
    ResourceTypeStatDataView* output) {
  auto pointer = data_->fonts.Get();
  *output = ResourceTypeStatDataView(pointer, context_);
}
inline void ResourceTypeStatsDataView::GetOtherDataView(
    ResourceTypeStatDataView* output) {
  auto pointer = data_->other.Get();
  *output = ResourceTypeStatDataView(pointer, context_);
}

template <typename StructPtrType>
ResourceUsageDataPtr ResourceUsageData::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->reports_v8_stats = mojo::internal::Clone(reports_v8_stats);
  rv->v8_bytes_allocated = mojo::internal::Clone(v8_bytes_allocated);
  rv->v8_bytes_used = mojo::internal::Clone(v8_bytes_used);
  rv->web_cache_stats = mojo::internal::Clone(web_cache_stats);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, ResourceUsageData>::value>::type*>
bool ResourceUsageData::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->reports_v8_stats, other.reports_v8_stats))
    return false;
  if (!mojo::internal::Equals(this->v8_bytes_allocated, other.v8_bytes_allocated))
    return false;
  if (!mojo::internal::Equals(this->v8_bytes_used, other.v8_bytes_used))
    return false;
  if (!mojo::internal::Equals(this->web_cache_stats, other.web_cache_stats))
    return false;
  return true;
}

inline void ResourceUsageDataDataView::GetWebCacheStatsDataView(
    ResourceTypeStatsDataView* output) {
  auto pointer = data_->web_cache_stats.Get();
  *output = ResourceTypeStatsDataView(pointer, context_);
}



}  // namespace mojom

namespace mojo {


template <>
struct  StructTraits<::mojom::ResourceTypeStat, ::mojom::ResourceTypeStatPtr> {
  static bool IsNull(const ::mojom::ResourceTypeStatPtr& input) { return !input; }
  static void SetToNull(::mojom::ResourceTypeStatPtr* output) { output->reset(); }
  static decltype(::mojom::ResourceTypeStat::count) count(
      const ::mojom::ResourceTypeStatPtr& input) {
    return input->count;
  }
  static decltype(::mojom::ResourceTypeStat::size) size(
      const ::mojom::ResourceTypeStatPtr& input) {
    return input->size;
  }
  static decltype(::mojom::ResourceTypeStat::live_size) live_size(
      const ::mojom::ResourceTypeStatPtr& input) {
    return input->live_size;
  }
  static decltype(::mojom::ResourceTypeStat::decoded_size) decoded_size(
      const ::mojom::ResourceTypeStatPtr& input) {
    return input->decoded_size;
  }

  static bool Read(::mojom::ResourceTypeStatDataView input, ::mojom::ResourceTypeStatPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::ResourceTypeStatPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::ResourceTypeStat, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojom::internal::ResourceTypeStat_Data);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::ResourceTypeStat_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojom::internal::ResourceTypeStat_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->count = CallWithContext(Traits::count, input, custom_context);
      result->size = CallWithContext(Traits::size, input, custom_context);
      result->live_size = CallWithContext(Traits::live_size, input, custom_context);
      result->decoded_size = CallWithContext(Traits::decoded_size, input, custom_context);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::ResourceTypeStat_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::ResourceTypeStatDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojom::ResourceTypeStats, ::mojom::ResourceTypeStatsPtr> {
  static bool IsNull(const ::mojom::ResourceTypeStatsPtr& input) { return !input; }
  static void SetToNull(::mojom::ResourceTypeStatsPtr* output) { output->reset(); }
  static decltype(::mojom::ResourceTypeStats::images)& images(
      ::mojom::ResourceTypeStatsPtr& input) {
    return input->images;
  }
  static decltype(::mojom::ResourceTypeStats::css_style_sheets)& css_style_sheets(
      ::mojom::ResourceTypeStatsPtr& input) {
    return input->css_style_sheets;
  }
  static decltype(::mojom::ResourceTypeStats::scripts)& scripts(
      ::mojom::ResourceTypeStatsPtr& input) {
    return input->scripts;
  }
  static decltype(::mojom::ResourceTypeStats::xsl_style_sheets)& xsl_style_sheets(
      ::mojom::ResourceTypeStatsPtr& input) {
    return input->xsl_style_sheets;
  }
  static decltype(::mojom::ResourceTypeStats::fonts)& fonts(
      ::mojom::ResourceTypeStatsPtr& input) {
    return input->fonts;
  }
  static decltype(::mojom::ResourceTypeStats::other)& other(
      ::mojom::ResourceTypeStatsPtr& input) {
    return input->other;
  }

  static bool Read(::mojom::ResourceTypeStatsDataView input, ::mojom::ResourceTypeStatsPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::ResourceTypeStatsPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::ResourceTypeStats, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojom::internal::ResourceTypeStats_Data);
    decltype(CallWithContext(Traits::images, input, custom_context)) in_images = CallWithContext(Traits::images, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojom::ResourceTypeStatPtr>(
        in_images, context);
    decltype(CallWithContext(Traits::css_style_sheets, input, custom_context)) in_css_style_sheets = CallWithContext(Traits::css_style_sheets, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojom::ResourceTypeStatPtr>(
        in_css_style_sheets, context);
    decltype(CallWithContext(Traits::scripts, input, custom_context)) in_scripts = CallWithContext(Traits::scripts, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojom::ResourceTypeStatPtr>(
        in_scripts, context);
    decltype(CallWithContext(Traits::xsl_style_sheets, input, custom_context)) in_xsl_style_sheets = CallWithContext(Traits::xsl_style_sheets, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojom::ResourceTypeStatPtr>(
        in_xsl_style_sheets, context);
    decltype(CallWithContext(Traits::fonts, input, custom_context)) in_fonts = CallWithContext(Traits::fonts, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojom::ResourceTypeStatPtr>(
        in_fonts, context);
    decltype(CallWithContext(Traits::other, input, custom_context)) in_other = CallWithContext(Traits::other, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojom::ResourceTypeStatPtr>(
        in_other, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::ResourceTypeStats_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojom::internal::ResourceTypeStats_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::images, input, custom_context)) in_images = CallWithContext(Traits::images, input, custom_context);
      typename decltype(result->images)::BaseType* images_ptr;
      mojo::internal::Serialize<::mojom::ResourceTypeStatPtr>(
          in_images, buffer, &images_ptr, context);
      result->images.Set(images_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->images.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null images in ResourceTypeStats struct");
      decltype(CallWithContext(Traits::css_style_sheets, input, custom_context)) in_css_style_sheets = CallWithContext(Traits::css_style_sheets, input, custom_context);
      typename decltype(result->css_style_sheets)::BaseType* css_style_sheets_ptr;
      mojo::internal::Serialize<::mojom::ResourceTypeStatPtr>(
          in_css_style_sheets, buffer, &css_style_sheets_ptr, context);
      result->css_style_sheets.Set(css_style_sheets_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->css_style_sheets.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null css_style_sheets in ResourceTypeStats struct");
      decltype(CallWithContext(Traits::scripts, input, custom_context)) in_scripts = CallWithContext(Traits::scripts, input, custom_context);
      typename decltype(result->scripts)::BaseType* scripts_ptr;
      mojo::internal::Serialize<::mojom::ResourceTypeStatPtr>(
          in_scripts, buffer, &scripts_ptr, context);
      result->scripts.Set(scripts_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->scripts.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null scripts in ResourceTypeStats struct");
      decltype(CallWithContext(Traits::xsl_style_sheets, input, custom_context)) in_xsl_style_sheets = CallWithContext(Traits::xsl_style_sheets, input, custom_context);
      typename decltype(result->xsl_style_sheets)::BaseType* xsl_style_sheets_ptr;
      mojo::internal::Serialize<::mojom::ResourceTypeStatPtr>(
          in_xsl_style_sheets, buffer, &xsl_style_sheets_ptr, context);
      result->xsl_style_sheets.Set(xsl_style_sheets_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->xsl_style_sheets.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null xsl_style_sheets in ResourceTypeStats struct");
      decltype(CallWithContext(Traits::fonts, input, custom_context)) in_fonts = CallWithContext(Traits::fonts, input, custom_context);
      typename decltype(result->fonts)::BaseType* fonts_ptr;
      mojo::internal::Serialize<::mojom::ResourceTypeStatPtr>(
          in_fonts, buffer, &fonts_ptr, context);
      result->fonts.Set(fonts_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->fonts.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null fonts in ResourceTypeStats struct");
      decltype(CallWithContext(Traits::other, input, custom_context)) in_other = CallWithContext(Traits::other, input, custom_context);
      typename decltype(result->other)::BaseType* other_ptr;
      mojo::internal::Serialize<::mojom::ResourceTypeStatPtr>(
          in_other, buffer, &other_ptr, context);
      result->other.Set(other_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->other.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null other in ResourceTypeStats struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::ResourceTypeStats_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::ResourceTypeStatsDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


template <>
struct  StructTraits<::mojom::ResourceUsageData, ::mojom::ResourceUsageDataPtr> {
  static bool IsNull(const ::mojom::ResourceUsageDataPtr& input) { return !input; }
  static void SetToNull(::mojom::ResourceUsageDataPtr* output) { output->reset(); }
  static decltype(::mojom::ResourceUsageData::reports_v8_stats) reports_v8_stats(
      const ::mojom::ResourceUsageDataPtr& input) {
    return input->reports_v8_stats;
  }
  static decltype(::mojom::ResourceUsageData::v8_bytes_allocated) v8_bytes_allocated(
      const ::mojom::ResourceUsageDataPtr& input) {
    return input->v8_bytes_allocated;
  }
  static decltype(::mojom::ResourceUsageData::v8_bytes_used) v8_bytes_used(
      const ::mojom::ResourceUsageDataPtr& input) {
    return input->v8_bytes_used;
  }
  static decltype(::mojom::ResourceUsageData::web_cache_stats)& web_cache_stats(
      ::mojom::ResourceUsageDataPtr& input) {
    return input->web_cache_stats;
  }

  static bool Read(::mojom::ResourceUsageDataDataView input, ::mojom::ResourceUsageDataPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::mojom::ResourceUsageDataPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::mojom::ResourceUsageData, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::mojom::internal::ResourceUsageData_Data);
    decltype(CallWithContext(Traits::web_cache_stats, input, custom_context)) in_web_cache_stats = CallWithContext(Traits::web_cache_stats, input, custom_context);
    size += mojo::internal::PrepareToSerialize<::mojom::ResourceTypeStatsPtr>(
        in_web_cache_stats, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::mojom::internal::ResourceUsageData_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::mojom::internal::ResourceUsageData_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      result->reports_v8_stats = CallWithContext(Traits::reports_v8_stats, input, custom_context);
      result->v8_bytes_allocated = CallWithContext(Traits::v8_bytes_allocated, input, custom_context);
      result->v8_bytes_used = CallWithContext(Traits::v8_bytes_used, input, custom_context);
      decltype(CallWithContext(Traits::web_cache_stats, input, custom_context)) in_web_cache_stats = CallWithContext(Traits::web_cache_stats, input, custom_context);
      typename decltype(result->web_cache_stats)::BaseType* web_cache_stats_ptr;
      mojo::internal::Serialize<::mojom::ResourceTypeStatsPtr>(
          in_web_cache_stats, buffer, &web_cache_stats_ptr, context);
      result->web_cache_stats.Set(web_cache_stats_ptr);
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::mojom::internal::ResourceUsageData_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::mojom::ResourceUsageDataDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // CHROME_COMMON_RESOURCE_USAGE_REPORTER_MOJOM_H_