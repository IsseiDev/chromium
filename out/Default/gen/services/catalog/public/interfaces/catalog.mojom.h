// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_CATALOG_PUBLIC_INTERFACES_CATALOG_MOJOM_H_
#define SERVICES_CATALOG_PUBLIC_INTERFACES_CATALOG_MOJOM_H_

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
#include "services/catalog/public/interfaces/catalog.mojom-shared.h"
#include "mojo/public/cpp/bindings/array.h"
#include "mojo/public/cpp/bindings/string.h"


namespace catalog {
namespace mojom {
class Catalog;
using CatalogPtr = mojo::InterfacePtr<Catalog>;
using CatalogPtrInfo = mojo::InterfacePtrInfo<Catalog>;
using CatalogRequest = mojo::InterfaceRequest<Catalog>;
using CatalogAssociatedPtr =
    mojo::AssociatedInterfacePtr<Catalog>;
using CatalogAssociatedPtrInfo =
    mojo::AssociatedInterfacePtrInfo<Catalog>;
using CatalogAssociatedRequest =
    mojo::AssociatedInterfaceRequest<Catalog>;

class Entry;
class EntryDataView;
using EntryPtr = mojo::InlinedStructPtr<Entry>;


class CatalogProxy;
class CatalogStub;

class CatalogRequestValidator;
class CatalogResponseValidator;

class  Catalog {
 public:
  static const char Name_[];
  static const uint32_t Version_ = 0;
  static const bool PassesAssociatedKinds_ = false;
  static const bool HasSyncMethods_ = true;

  using Proxy_ = CatalogProxy;
  using Stub_ = CatalogStub;

  using RequestValidator_ = CatalogRequestValidator;
  using ResponseValidator_ = CatalogResponseValidator;
  virtual ~Catalog() {}

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  virtual bool GetEntries(const base::Optional<std::vector<std::string>>& names, std::vector<EntryPtr>* entries);

  using GetEntriesCallback = base::Callback<void(std::vector<EntryPtr>)>;
  virtual void GetEntries(const base::Optional<std::vector<std::string>>& names, const GetEntriesCallback& callback) = 0;


  using GetEntriesProvidingClassCallback = base::Callback<void(std::vector<EntryPtr>)>;
  virtual void GetEntriesProvidingClass(const std::string& clazz, const GetEntriesProvidingClassCallback& callback) = 0;


  using GetEntriesConsumingMIMETypeCallback = base::Callback<void(std::vector<EntryPtr>)>;
  virtual void GetEntriesConsumingMIMEType(const std::string& mime_type, const GetEntriesConsumingMIMETypeCallback& callback) = 0;


  using GetEntriesSupportingSchemeCallback = base::Callback<void(std::vector<EntryPtr>)>;
  virtual void GetEntriesSupportingScheme(const std::string& protocol_scheme, const GetEntriesSupportingSchemeCallback& callback) = 0;
};

class  CatalogProxy
    : public Catalog,
      public NON_EXPORTED_BASE(mojo::internal::ControlMessageProxy) {
 public:
  explicit CatalogProxy(mojo::MessageReceiverWithResponder* receiver);
  bool GetEntries(const base::Optional<std::vector<std::string>>& names, std::vector<EntryPtr>* entries) override;
  void GetEntries(const base::Optional<std::vector<std::string>>& names, const GetEntriesCallback& callback) override;
  void GetEntriesProvidingClass(const std::string& clazz, const GetEntriesProvidingClassCallback& callback) override;
  void GetEntriesConsumingMIMEType(const std::string& mime_type, const GetEntriesConsumingMIMETypeCallback& callback) override;
  void GetEntriesSupportingScheme(const std::string& protocol_scheme, const GetEntriesSupportingSchemeCallback& callback) override;

  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

 private:
  mojo::internal::SerializationContext serialization_context_;
};
class  CatalogStub : public NON_EXPORTED_BASE(mojo::MessageReceiverWithResponderStatus) {
 public:
  CatalogStub();
  ~CatalogStub() override;
  void set_sink(Catalog* sink) { sink_ = sink; }
  Catalog* sink() { return sink_; }
  mojo::internal::SerializationContext* serialization_context() {
    return &serialization_context_;
  }

  bool Accept(mojo::Message* message) override;
  bool AcceptWithResponder(mojo::Message* message,
      mojo::MessageReceiverWithStatus* responder) override;

 private:
  Catalog* sink_;
  mojo::internal::SerializationContext serialization_context_;
  mojo::internal::ControlMessageHandler control_message_handler_;
};
class  CatalogRequestValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit CatalogRequestValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};
class  CatalogResponseValidator : public NON_EXPORTED_BASE(mojo::MessageFilter) {
 public:
  explicit CatalogResponseValidator(mojo::MessageReceiver* sink = nullptr);

  bool Accept(mojo::Message* message) override;
};


class  Entry {
 public:
  using DataView = EntryDataView;
  using Data_ = internal::Entry_Data;

  static EntryPtr New();

  template <typename U>
  static EntryPtr From(const U& u) {
    return mojo::TypeConverter<EntryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Entry>::Convert(*this);
  }

  Entry();
  ~Entry();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = EntryPtr>
  EntryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, Entry>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename UserType>
  static mojo::Array<uint8_t> Serialize(UserType* input) {
    return mojo::internal::StructSerializeImpl<
        EntryPtr, mojo::Array<uint8_t>>(input);
  }

  template <typename UserType>
  static bool Deserialize(const mojo::Array<uint8_t>& input,
                          UserType* output) {
    return mojo::internal::StructDeserializeImpl<
        EntryPtr, mojo::Array<uint8_t>>(
            input, output);
  }

  std::string name;
  std::string display_name;
};

class EntryDataView {
 public:
  EntryDataView() {}

  EntryDataView(
      internal::Entry_Data* data,
      mojo::internal::SerializationContext* context)
      : data_(data), context_(context) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadName(UserType* output) {
    auto pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
  inline void GetDisplayNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  bool ReadDisplayName(UserType* output) {
    auto pointer = data_->display_name.Get();
    return mojo::internal::Deserialize<mojo::String>(
        pointer, output, context_);
  }
 private:
  internal::Entry_Data* data_ = nullptr;
  mojo::internal::SerializationContext* context_ = nullptr;
};



}  // namespace mojom
}  // namespace catalog

namespace mojo {
namespace internal {
template <>
struct DataViewTraits<::catalog::mojom::EntryDataView> {
  using MojomType = ::catalog::mojom::EntryPtr;
};
}  // namespace internal
}  // namespace mojo

namespace catalog {
namespace mojom {





template <typename StructPtrType>
EntryPtr Entry::Clone() const {
  // Use StructPtrType to prevent the compiler from trying to compile this
  // without being asked.
  StructPtrType rv(New());
  rv->name = mojo::internal::Clone(name);
  rv->display_name = mojo::internal::Clone(display_name);
  return rv;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, Entry>::value>::type*>
bool Entry::Equals(const T& other) const {
  if (!mojo::internal::Equals(this->name, other.name))
    return false;
  if (!mojo::internal::Equals(this->display_name, other.display_name))
    return false;
  return true;
}

inline void EntryDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, context_);
}
inline void EntryDataView::GetDisplayNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->display_name.Get();
  *output = mojo::StringDataView(pointer, context_);
}



}  // namespace mojom
}  // namespace catalog

namespace mojo {


template <>
struct  StructTraits<::catalog::mojom::Entry, ::catalog::mojom::EntryPtr> {
  static bool IsNull(const ::catalog::mojom::EntryPtr& input) { return !input; }
  static void SetToNull(::catalog::mojom::EntryPtr* output) { output->reset(); }
  static decltype(::catalog::mojom::Entry::name)& name(
      ::catalog::mojom::EntryPtr& input) {
    return input->name;
  }
  static decltype(::catalog::mojom::Entry::display_name)& display_name(
      ::catalog::mojom::EntryPtr& input) {
    return input->display_name;
  }

  static bool Read(::catalog::mojom::EntryDataView input, ::catalog::mojom::EntryPtr* output);
};

namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::catalog::mojom::EntryPtr, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::catalog::mojom::Entry, UserType>;

  static size_t PrepareToSerialize(MaybeConstUserType& input,
                                   SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input))
      return 0;

    void* custom_context = CustomContextHelper<Traits>::SetUp(input, context);
    ALLOW_UNUSED_LOCAL(custom_context);

    size_t size = sizeof(::catalog::mojom::internal::Entry_Data);
    decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_name, context);
    decltype(CallWithContext(Traits::display_name, input, custom_context)) in_display_name = CallWithContext(Traits::display_name, input, custom_context);
    size += mojo::internal::PrepareToSerialize<mojo::String>(
        in_display_name, context);
    return size;
  }

  static void Serialize(MaybeConstUserType& input,
                        Buffer* buffer,
                        ::catalog::mojom::internal::Entry_Data** output,
                        SerializationContext* context) {
    if (CallIsNullIfExists<Traits>(input)) {
      *output = nullptr;
      return;
    }

    void* custom_context = CustomContextHelper<Traits>::GetNext(context);

    auto result =
          ::catalog::mojom::internal::Entry_Data::New(buffer);
      ALLOW_UNUSED_LOCAL(result);
      decltype(CallWithContext(Traits::name, input, custom_context)) in_name = CallWithContext(Traits::name, input, custom_context);
      typename decltype(result->name)::BaseType* name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_name, buffer, &name_ptr, context);
      result->name.Set(name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null name in Entry struct");
      decltype(CallWithContext(Traits::display_name, input, custom_context)) in_display_name = CallWithContext(Traits::display_name, input, custom_context);
      typename decltype(result->display_name)::BaseType* display_name_ptr;
      mojo::internal::Serialize<mojo::String>(
          in_display_name, buffer, &display_name_ptr, context);
      result->display_name.Set(display_name_ptr);
      MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
          result->display_name.is_null(),
          mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
          "null display_name in Entry struct");
    *output = result;

    CustomContextHelper<Traits>::TearDown(input, custom_context);
  }

  static bool Deserialize(::catalog::mojom::internal::Entry_Data* input,
                          UserType* output,
                          SerializationContext* context) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::catalog::mojom::EntryDataView data_view(input, context);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo

#endif  // SERVICES_CATALOG_PUBLIC_INTERFACES_CATALOG_MOJOM_H_